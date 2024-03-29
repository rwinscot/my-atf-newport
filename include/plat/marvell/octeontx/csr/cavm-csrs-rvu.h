#ifndef __CAVM_CSRS_RVU_H__
#define __CAVM_CSRS_RVU_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2019 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX RVU.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration rvu_af_int_vec_e
 *
 * RVU Admin Function Interrupt Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 * Internal:
 * RVU maintains the state of these vectors internally, and generates GIB
 * messages for it without accessing the MSI-X table region in LLC/DRAM.
 */
#define CAVM_RVU_AF_INT_VEC_E_GEN (3)
#define CAVM_RVU_AF_INT_VEC_E_MBOX (4)
#define CAVM_RVU_AF_INT_VEC_E_PFFLR (1)
#define CAVM_RVU_AF_INT_VEC_E_PFME (2)
#define CAVM_RVU_AF_INT_VEC_E_POISON (0)

/**
 * Enumeration rvu_bar_e
 *
 * RVU Base Address Register Enumeration
 * Enumerates the base address registers.
 * Internal:
 * For documentation only.
 */
#define CAVM_RVU_BAR_E_RVU_PFX_BAR0(a) (0x840000000000ll + 0x1000000000ll * (a))
#define CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE 0x10000000ull
#define CAVM_RVU_BAR_E_RVU_PFX_FUNCX_BAR2(a,b) (0x840200000000ll + 0x1000000000ll * (a) + 0x2000000ll * (b))
#define CAVM_RVU_BAR_E_RVU_PFX_FUNCX_BAR2_SIZE 0x100000ull
#define CAVM_RVU_BAR_E_RVU_PFX_FUNCX_BAR4(a,b) (0x840400000000ll + 0x1000000000ll * (a) + 0x2000000ll * (b))
#define CAVM_RVU_BAR_E_RVU_PFX_FUNCX_BAR4_SIZE 0x10000ull

/**
 * Enumeration rvu_block_addr_e
 *
 * RVU Block Address Enumeration
 * Enumerates addressing of RVU resource blocks within each RVU BAR, i.e. values
 * of RVU_FUNC_ADDR_S[BLOCK] and RVU_AF_ADDR_S[BLOCK].
 *
 * CNXXXX may not implement all enumerated blocks. Software can read
 * RVU_PF/RVU_VF_BLOCK_ADDR()_DISC[IMP] to discover which blocks are implemented
 * and enabled.
 */
#define CAVM_RVU_BLOCK_ADDR_E_CPTX(a) (0xa + (a))
#define CAVM_RVU_BLOCK_ADDR_E_LMT (1)
#define CAVM_RVU_BLOCK_ADDR_E_NDCX(a) (0xc + (a))
#define CAVM_RVU_BLOCK_ADDR_E_NIXX(a) (4 + (a))
#define CAVM_RVU_BLOCK_ADDR_E_NPA (3)
#define CAVM_RVU_BLOCK_ADDR_E_NPC (6)
#define CAVM_RVU_BLOCK_ADDR_E_RX(a) (0 + (a))
#define CAVM_RVU_BLOCK_ADDR_E_REEX(a) (0x14 + (a))
#define CAVM_RVU_BLOCK_ADDR_E_RVUM (0)
#define CAVM_RVU_BLOCK_ADDR_E_SSO (7)
#define CAVM_RVU_BLOCK_ADDR_E_SSOW (8)
#define CAVM_RVU_BLOCK_ADDR_E_TIM (9)

/**
 * Enumeration rvu_block_type_e
 *
 * RVU Block Type Enumeration
 * Enumerates values of RVU_PF/RVU_VF_BLOCK_ADDR()_DISC[BTYPE].
 */
#define CAVM_RVU_BLOCK_TYPE_E_CPT (9)
#define CAVM_RVU_BLOCK_TYPE_E_DDF (0xb)
#define CAVM_RVU_BLOCK_TYPE_E_LMT (2)
#define CAVM_RVU_BLOCK_TYPE_E_NDC (0xa)
#define CAVM_RVU_BLOCK_TYPE_E_NIX (3)
#define CAVM_RVU_BLOCK_TYPE_E_NPA (4)
#define CAVM_RVU_BLOCK_TYPE_E_NPC (5)
#define CAVM_RVU_BLOCK_TYPE_E_RAD (0xd)
#define CAVM_RVU_BLOCK_TYPE_E_REE (0xe)
#define CAVM_RVU_BLOCK_TYPE_E_RVUM (0)
#define CAVM_RVU_BLOCK_TYPE_E_SSO (6)
#define CAVM_RVU_BLOCK_TYPE_E_SSOW (7)
#define CAVM_RVU_BLOCK_TYPE_E_TIM (8)
#define CAVM_RVU_BLOCK_TYPE_E_ZIP (0xc)

/**
 * Enumeration rvu_bus_lf_e
 *
 * INTERNAL: RVU Bus LF Range Enumeration
 *
 * Enumerates the LF range for the RVU bus.
 * Internal:
 * This is an enum used in csr3 virtual equations.
 */
#define CAVM_RVU_BUS_LF_E_RVU_BUS_LFX(a) (0 + 0x2000000 * (a))

/**
 * Enumeration rvu_bus_lf_slot_e
 *
 * INTERNAL: RVU Bus LF Slot Range Enumeration
 *
 * Enumerates the LF and Slot range for the RVU bus.
 * Internal:
 * This is an enum used in csr3 virtual equations.
 */
#define CAVM_RVU_BUS_LF_SLOT_E_RVU_BUS_LFX_SLOTX(a,b) (0 + 0x2000000 * (a) + 0x1000 * (b))

/**
 * Enumeration rvu_bus_pf_e
 *
 * INTERNAL: RVU Bus PF Range Enumeration
 *
 * Enumerates the PF range for the RVU bus.
 * Internal:
 * This is an enum used in csr3 virtual equations.
 */
#define CAVM_RVU_BUS_PF_E_RVU_BUS_PFX(a) (0ll + 0x1000000000ll * (a))

/**
 * Enumeration rvu_bus_pfvf_e
 *
 * INTERNAL: RVU Bus PFVF Range Enumeration
 *
 * Enumerates the PF and VF ranges for the RVU bus.
 * Internal:
 * This is an enum used in csr3 virtual equations.
 */
#define CAVM_RVU_BUS_PFVF_E_RVU_BUS_PFX(a) (0 + 0x2000000 * (a))
#define CAVM_RVU_BUS_PFVF_E_RVU_BUS_VFX(a) (0 + 0x2000000 * (a))

/**
 * Enumeration rvu_busbar_e
 *
 * INTERNAL: RVU Bus Base Address Region Enumeration
 *
 * Enumerates the base address region for the RVU bus.
 * Internal:
 * This is an enum used in csr3 virtual equations.
 */
#define CAVM_RVU_BUSBAR_E_RVU_BUSBAR0 (0)
#define CAVM_RVU_BUSBAR_E_RVU_BUSBAR2 (0x200000000ll)

/**
 * Enumeration rvu_busdid_e
 *
 * INTERNAL: RVU Bus DID Enumeration
 *
 * Enumerates the DID offset for the RVU bus.
 * Internal:
 * This is an enum used in csr3 virtual equations.
 */
#define CAVM_RVU_BUSDID_E_RVU_BUSDID (0x840000000000ll)

/**
 * Enumeration rvu_pf_int_vec_e
 *
 * RVU PF Interrupt Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_RVU_PF_INT_VEC_E_AFPF_MBOX (6)
#define CAVM_RVU_PF_INT_VEC_E_VFFLRX(a) (0 + (a))
#define CAVM_RVU_PF_INT_VEC_E_VFMEX(a) (2 + (a))
#define CAVM_RVU_PF_INT_VEC_E_VFPF_MBOXX(a) (4 + (a))

/**
 * Enumeration rvu_vf_int_vec_e
 *
 * RVU VF Interrupt Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_RVU_VF_INT_VEC_E_MBOX (0)

/**
 * Structure rvu_af_addr_s
 *
 * RVU Admin Function Register Address Structure
 * Address format for accessing shared Admin Function (AF) registers in
 * RVU PF BAR0. These registers may be accessed by all RVU PFs whose
 * RVU_PRIV_PF()_CFG[AF_ENA] bit is set.
 */
union cavm_rvu_af_addr_s
{
    uint64_t u;
    struct cavm_rvu_af_addr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t block                 : 5;  /**< [ 32: 28] Resource block enumerated by RVU_BLOCK_ADDR_E. */
        uint64_t addr                  : 28; /**< [ 27:  0] Register address within [BLOCK]. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 28; /**< [ 27:  0] Register address within [BLOCK]. */
        uint64_t block                 : 5;  /**< [ 32: 28] Resource block enumerated by RVU_BLOCK_ADDR_E. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_addr_s_s cn; */
};

/**
 * Structure rvu_func_addr_s
 *
 * RVU Function-unique Address Structure
 * Address format for accessing function-unique registers in RVU PF/FUNC BAR2.
 */
union cavm_rvu_func_addr_s
{
    uint32_t u;
    struct cavm_rvu_func_addr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_25_31        : 7;
        uint32_t block                 : 5;  /**< [ 24: 20] Resource block enumerated by RVU_BLOCK_ADDR_E. */
        uint32_t lf_slot               : 8;  /**< [ 19: 12] Local function slot, or extended register address within the block's LF
                                                                 slot 0, depending on [BLOCK]. */
        uint32_t addr                  : 12; /**< [ 11:  0] Register address within the block and LF slot. */
#else /* Word 0 - Little Endian */
        uint32_t addr                  : 12; /**< [ 11:  0] Register address within the block and LF slot. */
        uint32_t lf_slot               : 8;  /**< [ 19: 12] Local function slot, or extended register address within the block's LF
                                                                 slot 0, depending on [BLOCK]. */
        uint32_t block                 : 5;  /**< [ 24: 20] Resource block enumerated by RVU_BLOCK_ADDR_E. */
        uint32_t reserved_25_31        : 7;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_func_addr_s_s cn; */
};

/**
 * Structure rvu_msix_vec_s
 *
 * RVU MSI-X Vector Structure
 * Format of entries in the RVU MSI-X table region in LLC/DRAM. See
 * RVU_PRIV_PF()_MSIX_CFG.
 */
union cavm_rvu_msix_vec_s
{
    uint64_t u[2];
    struct cavm_rvu_msix_vec_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 64; /**< [ 63:  0] PF/VF IOVA to use for MSI-X delivery of this vector. Bits \<63:53\> are reserved.
                                                                 Bit \<1:0\> are reserved for alignment. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 64; /**< [ 63:  0] PF/VF IOVA to use for MSI-X delivery of this vector. Bits \<63:53\> are reserved.
                                                                 Bit \<1:0\> are reserved for alignment. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_98_127       : 30;
        uint64_t pend                  : 1;  /**< [ 97: 97] Vector's pending bit in the MSI-X PBA. */
        uint64_t mask                  : 1;  /**< [ 96: 96] When set, no MSI-X interrupts are sent to this vector. */
        uint64_t data                  : 32; /**< [ 95: 64] Data to use for MSI-X delivery of this vector. */
#else /* Word 1 - Little Endian */
        uint64_t data                  : 32; /**< [ 95: 64] Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 96: 96] When set, no MSI-X interrupts are sent to this vector. */
        uint64_t pend                  : 1;  /**< [ 97: 97] Vector's pending bit in the MSI-X PBA. */
        uint64_t reserved_98_127       : 30;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_rvu_msix_vec_s_s cn; */
};

/**
 * Structure rvu_pf_func_s
 *
 * RVU PF Function Identification Structure
 * Identifies an RVU PF/VF, and format of *_PRIV_LF()_CFG[PF_FUNC] in RVU
 * resource blocks, e.g. NPA_PRIV_LF()_CFG[PF_FUNC].
 *
 * Internal:
 * Also used for PF/VF identification on inter-coprocessor hardware
 * interfaces (NPA, SSO, CPT, ...).
 */
union cavm_rvu_pf_func_s
{
    uint32_t u;
    struct cavm_rvu_pf_func_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t pf                    : 6;  /**< [ 15: 10] RVU PF number. */
        uint32_t func                  : 10; /**< [  9:  0] Function within [PF]; 0 for the PF itself, else VF number plus 1. */
#else /* Word 0 - Little Endian */
        uint32_t func                  : 10; /**< [  9:  0] Function within [PF]; 0 for the PF itself, else VF number plus 1. */
        uint32_t pf                    : 6;  /**< [ 15: 10] RVU PF number. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_func_s_s cn; */
};

/**
 * Register (RVU_PF_BAR0) rvu_af_afpf#_mbox#
 *
 * RVU Admin Function AF/PF Mailbox Registers
 */
union cavm_rvu_af_afpfx_mboxx
{
    uint64_t u;
    struct cavm_rvu_af_afpfx_mboxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These AF registers access the 16-byte-per-PF PF/AF
                                                                 mailbox.  Each corresponding PF may access the same storage using
                                                                 RVU_PF_PFAF_MBOX(). MBOX(0) is typically used for AF to PF
                                                                 signaling, MBOX(1) for PF to AF.
                                                                 Writing RVU_AF_AFPF()_MBOX(0) (but not RVU_PF_PFAF_MBOX(0)) will
                                                                 set the corresponding
                                                                 RVU_PF_INT[MBOX] which if appropriately enabled will send an
                                                                 interrupt to the PF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These AF registers access the 16-byte-per-PF PF/AF
                                                                 mailbox.  Each corresponding PF may access the same storage using
                                                                 RVU_PF_PFAF_MBOX(). MBOX(0) is typically used for AF to PF
                                                                 signaling, MBOX(1) for PF to AF.
                                                                 Writing RVU_AF_AFPF()_MBOX(0) (but not RVU_PF_PFAF_MBOX(0)) will
                                                                 set the corresponding
                                                                 RVU_PF_INT[MBOX] which if appropriately enabled will send an
                                                                 interrupt to the PF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_afpfx_mboxx_s cn; */
};
typedef union cavm_rvu_af_afpfx_mboxx cavm_rvu_af_afpfx_mboxx_t;

static inline uint64_t CAVM_RVU_AF_AFPFX_MBOXX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_AFPFX_MBOXX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a<=15) && (b<=1)))
        return 0x840000002000ll + 0x10ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a<=23) && (b<=1)))
        return 0x840000002000ll + 0x10ll * ((a) & 0x1f) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=15) && (b<=1)))
        return 0x840000002000ll + 0x10ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=15) && (b<=1)))
        return 0x840000002000ll + 0x10ll * ((a) & 0xf) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("RVU_AF_AFPFX_MBOXX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_AFPFX_MBOXX(a,b) cavm_rvu_af_afpfx_mboxx_t
#define bustype_CAVM_RVU_AF_AFPFX_MBOXX(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_AFPFX_MBOXX(a,b) "RVU_AF_AFPFX_MBOXX"
#define device_bar_CAVM_RVU_AF_AFPFX_MBOXX(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_AFPFX_MBOXX(a,b) (a)
#define arguments_CAVM_RVU_AF_AFPFX_MBOXX(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_bar2_alias#
 *
 * INTERNAL: RVU Admin Function  BAR2 Alias Registers
 *
 * These registers alias to the RVU BAR2 registers for the PF and function
 * selected by RVU_AF_BAR2_SEL[PF_FUNC].
 *
 * Internal:
 * Not implemented. Placeholder for bug33464.
 */
union cavm_rvu_af_bar2_aliasx
{
    uint64_t u;
    struct cavm_rvu_af_bar2_aliasx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_bar2_aliasx_s cn; */
};
typedef union cavm_rvu_af_bar2_aliasx cavm_rvu_af_bar2_aliasx_t;

static inline uint64_t CAVM_RVU_AF_BAR2_ALIASX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_BAR2_ALIASX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=131071))
        return 0x840009100000ll + 8ll * ((a) & 0x1ffff);
    __cavm_csr_fatal("RVU_AF_BAR2_ALIASX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_BAR2_ALIASX(a) cavm_rvu_af_bar2_aliasx_t
#define bustype_CAVM_RVU_AF_BAR2_ALIASX(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_BAR2_ALIASX(a) "RVU_AF_BAR2_ALIASX"
#define device_bar_CAVM_RVU_AF_BAR2_ALIASX(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_BAR2_ALIASX(a) (a)
#define arguments_CAVM_RVU_AF_BAR2_ALIASX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_bar2_sel
 *
 * INTERNAL: RVU Admin Function BAR2 Select Register
 *
 * This register configures BAR2 accesses from the RVU_AF_BAR2_ALIAS() registers in BAR0.
 * Internal:
 * Not implemented. Placeholder for bug33464.
 */
union cavm_rvu_af_bar2_sel
{
    uint64_t u;
    struct cavm_rvu_af_bar2_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t alias_ena             : 1;  /**< [ 16: 16](R/W) Enable BAR2 register accesses from the AF BAR2 alias registers in BAR0. */
        uint64_t alias_pf_func         : 16; /**< [ 15:  0](R/W) PF and function whose BAR2 registers may be accessed from the AF BAR2 alias
                                                                 registers. Format specified by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t alias_pf_func         : 16; /**< [ 15:  0](R/W) PF and function whose BAR2 registers may be accessed from the AF BAR2 alias
                                                                 registers. Format specified by RVU_PF_FUNC_S. */
        uint64_t alias_ena             : 1;  /**< [ 16: 16](R/W) Enable BAR2 register accesses from the AF BAR2 alias registers in BAR0. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_bar2_sel_s cn; */
};
typedef union cavm_rvu_af_bar2_sel cavm_rvu_af_bar2_sel_t;

#define CAVM_RVU_AF_BAR2_SEL CAVM_RVU_AF_BAR2_SEL_FUNC()
static inline uint64_t CAVM_RVU_AF_BAR2_SEL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_BAR2_SEL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840009000000ll;
    __cavm_csr_fatal("RVU_AF_BAR2_SEL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_BAR2_SEL cavm_rvu_af_bar2_sel_t
#define bustype_CAVM_RVU_AF_BAR2_SEL CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_BAR2_SEL "RVU_AF_BAR2_SEL"
#define device_bar_CAVM_RVU_AF_BAR2_SEL 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_BAR2_SEL 0
#define arguments_CAVM_RVU_AF_BAR2_SEL -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_blk_rst
 *
 * RVU Master Admin Function Block Reset Register
 */
union cavm_rvu_af_blk_rst
{
    uint64_t u;
    struct cavm_rvu_af_blk_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) When one, RVUM is busy completing reset. No access except the reading of this
                                                                 bit should occur to RVUM until this is clear. */
        uint64_t reserved_1_62         : 62;
        uint64_t rst                   : 1;  /**< [  0:  0](WO/H) Write one to reset RVUM, except for privileged AF registers (RVU_PRIV_*).
                                                                 Software must ensure that all RVUM activity is quiesced before writing one. */
#else /* Word 0 - Little Endian */
        uint64_t rst                   : 1;  /**< [  0:  0](WO/H) Write one to reset RVUM, except for privileged AF registers (RVU_PRIV_*).
                                                                 Software must ensure that all RVUM activity is quiesced before writing one. */
        uint64_t reserved_1_62         : 62;
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) When one, RVUM is busy completing reset. No access except the reading of this
                                                                 bit should occur to RVUM until this is clear. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_blk_rst_s cn; */
};
typedef union cavm_rvu_af_blk_rst cavm_rvu_af_blk_rst_t;

#define CAVM_RVU_AF_BLK_RST CAVM_RVU_AF_BLK_RST_FUNC()
static inline uint64_t CAVM_RVU_AF_BLK_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_BLK_RST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000000030ll;
    __cavm_csr_fatal("RVU_AF_BLK_RST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_BLK_RST cavm_rvu_af_blk_rst_t
#define bustype_CAVM_RVU_AF_BLK_RST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_BLK_RST "RVU_AF_BLK_RST"
#define device_bar_CAVM_RVU_AF_BLK_RST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_BLK_RST 0
#define arguments_CAVM_RVU_AF_BLK_RST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_bp_test
 *
 * INTERNAL: RVUM Backpressure Test Registers
 */
union cavm_rvu_af_bp_test
{
    uint64_t u;
    struct cavm_rvu_af_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t enable                : 8;  /**< [ 39: 32](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<39\> = Reserved.
                                                                 \<38\> = Reserved.
                                                                 \<37\> = pf_cfg_req.
                                                                 \<36\> = pf_int_pibx_gen.
                                                                 \<35\> = msix_pibx.
                                                                 \<34\> = msix_gib.
                                                                 \<33\> = ncbif_noncsr.
                                                                 \<32\> = ncbif_csr. */
        uint64_t bp_cfg                : 16; /**< [ 31: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                 \<31:30\> = Reserved.
                                                                 \<29:28\> = Reserved.
                                                                 \<27:26\> = pf_cfg_req.
                                                                 \<25:24\> = pf_int_pibx_gen.
                                                                 \<23:22\> = msix_pibx.
                                                                 \<21:20\> = msix_gib.
                                                                 \<19:18\> = ncbif_noncsr.
                                                                 \<17:16\> = ncbif_csr. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 16; /**< [ 31: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                 \<31:30\> = Reserved.
                                                                 \<29:28\> = Reserved.
                                                                 \<27:26\> = pf_cfg_req.
                                                                 \<25:24\> = pf_int_pibx_gen.
                                                                 \<23:22\> = msix_pibx.
                                                                 \<21:20\> = msix_gib.
                                                                 \<19:18\> = ncbif_noncsr.
                                                                 \<17:16\> = ncbif_csr. */
        uint64_t enable                : 8;  /**< [ 39: 32](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<39\> = Reserved.
                                                                 \<38\> = Reserved.
                                                                 \<37\> = pf_cfg_req.
                                                                 \<36\> = pf_int_pibx_gen.
                                                                 \<35\> = msix_pibx.
                                                                 \<34\> = msix_gib.
                                                                 \<33\> = ncbif_noncsr.
                                                                 \<32\> = ncbif_csr. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_bp_test_s cn; */
};
typedef union cavm_rvu_af_bp_test cavm_rvu_af_bp_test_t;

#define CAVM_RVU_AF_BP_TEST CAVM_RVU_AF_BP_TEST_FUNC()
static inline uint64_t CAVM_RVU_AF_BP_TEST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_BP_TEST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000004000ll;
    __cavm_csr_fatal("RVU_AF_BP_TEST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_BP_TEST cavm_rvu_af_bp_test_t
#define bustype_CAVM_RVU_AF_BP_TEST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_BP_TEST "RVU_AF_BP_TEST"
#define device_bar_CAVM_RVU_AF_BP_TEST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_BP_TEST 0
#define arguments_CAVM_RVU_AF_BP_TEST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_eco
 *
 * INTERNAL: RVU Admin Function ECO Register
 */
union cavm_rvu_af_eco
{
    uint64_t u;
    struct cavm_rvu_af_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_eco_s cn; */
};
typedef union cavm_rvu_af_eco cavm_rvu_af_eco_t;

#define CAVM_RVU_AF_ECO CAVM_RVU_AF_ECO_FUNC()
static inline uint64_t CAVM_RVU_AF_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_ECO_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000000020ll;
    __cavm_csr_fatal("RVU_AF_ECO", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_ECO cavm_rvu_af_eco_t
#define bustype_CAVM_RVU_AF_ECO CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_ECO "RVU_AF_ECO"
#define device_bar_CAVM_RVU_AF_ECO 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_ECO 0
#define arguments_CAVM_RVU_AF_ECO -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_gen_int
 *
 * RVU Admin Function General Interrupt Register
 * This register contains General interrupt summary bits.
 */
union cavm_rvu_af_gen_int
{
    uint64_t u;
    struct cavm_rvu_af_gen_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t bar4_mem_fault        : 1;  /**< [  2:  2](R/W1C/H) Memory fault on BAR4 mailbox read or write. */
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1C/H) Memory fault on RVU_MSIX_VEC_S read or write. If the fault is on a
                                                                 RVU_MSIX_VEC_S read for an MSI-X message to be generated, RVUM drops the
                                                                 interrupt and does not generate a message to the GIC. */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1C/H) Received a register read or write request to an unmapped or disabled PF or
                                                                 VF. Specifically:
                                                                 * A PF/VF  BAR2 access in a PF whose RVU_PRIV_PF()_CFG[ENA] is
                                                                 clear.
                                                                 * A VF BAR2 access to a VF number that is greater than or equal to the
                                                                 associated PF's RVU_PRIV_PF()_CFG[NVF]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1C/H) Received a register read or write request to an unmapped or disabled PF or
                                                                 VF. Specifically:
                                                                 * A PF/VF  BAR2 access in a PF whose RVU_PRIV_PF()_CFG[ENA] is
                                                                 clear.
                                                                 * A VF BAR2 access to a VF number that is greater than or equal to the
                                                                 associated PF's RVU_PRIV_PF()_CFG[NVF]. */
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1C/H) Memory fault on RVU_MSIX_VEC_S read or write. If the fault is on a
                                                                 RVU_MSIX_VEC_S read for an MSI-X message to be generated, RVUM drops the
                                                                 interrupt and does not generate a message to the GIC. */
        uint64_t bar4_mem_fault        : 1;  /**< [  2:  2](R/W1C/H) Memory fault on BAR4 mailbox read or write. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_gen_int_s cn9; */
    struct cavm_rvu_af_gen_int_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1C/H) Memory fault on RVU_MSIX_VEC_S read or write. If the fault is on a
                                                                 RVU_MSIX_VEC_S read for an MSI-X message to be generated, RVUM drops the
                                                                 interrupt and does not generate a message to the GIC. */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1C/H) Received a register read or write request to an unmapped or disabled PF or
                                                                 VF. Specifically:
                                                                 * A PF/VF  BAR2 access in a PF whose RVU_PRIV_PF()_CFG[ENA] is
                                                                 clear.
                                                                 * A VF BAR2 access to a VF number that is greater than or equal to the
                                                                 associated PF's RVU_PRIV_PF()_CFG[NVF]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1C/H) Received a register read or write request to an unmapped or disabled PF or
                                                                 VF. Specifically:
                                                                 * A PF/VF  BAR2 access in a PF whose RVU_PRIV_PF()_CFG[ENA] is
                                                                 clear.
                                                                 * A VF BAR2 access to a VF number that is greater than or equal to the
                                                                 associated PF's RVU_PRIV_PF()_CFG[NVF]. */
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1C/H) Memory fault on RVU_MSIX_VEC_S read or write. If the fault is on a
                                                                 RVU_MSIX_VEC_S read for an MSI-X message to be generated, RVUM drops the
                                                                 interrupt and does not generate a message to the GIC. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_gen_int_s cn98xx; */
    /* struct cavm_rvu_af_gen_int_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_gen_int_cn96xx loki; */
};
typedef union cavm_rvu_af_gen_int cavm_rvu_af_gen_int_t;

#define CAVM_RVU_AF_GEN_INT CAVM_RVU_AF_GEN_INT_FUNC()
static inline uint64_t CAVM_RVU_AF_GEN_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_GEN_INT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000000120ll;
    __cavm_csr_fatal("RVU_AF_GEN_INT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_GEN_INT cavm_rvu_af_gen_int_t
#define bustype_CAVM_RVU_AF_GEN_INT CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_GEN_INT "RVU_AF_GEN_INT"
#define device_bar_CAVM_RVU_AF_GEN_INT 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_GEN_INT 0
#define arguments_CAVM_RVU_AF_GEN_INT -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_gen_int_ena_w1c
 *
 * RVU Admin Function General Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_rvu_af_gen_int_ena_w1c
{
    uint64_t u;
    struct cavm_rvu_af_gen_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t bar4_mem_fault        : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for RVU_AF_GEN_INT[BAR4_MEM_FAULT]. */
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for RVU_AF_GEN_INT[MSIX_FAULT]. */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RVU_AF_GEN_INT[UNMAPPED]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RVU_AF_GEN_INT[UNMAPPED]. */
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for RVU_AF_GEN_INT[MSIX_FAULT]. */
        uint64_t bar4_mem_fault        : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for RVU_AF_GEN_INT[BAR4_MEM_FAULT]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_gen_int_ena_w1c_s cn9; */
    struct cavm_rvu_af_gen_int_ena_w1c_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for RVU_AF_GEN_INT[MSIX_FAULT]. */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RVU_AF_GEN_INT[UNMAPPED]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RVU_AF_GEN_INT[UNMAPPED]. */
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for RVU_AF_GEN_INT[MSIX_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_gen_int_ena_w1c_s cn98xx; */
    /* struct cavm_rvu_af_gen_int_ena_w1c_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_gen_int_ena_w1c_cn96xx loki; */
};
typedef union cavm_rvu_af_gen_int_ena_w1c cavm_rvu_af_gen_int_ena_w1c_t;

#define CAVM_RVU_AF_GEN_INT_ENA_W1C CAVM_RVU_AF_GEN_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_RVU_AF_GEN_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_GEN_INT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000000138ll;
    __cavm_csr_fatal("RVU_AF_GEN_INT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_GEN_INT_ENA_W1C cavm_rvu_af_gen_int_ena_w1c_t
#define bustype_CAVM_RVU_AF_GEN_INT_ENA_W1C CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_GEN_INT_ENA_W1C "RVU_AF_GEN_INT_ENA_W1C"
#define device_bar_CAVM_RVU_AF_GEN_INT_ENA_W1C 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_GEN_INT_ENA_W1C 0
#define arguments_CAVM_RVU_AF_GEN_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_gen_int_ena_w1s
 *
 * RVU Admin Function General Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_rvu_af_gen_int_ena_w1s
{
    uint64_t u;
    struct cavm_rvu_af_gen_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t bar4_mem_fault        : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for RVU_AF_GEN_INT[BAR4_MEM_FAULT]. */
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for RVU_AF_GEN_INT[MSIX_FAULT]. */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RVU_AF_GEN_INT[UNMAPPED]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RVU_AF_GEN_INT[UNMAPPED]. */
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for RVU_AF_GEN_INT[MSIX_FAULT]. */
        uint64_t bar4_mem_fault        : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for RVU_AF_GEN_INT[BAR4_MEM_FAULT]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_gen_int_ena_w1s_s cn9; */
    struct cavm_rvu_af_gen_int_ena_w1s_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for RVU_AF_GEN_INT[MSIX_FAULT]. */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RVU_AF_GEN_INT[UNMAPPED]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RVU_AF_GEN_INT[UNMAPPED]. */
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for RVU_AF_GEN_INT[MSIX_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_gen_int_ena_w1s_s cn98xx; */
    /* struct cavm_rvu_af_gen_int_ena_w1s_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_gen_int_ena_w1s_cn96xx loki; */
};
typedef union cavm_rvu_af_gen_int_ena_w1s cavm_rvu_af_gen_int_ena_w1s_t;

#define CAVM_RVU_AF_GEN_INT_ENA_W1S CAVM_RVU_AF_GEN_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_RVU_AF_GEN_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_GEN_INT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000000130ll;
    __cavm_csr_fatal("RVU_AF_GEN_INT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_GEN_INT_ENA_W1S cavm_rvu_af_gen_int_ena_w1s_t
#define bustype_CAVM_RVU_AF_GEN_INT_ENA_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_GEN_INT_ENA_W1S "RVU_AF_GEN_INT_ENA_W1S"
#define device_bar_CAVM_RVU_AF_GEN_INT_ENA_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_GEN_INT_ENA_W1S 0
#define arguments_CAVM_RVU_AF_GEN_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_gen_int_w1s
 *
 * RVU Admin Function General Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_rvu_af_gen_int_w1s
{
    uint64_t u;
    struct cavm_rvu_af_gen_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t bar4_mem_fault        : 1;  /**< [  2:  2](R/W1S/H) Reads or sets RVU_AF_GEN_INT[BAR4_MEM_FAULT]. */
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets RVU_AF_GEN_INT[MSIX_FAULT]. */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RVU_AF_GEN_INT[UNMAPPED]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RVU_AF_GEN_INT[UNMAPPED]. */
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets RVU_AF_GEN_INT[MSIX_FAULT]. */
        uint64_t bar4_mem_fault        : 1;  /**< [  2:  2](R/W1S/H) Reads or sets RVU_AF_GEN_INT[BAR4_MEM_FAULT]. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_gen_int_w1s_s cn9; */
    struct cavm_rvu_af_gen_int_w1s_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets RVU_AF_GEN_INT[MSIX_FAULT]. */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RVU_AF_GEN_INT[UNMAPPED]. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RVU_AF_GEN_INT[UNMAPPED]. */
        uint64_t msix_fault            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets RVU_AF_GEN_INT[MSIX_FAULT]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_gen_int_w1s_s cn98xx; */
    /* struct cavm_rvu_af_gen_int_w1s_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_gen_int_w1s_cn96xx loki; */
};
typedef union cavm_rvu_af_gen_int_w1s cavm_rvu_af_gen_int_w1s_t;

#define CAVM_RVU_AF_GEN_INT_W1S CAVM_RVU_AF_GEN_INT_W1S_FUNC()
static inline uint64_t CAVM_RVU_AF_GEN_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_GEN_INT_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000000128ll;
    __cavm_csr_fatal("RVU_AF_GEN_INT_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_GEN_INT_W1S cavm_rvu_af_gen_int_w1s_t
#define bustype_CAVM_RVU_AF_GEN_INT_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_GEN_INT_W1S "RVU_AF_GEN_INT_W1S"
#define device_bar_CAVM_RVU_AF_GEN_INT_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_GEN_INT_W1S 0
#define arguments_CAVM_RVU_AF_GEN_INT_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_hwvf_rst
 *
 * RVU Admin Function Hardware VF Reset Register
 */
union cavm_rvu_af_hwvf_rst
{
    uint64_t u;
    struct cavm_rvu_af_hwvf_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute HWVF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the RVUM hardware VF selected by [HWVF] and the
                                                                 associated MSI-X table in LLC/DRAM specified by
                                                                 RVU_PRIV_PF()_MSIX_CFG[VF_MSIXT_OFFSET,VF_MSIXT_SIZEM1].
                                                                 Hardware clears this bit when done. */
        uint64_t reserved_8_11         : 4;
        uint64_t hwvf                  : 8;  /**< [  7:  0](R/W) Hardware VF that is reset when [EXEC] is set. */
#else /* Word 0 - Little Endian */
        uint64_t hwvf                  : 8;  /**< [  7:  0](R/W) Hardware VF that is reset when [EXEC] is set. */
        uint64_t reserved_8_11         : 4;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute HWVF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the RVUM hardware VF selected by [HWVF] and the
                                                                 associated MSI-X table in LLC/DRAM specified by
                                                                 RVU_PRIV_PF()_MSIX_CFG[VF_MSIXT_OFFSET,VF_MSIXT_SIZEM1].
                                                                 Hardware clears this bit when done. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_hwvf_rst_s cn; */
};
typedef union cavm_rvu_af_hwvf_rst cavm_rvu_af_hwvf_rst_t;

#define CAVM_RVU_AF_HWVF_RST CAVM_RVU_AF_HWVF_RST_FUNC()
static inline uint64_t CAVM_RVU_AF_HWVF_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_HWVF_RST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000002850ll;
    __cavm_csr_fatal("RVU_AF_HWVF_RST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_HWVF_RST cavm_rvu_af_hwvf_rst_t
#define bustype_CAVM_RVU_AF_HWVF_RST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_HWVF_RST "RVU_AF_HWVF_RST"
#define device_bar_CAVM_RVU_AF_HWVF_RST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_HWVF_RST 0
#define arguments_CAVM_RVU_AF_HWVF_RST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_msixtr_base
 *
 * RVU Admin Function MSI-X Table Region Base-Address Register
 */
union cavm_rvu_af_msixtr_base
{
    uint64_t u;
    struct cavm_rvu_af_msixtr_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 46; /**< [ 52:  7](R/W) Base AF IOVA of MSI-X table region in LLC/DRAM. IOVA bits \<6:0\> are always zero.
                                                                 See RVU_PRIV_PF()_MSIX_CFG. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t addr                  : 46; /**< [ 52:  7](R/W) Base AF IOVA of MSI-X table region in LLC/DRAM. IOVA bits \<6:0\> are always zero.
                                                                 See RVU_PRIV_PF()_MSIX_CFG. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_msixtr_base_s cn; */
};
typedef union cavm_rvu_af_msixtr_base cavm_rvu_af_msixtr_base_t;

#define CAVM_RVU_AF_MSIXTR_BASE CAVM_RVU_AF_MSIXTR_BASE_FUNC()
static inline uint64_t CAVM_RVU_AF_MSIXTR_BASE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_MSIXTR_BASE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000000010ll;
    __cavm_csr_fatal("RVU_AF_MSIXTR_BASE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_MSIXTR_BASE cavm_rvu_af_msixtr_base_t
#define bustype_CAVM_RVU_AF_MSIXTR_BASE CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_MSIXTR_BASE "RVU_AF_MSIXTR_BASE"
#define device_bar_CAVM_RVU_AF_MSIXTR_BASE 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_MSIXTR_BASE 0
#define arguments_CAVM_RVU_AF_MSIXTR_BASE -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pf#_vf_bar4_addr
 *
 * RVU Admin Function PF/VF BAR4 Address Registers
 */
union cavm_rvu_af_pfx_vf_bar4_addr
{
    uint64_t u;
    struct cavm_rvu_af_pfx_vf_bar4_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 48; /**< [ 63: 16](SR/W) When RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is set, programmable base physical
                                                                 address of the PF/VF mailbox memory, consisting of RVU_PRIV_PF()_CFG[NVF]
                                                                 consecutive 64 KB pages in LLC/DRAM.

                                                                 May be used as VF/PF mailbox memory in addition to
                                                                 RVU_PF_VF()_PFVF_MBOX()/RVU_VF_VFPF_MBOX().

                                                                 Not used when RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is clear
                                                                 (RVU_PF_VF_BAR4_ADDR is used instead). */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t addr                  : 48; /**< [ 63: 16](SR/W) When RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is set, programmable base physical
                                                                 address of the PF/VF mailbox memory, consisting of RVU_PRIV_PF()_CFG[NVF]
                                                                 consecutive 64 KB pages in LLC/DRAM.

                                                                 May be used as VF/PF mailbox memory in addition to
                                                                 RVU_PF_VF()_PFVF_MBOX()/RVU_VF_VFPF_MBOX().

                                                                 Not used when RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is clear
                                                                 (RVU_PF_VF_BAR4_ADDR is used instead). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfx_vf_bar4_addr_s cn9; */
    /* struct cavm_rvu_af_pfx_vf_bar4_addr_s cn96xx; */
    /* struct cavm_rvu_af_pfx_vf_bar4_addr_s cn98xx; */
    struct cavm_rvu_af_pfx_vf_bar4_addr_loki
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 48; /**< [ 63: 16](SR/W) When RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is set, programmable base physical
                                                                 address of the PF/VF mailbox memory, consisting of RVU_PRIV_PF()_CFG[NVF]
                                                                 consecutive 64 KB pages in LLC/DRAM.
                                                                 May be used as VF/PF mailbox memory in addition to
                                                                 RVU_PF_VF()_PFVF_MBOX()/RVU_VF_VFPF_MBOX().
                                                                 Not used when RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is clear
                                                                 (RVU_PF_VF_BAR4_ADDR is used instead). */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t addr                  : 48; /**< [ 63: 16](SR/W) When RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is set, programmable base physical
                                                                 address of the PF/VF mailbox memory, consisting of RVU_PRIV_PF()_CFG[NVF]
                                                                 consecutive 64 KB pages in LLC/DRAM.
                                                                 May be used as VF/PF mailbox memory in addition to
                                                                 RVU_PF_VF()_PFVF_MBOX()/RVU_VF_VFPF_MBOX().
                                                                 Not used when RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is clear
                                                                 (RVU_PF_VF_BAR4_ADDR is used instead). */
#endif /* Word 0 - End */
    } loki;
};
typedef union cavm_rvu_af_pfx_vf_bar4_addr cavm_rvu_af_pfx_vf_bar4_addr_t;

static inline uint64_t CAVM_RVU_AF_PFX_VF_BAR4_ADDR(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFX_VF_BAR4_ADDR(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=15))
        return 0x840000001000ll + 0x10ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=23))
        return 0x840000001000ll + 0x10ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=15))
        return 0x840000001000ll + 0x10ll * ((a) & 0xf);
    __cavm_csr_fatal("RVU_AF_PFX_VF_BAR4_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFX_VF_BAR4_ADDR(a) cavm_rvu_af_pfx_vf_bar4_addr_t
#define bustype_CAVM_RVU_AF_PFX_VF_BAR4_ADDR(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFX_VF_BAR4_ADDR(a) "RVU_AF_PFX_VF_BAR4_ADDR"
#define device_bar_CAVM_RVU_AF_PFX_VF_BAR4_ADDR(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFX_VF_BAR4_ADDR(a) (a)
#define arguments_CAVM_RVU_AF_PFX_VF_BAR4_ADDR(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pf_bar4_addr
 *
 * RVU Admin Function PF BAR4 Address Registers
 */
union cavm_rvu_af_pf_bar4_addr
{
    uint64_t u;
    struct cavm_rvu_af_pf_bar4_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 48; /**< [ 63: 16](R/W) Programmable base address of up to 16 consecutive 64 KB
                                                                 pages in DRAM (one per PF). May be used as PF/AF mailbox memory in addition to
                                                                 RVU_AF_AFPF()_MBOX()/RVU_PF_PFAF_MBOX().
                                                                 Provides PCC_EA_ENTRY_S[BASEH,BASEL] value advertised by PF BAR4's entry in
                                                                 PCCPF_XXX_EA_ENTRY(). */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t addr                  : 48; /**< [ 63: 16](R/W) Programmable base address of up to 16 consecutive 64 KB
                                                                 pages in DRAM (one per PF). May be used as PF/AF mailbox memory in addition to
                                                                 RVU_AF_AFPF()_MBOX()/RVU_PF_PFAF_MBOX().
                                                                 Provides PCC_EA_ENTRY_S[BASEH,BASEL] value advertised by PF BAR4's entry in
                                                                 PCCPF_XXX_EA_ENTRY(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pf_bar4_addr_s cn; */
};
typedef union cavm_rvu_af_pf_bar4_addr cavm_rvu_af_pf_bar4_addr_t;

#define CAVM_RVU_AF_PF_BAR4_ADDR CAVM_RVU_AF_PF_BAR4_ADDR_FUNC()
static inline uint64_t CAVM_RVU_AF_PF_BAR4_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PF_BAR4_ADDR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000000040ll;
    __cavm_csr_fatal("RVU_AF_PF_BAR4_ADDR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PF_BAR4_ADDR cavm_rvu_af_pf_bar4_addr_t
#define bustype_CAVM_RVU_AF_PF_BAR4_ADDR CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PF_BAR4_ADDR "RVU_AF_PF_BAR4_ADDR"
#define device_bar_CAVM_RVU_AF_PF_BAR4_ADDR 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PF_BAR4_ADDR 0
#define arguments_CAVM_RVU_AF_PF_BAR4_ADDR -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pf_rst
 *
 * RVU Admin Function PF Reset Register
 */
union cavm_rvu_af_pf_rst
{
    uint64_t u;
    struct cavm_rvu_af_pf_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute PF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the RVUM physical function selected by [PF] and the
                                                                 associated MSI-X table in LLC/DRAM specified by
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_OFFSET,PF_MSIXT_SIZEM1].
                                                                 Hardware clears this bit when done.
                                                                 Note this does not reset HWVFs which are mapped to the PF. */
        uint64_t reserved_5_11         : 7;
        uint64_t pf                    : 5;  /**< [  4:  0](R/W) Physical function that is reset when [EXEC] is set. */
#else /* Word 0 - Little Endian */
        uint64_t pf                    : 5;  /**< [  4:  0](R/W) Physical function that is reset when [EXEC] is set. */
        uint64_t reserved_5_11         : 7;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute PF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the RVUM physical function selected by [PF] and the
                                                                 associated MSI-X table in LLC/DRAM specified by
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_OFFSET,PF_MSIXT_SIZEM1].
                                                                 Hardware clears this bit when done.
                                                                 Note this does not reset HWVFs which are mapped to the PF. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pf_rst_s cn9; */
    struct cavm_rvu_af_pf_rst_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute PF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the RVUM physical function selected by [PF] and the
                                                                 associated MSI-X table in LLC/DRAM specified by
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_OFFSET,PF_MSIXT_SIZEM1].
                                                                 Hardware clears this bit when done.
                                                                 Note this does not reset HWVFs which are mapped to the PF. */
        uint64_t reserved_4_11         : 8;
        uint64_t pf                    : 4;  /**< [  3:  0](R/W) Physical function that is reset when [EXEC] is set. */
#else /* Word 0 - Little Endian */
        uint64_t pf                    : 4;  /**< [  3:  0](R/W) Physical function that is reset when [EXEC] is set. */
        uint64_t reserved_4_11         : 8;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute PF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the RVUM physical function selected by [PF] and the
                                                                 associated MSI-X table in LLC/DRAM specified by
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_OFFSET,PF_MSIXT_SIZEM1].
                                                                 Hardware clears this bit when done.
                                                                 Note this does not reset HWVFs which are mapped to the PF. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pf_rst_s cn98xx; */
    /* struct cavm_rvu_af_pf_rst_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pf_rst_cn96xx loki; */
};
typedef union cavm_rvu_af_pf_rst cavm_rvu_af_pf_rst_t;

#define CAVM_RVU_AF_PF_RST CAVM_RVU_AF_PF_RST_FUNC()
static inline uint64_t CAVM_RVU_AF_PF_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PF_RST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000002840ll;
    __cavm_csr_fatal("RVU_AF_PF_RST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PF_RST cavm_rvu_af_pf_rst_t
#define bustype_CAVM_RVU_AF_PF_RST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PF_RST "RVU_AF_PF_RST"
#define device_bar_CAVM_RVU_AF_PF_RST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PF_RST 0
#define arguments_CAVM_RVU_AF_PF_RST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfaf_mbox_int
 *
 * RVU Admin Function PF to AF Mailbox Interrupt Registers
 */
union cavm_rvu_af_pfaf_mbox_int
{
    uint64_t u;
    struct cavm_rvu_af_pfaf_mbox_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t mbox                  : 24; /**< [ 23:  0](R/W1C/H) Mailbox interrupt bit per PF.
                                                                 Each bit is set when the PF writes to the corresponding
                                                                 RVU_PF_PFAF_MBOX(1) register. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 24; /**< [ 23:  0](R/W1C/H) Mailbox interrupt bit per PF.
                                                                 Each bit is set when the PF writes to the corresponding
                                                                 RVU_PF_PFAF_MBOX(1) register. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfaf_mbox_int_s cn9; */
    struct cavm_rvu_af_pfaf_mbox_int_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t mbox                  : 16; /**< [ 15:  0](R/W1C/H) Mailbox interrupt bit per PF.
                                                                 Each bit is set when the PF writes to the corresponding
                                                                 RVU_PF_PFAF_MBOX(1) register. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 16; /**< [ 15:  0](R/W1C/H) Mailbox interrupt bit per PF.
                                                                 Each bit is set when the PF writes to the corresponding
                                                                 RVU_PF_PFAF_MBOX(1) register. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfaf_mbox_int_s cn98xx; */
    /* struct cavm_rvu_af_pfaf_mbox_int_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfaf_mbox_int_cn96xx loki; */
};
typedef union cavm_rvu_af_pfaf_mbox_int cavm_rvu_af_pfaf_mbox_int_t;

#define CAVM_RVU_AF_PFAF_MBOX_INT CAVM_RVU_AF_PFAF_MBOX_INT_FUNC()
static inline uint64_t CAVM_RVU_AF_PFAF_MBOX_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFAF_MBOX_INT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000002880ll;
    __cavm_csr_fatal("RVU_AF_PFAF_MBOX_INT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFAF_MBOX_INT cavm_rvu_af_pfaf_mbox_int_t
#define bustype_CAVM_RVU_AF_PFAF_MBOX_INT CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFAF_MBOX_INT "RVU_AF_PFAF_MBOX_INT"
#define device_bar_CAVM_RVU_AF_PFAF_MBOX_INT 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFAF_MBOX_INT 0
#define arguments_CAVM_RVU_AF_PFAF_MBOX_INT -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfaf_mbox_int_ena_w1c
 *
 * RVU Admin Function PF to AF Mailbox Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_rvu_af_pfaf_mbox_int_ena_w1c
{
    uint64_t u;
    struct cavm_rvu_af_pfaf_mbox_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t mbox                  : 24; /**< [ 23:  0](R/W1C/H) Reads or clears enable for RVU_AF_PFAF_MBOX_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 24; /**< [ 23:  0](R/W1C/H) Reads or clears enable for RVU_AF_PFAF_MBOX_INT[MBOX]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfaf_mbox_int_ena_w1c_s cn9; */
    struct cavm_rvu_af_pfaf_mbox_int_ena_w1c_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t mbox                  : 16; /**< [ 15:  0](R/W1C/H) Reads or clears enable for RVU_AF_PFAF_MBOX_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 16; /**< [ 15:  0](R/W1C/H) Reads or clears enable for RVU_AF_PFAF_MBOX_INT[MBOX]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfaf_mbox_int_ena_w1c_s cn98xx; */
    /* struct cavm_rvu_af_pfaf_mbox_int_ena_w1c_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfaf_mbox_int_ena_w1c_cn96xx loki; */
};
typedef union cavm_rvu_af_pfaf_mbox_int_ena_w1c cavm_rvu_af_pfaf_mbox_int_ena_w1c_t;

#define CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1C CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000002898ll;
    __cavm_csr_fatal("RVU_AF_PFAF_MBOX_INT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1C cavm_rvu_af_pfaf_mbox_int_ena_w1c_t
#define bustype_CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1C CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1C "RVU_AF_PFAF_MBOX_INT_ENA_W1C"
#define device_bar_CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1C 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1C 0
#define arguments_CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfaf_mbox_int_ena_w1s
 *
 * RVU Admin Function PF to AF Mailbox Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_rvu_af_pfaf_mbox_int_ena_w1s
{
    uint64_t u;
    struct cavm_rvu_af_pfaf_mbox_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t mbox                  : 24; /**< [ 23:  0](R/W1S/H) Reads or sets enable for RVU_AF_PFAF_MBOX_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 24; /**< [ 23:  0](R/W1S/H) Reads or sets enable for RVU_AF_PFAF_MBOX_INT[MBOX]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfaf_mbox_int_ena_w1s_s cn9; */
    struct cavm_rvu_af_pfaf_mbox_int_ena_w1s_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t mbox                  : 16; /**< [ 15:  0](R/W1S/H) Reads or sets enable for RVU_AF_PFAF_MBOX_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 16; /**< [ 15:  0](R/W1S/H) Reads or sets enable for RVU_AF_PFAF_MBOX_INT[MBOX]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfaf_mbox_int_ena_w1s_s cn98xx; */
    /* struct cavm_rvu_af_pfaf_mbox_int_ena_w1s_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfaf_mbox_int_ena_w1s_cn96xx loki; */
};
typedef union cavm_rvu_af_pfaf_mbox_int_ena_w1s cavm_rvu_af_pfaf_mbox_int_ena_w1s_t;

#define CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1S CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000002890ll;
    __cavm_csr_fatal("RVU_AF_PFAF_MBOX_INT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1S cavm_rvu_af_pfaf_mbox_int_ena_w1s_t
#define bustype_CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1S "RVU_AF_PFAF_MBOX_INT_ENA_W1S"
#define device_bar_CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1S 0
#define arguments_CAVM_RVU_AF_PFAF_MBOX_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfaf_mbox_int_w1s
 *
 * RVU Admin Function PF to AF Mailbox Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_rvu_af_pfaf_mbox_int_w1s
{
    uint64_t u;
    struct cavm_rvu_af_pfaf_mbox_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t mbox                  : 24; /**< [ 23:  0](R/W1S/H) Reads or sets RVU_AF_PFAF_MBOX_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 24; /**< [ 23:  0](R/W1S/H) Reads or sets RVU_AF_PFAF_MBOX_INT[MBOX]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfaf_mbox_int_w1s_s cn9; */
    struct cavm_rvu_af_pfaf_mbox_int_w1s_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t mbox                  : 16; /**< [ 15:  0](R/W1S/H) Reads or sets RVU_AF_PFAF_MBOX_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 16; /**< [ 15:  0](R/W1S/H) Reads or sets RVU_AF_PFAF_MBOX_INT[MBOX]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfaf_mbox_int_w1s_s cn98xx; */
    /* struct cavm_rvu_af_pfaf_mbox_int_w1s_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfaf_mbox_int_w1s_cn96xx loki; */
};
typedef union cavm_rvu_af_pfaf_mbox_int_w1s cavm_rvu_af_pfaf_mbox_int_w1s_t;

#define CAVM_RVU_AF_PFAF_MBOX_INT_W1S CAVM_RVU_AF_PFAF_MBOX_INT_W1S_FUNC()
static inline uint64_t CAVM_RVU_AF_PFAF_MBOX_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFAF_MBOX_INT_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000002888ll;
    __cavm_csr_fatal("RVU_AF_PFAF_MBOX_INT_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFAF_MBOX_INT_W1S cavm_rvu_af_pfaf_mbox_int_w1s_t
#define bustype_CAVM_RVU_AF_PFAF_MBOX_INT_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFAF_MBOX_INT_W1S "RVU_AF_PFAF_MBOX_INT_W1S"
#define device_bar_CAVM_RVU_AF_PFAF_MBOX_INT_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFAF_MBOX_INT_W1S 0
#define arguments_CAVM_RVU_AF_PFAF_MBOX_INT_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfflr_int
 *
 * RVU Admin Function PF Function Level Reset Interrupt Registers
 */
union cavm_rvu_af_pfflr_int
{
    uint64_t u;
    struct cavm_rvu_af_pfflr_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t flr                   : 24; /**< [ 23:  0](R/W1C/H) FLR interrupt bit per PF.

                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, each bit is set along with
                                                                 the corresponding bit in RVU_AF_PFTRPEND when function level reset is
                                                                 initiated for the associated PF, i.e. a one is written to
                                                                 PCCPF_XXX_E_DEV_CTL[BCR_FLR]. */
#else /* Word 0 - Little Endian */
        uint64_t flr                   : 24; /**< [ 23:  0](R/W1C/H) FLR interrupt bit per PF.

                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, each bit is set along with
                                                                 the corresponding bit in RVU_AF_PFTRPEND when function level reset is
                                                                 initiated for the associated PF, i.e. a one is written to
                                                                 PCCPF_XXX_E_DEV_CTL[BCR_FLR]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfflr_int_s cn9; */
    struct cavm_rvu_af_pfflr_int_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t flr                   : 16; /**< [ 15:  0](R/W1C/H) FLR interrupt bit per PF.

                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, each bit is set along with
                                                                 the corresponding bit in RVU_AF_PFTRPEND when function level reset is
                                                                 initiated for the associated PF, i.e. a one is written to
                                                                 PCCPF_XXX_E_DEV_CTL[BCR_FLR]. */
#else /* Word 0 - Little Endian */
        uint64_t flr                   : 16; /**< [ 15:  0](R/W1C/H) FLR interrupt bit per PF.

                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, each bit is set along with
                                                                 the corresponding bit in RVU_AF_PFTRPEND when function level reset is
                                                                 initiated for the associated PF, i.e. a one is written to
                                                                 PCCPF_XXX_E_DEV_CTL[BCR_FLR]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfflr_int_s cn98xx; */
    /* struct cavm_rvu_af_pfflr_int_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfflr_int_cn96xx loki; */
};
typedef union cavm_rvu_af_pfflr_int cavm_rvu_af_pfflr_int_t;

#define CAVM_RVU_AF_PFFLR_INT CAVM_RVU_AF_PFFLR_INT_FUNC()
static inline uint64_t CAVM_RVU_AF_PFFLR_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFFLR_INT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x8400000028a0ll;
    __cavm_csr_fatal("RVU_AF_PFFLR_INT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFFLR_INT cavm_rvu_af_pfflr_int_t
#define bustype_CAVM_RVU_AF_PFFLR_INT CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFFLR_INT "RVU_AF_PFFLR_INT"
#define device_bar_CAVM_RVU_AF_PFFLR_INT 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFFLR_INT 0
#define arguments_CAVM_RVU_AF_PFFLR_INT -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfflr_int_ena_w1c
 *
 * RVU Admin Function PF Function Level Reset Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_rvu_af_pfflr_int_ena_w1c
{
    uint64_t u;
    struct cavm_rvu_af_pfflr_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t flr                   : 24; /**< [ 23:  0](R/W1C/H) Reads or clears enable for RVU_AF_PFFLR_INT[FLR]. */
#else /* Word 0 - Little Endian */
        uint64_t flr                   : 24; /**< [ 23:  0](R/W1C/H) Reads or clears enable for RVU_AF_PFFLR_INT[FLR]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfflr_int_ena_w1c_s cn9; */
    struct cavm_rvu_af_pfflr_int_ena_w1c_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t flr                   : 16; /**< [ 15:  0](R/W1C/H) Reads or clears enable for RVU_AF_PFFLR_INT[FLR]. */
#else /* Word 0 - Little Endian */
        uint64_t flr                   : 16; /**< [ 15:  0](R/W1C/H) Reads or clears enable for RVU_AF_PFFLR_INT[FLR]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfflr_int_ena_w1c_s cn98xx; */
    /* struct cavm_rvu_af_pfflr_int_ena_w1c_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfflr_int_ena_w1c_cn96xx loki; */
};
typedef union cavm_rvu_af_pfflr_int_ena_w1c cavm_rvu_af_pfflr_int_ena_w1c_t;

#define CAVM_RVU_AF_PFFLR_INT_ENA_W1C CAVM_RVU_AF_PFFLR_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_RVU_AF_PFFLR_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFFLR_INT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x8400000028b8ll;
    __cavm_csr_fatal("RVU_AF_PFFLR_INT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFFLR_INT_ENA_W1C cavm_rvu_af_pfflr_int_ena_w1c_t
#define bustype_CAVM_RVU_AF_PFFLR_INT_ENA_W1C CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFFLR_INT_ENA_W1C "RVU_AF_PFFLR_INT_ENA_W1C"
#define device_bar_CAVM_RVU_AF_PFFLR_INT_ENA_W1C 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFFLR_INT_ENA_W1C 0
#define arguments_CAVM_RVU_AF_PFFLR_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfflr_int_ena_w1s
 *
 * RVU Admin Function PF Function Level Reset Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_rvu_af_pfflr_int_ena_w1s
{
    uint64_t u;
    struct cavm_rvu_af_pfflr_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t flr                   : 24; /**< [ 23:  0](R/W1S/H) Reads or sets enable for RVU_AF_PFFLR_INT[FLR]. */
#else /* Word 0 - Little Endian */
        uint64_t flr                   : 24; /**< [ 23:  0](R/W1S/H) Reads or sets enable for RVU_AF_PFFLR_INT[FLR]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfflr_int_ena_w1s_s cn9; */
    struct cavm_rvu_af_pfflr_int_ena_w1s_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t flr                   : 16; /**< [ 15:  0](R/W1S/H) Reads or sets enable for RVU_AF_PFFLR_INT[FLR]. */
#else /* Word 0 - Little Endian */
        uint64_t flr                   : 16; /**< [ 15:  0](R/W1S/H) Reads or sets enable for RVU_AF_PFFLR_INT[FLR]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfflr_int_ena_w1s_s cn98xx; */
    /* struct cavm_rvu_af_pfflr_int_ena_w1s_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfflr_int_ena_w1s_cn96xx loki; */
};
typedef union cavm_rvu_af_pfflr_int_ena_w1s cavm_rvu_af_pfflr_int_ena_w1s_t;

#define CAVM_RVU_AF_PFFLR_INT_ENA_W1S CAVM_RVU_AF_PFFLR_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_RVU_AF_PFFLR_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFFLR_INT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x8400000028b0ll;
    __cavm_csr_fatal("RVU_AF_PFFLR_INT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFFLR_INT_ENA_W1S cavm_rvu_af_pfflr_int_ena_w1s_t
#define bustype_CAVM_RVU_AF_PFFLR_INT_ENA_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFFLR_INT_ENA_W1S "RVU_AF_PFFLR_INT_ENA_W1S"
#define device_bar_CAVM_RVU_AF_PFFLR_INT_ENA_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFFLR_INT_ENA_W1S 0
#define arguments_CAVM_RVU_AF_PFFLR_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfflr_int_w1s
 *
 * RVU Admin Function PF Function Level Reset Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_rvu_af_pfflr_int_w1s
{
    uint64_t u;
    struct cavm_rvu_af_pfflr_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t flr                   : 24; /**< [ 23:  0](R/W1S/H) Reads or sets RVU_AF_PFFLR_INT[FLR]. */
#else /* Word 0 - Little Endian */
        uint64_t flr                   : 24; /**< [ 23:  0](R/W1S/H) Reads or sets RVU_AF_PFFLR_INT[FLR]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfflr_int_w1s_s cn9; */
    struct cavm_rvu_af_pfflr_int_w1s_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t flr                   : 16; /**< [ 15:  0](R/W1S/H) Reads or sets RVU_AF_PFFLR_INT[FLR]. */
#else /* Word 0 - Little Endian */
        uint64_t flr                   : 16; /**< [ 15:  0](R/W1S/H) Reads or sets RVU_AF_PFFLR_INT[FLR]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfflr_int_w1s_s cn98xx; */
    /* struct cavm_rvu_af_pfflr_int_w1s_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfflr_int_w1s_cn96xx loki; */
};
typedef union cavm_rvu_af_pfflr_int_w1s cavm_rvu_af_pfflr_int_w1s_t;

#define CAVM_RVU_AF_PFFLR_INT_W1S CAVM_RVU_AF_PFFLR_INT_W1S_FUNC()
static inline uint64_t CAVM_RVU_AF_PFFLR_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFFLR_INT_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x8400000028a8ll;
    __cavm_csr_fatal("RVU_AF_PFFLR_INT_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFFLR_INT_W1S cavm_rvu_af_pfflr_int_w1s_t
#define bustype_CAVM_RVU_AF_PFFLR_INT_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFFLR_INT_W1S "RVU_AF_PFFLR_INT_W1S"
#define device_bar_CAVM_RVU_AF_PFFLR_INT_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFFLR_INT_W1S 0
#define arguments_CAVM_RVU_AF_PFFLR_INT_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfme_int
 *
 * RVU Admin Function PF Bus Master Enable Interrupt Registers
 */
union cavm_rvu_af_pfme_int
{
    uint64_t u;
    struct cavm_rvu_af_pfme_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t me                    : 24; /**< [ 23:  0](R/W1C/H) Master enable interrupt bit per PF.
                                                                 A device-dependent AF driver typically uses these bits to handle state
                                                                 changes to PCCPF_XXX_CMD[ME], which are typically modified by
                                                                 non-device-dependent software only.

                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, each bit is set when the
                                                                 corresponding PCCPF_XXX_CMD[ME] bit is either set or cleared for the
                                                                 associated PF. The corresponding bit in RVU_AF_PFME_STATUS returns the
                                                                 current value of PCCPF_XXX_CMD[ME].

                                                                 Note that if RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, the corresponding
                                                                 bit in RVU_AF_PFTRPEND is also set when PCCPF_XXX_CMD[ME] is set, but not
                                                                 when PCCPF_XXX_CMD[ME] is cleared. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 24; /**< [ 23:  0](R/W1C/H) Master enable interrupt bit per PF.
                                                                 A device-dependent AF driver typically uses these bits to handle state
                                                                 changes to PCCPF_XXX_CMD[ME], which are typically modified by
                                                                 non-device-dependent software only.

                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, each bit is set when the
                                                                 corresponding PCCPF_XXX_CMD[ME] bit is either set or cleared for the
                                                                 associated PF. The corresponding bit in RVU_AF_PFME_STATUS returns the
                                                                 current value of PCCPF_XXX_CMD[ME].

                                                                 Note that if RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, the corresponding
                                                                 bit in RVU_AF_PFTRPEND is also set when PCCPF_XXX_CMD[ME] is set, but not
                                                                 when PCCPF_XXX_CMD[ME] is cleared. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfme_int_s cn9; */
    struct cavm_rvu_af_pfme_int_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t me                    : 16; /**< [ 15:  0](R/W1C/H) Master enable interrupt bit per PF.
                                                                 A device-dependent AF driver typically uses these bits to handle state
                                                                 changes to PCCPF_XXX_CMD[ME], which are typically modified by
                                                                 non-device-dependent software only.

                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, each bit is set when the
                                                                 corresponding PCCPF_XXX_CMD[ME] bit is either set or cleared for the
                                                                 associated PF. The corresponding bit in RVU_AF_PFME_STATUS returns the
                                                                 current value of PCCPF_XXX_CMD[ME].

                                                                 Note that if RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, the corresponding
                                                                 bit in RVU_AF_PFTRPEND is also set when PCCPF_XXX_CMD[ME] is set, but not
                                                                 when PCCPF_XXX_CMD[ME] is cleared. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 16; /**< [ 15:  0](R/W1C/H) Master enable interrupt bit per PF.
                                                                 A device-dependent AF driver typically uses these bits to handle state
                                                                 changes to PCCPF_XXX_CMD[ME], which are typically modified by
                                                                 non-device-dependent software only.

                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, each bit is set when the
                                                                 corresponding PCCPF_XXX_CMD[ME] bit is either set or cleared for the
                                                                 associated PF. The corresponding bit in RVU_AF_PFME_STATUS returns the
                                                                 current value of PCCPF_XXX_CMD[ME].

                                                                 Note that if RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, the corresponding
                                                                 bit in RVU_AF_PFTRPEND is also set when PCCPF_XXX_CMD[ME] is set, but not
                                                                 when PCCPF_XXX_CMD[ME] is cleared. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfme_int_s cn98xx; */
    /* struct cavm_rvu_af_pfme_int_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfme_int_cn96xx loki; */
};
typedef union cavm_rvu_af_pfme_int cavm_rvu_af_pfme_int_t;

#define CAVM_RVU_AF_PFME_INT CAVM_RVU_AF_PFME_INT_FUNC()
static inline uint64_t CAVM_RVU_AF_PFME_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFME_INT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x8400000028c0ll;
    __cavm_csr_fatal("RVU_AF_PFME_INT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFME_INT cavm_rvu_af_pfme_int_t
#define bustype_CAVM_RVU_AF_PFME_INT CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFME_INT "RVU_AF_PFME_INT"
#define device_bar_CAVM_RVU_AF_PFME_INT 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFME_INT 0
#define arguments_CAVM_RVU_AF_PFME_INT -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfme_int_ena_w1c
 *
 * RVU Admin Function PF Bus Master Enable Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_rvu_af_pfme_int_ena_w1c
{
    uint64_t u;
    struct cavm_rvu_af_pfme_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t me                    : 24; /**< [ 23:  0](R/W1C/H) Reads or clears enable for RVU_AF_PFME_INT[ME]. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 24; /**< [ 23:  0](R/W1C/H) Reads or clears enable for RVU_AF_PFME_INT[ME]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfme_int_ena_w1c_s cn9; */
    struct cavm_rvu_af_pfme_int_ena_w1c_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t me                    : 16; /**< [ 15:  0](R/W1C/H) Reads or clears enable for RVU_AF_PFME_INT[ME]. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 16; /**< [ 15:  0](R/W1C/H) Reads or clears enable for RVU_AF_PFME_INT[ME]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfme_int_ena_w1c_s cn98xx; */
    /* struct cavm_rvu_af_pfme_int_ena_w1c_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfme_int_ena_w1c_cn96xx loki; */
};
typedef union cavm_rvu_af_pfme_int_ena_w1c cavm_rvu_af_pfme_int_ena_w1c_t;

#define CAVM_RVU_AF_PFME_INT_ENA_W1C CAVM_RVU_AF_PFME_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_RVU_AF_PFME_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFME_INT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x8400000028d8ll;
    __cavm_csr_fatal("RVU_AF_PFME_INT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFME_INT_ENA_W1C cavm_rvu_af_pfme_int_ena_w1c_t
#define bustype_CAVM_RVU_AF_PFME_INT_ENA_W1C CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFME_INT_ENA_W1C "RVU_AF_PFME_INT_ENA_W1C"
#define device_bar_CAVM_RVU_AF_PFME_INT_ENA_W1C 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFME_INT_ENA_W1C 0
#define arguments_CAVM_RVU_AF_PFME_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfme_int_ena_w1s
 *
 * RVU Admin Function PF Bus Master Enable Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_rvu_af_pfme_int_ena_w1s
{
    uint64_t u;
    struct cavm_rvu_af_pfme_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t me                    : 24; /**< [ 23:  0](R/W1S/H) Reads or sets enable for RVU_AF_PFME_INT[ME]. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 24; /**< [ 23:  0](R/W1S/H) Reads or sets enable for RVU_AF_PFME_INT[ME]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfme_int_ena_w1s_s cn9; */
    struct cavm_rvu_af_pfme_int_ena_w1s_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t me                    : 16; /**< [ 15:  0](R/W1S/H) Reads or sets enable for RVU_AF_PFME_INT[ME]. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 16; /**< [ 15:  0](R/W1S/H) Reads or sets enable for RVU_AF_PFME_INT[ME]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfme_int_ena_w1s_s cn98xx; */
    /* struct cavm_rvu_af_pfme_int_ena_w1s_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfme_int_ena_w1s_cn96xx loki; */
};
typedef union cavm_rvu_af_pfme_int_ena_w1s cavm_rvu_af_pfme_int_ena_w1s_t;

#define CAVM_RVU_AF_PFME_INT_ENA_W1S CAVM_RVU_AF_PFME_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_RVU_AF_PFME_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFME_INT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x8400000028d0ll;
    __cavm_csr_fatal("RVU_AF_PFME_INT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFME_INT_ENA_W1S cavm_rvu_af_pfme_int_ena_w1s_t
#define bustype_CAVM_RVU_AF_PFME_INT_ENA_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFME_INT_ENA_W1S "RVU_AF_PFME_INT_ENA_W1S"
#define device_bar_CAVM_RVU_AF_PFME_INT_ENA_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFME_INT_ENA_W1S 0
#define arguments_CAVM_RVU_AF_PFME_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfme_int_w1s
 *
 * RVU Admin Function PF Bus Master Enable Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_rvu_af_pfme_int_w1s
{
    uint64_t u;
    struct cavm_rvu_af_pfme_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t me                    : 24; /**< [ 23:  0](R/W1S/H) Reads or sets RVU_AF_PFME_INT[ME]. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 24; /**< [ 23:  0](R/W1S/H) Reads or sets RVU_AF_PFME_INT[ME]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfme_int_w1s_s cn9; */
    struct cavm_rvu_af_pfme_int_w1s_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t me                    : 16; /**< [ 15:  0](R/W1S/H) Reads or sets RVU_AF_PFME_INT[ME]. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 16; /**< [ 15:  0](R/W1S/H) Reads or sets RVU_AF_PFME_INT[ME]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfme_int_w1s_s cn98xx; */
    /* struct cavm_rvu_af_pfme_int_w1s_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfme_int_w1s_cn96xx loki; */
};
typedef union cavm_rvu_af_pfme_int_w1s cavm_rvu_af_pfme_int_w1s_t;

#define CAVM_RVU_AF_PFME_INT_W1S CAVM_RVU_AF_PFME_INT_W1S_FUNC()
static inline uint64_t CAVM_RVU_AF_PFME_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFME_INT_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x8400000028c8ll;
    __cavm_csr_fatal("RVU_AF_PFME_INT_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFME_INT_W1S cavm_rvu_af_pfme_int_w1s_t
#define bustype_CAVM_RVU_AF_PFME_INT_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFME_INT_W1S "RVU_AF_PFME_INT_W1S"
#define device_bar_CAVM_RVU_AF_PFME_INT_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFME_INT_W1S 0
#define arguments_CAVM_RVU_AF_PFME_INT_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pfme_status
 *
 * RVU Admin Function PF Bus Master Enable Status Registers
 */
union cavm_rvu_af_pfme_status
{
    uint64_t u;
    struct cavm_rvu_af_pfme_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t me                    : 24; /**< [ 23:  0](RO/H) Bus master enable bit per PF. Each bit returns the PF's
                                                                 PCCPF_XXX_CMD[ME] value. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 24; /**< [ 23:  0](RO/H) Bus master enable bit per PF. Each bit returns the PF's
                                                                 PCCPF_XXX_CMD[ME] value. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pfme_status_s cn9; */
    struct cavm_rvu_af_pfme_status_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t me                    : 16; /**< [ 15:  0](RO/H) Bus master enable bit per PF. Each bit returns the PF's
                                                                 PCCPF_XXX_CMD[ME] value. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 16; /**< [ 15:  0](RO/H) Bus master enable bit per PF. Each bit returns the PF's
                                                                 PCCPF_XXX_CMD[ME] value. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pfme_status_s cn98xx; */
    /* struct cavm_rvu_af_pfme_status_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pfme_status_cn96xx loki; */
};
typedef union cavm_rvu_af_pfme_status cavm_rvu_af_pfme_status_t;

#define CAVM_RVU_AF_PFME_STATUS CAVM_RVU_AF_PFME_STATUS_FUNC()
static inline uint64_t CAVM_RVU_AF_PFME_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFME_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000002800ll;
    __cavm_csr_fatal("RVU_AF_PFME_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFME_STATUS cavm_rvu_af_pfme_status_t
#define bustype_CAVM_RVU_AF_PFME_STATUS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFME_STATUS "RVU_AF_PFME_STATUS"
#define device_bar_CAVM_RVU_AF_PFME_STATUS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFME_STATUS 0
#define arguments_CAVM_RVU_AF_PFME_STATUS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pftrpend
 *
 * RVU Admin Function PF Transaction Pending Registers
 */
union cavm_rvu_af_pftrpend
{
    uint64_t u;
    struct cavm_rvu_af_pftrpend_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t trpend                : 24; /**< [ 23:  0](R/W1C/H) Transaction pending bit per PF.

                                                                 A PF's bit is set when RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set and:
                                                                 * A one is written to the corresponding PCCPF_XXX_E_DEV_CTL[BCR_FLR], or
                                                                 * PCCPF_XXX_CMD[ME] is set or cleared.

                                                                 When a PF's bit is set, forces the corresponding
                                                                 PCCPF_XXX_E_DEV_CTL[TRPEND] to be set.

                                                                 Software (typically a device-dependent AF driver) can clear the bit by
                                                                 writing a 1. */
#else /* Word 0 - Little Endian */
        uint64_t trpend                : 24; /**< [ 23:  0](R/W1C/H) Transaction pending bit per PF.

                                                                 A PF's bit is set when RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set and:
                                                                 * A one is written to the corresponding PCCPF_XXX_E_DEV_CTL[BCR_FLR], or
                                                                 * PCCPF_XXX_CMD[ME] is set or cleared.

                                                                 When a PF's bit is set, forces the corresponding
                                                                 PCCPF_XXX_E_DEV_CTL[TRPEND] to be set.

                                                                 Software (typically a device-dependent AF driver) can clear the bit by
                                                                 writing a 1. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pftrpend_s cn9; */
    struct cavm_rvu_af_pftrpend_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t trpend                : 16; /**< [ 15:  0](R/W1C/H) Transaction pending bit per PF.

                                                                 A PF's bit is set when RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set and:
                                                                 * A one is written to the corresponding PCCPF_XXX_E_DEV_CTL[BCR_FLR], or
                                                                 * PCCPF_XXX_CMD[ME] is set or cleared.

                                                                 When a PF's bit is set, forces the corresponding
                                                                 PCCPF_XXX_E_DEV_CTL[TRPEND] to be set.

                                                                 Software (typically a device-dependent AF driver) can clear the bit by
                                                                 writing a 1. */
#else /* Word 0 - Little Endian */
        uint64_t trpend                : 16; /**< [ 15:  0](R/W1C/H) Transaction pending bit per PF.

                                                                 A PF's bit is set when RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set and:
                                                                 * A one is written to the corresponding PCCPF_XXX_E_DEV_CTL[BCR_FLR], or
                                                                 * PCCPF_XXX_CMD[ME] is set or cleared.

                                                                 When a PF's bit is set, forces the corresponding
                                                                 PCCPF_XXX_E_DEV_CTL[TRPEND] to be set.

                                                                 Software (typically a device-dependent AF driver) can clear the bit by
                                                                 writing a 1. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pftrpend_s cn98xx; */
    /* struct cavm_rvu_af_pftrpend_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pftrpend_cn96xx loki; */
};
typedef union cavm_rvu_af_pftrpend cavm_rvu_af_pftrpend_t;

#define CAVM_RVU_AF_PFTRPEND CAVM_RVU_AF_PFTRPEND_FUNC()
static inline uint64_t CAVM_RVU_AF_PFTRPEND_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFTRPEND_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000002810ll;
    __cavm_csr_fatal("RVU_AF_PFTRPEND", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFTRPEND cavm_rvu_af_pftrpend_t
#define bustype_CAVM_RVU_AF_PFTRPEND CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFTRPEND "RVU_AF_PFTRPEND"
#define device_bar_CAVM_RVU_AF_PFTRPEND 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFTRPEND 0
#define arguments_CAVM_RVU_AF_PFTRPEND -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_pftrpend_w1s
 *
 * RVU Admin Function PF Transaction Pending Set Registers
 * This register reads or sets bits.
 */
union cavm_rvu_af_pftrpend_w1s
{
    uint64_t u;
    struct cavm_rvu_af_pftrpend_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t trpend                : 24; /**< [ 23:  0](R/W1S/H) Reads or sets RVU_AF_PFTRPEND[TRPEND]. */
#else /* Word 0 - Little Endian */
        uint64_t trpend                : 24; /**< [ 23:  0](R/W1S/H) Reads or sets RVU_AF_PFTRPEND[TRPEND]. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_pftrpend_w1s_s cn9; */
    struct cavm_rvu_af_pftrpend_w1s_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t trpend                : 16; /**< [ 15:  0](R/W1S/H) Reads or sets RVU_AF_PFTRPEND[TRPEND]. */
#else /* Word 0 - Little Endian */
        uint64_t trpend                : 16; /**< [ 15:  0](R/W1S/H) Reads or sets RVU_AF_PFTRPEND[TRPEND]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_pftrpend_w1s_s cn98xx; */
    /* struct cavm_rvu_af_pftrpend_w1s_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_pftrpend_w1s_cn96xx loki; */
};
typedef union cavm_rvu_af_pftrpend_w1s cavm_rvu_af_pftrpend_w1s_t;

#define CAVM_RVU_AF_PFTRPEND_W1S CAVM_RVU_AF_PFTRPEND_W1S_FUNC()
static inline uint64_t CAVM_RVU_AF_PFTRPEND_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_PFTRPEND_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000002820ll;
    __cavm_csr_fatal("RVU_AF_PFTRPEND_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_PFTRPEND_W1S cavm_rvu_af_pftrpend_w1s_t
#define bustype_CAVM_RVU_AF_PFTRPEND_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_PFTRPEND_W1S "RVU_AF_PFTRPEND_W1S"
#define device_bar_CAVM_RVU_AF_PFTRPEND_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_PFTRPEND_W1S 0
#define arguments_CAVM_RVU_AF_PFTRPEND_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_ras
 *
 * RVU Admin Function RAS Interrupt Register
 * This register is intended for delivery of RAS events to the SCP, so should be
 * ignored by OS drivers.
 */
union cavm_rvu_af_ras
{
    uint64_t u;
    struct cavm_rvu_af_ras_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t bar4_mem_poison       : 1;  /**< [  1:  1](R/W1C/H) Received BAR4 read response with poisoned data. */
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1C/H) Received MSI-X table read response with poisoned data.
                                                                 RVUM drops the interrupt and does not generate a message to the GIC
                                                                 for that interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1C/H) Received MSI-X table read response with poisoned data.
                                                                 RVUM drops the interrupt and does not generate a message to the GIC
                                                                 for that interrupt. */
        uint64_t bar4_mem_poison       : 1;  /**< [  1:  1](R/W1C/H) Received BAR4 read response with poisoned data. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_ras_s cn9; */
    struct cavm_rvu_af_ras_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1C/H) Received MSI-X table read response with poisoned data.
                                                                 RVUM drops the interrupt and does not generate a message to the GIC
                                                                 for that interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1C/H) Received MSI-X table read response with poisoned data.
                                                                 RVUM drops the interrupt and does not generate a message to the GIC
                                                                 for that interrupt. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_ras_s cn98xx; */
    /* struct cavm_rvu_af_ras_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_ras_cn96xx loki; */
};
typedef union cavm_rvu_af_ras cavm_rvu_af_ras_t;

#define CAVM_RVU_AF_RAS CAVM_RVU_AF_RAS_FUNC()
static inline uint64_t CAVM_RVU_AF_RAS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_RAS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000000100ll;
    __cavm_csr_fatal("RVU_AF_RAS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_RAS cavm_rvu_af_ras_t
#define bustype_CAVM_RVU_AF_RAS CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_RAS "RVU_AF_RAS"
#define device_bar_CAVM_RVU_AF_RAS 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_RAS 0
#define arguments_CAVM_RVU_AF_RAS -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_ras_ena_w1c
 *
 * RVU Admin Function RAS Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_rvu_af_ras_ena_w1c
{
    uint64_t u;
    struct cavm_rvu_af_ras_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t bar4_mem_poison       : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for RVU_AF_RAS[BAR4_MEM_POISON]. */
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RVU_AF_RAS[MSIX_POISON]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RVU_AF_RAS[MSIX_POISON]. */
        uint64_t bar4_mem_poison       : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for RVU_AF_RAS[BAR4_MEM_POISON]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_ras_ena_w1c_s cn9; */
    struct cavm_rvu_af_ras_ena_w1c_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RVU_AF_RAS[MSIX_POISON]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RVU_AF_RAS[MSIX_POISON]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_ras_ena_w1c_s cn98xx; */
    /* struct cavm_rvu_af_ras_ena_w1c_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_ras_ena_w1c_cn96xx loki; */
};
typedef union cavm_rvu_af_ras_ena_w1c cavm_rvu_af_ras_ena_w1c_t;

#define CAVM_RVU_AF_RAS_ENA_W1C CAVM_RVU_AF_RAS_ENA_W1C_FUNC()
static inline uint64_t CAVM_RVU_AF_RAS_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_RAS_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000000118ll;
    __cavm_csr_fatal("RVU_AF_RAS_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_RAS_ENA_W1C cavm_rvu_af_ras_ena_w1c_t
#define bustype_CAVM_RVU_AF_RAS_ENA_W1C CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_RAS_ENA_W1C "RVU_AF_RAS_ENA_W1C"
#define device_bar_CAVM_RVU_AF_RAS_ENA_W1C 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_RAS_ENA_W1C 0
#define arguments_CAVM_RVU_AF_RAS_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_ras_ena_w1s
 *
 * RVU Admin Function RAS Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_rvu_af_ras_ena_w1s
{
    uint64_t u;
    struct cavm_rvu_af_ras_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t bar4_mem_poison       : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for RVU_AF_RAS[BAR4_MEM_POISON]. */
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RVU_AF_RAS[MSIX_POISON]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RVU_AF_RAS[MSIX_POISON]. */
        uint64_t bar4_mem_poison       : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for RVU_AF_RAS[BAR4_MEM_POISON]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_ras_ena_w1s_s cn9; */
    struct cavm_rvu_af_ras_ena_w1s_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RVU_AF_RAS[MSIX_POISON]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RVU_AF_RAS[MSIX_POISON]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_ras_ena_w1s_s cn98xx; */
    /* struct cavm_rvu_af_ras_ena_w1s_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_ras_ena_w1s_cn96xx loki; */
};
typedef union cavm_rvu_af_ras_ena_w1s cavm_rvu_af_ras_ena_w1s_t;

#define CAVM_RVU_AF_RAS_ENA_W1S CAVM_RVU_AF_RAS_ENA_W1S_FUNC()
static inline uint64_t CAVM_RVU_AF_RAS_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_RAS_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000000110ll;
    __cavm_csr_fatal("RVU_AF_RAS_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_RAS_ENA_W1S cavm_rvu_af_ras_ena_w1s_t
#define bustype_CAVM_RVU_AF_RAS_ENA_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_RAS_ENA_W1S "RVU_AF_RAS_ENA_W1S"
#define device_bar_CAVM_RVU_AF_RAS_ENA_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_RAS_ENA_W1S 0
#define arguments_CAVM_RVU_AF_RAS_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_af_ras_w1s
 *
 * RVU Admin Function RAS Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_rvu_af_ras_w1s
{
    uint64_t u;
    struct cavm_rvu_af_ras_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t bar4_mem_poison       : 1;  /**< [  1:  1](R/W1S/H) Reads or sets RVU_AF_RAS[BAR4_MEM_POISON]. */
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RVU_AF_RAS[MSIX_POISON]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RVU_AF_RAS[MSIX_POISON]. */
        uint64_t bar4_mem_poison       : 1;  /**< [  1:  1](R/W1S/H) Reads or sets RVU_AF_RAS[BAR4_MEM_POISON]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_af_ras_w1s_s cn9; */
    struct cavm_rvu_af_ras_w1s_cn96xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RVU_AF_RAS[MSIX_POISON]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_poison           : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RVU_AF_RAS[MSIX_POISON]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn96xx;
    /* struct cavm_rvu_af_ras_w1s_s cn98xx; */
    /* struct cavm_rvu_af_ras_w1s_cn96xx cnf95xx; */
    /* struct cavm_rvu_af_ras_w1s_cn96xx loki; */
};
typedef union cavm_rvu_af_ras_w1s cavm_rvu_af_ras_w1s_t;

#define CAVM_RVU_AF_RAS_W1S CAVM_RVU_AF_RAS_W1S_FUNC()
static inline uint64_t CAVM_RVU_AF_RAS_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_AF_RAS_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840000000108ll;
    __cavm_csr_fatal("RVU_AF_RAS_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_AF_RAS_W1S cavm_rvu_af_ras_w1s_t
#define bustype_CAVM_RVU_AF_RAS_W1S CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_AF_RAS_W1S "RVU_AF_RAS_W1S"
#define device_bar_CAVM_RVU_AF_RAS_W1S 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_AF_RAS_W1S 0
#define arguments_CAVM_RVU_AF_RAS_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_block_addr#_disc
 *
 * RVU PF Block Address Discovery Registers
 * These registers allow each PF driver to discover block resources that are
 * provisioned to its PF. The register's BLOCK_ADDR index is enumerated by
 * RVU_BLOCK_ADDR_E.
 */
union cavm_rvu_pf_block_addrx_disc
{
    uint64_t u;
    struct cavm_rvu_pf_block_addrx_disc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t btype                 : 8;  /**< [ 27: 20](RO/H) Block type enumerated by RVU_BLOCK_TYPE_E. */
        uint64_t rid                   : 8;  /**< [ 19: 12](RO/H) Revision ID of the block from RVU_PRIV_BLOCK_TYPE()_REV[RID]. */
        uint64_t imp                   : 1;  /**< [ 11: 11](RO/H) Implemented. When set, a block is present at this BLOCK_ADDR index as
                                                                 enumerated by RVU_BLOCK_ADDR_E. When clear, a block is not present and the
                                                                 remaining fields in the register are RAZ.

                                                                 Internal:
                                                                 Returns zero if the block is implemented but disabled or fused out.

                                                                 CN93XX:
                                                                 _ RVUM, LMT, NPA, NIX(0), NPC, NDC(0..2) = 1.
                                                                 _ SSO, SSOW, TIM = ~sso_cripple.
                                                                 _ CPT(0) = ~disable_crypto(0)
                                                                 _ All others = 0.

                                                                 CNF95XX:
                                                                 _ RVUM, LMT, NPA, NIX(0), NPC, NDC(0..2) = 1.
                                                                 _ SSO, SSOW, TIM = ~sso_cripple.
                                                                 _ All others = 0.

                                                                 CN98XX:
                                                                 _ RVUM, LMT, NPA, NIX(0..1), NPC, NDC(0..5) = 1.
                                                                 _ SSO, SSOW, TIM = ~sso_cripple.
                                                                 _ CPT(0..1) = ~disable_crypto(0..1).
                                                                 _ REE(0..1) = 1.
                                                                 _ All others = 0. */
        uint64_t reserved_9_10         : 2;
        uint64_t num_lfs               : 9;  /**< [  8:  0](RO/H) Number of local functions from the block that are provisioned to the VF/PF.
                                                                 When non-zero, the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in
                                                                 the block.
                                                                 Returns 0 for block types that do not have local functions, 0 or 1 for
                                                                 single-slot blocks; see RVU_BLOCK_TYPE_E. */
#else /* Word 0 - Little Endian */
        uint64_t num_lfs               : 9;  /**< [  8:  0](RO/H) Number of local functions from the block that are provisioned to the VF/PF.
                                                                 When non-zero, the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in
                                                                 the block.
                                                                 Returns 0 for block types that do not have local functions, 0 or 1 for
                                                                 single-slot blocks; see RVU_BLOCK_TYPE_E. */
        uint64_t reserved_9_10         : 2;
        uint64_t imp                   : 1;  /**< [ 11: 11](RO/H) Implemented. When set, a block is present at this BLOCK_ADDR index as
                                                                 enumerated by RVU_BLOCK_ADDR_E. When clear, a block is not present and the
                                                                 remaining fields in the register are RAZ.

                                                                 Internal:
                                                                 Returns zero if the block is implemented but disabled or fused out.

                                                                 CN93XX:
                                                                 _ RVUM, LMT, NPA, NIX(0), NPC, NDC(0..2) = 1.
                                                                 _ SSO, SSOW, TIM = ~sso_cripple.
                                                                 _ CPT(0) = ~disable_crypto(0)
                                                                 _ All others = 0.

                                                                 CNF95XX:
                                                                 _ RVUM, LMT, NPA, NIX(0), NPC, NDC(0..2) = 1.
                                                                 _ SSO, SSOW, TIM = ~sso_cripple.
                                                                 _ All others = 0.

                                                                 CN98XX:
                                                                 _ RVUM, LMT, NPA, NIX(0..1), NPC, NDC(0..5) = 1.
                                                                 _ SSO, SSOW, TIM = ~sso_cripple.
                                                                 _ CPT(0..1) = ~disable_crypto(0..1).
                                                                 _ REE(0..1) = 1.
                                                                 _ All others = 0. */
        uint64_t rid                   : 8;  /**< [ 19: 12](RO/H) Revision ID of the block from RVU_PRIV_BLOCK_TYPE()_REV[RID]. */
        uint64_t btype                 : 8;  /**< [ 27: 20](RO/H) Block type enumerated by RVU_BLOCK_TYPE_E. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_block_addrx_disc_s cn; */
};
typedef union cavm_rvu_pf_block_addrx_disc cavm_rvu_pf_block_addrx_disc_t;

static inline uint64_t CAVM_RVU_PF_BLOCK_ADDRX_DISC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_BLOCK_ADDRX_DISC(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=31))
        return 0x840200000200ll + 8ll * ((a) & 0x1f);
    __cavm_csr_fatal("RVU_PF_BLOCK_ADDRX_DISC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_BLOCK_ADDRX_DISC(a) cavm_rvu_pf_block_addrx_disc_t
#define bustype_CAVM_RVU_PF_BLOCK_ADDRX_DISC(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_BLOCK_ADDRX_DISC(a) "RVU_PF_BLOCK_ADDRX_DISC"
#define device_bar_CAVM_RVU_PF_BLOCK_ADDRX_DISC(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_BLOCK_ADDRX_DISC(a) (a)
#define arguments_CAVM_RVU_PF_BLOCK_ADDRX_DISC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_int
 *
 * RVU PF Interrupt Registers
 */
union cavm_rvu_pf_int
{
    uint64_t u;
    struct cavm_rvu_pf_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) AF to PF mailbox interrupt. Set when RVU_AF_AFPF()_MBOX(0) is written. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) AF to PF mailbox interrupt. Set when RVU_AF_AFPF()_MBOX(0) is written. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_int_s cn; */
};
typedef union cavm_rvu_pf_int cavm_rvu_pf_int_t;

#define CAVM_RVU_PF_INT CAVM_RVU_PF_INT_FUNC()
static inline uint64_t CAVM_RVU_PF_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_INT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840200000c20ll;
    __cavm_csr_fatal("RVU_PF_INT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_INT cavm_rvu_pf_int_t
#define bustype_CAVM_RVU_PF_INT CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_INT "RVU_PF_INT"
#define device_bar_CAVM_RVU_PF_INT 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_INT 0
#define arguments_CAVM_RVU_PF_INT -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_int_ena_w1c
 *
 * RVU PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_rvu_pf_int_ena_w1c
{
    uint64_t u;
    struct cavm_rvu_pf_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RVU_PF_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RVU_PF_INT[MBOX]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_int_ena_w1c_s cn; */
};
typedef union cavm_rvu_pf_int_ena_w1c cavm_rvu_pf_int_ena_w1c_t;

#define CAVM_RVU_PF_INT_ENA_W1C CAVM_RVU_PF_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_RVU_PF_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_INT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840200000c38ll;
    __cavm_csr_fatal("RVU_PF_INT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_INT_ENA_W1C cavm_rvu_pf_int_ena_w1c_t
#define bustype_CAVM_RVU_PF_INT_ENA_W1C CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_INT_ENA_W1C "RVU_PF_INT_ENA_W1C"
#define device_bar_CAVM_RVU_PF_INT_ENA_W1C 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_INT_ENA_W1C 0
#define arguments_CAVM_RVU_PF_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_int_ena_w1s
 *
 * RVU PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_rvu_pf_int_ena_w1s
{
    uint64_t u;
    struct cavm_rvu_pf_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RVU_PF_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RVU_PF_INT[MBOX]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_int_ena_w1s_s cn; */
};
typedef union cavm_rvu_pf_int_ena_w1s cavm_rvu_pf_int_ena_w1s_t;

#define CAVM_RVU_PF_INT_ENA_W1S CAVM_RVU_PF_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_RVU_PF_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_INT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840200000c30ll;
    __cavm_csr_fatal("RVU_PF_INT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_INT_ENA_W1S cavm_rvu_pf_int_ena_w1s_t
#define bustype_CAVM_RVU_PF_INT_ENA_W1S CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_INT_ENA_W1S "RVU_PF_INT_ENA_W1S"
#define device_bar_CAVM_RVU_PF_INT_ENA_W1S 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_INT_ENA_W1S 0
#define arguments_CAVM_RVU_PF_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_int_w1s
 *
 * RVU PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_rvu_pf_int_w1s
{
    uint64_t u;
    struct cavm_rvu_pf_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RVU_PF_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RVU_PF_INT[MBOX]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_int_w1s_s cn; */
};
typedef union cavm_rvu_pf_int_w1s cavm_rvu_pf_int_w1s_t;

#define CAVM_RVU_PF_INT_W1S CAVM_RVU_PF_INT_W1S_FUNC()
static inline uint64_t CAVM_RVU_PF_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_INT_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840200000c28ll;
    __cavm_csr_fatal("RVU_PF_INT_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_INT_W1S cavm_rvu_pf_int_w1s_t
#define bustype_CAVM_RVU_PF_INT_W1S CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_INT_W1S "RVU_PF_INT_W1S"
#define device_bar_CAVM_RVU_PF_INT_W1S 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_INT_W1S 0
#define arguments_CAVM_RVU_PF_INT_W1S -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_msix_pba#
 *
 * RVU PF MSI-X Pending-Bit-Array Registers
 * This register is the MSI-X PF PBA table.
 */
union cavm_rvu_pf_msix_pbax
{
    uint64_t u;
    struct cavm_rvu_pf_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message bit for each MSI-X vector, i.e. one bit per
                                                                 RVU_PF_MSIX_VEC()_CTL register.
                                                                 The total number of bits for a given PF (and thus the number of PBA
                                                                 registers) is determined by RVU_PRIV_PF()_MSIX_CFG[VF_MSIXT_SIZEM1]
                                                                 (plus 1). */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message bit for each MSI-X vector, i.e. one bit per
                                                                 RVU_PF_MSIX_VEC()_CTL register.
                                                                 The total number of bits for a given PF (and thus the number of PBA
                                                                 registers) is determined by RVU_PRIV_PF()_MSIX_CFG[VF_MSIXT_SIZEM1]
                                                                 (plus 1). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_msix_pbax_s cn; */
};
typedef union cavm_rvu_pf_msix_pbax cavm_rvu_pf_msix_pbax_t;

static inline uint64_t CAVM_RVU_PF_MSIX_PBAX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_MSIX_PBAX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x8402000f0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("RVU_PF_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_MSIX_PBAX(a) cavm_rvu_pf_msix_pbax_t
#define bustype_CAVM_RVU_PF_MSIX_PBAX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_MSIX_PBAX(a) "RVU_PF_MSIX_PBAX"
#define device_bar_CAVM_RVU_PF_MSIX_PBAX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_MSIX_PBAX(a) (a)
#define arguments_CAVM_RVU_PF_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_msix_vec#_addr
 *
 * RVU PF MSI-X Vector-Table Address Registers
 * These registers and RVU_PF_MSIX_VEC()_CTL form the PF MSI-X vector table.
 * The number of MSI-X vectors for a given PF is specified by
 * RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1] (plus 1).
 *
 * Software must do a read after any writes to the MSI-X vector table to ensure
 * that the writes have completed before interrupts are generated to the modified
 * vectors.
 */
union cavm_rvu_pf_msix_vecx_addr
{
    uint64_t u;
    struct cavm_rvu_pf_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) PF IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's RVU_PF_MSIX_VEC()_ADDR, RVU_PF_MSIX_VEC()_CTL, and
                                                                 corresponding bit of RVU_PF_MSIX_PBA() are RAZ/WI and does not cause a
                                                                 fault when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_RVU_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors of the function are
                                                                 secure as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's RVU_PF_MSIX_VEC()_ADDR, RVU_PF_MSIX_VEC()_CTL, and
                                                                 corresponding bit of RVU_PF_MSIX_PBA() are RAZ/WI and does not cause a
                                                                 fault when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_RVU_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors of the function are
                                                                 secure as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) PF IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_msix_vecx_addr_s cn9; */
    /* struct cavm_rvu_pf_msix_vecx_addr_s cn96xx; */
    struct cavm_rvu_pf_msix_vecx_addr_cn98xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) PF IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).
                                                                 1 = This vector's RVU_PF_MSIX_VEC()_ADDR, RVU_PF_MSIX_VEC()_CTL, and
                                                                 corresponding bit of RVU_PF_MSIX_PBA() are RAZ/WI and does not cause a
                                                                 fault when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_RVU_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors of the function are
                                                                 secure as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).
                                                                 1 = This vector's RVU_PF_MSIX_VEC()_ADDR, RVU_PF_MSIX_VEC()_CTL, and
                                                                 corresponding bit of RVU_PF_MSIX_PBA() are RAZ/WI and does not cause a
                                                                 fault when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_RVU_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors of the function are
                                                                 secure as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) PF IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } cn98xx;
    struct cavm_rvu_pf_msix_vecx_addr_cnf95xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) PF IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's RVU_PF_MSIX_VEC()_ADDR, RVU_PF_MSIX_VEC()_CTL, and
                                                                 corresponding bit of RVU_PF_MSIX_PBA() are RAZ/WI and does not cause a
                                                                 fault when accessed by the nonsecure world.

                                                                 If PCCPF_RVU_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors of the function are
                                                                 secure as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's RVU_PF_MSIX_VEC()_ADDR, RVU_PF_MSIX_VEC()_CTL, and
                                                                 corresponding bit of RVU_PF_MSIX_PBA() are RAZ/WI and does not cause a
                                                                 fault when accessed by the nonsecure world.

                                                                 If PCCPF_RVU_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors of the function are
                                                                 secure as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) PF IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } cnf95xx;
    /* struct cavm_rvu_pf_msix_vecx_addr_cn98xx loki; */
};
typedef union cavm_rvu_pf_msix_vecx_addr cavm_rvu_pf_msix_vecx_addr_t;

static inline uint64_t CAVM_RVU_PF_MSIX_VECX_ADDR(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_MSIX_VECX_ADDR(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x840200080000ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("RVU_PF_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_MSIX_VECX_ADDR(a) cavm_rvu_pf_msix_vecx_addr_t
#define bustype_CAVM_RVU_PF_MSIX_VECX_ADDR(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_MSIX_VECX_ADDR(a) "RVU_PF_MSIX_VECX_ADDR"
#define device_bar_CAVM_RVU_PF_MSIX_VECX_ADDR(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_RVU_PF_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_msix_vec#_ctl
 *
 * RVU PF MSI-X Vector-Table Control and Data Registers
 * These registers and RVU_PF_MSIX_VEC()_ADDR form the PF MSI-X vector table.
 */
union cavm_rvu_pf_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_rvu_pf_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_msix_vecx_ctl_s cn; */
};
typedef union cavm_rvu_pf_msix_vecx_ctl cavm_rvu_pf_msix_vecx_ctl_t;

static inline uint64_t CAVM_RVU_PF_MSIX_VECX_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_MSIX_VECX_CTL(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x840200080008ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("RVU_PF_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_MSIX_VECX_CTL(a) cavm_rvu_pf_msix_vecx_ctl_t
#define bustype_CAVM_RVU_PF_MSIX_VECX_CTL(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_MSIX_VECX_CTL(a) "RVU_PF_MSIX_VECX_CTL"
#define device_bar_CAVM_RVU_PF_MSIX_VECX_CTL(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_RVU_PF_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_pfaf_mbox#
 *
 * RVU PF/AF Mailbox Registers
 */
union cavm_rvu_pf_pfaf_mboxx
{
    uint64_t u;
    struct cavm_rvu_pf_pfaf_mboxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These PF registers access the 16-byte-per-PF PF/AF
                                                                 mailbox.  The AF may access the same storage using
                                                                 RVU_AF_AFPF()_MBOX(). MBOX(0) is typically used for AF to PF
                                                                 signaling, MBOX(1) for PF to AF.
                                                                 Writing RVU_PF_PFAF_MBOX(1) (but not RVU_AF_AFPF()_MBOX(1))
                                                                 will set the corresponding RVU_AF_PFAF_MBOX_INT bit, which if appropriately
                                                                 enabled will send an interrupt to the AF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These PF registers access the 16-byte-per-PF PF/AF
                                                                 mailbox.  The AF may access the same storage using
                                                                 RVU_AF_AFPF()_MBOX(). MBOX(0) is typically used for AF to PF
                                                                 signaling, MBOX(1) for PF to AF.
                                                                 Writing RVU_PF_PFAF_MBOX(1) (but not RVU_AF_AFPF()_MBOX(1))
                                                                 will set the corresponding RVU_AF_PFAF_MBOX_INT bit, which if appropriately
                                                                 enabled will send an interrupt to the AF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_pfaf_mboxx_s cn; */
};
typedef union cavm_rvu_pf_pfaf_mboxx cavm_rvu_pf_pfaf_mboxx_t;

static inline uint64_t CAVM_RVU_PF_PFAF_MBOXX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_PFAF_MBOXX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x840200000c00ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_PFAF_MBOXX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_PFAF_MBOXX(a) cavm_rvu_pf_pfaf_mboxx_t
#define bustype_CAVM_RVU_PF_PFAF_MBOXX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_PFAF_MBOXX(a) "RVU_PF_PFAF_MBOXX"
#define device_bar_CAVM_RVU_PF_PFAF_MBOXX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_PFAF_MBOXX(a) (a)
#define arguments_CAVM_RVU_PF_PFAF_MBOXX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vf#_pfvf_mbox#
 *
 * RVU PF/VF Mailbox Registers
 */
union cavm_rvu_pf_vfx_pfvf_mboxx
{
    uint64_t u;
    struct cavm_rvu_pf_vfx_pfvf_mboxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These PF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. Each corresponding VF may access the same storage using
                                                                 RVU_VF_VFPF_MBOX(). MBOX(0) is typically used for PF to VF
                                                                 signaling, MBOX(1) for VF to PF. Writing RVU_PF_VF()_PFVF_MBOX(0) (but
                                                                 not RVU_VF_VFPF_MBOX(0)) will set the corresponding
                                                                 RVU_VF_INT[MBOX] which if appropriately enabled will send an
                                                                 interrupt to the VF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These PF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. Each corresponding VF may access the same storage using
                                                                 RVU_VF_VFPF_MBOX(). MBOX(0) is typically used for PF to VF
                                                                 signaling, MBOX(1) for VF to PF. Writing RVU_PF_VF()_PFVF_MBOX(0) (but
                                                                 not RVU_VF_VFPF_MBOX(0)) will set the corresponding
                                                                 RVU_VF_INT[MBOX] which if appropriately enabled will send an
                                                                 interrupt to the VF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfx_pfvf_mboxx_s cn; */
};
typedef union cavm_rvu_pf_vfx_pfvf_mboxx cavm_rvu_pf_vfx_pfvf_mboxx_t;

static inline uint64_t CAVM_RVU_PF_VFX_PFVF_MBOXX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFX_PFVF_MBOXX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && ((a<=127) && (b<=1)))
        return 0x840200000000ll + 0x1000ll * ((a) & 0x7f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFX_PFVF_MBOXX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFX_PFVF_MBOXX(a,b) cavm_rvu_pf_vfx_pfvf_mboxx_t
#define bustype_CAVM_RVU_PF_VFX_PFVF_MBOXX(a,b) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFX_PFVF_MBOXX(a,b) "RVU_PF_VFX_PFVF_MBOXX"
#define device_bar_CAVM_RVU_PF_VFX_PFVF_MBOXX(a,b) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFX_PFVF_MBOXX(a,b) (a)
#define arguments_CAVM_RVU_PF_VFX_PFVF_MBOXX(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vf_bar4_addr
 *
 * RVU PF VF BAR4 Address Registers
 */
union cavm_rvu_pf_vf_bar4_addr
{
    uint64_t u;
    struct cavm_rvu_pf_vf_bar4_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 48; /**< [ 63: 16](R/W) Programmable base address of RVU_PRIV_PF()_CFG[NVF] consecutive 64 KB
                                                                 pages in DRAM. May be used as VF/PF mailbox memory in addition to
                                                                 RVU_PF_VF()_PFVF_MBOX()/RVU_VF_VFPF_MBOX().
                                                                 Provides PCC_EA_ENTRY_S[BASEH,BASEL] value advertised by VF BAR4's entry in
                                                                 PCCPF_XXX_EA_ENTRY(). */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t addr                  : 48; /**< [ 63: 16](R/W) Programmable base address of RVU_PRIV_PF()_CFG[NVF] consecutive 64 KB
                                                                 pages in DRAM. May be used as VF/PF mailbox memory in addition to
                                                                 RVU_PF_VF()_PFVF_MBOX()/RVU_VF_VFPF_MBOX().
                                                                 Provides PCC_EA_ENTRY_S[BASEH,BASEL] value advertised by VF BAR4's entry in
                                                                 PCCPF_XXX_EA_ENTRY(). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vf_bar4_addr_s cn9; */
    /* struct cavm_rvu_pf_vf_bar4_addr_s cn96xxp1; */
    struct cavm_rvu_pf_vf_bar4_addr_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 48; /**< [ 63: 16](R/W) When RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is clear, programmable base physical
                                                                 address of the PF/VF mailbox memory, consisting of RVU_PRIV_PF()_CFG[NVF]
                                                                 consecutive 64 KB pages in LLC/DRAM.
                                                                 Provides PCC_EA_ENTRY_S[BASEH,BASEL] value advertised by VF BAR4's entry in
                                                                 PCCPF_XXX_EA_ENTRY().

                                                                 May be used as VF/PF mailbox memory in addition to
                                                                 RVU_PF_VF()_PFVF_MBOX()/RVU_VF_VFPF_MBOX().

                                                                 Not used when RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is set
                                                                 (RVU_AF_PF()_VF_BAR4_ADDR is used instead). */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t addr                  : 48; /**< [ 63: 16](R/W) When RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is clear, programmable base physical
                                                                 address of the PF/VF mailbox memory, consisting of RVU_PRIV_PF()_CFG[NVF]
                                                                 consecutive 64 KB pages in LLC/DRAM.
                                                                 Provides PCC_EA_ENTRY_S[BASEH,BASEL] value advertised by VF BAR4's entry in
                                                                 PCCPF_XXX_EA_ENTRY().

                                                                 May be used as VF/PF mailbox memory in addition to
                                                                 RVU_PF_VF()_PFVF_MBOX()/RVU_VF_VFPF_MBOX().

                                                                 Not used when RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is set
                                                                 (RVU_AF_PF()_VF_BAR4_ADDR is used instead). */
#endif /* Word 0 - End */
    } cn96xxp3;
    /* struct cavm_rvu_pf_vf_bar4_addr_cn96xxp3 cn98xx; */
    /* struct cavm_rvu_pf_vf_bar4_addr_s cnf95xx; */
    /* struct cavm_rvu_pf_vf_bar4_addr_cn96xxp3 loki; */
};
typedef union cavm_rvu_pf_vf_bar4_addr cavm_rvu_pf_vf_bar4_addr_t;

#define CAVM_RVU_PF_VF_BAR4_ADDR CAVM_RVU_PF_VF_BAR4_ADDR_FUNC()
static inline uint64_t CAVM_RVU_PF_VF_BAR4_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VF_BAR4_ADDR_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840200000010ll;
    __cavm_csr_fatal("RVU_PF_VF_BAR4_ADDR", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VF_BAR4_ADDR cavm_rvu_pf_vf_bar4_addr_t
#define bustype_CAVM_RVU_PF_VF_BAR4_ADDR CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VF_BAR4_ADDR "RVU_PF_VF_BAR4_ADDR"
#define device_bar_CAVM_RVU_PF_VF_BAR4_ADDR 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VF_BAR4_ADDR 0
#define arguments_CAVM_RVU_PF_VF_BAR4_ADDR -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfflr_int#
 *
 * RVU PF VF Function Level Reset Interrupt Registers
 */
union cavm_rvu_pf_vfflr_intx
{
    uint64_t u;
    struct cavm_rvu_pf_vfflr_intx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t flr                   : 64; /**< [ 63:  0](R/W1C/H) FLR interrupt bit per VF (RVU_PF_VFFLR_INT({a})[FLR]\<{b}\> for VF
                                                                 number 64*{a} + {b}).
                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, each bit is set along with
                                                                 the corresponding bit in RVU_PF_VFTRPEND() when function level reset is
                                                                 initiated for the associated VF, i.e. a one is written to
                                                                 PCCVF_XXX_E_DEV_CTL[BCR_FLR]. */
#else /* Word 0 - Little Endian */
        uint64_t flr                   : 64; /**< [ 63:  0](R/W1C/H) FLR interrupt bit per VF (RVU_PF_VFFLR_INT({a})[FLR]\<{b}\> for VF
                                                                 number 64*{a} + {b}).
                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, each bit is set along with
                                                                 the corresponding bit in RVU_PF_VFTRPEND() when function level reset is
                                                                 initiated for the associated VF, i.e. a one is written to
                                                                 PCCVF_XXX_E_DEV_CTL[BCR_FLR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfflr_intx_s cn; */
};
typedef union cavm_rvu_pf_vfflr_intx cavm_rvu_pf_vfflr_intx_t;

static inline uint64_t CAVM_RVU_PF_VFFLR_INTX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFFLR_INTX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x840200000900ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFFLR_INTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFFLR_INTX(a) cavm_rvu_pf_vfflr_intx_t
#define bustype_CAVM_RVU_PF_VFFLR_INTX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFFLR_INTX(a) "RVU_PF_VFFLR_INTX"
#define device_bar_CAVM_RVU_PF_VFFLR_INTX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFFLR_INTX(a) (a)
#define arguments_CAVM_RVU_PF_VFFLR_INTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfflr_int_ena_w1c#
 *
 * RVU PF VF Function Level Reset Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_rvu_pf_vfflr_int_ena_w1cx
{
    uint64_t u;
    struct cavm_rvu_pf_vfflr_int_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t flr                   : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for RVU_PF_VFFLR_INT(0..1)[FLR]. */
#else /* Word 0 - Little Endian */
        uint64_t flr                   : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for RVU_PF_VFFLR_INT(0..1)[FLR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfflr_int_ena_w1cx_s cn; */
};
typedef union cavm_rvu_pf_vfflr_int_ena_w1cx cavm_rvu_pf_vfflr_int_ena_w1cx_t;

static inline uint64_t CAVM_RVU_PF_VFFLR_INT_ENA_W1CX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFFLR_INT_ENA_W1CX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x840200000960ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFFLR_INT_ENA_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFFLR_INT_ENA_W1CX(a) cavm_rvu_pf_vfflr_int_ena_w1cx_t
#define bustype_CAVM_RVU_PF_VFFLR_INT_ENA_W1CX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFFLR_INT_ENA_W1CX(a) "RVU_PF_VFFLR_INT_ENA_W1CX"
#define device_bar_CAVM_RVU_PF_VFFLR_INT_ENA_W1CX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFFLR_INT_ENA_W1CX(a) (a)
#define arguments_CAVM_RVU_PF_VFFLR_INT_ENA_W1CX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfflr_int_ena_w1s#
 *
 * RVU PF VF Function Level Reset Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_rvu_pf_vfflr_int_ena_w1sx
{
    uint64_t u;
    struct cavm_rvu_pf_vfflr_int_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t flr                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for RVU_PF_VFFLR_INT(0..1)[FLR]. */
#else /* Word 0 - Little Endian */
        uint64_t flr                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for RVU_PF_VFFLR_INT(0..1)[FLR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfflr_int_ena_w1sx_s cn; */
};
typedef union cavm_rvu_pf_vfflr_int_ena_w1sx cavm_rvu_pf_vfflr_int_ena_w1sx_t;

static inline uint64_t CAVM_RVU_PF_VFFLR_INT_ENA_W1SX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFFLR_INT_ENA_W1SX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x840200000940ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFFLR_INT_ENA_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFFLR_INT_ENA_W1SX(a) cavm_rvu_pf_vfflr_int_ena_w1sx_t
#define bustype_CAVM_RVU_PF_VFFLR_INT_ENA_W1SX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFFLR_INT_ENA_W1SX(a) "RVU_PF_VFFLR_INT_ENA_W1SX"
#define device_bar_CAVM_RVU_PF_VFFLR_INT_ENA_W1SX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFFLR_INT_ENA_W1SX(a) (a)
#define arguments_CAVM_RVU_PF_VFFLR_INT_ENA_W1SX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfflr_int_w1s#
 *
 * RVU PF VF Function Level Reset Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_rvu_pf_vfflr_int_w1sx
{
    uint64_t u;
    struct cavm_rvu_pf_vfflr_int_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t flr                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets RVU_PF_VFFLR_INT(0..1)[FLR]. */
#else /* Word 0 - Little Endian */
        uint64_t flr                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets RVU_PF_VFFLR_INT(0..1)[FLR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfflr_int_w1sx_s cn; */
};
typedef union cavm_rvu_pf_vfflr_int_w1sx cavm_rvu_pf_vfflr_int_w1sx_t;

static inline uint64_t CAVM_RVU_PF_VFFLR_INT_W1SX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFFLR_INT_W1SX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x840200000920ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFFLR_INT_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFFLR_INT_W1SX(a) cavm_rvu_pf_vfflr_int_w1sx_t
#define bustype_CAVM_RVU_PF_VFFLR_INT_W1SX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFFLR_INT_W1SX(a) "RVU_PF_VFFLR_INT_W1SX"
#define device_bar_CAVM_RVU_PF_VFFLR_INT_W1SX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFFLR_INT_W1SX(a) (a)
#define arguments_CAVM_RVU_PF_VFFLR_INT_W1SX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfme_int#
 *
 * RVU PF VF Bus Master Enable Interrupt Registers
 */
union cavm_rvu_pf_vfme_intx
{
    uint64_t u;
    struct cavm_rvu_pf_vfme_intx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t me                    : 64; /**< [ 63:  0](R/W1C/H) Master enable interrupt bit per VF (RVU_PF_VFME_INT({a})[ME]\<{b}\> for VF
                                                                 number 64*{a} + {b}).
                                                                 A device-dependent PF driver typically uses these bits to handle state
                                                                 changes to PCCPF_XXX_CMD[ME], which are typically modified by
                                                                 non-device-dependent software only.

                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, each bit is set when the
                                                                 corresponding PCCVF_XXX_CMD[ME] bit is either set or cleared for the
                                                                 associated PF. The corresponding bit in RVU_PF_VFME_STATUS() returns the
                                                                 current value of PCCVF_XXX_CMD[ME].

                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, the corresponding bit in
                                                                 RVU_PF_VFTRPEND() is also set when PCCVF_XXX_CMD[ME] is set, but not
                                                                 when PCCVF_XXX_CMD[ME] is cleared. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 64; /**< [ 63:  0](R/W1C/H) Master enable interrupt bit per VF (RVU_PF_VFME_INT({a})[ME]\<{b}\> for VF
                                                                 number 64*{a} + {b}).
                                                                 A device-dependent PF driver typically uses these bits to handle state
                                                                 changes to PCCPF_XXX_CMD[ME], which are typically modified by
                                                                 non-device-dependent software only.

                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, each bit is set when the
                                                                 corresponding PCCVF_XXX_CMD[ME] bit is either set or cleared for the
                                                                 associated PF. The corresponding bit in RVU_PF_VFME_STATUS() returns the
                                                                 current value of PCCVF_XXX_CMD[ME].

                                                                 If RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set, the corresponding bit in
                                                                 RVU_PF_VFTRPEND() is also set when PCCVF_XXX_CMD[ME] is set, but not
                                                                 when PCCVF_XXX_CMD[ME] is cleared. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfme_intx_s cn; */
};
typedef union cavm_rvu_pf_vfme_intx cavm_rvu_pf_vfme_intx_t;

static inline uint64_t CAVM_RVU_PF_VFME_INTX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFME_INTX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x840200000980ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFME_INTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFME_INTX(a) cavm_rvu_pf_vfme_intx_t
#define bustype_CAVM_RVU_PF_VFME_INTX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFME_INTX(a) "RVU_PF_VFME_INTX"
#define device_bar_CAVM_RVU_PF_VFME_INTX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFME_INTX(a) (a)
#define arguments_CAVM_RVU_PF_VFME_INTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfme_int_ena_w1c#
 *
 * RVU PF VF Bus Master Enable Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_rvu_pf_vfme_int_ena_w1cx
{
    uint64_t u;
    struct cavm_rvu_pf_vfme_int_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t me                    : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for RVU_PF_VFME_INT(0..1)[ME]. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for RVU_PF_VFME_INT(0..1)[ME]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfme_int_ena_w1cx_s cn; */
};
typedef union cavm_rvu_pf_vfme_int_ena_w1cx cavm_rvu_pf_vfme_int_ena_w1cx_t;

static inline uint64_t CAVM_RVU_PF_VFME_INT_ENA_W1CX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFME_INT_ENA_W1CX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x8402000009e0ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFME_INT_ENA_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFME_INT_ENA_W1CX(a) cavm_rvu_pf_vfme_int_ena_w1cx_t
#define bustype_CAVM_RVU_PF_VFME_INT_ENA_W1CX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFME_INT_ENA_W1CX(a) "RVU_PF_VFME_INT_ENA_W1CX"
#define device_bar_CAVM_RVU_PF_VFME_INT_ENA_W1CX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFME_INT_ENA_W1CX(a) (a)
#define arguments_CAVM_RVU_PF_VFME_INT_ENA_W1CX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfme_int_ena_w1s#
 *
 * RVU PF VF Bus Master Enable Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_rvu_pf_vfme_int_ena_w1sx
{
    uint64_t u;
    struct cavm_rvu_pf_vfme_int_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t me                    : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for RVU_PF_VFME_INT(0..1)[ME]. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for RVU_PF_VFME_INT(0..1)[ME]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfme_int_ena_w1sx_s cn; */
};
typedef union cavm_rvu_pf_vfme_int_ena_w1sx cavm_rvu_pf_vfme_int_ena_w1sx_t;

static inline uint64_t CAVM_RVU_PF_VFME_INT_ENA_W1SX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFME_INT_ENA_W1SX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x8402000009c0ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFME_INT_ENA_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFME_INT_ENA_W1SX(a) cavm_rvu_pf_vfme_int_ena_w1sx_t
#define bustype_CAVM_RVU_PF_VFME_INT_ENA_W1SX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFME_INT_ENA_W1SX(a) "RVU_PF_VFME_INT_ENA_W1SX"
#define device_bar_CAVM_RVU_PF_VFME_INT_ENA_W1SX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFME_INT_ENA_W1SX(a) (a)
#define arguments_CAVM_RVU_PF_VFME_INT_ENA_W1SX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfme_int_w1s#
 *
 * RVU PF VF Bus Master Enable Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_rvu_pf_vfme_int_w1sx
{
    uint64_t u;
    struct cavm_rvu_pf_vfme_int_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t me                    : 64; /**< [ 63:  0](R/W1S/H) Reads or sets RVU_PF_VFME_INT(0..1)[ME]. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 64; /**< [ 63:  0](R/W1S/H) Reads or sets RVU_PF_VFME_INT(0..1)[ME]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfme_int_w1sx_s cn; */
};
typedef union cavm_rvu_pf_vfme_int_w1sx cavm_rvu_pf_vfme_int_w1sx_t;

static inline uint64_t CAVM_RVU_PF_VFME_INT_W1SX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFME_INT_W1SX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x8402000009a0ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFME_INT_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFME_INT_W1SX(a) cavm_rvu_pf_vfme_int_w1sx_t
#define bustype_CAVM_RVU_PF_VFME_INT_W1SX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFME_INT_W1SX(a) "RVU_PF_VFME_INT_W1SX"
#define device_bar_CAVM_RVU_PF_VFME_INT_W1SX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFME_INT_W1SX(a) (a)
#define arguments_CAVM_RVU_PF_VFME_INT_W1SX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfme_status#
 *
 * RVU PF VF Bus Master Enable Status Registers
 */
union cavm_rvu_pf_vfme_statusx
{
    uint64_t u;
    struct cavm_rvu_pf_vfme_statusx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t me                    : 64; /**< [ 63:  0](RO/H) Bus master enable bit per VF (RVU_PF_VFME_STATUS({a})[ME]\<{b}\> for VF
                                                                 number 64*{a} + {b}).
                                                                 Each bit returns the VF's PCCVF_XXX_CMD[ME] value. */
#else /* Word 0 - Little Endian */
        uint64_t me                    : 64; /**< [ 63:  0](RO/H) Bus master enable bit per VF (RVU_PF_VFME_STATUS({a})[ME]\<{b}\> for VF
                                                                 number 64*{a} + {b}).
                                                                 Each bit returns the VF's PCCVF_XXX_CMD[ME] value. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfme_statusx_s cn; */
};
typedef union cavm_rvu_pf_vfme_statusx cavm_rvu_pf_vfme_statusx_t;

static inline uint64_t CAVM_RVU_PF_VFME_STATUSX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFME_STATUSX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x840200000800ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFME_STATUSX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFME_STATUSX(a) cavm_rvu_pf_vfme_statusx_t
#define bustype_CAVM_RVU_PF_VFME_STATUSX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFME_STATUSX(a) "RVU_PF_VFME_STATUSX"
#define device_bar_CAVM_RVU_PF_VFME_STATUSX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFME_STATUSX(a) (a)
#define arguments_CAVM_RVU_PF_VFME_STATUSX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfpf_mbox_int#
 *
 * RVU VF to PF Mailbox Interrupt Registers
 */
union cavm_rvu_pf_vfpf_mbox_intx
{
    uint64_t u;
    struct cavm_rvu_pf_vfpf_mbox_intx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) Mailbox interrupt bit per VF (RVU_PF_VFPF_MBOX_INT({a})[MBOX]\<{b}\> for VF
                                                                 number 64*{a} + {b}).
                                                                 Each bit is set when the VF writes to the corresponding
                                                                 RVU_VF_VFPF_MBOX(1) register. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) Mailbox interrupt bit per VF (RVU_PF_VFPF_MBOX_INT({a})[MBOX]\<{b}\> for VF
                                                                 number 64*{a} + {b}).
                                                                 Each bit is set when the VF writes to the corresponding
                                                                 RVU_VF_VFPF_MBOX(1) register. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfpf_mbox_intx_s cn; */
};
typedef union cavm_rvu_pf_vfpf_mbox_intx cavm_rvu_pf_vfpf_mbox_intx_t;

static inline uint64_t CAVM_RVU_PF_VFPF_MBOX_INTX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFPF_MBOX_INTX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x840200000880ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFPF_MBOX_INTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFPF_MBOX_INTX(a) cavm_rvu_pf_vfpf_mbox_intx_t
#define bustype_CAVM_RVU_PF_VFPF_MBOX_INTX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFPF_MBOX_INTX(a) "RVU_PF_VFPF_MBOX_INTX"
#define device_bar_CAVM_RVU_PF_VFPF_MBOX_INTX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFPF_MBOX_INTX(a) (a)
#define arguments_CAVM_RVU_PF_VFPF_MBOX_INTX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfpf_mbox_int_ena_w1c#
 *
 * RVU VF to PF Mailbox Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_rvu_pf_vfpf_mbox_int_ena_w1cx
{
    uint64_t u;
    struct cavm_rvu_pf_vfpf_mbox_int_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for RVU_PF_VFPF_MBOX_INT(0..1)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for RVU_PF_VFPF_MBOX_INT(0..1)[MBOX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfpf_mbox_int_ena_w1cx_s cn; */
};
typedef union cavm_rvu_pf_vfpf_mbox_int_ena_w1cx cavm_rvu_pf_vfpf_mbox_int_ena_w1cx_t;

static inline uint64_t CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1CX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1CX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x8402000008e0ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFPF_MBOX_INT_ENA_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1CX(a) cavm_rvu_pf_vfpf_mbox_int_ena_w1cx_t
#define bustype_CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1CX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1CX(a) "RVU_PF_VFPF_MBOX_INT_ENA_W1CX"
#define device_bar_CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1CX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1CX(a) (a)
#define arguments_CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1CX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfpf_mbox_int_ena_w1s#
 *
 * RVU VF to PF Mailbox Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_rvu_pf_vfpf_mbox_int_ena_w1sx
{
    uint64_t u;
    struct cavm_rvu_pf_vfpf_mbox_int_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for RVU_PF_VFPF_MBOX_INT(0..1)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for RVU_PF_VFPF_MBOX_INT(0..1)[MBOX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfpf_mbox_int_ena_w1sx_s cn; */
};
typedef union cavm_rvu_pf_vfpf_mbox_int_ena_w1sx cavm_rvu_pf_vfpf_mbox_int_ena_w1sx_t;

static inline uint64_t CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1SX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1SX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x8402000008c0ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFPF_MBOX_INT_ENA_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1SX(a) cavm_rvu_pf_vfpf_mbox_int_ena_w1sx_t
#define bustype_CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1SX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1SX(a) "RVU_PF_VFPF_MBOX_INT_ENA_W1SX"
#define device_bar_CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1SX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1SX(a) (a)
#define arguments_CAVM_RVU_PF_VFPF_MBOX_INT_ENA_W1SX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vfpf_mbox_int_w1s#
 *
 * RVU VF to PF Mailbox Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_rvu_pf_vfpf_mbox_int_w1sx
{
    uint64_t u;
    struct cavm_rvu_pf_vfpf_mbox_int_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets RVU_PF_VFPF_MBOX_INT(0..1)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets RVU_PF_VFPF_MBOX_INT(0..1)[MBOX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vfpf_mbox_int_w1sx_s cn; */
};
typedef union cavm_rvu_pf_vfpf_mbox_int_w1sx cavm_rvu_pf_vfpf_mbox_int_w1sx_t;

static inline uint64_t CAVM_RVU_PF_VFPF_MBOX_INT_W1SX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFPF_MBOX_INT_W1SX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x8402000008a0ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFPF_MBOX_INT_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFPF_MBOX_INT_W1SX(a) cavm_rvu_pf_vfpf_mbox_int_w1sx_t
#define bustype_CAVM_RVU_PF_VFPF_MBOX_INT_W1SX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFPF_MBOX_INT_W1SX(a) "RVU_PF_VFPF_MBOX_INT_W1SX"
#define device_bar_CAVM_RVU_PF_VFPF_MBOX_INT_W1SX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFPF_MBOX_INT_W1SX(a) (a)
#define arguments_CAVM_RVU_PF_VFPF_MBOX_INT_W1SX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vftrpend#
 *
 * RVU PF VF Transaction Pending Registers
 */
union cavm_rvu_pf_vftrpendx
{
    uint64_t u;
    struct cavm_rvu_pf_vftrpendx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t trpend                : 64; /**< [ 63:  0](R/W1C/H) Transaction pending bit per VF (RVU_PF_VFTRPEND({a})[TRPEND]\<{b}\> for VF
                                                                 number 64*{a} + {b}).

                                                                 A VF's bit is set when RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set and:
                                                                 * A one is written to the corresponding PCCVF_XXX_E_DEV_CTL[BCR_FLR], or
                                                                 * PCCVF_XXX_CMD[ME] is set or cleared.

                                                                 When a VF's bit is set, forces the corresponding
                                                                 PCCVF_XXX_E_DEV_CTL[TRPEND] to be set.

                                                                 Software (typically a device-dependent PF driver) can clear the bit by
                                                                 writing a 1. */
#else /* Word 0 - Little Endian */
        uint64_t trpend                : 64; /**< [ 63:  0](R/W1C/H) Transaction pending bit per VF (RVU_PF_VFTRPEND({a})[TRPEND]\<{b}\> for VF
                                                                 number 64*{a} + {b}).

                                                                 A VF's bit is set when RVU_PRIV_PF()_CFG[ME_FLR_ENA] is set and:
                                                                 * A one is written to the corresponding PCCVF_XXX_E_DEV_CTL[BCR_FLR], or
                                                                 * PCCVF_XXX_CMD[ME] is set or cleared.

                                                                 When a VF's bit is set, forces the corresponding
                                                                 PCCVF_XXX_E_DEV_CTL[TRPEND] to be set.

                                                                 Software (typically a device-dependent PF driver) can clear the bit by
                                                                 writing a 1. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vftrpendx_s cn; */
};
typedef union cavm_rvu_pf_vftrpendx cavm_rvu_pf_vftrpendx_t;

static inline uint64_t CAVM_RVU_PF_VFTRPENDX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFTRPENDX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x840200000820ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFTRPENDX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFTRPENDX(a) cavm_rvu_pf_vftrpendx_t
#define bustype_CAVM_RVU_PF_VFTRPENDX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFTRPENDX(a) "RVU_PF_VFTRPENDX"
#define device_bar_CAVM_RVU_PF_VFTRPENDX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFTRPENDX(a) (a)
#define arguments_CAVM_RVU_PF_VFTRPENDX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR2) rvu_pf_vftrpend_w1s#
 *
 * RVU PF VF Transaction Pending Set Registers
 * This register reads or sets bits.
 */
union cavm_rvu_pf_vftrpend_w1sx
{
    uint64_t u;
    struct cavm_rvu_pf_vftrpend_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t trpend                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets RVU_PF_VFTRPEND(0..1)[TRPEND]. */
#else /* Word 0 - Little Endian */
        uint64_t trpend                : 64; /**< [ 63:  0](R/W1S/H) Reads or sets RVU_PF_VFTRPEND(0..1)[TRPEND]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_pf_vftrpend_w1sx_s cn; */
};
typedef union cavm_rvu_pf_vftrpend_w1sx cavm_rvu_pf_vftrpend_w1sx_t;

static inline uint64_t CAVM_RVU_PF_VFTRPEND_W1SX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PF_VFTRPEND_W1SX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x840200000840ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_PF_VFTRPEND_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PF_VFTRPEND_W1SX(a) cavm_rvu_pf_vftrpend_w1sx_t
#define bustype_CAVM_RVU_PF_VFTRPEND_W1SX(a) CSR_TYPE_RVU_PF_BAR2
#define basename_CAVM_RVU_PF_VFTRPEND_W1SX(a) "RVU_PF_VFTRPEND_W1SX"
#define device_bar_CAVM_RVU_PF_VFTRPEND_W1SX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_PF_VFTRPEND_W1SX(a) (a)
#define arguments_CAVM_RVU_PF_VFTRPEND_W1SX(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_active_pc
 *
 * RVU Active Program Counter Register
 */
union cavm_rvu_priv_active_pc
{
    uint64_t u;
    struct cavm_rvu_priv_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t active_pc             : 64; /**< [ 63:  0](R/W/H) This register increments on every coprocessor-clock cycle that the RVU conditional clocks
                                                                 are enabled. */
#else /* Word 0 - Little Endian */
        uint64_t active_pc             : 64; /**< [ 63:  0](R/W/H) This register increments on every coprocessor-clock cycle that the RVU conditional clocks
                                                                 are enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_active_pc_s cn; */
};
typedef union cavm_rvu_priv_active_pc cavm_rvu_priv_active_pc_t;

#define CAVM_RVU_PRIV_ACTIVE_PC CAVM_RVU_PRIV_ACTIVE_PC_FUNC()
static inline uint64_t CAVM_RVU_PRIV_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_ACTIVE_PC_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840008000030ll;
    __cavm_csr_fatal("RVU_PRIV_ACTIVE_PC", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_ACTIVE_PC cavm_rvu_priv_active_pc_t
#define bustype_CAVM_RVU_PRIV_ACTIVE_PC CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_ACTIVE_PC "RVU_PRIV_ACTIVE_PC"
#define device_bar_CAVM_RVU_PRIV_ACTIVE_PC 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_ACTIVE_PC 0
#define arguments_CAVM_RVU_PRIV_ACTIVE_PC -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_block_type#_rev
 *
 * RVU Privileged Block Type Revision Registers
 * These registers are used by configuration software to specify the revision ID
 * of each block type enumerated by RVU_BLOCK_TYPE_E, to assist VF/PF software
 * discovery.
 */
union cavm_rvu_priv_block_typex_rev
{
    uint64_t u;
    struct cavm_rvu_priv_block_typex_rev_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t rid                   : 8;  /**< [  7:  0](R/W) Revision ID of the block. This is the read value returned by
                                                                 RVU_VF_BLOCK_ADDR()_DISC[RID]. */
#else /* Word 0 - Little Endian */
        uint64_t rid                   : 8;  /**< [  7:  0](R/W) Revision ID of the block. This is the read value returned by
                                                                 RVU_VF_BLOCK_ADDR()_DISC[RID]. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_block_typex_rev_s cn; */
};
typedef union cavm_rvu_priv_block_typex_rev cavm_rvu_priv_block_typex_rev_t;

static inline uint64_t CAVM_RVU_PRIV_BLOCK_TYPEX_REV(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_BLOCK_TYPEX_REV(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=15))
        return 0x840008000400ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("RVU_PRIV_BLOCK_TYPEX_REV", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_BLOCK_TYPEX_REV(a) cavm_rvu_priv_block_typex_rev_t
#define bustype_CAVM_RVU_PRIV_BLOCK_TYPEX_REV(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_BLOCK_TYPEX_REV(a) "RVU_PRIV_BLOCK_TYPEX_REV"
#define device_bar_CAVM_RVU_PRIV_BLOCK_TYPEX_REV(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_BLOCK_TYPEX_REV(a) (a)
#define arguments_CAVM_RVU_PRIV_BLOCK_TYPEX_REV(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_clk_cfg
 *
 * RVU Privileged General Configuration Register
 */
union cavm_rvu_priv_clk_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_clk_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ncbi_clken            : 1;  /**< [  1:  1](R/W) Force the NCB interface conditional clocking and NCBI bus clock to be always on.
                                                                 For diagnostic use only. */
        uint64_t blk_clken             : 1;  /**< [  0:  0](R/W) Force RVUM conditional clock to always be enabled. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t blk_clken             : 1;  /**< [  0:  0](R/W) Force RVUM conditional clock to always be enabled. For diagnostic use only. */
        uint64_t ncbi_clken            : 1;  /**< [  1:  1](R/W) Force the NCB interface conditional clocking and NCBI bus clock to be always on.
                                                                 For diagnostic use only. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_clk_cfg_s cn; */
};
typedef union cavm_rvu_priv_clk_cfg cavm_rvu_priv_clk_cfg_t;

#define CAVM_RVU_PRIV_CLK_CFG CAVM_RVU_PRIV_CLK_CFG_FUNC()
static inline uint64_t CAVM_RVU_PRIV_CLK_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_CLK_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840008000020ll;
    __cavm_csr_fatal("RVU_PRIV_CLK_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_CLK_CFG cavm_rvu_priv_clk_cfg_t
#define bustype_CAVM_RVU_PRIV_CLK_CFG CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_CLK_CFG "RVU_PRIV_CLK_CFG"
#define device_bar_CAVM_RVU_PRIV_CLK_CFG 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_CLK_CFG 0
#define arguments_CAVM_RVU_PRIV_CLK_CFG -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_const
 *
 * RVU Privileged Constants Register
 * This register contains constants for software discovery.
 */
union cavm_rvu_priv_const
{
    uint64_t u;
    struct cavm_rvu_priv_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t max_vfs_per_pf        : 8;  /**< [ 47: 40](RO) Maximum number of VFs per RVU PF. */
        uint64_t pfs                   : 8;  /**< [ 39: 32](RO) Number of RVU PFs. */
        uint64_t hwvfs                 : 12; /**< [ 31: 20](RO) Number of RVU hardware VFs (HWVFs). */
        uint64_t max_msix              : 20; /**< [ 19:  0](RO) Combined maximum number of MSI-X vectors that may be provisioned to the RVU
                                                                 PFs and VFs. Also the maximum number of 16-byte RVU_MSIX_VEC_S structures
                                                                 in RVU's MSI-X table region in LLC/DRAM. See RVU_PRIV_PF()_MSIX_CFG. */
#else /* Word 0 - Little Endian */
        uint64_t max_msix              : 20; /**< [ 19:  0](RO) Combined maximum number of MSI-X vectors that may be provisioned to the RVU
                                                                 PFs and VFs. Also the maximum number of 16-byte RVU_MSIX_VEC_S structures
                                                                 in RVU's MSI-X table region in LLC/DRAM. See RVU_PRIV_PF()_MSIX_CFG. */
        uint64_t hwvfs                 : 12; /**< [ 31: 20](RO) Number of RVU hardware VFs (HWVFs). */
        uint64_t pfs                   : 8;  /**< [ 39: 32](RO) Number of RVU PFs. */
        uint64_t max_vfs_per_pf        : 8;  /**< [ 47: 40](RO) Maximum number of VFs per RVU PF. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_const_s cn9; */
    /* struct cavm_rvu_priv_const_s cn96xx; */
    struct cavm_rvu_priv_const_cn98xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t max_vfs_per_pf        : 8;  /**< [ 47: 40](RO) Maximum number of VFs per RVU PF. */
        uint64_t pfs                   : 8;  /**< [ 39: 32](RO) Number of RVU PFs. */
        uint64_t hwvfs                 : 12; /**< [ 31: 20](RO) Number of RVU hardware VFs (HWVFs). */
        uint64_t max_msix              : 20; /**< [ 19:  0](RO) Combined maximum number of MSI-X vectors that may be provisioned to the RVU
                                                                 PFs and VFs. Also the maximum number of 16-byte RVU_MSIX_VEC_S structures
                                                                 in RVU's MSI-X table region in LLC/DRAM. See RVU_PRIV_PF()_MSIX_CFG.

                                                                 Internal:
                                                                 Also, size of RVU's internal PBA memory.

                                                                 Sized as follows:
                                                                 \<pre\>
                                                                 AP cores                     24
                                                                 Vectors per LF:
                                                                    NIX CINT                  32
                                                                    NIX QINT                  32
                                                                    NIX GINT                  1
                                                                    NPA QINT                  32
                                                                    NPA GINT                  1
                                                                    SSO                       1
                                                                    TIM                       1
                                                                    CPT                       1
                                                                    RVU                       1
                                                                    Total per LF:             \<128
                                                                 Num LFs                      256
                                                                 Total LF vectors             \<32K
                                                                 Total AF vectors             64 (budget 16 blocks * 4)
                                                                 Total vectors budget         32K
                                                                 \</pre\> */
#else /* Word 0 - Little Endian */
        uint64_t max_msix              : 20; /**< [ 19:  0](RO) Combined maximum number of MSI-X vectors that may be provisioned to the RVU
                                                                 PFs and VFs. Also the maximum number of 16-byte RVU_MSIX_VEC_S structures
                                                                 in RVU's MSI-X table region in LLC/DRAM. See RVU_PRIV_PF()_MSIX_CFG.

                                                                 Internal:
                                                                 Also, size of RVU's internal PBA memory.

                                                                 Sized as follows:
                                                                 \<pre\>
                                                                 AP cores                     24
                                                                 Vectors per LF:
                                                                    NIX CINT                  32
                                                                    NIX QINT                  32
                                                                    NIX GINT                  1
                                                                    NPA QINT                  32
                                                                    NPA GINT                  1
                                                                    SSO                       1
                                                                    TIM                       1
                                                                    CPT                       1
                                                                    RVU                       1
                                                                    Total per LF:             \<128
                                                                 Num LFs                      256
                                                                 Total LF vectors             \<32K
                                                                 Total AF vectors             64 (budget 16 blocks * 4)
                                                                 Total vectors budget         32K
                                                                 \</pre\> */
        uint64_t hwvfs                 : 12; /**< [ 31: 20](RO) Number of RVU hardware VFs (HWVFs). */
        uint64_t pfs                   : 8;  /**< [ 39: 32](RO) Number of RVU PFs. */
        uint64_t max_vfs_per_pf        : 8;  /**< [ 47: 40](RO) Maximum number of VFs per RVU PF. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } cn98xx;
    /* struct cavm_rvu_priv_const_cn98xx cnf95xx; */
    /* struct cavm_rvu_priv_const_s loki; */
};
typedef union cavm_rvu_priv_const cavm_rvu_priv_const_t;

#define CAVM_RVU_PRIV_CONST CAVM_RVU_PRIV_CONST_FUNC()
static inline uint64_t CAVM_RVU_PRIV_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_CONST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840008000000ll;
    __cavm_csr_fatal("RVU_PRIV_CONST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_CONST cavm_rvu_priv_const_t
#define bustype_CAVM_RVU_PRIV_CONST CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_CONST "RVU_PRIV_CONST"
#define device_bar_CAVM_RVU_PRIV_CONST 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_CONST 0
#define arguments_CAVM_RVU_PRIV_CONST -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_gen_cfg
 *
 * RVU Privileged General Configuration Register
 */
union cavm_rvu_priv_gen_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_gen_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t lock                  : 1;  /**< [  0:  0](R/W1S) Lock privileged registers. When set, all privileged registers in RVU and
                                                                 its resource blocks are locked down and cannot be modified. Writing a 1
                                                                 sets this bit; once set, the bit can only be cleared by core reset. */
#else /* Word 0 - Little Endian */
        uint64_t lock                  : 1;  /**< [  0:  0](R/W1S) Lock privileged registers. When set, all privileged registers in RVU and
                                                                 its resource blocks are locked down and cannot be modified. Writing a 1
                                                                 sets this bit; once set, the bit can only be cleared by core reset. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_gen_cfg_s cn; */
};
typedef union cavm_rvu_priv_gen_cfg cavm_rvu_priv_gen_cfg_t;

#define CAVM_RVU_PRIV_GEN_CFG CAVM_RVU_PRIV_GEN_CFG_FUNC()
static inline uint64_t CAVM_RVU_PRIV_GEN_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_GEN_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840008000010ll;
    __cavm_csr_fatal("RVU_PRIV_GEN_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_GEN_CFG cavm_rvu_priv_gen_cfg_t
#define bustype_CAVM_RVU_PRIV_GEN_CFG CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_GEN_CFG "RVU_PRIV_GEN_CFG"
#define device_bar_CAVM_RVU_PRIV_GEN_CFG 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_GEN_CFG 0
#define arguments_CAVM_RVU_PRIV_GEN_CFG -1,-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_hwvf#_cpt#_cfg
 *
 * RVU Privileged Hardware VF CPT Configuration Registers
 * Similar to RVU_PRIV_HWVF()_NIX()_CFG, but for CPT({a}) block.
 */
union cavm_rvu_priv_hwvfx_cptx_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_hwvfx_cptx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
#else /* Word 0 - Little Endian */
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_hwvfx_cptx_cfg_s cn; */
};
typedef union cavm_rvu_priv_hwvfx_cptx_cfg cavm_rvu_priv_hwvfx_cptx_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_HWVFX_CPTX_CFG(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_HWVFX_CPTX_CFG(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a<=255) && (b==0)))
        return 0x840008001350ll + 0x10000ll * ((a) & 0xff) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a<=255) && (b<=1)))
        return 0x840008001350ll + 0x10000ll * ((a) & 0xff) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=255) && (b==0)))
        return 0x840008001350ll + 0x10000ll * ((a) & 0xff) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=255) && (b==0)))
        return 0x840008001350ll + 0x10000ll * ((a) & 0xff) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("RVU_PRIV_HWVFX_CPTX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_HWVFX_CPTX_CFG(a,b) cavm_rvu_priv_hwvfx_cptx_cfg_t
#define bustype_CAVM_RVU_PRIV_HWVFX_CPTX_CFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_HWVFX_CPTX_CFG(a,b) "RVU_PRIV_HWVFX_CPTX_CFG"
#define device_bar_CAVM_RVU_PRIV_HWVFX_CPTX_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_HWVFX_CPTX_CFG(a,b) (a)
#define arguments_CAVM_RVU_PRIV_HWVFX_CPTX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_hwvf#_int_cfg
 *
 * RVU Privileged Hardware VF Interrupt Configuration Registers
 */
union cavm_rvu_priv_hwvfx_int_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_hwvfx_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by RVU_VF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of VF interrupt vectors enumerated by RVU_VF_INT_VEC_E
                                                                 in the HWVF's MSI-X table. This is added to each enumerated value to obtain
                                                                 the corresponding MSI-X vector index.
                                                                 The highest enumerated value plus [MSIX_OFFSET] must be less than or equal
                                                                 to RVU_PRIV_PF()_MSIX_CFG[VF_MSIXT_SIZEM1]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of VF interrupt vectors enumerated by RVU_VF_INT_VEC_E
                                                                 in the HWVF's MSI-X table. This is added to each enumerated value to obtain
                                                                 the corresponding MSI-X vector index.
                                                                 The highest enumerated value plus [MSIX_OFFSET] must be less than or equal
                                                                 to RVU_PRIV_PF()_MSIX_CFG[VF_MSIXT_SIZEM1]. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by RVU_VF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_hwvfx_int_cfg_s cn; */
};
typedef union cavm_rvu_priv_hwvfx_int_cfg cavm_rvu_priv_hwvfx_int_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_HWVFX_INT_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_HWVFX_INT_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=255))
        return 0x840008001280ll + 0x10000ll * ((a) & 0xff);
    __cavm_csr_fatal("RVU_PRIV_HWVFX_INT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_HWVFX_INT_CFG(a) cavm_rvu_priv_hwvfx_int_cfg_t
#define bustype_CAVM_RVU_PRIV_HWVFX_INT_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_HWVFX_INT_CFG(a) "RVU_PRIV_HWVFX_INT_CFG"
#define device_bar_CAVM_RVU_PRIV_HWVFX_INT_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_HWVFX_INT_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_HWVFX_INT_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_hwvf#_nix#_cfg
 *
 * RVU Privileged Hardware VF NIX Configuration Registers
 * These registers are used to assist VF software discovery. For each HWVF, if the
 * HWVF is mapped to a VF by RVU_PRIV_PF()_CFG[FIRST_HWVF,NVF], software
 * writes NIX block's resource configuration for the VF in this register. The VF
 * driver can read RVU_VF_BLOCK_ADDR()_DISC to discover the configuration.
 */
union cavm_rvu_priv_hwvfx_nixx_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_hwvfx_nixx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t has_lf                : 1;  /**< [  0:  0](R/W) Set when an LF from the block is provisioned to the VF, clear otherwise. */
#else /* Word 0 - Little Endian */
        uint64_t has_lf                : 1;  /**< [  0:  0](R/W) Set when an LF from the block is provisioned to the VF, clear otherwise. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_hwvfx_nixx_cfg_s cn; */
};
typedef union cavm_rvu_priv_hwvfx_nixx_cfg cavm_rvu_priv_hwvfx_nixx_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_HWVFX_NIXX_CFG(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_HWVFX_NIXX_CFG(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a<=255) && (b==0)))
        return 0x840008001300ll + 0x10000ll * ((a) & 0xff) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a<=255) && (b<=1)))
        return 0x840008001300ll + 0x10000ll * ((a) & 0xff) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=255) && (b==0)))
        return 0x840008001300ll + 0x10000ll * ((a) & 0xff) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=255) && (b==0)))
        return 0x840008001300ll + 0x10000ll * ((a) & 0xff) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("RVU_PRIV_HWVFX_NIXX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_HWVFX_NIXX_CFG(a,b) cavm_rvu_priv_hwvfx_nixx_cfg_t
#define bustype_CAVM_RVU_PRIV_HWVFX_NIXX_CFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_HWVFX_NIXX_CFG(a,b) "RVU_PRIV_HWVFX_NIXX_CFG"
#define device_bar_CAVM_RVU_PRIV_HWVFX_NIXX_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_HWVFX_NIXX_CFG(a,b) (a)
#define arguments_CAVM_RVU_PRIV_HWVFX_NIXX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_hwvf#_npa_cfg
 *
 * RVU Privileged Hardware VF NPA Configuration Registers
 * Similar to RVU_PRIV_HWVF()_NIX()_CFG, but for NPA block.
 */
union cavm_rvu_priv_hwvfx_npa_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_hwvfx_npa_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t has_lf                : 1;  /**< [  0:  0](R/W) Set when an LF from the block is provisioned to the VF, clear otherwise. */
#else /* Word 0 - Little Endian */
        uint64_t has_lf                : 1;  /**< [  0:  0](R/W) Set when an LF from the block is provisioned to the VF, clear otherwise. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_hwvfx_npa_cfg_s cn; */
};
typedef union cavm_rvu_priv_hwvfx_npa_cfg cavm_rvu_priv_hwvfx_npa_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_HWVFX_NPA_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_HWVFX_NPA_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=255))
        return 0x840008001310ll + 0x10000ll * ((a) & 0xff);
    __cavm_csr_fatal("RVU_PRIV_HWVFX_NPA_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_HWVFX_NPA_CFG(a) cavm_rvu_priv_hwvfx_npa_cfg_t
#define bustype_CAVM_RVU_PRIV_HWVFX_NPA_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_HWVFX_NPA_CFG(a) "RVU_PRIV_HWVFX_NPA_CFG"
#define device_bar_CAVM_RVU_PRIV_HWVFX_NPA_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_HWVFX_NPA_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_HWVFX_NPA_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_hwvf#_ree#_cfg
 *
 * RVU Privileged Hardware VF REE Configuration Registers
 * Similar to RVU_PRIV_HWVF()_NIX()_CFG, but for REE({a}) block.
 */
union cavm_rvu_priv_hwvfx_reex_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_hwvfx_reex_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
#else /* Word 0 - Little Endian */
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_hwvfx_reex_cfg_s cn; */
};
typedef union cavm_rvu_priv_hwvfx_reex_cfg cavm_rvu_priv_hwvfx_reex_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_HWVFX_REEX_CFG(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_HWVFX_REEX_CFG(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a<=255) && (b<=1)))
        return 0x840008001360ll + 0x10000ll * ((a) & 0xff) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("RVU_PRIV_HWVFX_REEX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_HWVFX_REEX_CFG(a,b) cavm_rvu_priv_hwvfx_reex_cfg_t
#define bustype_CAVM_RVU_PRIV_HWVFX_REEX_CFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_HWVFX_REEX_CFG(a,b) "RVU_PRIV_HWVFX_REEX_CFG"
#define device_bar_CAVM_RVU_PRIV_HWVFX_REEX_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_HWVFX_REEX_CFG(a,b) (a)
#define arguments_CAVM_RVU_PRIV_HWVFX_REEX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_hwvf#_sso_cfg
 *
 * RVU Privileged Hardware VF SSO Configuration Registers
 * Similar to RVU_PRIV_HWVF()_NIX()_CFG, but for SSO block.
 */
union cavm_rvu_priv_hwvfx_sso_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_hwvfx_sso_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
#else /* Word 0 - Little Endian */
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_hwvfx_sso_cfg_s cn; */
};
typedef union cavm_rvu_priv_hwvfx_sso_cfg cavm_rvu_priv_hwvfx_sso_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_HWVFX_SSO_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_HWVFX_SSO_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=255))
        return 0x840008001320ll + 0x10000ll * ((a) & 0xff);
    __cavm_csr_fatal("RVU_PRIV_HWVFX_SSO_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_HWVFX_SSO_CFG(a) cavm_rvu_priv_hwvfx_sso_cfg_t
#define bustype_CAVM_RVU_PRIV_HWVFX_SSO_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_HWVFX_SSO_CFG(a) "RVU_PRIV_HWVFX_SSO_CFG"
#define device_bar_CAVM_RVU_PRIV_HWVFX_SSO_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_HWVFX_SSO_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_HWVFX_SSO_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_hwvf#_ssow_cfg
 *
 * RVU Privileged Hardware VF SSO Work Slot Configuration Registers
 * Similar to RVU_PRIV_HWVF()_NIX()_CFG, but for SSOW block.
 */
union cavm_rvu_priv_hwvfx_ssow_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_hwvfx_ssow_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
#else /* Word 0 - Little Endian */
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_hwvfx_ssow_cfg_s cn; */
};
typedef union cavm_rvu_priv_hwvfx_ssow_cfg cavm_rvu_priv_hwvfx_ssow_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_HWVFX_SSOW_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_HWVFX_SSOW_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=255))
        return 0x840008001330ll + 0x10000ll * ((a) & 0xff);
    __cavm_csr_fatal("RVU_PRIV_HWVFX_SSOW_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_HWVFX_SSOW_CFG(a) cavm_rvu_priv_hwvfx_ssow_cfg_t
#define bustype_CAVM_RVU_PRIV_HWVFX_SSOW_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_HWVFX_SSOW_CFG(a) "RVU_PRIV_HWVFX_SSOW_CFG"
#define device_bar_CAVM_RVU_PRIV_HWVFX_SSOW_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_HWVFX_SSOW_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_HWVFX_SSOW_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_hwvf#_tim_cfg
 *
 * RVU Privileged Hardware VF SSO Work Slot Configuration Registers
 * Similar to RVU_PRIV_HWVF()_NIX()_CFG, but for TIM block.
 */
union cavm_rvu_priv_hwvfx_tim_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_hwvfx_tim_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
#else /* Word 0 - Little Endian */
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_hwvfx_tim_cfg_s cn; */
};
typedef union cavm_rvu_priv_hwvfx_tim_cfg cavm_rvu_priv_hwvfx_tim_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_HWVFX_TIM_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_HWVFX_TIM_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=255))
        return 0x840008001340ll + 0x10000ll * ((a) & 0xff);
    __cavm_csr_fatal("RVU_PRIV_HWVFX_TIM_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_HWVFX_TIM_CFG(a) cavm_rvu_priv_hwvfx_tim_cfg_t
#define bustype_CAVM_RVU_PRIV_HWVFX_TIM_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_HWVFX_TIM_CFG(a) "RVU_PRIV_HWVFX_TIM_CFG"
#define device_bar_CAVM_RVU_PRIV_HWVFX_TIM_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_HWVFX_TIM_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_HWVFX_TIM_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_pf#_cfg
 *
 * RVU Privileged PF Configuration Registers
 */
union cavm_rvu_priv_pfx_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_pfx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t pf_vf_io_bar4         : 1;  /**< [ 23: 23](R/W) Selects how the PF/VF mailbox memory in LLC/DRAM is configured accessed by
                                                                 the VFs. The mailbox memory consists of RVU_PRIV_PF()_CFG[NVF] consecutive
                                                                 64 KB pages in LLC/DRAM (one page per VF).

                                                                 0 = The PF/VF mailbox memory is at physical address RVU_PF_VF_BAR4_ADDR.
                                                                 The VF's BAR4 in the PCIe EA capability header points to the VF's page
                                                                 (RVU_PF_VF_BAR4_ADDR[ADDR] + vf_num*64K). Both the PF and VF  drivers directly
                                                                 access the mailbox memory in LLC/DRAM, which is never accessed by RVU
                                                                 hardware.

                                                                 1 = The PF/VF mailbox memory is at physical address
                                                                 RVU_AF_PF()_VF_BAR4_ADDR. The VF's BAR4 in the PCIe EA capability header
                                                                 points to the VF's BAR4 (RVU_BAR_E::RVU_PF()_FUNC()_BAR4). The PF driver
                                                                 directly accesses the mailbox memory in LLC/DRAM, but the VF driver
                                                                 accesses the mailbox memory through RVU hardware.

                                                                 Internal:
                                                                 "* When set, RVU hardware aliases a VF BAR4 access to a physical memory access
                                                                 (ncbi_cmd.paddr = 1) relative to RVU_AF_PF()_VF_BAR4_ADDR + vf_num*64K.
                                                                 * When RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is set, RVU_AF_PF()_VF_BAR4_ADDR is
                                                                 used instead of RVU_PF_VF_BAR4_ADDR for security reasons. An EL0 PF driver
                                                                 could write an arbitrary PA to RVU_PF_VF_BAR4_ADDR, and using it would have
                                                                 allowed an EL0 VF driver to access a 64KB region at that PA." */
        uint64_t me_flr_ena            : 1;  /**< [ 22: 22](R/W) Bus master enable (ME) and function level reset (FLR) enable. This bit
                                                                 should be set when the PF is configured and associated PF and/or AF drivers
                                                                 that manage VF and/or PF ME/FLR are loaded.

                                                                 When clear, PCCPF/PCCVF_XXX_CMD[ME] state changes are ignored, and
                                                                 PCCPF/PCCVF_XXX_E_DEV_CTL[BCR_FLR] reset the PF/VF configuration space.

                                                                 When set, hardware updates to the following registers in response to ME/FLR
                                                                 events are additionally enabled:
                                                                 RVU_PF_VFTRPEND(), RVU_PF_VFFLR_INT(), RVU_PF_VFME_INT(),
                                                                 RVU_AF_PFTRPEND, RVU_AF_PFFLR_INT, and RVU_AF_PFFLR_INT. */
        uint64_t af_ena                : 1;  /**< [ 21: 21](R/W) Admin function enable. When set, the PF is allowed to access AF (RVU PF
                                                                 BAR0) registers in all RVU blocks. When clear, BAR0 is hidden in the PF's
                                                                 PCI configuration EA capability header, and accesses to the PF's BAR0 are
                                                                 RAZ/WI or will fault.

                                                                 Must be clear when [ENA] is clear. Software should keep this bit set for
                                                                 PF(0) when RVU is used.

                                                                 Internal:
                                                                 BAR0 accesses to RVUM registers are RAZ/WI. BAR0 accesses to all other RVU
                                                                 blocks will fault. */
        uint64_t ena                   : 1;  /**< [ 20: 20](R/W) Enable the PF. When clear, the PF is unused and hidden in the PCI config
                                                                 space. A BAR2 access to any function in the PF is RAZ/WI and sets
                                                                 RVU_AF_GEN_INT[UNMAPPED].

                                                                 When set, the PF is enabled and remaining fields in this register are
                                                                 valid.

                                                                 Software should keep this bit set for PF(0) when RVU is used. Hardware
                                                                 delivers all AF interrupts to PF(0). */
        uint64_t nvf                   : 8;  /**< [ 19: 12](R/W) Number of VFs in the PF. Must be less than or equal to
                                                                 RVU_PRIV_CONST[MAX_VFS_PER_PF]. */
        uint64_t first_hwvf            : 12; /**< [ 11:  0](R/W) HWVF index of the PF's first VF.  Valid when [NVF] is non-zero. The HWVF
                                                                 index range for the PF is [FIRST_HWVF] to [FIRST_HWVF]+[NVF]-1, inclusive.
                                                                 Different PFs must have non-overlapping HWVF ranges, and the maximum HWVF
                                                                 index in any range must be less than RVU_PRIV_CONST[HWVFS]. */
#else /* Word 0 - Little Endian */
        uint64_t first_hwvf            : 12; /**< [ 11:  0](R/W) HWVF index of the PF's first VF.  Valid when [NVF] is non-zero. The HWVF
                                                                 index range for the PF is [FIRST_HWVF] to [FIRST_HWVF]+[NVF]-1, inclusive.
                                                                 Different PFs must have non-overlapping HWVF ranges, and the maximum HWVF
                                                                 index in any range must be less than RVU_PRIV_CONST[HWVFS]. */
        uint64_t nvf                   : 8;  /**< [ 19: 12](R/W) Number of VFs in the PF. Must be less than or equal to
                                                                 RVU_PRIV_CONST[MAX_VFS_PER_PF]. */
        uint64_t ena                   : 1;  /**< [ 20: 20](R/W) Enable the PF. When clear, the PF is unused and hidden in the PCI config
                                                                 space. A BAR2 access to any function in the PF is RAZ/WI and sets
                                                                 RVU_AF_GEN_INT[UNMAPPED].

                                                                 When set, the PF is enabled and remaining fields in this register are
                                                                 valid.

                                                                 Software should keep this bit set for PF(0) when RVU is used. Hardware
                                                                 delivers all AF interrupts to PF(0). */
        uint64_t af_ena                : 1;  /**< [ 21: 21](R/W) Admin function enable. When set, the PF is allowed to access AF (RVU PF
                                                                 BAR0) registers in all RVU blocks. When clear, BAR0 is hidden in the PF's
                                                                 PCI configuration EA capability header, and accesses to the PF's BAR0 are
                                                                 RAZ/WI or will fault.

                                                                 Must be clear when [ENA] is clear. Software should keep this bit set for
                                                                 PF(0) when RVU is used.

                                                                 Internal:
                                                                 BAR0 accesses to RVUM registers are RAZ/WI. BAR0 accesses to all other RVU
                                                                 blocks will fault. */
        uint64_t me_flr_ena            : 1;  /**< [ 22: 22](R/W) Bus master enable (ME) and function level reset (FLR) enable. This bit
                                                                 should be set when the PF is configured and associated PF and/or AF drivers
                                                                 that manage VF and/or PF ME/FLR are loaded.

                                                                 When clear, PCCPF/PCCVF_XXX_CMD[ME] state changes are ignored, and
                                                                 PCCPF/PCCVF_XXX_E_DEV_CTL[BCR_FLR] reset the PF/VF configuration space.

                                                                 When set, hardware updates to the following registers in response to ME/FLR
                                                                 events are additionally enabled:
                                                                 RVU_PF_VFTRPEND(), RVU_PF_VFFLR_INT(), RVU_PF_VFME_INT(),
                                                                 RVU_AF_PFTRPEND, RVU_AF_PFFLR_INT, and RVU_AF_PFFLR_INT. */
        uint64_t pf_vf_io_bar4         : 1;  /**< [ 23: 23](R/W) Selects how the PF/VF mailbox memory in LLC/DRAM is configured accessed by
                                                                 the VFs. The mailbox memory consists of RVU_PRIV_PF()_CFG[NVF] consecutive
                                                                 64 KB pages in LLC/DRAM (one page per VF).

                                                                 0 = The PF/VF mailbox memory is at physical address RVU_PF_VF_BAR4_ADDR.
                                                                 The VF's BAR4 in the PCIe EA capability header points to the VF's page
                                                                 (RVU_PF_VF_BAR4_ADDR[ADDR] + vf_num*64K). Both the PF and VF  drivers directly
                                                                 access the mailbox memory in LLC/DRAM, which is never accessed by RVU
                                                                 hardware.

                                                                 1 = The PF/VF mailbox memory is at physical address
                                                                 RVU_AF_PF()_VF_BAR4_ADDR. The VF's BAR4 in the PCIe EA capability header
                                                                 points to the VF's BAR4 (RVU_BAR_E::RVU_PF()_FUNC()_BAR4). The PF driver
                                                                 directly accesses the mailbox memory in LLC/DRAM, but the VF driver
                                                                 accesses the mailbox memory through RVU hardware.

                                                                 Internal:
                                                                 "* When set, RVU hardware aliases a VF BAR4 access to a physical memory access
                                                                 (ncbi_cmd.paddr = 1) relative to RVU_AF_PF()_VF_BAR4_ADDR + vf_num*64K.
                                                                 * When RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is set, RVU_AF_PF()_VF_BAR4_ADDR is
                                                                 used instead of RVU_PF_VF_BAR4_ADDR for security reasons. An EL0 PF driver
                                                                 could write an arbitrary PA to RVU_PF_VF_BAR4_ADDR, and using it would have
                                                                 allowed an EL0 VF driver to access a 64KB region at that PA." */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_pfx_cfg_s cn9; */
    struct cavm_rvu_priv_pfx_cfg_cn96xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t me_flr_ena            : 1;  /**< [ 22: 22](R/W) Bus master enable (ME) and function level reset (FLR) enable. This bit
                                                                 should be set when the PF is configured and associated PF and/or AF drivers
                                                                 that manage VF and/or PF ME/FLR are loaded.

                                                                 When clear, PCCPF/PCCVF_XXX_CMD[ME] state changes are ignored, and
                                                                 PCCPF/PCCVF_XXX_E_DEV_CTL[BCR_FLR] reset the PF/VF configuration space.

                                                                 When set, hardware updates to the following registers in response to ME/FLR
                                                                 events are additionally enabled:
                                                                 RVU_PF_VFTRPEND(), RVU_PF_VFFLR_INT(), RVU_PF_VFME_INT(),
                                                                 RVU_AF_PFTRPEND, RVU_AF_PFFLR_INT, and RVU_AF_PFFLR_INT. */
        uint64_t af_ena                : 1;  /**< [ 21: 21](R/W) Admin function enable. When set, the PF is allowed to access AF (RVU PF
                                                                 BAR0) registers in all RVU blocks. When clear, BAR0 is hidden in the PF's
                                                                 PCI configuration EA capability header, and accesses to the PF's BAR0 are
                                                                 RAZ/WI or will fault.

                                                                 Must be clear when [ENA] is clear. Software should keep this bit set for
                                                                 PF(0) when RVU is used.

                                                                 Internal:
                                                                 BAR0 accesses to RVUM registers are RAZ/WI. BAR0 accesses to all other RVU
                                                                 blocks will fault. */
        uint64_t ena                   : 1;  /**< [ 20: 20](R/W) Enable the PF. When clear, the PF is unused and hidden in the PCI config
                                                                 space. A BAR2 access to any function in the PF is RAZ/WI and sets
                                                                 RVU_AF_GEN_INT[UNMAPPED].

                                                                 When set, the PF is enabled and remaining fields in this register are
                                                                 valid.

                                                                 Software should keep this bit set for PF(0) when RVU is used. Hardware
                                                                 delivers all AF interrupts to PF(0). */
        uint64_t nvf                   : 8;  /**< [ 19: 12](R/W) Number of VFs in the PF. Must be less than or equal to
                                                                 RVU_PRIV_CONST[MAX_VFS_PER_PF]. */
        uint64_t first_hwvf            : 12; /**< [ 11:  0](R/W) HWVF index of the PF's first VF.  Valid when [NVF] is non-zero. The HWVF
                                                                 index range for the PF is [FIRST_HWVF] to [FIRST_HWVF]+[NVF]-1, inclusive.
                                                                 Different PFs must have non-overlapping HWVF ranges, and the maximum HWVF
                                                                 index in any range must be less than RVU_PRIV_CONST[HWVFS]. */
#else /* Word 0 - Little Endian */
        uint64_t first_hwvf            : 12; /**< [ 11:  0](R/W) HWVF index of the PF's first VF.  Valid when [NVF] is non-zero. The HWVF
                                                                 index range for the PF is [FIRST_HWVF] to [FIRST_HWVF]+[NVF]-1, inclusive.
                                                                 Different PFs must have non-overlapping HWVF ranges, and the maximum HWVF
                                                                 index in any range must be less than RVU_PRIV_CONST[HWVFS]. */
        uint64_t nvf                   : 8;  /**< [ 19: 12](R/W) Number of VFs in the PF. Must be less than or equal to
                                                                 RVU_PRIV_CONST[MAX_VFS_PER_PF]. */
        uint64_t ena                   : 1;  /**< [ 20: 20](R/W) Enable the PF. When clear, the PF is unused and hidden in the PCI config
                                                                 space. A BAR2 access to any function in the PF is RAZ/WI and sets
                                                                 RVU_AF_GEN_INT[UNMAPPED].

                                                                 When set, the PF is enabled and remaining fields in this register are
                                                                 valid.

                                                                 Software should keep this bit set for PF(0) when RVU is used. Hardware
                                                                 delivers all AF interrupts to PF(0). */
        uint64_t af_ena                : 1;  /**< [ 21: 21](R/W) Admin function enable. When set, the PF is allowed to access AF (RVU PF
                                                                 BAR0) registers in all RVU blocks. When clear, BAR0 is hidden in the PF's
                                                                 PCI configuration EA capability header, and accesses to the PF's BAR0 are
                                                                 RAZ/WI or will fault.

                                                                 Must be clear when [ENA] is clear. Software should keep this bit set for
                                                                 PF(0) when RVU is used.

                                                                 Internal:
                                                                 BAR0 accesses to RVUM registers are RAZ/WI. BAR0 accesses to all other RVU
                                                                 blocks will fault. */
        uint64_t me_flr_ena            : 1;  /**< [ 22: 22](R/W) Bus master enable (ME) and function level reset (FLR) enable. This bit
                                                                 should be set when the PF is configured and associated PF and/or AF drivers
                                                                 that manage VF and/or PF ME/FLR are loaded.

                                                                 When clear, PCCPF/PCCVF_XXX_CMD[ME] state changes are ignored, and
                                                                 PCCPF/PCCVF_XXX_E_DEV_CTL[BCR_FLR] reset the PF/VF configuration space.

                                                                 When set, hardware updates to the following registers in response to ME/FLR
                                                                 events are additionally enabled:
                                                                 RVU_PF_VFTRPEND(), RVU_PF_VFFLR_INT(), RVU_PF_VFME_INT(),
                                                                 RVU_AF_PFTRPEND, RVU_AF_PFFLR_INT, and RVU_AF_PFFLR_INT. */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } cn96xxp1;
    /* struct cavm_rvu_priv_pfx_cfg_s cn96xxp3; */
    /* struct cavm_rvu_priv_pfx_cfg_s cn98xx; */
    /* struct cavm_rvu_priv_pfx_cfg_cn96xxp1 cnf95xx; */
    struct cavm_rvu_priv_pfx_cfg_loki
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t pf_vf_io_bar4         : 1;  /**< [ 23: 23](R/W) Selects how the PF/VF mailbox memory in LLC/DRAM is configured accessed by
                                                                 the VFs. The mailbox memory consists of RVU_PRIV_PF()_CFG[NVF] consecutive
                                                                 64 KB pages in LLC/DRAM (one page per VF).
                                                                 0 = The PF/VF mailbox memory is at physical address RVU_PF_VF_BAR4_ADDR.
                                                                 The VF's BAR4 in the PCIe EA capability header points to the VF's page
                                                                 (RVU_PF_VF_BAR4_ADDR[ADDR] + vf_num*64K). Both the PF and VF  drivers directly
                                                                 access the mailbox memory in LLC/DRAM, which is never accessed by RVU
                                                                 hardware.
                                                                 1 = The PF/VF mailbox memory is at physical address
                                                                 RVU_AF_PF()_VF_BAR4_ADDR. The VF's BAR4 in the PCIe EA capability header
                                                                 points to the VF's BAR4 (RVU_BAR_E::RVU_PF()_FUNC()_BAR4). The PF driver
                                                                 directly accesses the mailbox memory in LLC/DRAM, but the VF driver
                                                                 accesses the mailbox memory through RVU hardware.

                                                                 Internal:
                                                                 "* When set, RVU hardware aliases a VF BAR4 access to a physical memory access
                                                                 (ncbi_cmd.paddr = 1) relative to RVU_AF_PF()_VF_BAR4_ADDR + vf_num*64K.
                                                                 * When RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is set, RVU_AF_PF()_VF_BAR4_ADDR is
                                                                 used instead of RVU_PF_VF_BAR4_ADDR for security reasons. An EL0 PF driver
                                                                 could write an arbitrary PA to RVU_PF_VF_BAR4_ADDR, and using it would have
                                                                 allowed an EL0 VF driver to access a 64KB region at that PA." */
        uint64_t me_flr_ena            : 1;  /**< [ 22: 22](R/W) Bus master enable (ME) and function level reset (FLR) enable. This bit
                                                                 should be set when the PF is configured and associated PF and/or AF drivers
                                                                 that manage VF and/or PF ME/FLR are loaded.

                                                                 When clear, PCCPF/PCCVF_XXX_CMD[ME] state changes are ignored, and
                                                                 PCCPF/PCCVF_XXX_E_DEV_CTL[BCR_FLR] reset the PF/VF configuration space.

                                                                 When set, hardware updates to the following registers in response to ME/FLR
                                                                 events are additionally enabled:
                                                                 RVU_PF_VFTRPEND(), RVU_PF_VFFLR_INT(), RVU_PF_VFME_INT(),
                                                                 RVU_AF_PFTRPEND, RVU_AF_PFFLR_INT, and RVU_AF_PFFLR_INT. */
        uint64_t af_ena                : 1;  /**< [ 21: 21](R/W) Admin function enable. When set, the PF is allowed to access AF (RVU PF
                                                                 BAR0) registers in all RVU blocks. When clear, BAR0 is hidden in the PF's
                                                                 PCI configuration EA capability header, and accesses to the PF's BAR0 are
                                                                 RAZ/WI or will fault.

                                                                 Must be clear when [ENA] is clear. Software should keep this bit set for
                                                                 PF(0) when RVU is used.

                                                                 Internal:
                                                                 BAR0 accesses to RVUM registers are RAZ/WI. BAR0 accesses to all other RVU
                                                                 blocks will fault. */
        uint64_t ena                   : 1;  /**< [ 20: 20](R/W) Enable the PF. When clear, the PF is unused and hidden in the PCI config
                                                                 space. A BAR2 access to any function in the PF is RAZ/WI and sets
                                                                 RVU_AF_GEN_INT[UNMAPPED].

                                                                 When set, the PF is enabled and remaining fields in this register are
                                                                 valid.

                                                                 Software should keep this bit set for PF(0) when RVU is used. Hardware
                                                                 delivers all AF interrupts to PF(0). */
        uint64_t nvf                   : 8;  /**< [ 19: 12](R/W) Number of VFs in the PF. Must be less than or equal to
                                                                 RVU_PRIV_CONST[MAX_VFS_PER_PF]. */
        uint64_t first_hwvf            : 12; /**< [ 11:  0](R/W) HWVF index of the PF's first VF.  Valid when [NVF] is non-zero. The HWVF
                                                                 index range for the PF is [FIRST_HWVF] to [FIRST_HWVF]+[NVF]-1, inclusive.
                                                                 Different PFs must have non-overlapping HWVF ranges, and the maximum HWVF
                                                                 index in any range must be less than RVU_PRIV_CONST[HWVFS]. */
#else /* Word 0 - Little Endian */
        uint64_t first_hwvf            : 12; /**< [ 11:  0](R/W) HWVF index of the PF's first VF.  Valid when [NVF] is non-zero. The HWVF
                                                                 index range for the PF is [FIRST_HWVF] to [FIRST_HWVF]+[NVF]-1, inclusive.
                                                                 Different PFs must have non-overlapping HWVF ranges, and the maximum HWVF
                                                                 index in any range must be less than RVU_PRIV_CONST[HWVFS]. */
        uint64_t nvf                   : 8;  /**< [ 19: 12](R/W) Number of VFs in the PF. Must be less than or equal to
                                                                 RVU_PRIV_CONST[MAX_VFS_PER_PF]. */
        uint64_t ena                   : 1;  /**< [ 20: 20](R/W) Enable the PF. When clear, the PF is unused and hidden in the PCI config
                                                                 space. A BAR2 access to any function in the PF is RAZ/WI and sets
                                                                 RVU_AF_GEN_INT[UNMAPPED].

                                                                 When set, the PF is enabled and remaining fields in this register are
                                                                 valid.

                                                                 Software should keep this bit set for PF(0) when RVU is used. Hardware
                                                                 delivers all AF interrupts to PF(0). */
        uint64_t af_ena                : 1;  /**< [ 21: 21](R/W) Admin function enable. When set, the PF is allowed to access AF (RVU PF
                                                                 BAR0) registers in all RVU blocks. When clear, BAR0 is hidden in the PF's
                                                                 PCI configuration EA capability header, and accesses to the PF's BAR0 are
                                                                 RAZ/WI or will fault.

                                                                 Must be clear when [ENA] is clear. Software should keep this bit set for
                                                                 PF(0) when RVU is used.

                                                                 Internal:
                                                                 BAR0 accesses to RVUM registers are RAZ/WI. BAR0 accesses to all other RVU
                                                                 blocks will fault. */
        uint64_t me_flr_ena            : 1;  /**< [ 22: 22](R/W) Bus master enable (ME) and function level reset (FLR) enable. This bit
                                                                 should be set when the PF is configured and associated PF and/or AF drivers
                                                                 that manage VF and/or PF ME/FLR are loaded.

                                                                 When clear, PCCPF/PCCVF_XXX_CMD[ME] state changes are ignored, and
                                                                 PCCPF/PCCVF_XXX_E_DEV_CTL[BCR_FLR] reset the PF/VF configuration space.

                                                                 When set, hardware updates to the following registers in response to ME/FLR
                                                                 events are additionally enabled:
                                                                 RVU_PF_VFTRPEND(), RVU_PF_VFFLR_INT(), RVU_PF_VFME_INT(),
                                                                 RVU_AF_PFTRPEND, RVU_AF_PFFLR_INT, and RVU_AF_PFFLR_INT. */
        uint64_t pf_vf_io_bar4         : 1;  /**< [ 23: 23](R/W) Selects how the PF/VF mailbox memory in LLC/DRAM is configured accessed by
                                                                 the VFs. The mailbox memory consists of RVU_PRIV_PF()_CFG[NVF] consecutive
                                                                 64 KB pages in LLC/DRAM (one page per VF).
                                                                 0 = The PF/VF mailbox memory is at physical address RVU_PF_VF_BAR4_ADDR.
                                                                 The VF's BAR4 in the PCIe EA capability header points to the VF's page
                                                                 (RVU_PF_VF_BAR4_ADDR[ADDR] + vf_num*64K). Both the PF and VF  drivers directly
                                                                 access the mailbox memory in LLC/DRAM, which is never accessed by RVU
                                                                 hardware.
                                                                 1 = The PF/VF mailbox memory is at physical address
                                                                 RVU_AF_PF()_VF_BAR4_ADDR. The VF's BAR4 in the PCIe EA capability header
                                                                 points to the VF's BAR4 (RVU_BAR_E::RVU_PF()_FUNC()_BAR4). The PF driver
                                                                 directly accesses the mailbox memory in LLC/DRAM, but the VF driver
                                                                 accesses the mailbox memory through RVU hardware.

                                                                 Internal:
                                                                 "* When set, RVU hardware aliases a VF BAR4 access to a physical memory access
                                                                 (ncbi_cmd.paddr = 1) relative to RVU_AF_PF()_VF_BAR4_ADDR + vf_num*64K.
                                                                 * When RVU_PRIV_PF()_CFG[PF_VF_IO_BAR4] is set, RVU_AF_PF()_VF_BAR4_ADDR is
                                                                 used instead of RVU_PF_VF_BAR4_ADDR for security reasons. An EL0 PF driver
                                                                 could write an arbitrary PA to RVU_PF_VF_BAR4_ADDR, and using it would have
                                                                 allowed an EL0 VF driver to access a 64KB region at that PA." */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } loki;
};
typedef union cavm_rvu_priv_pfx_cfg cavm_rvu_priv_pfx_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_PFX_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_PFX_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=15))
        return 0x840008000100ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=23))
        return 0x840008000100ll + 0x10000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=15))
        return 0x840008000100ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=15))
        return 0x840008000100ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("RVU_PRIV_PFX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_PFX_CFG(a) cavm_rvu_priv_pfx_cfg_t
#define bustype_CAVM_RVU_PRIV_PFX_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_PFX_CFG(a) "RVU_PRIV_PFX_CFG"
#define device_bar_CAVM_RVU_PRIV_PFX_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_PFX_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_PFX_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_pf#_cpt#_cfg
 *
 * RVU Privileged PF CPT Configuration Registers
 * Similar to RVU_PRIV_PF()_NIX()_CFG, but for CPT({a}) block.
 */
union cavm_rvu_priv_pfx_cptx_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_pfx_cptx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
#else /* Word 0 - Little Endian */
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_pfx_cptx_cfg_s cn; */
};
typedef union cavm_rvu_priv_pfx_cptx_cfg cavm_rvu_priv_pfx_cptx_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_PFX_CPTX_CFG(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_PFX_CPTX_CFG(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a<=15) && (b==0)))
        return 0x840008000350ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a<=23) && (b<=1)))
        return 0x840008000350ll + 0x10000ll * ((a) & 0x1f) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=15) && (b==0)))
        return 0x840008000350ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=15) && (b==0)))
        return 0x840008000350ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("RVU_PRIV_PFX_CPTX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_PFX_CPTX_CFG(a,b) cavm_rvu_priv_pfx_cptx_cfg_t
#define bustype_CAVM_RVU_PRIV_PFX_CPTX_CFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_PFX_CPTX_CFG(a,b) "RVU_PRIV_PFX_CPTX_CFG"
#define device_bar_CAVM_RVU_PRIV_PFX_CPTX_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_PFX_CPTX_CFG(a,b) (a)
#define arguments_CAVM_RVU_PRIV_PFX_CPTX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_pf#_id_cfg
 *
 * RVU Privileged PF ID Configuration Registers
 */
union cavm_rvu_priv_pfx_id_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_pfx_id_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t class_code            : 24; /**< [ 39: 16](R/W) Class code to be presented in PCCPF_XXX_REV[BCC,SC,PI] and
                                                                 PCCVF_XXX_REV[BCC,SC,PI]. Format specified by PCC_CLASS_CODE_S.
                                                                 Resets to PCC_DEV_IDL_E::RVU's class code. */
        uint64_t vf_devid              : 8;  /**< [ 15:  8](R/W) Lower bits of VF device ID to be presented in PCCPF_XXX_SRIOV_DEV[VFDEV]\<7:0\>.
                                                                 Resets to PCC_DEV_IDL_E::RVU_VF. */
        uint64_t pf_devid              : 8;  /**< [  7:  0](R/W) Lower bits of PF device ID to be presented in PCCPF_XXX_ID[DEVID]\<7:0\>.
                                                                 Resets to PCC_DEV_IDL_E::RVU_AF for PF(0), PCC_DEV_IDL_E::RVU for other
                                                                 PFs. */
#else /* Word 0 - Little Endian */
        uint64_t pf_devid              : 8;  /**< [  7:  0](R/W) Lower bits of PF device ID to be presented in PCCPF_XXX_ID[DEVID]\<7:0\>.
                                                                 Resets to PCC_DEV_IDL_E::RVU_AF for PF(0), PCC_DEV_IDL_E::RVU for other
                                                                 PFs. */
        uint64_t vf_devid              : 8;  /**< [ 15:  8](R/W) Lower bits of VF device ID to be presented in PCCPF_XXX_SRIOV_DEV[VFDEV]\<7:0\>.
                                                                 Resets to PCC_DEV_IDL_E::RVU_VF. */
        uint64_t class_code            : 24; /**< [ 39: 16](R/W) Class code to be presented in PCCPF_XXX_REV[BCC,SC,PI] and
                                                                 PCCVF_XXX_REV[BCC,SC,PI]. Format specified by PCC_CLASS_CODE_S.
                                                                 Resets to PCC_DEV_IDL_E::RVU's class code. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_pfx_id_cfg_s cn; */
};
typedef union cavm_rvu_priv_pfx_id_cfg cavm_rvu_priv_pfx_id_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_PFX_ID_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_PFX_ID_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=15))
        return 0x840008000120ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=23))
        return 0x840008000120ll + 0x10000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=15))
        return 0x840008000120ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=15))
        return 0x840008000120ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("RVU_PRIV_PFX_ID_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_PFX_ID_CFG(a) cavm_rvu_priv_pfx_id_cfg_t
#define bustype_CAVM_RVU_PRIV_PFX_ID_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_PFX_ID_CFG(a) "RVU_PRIV_PFX_ID_CFG"
#define device_bar_CAVM_RVU_PRIV_PFX_ID_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_PFX_ID_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_PFX_ID_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_pf#_int_cfg
 *
 * RVU Privileged PF Interrupt Configuration Registers
 */
union cavm_rvu_priv_pfx_int_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_pfx_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by RVU_PF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of PF interrupt vectors enumerated by RVU_PF_INT_VEC_E
                                                                 in the PF's MSI-X table. This is added to each enumerated value to obtain
                                                                 the corresponding MSI-X vector index.
                                                                 The highest enumerated value plus [MSIX_OFFSET] must be less than or equal
                                                                 to RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1].

                                                                 Note that the AF interrupt vectors enumerated by RVU_AF_INT_VEC_E have a
                                                                 fixed starting offset of 0 in RVU PF(0)'s MSI-X table. Other PF
                                                                 interrupt vectors should not be mapped at the offsets used by RVU_AF_INT_VEC_E. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of PF interrupt vectors enumerated by RVU_PF_INT_VEC_E
                                                                 in the PF's MSI-X table. This is added to each enumerated value to obtain
                                                                 the corresponding MSI-X vector index.
                                                                 The highest enumerated value plus [MSIX_OFFSET] must be less than or equal
                                                                 to RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1].

                                                                 Note that the AF interrupt vectors enumerated by RVU_AF_INT_VEC_E have a
                                                                 fixed starting offset of 0 in RVU PF(0)'s MSI-X table. Other PF
                                                                 interrupt vectors should not be mapped at the offsets used by RVU_AF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by RVU_PF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_pfx_int_cfg_s cn; */
};
typedef union cavm_rvu_priv_pfx_int_cfg cavm_rvu_priv_pfx_int_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_PFX_INT_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_PFX_INT_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=15))
        return 0x840008000200ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=23))
        return 0x840008000200ll + 0x10000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=15))
        return 0x840008000200ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=15))
        return 0x840008000200ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("RVU_PRIV_PFX_INT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_PFX_INT_CFG(a) cavm_rvu_priv_pfx_int_cfg_t
#define bustype_CAVM_RVU_PRIV_PFX_INT_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_PFX_INT_CFG(a) "RVU_PRIV_PFX_INT_CFG"
#define device_bar_CAVM_RVU_PRIV_PFX_INT_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_PFX_INT_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_PFX_INT_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_pf#_msix_cfg
 *
 * RVU Privileged PF MSI-X Configuration Registers
 * These registers specify MSI-X table sizes and locations for RVU PFs and
 * associated VFs. Hardware maintains all RVU MSI-X tables in a contiguous memory
 * region in LLC/DRAM called the MSI-X table region. The table region's base AF IOVA
 * is specified by RVU_AF_MSIXTR_BASE, and its size as a multiple of
 * 16-byte RVU_MSIX_VEC_S structures must be less than or equal to
 * RVU_PRIV_CONST[MAX_MSIX].
 *
 * A PF's MSI-X table consists of the following range of RVU_MSIX_VEC_S structures
 * in the table region:
 * * First index: [PF_MSIXT_OFFSET].
 * * Last index: [PF_MSIXT_OFFSET] + [PF_MSIXT_SIZEM1].
 *
 * If a PF has enabled VFs (associated RVU_PRIV_PF()_CFG[NVF] is nonzero),
 * then each VF's MSI-X table consumes the following range of RVU_MSIX_VEC_S structures:
 * * First index: [VF_MSIXT_OFFSET] + N*([VF_MSIXT_SIZEM1] + 1).
 * * Last index: [VF_MSIXT_OFFSET] + N*([VF_MSIXT_SIZEM1] + 1) + [VF_MSIXT_SIZEM1].
 *
 * N=0 for the first VF, N=1 for the second VF, etc.
 *
 * Different PFs and VFs must have non-overlapping vector ranges, and the last
 * index of any range must be less than RVU_PRIV_CONST[MAX_MSIX].
 */
union cavm_rvu_priv_pfx_msix_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_pfx_msix_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pf_msixt_offset       : 20; /**< [ 63: 44](R/W) Starting offset of PF's MSI-X table in the RVU MSI-X table region.
                                                                 Internal:
                                                                 Also, bit offset of the PF's PBA table in RVU's internal PBA memory. */
        uint64_t pf_msixt_sizem1       : 12; /**< [ 43: 32](R/W) PF's MSI-X table size (number of MSI-X vectors) minus one. */
        uint64_t vf_msixt_offset       : 20; /**< [ 31: 12](R/W) Starting offset of first VF's MSI-X table in the RVU MSI-X table region.
                                                                 Valid when RVU_PRIV_PF()_CFG[NVF] is nonzero.

                                                                 Internal:
                                                                 Also, bit offset of the first VF's PBA table in RVU's internal PBA memory. */
        uint64_t vf_msixt_sizem1       : 12; /**< [ 11:  0](R/W) Each VF's MSI-X table size (number of MSI-X vectors) minus one.
                                                                 Valid when RVU_PRIV_PF()_CFG[NVF] is nonzero. */
#else /* Word 0 - Little Endian */
        uint64_t vf_msixt_sizem1       : 12; /**< [ 11:  0](R/W) Each VF's MSI-X table size (number of MSI-X vectors) minus one.
                                                                 Valid when RVU_PRIV_PF()_CFG[NVF] is nonzero. */
        uint64_t vf_msixt_offset       : 20; /**< [ 31: 12](R/W) Starting offset of first VF's MSI-X table in the RVU MSI-X table region.
                                                                 Valid when RVU_PRIV_PF()_CFG[NVF] is nonzero.

                                                                 Internal:
                                                                 Also, bit offset of the first VF's PBA table in RVU's internal PBA memory. */
        uint64_t pf_msixt_sizem1       : 12; /**< [ 43: 32](R/W) PF's MSI-X table size (number of MSI-X vectors) minus one. */
        uint64_t pf_msixt_offset       : 20; /**< [ 63: 44](R/W) Starting offset of PF's MSI-X table in the RVU MSI-X table region.
                                                                 Internal:
                                                                 Also, bit offset of the PF's PBA table in RVU's internal PBA memory. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_pfx_msix_cfg_s cn; */
};
typedef union cavm_rvu_priv_pfx_msix_cfg cavm_rvu_priv_pfx_msix_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_PFX_MSIX_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_PFX_MSIX_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=15))
        return 0x840008000110ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=23))
        return 0x840008000110ll + 0x10000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=15))
        return 0x840008000110ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=15))
        return 0x840008000110ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("RVU_PRIV_PFX_MSIX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_PFX_MSIX_CFG(a) cavm_rvu_priv_pfx_msix_cfg_t
#define bustype_CAVM_RVU_PRIV_PFX_MSIX_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_PFX_MSIX_CFG(a) "RVU_PRIV_PFX_MSIX_CFG"
#define device_bar_CAVM_RVU_PRIV_PFX_MSIX_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_PFX_MSIX_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_PFX_MSIX_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_pf#_nix#_cfg
 *
 * RVU Privileged PF NIX Configuration Registers
 * These registers are used to assist PF software discovery. For each enabled RVU
 * PF, software writes the block's resource configuration for the PF in this
 * register. The PF driver can read RVU_PF_BLOCK_ADDR()_DISC to discover the
 * configuration.
 */
union cavm_rvu_priv_pfx_nixx_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_pfx_nixx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t has_lf                : 1;  /**< [  0:  0](R/W) Set when an LF from the block is provisioned to the VF, clear otherwise. */
#else /* Word 0 - Little Endian */
        uint64_t has_lf                : 1;  /**< [  0:  0](R/W) Set when an LF from the block is provisioned to the VF, clear otherwise. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_pfx_nixx_cfg_s cn; */
};
typedef union cavm_rvu_priv_pfx_nixx_cfg cavm_rvu_priv_pfx_nixx_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_PFX_NIXX_CFG(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_PFX_NIXX_CFG(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a<=15) && (b==0)))
        return 0x840008000300ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a<=23) && (b<=1)))
        return 0x840008000300ll + 0x10000ll * ((a) & 0x1f) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=15) && (b==0)))
        return 0x840008000300ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=15) && (b==0)))
        return 0x840008000300ll + 0x10000ll * ((a) & 0xf) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("RVU_PRIV_PFX_NIXX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_PFX_NIXX_CFG(a,b) cavm_rvu_priv_pfx_nixx_cfg_t
#define bustype_CAVM_RVU_PRIV_PFX_NIXX_CFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_PFX_NIXX_CFG(a,b) "RVU_PRIV_PFX_NIXX_CFG"
#define device_bar_CAVM_RVU_PRIV_PFX_NIXX_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_PFX_NIXX_CFG(a,b) (a)
#define arguments_CAVM_RVU_PRIV_PFX_NIXX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_pf#_npa_cfg
 *
 * RVU Privileged PF NPA Configuration Registers
 * Similar to RVU_PRIV_PF()_NIX()_CFG, but for NPA block.
 */
union cavm_rvu_priv_pfx_npa_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_pfx_npa_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t has_lf                : 1;  /**< [  0:  0](R/W) Set when an LF from the block is provisioned to the VF, clear otherwise. */
#else /* Word 0 - Little Endian */
        uint64_t has_lf                : 1;  /**< [  0:  0](R/W) Set when an LF from the block is provisioned to the VF, clear otherwise. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_pfx_npa_cfg_s cn; */
};
typedef union cavm_rvu_priv_pfx_npa_cfg cavm_rvu_priv_pfx_npa_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_PFX_NPA_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_PFX_NPA_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=15))
        return 0x840008000310ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=23))
        return 0x840008000310ll + 0x10000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=15))
        return 0x840008000310ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=15))
        return 0x840008000310ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("RVU_PRIV_PFX_NPA_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_PFX_NPA_CFG(a) cavm_rvu_priv_pfx_npa_cfg_t
#define bustype_CAVM_RVU_PRIV_PFX_NPA_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_PFX_NPA_CFG(a) "RVU_PRIV_PFX_NPA_CFG"
#define device_bar_CAVM_RVU_PRIV_PFX_NPA_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_PFX_NPA_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_PFX_NPA_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_pf#_ree#_cfg
 *
 * RVU Privileged PF REE Configuration Registers
 * Similar to RVU_PRIV_PF()_NIX()_CFG, but for REE({a}) block.
 */
union cavm_rvu_priv_pfx_reex_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_pfx_reex_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
#else /* Word 0 - Little Endian */
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_pfx_reex_cfg_s cn; */
};
typedef union cavm_rvu_priv_pfx_reex_cfg cavm_rvu_priv_pfx_reex_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_PFX_REEX_CFG(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_PFX_REEX_CFG(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a<=23) && (b<=1)))
        return 0x840008000360ll + 0x10000ll * ((a) & 0x1f) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("RVU_PRIV_PFX_REEX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_PFX_REEX_CFG(a,b) cavm_rvu_priv_pfx_reex_cfg_t
#define bustype_CAVM_RVU_PRIV_PFX_REEX_CFG(a,b) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_PFX_REEX_CFG(a,b) "RVU_PRIV_PFX_REEX_CFG"
#define device_bar_CAVM_RVU_PRIV_PFX_REEX_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_PFX_REEX_CFG(a,b) (a)
#define arguments_CAVM_RVU_PRIV_PFX_REEX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_pf#_sso_cfg
 *
 * RVU Privileged PF SSO Configuration Registers
 * Similar to RVU_PRIV_PF()_NIX()_CFG, but for SSO block.
 */
union cavm_rvu_priv_pfx_sso_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_pfx_sso_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
#else /* Word 0 - Little Endian */
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_pfx_sso_cfg_s cn; */
};
typedef union cavm_rvu_priv_pfx_sso_cfg cavm_rvu_priv_pfx_sso_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_PFX_SSO_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_PFX_SSO_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=15))
        return 0x840008000320ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=23))
        return 0x840008000320ll + 0x10000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=15))
        return 0x840008000320ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=15))
        return 0x840008000320ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("RVU_PRIV_PFX_SSO_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_PFX_SSO_CFG(a) cavm_rvu_priv_pfx_sso_cfg_t
#define bustype_CAVM_RVU_PRIV_PFX_SSO_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_PFX_SSO_CFG(a) "RVU_PRIV_PFX_SSO_CFG"
#define device_bar_CAVM_RVU_PRIV_PFX_SSO_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_PFX_SSO_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_PFX_SSO_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_pf#_ssow_cfg
 *
 * RVU Privileged PF SSO Work Slot Configuration Registers
 * Similar to RVU_PRIV_PF()_NIX()_CFG, but for SSOW block.
 */
union cavm_rvu_priv_pfx_ssow_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_pfx_ssow_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
#else /* Word 0 - Little Endian */
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_pfx_ssow_cfg_s cn; */
};
typedef union cavm_rvu_priv_pfx_ssow_cfg cavm_rvu_priv_pfx_ssow_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_PFX_SSOW_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_PFX_SSOW_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=15))
        return 0x840008000330ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=23))
        return 0x840008000330ll + 0x10000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=15))
        return 0x840008000330ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=15))
        return 0x840008000330ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("RVU_PRIV_PFX_SSOW_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_PFX_SSOW_CFG(a) cavm_rvu_priv_pfx_ssow_cfg_t
#define bustype_CAVM_RVU_PRIV_PFX_SSOW_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_PFX_SSOW_CFG(a) "RVU_PRIV_PFX_SSOW_CFG"
#define device_bar_CAVM_RVU_PRIV_PFX_SSOW_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_PFX_SSOW_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_PFX_SSOW_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) rvu_priv_pf#_tim_cfg
 *
 * RVU Privileged PF SSO Work Slot Configuration Registers
 * Similar to RVU_PRIV_PF()_NIX()_CFG, but for TIM block.
 */
union cavm_rvu_priv_pfx_tim_cfg
{
    uint64_t u;
    struct cavm_rvu_priv_pfx_tim_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
#else /* Word 0 - Little Endian */
        uint64_t num_lfs               : 9;  /**< [  8:  0](R/W) Number of LFs from the block that are provisioned to the PF/VF. When non-zero,
                                                                 the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in the block. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_priv_pfx_tim_cfg_s cn; */
};
typedef union cavm_rvu_priv_pfx_tim_cfg cavm_rvu_priv_pfx_tim_cfg_t;

static inline uint64_t CAVM_RVU_PRIV_PFX_TIM_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_PRIV_PFX_TIM_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=15))
        return 0x840008000340ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=23))
        return 0x840008000340ll + 0x10000ll * ((a) & 0x1f);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=15))
        return 0x840008000340ll + 0x10000ll * ((a) & 0xf);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=15))
        return 0x840008000340ll + 0x10000ll * ((a) & 0xf);
    __cavm_csr_fatal("RVU_PRIV_PFX_TIM_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_PRIV_PFX_TIM_CFG(a) cavm_rvu_priv_pfx_tim_cfg_t
#define bustype_CAVM_RVU_PRIV_PFX_TIM_CFG(a) CSR_TYPE_RVU_PF_BAR0
#define basename_CAVM_RVU_PRIV_PFX_TIM_CFG(a) "RVU_PRIV_PFX_TIM_CFG"
#define device_bar_CAVM_RVU_PRIV_PFX_TIM_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_CAVM_RVU_PRIV_PFX_TIM_CFG(a) (a)
#define arguments_CAVM_RVU_PRIV_PFX_TIM_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_VF_BAR2) rvu_vf_block_addr#_disc
 *
 * RVU VF Block Address Discovery Registers
 * These registers allow each VF driver to discover block resources that are
 * provisioned to its VF. The register's BLOCK_ADDR index is enumerated by
 * RVU_BLOCK_ADDR_E.
 */
union cavm_rvu_vf_block_addrx_disc
{
    uint64_t u;
    struct cavm_rvu_vf_block_addrx_disc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_28_63        : 36;
        uint64_t btype                 : 8;  /**< [ 27: 20](RO/H) Block type enumerated by RVU_BLOCK_TYPE_E. */
        uint64_t rid                   : 8;  /**< [ 19: 12](RO/H) Revision ID of the block from RVU_PRIV_BLOCK_TYPE()_REV[RID]. */
        uint64_t imp                   : 1;  /**< [ 11: 11](RO/H) Implemented. When set, a block is present at this BLOCK_ADDR index as
                                                                 enumerated by RVU_BLOCK_ADDR_E. When clear, a block is not present and the
                                                                 remaining fields in the register are RAZ.

                                                                 Internal:
                                                                 Returns zero if the block is implemented but disabled or fused out.

                                                                 CN93XX:
                                                                 _ RVUM, LMT, NPA, NIX(0), NPC, NDC(0..2) = 1.
                                                                 _ SSO, SSOW, TIM = ~sso_cripple.
                                                                 _ CPT(0) = ~disable_crypto(0)
                                                                 _ All others = 0.

                                                                 CNF95XX:
                                                                 _ RVUM, LMT, NPA, NIX(0), NPC, NDC(0..2) = 1.
                                                                 _ SSO, SSOW, TIM = ~sso_cripple.
                                                                 _ All others = 0.

                                                                 CN98XX:
                                                                 _ RVUM, LMT, NPA, NIX(0..1), NPC, NDC(0..5) = 1.
                                                                 _ SSO, SSOW, TIM = ~sso_cripple.
                                                                 _ CPT(0..1) = ~disable_crypto(0..1).
                                                                 _ REE(0..1) = 1.
                                                                 _ All others = 0. */
        uint64_t reserved_9_10         : 2;
        uint64_t num_lfs               : 9;  /**< [  8:  0](RO/H) Number of local functions from the block that are provisioned to the VF/PF.
                                                                 When non-zero, the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in
                                                                 the block.
                                                                 Returns 0 for block types that do not have local functions, 0 or 1 for
                                                                 single-slot blocks; see RVU_BLOCK_TYPE_E. */
#else /* Word 0 - Little Endian */
        uint64_t num_lfs               : 9;  /**< [  8:  0](RO/H) Number of local functions from the block that are provisioned to the VF/PF.
                                                                 When non-zero, the provisioned LFs are mapped to slots 0 to [NUM_LFS]-1 in
                                                                 the block.
                                                                 Returns 0 for block types that do not have local functions, 0 or 1 for
                                                                 single-slot blocks; see RVU_BLOCK_TYPE_E. */
        uint64_t reserved_9_10         : 2;
        uint64_t imp                   : 1;  /**< [ 11: 11](RO/H) Implemented. When set, a block is present at this BLOCK_ADDR index as
                                                                 enumerated by RVU_BLOCK_ADDR_E. When clear, a block is not present and the
                                                                 remaining fields in the register are RAZ.

                                                                 Internal:
                                                                 Returns zero if the block is implemented but disabled or fused out.

                                                                 CN93XX:
                                                                 _ RVUM, LMT, NPA, NIX(0), NPC, NDC(0..2) = 1.
                                                                 _ SSO, SSOW, TIM = ~sso_cripple.
                                                                 _ CPT(0) = ~disable_crypto(0)
                                                                 _ All others = 0.

                                                                 CNF95XX:
                                                                 _ RVUM, LMT, NPA, NIX(0), NPC, NDC(0..2) = 1.
                                                                 _ SSO, SSOW, TIM = ~sso_cripple.
                                                                 _ All others = 0.

                                                                 CN98XX:
                                                                 _ RVUM, LMT, NPA, NIX(0..1), NPC, NDC(0..5) = 1.
                                                                 _ SSO, SSOW, TIM = ~sso_cripple.
                                                                 _ CPT(0..1) = ~disable_crypto(0..1).
                                                                 _ REE(0..1) = 1.
                                                                 _ All others = 0. */
        uint64_t rid                   : 8;  /**< [ 19: 12](RO/H) Revision ID of the block from RVU_PRIV_BLOCK_TYPE()_REV[RID]. */
        uint64_t btype                 : 8;  /**< [ 27: 20](RO/H) Block type enumerated by RVU_BLOCK_TYPE_E. */
        uint64_t reserved_28_63        : 36;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_vf_block_addrx_disc_s cn; */
};
typedef union cavm_rvu_vf_block_addrx_disc cavm_rvu_vf_block_addrx_disc_t;

static inline uint64_t CAVM_RVU_VF_BLOCK_ADDRX_DISC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_VF_BLOCK_ADDRX_DISC(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=31))
        return 0x840200000200ll + 8ll * ((a) & 0x1f);
    __cavm_csr_fatal("RVU_VF_BLOCK_ADDRX_DISC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_VF_BLOCK_ADDRX_DISC(a) cavm_rvu_vf_block_addrx_disc_t
#define bustype_CAVM_RVU_VF_BLOCK_ADDRX_DISC(a) CSR_TYPE_RVU_VF_BAR2
#define basename_CAVM_RVU_VF_BLOCK_ADDRX_DISC(a) "RVU_VF_BLOCK_ADDRX_DISC"
#define device_bar_CAVM_RVU_VF_BLOCK_ADDRX_DISC(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_VF_BLOCK_ADDRX_DISC(a) (a)
#define arguments_CAVM_RVU_VF_BLOCK_ADDRX_DISC(a) (a),-1,-1,-1

/**
 * Register (RVU_VF_BAR2) rvu_vf_int
 *
 * RVU VF Interrupt Registers
 */
union cavm_rvu_vf_int
{
    uint64_t u;
    struct cavm_rvu_vf_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) PF to VF mailbox interrupt. Set when RVU_PF_VF()_PFVF_MBOX(0) is written. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) PF to VF mailbox interrupt. Set when RVU_PF_VF()_PFVF_MBOX(0) is written. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_vf_int_s cn; */
};
typedef union cavm_rvu_vf_int cavm_rvu_vf_int_t;

#define CAVM_RVU_VF_INT CAVM_RVU_VF_INT_FUNC()
static inline uint64_t CAVM_RVU_VF_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_VF_INT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840200000020ll;
    __cavm_csr_fatal("RVU_VF_INT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_VF_INT cavm_rvu_vf_int_t
#define bustype_CAVM_RVU_VF_INT CSR_TYPE_RVU_VF_BAR2
#define basename_CAVM_RVU_VF_INT "RVU_VF_INT"
#define device_bar_CAVM_RVU_VF_INT 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_VF_INT 0
#define arguments_CAVM_RVU_VF_INT -1,-1,-1,-1

/**
 * Register (RVU_VF_BAR2) rvu_vf_int_ena_w1c
 *
 * RVU VF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_rvu_vf_int_ena_w1c
{
    uint64_t u;
    struct cavm_rvu_vf_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RVU_VF_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for RVU_VF_INT[MBOX]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_vf_int_ena_w1c_s cn; */
};
typedef union cavm_rvu_vf_int_ena_w1c cavm_rvu_vf_int_ena_w1c_t;

#define CAVM_RVU_VF_INT_ENA_W1C CAVM_RVU_VF_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_RVU_VF_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_VF_INT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840200000038ll;
    __cavm_csr_fatal("RVU_VF_INT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_VF_INT_ENA_W1C cavm_rvu_vf_int_ena_w1c_t
#define bustype_CAVM_RVU_VF_INT_ENA_W1C CSR_TYPE_RVU_VF_BAR2
#define basename_CAVM_RVU_VF_INT_ENA_W1C "RVU_VF_INT_ENA_W1C"
#define device_bar_CAVM_RVU_VF_INT_ENA_W1C 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_VF_INT_ENA_W1C 0
#define arguments_CAVM_RVU_VF_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (RVU_VF_BAR2) rvu_vf_int_ena_w1s
 *
 * RVU VF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_rvu_vf_int_ena_w1s
{
    uint64_t u;
    struct cavm_rvu_vf_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RVU_VF_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for RVU_VF_INT[MBOX]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_vf_int_ena_w1s_s cn; */
};
typedef union cavm_rvu_vf_int_ena_w1s cavm_rvu_vf_int_ena_w1s_t;

#define CAVM_RVU_VF_INT_ENA_W1S CAVM_RVU_VF_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_RVU_VF_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_VF_INT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840200000030ll;
    __cavm_csr_fatal("RVU_VF_INT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_VF_INT_ENA_W1S cavm_rvu_vf_int_ena_w1s_t
#define bustype_CAVM_RVU_VF_INT_ENA_W1S CSR_TYPE_RVU_VF_BAR2
#define basename_CAVM_RVU_VF_INT_ENA_W1S "RVU_VF_INT_ENA_W1S"
#define device_bar_CAVM_RVU_VF_INT_ENA_W1S 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_VF_INT_ENA_W1S 0
#define arguments_CAVM_RVU_VF_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (RVU_VF_BAR2) rvu_vf_int_w1s
 *
 * RVU VF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_rvu_vf_int_w1s
{
    uint64_t u;
    struct cavm_rvu_vf_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RVU_VF_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets RVU_VF_INT[MBOX]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_vf_int_w1s_s cn; */
};
typedef union cavm_rvu_vf_int_w1s cavm_rvu_vf_int_w1s_t;

#define CAVM_RVU_VF_INT_W1S CAVM_RVU_VF_INT_W1S_FUNC()
static inline uint64_t CAVM_RVU_VF_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_VF_INT_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x840200000028ll;
    __cavm_csr_fatal("RVU_VF_INT_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_VF_INT_W1S cavm_rvu_vf_int_w1s_t
#define bustype_CAVM_RVU_VF_INT_W1S CSR_TYPE_RVU_VF_BAR2
#define basename_CAVM_RVU_VF_INT_W1S "RVU_VF_INT_W1S"
#define device_bar_CAVM_RVU_VF_INT_W1S 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_VF_INT_W1S 0
#define arguments_CAVM_RVU_VF_INT_W1S -1,-1,-1,-1

/**
 * Register (RVU_VF_BAR2) rvu_vf_msix_pba#
 *
 * RVU VF MSI-X Pending-Bit-Array Registers
 * This register is the MSI-X VF PBA table.
 */
union cavm_rvu_vf_msix_pbax
{
    uint64_t u;
    struct cavm_rvu_vf_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message bit for each MSI-X vector, i.e. one bit per
                                                                 RVU_VF_MSIX_VEC()_CTL register.
                                                                 The total number of bits for a given VF (and thus the number of PBA
                                                                 registers) is determined by RVU_PRIV_PF()_MSIX_CFG[VF_MSIXT_SIZEM1]
                                                                 (plus 1). */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message bit for each MSI-X vector, i.e. one bit per
                                                                 RVU_VF_MSIX_VEC()_CTL register.
                                                                 The total number of bits for a given VF (and thus the number of PBA
                                                                 registers) is determined by RVU_PRIV_PF()_MSIX_CFG[VF_MSIXT_SIZEM1]
                                                                 (plus 1). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_vf_msix_pbax_s cn; */
};
typedef union cavm_rvu_vf_msix_pbax cavm_rvu_vf_msix_pbax_t;

static inline uint64_t CAVM_RVU_VF_MSIX_PBAX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_VF_MSIX_PBAX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x8402000f0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("RVU_VF_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_VF_MSIX_PBAX(a) cavm_rvu_vf_msix_pbax_t
#define bustype_CAVM_RVU_VF_MSIX_PBAX(a) CSR_TYPE_RVU_VF_BAR2
#define basename_CAVM_RVU_VF_MSIX_PBAX(a) "RVU_VF_MSIX_PBAX"
#define device_bar_CAVM_RVU_VF_MSIX_PBAX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_VF_MSIX_PBAX(a) (a)
#define arguments_CAVM_RVU_VF_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (RVU_VF_BAR2) rvu_vf_msix_vec#_addr
 *
 * RVU VF MSI-X Vector-Table Address Registers
 * These registers and RVU_VF_MSIX_VEC()_CTL form the VF MSI-X vector table.
 * The number of MSI-X vectors for a given VF is specified by
 * RVU_PRIV_PF()_MSIX_CFG[VF_MSIXT_SIZEM1] (plus 1).
 *
 * Software must do a read after any writes to the MSI-X vector table to ensure
 * that the writes have completed before interrupts are generated to the modified
 * vectors.
 */
union cavm_rvu_vf_msix_vecx_addr
{
    uint64_t u;
    struct cavm_rvu_vf_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) VF IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's RVU_VF_MSIX_VEC()_ADDR, RVU_VF_MSIX_VEC()_CTL, and
                                                                 corresponding bit of RVU_VF_MSIX_PBA() are RAZ/WI and does not cause a
                                                                 fault when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_RVU_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors of the function are
                                                                 secure as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's RVU_VF_MSIX_VEC()_ADDR, RVU_VF_MSIX_VEC()_CTL, and
                                                                 corresponding bit of RVU_VF_MSIX_PBA() are RAZ/WI and does not cause a
                                                                 fault when accessed by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_RVU_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors of the function are
                                                                 secure as if [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) VF IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_vf_msix_vecx_addr_s cn; */
};
typedef union cavm_rvu_vf_msix_vecx_addr cavm_rvu_vf_msix_vecx_addr_t;

static inline uint64_t CAVM_RVU_VF_MSIX_VECX_ADDR(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_VF_MSIX_VECX_ADDR(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x840200080000ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("RVU_VF_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_VF_MSIX_VECX_ADDR(a) cavm_rvu_vf_msix_vecx_addr_t
#define bustype_CAVM_RVU_VF_MSIX_VECX_ADDR(a) CSR_TYPE_RVU_VF_BAR2
#define basename_CAVM_RVU_VF_MSIX_VECX_ADDR(a) "RVU_VF_MSIX_VECX_ADDR"
#define device_bar_CAVM_RVU_VF_MSIX_VECX_ADDR(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_VF_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_RVU_VF_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (RVU_VF_BAR2) rvu_vf_msix_vec#_ctl
 *
 * RVU VF MSI-X Vector-Table Control and Data Registers
 * These registers and RVU_VF_MSIX_VEC()_ADDR form the VF MSI-X vector table.
 */
union cavm_rvu_vf_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_rvu_vf_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_vf_msix_vecx_ctl_s cn; */
};
typedef union cavm_rvu_vf_msix_vecx_ctl cavm_rvu_vf_msix_vecx_ctl_t;

static inline uint64_t CAVM_RVU_VF_MSIX_VECX_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_VF_MSIX_VECX_CTL(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x840200080008ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("RVU_VF_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_VF_MSIX_VECX_CTL(a) cavm_rvu_vf_msix_vecx_ctl_t
#define bustype_CAVM_RVU_VF_MSIX_VECX_CTL(a) CSR_TYPE_RVU_VF_BAR2
#define basename_CAVM_RVU_VF_MSIX_VECX_CTL(a) "RVU_VF_MSIX_VECX_CTL"
#define device_bar_CAVM_RVU_VF_MSIX_VECX_CTL(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_VF_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_RVU_VF_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (RVU_VF_BAR2) rvu_vf_vfpf_mbox#
 *
 * RVU VF/PF Mailbox Registers
 */
union cavm_rvu_vf_vfpf_mboxx
{
    uint64_t u;
    struct cavm_rvu_vf_vfpf_mboxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These VF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. The PF may access the same storage using RVU_PF_VF()_PFVF_MBOX().
                                                                 MBOX(0) is typically used for PF to VF signaling, MBOX(1) for VF to PF.
                                                                 Writing RVU_VF_VFPF_MBOX(1) (but not RVU_PF_VF()_PFVF_MBOX(1))
                                                                 will set the corresponding RVU_PF_VFPF_MBOX_INT() bit, which if appropriately
                                                                 enabled will send an interrupt to the PF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These VF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. The PF may access the same storage using RVU_PF_VF()_PFVF_MBOX().
                                                                 MBOX(0) is typically used for PF to VF signaling, MBOX(1) for VF to PF.
                                                                 Writing RVU_VF_VFPF_MBOX(1) (but not RVU_PF_VF()_PFVF_MBOX(1))
                                                                 will set the corresponding RVU_PF_VFPF_MBOX_INT() bit, which if appropriately
                                                                 enabled will send an interrupt to the PF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_rvu_vf_vfpf_mboxx_s cn; */
};
typedef union cavm_rvu_vf_vfpf_mboxx cavm_rvu_vf_vfpf_mboxx_t;

static inline uint64_t CAVM_RVU_VF_VFPF_MBOXX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_RVU_VF_VFPF_MBOXX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x840200000000ll + 8ll * ((a) & 0x1);
    __cavm_csr_fatal("RVU_VF_VFPF_MBOXX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_RVU_VF_VFPF_MBOXX(a) cavm_rvu_vf_vfpf_mboxx_t
#define bustype_CAVM_RVU_VF_VFPF_MBOXX(a) CSR_TYPE_RVU_VF_BAR2
#define basename_CAVM_RVU_VF_VFPF_MBOXX(a) "RVU_VF_VFPF_MBOXX"
#define device_bar_CAVM_RVU_VF_VFPF_MBOXX(a) 0x2 /* RVU_BAR2 */
#define busnum_CAVM_RVU_VF_VFPF_MBOXX(a) (a)
#define arguments_CAVM_RVU_VF_VFPF_MBOXX(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_RVU_H__ */
