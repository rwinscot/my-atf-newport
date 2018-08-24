/** @file

  Copyright (c) 2018, Marvell International Ltd. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef __CAVM_TWSI_CORE_H__
#define __CAVM_TWSI_CORE_H__

#define PLL_REF_CLK		50000000	/* 50 MHz */
#define TWSI_RECOVERY_UDELAY	9

enum {
	TWSI_SLAVE_ADD     = 0,
	TWSI_DATA 	   = 1,
	TWSI_CTL 	   = 2,
	TWSI_CLKCTL 	   = 3,
	TWSI_STAT 	   = 3,
	TWSI_SLAVE_ADD_EXT = 4,
	TWSI_RST	   = 7,
};


enum {
	TWSI_CTL_AAK	= 1 << 2,
	TWSI_CTL_IFLG	= 1 << 3,
	TWSI_CTL_STP	= 1 << 4,
	TWSI_CTL_STA	= 1 << 5,
	TWSI_CTL_ENAB	= 1 << 6,
	TWSI_CTL_CE	= 1 << 7,
};

enum {
	TWSI_CLKCTL_NS	= 0,
	TWSI_CLKCTL_MS	= 3,
};

enum {
	/* Bus error */
	TWSI_STAT_BUS_ERROR		= 0x00,
	/* Start condition transmitted */
	TWSI_STAT_START			= 0x08,
	/* Repeat start condition transmitted */
	TWSI_STAT_RSTART		= 0x10,
	/* Address + write bit transmitted, ACK received */
	TWSI_STAT_TXADDR_ACK		= 0x18,
	/* Address + read bit transmitted, ACK received */
	TWSI_STAT_RXADDR_ACK		= 0x40,
	/* No relevant status information */
	TWSI_STAT_IDLE		= 0xF8
};

/* Functions to be used by TWSI/SMBus/other drivers */
uint64_t twsi_write_sw(unsigned int node, unsigned int twsi_num,
			      cavm_mio_twsx_sw_twsi_t sw_twsi);
uint64_t twsi_read_sw(unsigned int node, unsigned int twsi_num,
			     cavm_mio_twsx_sw_twsi_t sw_twsi);
uint8_t twsi_read_status(unsigned int node, unsigned int twsi_num);
void twsi_write_ctl(unsigned int node, unsigned int twsi_num, uint8_t data);
uint8_t twsi_read_ctl(unsigned int node, unsigned int twsi_num);
int twsi_wait(unsigned int node, unsigned int twsi_num);
void twsi_enable(unsigned int node, unsigned int twsi_num);
void twsi_send_ack(unsigned int node, unsigned int twsi_num);
void twsi_recover_bus(unsigned int node, unsigned int twsi_num);
int twsi_stop(unsigned int node, unsigned int twsi_num);
int twsi_start(unsigned int node, unsigned int twsi_num);
void twsi_set_speed(unsigned int node, unsigned int twsi_num, unsigned int speed);

#endif /* __CAVM_TWSI_CORE_H__ */