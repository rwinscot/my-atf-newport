/** @file

  Copyright (c) 2016-2018, Cavium Inc. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#include <cavm_common.h>
#include <platform_def.h>

int thunder_get_lmc_per_node(void)
{
	return 2;
}

int thunder_get_num_ecams_per_node(void)
{
	return 1;
}

int thunder_get_sata_count(void)
{
	return 0;
}

int thunder_get_iobn_count(void)
{
	return 1;
}

/* Return the highest GSER number, which can be configured as SATA */
int thunder_get_max_sata_gser(void)
{
	return 0;
}

/* No SATA on F95 */
int thunder_sata_to_gser(int ctrlr)
{
	return -1;
}

int thunder_sata_to_lane(int ctrlr)
{
	return -1;
}

int thunder_dram_is_lmc_enabled(unsigned node, unsigned lmc)
{
	union cavm_lmcx_dll_ctl2 lmcx_dll_ctl2;

	lmcx_dll_ctl2.u = CSR_READ(node, CAVM_LMCX_DLL_CTL2(lmc));

	return lmcx_dll_ctl2.cn9.dreset ? 0 : 1;
}

unsigned thunder_get_node_count(void)
{
	unsigned long node = cavm_numa_local();
	union cavm_ccs_ccpi_ctl ccs_ccpi_ctl;

	ccs_ccpi_ctl.u = CSR_READ(node, CAVM_CCS_CCPI_CTL);

	return (ccs_ccpi_ctl.s.enaoci > 1) ? 2 : 1;
}

/*******************************************************************************
 * Setup secondary CPU JUMP address from RESET
 ******************************************************************************/
void set_secondary_cpu_jump_addr(unsigned int bl1_base)
{
	/*
	 * Assembly for ROM memory:
	 *  d508711f        ic      ialluis
	 *  d503201f        nop
	 *  58000040        ldr     x0, 328 <branch_addr>
	 *  d61f0000        br      x0
	 *              branch_addr:
	 * Memory is little endain, so 64 bit constants have the first
	 * instruction in the low word
	 */
	CSR_WRITE(0, CAVM_ROM_MEMX(0), 0xd503201fd508711f);
	CSR_WRITE(0, CAVM_ROM_MEMX(1), 0xd61f000058000040);
	CSR_WRITE(0, CAVM_ROM_MEMX(2), (uint64_t)bl1_base);
}

int thunder_get_ccu_count(void)
{
	return 4;
}

int thunder_get_mpi_count(void)
{
	return 2;
}

int thunder_get_smmu_count(void)
{
	return 1;
}

int thunder_get_twsi_count(void)
{
	return 6;
}

int thunder_get_cpt_count(void)
{
	return 0;
}

int thunder_get_cgx_count(void)
{
	return 3;
}

int thunder_get_pem_count(void)
{
	return 1;
}

int thunder_get_gser_count(void)
{
	return 4;
}

int thunder_get_uaa_count(void)
{
	return 8;
}

int thunder_get_rvu_count(void)
{
	return 16;
}

/* Return number of lanes available for different QLMs. */
int plat_get_max_lane_num(int qlm)
{
	if (qlm == 3)
		return 2;
	return 4;
}

/* Return the CGX<->QLM mapping */
int plat_get_cgx_idx(int qlm)
{
	int idx;

	switch (qlm) {
	case 0:
		idx = 0;
		break;
	case 2:
		idx = 1;
		break;
	case 3:
		idx = 2;
		break;
	default:
		idx = -1;
		break;
	}

	return idx;
}

void plat_add_mmio_node(unsigned long node)
{
	unsigned long attr;
	int i, device_type_count;

	attr = MT_DEVICE | MT_RW | MT_SECURE;
	add_map_record(CSR_PA(node, CAVM_RST_PF_BAR0), CAVM_RST_PF_BAR0_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_RST_PF_BAR2), CAVM_RST_PF_BAR2_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_RST_PF_BAR4), CAVM_RST_PF_BAR4_SIZE, attr);

	device_type_count = thunder_get_ccu_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CSR_PA(node, CAVM_CCU_PF_BAR0(i)), CAVM_CCU_PF_BAR0_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_CCU_PF_BAR4(i)), CAVM_CCU_PF_BAR4_SIZE, attr);
	}
	add_map_record(CSR_PA(node, CAVM_CCS_PF_BAR0), CAVM_CCS_PF_BAR0_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_MIO_BOOT_PF_BAR0), CAVM_MIO_BOOT_PF_BAR0_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_MIO_EMM_PF_BAR0), CAVM_MIO_EMM_PF_BAR0_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_MIO_EMM_PF_BAR4), CAVM_MIO_EMM_PF_BAR4_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_FUS_BAR_E_FUS_PF_BAR0),
		       CAVM_FUS_BAR_E_FUS_PF_BAR0_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_FUSF_BAR_E_FUSF_PF_BAR0),
		       CAVM_FUSF_BAR_E_FUSF_PF_BAR0_SIZE, attr);
#if TRUSTED_BOARD_BOOT
	/*
	 * BDK uses CPC RAM memory as key memory.
	 * This is indicated by storing the ROTPK at TRUST-ROT-ADDR,
	 * which is in range of CPC_RAM_MEMX. Map CPC RAM as MT_RO
	 * to allow read of ROTPK provided by BDK
	 */
	cavm_cpc_const_t cpc_const;
	int cpc_ram_size;

	/* Calculate CPC RAM size based on a number of 16KB memory regions */
	cpc_const.u = CSR_READ(node, CAVM_CPC_CONST);
	cpc_ram_size = cpc_const.s.mem_regions * 0x4000;

	add_map_record(CSR_PA(node, CAVM_CPC_RAM_MEMX(0)),
		       cpc_ram_size, (MT_DEVICE | MT_RO | MT_SECURE));
#endif

	device_type_count = thunder_get_mpi_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CSR_PA(node, CAVM_MPI_PF_BAR0(i)), CAVM_MPI_PF_BAR0_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_MPI_PF_BAR4(i)), CAVM_MPI_PF_BAR0_SIZE, attr);
	}
	add_map_record(CSR_PA(node, CAVM_GIC_PF_BAR2), CAVM_GIC_PF_BAR2_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_GIC_PF_BAR4), CAVM_GIC_PF_BAR4_SIZE, attr);

	device_type_count = thunder_get_smmu_count();
	for (i = 0; i < device_type_count; i++)
		add_map_record(CSR_PA(node, CAVM_SMMUX_PF_BAR0(i)), CAVM_SMMUX_PF_BAR0_SIZE, attr);

	add_map_record(CSR_PA(node, CAVM_GTI_PF_BAR0), CAVM_GTI_PF_BAR0_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_GTI_PF_BAR4), CAVM_GTI_PF_BAR4_SIZE, attr);

	device_type_count = thunder_get_lmc_per_node();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CSR_PA(node, CAVM_LMCX_PF_BAR0(i)), CAVM_LMCX_PF_BAR0_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_LMCX_PF_BAR4(i)), CAVM_LMCX_PF_BAR4_SIZE, attr);
	}

	device_type_count = thunder_get_twsi_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CSR_PA(node, CAVM_MIO_TWSX_PF_BAR0(i)), CAVM_MIO_TWSX_PF_BAR0_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_MIO_TWSX_PF_BAR4(i)), CAVM_MIO_TWSX_PF_BAR4_SIZE, attr);
	}

	device_type_count = thunder_get_cpt_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CSR_PA(node, CAVM_CPT_PF_BAR0(i)), CAVM_CPT_PF_BAR0_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_CPT_PF_BAR4(i)), CAVM_CPT_PF_BAR4_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_CPT_VFX_BAR0(i, 0)), 64*CAVM_CPT_VFX_BAR0_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_CPT_VFX_BAR4(i, 0)), 64*CAVM_CPT_VFX_BAR4_SIZE, attr);
	}

	device_type_count = thunder_get_cgx_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CSR_PA(node, CAVM_CGX_PF_BAR0(i)), CAVM_CGX_PF_BAR0_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_CGX_PF_BAR4(i)), CAVM_CGX_PF_BAR4_SIZE, attr);
	}

	device_type_count = thunder_get_pem_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CSR_PA(node, CAVM_PEMX_PF_BAR0(i)), CAVM_PEMX_PF_BAR0_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_PEMX_PF_BAR4(i)), CAVM_PEMX_PF_BAR4_SIZE, attr);
	}

	device_type_count = thunder_get_gser_count();
	for (i = 0; i < device_type_count; i++)
		add_map_record(CSR_PA(node, CAVM_GSERN_BAR_E_GSERNX_PF_BAR0(i)),
			       CAVM_GSERN_BAR_E_GSERNX_PF_BAR0_SIZE, attr);

	add_map_record(CSR_PA(node, CAVM_DAP_PF_BAR0), CAVM_DAP_PF_BAR0_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_DAP_PF_BAR2), CAVM_DAP_PF_BAR2_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_GPIO_PF_BAR0), CAVM_GPIO_PF_BAR0_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_GPIO_PF_BAR4), CAVM_GPIO_PF_BAR4_SIZE, attr);

	device_type_count = thunder_get_uaa_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CSR_PA(node, CAVM_UAAX_PF_BAR0(i)), CAVM_UAAX_PF_BAR0_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_UAAX_PF_BAR4(i)), CAVM_UAAX_PF_BAR4_SIZE, attr);
	}

	device_type_count = thunder_get_num_ecams_per_node();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CSR_PA(node, CAVM_ECAM_PF_BAR0(i)), CAVM_ECAM_PF_BAR0_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_ECAM_PF_BAR2(i)), CAVM_ECAM_PF_BAR2_SIZE, attr);
	}

	device_type_count = thunder_get_sata_count();
	for (i = 0; i < device_type_count; ++i) {
		add_map_record(CSR_PA(node, CAVM_SATAX_PF_BAR0(i)), CAVM_SATAX_PF_BAR0_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_SATAX_PF_BAR2(i)), CAVM_SATAX_PF_BAR2_SIZE, attr);
	}

	add_map_record(CSR_PA(node, CAVM_ROM_PF_BAR0), CAVM_ROM_PF_BAR0_SIZE, attr);

	device_type_count = thunder_get_iobn_count();
	for (i = 0; i < device_type_count; ++i) {
		add_map_record(CSR_PA(node, CAVM_IOBN_BAR_E_IOBNX_PF_BAR0_CN9(i)), CAVM_IOBN_BAR_E_IOBNX_PF_BAR0_CN9_SIZE, attr);
		add_map_record(CSR_PA(node, CAVM_IOBN_BAR_E_IOBNX_PF_BAR4(i)), CAVM_IOBN_BAR_E_IOBNX_PF_BAR4_SIZE, attr);
	}

	add_map_record(CSR_PA(node, CAVM_RVU_PF_BAR0(0)), CAVM_RVU_PF_BAR0_SIZE, attr);
	device_type_count = thunder_get_rvu_count();
	for (i = 0; i < device_type_count; ++i)
		add_map_record(CSR_PA(node, CAVM_RVU_PFX_VFX_BAR2(i, 0)), CAVM_RVU_PFX_VFX_BAR2_SIZE, attr);

	/* Add regions for NIX/NPA used in rvu init */
	add_map_record(CSR_PA(node, CAVM_RVU_PF_BAR0(0) +
				CAVM_RVU_BLOCK_ADDR_E_NIXX(0) * CAVM_RVU_PF_BAR0_SIZE),
				CAVM_RVU_PF_BAR0_SIZE, attr);
	add_map_record(CSR_PA(node, CAVM_RVU_PF_BAR0(0) +
				CAVM_RVU_BLOCK_ADDR_E_NPA * CAVM_RVU_PF_BAR0_SIZE),
				CAVM_RVU_PF_BAR0_SIZE, attr);

	/*
	 * Shared memory configuration.
	 * Map additional memory used by RVU.
	 * Do not use add_map_record, it will round size up
	 */
	mmap_add_region(RVU_MEM_BASE, RVU_MEM_BASE,
			RVU_MEM_SIZE, (MT_MEMORY | MT_RW | MT_NS));
}