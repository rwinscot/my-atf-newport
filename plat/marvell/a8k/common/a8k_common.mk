#
# Copyright (C) 2016 - 2018 Marvell International Ltd.
#
# SPDX-License-Identifier:     BSD-3-Clause
# https://spdx.org/licenses
 
PLAT_FAMILY		:= a8k
PLAT_FAMILY_BASE	:= plat/marvell/$(PLAT_FAMILY)
PLAT_INCLUDE_BASE	:= include/plat/marvell/$(PLAT_FAMILY)
PLAT_COMMON_BASE	:= $(PLAT_FAMILY_BASE)/common
MARVELL_DRV_BASE	:= drivers/marvell
MARVELL_COMMON_BASE	:= plat/marvell/common

CALL_DOIMAGE		:= y

ERRATA_A72_859971	:= 1

# Enable MSS support for a8k family
MSS_SUPPORT		:= 1

# Disable EL3 cache for power management
BL31_CACHE_DISABLE	:= 1

# This define specifies DDR type for BLE
$(eval $(call add_define,CONFIG_DDR4))

MARVELL_GIC_SOURCES	:=	drivers/arm/gic/common/gic_common.c	\
				drivers/arm/gic/v2/gicv2_main.c		\
				drivers/arm/gic/v2/gicv2_helpers.c	\
				plat/common/plat_gicv2.c

ATF_INCLUDES		:=	-Iinclude/common/tbbr

PLAT_INCLUDES		:=	-I$(PLAT_FAMILY_BASE)/$(PLAT)		\
				-I$(PLAT_COMMON_BASE)/include		\
				-I$(PLAT_INCLUDE_BASE)/common		\
				-Iinclude/drivers/marvell		\
				-Iinclude/drivers/marvell/mochi		\
				$(ATF_INCLUDES)

PLAT_BL_COMMON_SOURCES	:=	$(PLAT_COMMON_BASE)/aarch64/a8k_common.c \
				drivers/console/aarch64/console.S	 \
				drivers/ti/uart/aarch64/16550_console.S

BLE_PORTING_SOURCES	:=	$(PLAT_FAMILY_BASE)/$(PLAT)/board/dram_port.c \
				$(PLAT_FAMILY_BASE)/$(PLAT)/board/marvell_plat_config.c

MARVELL_MOCHI_DRV	:=	$(MARVELL_DRV_BASE)/mochi/apn806_setup.c \
				$(MARVELL_DRV_BASE)/mochi/cp110_setup.c

BLE_SOURCES		:=	$(PLAT_COMMON_BASE)/plat_ble_setup.c		\
				$(MARVELL_MOCHI_DRV)			       \
				$(MARVELL_DRV_BASE)/i2c/a8k_i2c.c	 	\
				$(PLAT_COMMON_BASE)/plat_pm.c		 	\
				$(MARVELL_DRV_BASE)/aro.c	         	\
				$(MARVELL_DRV_BASE)/thermal.c			\
				$(PLAT_COMMON_BASE)/marvell_thermal.c		\
				$(BLE_PORTING_SOURCES)				\
				$(MARVELL_DRV_BASE)/ccu.c			\
				$(MARVELL_DRV_BASE)/io_win.c

ifeq (${PCI_EP_SUPPORT}, 1)
BLE_SOURCES		+=	$(MARVELL_COMMON_BASE)/pci_ep_setup.c	 \
				$(MARVELL_DRV_BASE)/dw-pcie-ep.c	 \
				$(MARVELL_DRV_BASE)/pcie-comphy-cp110.c
endif

ifeq (${PALLADIUM}, 1)
BL1_SOURCES		+=	$(PLAT_COMMON_BASE)/plat_bl1_setup.c
endif

BL1_SOURCES		+=	$(PLAT_COMMON_BASE)/aarch64/plat_helpers.S \
				lib/cpus/aarch64/cortex_a72.S

MARVELL_DRV		:= 	$(MARVELL_DRV_BASE)/io_win.c	\
				$(MARVELL_DRV_BASE)/iob.c	\
				$(MARVELL_DRV_BASE)/mci.c	\
				$(MARVELL_DRV_BASE)/amb_adec.c	\
				$(MARVELL_DRV_BASE)/ccu.c	\
				$(MARVELL_DRV_BASE)/icu.c	\
				$(MARVELL_DRV_BASE)/cache_llc.c	\
				$(MARVELL_DRV_BASE)/comphy/phy-comphy-cp110.c

BL31_PORTING_SOURCES	:=	$(PLAT_FAMILY_BASE)/$(PLAT)/board/marvell_plat_config.c

BL31_SOURCES		+=	lib/cpus/aarch64/cortex_a72.S		       \
				$(PLAT_COMMON_BASE)/aarch64/plat_helpers.S     \
				$(PLAT_COMMON_BASE)/aarch64/plat_arch_config.c \
				$(PLAT_COMMON_BASE)/plat_pm.c		       \
				$(PLAT_COMMON_BASE)/plat_bl31_setup.c	       \
				$(MARVELL_COMMON_BASE)/marvell_gicv2.c	       \
				$(MARVELL_COMMON_BASE)/mrvl_sip_svc.c	       \
				$(MARVELL_COMMON_BASE)/marvell_ddr_info.c      \
				$(BL31_PORTING_SOURCES)			       \
				$(MARVELL_DRV)				       \
				$(MARVELL_MOCHI_DRV)			       \
				$(MARVELL_GIC_SOURCES)

# Add trace functionality for PM
BL31_SOURCES		+=	$(PLAT_COMMON_BASE)/plat_pm_trace.c

# Disable the PSCI platform compatibility layer (allows porting
# from Old Platform APIs to the new APIs).
# It is not needed since Marvell platform already used the new platform APIs.
ENABLE_PLAT_COMPAT	:= 	0

ifndef SCP_BL2
# Force builds with BL2 image on a80x0 platforms
ifneq ($(findstring a80x0,$(PLAT)),)
 $(error "Error: SCP_BL2 image is mandatory for a8k family")
endif
endif

# MSS (SCP) build
include $(PLAT_COMMON_BASE)/mss/mss_a8k.mk

# BLE (ROM context execution code, AKA binary extension)
BLE_PATH	?=  ble

include ${BLE_PATH}/ble.mk
$(eval $(call MAKE_BL,e))

