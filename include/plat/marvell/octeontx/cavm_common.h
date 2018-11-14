/** @file

  Copyright (c) 2016-2018, Marvell International Ltd. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef __CAVM_COMMON_H__
#define __CAVM_COMMON_H__

#include <stdint.h>
#include <xlat_tables_v2.h>
#include <arch_helpers.h>
#include <stddef.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#include "cavm-arch.h"
#pragma GCC diagnostic pop

#define MIDR_REVISION_MASK      0xf
#define MIDR_REVISION(midr)     ((midr) & MIDR_REVISION_MASK)
#define MIDR_PARTNUM_SHIFT      4
#define MIDR_PARTNUM_MASK       (0xfff << MIDR_PARTNUM_SHIFT)
#define MIDR_PARTNUM(midr)      \
        (((midr) & MIDR_PARTNUM_MASK) >> MIDR_PARTNUM_SHIFT)

#define T81PARTNUM 0xA2
#define T83PARTNUM 0xA3
#define T98PARTNUM 0xB1
#define T96PARTNUM 0xB2
#define F95PARTNUM 0xB3

/* Boot type definitions */
#define OCTEONTX_BOOT_UNSUPPORTED	1
#define OCTEONTX_BOOT_REMOTE		10
#define OCTEONTX_BOOT_SPI		11
#define OCTEONTX_BOOT_EMMC		12

#undef AP_CVMCTL_EL1
#undef AP_CVM_ACCESS_EL1
#undef AP_CVMMEMCTL0_EL1
#undef AP_CVMMEMCTL1_EL1
#undef AP_CVM_ACCESS_EL2
#undef AP_CVM_ACCESS_EL3

#define AP_CVMCTL_EL1		S3_0_C11_C0_0
#define AP_CVM_ACCESS_EL1	S3_0_C11_C0_3
#define AP_CVMMEMCTL0_EL1	S3_0_C11_C0_4
#define AP_CVMMEMCTL1_EL1	S3_0_C11_C0_5
#define AP_CVM_ACCESS_EL2	S3_4_C11_C0_3
#define AP_CVM_ACCESS_EL3	S3_6_C11_C0_3

DEFINE_RENAME_SYSREG_RW_FUNCS(cvmctl_el1, AP_CVMCTL_EL1)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvmmemctl0_el1, AP_CVMMEMCTL0_EL1)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvmmemctl1_el1, AP_CVMMEMCTL1_EL1)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvm_access_el1, AP_CVM_ACCESS_EL1)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvm_access_el2, AP_CVM_ACCESS_EL2)
DEFINE_RENAME_SYSREG_RW_FUNCS(cvm_access_el3, AP_CVM_ACCESS_EL3)

#define IS_OCTEONTX_PASS(midr, partnum, hi, low)			\
	((((midr) >> MIDR_PN_SHIFT & MIDR_PN_MASK) == (partnum)) &&	\
	 (((midr) >> MIDR_VAR_SHIFT & MIDR_VAR_MASK) == (hi) - 1) &&	\
	 (((midr) >> MIDR_REV_SHIFT & MIDR_REV_MASK) == (low)))

/* Utils macro for fuses usage */
#define FUSE_BIT_TO_BYTE_ADDR_SHIFT	0x3
#define FUSE_BIT_TO_BYTE_ADDR(addr)	((addr) >> FUSE_BIT_TO_BYTE_ADDR_SHIFT)
#define FUSE_HI_ADDR_SHIFT		0x8
#define FUSE_HI_ADDR(addr)		((addr) >> FUSE_HI_ADDR_SHIFT)
#define FUSE_BYTE_ADDR_MASK		0x7
#define FUSE_BIT_SET			0x1
#define FUSE_GET_VAL(dat, fuse)		(((uint8_t)dat) >> ((fuse) & FUSE_BYTE_ADDR_MASK) & FUSE_BIT_SET)


/* In Mhz */
#define OCTEONTX_SYSCNT_FREQ	100ull

#define PCI_MSIX_CAP_ID		0x11

#define SMMU_NUM_CONTEXTS	0x80

#define set_bit(reg, bit) reg |= (1ULL<<(bit))
#define unset_bit(reg, bit) reg &= ~(1ULL<<(bit))

void add_map_record(unsigned long addr, unsigned long size, mmap_attr_t attr);

void octeontx_pci_init(void);
void octeontx_rvu_init();
int octeontx2_clear_lf_to_pf_mapping();
void plat_add_mmio_map(void);
void octeontx_io_setup(void);
void octeontx_security_setup(void);

uint64_t octeontx_dram_size();
void octeontx_cpu_setup(void);
extern void *fdt_ptr;
void octeontx_gic_driver_init(void);
void octeontx_gic_init(void);
void octeontx_gic_pcpu_init(void);
void octeontx_gic_cpuif_enable(void);
void octeontx_gic_cpuif_disable(void);
unsigned int octeontx_calc_core_pos(unsigned long mpidr);

int octeontx_twsi_send(unsigned int twsi_num,
			uint16_t addr, const uint8_t *buffer, size_t size);
int octeontx_twsi_recv(unsigned int twsi_num,
			uint16_t addr, uint8_t *buffer, size_t size);
void sata_ipm_quirk(void);

void octeontx_configure_mmc_security(int secure);

void l2c_flush(void);

void plat_flr_init(void);

/**
 * Builds a bit mask given the required size in bits.
 *
 * @param bits   Number of bits in the mask
 * @return The mask
 */
static inline uint64_t octeontx_build_mask(uint64_t bits)
{
	if (bits == 64)
		return -1;

	return ~((~0x0ull) << bits);
}

/**
 * Extract bits out of a number
 *
 * @param input  Number to extract from
 * @param lsb    Starting bit, least significant (0-63)
 * @param width  Width in bits (1-64)
 *
 * @return Extracted number
 */
static inline uint64_t octeontx_bit_extract(uint64_t input, int lsb, int width)
{
    uint64_t result = input >> lsb;
    result &= octeontx_build_mask(width);
    return result;
}

/**
 * Insert bits into a number
 *
 * @param original Original data, before insert
 * @param input    Data to insert
 * @param lsb    Starting bit, least significant (0-63)
 * @param width  Width in bits (1-64)
 *
 * @return Number with inserted bits
 */
static inline uint64_t octeontx_bit_insert(uint64_t original, uint64_t input, int lsb, int width)
{
    uint64_t mask = octeontx_build_mask(width);
    uint64_t result = original & ~(mask << lsb);
    result |= (input & mask) << lsb;
    return result;
}



#endif /* __CAVM_COMMON_H__ */
