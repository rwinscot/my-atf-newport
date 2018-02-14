#/** @file
#
#  Copyright (c) 2016-2018, Cavium Inc. All rights reserved.<BR>
#  This program and the accompanying materials
#  are licensed and made available under the terms and conditions of the BSD License
#  which accompanies this distribution.  The full text of the license may be found at
#  http://opensource.org/licenses/bsd-license.php
#
#  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
#  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
#
#**/

# Include common thunder platform's makefile helper
include plat/cavium/common/platform.mk

PLAT_INCLUDES		+=	-Iplat/cavium/octeontx2/include			\
				-Iplat/cavium/octeontx2/f95/include		\

PLAT_BL_COMMON_SOURCES	+=	plat/cavium/octeontx2/f95/plat_cavm_setup.c		\
				plat/cavium/octeontx2/cavm_security.c		\
				plat/cavium/octeontx2/cavm_octeontx2_dt.c	\
				plat/cavium/octeontx2/cavm_cgx_intf.c		\
				plat/cavium/octeontx2/cavm_cgx.c		\

BL1_SOURCES		+=	plat/cavium/octeontx2/aarch64/octeontx2_common.S	\
				plat/cavium/octeontx2/aarch64/plat_cavm_helpers.S	\

BL2_SOURCES		+=	plat/cavium/octeontx2/f95/plat_cavm_ecam.c		\
				plat/cavium/octeontx2/cavm_rvu.c		\

BL31_SOURCES		+=	plat/cavium/octeontx2/aarch64/octeontx2_common.S	\
				plat/cavium/octeontx2/aarch64/plat_cavm_helpers.S	\
				plat/cavium/octeontx2/cavm_topology.c		\
				plat/cavium/octeontx2/cavm_setup.c		\
				plat/cavium/octeontx2/cavm_rvu.c		\