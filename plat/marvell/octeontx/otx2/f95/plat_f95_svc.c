/*
 * Copyright (C) 2019 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <debug.h>
#include <runtime_svc.h>
#include <octeontx_svc.h>
#include <platform_svc.h>
#include <octeontx_common.h>
#include <stdint.h>
#include <uuid.h>
#include <bphy.h>
#include <rvu.h>
#include <plat_scmi.h>

extern void *scmi_handle;

uintptr_t plat_octeontx_svc_smc_handler(uint32_t smc_fid,
					u_register_t x1,
					u_register_t x2,
					u_register_t x3,
					u_register_t x4,
					void *cookie,
					void *handle,
					u_register_t flags)
{
	uint64_t ret = 0;
	const gp_regs_t *sregs = get_gpregs_ctx(handle);
	u_register_t x5, x6;

	switch (smc_fid) {
	case PLAT_OCTEONTX_DISABLE_RVU_LFS:
		ret = octeontx2_clear_lf_to_pf_mapping(x1);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_FLSF_FW_BOOTED:
		ret = scmi_octeontx_flsf_fw_booted(scmi_handle);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_FLSF_CLEAR_FORCE_2NDRY:
		ret = scmi_octeontx_flsf_clear_force_2ndry(scmi_handle);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_INSTALL_BPHY_PSM_ERRINT:
		ret = bphy_psm_install_irq(x1, x2, x3, x4);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_REMOVE_BPHY_PSM_ERRINT:
		bphy_psm_clear_irq(x1);
		SMC_RET1(handle, 0);
		break;

	case PLAT_OCTEONTX_OOO_CONFIG:
		INFO("SVC OOO CONFIG: x1 = 0x%lx\n", x1);
		ret = octeontx2_configure_ooo(x1);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_MDIO_DBG_READ:
		x5 = read_ctx_reg(sregs, CTX_GPREG_X5);
		ret = mdio_debug_read(x1, x2, x3, x4, x5);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_MDIO_DBG_WRITE:
		x5 = read_ctx_reg(sregs, CTX_GPREG_X5);
		x6 = read_ctx_reg(sregs, CTX_GPREG_X6);
		ret = mdio_debug_write(x1, x2, x3, x4, x5, x6);
		SMC_RET1(handle, ret);
		break;

	default:
		WARN("Unimplemented OcteonTX Service Call: 0x%x\n", smc_fid);
		SMC_RET1(handle, SMC_UNK);
	}
}
