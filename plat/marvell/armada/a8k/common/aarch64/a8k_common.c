/*
 * Copyright (C) 2018 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <plat_marvell.h>


/* MMU entry for internal (register) space access */
#define MAP_DEVICE0	MAP_REGION_FLAT(DEVICE0_BASE,			\
					DEVICE0_SIZE,			\
					MT_DEVICE | MT_RW | MT_SECURE)

/* MMU entry for PCIe ECAM range */
#define MAP_PCIE_ECAM_REG	MAP_REGION_FLAT(PCIE_ECAM_BASE,		\
						PCIE_ECAM_SIZE,		\
						MT_DEVICE | MT_RW | MT_SECURE)

/*
 * Table of regions for various BL stages to map using the MMU.
 */
#if IMAGE_BL1
const mmap_region_t plat_marvell_mmap[] = {
	MARVELL_MAP_SECURE_RAM,
	MAP_DEVICE0,
	{0}
};
#endif
#if IMAGE_BL2
const mmap_region_t plat_marvell_mmap[] = {
	MARVELL_MAP_SECURE_RAM,
	MAP_DEVICE0,
	MARVELL_MAP_DRAM,
#ifdef SPD_opteed
	MARVELL_MAP_OPTEE_CORE_MEM,
	MARVELL_OPTEE_PAGEABLE_LOAD_MEM,
#endif
	{0}
};
#endif

#if IMAGE_BL2U
const mmap_region_t plat_marvell_mmap[] = {
	MARVELL_MAP_SECURE_RAM,
	MAP_DEVICE0,
	{0}
};
#endif

#if IMAGE_BLE
const mmap_region_t plat_marvell_mmap[] = {
	MAP_DEVICE0,
	{0}
};
#endif

#if IMAGE_BL31
const mmap_region_t plat_marvell_mmap[] = {
	MARVELL_MAP_SECURE_RAM,
	MAP_DEVICE0,
#ifdef MVEBU_PCIE_ECAM_WA
	MAP_PCIE_ECAM_REG,
#endif
	MARVELL_MAP_DRAM,
	{0}
};
#endif
#if IMAGE_BL32
const mmap_region_t plat_marvell_mmap[] = {
	MARVELL_MAP_SECURE_RAM,
	MAP_DEVICE0,
	{0}
};
#endif

MARVELL_CASSERT_MMAP;
