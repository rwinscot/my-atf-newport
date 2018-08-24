/** @file

  Copyright (c) 2018, Marvell International Ltd. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#include <debug.h>
#include <assert.h>
#include <context.h>
#include <platform.h>
#include <platform_def.h>
#include <platform_setup.h>
#include <cavm_flr.h>

/* Global structures for FLR _SEL handling */
rvu_af_bar2_sel_t blk_af_bar2_sel[BLKADDR_MAX];

static struct blk_entry block_map[] = {
	{ .enabled = 1, .block = BLKADDR_RVUM },
	{ .enabled = 0, .block = BLKADDR_LMT },
	{ .enabled = 0, .block = BLKADDR_MSIX },
	{ .enabled = 1, .block = BLKADDR_NPA },
	{ .enabled = 1, .block = BLKADDR_NIX0 },
	{ .enabled = 0, .block = BLKADDR_NIX1 },
	{ .enabled = 0, .block = BLKADDR_NPC },
	{ .enabled = 1, .block = BLKADDR_SSO },
	{ .enabled = 1, .block = BLKADDR_SSOW },
	{ .enabled = 1, .block = BLKADDR_TIM },
	{ .enabled = 1, .block = BLKADDR_CPT0 },
	{ .enabled = 0, .block = BLKADDR_CPT1 },
	{ .enabled = 0, .block = BLKADDR_NDC0 },
	{ .enabled = 0, .block = BLKADDR_NDC1 },
	{ .enabled = 0, .block = BLKADDR_NDC2 },
	{ 0 },
};

static inline uint64_t read_gp_reg(void *h, uint64_t *mask, uint8_t *r_id)
{
	assert(*r_id < 30);

	return (read_ctx_reg(get_gpregs_ctx(h), (*r_id)*GP_REG_OFFSET) & *mask);
}

static inline void write_gp_reg(void *h, uint64_t *mask, uint8_t *r_id, uint64_t val)
{
	assert(*r_id < 30);

	write_ctx_reg(get_gpregs_ctx(h), (*r_id)*GP_REG_OFFSET, (val & *mask));
}

static inline int is_block_disabled(int blk_id)
{
	assert(blk_id >= 0 && (blk_id < (sizeof(block_map) / sizeof(struct blk_entry))));

	return (!(block_map[blk_id].enabled));
}

static inline int is_flr_wa_applicable(void) {
	uint64_t midr;

	/* Mask out minor revision bits */
	midr = read_midr() & MIDR_FLR_MASK;

	return (OCTEONTX2_CN96XX_MIDR == midr);
}

static int alias_handler(void *ctx_h, uintptr_t pa, uint64_t *mask, uint8_t *rt_id, uint8_t w_flag)
{
	int blk_id, lf_slot, addr, rc;
	uint64_t *pa_bar2, pf, func;

	assert(pa != 0);
	assert(ctx_h != NULL);
	assert(mask != NULL);
	assert(rt_id != NULL);

	/* Extract BLK from PA */
	blk_id = RVU_AF_ADDR_S_BLK(pa);

	/* Validate blk_id, handle access to not existing CSR */
	if (is_block_disabled(blk_id))
		return -1;

	/* Validate the alias_ena bit */
	if (!(blk_af_bar2_sel[blk_id].s.alias_ena)) {
		INFO("(blk)_AF_BAR2_SEL[ALIAS_ENA] not set for blk_id=%d, requested %s\n",
		      blk_id, w_flag ? "write" : "read");
		/* write ignored, read as 0 */
		if (!w_flag)
			write_gp_reg(ctx_h, mask, rt_id, 0);

		return 0;
	}

	/* Extract PF and FUNC from AF_BAR2_SEL */
	pf = RVU_PF_FUNC_S_PF(blk_af_bar2_sel[blk_id].s.alias_pf_func);
	func = RVU_PF_FUNC_S_FUNC(blk_af_bar2_sel[blk_id].s.alias_pf_func);

	/* Extract LF_SLOT and ADDR from PA */
	lf_slot = RVU_FUNC_ADDR_S_LF_SLOT(pa);
	addr = RVU_FUNC_ADDR_S_ADDR(pa);

	/* Construct the BAR2 PA address based on the (blk)_AF_BAR2_SEL and PA */
	pa_bar2 = (uint64_t *)(RVU_PFX_FUNCX_BAR2(pf, func) |
		   (blk_id << RVU_AF_ADDR_S_BLK_SHIFT) |
		   (lf_slot << RVU_FUNC_ADDR_S_LF_SLOT_SHIFT) |
		   (addr << RVU_FUNC_ADDR_S_ADDR_SHIFT));

	/*
	 * Map dynamically given memory.
	 * Exclude case for func != 0, which is already mapped
	 * (required by earlier stage RVU code).
	 * Consider mapping func == 0 dynamically for cavm_rvu.c purposes.
	 */
	if (func != 0) {
		rc = mmap_add_dynamic_region(RVU_PFX_FUNCX_BAR2(pf, func),
					     RVU_PFX_FUNCX_BAR2(pf, func),
					     RVU_PF_FUNC_BAR2_SIZE,
					     MT_DEVICE | MT_RW | MT_SECURE);
		if (rc) {
			ERROR("Unable to map memory rc=%d, addr=0x%llx, size=0x%llx\n",
				rc, RVU_PFX_FUNCX_BAR2(pf, func), RVU_PF_FUNC_BAR2_SIZE);
			return rc;
		}
	}

	if (w_flag) {
		/* If it was write, the value to store is saved at Rt */
		*pa_bar2 = read_gp_reg(ctx_h, mask, rt_id);

		INFO("%s: Write: addr=0x%p, val=0x%lx\n",
		     __func__, pa_bar2, (*pa_bar2 & *mask));
	} else {
		/*
		 * On reads, Rt is the register that is returned,
		 * Rn stores requested address, as well as FAR_EL3.
		 * Write proper structure field at Rt.
		 */
		write_gp_reg(ctx_h, mask, rt_id, *pa_bar2);
		INFO("%s: Read:  addr=0x%p, val=0x%lx",
		     __func__, pa_bar2, (*pa_bar2 & *mask));
	}

	/* Unmap this region */
	if (func != 0) {
		rc = mmap_remove_dynamic_region(RVU_PFX_FUNCX_BAR2(pf, func),
						RVU_PF_FUNC_BAR2_SIZE);
		if (rc) {
			ERROR("Unable to remove mapped memory addr=0x%llx, size=0x%llx\n",
				RVU_PFX_FUNCX_BAR2(pf, func), RVU_PF_FUNC_BAR2_SIZE);
			return rc;
		}
	}

	return 0;
}

static int sel_handler(void *ctx_h, uintptr_t pa, uint64_t *mask, uint8_t *rt_id, uint8_t w_flag)
{
	int blk_id;

	/* Validate input args */
	assert(pa != 0);
	assert(ctx_h != NULL);
	assert(mask != NULL);
	assert(rt_id != NULL);

	/* Extract BLK from PA */
	blk_id = RVU_AF_ADDR_S_BLK(pa);

	/* Validate blk_id, handle access to not existing CSR */
	if (is_block_disabled(blk_id))
		return -1;

	if (w_flag) {
		/* If it was write, the value to store is saved at Rt */
		blk_af_bar2_sel[blk_id].u = read_gp_reg(ctx_h, mask, rt_id);

		INFO("%s: Write: blk_id=%d, blk_af_bar2_sel.u=0x%lx\n",
		     __func__, blk_id, (blk_af_bar2_sel[blk_id].u & *mask));
	} else {
		/*
		 * On reads, Rt is the register that is returned,
		 * Rn stores requested address, as well as FAR_EL3.
		 * Write proper structure field at Rt.
		 */
		write_gp_reg(ctx_h, mask, rt_id, blk_af_bar2_sel[blk_id].u);
		INFO("%s: Read: blk_id=%d, blk_af_bar2_sel_wa.u=0x%lx\n",
		     __func__, blk_id, (blk_af_bar2_sel[blk_id].u & *mask));
	}

	return 0;
}

static int validate_opcode(uint32_t opcode, uint64_t *size_mask, uint8_t *rt_offset)
{

	/*
	 * Currently supported is LDx/STx instruction family.
	 * TODO: Add support for LDx/STx PAIR/vector instructions.
	 */
	if (OPCODE_LD_ST(opcode) != OPCODE_LD_ST_VAL)
		return -1;

	/* Check for instruction size (applicable for LD/ST only) */
	*size_mask = 0x0;
	switch (OPCODE_SIZE(opcode)) {
		case OPCODE_SIZE_1B:
			*size_mask = UINT8_MAX;
			break;
		case OPCODE_SIZE_2B:
			*size_mask = UINT16_MAX;
			break;
		case OPCODE_SIZE_4B:
			*size_mask = UINT32_MAX;
			break;
		case OPCODE_SIZE_8B:
			*size_mask = UINT64_MAX;
			break;
		default:
			ERROR("Unsupported size mask=0x%x\n", OPCODE_SIZE(opcode));
			return -1;
	}

	/* Extract RT register offset from opcode */
	*rt_offset = OPCODE_RT(opcode);

	return 0;
}

void cavm_trap_handler(void *ctx_handle)
{
	uint64_t reg_el3, size_mask, pa;
	uint8_t rt_offset, w_flag;
	int rc;

	assert(ctx_handle != NULL);

	/*
	 * Sanity check for CAVIUM_IO_TRAP decoder.
	 * Only in this case ESR_EL3[WnR] exist in ISS
	 */
	reg_el3 = read_esr_el3();
	assert(EC_BITS(reg_el3) == EC_CAVIUM_IO_TRAP);

	/* Read write flag */
	w_flag = !!(reg_el3 & ESR_WNR_MASK);

	/* Check for FAR_EL3 validity */
	if (!(reg_el3 & ESR_FAR_ELX_VALID_MASK)) {
		ERROR("Invalid FAR_EL3, unable to get address that came from EL%lu\n",
		      GET_EL(read_spsr_el3()));
		panic();
	}

	/* FAR_EL3 stores PA, according to HW team feedback,
	 * so there's no need for VA to PA translation */
	pa = read_far_el3();
	if (pa == 0) {
		ERROR("Invalid PA 0x%lx from EL%lu\n", pa, GET_EL(read_spsr_el3()));
		panic();
	}

	/* Extract and validate opcode */
	reg_el3 = read_cvmtrapopc_el3();
	rc = validate_opcode(CAVM_TRAPOPC_INSN(reg_el3), &size_mask, &rt_offset);
	if (rc) {
		ERROR("Unsupported opcode=0x%llx, please contact firmware team\n",
		      CAVM_TRAPOPC_INSN(reg_el3));
		panic();
	}

	/*
	 * Determine handle type based on REGSET.
	 * Future implementation of trap handlers should be placed here.
	 */
	switch (CAVM_TRAPOPC_REGSET(reg_el3)) {
		case AP_CVM_TRAPOPC_EL3_REGSET_RVU_SEL:
			rc = sel_handler(ctx_handle, pa, &size_mask, &rt_offset, w_flag);
			break;
		case AP_CVM_TRAPOPC_EL3_REGSET_RVU_ALIAS:
			rc = alias_handler(ctx_handle, pa, &size_mask, &rt_offset, w_flag);
			break;
		default:
			rc = -1;
			break;
	}

	if (rc) {
		ERROR("Unable to handle %s PA=0x%lx\n", w_flag ? "write to" : "read from", pa);
		panic();
	}

	return;
}

void plat_flr_init(void)
{
	uint64_t trapaddr_el3, trapaddrena_el3;
	cavm_trapctl_el3_t trapctl_el3;

	if (!is_flr_wa_applicable())
		return;

	/*
	 * Perform trap configuration of (blk)_AF_BAR2_SEL registers,
	 * take address for RVU_AF_BAR2_SEL, mask out blk, match load and store
	 */
	trapaddr_el3 = (RVU_AF_BAR2_SEL | (3ull << 62));
	trapaddr_el3 &= ~(RVU_AF_ADDR_S_BLK_MASK << RVU_AF_ADDR_S_BLK_SHIFT);

	/* Trap selected address, ignoring only block */
	trapaddrena_el3 = ~(RVU_AF_ADDR_S_BLK_MASK << RVU_AF_ADDR_S_BLK_SHIFT);

	/* Trap configuration */
	trapctl_el3.u = read_cvmtrapctl4_el3();
	if (trapctl_el3.s.mtype != 1) {
		ERROR("Trap not on physical address, mtype = %x\n", trapctl_el3.s.mtype);
		return;
	}

	/* Trap accesses from EL2 and NS EL1/EL0 */
	trapctl_el3.s.el2 = 1;
	trapctl_el3.s.el1ns = 1;
	trapctl_el3.s.el0ns = 1;

	/* Trap to EL3 on a match */
	trapctl_el3.s.action = 0;
	trapctl_el3.s.ena = 1;

	/* Write configuration - for _SEL, use 4 reg set */
	write_cvmtrapaddr4_el3(trapaddr_el3);
	write_cvmtrapaddrena4_el3(trapaddrena_el3);
	write_cvmtrapctl4_el3(trapctl_el3.u);

	/* Clear variables */
	trapaddr_el3 = 0;
	trapaddrena_el3 = 0;
	trapctl_el3.u = 0;

	/*
	 * Perform trap configuration of (blk)_AF_BAR2_ALIAS registers,
	 * take address for RVU_AF_BAR2_ALIAS, mask out blk, match load and store
	 */
	trapaddr_el3 = (RVU_AF_BAR2_ALIAS | (3ull << 62));
	trapaddr_el3 &= ~(RVU_AF_ADDR_S_BLK_MASK << RVU_AF_ADDR_S_BLK_SHIFT);

	/*
	 * Trap selected address, ignoring block, RVU_FUNC_ADDR_S[LF_SLOT]
	 * and RVU_FUNC_ADDR_S[ADDR]
	 */
	trapaddrena_el3 = ~((RVU_AF_ADDR_S_BLK_MASK << RVU_AF_ADDR_S_BLK_SHIFT) |
			    (RVU_FUNC_ADDR_S_LF_SLOT_MASK << RVU_FUNC_ADDR_S_LF_SLOT_SHIFT) |
			    (RVU_FUNC_ADDR_S_ADDR_MASK << RVU_FUNC_ADDR_S_ADDR_SHIFT));

	/* Trap configuration */
	trapctl_el3.u = read_cvmtrapctl5_el3();
	if (trapctl_el3.s.mtype != 1) {
		ERROR("Trap not on physical address, mtype = %x\n", trapctl_el3.s.mtype);
		return;
	}

	/* Trap accesses from EL2 and NS EL1/EL0 */
	trapctl_el3.s.el2 = 1;
	trapctl_el3.s.el1ns = 1;
	trapctl_el3.s.el0ns = 1;

	/* Trap to EL3 on a match */
	trapctl_el3.s.action = 0;
	trapctl_el3.s.ena = 1;

	/* Write configuration - for _ALIAS, use 5 reg set */
	write_cvmtrapaddr5_el3(trapaddr_el3);
	write_cvmtrapaddrena5_el3(trapaddrena_el3);
	write_cvmtrapctl5_el3(trapctl_el3.u);
}