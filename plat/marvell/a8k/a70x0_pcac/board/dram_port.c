/*
 * Copyright (C) 2016 - 2018 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */
#include <arch_helpers.h>
#include <debug.h>
#include <mv_ddr_if.h>
#include <plat_marvell.h>

/*
 * This function may modify the default DRAM parameters
 * based on information received from SPD or bootloader
 * configuration located on non volatile storage
 */
void plat_dram_update_topology(void)
{
	INFO("Gathering DRAM information\n");
}

/*
 * This struct provides the DRAM training code with
 * the appropriate board DRAM configuration
 */
static struct mv_ddr_topology_map board_topology_map = {
/* FIXME: MISL board 2CS 4Gb x8 devices of micron - 2133P */
	DEBUG_LEVEL_ERROR,
	0x1, /* active interfaces */
	/* cs_mask, mirror, dqs_swap, ck_swap X subphys */
	{ { { {0x1, 0x0, 0, 0},
	      {0x1, 0x0, 0, 0},
	      {0x1, 0x0, 0, 0},
	      {0x1, 0x0, 0, 0},
	      {0x1, 0x0, 0, 0},
	      {0x1, 0x0, 0, 0},
	      {0x1, 0x0, 0, 0},
	      {0x1, 0x0, 0, 0},
	      {0x1, 0x0, 0, 0} },
	   SPEED_BIN_DDR_2400R,		/* speed_bin */
	   MV_DDR_DEV_WIDTH_16BIT,	/* sdram device width */
	   MV_DDR_DIE_CAP_4GBIT,	/* die capacity */
	   MV_DDR_FREQ_SAR,		/* frequency */
	   0, 0,			/* cas_l, cas_wl */
	   MV_DDR_TEMP_LOW} },		/* temperature */
	BUS_MASK_32BIT,			/* subphys mask */
	MV_DDR_CFG_DEFAULT,		/* ddr configuration data source */
	{ {0} },			/* raw spd data */
	{0},				/* timing parameters */
	{					/* electrical configuration */
		{				/* memory electrical configuration */
			MV_DDR_RTT_NOM_PARK_RZQ_DISABLE,	/* rtt_nom */
			MV_DDR_RTT_NOM_PARK_RZQ_DIV1,	/* rtt_park */
			MV_DDR_RTT_WR_RZQ_DIV2,	/* rtt_wr */
			MV_DDR_DIC_RZQ_DIV7	/* dic */
		},
		{				/* phy electrical configuration */
			MV_DDR_OHM_30,	/* data_drv_p */
			MV_DDR_OHM_30,	/* data_drv_n */
			MV_DDR_OHM_30,	/* ctrl_drv_p */
			MV_DDR_OHM_30,	/* ctrl_drv_n */
			MV_DDR_OHM_60,	/* odt_p */
			MV_DDR_OHM_60	/* odt_n */
		},
		{				/* mac electrical configuration */
			MV_DDR_ODT_CFG_NORMAL,	/* odtcfg_pattern */
			MV_DDR_ODT_CFG_ALWAYS_ON,	/* odtcfg_write */
			MV_DDR_ODT_CFG_NORMAL,	/* odtcfg_read */
		},
	}
};

struct mv_ddr_topology_map *mv_ddr_topology_map_get(void)
{
	/* Return the board topology as defined in the board code */
	return &board_topology_map;
}
