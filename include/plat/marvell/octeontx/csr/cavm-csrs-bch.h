#ifndef __CAVM_CSRS_BCH_H__
#define __CAVM_CSRS_BCH_H__
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
 * OcteonTX BCH.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration bch_bar_e
 *
 * BCH Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_BCH_BAR_E_BCH_PF_BAR0 (0x871000000000ll)
#define CAVM_BCH_BAR_E_BCH_PF_BAR0_SIZE 0x100000ull
#define CAVM_BCH_BAR_E_BCH_PF_BAR4 (0x871000f00000ll)
#define CAVM_BCH_BAR_E_BCH_PF_BAR4_SIZE 0x100000ull
#define CAVM_BCH_BAR_E_BCH_VFX_BAR0(a) (0x871001000000ll + 0x100000ll * (a))
#define CAVM_BCH_BAR_E_BCH_VFX_BAR0_SIZE 0x100000ull
#define CAVM_BCH_BAR_E_BCH_VFX_BAR4(a) (0x871001800000ll + 0x100000ll * (a))
#define CAVM_BCH_BAR_E_BCH_VFX_BAR4_SIZE 0x100000ull

/**
 * Enumeration bch_int_vec_e
 *
 * BCH PF MSI-X Vector Enumeration
 * Enumerates the PF MSI-X interrupt vectors.
 */
#define CAVM_BCH_INT_VEC_E_ERR (0)
#define CAVM_BCH_INT_VEC_E_POISON (0)

/**
 * Enumeration bch_vf_int_vec_e
 *
 * BCH VF MSI-X Vector Enumeration
 * Enumerates the VF MSI-X interrupt vectors.
 */
#define CAVM_BCH_VF_INT_VEC_E_INT (0)

/**
 * Structure bch_cword_s
 *
 * BCH Command Instruction Word Structure
 */
union cavm_bch_cword_s
{
    uint64_t u;
    struct cavm_bch_cword_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ecc_gen               : 2;  /**< [ 63: 62] Indicates the BCH function:
                                                                   0x0 = Perform a block correction.
                                                                   0x1 = Perform a copy operation.
                                                                   0x2 = Perform a parity generation.
                                                                   0x3 = Perform a copy operation. */
        uint64_t reserved_39_61        : 23;
        uint64_t ecc_level             : 7;  /**< [ 38: 32] Indicates the maximum number of errors within a data block that can be corrected.
                                                                 The number of parity bytes is equal to ceiling(15 * [ECC_LEVEL])/8.
                                                                 Must be 4, 8, 16, 24, 32, 40, 48, 56, 60, or 64. */
        uint64_t reserved_12_31        : 20;
        uint64_t size                  : 12; /**< [ 11:  0] Indicates the size in bytes of the data block. [SIZE] must be a multiple of two
                                                                 bytes (i.e. [SIZE]\<0\> must be zero).
                                                                 For all BCH functions, the maximum [SIZE] is 3800 decimal. */
#else /* Word 0 - Little Endian */
        uint64_t size                  : 12; /**< [ 11:  0] Indicates the size in bytes of the data block. [SIZE] must be a multiple of two
                                                                 bytes (i.e. [SIZE]\<0\> must be zero).
                                                                 For all BCH functions, the maximum [SIZE] is 3800 decimal. */
        uint64_t reserved_12_31        : 20;
        uint64_t ecc_level             : 7;  /**< [ 38: 32] Indicates the maximum number of errors within a data block that can be corrected.
                                                                 The number of parity bytes is equal to ceiling(15 * [ECC_LEVEL])/8.
                                                                 Must be 4, 8, 16, 24, 32, 40, 48, 56, 60, or 64. */
        uint64_t reserved_39_61        : 23;
        uint64_t ecc_gen               : 2;  /**< [ 63: 62] Indicates the BCH function:
                                                                   0x0 = Perform a block correction.
                                                                   0x1 = Perform a copy operation.
                                                                   0x2 = Perform a parity generation.
                                                                   0x3 = Perform a copy operation. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_cword_s_s cn; */
};

/**
 * Structure bch_iword_s
 *
 * BCH Input Instruction Word Structure
 */
union cavm_bch_iword_s
{
    uint64_t u;
    struct cavm_bch_iword_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t nc                    : 1;  /**< [ 56: 56] When set, indicates that BCH should not allocate L2 cache space for the input
                                                                 data on L2 cache misses. */
        uint64_t reserved_53_55        : 3;
        uint64_t ptr                   : 53; /**< [ 52:  0] Indicates the starting IOVA of input data in L2/DRAM. PTR must be naturally
                                                                 aligned on an eight-byte boundary (i.e. \<2:0\> must be 0s). */
#else /* Word 0 - Little Endian */
        uint64_t ptr                   : 53; /**< [ 52:  0] Indicates the starting IOVA of input data in L2/DRAM. PTR must be naturally
                                                                 aligned on an eight-byte boundary (i.e. \<2:0\> must be 0s). */
        uint64_t reserved_53_55        : 3;
        uint64_t nc                    : 1;  /**< [ 56: 56] When set, indicates that BCH should not allocate L2 cache space for the input
                                                                 data on L2 cache misses. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } s;
    struct cavm_bch_iword_s_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t nc                    : 1;  /**< [ 56: 56] When set, indicates that BCH should not allocate L2 cache space for the input
                                                                 data on L2 cache misses. */
        uint64_t reserved_49_55        : 7;
        uint64_t ptr                   : 49; /**< [ 48:  0] Indicates the starting IOVA of input data in L2/DRAM. PTR must be naturally
                                                                 aligned on an eight-byte boundary (i.e. \<2:0\> must be 0s). */
#else /* Word 0 - Little Endian */
        uint64_t ptr                   : 49; /**< [ 48:  0] Indicates the starting IOVA of input data in L2/DRAM. PTR must be naturally
                                                                 aligned on an eight-byte boundary (i.e. \<2:0\> must be 0s). */
        uint64_t reserved_49_55        : 7;
        uint64_t nc                    : 1;  /**< [ 56: 56] When set, indicates that BCH should not allocate L2 cache space for the input
                                                                 data on L2 cache misses. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_bch_iword_s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_57_63        : 7;
        uint64_t nc                    : 1;  /**< [ 56: 56] When set, indicates that BCH should not allocate LLC space for the input
                                                                 data on LLC misses. */
        uint64_t reserved_53_55        : 3;
        uint64_t ptr                   : 53; /**< [ 52:  0] Indicates the starting IOVA of input data in LLC/DRAM. [PTR] must be naturally
                                                                 aligned on an eight-byte boundary (i.e. \<2:0\> must be 0x0). */
#else /* Word 0 - Little Endian */
        uint64_t ptr                   : 53; /**< [ 52:  0] Indicates the starting IOVA of input data in LLC/DRAM. [PTR] must be naturally
                                                                 aligned on an eight-byte boundary (i.e. \<2:0\> must be 0x0). */
        uint64_t reserved_53_55        : 3;
        uint64_t nc                    : 1;  /**< [ 56: 56] When set, indicates that BCH should not allocate LLC space for the input
                                                                 data on LLC misses. */
        uint64_t reserved_57_63        : 7;
#endif /* Word 0 - End */
    } cn9;
};

/**
 * Structure bch_oword_s
 *
 * BCH Output Instruction Word Structure
 */
union cavm_bch_oword_s
{
    uint64_t u;
    struct cavm_bch_oword_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t fw                    : 1;  /**< [ 57: 57] When set, indicates that BCH can modify any byte in any (128-byte) cache line
                                                                 touched by L2/DRAM addresses BCH_OWORD_S[PTR] through BCH_OWORD_S[PTR] + SIZE -
                                                                 1, where SIZE is BCH_CWORD_S[SIZE] when BCH_CWORD_S[ECC_GEN] = 0, else SIZE is
                                                                 the number of parity bytes selected by BCH_CWORD_S[ECC_LEVEL]. Setting [FW] can
                                                                 improve hardware performance, as some DRAM load operations can be avoided on L2
                                                                 cache misses. */
        uint64_t nc                    : 1;  /**< [ 56: 56] When set, indicates that BCH should not allocate L2 cache space for the parity/
                                                                 correction data on L2 cache misses. */
        uint64_t reserved_53_55        : 3;
        uint64_t ptr                   : 53; /**< [ 52:  0] Indicates the starting IOVA of the L2/DRAM buffer that will receive the
                                                                 parity/correction data. PTR must be naturally-aligned on an eight-byte boundary
                                                                 (i.e. \<2:0\> must be 0s). */
#else /* Word 0 - Little Endian */
        uint64_t ptr                   : 53; /**< [ 52:  0] Indicates the starting IOVA of the L2/DRAM buffer that will receive the
                                                                 parity/correction data. PTR must be naturally-aligned on an eight-byte boundary
                                                                 (i.e. \<2:0\> must be 0s). */
        uint64_t reserved_53_55        : 3;
        uint64_t nc                    : 1;  /**< [ 56: 56] When set, indicates that BCH should not allocate L2 cache space for the parity/
                                                                 correction data on L2 cache misses. */
        uint64_t fw                    : 1;  /**< [ 57: 57] When set, indicates that BCH can modify any byte in any (128-byte) cache line
                                                                 touched by L2/DRAM addresses BCH_OWORD_S[PTR] through BCH_OWORD_S[PTR] + SIZE -
                                                                 1, where SIZE is BCH_CWORD_S[SIZE] when BCH_CWORD_S[ECC_GEN] = 0, else SIZE is
                                                                 the number of parity bytes selected by BCH_CWORD_S[ECC_LEVEL]. Setting [FW] can
                                                                 improve hardware performance, as some DRAM load operations can be avoided on L2
                                                                 cache misses. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } s;
    struct cavm_bch_oword_s_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t fw                    : 1;  /**< [ 57: 57] When set, indicates that BCH can modify any byte in any (128-byte) cache line
                                                                 touched by L2/DRAM addresses BCH_OWORD_S[PTR] through BCH_OWORD_S[PTR] + SIZE -
                                                                 1, where SIZE is BCH_CWORD_S[SIZE] when BCH_CWORD_S[ECC_GEN] = 0, else SIZE is
                                                                 the number of parity bytes selected by BCH_CWORD_S[ECC_LEVEL]. Setting [FW] can
                                                                 improve hardware performance, as some DRAM load operations can be avoided on L2
                                                                 cache misses. */
        uint64_t nc                    : 1;  /**< [ 56: 56] When set, indicates that BCH should not allocate L2 cache space for the parity/
                                                                 correction data on L2 cache misses. */
        uint64_t reserved_49_55        : 7;
        uint64_t ptr                   : 49; /**< [ 48:  0] Indicates the starting IOVA of the L2/DRAM buffer that will receive the
                                                                 parity/correction data. PTR must be naturally-aligned on an eight-byte boundary
                                                                 (i.e. \<2:0\> must be 0s). */
#else /* Word 0 - Little Endian */
        uint64_t ptr                   : 49; /**< [ 48:  0] Indicates the starting IOVA of the L2/DRAM buffer that will receive the
                                                                 parity/correction data. PTR must be naturally-aligned on an eight-byte boundary
                                                                 (i.e. \<2:0\> must be 0s). */
        uint64_t reserved_49_55        : 7;
        uint64_t nc                    : 1;  /**< [ 56: 56] When set, indicates that BCH should not allocate L2 cache space for the parity/
                                                                 correction data on L2 cache misses. */
        uint64_t fw                    : 1;  /**< [ 57: 57] When set, indicates that BCH can modify any byte in any (128-byte) cache line
                                                                 touched by L2/DRAM addresses BCH_OWORD_S[PTR] through BCH_OWORD_S[PTR] + SIZE -
                                                                 1, where SIZE is BCH_CWORD_S[SIZE] when BCH_CWORD_S[ECC_GEN] = 0, else SIZE is
                                                                 the number of parity bytes selected by BCH_CWORD_S[ECC_LEVEL]. Setting [FW] can
                                                                 improve hardware performance, as some DRAM load operations can be avoided on L2
                                                                 cache misses. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_bch_oword_s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_58_63        : 6;
        uint64_t fw                    : 1;  /**< [ 57: 57] When set, indicates that BCH can modify any byte in any (128-byte) cache line
                                                                 touched by LLC/DRAM addresses BCH_OWORD_S[PTR] through BCH_OWORD_S[PTR] + SIZE -
                                                                 1, where SIZE is BCH_CWORD_S[SIZE] when BCH_CWORD_S[ECC_GEN] = 0, else SIZE is
                                                                 the number of parity bytes selected by BCH_CWORD_S[ECC_LEVEL]. Setting [FW] can
                                                                 improve hardware performance, as some DRAM load operations can be avoided on LLC
                                                                 misses. */
        uint64_t nc                    : 1;  /**< [ 56: 56] When set, indicates that BCH should not allocate LLC space for the parity/
                                                                 correction data on LLC misses. */
        uint64_t reserved_53_55        : 3;
        uint64_t ptr                   : 53; /**< [ 52:  0] Indicates the starting IOVA of the LLC/DRAM buffer that will receive the
                                                                 parity/correction data. [PTR] must be naturally-aligned on an eight-byte boundary
                                                                 (i.e. \<2:0\> must be 0s). */
#else /* Word 0 - Little Endian */
        uint64_t ptr                   : 53; /**< [ 52:  0] Indicates the starting IOVA of the LLC/DRAM buffer that will receive the
                                                                 parity/correction data. [PTR] must be naturally-aligned on an eight-byte boundary
                                                                 (i.e. \<2:0\> must be 0s). */
        uint64_t reserved_53_55        : 3;
        uint64_t nc                    : 1;  /**< [ 56: 56] When set, indicates that BCH should not allocate LLC space for the parity/
                                                                 correction data on LLC misses. */
        uint64_t fw                    : 1;  /**< [ 57: 57] When set, indicates that BCH can modify any byte in any (128-byte) cache line
                                                                 touched by LLC/DRAM addresses BCH_OWORD_S[PTR] through BCH_OWORD_S[PTR] + SIZE -
                                                                 1, where SIZE is BCH_CWORD_S[SIZE] when BCH_CWORD_S[ECC_GEN] = 0, else SIZE is
                                                                 the number of parity bytes selected by BCH_CWORD_S[ECC_LEVEL]. Setting [FW] can
                                                                 improve hardware performance, as some DRAM load operations can be avoided on LLC
                                                                 misses. */
        uint64_t reserved_58_63        : 6;
#endif /* Word 0 - End */
    } cn9;
};

/**
 * Structure bch_res_s
 *
 * BCH Result Structure
 */
union cavm_bch_res_s
{
    uint32_t u;
    struct cavm_bch_res_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t done                  : 1;  /**< [ 15: 15] Done. */
        uint32_t uncorr                : 1;  /**< [ 14: 14] Uncorrectable error. */
        uint32_t erased                : 1;  /**< [ 13: 13] Erased. */
        uint32_t poison                : 1;  /**< [ 12: 12] Block load was poisoned. */
        uint32_t fault                 : 1;  /**< [ 11: 11] Block load or store had fault. */
        uint32_t reserved_7_10         : 4;
        uint32_t num_errors            : 7;  /**< [  6:  0] Number of errors. */
#else /* Word 0 - Little Endian */
        uint32_t num_errors            : 7;  /**< [  6:  0] Number of errors. */
        uint32_t reserved_7_10         : 4;
        uint32_t fault                 : 1;  /**< [ 11: 11] Block load or store had fault. */
        uint32_t poison                : 1;  /**< [ 12: 12] Block load was poisoned. */
        uint32_t erased                : 1;  /**< [ 13: 13] Erased. */
        uint32_t uncorr                : 1;  /**< [ 14: 14] Uncorrectable error. */
        uint32_t done                  : 1;  /**< [ 15: 15] Done. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } s;
    struct cavm_bch_res_s_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint32_t reserved_16_31        : 16;
        uint32_t done                  : 1;  /**< [ 15: 15] Done. */
        uint32_t uncorr                : 1;  /**< [ 14: 14] Uncorrectable error. */
        uint32_t erased                : 1;  /**< [ 13: 13] Erased. */
        uint32_t reserved_7_12         : 6;
        uint32_t num_errors            : 7;  /**< [  6:  0] Number of errors. */
#else /* Word 0 - Little Endian */
        uint32_t num_errors            : 7;  /**< [  6:  0] Number of errors. */
        uint32_t reserved_7_12         : 6;
        uint32_t erased                : 1;  /**< [ 13: 13] Erased. */
        uint32_t uncorr                : 1;  /**< [ 14: 14] Uncorrectable error. */
        uint32_t done                  : 1;  /**< [ 15: 15] Done. */
        uint32_t reserved_16_31        : 16;
#endif /* Word 0 - End */
    } cn8;
    /* struct cavm_bch_res_s_s cn9; */
};

/**
 * Structure bch_rword_s
 *
 * BCH Result Instruction Word Structure
 */
union cavm_bch_rword_s
{
    uint64_t u;
    struct cavm_bch_rword_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ptr                   : 53; /**< [ 52:  0] Indicates the starting IOVA of the L2/DRAM buffer that will receive the
                                                                 2-byte BCH_RES_S. [PTR] must be naturally-aligned on a two-byte boundary
                                                                 (i.e. \<0\> must be zeros). */
#else /* Word 0 - Little Endian */
        uint64_t ptr                   : 53; /**< [ 52:  0] Indicates the starting IOVA of the L2/DRAM buffer that will receive the
                                                                 2-byte BCH_RES_S. [PTR] must be naturally-aligned on a two-byte boundary
                                                                 (i.e. \<0\> must be zeros). */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    struct cavm_bch_rword_s_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t ptr                   : 49; /**< [ 48:  0] Indicates the starting IOVA of the L2/DRAM buffer that will receive the
                                                                 2-byte BCH_RES_S. [PTR] must be naturally-aligned on a two-byte boundary
                                                                 (i.e. \<0\> must be zeros). */
#else /* Word 0 - Little Endian */
        uint64_t ptr                   : 49; /**< [ 48:  0] Indicates the starting IOVA of the L2/DRAM buffer that will receive the
                                                                 2-byte BCH_RES_S. [PTR] must be naturally-aligned on a two-byte boundary
                                                                 (i.e. \<0\> must be zeros). */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_bch_rword_s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ptr                   : 53; /**< [ 52:  0] Indicates the starting IOVA of the LLC/DRAM buffer that will receive the
                                                                 2-byte BCH_RES_S. [PTR] must be naturally-aligned on a two-byte boundary
                                                                 (i.e. \<0\> must be zeros). */
#else /* Word 0 - Little Endian */
        uint64_t ptr                   : 53; /**< [ 52:  0] Indicates the starting IOVA of the LLC/DRAM buffer that will receive the
                                                                 2-byte BCH_RES_S. [PTR] must be naturally-aligned on a two-byte boundary
                                                                 (i.e. \<0\> must be zeros). */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } cn9;
};

/**
 * Register (NCB) bch_active_pc
 *
 * BCH Active PC Registers
 */
union cavm_bch_active_pc
{
    uint64_t u;
    struct cavm_bch_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t clock                 : 64; /**< [ 63:  0](R/W/H) Counts cycles for which the conditional clocks are running. */
#else /* Word 0 - Little Endian */
        uint64_t clock                 : 64; /**< [ 63:  0](R/W/H) Counts cycles for which the conditional clocks are running. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_active_pc_s cn; */
};
typedef union cavm_bch_active_pc cavm_bch_active_pc_t;

#define CAVM_BCH_ACTIVE_PC CAVM_BCH_ACTIVE_PC_FUNC()
static inline uint64_t CAVM_BCH_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_ACTIVE_PC_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x871000000018ll;
    __cavm_csr_fatal("BCH_ACTIVE_PC", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_ACTIVE_PC cavm_bch_active_pc_t
#define bustype_CAVM_BCH_ACTIVE_PC CSR_TYPE_NCB
#define basename_CAVM_BCH_ACTIVE_PC "BCH_ACTIVE_PC"
#define device_bar_CAVM_BCH_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_ACTIVE_PC 0
#define arguments_CAVM_BCH_ACTIVE_PC -1,-1,-1,-1

/**
 * Register (NCB) bch_bist_result
 *
 * BCH PF BIST Result Register
 * This register provides access to internal BIST results. Each bit is the BIST result of an
 * individual memory (per bit, 0 = pass, 1 = fail).
 */
union cavm_bch_bist_result
{
    uint64_t u;
    struct cavm_bch_bist_result_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t csr_msix              : 1;  /**< [  7:  7](RO) BIST result of the CSR MSIX memory.
                                                                 Internal:
                                                                 csr.msix_mem. */
        uint64_t csr_fifo              : 1;  /**< [  6:  6](RO) BIST result of the CSR FIFO memory.
                                                                 Internal:
                                                                 csr.csr_fifo. */
        uint64_t ncb_oub               : 1;  /**< [  5:  5](RO) BIST result of the NCB OUB memories. */
        uint64_t ncb_inb               : 1;  /**< [  4:  4](RO) BIST result of the NCB INB memories. */
        uint64_t dat                   : 4;  /**< [  3:  0](RO) BIST result of the DAT memories. */
#else /* Word 0 - Little Endian */
        uint64_t dat                   : 4;  /**< [  3:  0](RO) BIST result of the DAT memories. */
        uint64_t ncb_inb               : 1;  /**< [  4:  4](RO) BIST result of the NCB INB memories. */
        uint64_t ncb_oub               : 1;  /**< [  5:  5](RO) BIST result of the NCB OUB memories. */
        uint64_t csr_fifo              : 1;  /**< [  6:  6](RO) BIST result of the CSR FIFO memory.
                                                                 Internal:
                                                                 csr.csr_fifo. */
        uint64_t csr_msix              : 1;  /**< [  7:  7](RO) BIST result of the CSR MSIX memory.
                                                                 Internal:
                                                                 csr.msix_mem. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_bist_result_s cn; */
};
typedef union cavm_bch_bist_result cavm_bch_bist_result_t;

#define CAVM_BCH_BIST_RESULT CAVM_BCH_BIST_RESULT_FUNC()
static inline uint64_t CAVM_BCH_BIST_RESULT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_BIST_RESULT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x871000000080ll;
    __cavm_csr_fatal("BCH_BIST_RESULT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_BIST_RESULT cavm_bch_bist_result_t
#define bustype_CAVM_BCH_BIST_RESULT CSR_TYPE_NCB
#define basename_CAVM_BCH_BIST_RESULT "BCH_BIST_RESULT"
#define device_bar_CAVM_BCH_BIST_RESULT 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_BIST_RESULT 0
#define arguments_CAVM_BCH_BIST_RESULT -1,-1,-1,-1

/**
 * Register (NCB) bch_bp_test
 *
 * INTERNAL: BCH Backpressure Test Register
 */
union cavm_bch_bp_test
{
    uint64_t u;
    struct cavm_bch_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Reserved.
                                                                 \<62\> = When set,disables popping of NCBO FIFO,also credits won't be returned.
                                                                 \<61\> = When set,disables popping of NCBI FIFO,also credits won't be returned.
                                                                 \<60\> = When set,enables backpressure on the FPA(XPD) interface. Applicable for T83, has no
                                                                 effect in T81. */
        uint64_t reserved_24_59        : 36;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<23:22\> = Reserved.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<23:22\> = Reserved.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_24_59        : 36;
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = Reserved.
                                                                 \<62\> = When set,disables popping of NCBO FIFO,also credits won't be returned.
                                                                 \<61\> = When set,disables popping of NCBI FIFO,also credits won't be returned.
                                                                 \<60\> = When set,enables backpressure on the FPA(XPD) interface. Applicable for T83, has no
                                                                 effect in T81. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_bp_test_s cn; */
};
typedef union cavm_bch_bp_test cavm_bch_bp_test_t;

#define CAVM_BCH_BP_TEST CAVM_BCH_BP_TEST_FUNC()
static inline uint64_t CAVM_BCH_BP_TEST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_BP_TEST_FUNC(void)
{
    return 0x871000000040ll;
}

#define typedef_CAVM_BCH_BP_TEST cavm_bch_bp_test_t
#define bustype_CAVM_BCH_BP_TEST CSR_TYPE_NCB
#define basename_CAVM_BCH_BP_TEST "BCH_BP_TEST"
#define device_bar_CAVM_BCH_BP_TEST 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_BP_TEST 0
#define arguments_CAVM_BCH_BP_TEST -1,-1,-1,-1

/**
 * Register (NCB) bch_busy
 *
 * BCH Busy Register
 * When set, BCH is performing operations.
 */
union cavm_bch_busy
{
    uint64_t u;
    struct cavm_bch_busy_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Set when BCH is busy. Software must wait until BCH_BUSY[BUSY] = 0 before changing BCH state. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Set when BCH is busy. Software must wait until BCH_BUSY[BUSY] = 0 before changing BCH state. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_busy_s cn; */
};
typedef union cavm_bch_busy cavm_bch_busy_t;

#define CAVM_BCH_BUSY CAVM_BCH_BUSY_FUNC()
static inline uint64_t CAVM_BCH_BUSY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_BUSY_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x871000000038ll;
    __cavm_csr_fatal("BCH_BUSY", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_BUSY cavm_bch_busy_t
#define bustype_CAVM_BCH_BUSY CSR_TYPE_NCB
#define basename_CAVM_BCH_BUSY "BCH_BUSY"
#define device_bar_CAVM_BCH_BUSY 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_BUSY 0
#define arguments_CAVM_BCH_BUSY -1,-1,-1,-1

/**
 * Register (NCB) bch_const
 *
 * BCH Constants Registers
 * This register contains constants for software discovery.
 */
union cavm_bch_const
{
    uint64_t u;
    struct cavm_bch_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_const_s cn; */
};
typedef union cavm_bch_const cavm_bch_const_t;

#define CAVM_BCH_CONST CAVM_BCH_CONST_FUNC()
static inline uint64_t CAVM_BCH_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_CONST_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x871000000008ll;
    __cavm_csr_fatal("BCH_CONST", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_CONST cavm_bch_const_t
#define bustype_CAVM_BCH_CONST CSR_TYPE_NCB
#define basename_CAVM_BCH_CONST "BCH_CONST"
#define device_bar_CAVM_BCH_CONST 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_CONST 0
#define arguments_CAVM_BCH_CONST -1,-1,-1,-1

/**
 * Register (NCB) bch_ctl
 *
 * BCH PF Control Register
 */
union cavm_bch_ctl
{
    uint64_t u;
    struct cavm_bch_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t cclk_dis              : 1;  /**< [  1:  1](R/W) Force conditional clocks on. For diagnostic use only. */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1/H) Reset one-shot pulse (lasts for 4 cycles). */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1/H) Reset one-shot pulse (lasts for 4 cycles). */
        uint64_t cclk_dis              : 1;  /**< [  1:  1](R/W) Force conditional clocks on. For diagnostic use only. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    struct cavm_bch_ctl_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1/H) Reset one-shot pulse (lasts for 4 cycles). */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1/H) Reset one-shot pulse (lasts for 4 cycles). */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_bch_ctl_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t cclk_dis              : 1;  /**< [  1:  1](R/W) Force conditional clocks on. For diagnostic use only. */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1/H) Reset one-shot pulse.
                                                                 Software must poll BCH_BUSY[BUSY] and ensure BCH_BUSY[BUSY] = 0 before setting
                                                                 BCH_CTL[RESET]. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1/H) Reset one-shot pulse.
                                                                 Software must poll BCH_BUSY[BUSY] and ensure BCH_BUSY[BUSY] = 0 before setting
                                                                 BCH_CTL[RESET]. */
        uint64_t cclk_dis              : 1;  /**< [  1:  1](R/W) Force conditional clocks on. For diagnostic use only. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_bch_ctl cavm_bch_ctl_t;

#define CAVM_BCH_CTL CAVM_BCH_CTL_FUNC()
static inline uint64_t CAVM_BCH_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_CTL_FUNC(void)
{
    return 0x871000000000ll;
}

#define typedef_CAVM_BCH_CTL cavm_bch_ctl_t
#define bustype_CAVM_BCH_CTL CSR_TYPE_NCB
#define basename_CAVM_BCH_CTL "BCH_CTL"
#define device_bar_CAVM_BCH_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_CTL 0
#define arguments_CAVM_BCH_CTL -1,-1,-1,-1

/**
 * Register (NCB) bch_eco
 *
 * INTERNAL: BCH PF ECO Register
 */
union cavm_bch_eco
{
    uint64_t u;
    struct cavm_bch_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_eco_s cn; */
};
typedef union cavm_bch_eco cavm_bch_eco_t;

#define CAVM_BCH_ECO CAVM_BCH_ECO_FUNC()
static inline uint64_t CAVM_BCH_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_ECO_FUNC(void)
{
    return 0x871000000030ll;
}

#define typedef_CAVM_BCH_ECO cavm_bch_eco_t
#define bustype_CAVM_BCH_ECO CSR_TYPE_NCB
#define basename_CAVM_BCH_ECO "BCH_ECO"
#define device_bar_CAVM_BCH_ECO 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_ECO 0
#define arguments_CAVM_BCH_ECO -1,-1,-1,-1

/**
 * Register (NCB) bch_err_cfg
 *
 * INTERNAL:  BCH PF Error Configuration Register
 */
union cavm_bch_err_cfg
{
    uint64_t u;
    struct cavm_bch_err_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_18_63        : 46;
        uint64_t dat_flip              : 2;  /**< [ 17: 16](R/W) Testing feature. Flip syndrome bits \<1:0\> on writes to the DAT ram to test single-bit or
                                                                 double-bit errors. */
        uint64_t reserved_1_15         : 15;
        uint64_t dat_cor_dis           : 1;  /**< [  0:  0](R/W) Disable ECC corrector on DAT RAM. */
#else /* Word 0 - Little Endian */
        uint64_t dat_cor_dis           : 1;  /**< [  0:  0](R/W) Disable ECC corrector on DAT RAM. */
        uint64_t reserved_1_15         : 15;
        uint64_t dat_flip              : 2;  /**< [ 17: 16](R/W) Testing feature. Flip syndrome bits \<1:0\> on writes to the DAT ram to test single-bit or
                                                                 double-bit errors. */
        uint64_t reserved_18_63        : 46;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_err_cfg_s cn8; */
    struct cavm_bch_err_cfg_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_bch_err_cfg cavm_bch_err_cfg_t;

#define CAVM_BCH_ERR_CFG CAVM_BCH_ERR_CFG_FUNC()
static inline uint64_t CAVM_BCH_ERR_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_ERR_CFG_FUNC(void)
{
    return 0x871000000010ll;
}

#define typedef_CAVM_BCH_ERR_CFG cavm_bch_err_cfg_t
#define bustype_CAVM_BCH_ERR_CFG CSR_TYPE_NCB
#define basename_CAVM_BCH_ERR_CFG "BCH_ERR_CFG"
#define device_bar_CAVM_BCH_ERR_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_ERR_CFG 0
#define arguments_CAVM_BCH_ERR_CFG -1,-1,-1,-1

/**
 * Register (NCB) bch_err_int
 *
 * BCH PF Interrupt Register
 */
union cavm_bch_err_int
{
    uint64_t u;
    struct cavm_bch_err_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t st_dat_err            : 1;  /**< [  6:  6](R/W1C/H) An error occured while storing data via NCBI. */
        uint64_t st_cmd_err            : 1;  /**< [  5:  5](R/W1C/H) An error occured while storing command via NCBI. */
        uint64_t ld_dat_err            : 1;  /**< [  4:  4](R/W1C/H) An error occured while loading data via NCBO. */
        uint64_t ld_cmd_err            : 1;  /**< [  3:  3](R/W1C/H) An error occured while loading command via NCBO. */
        uint64_t dat_dbe               : 1;  /**< [  2:  2](R/W1C/H) An ECC uncorrectable error has occurred in the DAT RAM. */
        uint64_t dat_sbe               : 1;  /**< [  1:  1](R/W1C/H) An ECC correctable error has occurred in the DAT RAM. */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1C/H) Error bit indicating a doorbell count has overflowed. */
#else /* Word 0 - Little Endian */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1C/H) Error bit indicating a doorbell count has overflowed. */
        uint64_t dat_sbe               : 1;  /**< [  1:  1](R/W1C/H) An ECC correctable error has occurred in the DAT RAM. */
        uint64_t dat_dbe               : 1;  /**< [  2:  2](R/W1C/H) An ECC uncorrectable error has occurred in the DAT RAM. */
        uint64_t ld_cmd_err            : 1;  /**< [  3:  3](R/W1C/H) An error occured while loading command via NCBO. */
        uint64_t ld_dat_err            : 1;  /**< [  4:  4](R/W1C/H) An error occured while loading data via NCBO. */
        uint64_t st_cmd_err            : 1;  /**< [  5:  5](R/W1C/H) An error occured while storing command via NCBI. */
        uint64_t st_dat_err            : 1;  /**< [  6:  6](R/W1C/H) An error occured while storing data via NCBI. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_err_int_s cn; */
};
typedef union cavm_bch_err_int cavm_bch_err_int_t;

#define CAVM_BCH_ERR_INT CAVM_BCH_ERR_INT_FUNC()
static inline uint64_t CAVM_BCH_ERR_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_ERR_INT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x871000000088ll;
    __cavm_csr_fatal("BCH_ERR_INT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_ERR_INT cavm_bch_err_int_t
#define bustype_CAVM_BCH_ERR_INT CSR_TYPE_NCB
#define basename_CAVM_BCH_ERR_INT "BCH_ERR_INT"
#define device_bar_CAVM_BCH_ERR_INT 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_ERR_INT 0
#define arguments_CAVM_BCH_ERR_INT -1,-1,-1,-1

/**
 * Register (NCB) bch_err_int_ena_w1c
 *
 * BCH PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_bch_err_int_ena_w1c
{
    uint64_t u;
    struct cavm_bch_err_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t st_dat_err            : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for BCH_ERR_INT[ST_DAT_ERR]. */
        uint64_t st_cmd_err            : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for BCH_ERR_INT[ST_CMD_ERR]. */
        uint64_t ld_dat_err            : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for BCH_ERR_INT[LD_DAT_ERR]. */
        uint64_t ld_cmd_err            : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for BCH_ERR_INT[LD_CMD_ERR]. */
        uint64_t dat_dbe               : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for BCH_ERR_INT[DAT_DBE]. */
        uint64_t dat_sbe               : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for BCH_ERR_INT[DAT_SBE]. */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for BCH_ERR_INT[DOORBELL]. */
#else /* Word 0 - Little Endian */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for BCH_ERR_INT[DOORBELL]. */
        uint64_t dat_sbe               : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for BCH_ERR_INT[DAT_SBE]. */
        uint64_t dat_dbe               : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for BCH_ERR_INT[DAT_DBE]. */
        uint64_t ld_cmd_err            : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for BCH_ERR_INT[LD_CMD_ERR]. */
        uint64_t ld_dat_err            : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for BCH_ERR_INT[LD_DAT_ERR]. */
        uint64_t st_cmd_err            : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for BCH_ERR_INT[ST_CMD_ERR]. */
        uint64_t st_dat_err            : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for BCH_ERR_INT[ST_DAT_ERR]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_err_int_ena_w1c_s cn; */
};
typedef union cavm_bch_err_int_ena_w1c cavm_bch_err_int_ena_w1c_t;

#define CAVM_BCH_ERR_INT_ENA_W1C CAVM_BCH_ERR_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_BCH_ERR_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_ERR_INT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x8710000000a0ll;
    __cavm_csr_fatal("BCH_ERR_INT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_ERR_INT_ENA_W1C cavm_bch_err_int_ena_w1c_t
#define bustype_CAVM_BCH_ERR_INT_ENA_W1C CSR_TYPE_NCB
#define basename_CAVM_BCH_ERR_INT_ENA_W1C "BCH_ERR_INT_ENA_W1C"
#define device_bar_CAVM_BCH_ERR_INT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_ERR_INT_ENA_W1C 0
#define arguments_CAVM_BCH_ERR_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB) bch_err_int_ena_w1s
 *
 * BCH PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_bch_err_int_ena_w1s
{
    uint64_t u;
    struct cavm_bch_err_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t st_dat_err            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for BCH_ERR_INT[ST_DAT_ERR]. */
        uint64_t st_cmd_err            : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for BCH_ERR_INT[ST_CMD_ERR]. */
        uint64_t ld_dat_err            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for BCH_ERR_INT[LD_DAT_ERR]. */
        uint64_t ld_cmd_err            : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for BCH_ERR_INT[LD_CMD_ERR]. */
        uint64_t dat_dbe               : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for BCH_ERR_INT[DAT_DBE]. */
        uint64_t dat_sbe               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for BCH_ERR_INT[DAT_SBE]. */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for BCH_ERR_INT[DOORBELL]. */
#else /* Word 0 - Little Endian */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for BCH_ERR_INT[DOORBELL]. */
        uint64_t dat_sbe               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for BCH_ERR_INT[DAT_SBE]. */
        uint64_t dat_dbe               : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for BCH_ERR_INT[DAT_DBE]. */
        uint64_t ld_cmd_err            : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for BCH_ERR_INT[LD_CMD_ERR]. */
        uint64_t ld_dat_err            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for BCH_ERR_INT[LD_DAT_ERR]. */
        uint64_t st_cmd_err            : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for BCH_ERR_INT[ST_CMD_ERR]. */
        uint64_t st_dat_err            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for BCH_ERR_INT[ST_DAT_ERR]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_err_int_ena_w1s_s cn; */
};
typedef union cavm_bch_err_int_ena_w1s cavm_bch_err_int_ena_w1s_t;

#define CAVM_BCH_ERR_INT_ENA_W1S CAVM_BCH_ERR_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_BCH_ERR_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_ERR_INT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x8710000000a8ll;
    __cavm_csr_fatal("BCH_ERR_INT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_ERR_INT_ENA_W1S cavm_bch_err_int_ena_w1s_t
#define bustype_CAVM_BCH_ERR_INT_ENA_W1S CSR_TYPE_NCB
#define basename_CAVM_BCH_ERR_INT_ENA_W1S "BCH_ERR_INT_ENA_W1S"
#define device_bar_CAVM_BCH_ERR_INT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_ERR_INT_ENA_W1S 0
#define arguments_CAVM_BCH_ERR_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB) bch_err_int_w1s
 *
 * BCH PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_bch_err_int_w1s
{
    uint64_t u;
    struct cavm_bch_err_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t st_dat_err            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets BCH_ERR_INT[ST_DAT_ERR]. */
        uint64_t st_cmd_err            : 1;  /**< [  5:  5](R/W1S/H) Reads or sets BCH_ERR_INT[ST_CMD_ERR]. */
        uint64_t ld_dat_err            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets BCH_ERR_INT[LD_DAT_ERR]. */
        uint64_t ld_cmd_err            : 1;  /**< [  3:  3](R/W1S/H) Reads or sets BCH_ERR_INT[LD_CMD_ERR]. */
        uint64_t dat_dbe               : 1;  /**< [  2:  2](R/W1S/H) Reads or sets BCH_ERR_INT[DAT_DBE]. */
        uint64_t dat_sbe               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets BCH_ERR_INT[DAT_SBE]. */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets BCH_ERR_INT[DOORBELL]. */
#else /* Word 0 - Little Endian */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets BCH_ERR_INT[DOORBELL]. */
        uint64_t dat_sbe               : 1;  /**< [  1:  1](R/W1S/H) Reads or sets BCH_ERR_INT[DAT_SBE]. */
        uint64_t dat_dbe               : 1;  /**< [  2:  2](R/W1S/H) Reads or sets BCH_ERR_INT[DAT_DBE]. */
        uint64_t ld_cmd_err            : 1;  /**< [  3:  3](R/W1S/H) Reads or sets BCH_ERR_INT[LD_CMD_ERR]. */
        uint64_t ld_dat_err            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets BCH_ERR_INT[LD_DAT_ERR]. */
        uint64_t st_cmd_err            : 1;  /**< [  5:  5](R/W1S/H) Reads or sets BCH_ERR_INT[ST_CMD_ERR]. */
        uint64_t st_dat_err            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets BCH_ERR_INT[ST_DAT_ERR]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_err_int_w1s_s cn; */
};
typedef union cavm_bch_err_int_w1s cavm_bch_err_int_w1s_t;

#define CAVM_BCH_ERR_INT_W1S CAVM_BCH_ERR_INT_W1S_FUNC()
static inline uint64_t CAVM_BCH_ERR_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_ERR_INT_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x871000000090ll;
    __cavm_csr_fatal("BCH_ERR_INT_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_ERR_INT_W1S cavm_bch_err_int_w1s_t
#define bustype_CAVM_BCH_ERR_INT_W1S CSR_TYPE_NCB
#define basename_CAVM_BCH_ERR_INT_W1S "BCH_ERR_INT_W1S"
#define device_bar_CAVM_BCH_ERR_INT_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_ERR_INT_W1S 0
#define arguments_CAVM_BCH_ERR_INT_W1S -1,-1,-1,-1

/**
 * Register (NCB) bch_pf_msix_pba#
 *
 * BCH PF MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the BCH_INT_VEC_E
 * enumeration.
 */
union cavm_bch_pf_msix_pbax
{
    uint64_t u;
    struct cavm_bch_pf_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated BCH_PF_MSIX_VEC()_CTL, enumerated by
                                                                 BCH_INT_VEC_E. Bits that have no associated BCH_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated BCH_PF_MSIX_VEC()_CTL, enumerated by
                                                                 BCH_INT_VEC_E. Bits that have no associated BCH_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_pf_msix_pbax_s cn; */
};
typedef union cavm_bch_pf_msix_pbax cavm_bch_pf_msix_pbax_t;

static inline uint64_t CAVM_BCH_PF_MSIX_PBAX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_PF_MSIX_PBAX(unsigned long a)
{
    if (a==0)
        return 0x871000ff0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("BCH_PF_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_PF_MSIX_PBAX(a) cavm_bch_pf_msix_pbax_t
#define bustype_CAVM_BCH_PF_MSIX_PBAX(a) CSR_TYPE_NCB
#define basename_CAVM_BCH_PF_MSIX_PBAX(a) "BCH_PF_MSIX_PBAX"
#define device_bar_CAVM_BCH_PF_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_BCH_PF_MSIX_PBAX(a) (a)
#define arguments_CAVM_BCH_PF_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (NCB) bch_pf_msix_vec#_addr
 *
 * BCH PF MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the BCH_INT_VEC_E enumeration.
 */
union cavm_bch_pf_msix_vecx_addr
{
    uint64_t u;
    struct cavm_bch_pf_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's BCH_PF_MSIX_VEC()_ADDR, BCH_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of BCH_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_BCH_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if
                                                                 [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's BCH_PF_MSIX_VEC()_ADDR, BCH_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of BCH_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_BCH_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if
                                                                 [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    struct cavm_bch_pf_msix_vecx_addr_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t addr                  : 47; /**< [ 48:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's BCH_PF_MSIX_VEC()_ADDR, BCH_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of BCH_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_BCH_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if
                                                                 [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's BCH_PF_MSIX_VEC()_ADDR, BCH_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of BCH_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_BCH_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if
                                                                 [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 47; /**< [ 48:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } cn8;
    /* struct cavm_bch_pf_msix_vecx_addr_s cn9; */
    /* struct cavm_bch_pf_msix_vecx_addr_s cn96xxp1; */
    struct cavm_bch_pf_msix_vecx_addr_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's BCH_PF_MSIX_VEC()_ADDR, BCH_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of BCH_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_BCH_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if
                                                                 [SECVEC] was set.

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

                                                                 1 = This vector's BCH_PF_MSIX_VEC()_ADDR, BCH_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of BCH_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_BCH_VSEC_SCTL[MSIX_SEC] (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is set, all vectors are secure and function as if
                                                                 [SECVEC] was set.

                                                                 Also note the following:
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_EN]=1, all secure vectors (including secure
                                                                 VF vectors) will act as if PCCPF/PCCVF_XXX_MSIX_CAP_HDR[MSIXEN]=1,
                                                                 PCCPF/PCCVF_XXX_MSIX_CAP_HDR[FUNM]=0 and PCCPF/PCCVF_XXX_CMD[ME]=1.
                                                                 * When PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1, all secure vectors (including
                                                                 secure VF vectors) are considered physical, regardless of
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } cn96xxp3;
    /* struct cavm_bch_pf_msix_vecx_addr_cn96xxp3 cn98xx; */
    /* struct cavm_bch_pf_msix_vecx_addr_cn96xxp3 cnf95xx; */
    /* struct cavm_bch_pf_msix_vecx_addr_cn96xxp3 loki; */
};
typedef union cavm_bch_pf_msix_vecx_addr cavm_bch_pf_msix_vecx_addr_t;

static inline uint64_t CAVM_BCH_PF_MSIX_VECX_ADDR(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_PF_MSIX_VECX_ADDR(unsigned long a)
{
    if (a==0)
        return 0x871000f00000ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("BCH_PF_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_PF_MSIX_VECX_ADDR(a) cavm_bch_pf_msix_vecx_addr_t
#define bustype_CAVM_BCH_PF_MSIX_VECX_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_BCH_PF_MSIX_VECX_ADDR(a) "BCH_PF_MSIX_VECX_ADDR"
#define device_bar_CAVM_BCH_PF_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_BCH_PF_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_BCH_PF_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) bch_pf_msix_vec#_ctl
 *
 * BCH PF MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the BCH_INT_VEC_E enumeration.
 */
union cavm_bch_pf_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_bch_pf_msix_vecx_ctl_s
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
    struct cavm_bch_pf_msix_vecx_ctl_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_20_31        : 12;
        uint64_t data                  : 20; /**< [ 19:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 20; /**< [ 19:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t reserved_20_31        : 12;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } cn8;
    /* struct cavm_bch_pf_msix_vecx_ctl_s cn9; */
};
typedef union cavm_bch_pf_msix_vecx_ctl cavm_bch_pf_msix_vecx_ctl_t;

static inline uint64_t CAVM_BCH_PF_MSIX_VECX_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_PF_MSIX_VECX_CTL(unsigned long a)
{
    if (a==0)
        return 0x871000f00008ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("BCH_PF_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_PF_MSIX_VECX_CTL(a) cavm_bch_pf_msix_vecx_ctl_t
#define bustype_CAVM_BCH_PF_MSIX_VECX_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_BCH_PF_MSIX_VECX_CTL(a) "BCH_PF_MSIX_VECX_CTL"
#define device_bar_CAVM_BCH_PF_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_BCH_PF_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_BCH_PF_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) bch_pf_poison
 *
 * BCH PF Interrupt Register
 */
union cavm_bch_pf_poison
{
    uint64_t u;
    struct cavm_bch_pf_poison_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1C/H) Command loaded had poison set. */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1C/H) Data loaded had poison set. */
#else /* Word 0 - Little Endian */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1C/H) Data loaded had poison set. */
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1C/H) Command loaded had poison set. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_pf_poison_s cn; */
};
typedef union cavm_bch_pf_poison cavm_bch_pf_poison_t;

#define CAVM_BCH_PF_POISON CAVM_BCH_PF_POISON_FUNC()
static inline uint64_t CAVM_BCH_PF_POISON_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_PF_POISON_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x871000000088ll;
    __cavm_csr_fatal("BCH_PF_POISON", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_PF_POISON cavm_bch_pf_poison_t
#define bustype_CAVM_BCH_PF_POISON CSR_TYPE_NCB
#define basename_CAVM_BCH_PF_POISON "BCH_PF_POISON"
#define device_bar_CAVM_BCH_PF_POISON 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_PF_POISON 0
#define arguments_CAVM_BCH_PF_POISON -1,-1,-1,-1

/**
 * Register (NCB) bch_pf_poison_ena_w1c
 *
 * BCH PF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_bch_pf_poison_ena_w1c
{
    uint64_t u;
    struct cavm_bch_pf_poison_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for BCH_PF_POISON[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for BCH_PF_POISON[LD_DAT_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for BCH_PF_POISON[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for BCH_PF_POISON[LD_CMD_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_pf_poison_ena_w1c_s cn; */
};
typedef union cavm_bch_pf_poison_ena_w1c cavm_bch_pf_poison_ena_w1c_t;

#define CAVM_BCH_PF_POISON_ENA_W1C CAVM_BCH_PF_POISON_ENA_W1C_FUNC()
static inline uint64_t CAVM_BCH_PF_POISON_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_PF_POISON_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x8710000000a0ll;
    __cavm_csr_fatal("BCH_PF_POISON_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_PF_POISON_ENA_W1C cavm_bch_pf_poison_ena_w1c_t
#define bustype_CAVM_BCH_PF_POISON_ENA_W1C CSR_TYPE_NCB
#define basename_CAVM_BCH_PF_POISON_ENA_W1C "BCH_PF_POISON_ENA_W1C"
#define device_bar_CAVM_BCH_PF_POISON_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_PF_POISON_ENA_W1C 0
#define arguments_CAVM_BCH_PF_POISON_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB) bch_pf_poison_ena_w1s
 *
 * BCH PF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_bch_pf_poison_ena_w1s
{
    uint64_t u;
    struct cavm_bch_pf_poison_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for BCH_PF_POISON[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for BCH_PF_POISON[LD_DAT_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for BCH_PF_POISON[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for BCH_PF_POISON[LD_CMD_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_pf_poison_ena_w1s_s cn; */
};
typedef union cavm_bch_pf_poison_ena_w1s cavm_bch_pf_poison_ena_w1s_t;

#define CAVM_BCH_PF_POISON_ENA_W1S CAVM_BCH_PF_POISON_ENA_W1S_FUNC()
static inline uint64_t CAVM_BCH_PF_POISON_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_PF_POISON_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x8710000000a8ll;
    __cavm_csr_fatal("BCH_PF_POISON_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_PF_POISON_ENA_W1S cavm_bch_pf_poison_ena_w1s_t
#define bustype_CAVM_BCH_PF_POISON_ENA_W1S CSR_TYPE_NCB
#define basename_CAVM_BCH_PF_POISON_ENA_W1S "BCH_PF_POISON_ENA_W1S"
#define device_bar_CAVM_BCH_PF_POISON_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_PF_POISON_ENA_W1S 0
#define arguments_CAVM_BCH_PF_POISON_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB) bch_pf_poison_w1s
 *
 * BCH PF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_bch_pf_poison_w1s
{
    uint64_t u;
    struct cavm_bch_pf_poison_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets BCH_PF_POISON[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets BCH_PF_POISON[LD_DAT_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets BCH_PF_POISON[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets BCH_PF_POISON[LD_CMD_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_pf_poison_w1s_s cn; */
};
typedef union cavm_bch_pf_poison_w1s cavm_bch_pf_poison_w1s_t;

#define CAVM_BCH_PF_POISON_W1S CAVM_BCH_PF_POISON_W1S_FUNC()
static inline uint64_t CAVM_BCH_PF_POISON_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_PF_POISON_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN9XXX))
        return 0x871000000090ll;
    __cavm_csr_fatal("BCH_PF_POISON_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_PF_POISON_W1S cavm_bch_pf_poison_w1s_t
#define bustype_CAVM_BCH_PF_POISON_W1S CSR_TYPE_NCB
#define basename_CAVM_BCH_PF_POISON_W1S "BCH_PF_POISON_W1S"
#define device_bar_CAVM_BCH_PF_POISON_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_PF_POISON_W1S 0
#define arguments_CAVM_BCH_PF_POISON_W1S -1,-1,-1,-1

/**
 * Register (NCB) bch_pf_q#_gmctl
 *
 * INTERNAL: BCH PF Queue Guest Machine Control Register
 */
union cavm_bch_pf_qx_gmctl
{
    uint64_t u;
    struct cavm_bch_pf_qx_gmctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t gmid                  : 16; /**< [ 15:  0](R/W) Reserved.
                                                                 Internal:
                                                                 Guest machine identifier. The GMID to send to FPA for all
                                                                 buffer free operations initiated by this queue.
                                                                 Must be nonzero or FPA will drop requests; see FPA_PF_MAP(). */
#else /* Word 0 - Little Endian */
        uint64_t gmid                  : 16; /**< [ 15:  0](R/W) Reserved.
                                                                 Internal:
                                                                 Guest machine identifier. The GMID to send to FPA for all
                                                                 buffer free operations initiated by this queue.
                                                                 Must be nonzero or FPA will drop requests; see FPA_PF_MAP(). */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_pf_qx_gmctl_s cn8; */
    /* struct cavm_bch_pf_qx_gmctl_s cn81xx; */
    struct cavm_bch_pf_qx_gmctl_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t gmid                  : 16; /**< [ 15:  0](R/W) Guest machine identifier. The GMID to send to FPA for all
                                                                 buffer free operations initiated by this queue.
                                                                 Must be nonzero or FPA will drop requests; see FPA_PF_MAP(). */
#else /* Word 0 - Little Endian */
        uint64_t gmid                  : 16; /**< [ 15:  0](R/W) Guest machine identifier. The GMID to send to FPA for all
                                                                 buffer free operations initiated by this queue.
                                                                 Must be nonzero or FPA will drop requests; see FPA_PF_MAP(). */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn83xx;
    struct cavm_bch_pf_qx_gmctl_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t gmid                  : 16; /**< [ 15:  0](R/W) Reserved.
                                                                 Internal:
                                                                 Was guest machine identifier in CN83xx, now deprecated. */
#else /* Word 0 - Little Endian */
        uint64_t gmid                  : 16; /**< [ 15:  0](R/W) Reserved.
                                                                 Internal:
                                                                 Was guest machine identifier in CN83xx, now deprecated. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_bch_pf_qx_gmctl cavm_bch_pf_qx_gmctl_t;

static inline uint64_t CAVM_BCH_PF_QX_GMCTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_PF_QX_GMCTL(unsigned long a)
{
    if (a==0)
        return 0x871000000100ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("BCH_PF_QX_GMCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_PF_QX_GMCTL(a) cavm_bch_pf_qx_gmctl_t
#define bustype_CAVM_BCH_PF_QX_GMCTL(a) CSR_TYPE_NCB
#define basename_CAVM_BCH_PF_QX_GMCTL(a) "BCH_PF_QX_GMCTL"
#define device_bar_CAVM_BCH_PF_QX_GMCTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_BCH_PF_QX_GMCTL(a) (a)
#define arguments_CAVM_BCH_PF_QX_GMCTL(a) (a),-1,-1,-1

/**
 * Register (NCB) bch_vf#_msix_pba#
 *
 * BCH VF MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the BCH_INT_VEC_E
 * enumeration.
 */
union cavm_bch_vfx_msix_pbax
{
    uint64_t u;
    struct cavm_bch_vfx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated BCH_PF_MSIX_VEC()_CTL, enumerated by
                                                                 BCH_INT_VEC_E. Bits that have no associated BCH_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated BCH_PF_MSIX_VEC()_CTL, enumerated by
                                                                 BCH_INT_VEC_E. Bits that have no associated BCH_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_vfx_msix_pbax_s cn; */
};
typedef union cavm_bch_vfx_msix_pbax cavm_bch_vfx_msix_pbax_t;

static inline uint64_t CAVM_BCH_VFX_MSIX_PBAX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_VFX_MSIX_PBAX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && ((a==0) && (b==0)))
        return 0x8710018f0000ll + 0x100000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("BCH_VFX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_VFX_MSIX_PBAX(a,b) cavm_bch_vfx_msix_pbax_t
#define bustype_CAVM_BCH_VFX_MSIX_PBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_BCH_VFX_MSIX_PBAX(a,b) "BCH_VFX_MSIX_PBAX"
#define device_bar_CAVM_BCH_VFX_MSIX_PBAX(a,b) 0x4 /* VF_BAR4 */
#define busnum_CAVM_BCH_VFX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_BCH_VFX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) bch_vf#_msix_vec#_addr
 *
 * BCH VF MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the BCH_VF_INT_VEC_E  enumeration.
 */
union cavm_bch_vfx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_bch_vfx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](RAZ) Secure vector. Zero as not supported on a per-vector basis for VFs; use
                                                                 PCCPF_BCH_VSEC_SCTL[MSIX_SEC] instead (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]). */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](RAZ) Secure vector. Zero as not supported on a per-vector basis for VFs; use
                                                                 PCCPF_BCH_VSEC_SCTL[MSIX_SEC] instead (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]). */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_vfx_msix_vecx_addr_s cn; */
};
typedef union cavm_bch_vfx_msix_vecx_addr cavm_bch_vfx_msix_vecx_addr_t;

static inline uint64_t CAVM_BCH_VFX_MSIX_VECX_ADDR(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_VFX_MSIX_VECX_ADDR(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && ((a==0) && (b==0)))
        return 0x871001800000ll + 0x100000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("BCH_VFX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_VFX_MSIX_VECX_ADDR(a,b) cavm_bch_vfx_msix_vecx_addr_t
#define bustype_CAVM_BCH_VFX_MSIX_VECX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_BCH_VFX_MSIX_VECX_ADDR(a,b) "BCH_VFX_MSIX_VECX_ADDR"
#define device_bar_CAVM_BCH_VFX_MSIX_VECX_ADDR(a,b) 0x4 /* VF_BAR4 */
#define busnum_CAVM_BCH_VFX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_BCH_VFX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) bch_vf#_msix_vec#_ctl
 *
 * BCH VF MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the BCH_VF_INT_VEC_E enumeration.
 */
union cavm_bch_vfx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_bch_vfx_msix_vecx_ctl_s
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
    /* struct cavm_bch_vfx_msix_vecx_ctl_s cn; */
};
typedef union cavm_bch_vfx_msix_vecx_ctl cavm_bch_vfx_msix_vecx_ctl_t;

static inline uint64_t CAVM_BCH_VFX_MSIX_VECX_CTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_VFX_MSIX_VECX_CTL(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && ((a==0) && (b==0)))
        return 0x871001800008ll + 0x100000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x0);
    __cavm_csr_fatal("BCH_VFX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_VFX_MSIX_VECX_CTL(a,b) cavm_bch_vfx_msix_vecx_ctl_t
#define bustype_CAVM_BCH_VFX_MSIX_VECX_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_BCH_VFX_MSIX_VECX_CTL(a,b) "BCH_VFX_MSIX_VECX_CTL"
#define device_bar_CAVM_BCH_VFX_MSIX_VECX_CTL(a,b) 0x4 /* VF_BAR4 */
#define busnum_CAVM_BCH_VFX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_BCH_VFX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) bch_vq#_cmd_buf
 *
 * BCH Queue Command Buffer Register
 * This register sets the command-buffer parameters.
 */
union cavm_bch_vqx_cmd_buf
{
    uint64_t u;
    struct cavm_bch_vqx_cmd_buf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t aura                  : 12; /**< [ 59: 48](R/W) Reserved.
                                                                 Internal:
                                                                 Guest-aura to use when freeing command-buffer segments. Only used when [DFB] is
                                                                 clear. For the FPA to not discard the request, FPA_PF_MAP() must consider the
                                                                 [AURA] and BCH_PF_Q()_GMCTL[GMID] to be valid. */
        uint64_t ldwb                  : 1;  /**< [ 47: 47](R/W) When reading commands that end on cache line boundaries, use load-and-don't write back commands. */
        uint64_t dfb                   : 1;  /**< [ 46: 46](RO) Reserved, must be one.
                                                                 Internal:
                                                                 Don't free buffers to the FPA. */
        uint64_t size                  : 13; /**< [ 45: 33](R/W) Number of uint64s per command buffer segment. */
        uint64_t reserved_0_32         : 33;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_32         : 33;
        uint64_t size                  : 13; /**< [ 45: 33](R/W) Number of uint64s per command buffer segment. */
        uint64_t dfb                   : 1;  /**< [ 46: 46](RO) Reserved, must be one.
                                                                 Internal:
                                                                 Don't free buffers to the FPA. */
        uint64_t ldwb                  : 1;  /**< [ 47: 47](R/W) When reading commands that end on cache line boundaries, use load-and-don't write back commands. */
        uint64_t aura                  : 12; /**< [ 59: 48](R/W) Reserved.
                                                                 Internal:
                                                                 Guest-aura to use when freeing command-buffer segments. Only used when [DFB] is
                                                                 clear. For the FPA to not discard the request, FPA_PF_MAP() must consider the
                                                                 [AURA] and BCH_PF_Q()_GMCTL[GMID] to be valid. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_vqx_cmd_buf_s cn8; */
    /* struct cavm_bch_vqx_cmd_buf_s cn81xx; */
    struct cavm_bch_vqx_cmd_buf_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t aura                  : 12; /**< [ 59: 48](R/W) Guest-aura to use when freeing command-buffer segments. Only used when [DFB] is
                                                                 clear. For the FPA to not discard the request, FPA_PF_MAP() must consider the
                                                                 [AURA] and BCH_PF_Q()_GMCTL[GMID] to be valid. */
        uint64_t ldwb                  : 1;  /**< [ 47: 47](R/W) When reading commands that end on cache line boundaries, use load-and-don't write back commands. */
        uint64_t dfb                   : 1;  /**< [ 46: 46](R/W) Don't free buffers to the FPA. */
        uint64_t size                  : 13; /**< [ 45: 33](R/W) Number of uint64s per command buffer segment. */
        uint64_t reserved_0_32         : 33;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_32         : 33;
        uint64_t size                  : 13; /**< [ 45: 33](R/W) Number of uint64s per command buffer segment. */
        uint64_t dfb                   : 1;  /**< [ 46: 46](R/W) Don't free buffers to the FPA. */
        uint64_t ldwb                  : 1;  /**< [ 47: 47](R/W) When reading commands that end on cache line boundaries, use load-and-don't write back commands. */
        uint64_t aura                  : 12; /**< [ 59: 48](R/W) Guest-aura to use when freeing command-buffer segments. Only used when [DFB] is
                                                                 clear. For the FPA to not discard the request, FPA_PF_MAP() must consider the
                                                                 [AURA] and BCH_PF_Q()_GMCTL[GMID] to be valid. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } cn83xx;
    struct cavm_bch_vqx_cmd_buf_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t aura                  : 12; /**< [ 59: 48](R/W) Reserved.
                                                                 Internal:
                                                                 Was guest-aura in CN83xx, now deprecated. */
        uint64_t ldwb                  : 1;  /**< [ 47: 47](R/W) When reading commands that end on cache line boundaries, use load-and-don't write back commands. */
        uint64_t dfb                   : 1;  /**< [ 46: 46](R/W) Reserved, must be one.
                                                                 Internal:
                                                                 Was don't free buffers to the FPA, now deprecated. */
        uint64_t size                  : 13; /**< [ 45: 33](R/W) Number of uint64s per command buffer segment. */
        uint64_t reserved_0_32         : 33;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_32         : 33;
        uint64_t size                  : 13; /**< [ 45: 33](R/W) Number of uint64s per command buffer segment. */
        uint64_t dfb                   : 1;  /**< [ 46: 46](R/W) Reserved, must be one.
                                                                 Internal:
                                                                 Was don't free buffers to the FPA, now deprecated. */
        uint64_t ldwb                  : 1;  /**< [ 47: 47](R/W) When reading commands that end on cache line boundaries, use load-and-don't write back commands. */
        uint64_t aura                  : 12; /**< [ 59: 48](R/W) Reserved.
                                                                 Internal:
                                                                 Was guest-aura in CN83xx, now deprecated. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_bch_vqx_cmd_buf cavm_bch_vqx_cmd_buf_t;

static inline uint64_t CAVM_BCH_VQX_CMD_BUF(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_VQX_CMD_BUF(unsigned long a)
{
    if (a==0)
        return 0x871001000008ll + 0x100000ll * ((a) & 0x0);
    __cavm_csr_fatal("BCH_VQX_CMD_BUF", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_VQX_CMD_BUF(a) cavm_bch_vqx_cmd_buf_t
#define bustype_CAVM_BCH_VQX_CMD_BUF(a) CSR_TYPE_NCB
#define basename_CAVM_BCH_VQX_CMD_BUF(a) "BCH_VQX_CMD_BUF"
#define device_bar_CAVM_BCH_VQX_CMD_BUF(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_BCH_VQX_CMD_BUF(a) (a)
#define arguments_CAVM_BCH_VQX_CMD_BUF(a) (a),-1,-1,-1

/**
 * Register (NCB) bch_vq#_cmd_ptr
 *
 * BCH Queue Command Buffer Pointer Register
 * This register sets the command-buffer parameters.
 */
union cavm_bch_vqx_cmd_ptr
{
    uint64_t u;
    struct cavm_bch_vqx_cmd_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W) Initial command-buffer IOVA \<41:7\> (128-byte aligned). Overwritten each time the
                                                                 command-buffer segment is exhausted. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W) Initial command-buffer IOVA \<41:7\> (128-byte aligned). Overwritten each time the
                                                                 command-buffer segment is exhausted. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    struct cavm_bch_vqx_cmd_ptr_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t ptr                   : 42; /**< [ 48:  7](R/W) Initial command-buffer IOVA \<41:7\> (128-byte aligned). Overwritten each time the
                                                                 command-buffer segment is exhausted. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t ptr                   : 42; /**< [ 48:  7](R/W) Initial command-buffer IOVA \<41:7\> (128-byte aligned). Overwritten each time the
                                                                 command-buffer segment is exhausted. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_bch_vqx_cmd_ptr_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W) Initial command-buffer IOVA \<45:7\> (128-byte aligned). Overwritten each time the
                                                                 command-buffer segment is exhausted. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W) Initial command-buffer IOVA \<45:7\> (128-byte aligned). Overwritten each time the
                                                                 command-buffer segment is exhausted. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_bch_vqx_cmd_ptr cavm_bch_vqx_cmd_ptr_t;

static inline uint64_t CAVM_BCH_VQX_CMD_PTR(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_VQX_CMD_PTR(unsigned long a)
{
    if (a==0)
        return 0x871001000020ll + 0x100000ll * ((a) & 0x0);
    __cavm_csr_fatal("BCH_VQX_CMD_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_VQX_CMD_PTR(a) cavm_bch_vqx_cmd_ptr_t
#define bustype_CAVM_BCH_VQX_CMD_PTR(a) CSR_TYPE_NCB
#define basename_CAVM_BCH_VQX_CMD_PTR(a) "BCH_VQX_CMD_PTR"
#define device_bar_CAVM_BCH_VQX_CMD_PTR(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_BCH_VQX_CMD_PTR(a) (a)
#define arguments_CAVM_BCH_VQX_CMD_PTR(a) (a),-1,-1,-1

/**
 * Register (NCB) bch_vq#_ctl
 *
 * BCH Queue Control Register
 */
union cavm_bch_vqx_ctl
{
    uint64_t u;
    struct cavm_bch_vqx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t ena                   : 1;  /**< [ 23: 23](R/W) Enable instruction fetch. When set, enables fetching instructions.
                                                                 Cleared when BCH_VQ(0)_INT[LD_CMD_PSN] or BCH_VQ(0)_INT[LD_CMD_FLT] is set, and
                                                                 BCH_VQ(0)_CTL[CONT_ERR] = 0. */
        uint64_t cont_err              : 1;  /**< [ 22: 22](R/W) 0 = When BCH_VQ(0)_INT[LD_CMD_FLT] or BCH_VQ(0)_INT[LD_CMD_PSN] is set,
                                                                 clear BCH_VQ(0)_CTL[ENA].
                                                                 1 = Don't clear BCH_VQ()_CTL[ENA] on errors. */
        uint64_t early_term            : 4;  /**< [ 21: 18](R/W) Threshold of zero delta iterations before declaring early termination.
                                                                 0x0 will force all iterations to run.  For diagnostic use only. */
        uint64_t one_cmd               : 1;  /**< [ 17: 17](RAZ) Execute a single operation at a time.  For diagnostic use only. */
        uint64_t erase_disable         : 1;  /**< [ 16: 16](R/W) When [ERASE_DISABLE]=0, erased blocks bypass the BCH correction. The 16 byte
                                                                 result word contains an erased block indication.

                                                                 A block is considered erased if the number of zeros found in the block (data+ECC) is
                                                                 less than half the ECC level.   For instance, a 2 KB block using ECC32 is considered
                                                                 erased if fewer than 16 zeros are found in the 2048+60 bytes. */
        uint64_t reserved_6_15         : 10;
        uint64_t max_read              : 4;  /**< [  5:  2](R/W) Maximum number of outstanding data read commands. [MAX_READ] is a throttle to control NCB
                                                                 usage. Values greater than 0x8 are illegal. */
        uint64_t cmd_be                : 1;  /**< [  1:  1](R/W) Command queue and result word is big endian. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t cmd_be                : 1;  /**< [  1:  1](R/W) Command queue and result word is big endian. */
        uint64_t max_read              : 4;  /**< [  5:  2](R/W) Maximum number of outstanding data read commands. [MAX_READ] is a throttle to control NCB
                                                                 usage. Values greater than 0x8 are illegal. */
        uint64_t reserved_6_15         : 10;
        uint64_t erase_disable         : 1;  /**< [ 16: 16](R/W) When [ERASE_DISABLE]=0, erased blocks bypass the BCH correction. The 16 byte
                                                                 result word contains an erased block indication.

                                                                 A block is considered erased if the number of zeros found in the block (data+ECC) is
                                                                 less than half the ECC level.   For instance, a 2 KB block using ECC32 is considered
                                                                 erased if fewer than 16 zeros are found in the 2048+60 bytes. */
        uint64_t one_cmd               : 1;  /**< [ 17: 17](RAZ) Execute a single operation at a time.  For diagnostic use only. */
        uint64_t early_term            : 4;  /**< [ 21: 18](R/W) Threshold of zero delta iterations before declaring early termination.
                                                                 0x0 will force all iterations to run.  For diagnostic use only. */
        uint64_t cont_err              : 1;  /**< [ 22: 22](R/W) 0 = When BCH_VQ(0)_INT[LD_CMD_FLT] or BCH_VQ(0)_INT[LD_CMD_PSN] is set,
                                                                 clear BCH_VQ(0)_CTL[ENA].
                                                                 1 = Don't clear BCH_VQ()_CTL[ENA] on errors. */
        uint64_t ena                   : 1;  /**< [ 23: 23](R/W) Enable instruction fetch. When set, enables fetching instructions.
                                                                 Cleared when BCH_VQ(0)_INT[LD_CMD_PSN] or BCH_VQ(0)_INT[LD_CMD_FLT] is set, and
                                                                 BCH_VQ(0)_CTL[CONT_ERR] = 0. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    struct cavm_bch_vqx_ctl_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t early_term            : 4;  /**< [ 21: 18](R/W) Threshold of zero delta iterations before declaring early termination.
                                                                 0x0 will force all iterations to run.  For diagnostic use only. */
        uint64_t one_cmd               : 1;  /**< [ 17: 17](RAZ) Execute a single operation at a time.  For diagnostic use only. */
        uint64_t erase_disable         : 1;  /**< [ 16: 16](R/W) When [ERASE_DISABLE]=0, erased blocks bypass the BCH correction. The 16 byte
                                                                 result word contains an erased block indication.

                                                                 A block is considered erased if the number of zeros found in the block (data+ECC) is
                                                                 less than half the ECC level.   For instance, a 2 KB block using ECC32 is considered
                                                                 erased if fewer than 16 zeros are found in the 2048+60 bytes. */
        uint64_t reserved_6_15         : 10;
        uint64_t max_read              : 4;  /**< [  5:  2](R/W) Maximum number of outstanding data read commands. [MAX_READ] is a throttle to control NCB
                                                                 usage. Values greater than 0x8 are illegal. */
        uint64_t cmd_be                : 1;  /**< [  1:  1](R/W) Command queue and result word is big endian. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t cmd_be                : 1;  /**< [  1:  1](R/W) Command queue and result word is big endian. */
        uint64_t max_read              : 4;  /**< [  5:  2](R/W) Maximum number of outstanding data read commands. [MAX_READ] is a throttle to control NCB
                                                                 usage. Values greater than 0x8 are illegal. */
        uint64_t reserved_6_15         : 10;
        uint64_t erase_disable         : 1;  /**< [ 16: 16](R/W) When [ERASE_DISABLE]=0, erased blocks bypass the BCH correction. The 16 byte
                                                                 result word contains an erased block indication.

                                                                 A block is considered erased if the number of zeros found in the block (data+ECC) is
                                                                 less than half the ECC level.   For instance, a 2 KB block using ECC32 is considered
                                                                 erased if fewer than 16 zeros are found in the 2048+60 bytes. */
        uint64_t one_cmd               : 1;  /**< [ 17: 17](RAZ) Execute a single operation at a time.  For diagnostic use only. */
        uint64_t early_term            : 4;  /**< [ 21: 18](R/W) Threshold of zero delta iterations before declaring early termination.
                                                                 0x0 will force all iterations to run.  For diagnostic use only. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } cn8;
    /* struct cavm_bch_vqx_ctl_s cn9; */
};
typedef union cavm_bch_vqx_ctl cavm_bch_vqx_ctl_t;

static inline uint64_t CAVM_BCH_VQX_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_VQX_CTL(unsigned long a)
{
    if (a==0)
        return 0x871001000000ll + 0x100000ll * ((a) & 0x0);
    __cavm_csr_fatal("BCH_VQX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_VQX_CTL(a) cavm_bch_vqx_ctl_t
#define bustype_CAVM_BCH_VQX_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_BCH_VQX_CTL(a) "BCH_VQX_CTL"
#define device_bar_CAVM_BCH_VQX_CTL(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_BCH_VQX_CTL(a) (a)
#define arguments_CAVM_BCH_VQX_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) bch_vq#_doorbell
 *
 * BCH Queue Doorbell Register
 */
union cavm_bch_vqx_doorbell
{
    uint64_t u;
    struct cavm_bch_vqx_doorbell_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t dbell_cnt             : 20; /**< [ 19:  0](R/W/H) Number of instruction queue 64-bit words to add to the instruction doorbell
                                                                 count. */
#else /* Word 0 - Little Endian */
        uint64_t dbell_cnt             : 20; /**< [ 19:  0](R/W/H) Number of instruction queue 64-bit words to add to the instruction doorbell
                                                                 count. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_bch_vqx_doorbell_s cn; */
};
typedef union cavm_bch_vqx_doorbell cavm_bch_vqx_doorbell_t;

static inline uint64_t CAVM_BCH_VQX_DOORBELL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_VQX_DOORBELL(unsigned long a)
{
    if (a==0)
        return 0x871001000800ll + 0x100000ll * ((a) & 0x0);
    __cavm_csr_fatal("BCH_VQX_DOORBELL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_VQX_DOORBELL(a) cavm_bch_vqx_doorbell_t
#define bustype_CAVM_BCH_VQX_DOORBELL(a) CSR_TYPE_NCB
#define basename_CAVM_BCH_VQX_DOORBELL(a) "BCH_VQX_DOORBELL"
#define device_bar_CAVM_BCH_VQX_DOORBELL(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_BCH_VQX_DOORBELL(a) (a)
#define arguments_CAVM_BCH_VQX_DOORBELL(a) (a),-1,-1,-1

/**
 * Register (NCB) bch_vq#_int
 *
 * BCH VF Interrupt Register
 */
union cavm_bch_vqx_int
{
    uint64_t u;
    struct cavm_bch_vqx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1C/H) Poisoned data loaded via NCBO. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1C/H) Poisoned command loaded via NCBO. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1C/H) A fault occurred while storing data via NCBI. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1C/H) A fault occurred while storing result word via NCBI. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1C/H) A fault occurred while loading data via NCBO. */
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1C/H) A fault occurred while loading command via NCBO. */
        uint64_t reserved_1_2          : 2;
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1C/H) Error bit indicating a doorbell count has overflowed. */
#else /* Word 0 - Little Endian */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1C/H) Error bit indicating a doorbell count has overflowed. */
        uint64_t reserved_1_2          : 2;
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1C/H) A fault occurred while loading command via NCBO. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1C/H) A fault occurred while loading data via NCBO. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1C/H) A fault occurred while storing result word via NCBI. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1C/H) A fault occurred while storing data via NCBI. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1C/H) Poisoned command loaded via NCBO. */
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1C/H) Poisoned data loaded via NCBO. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    struct cavm_bch_vqx_int_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1C/H) Poisoned data loaded via NCBO. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1C/H) Poisoned command loaded via NCBO. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1C/H) A fault occurred while storing data via NCBI. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1C/H) A fault occurred while storing result word via NCBI. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1C/H) A fault occurred while loading data via NCBO. */
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1C/H) A fault occurred while loading command via NCBO. */
        uint64_t reserved_2            : 1;
        uint64_t reserved_1            : 1;
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1C/H) Error bit indicating a doorbell count has overflowed. */
#else /* Word 0 - Little Endian */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1C/H) Error bit indicating a doorbell count has overflowed. */
        uint64_t reserved_1            : 1;
        uint64_t reserved_2            : 1;
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1C/H) A fault occurred while loading command via NCBO. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1C/H) A fault occurred while loading data via NCBO. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1C/H) A fault occurred while storing result word via NCBI. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1C/H) A fault occurred while storing data via NCBI. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1C/H) Poisoned command loaded via NCBO. */
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1C/H) Poisoned data loaded via NCBO. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_bch_vqx_int cavm_bch_vqx_int_t;

static inline uint64_t CAVM_BCH_VQX_INT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_VQX_INT(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x871001000808ll + 0x100000ll * ((a) & 0x0);
    __cavm_csr_fatal("BCH_VQX_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_VQX_INT(a) cavm_bch_vqx_int_t
#define bustype_CAVM_BCH_VQX_INT(a) CSR_TYPE_NCB
#define basename_CAVM_BCH_VQX_INT(a) "BCH_VQX_INT"
#define device_bar_CAVM_BCH_VQX_INT(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_BCH_VQX_INT(a) (a)
#define arguments_CAVM_BCH_VQX_INT(a) (a),-1,-1,-1

/**
 * Register (NCB) bch_vq#_int_ena_w1c
 *
 * BCH VF Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_bch_vqx_int_ena_w1c
{
    uint64_t u;
    struct cavm_bch_vqx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_CMD_PSN]. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[ST_DAT_FLT]. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[ST_RES_FLT]. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_DAT_FLT]. */
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_CMD_FLT]. */
        uint64_t reserved_1_2          : 2;
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[DOORBELL]. */
#else /* Word 0 - Little Endian */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[DOORBELL]. */
        uint64_t reserved_1_2          : 2;
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_CMD_FLT]. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_DAT_FLT]. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[ST_RES_FLT]. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[ST_DAT_FLT]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_DAT_PSN]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    struct cavm_bch_vqx_int_ena_w1c_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_CMD_PSN]. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[ST_DAT_FLT]. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[ST_RES_FLT]. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_DAT_FLT]. */
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_CMD_FLT]. */
        uint64_t reserved_2            : 1;
        uint64_t reserved_1            : 1;
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[DOORBELL]. */
#else /* Word 0 - Little Endian */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[DOORBELL]. */
        uint64_t reserved_1            : 1;
        uint64_t reserved_2            : 1;
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_CMD_FLT]. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_DAT_FLT]. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[ST_RES_FLT]. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[ST_DAT_FLT]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1C/H) Reads or clears enable for BCH_VQ(0)_INT[LD_DAT_PSN]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_bch_vqx_int_ena_w1c cavm_bch_vqx_int_ena_w1c_t;

static inline uint64_t CAVM_BCH_VQX_INT_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_VQX_INT_ENA_W1C(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x871001000820ll + 0x100000ll * ((a) & 0x0);
    __cavm_csr_fatal("BCH_VQX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_VQX_INT_ENA_W1C(a) cavm_bch_vqx_int_ena_w1c_t
#define bustype_CAVM_BCH_VQX_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_BCH_VQX_INT_ENA_W1C(a) "BCH_VQX_INT_ENA_W1C"
#define device_bar_CAVM_BCH_VQX_INT_ENA_W1C(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_BCH_VQX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_BCH_VQX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) bch_vq#_int_ena_w1s
 *
 * BCH VF Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_bch_vqx_int_ena_w1s
{
    uint64_t u;
    struct cavm_bch_vqx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_CMD_PSN]. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[ST_DAT_FLT]. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[ST_RES_FLT]. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_DAT_FLT]. */
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_CMD_FLT]. */
        uint64_t reserved_1_2          : 2;
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[DOORBELL]. */
#else /* Word 0 - Little Endian */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[DOORBELL]. */
        uint64_t reserved_1_2          : 2;
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_CMD_FLT]. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_DAT_FLT]. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[ST_RES_FLT]. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[ST_DAT_FLT]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_DAT_PSN]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    struct cavm_bch_vqx_int_ena_w1s_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_CMD_PSN]. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[ST_DAT_FLT]. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[ST_RES_FLT]. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_DAT_FLT]. */
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_CMD_FLT]. */
        uint64_t reserved_2            : 1;
        uint64_t reserved_1            : 1;
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[DOORBELL]. */
#else /* Word 0 - Little Endian */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[DOORBELL]. */
        uint64_t reserved_1            : 1;
        uint64_t reserved_2            : 1;
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_CMD_FLT]. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_DAT_FLT]. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[ST_RES_FLT]. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[ST_DAT_FLT]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1S/H) Reads or sets enable for BCH_VQ(0)_INT[LD_DAT_PSN]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_bch_vqx_int_ena_w1s cavm_bch_vqx_int_ena_w1s_t;

static inline uint64_t CAVM_BCH_VQX_INT_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_VQX_INT_ENA_W1S(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x871001000828ll + 0x100000ll * ((a) & 0x0);
    __cavm_csr_fatal("BCH_VQX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_VQX_INT_ENA_W1S(a) cavm_bch_vqx_int_ena_w1s_t
#define bustype_CAVM_BCH_VQX_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_BCH_VQX_INT_ENA_W1S(a) "BCH_VQX_INT_ENA_W1S"
#define device_bar_CAVM_BCH_VQX_INT_ENA_W1S(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_BCH_VQX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_BCH_VQX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) bch_vq#_int_w1s
 *
 * BCH VF Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_bch_vqx_int_w1s
{
    uint64_t u;
    struct cavm_bch_vqx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_CMD_PSN]. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets BCH_VQ(0)_INT[ST_DAT_FLT]. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1S/H) Reads or sets BCH_VQ(0)_INT[ST_RES_FLT]. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_DAT_FLT]. */
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_CMD_FLT]. */
        uint64_t reserved_1_2          : 2;
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets BCH_VQ(0)_INT[DOORBELL]. */
#else /* Word 0 - Little Endian */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets BCH_VQ(0)_INT[DOORBELL]. */
        uint64_t reserved_1_2          : 2;
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_CMD_FLT]. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_DAT_FLT]. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1S/H) Reads or sets BCH_VQ(0)_INT[ST_RES_FLT]. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets BCH_VQ(0)_INT[ST_DAT_FLT]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_DAT_PSN]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    struct cavm_bch_vqx_int_w1s_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_CMD_PSN]. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets BCH_VQ(0)_INT[ST_DAT_FLT]. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1S/H) Reads or sets BCH_VQ(0)_INT[ST_RES_FLT]. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_DAT_FLT]. */
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_CMD_FLT]. */
        uint64_t reserved_2            : 1;
        uint64_t reserved_1            : 1;
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets BCH_VQ(0)_INT[DOORBELL]. */
#else /* Word 0 - Little Endian */
        uint64_t doorbell              : 1;  /**< [  0:  0](R/W1S/H) Reads or sets BCH_VQ(0)_INT[DOORBELL]. */
        uint64_t reserved_1            : 1;
        uint64_t reserved_2            : 1;
        uint64_t ld_cmd_flt            : 1;  /**< [  3:  3](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_CMD_FLT]. */
        uint64_t ld_dat_flt            : 1;  /**< [  4:  4](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_DAT_FLT]. */
        uint64_t st_res_flt            : 1;  /**< [  5:  5](R/W1S/H) Reads or sets BCH_VQ(0)_INT[ST_RES_FLT]. */
        uint64_t st_dat_flt            : 1;  /**< [  6:  6](R/W1S/H) Reads or sets BCH_VQ(0)_INT[ST_DAT_FLT]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  7:  7](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  8:  8](R/W1S/H) Reads or sets BCH_VQ(0)_INT[LD_DAT_PSN]. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } cn;
};
typedef union cavm_bch_vqx_int_w1s cavm_bch_vqx_int_w1s_t;

static inline uint64_t CAVM_BCH_VQX_INT_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_BCH_VQX_INT_W1S(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a==0))
        return 0x871001000810ll + 0x100000ll * ((a) & 0x0);
    __cavm_csr_fatal("BCH_VQX_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_BCH_VQX_INT_W1S(a) cavm_bch_vqx_int_w1s_t
#define bustype_CAVM_BCH_VQX_INT_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_BCH_VQX_INT_W1S(a) "BCH_VQX_INT_W1S"
#define device_bar_CAVM_BCH_VQX_INT_W1S(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_BCH_VQX_INT_W1S(a) (a)
#define arguments_CAVM_BCH_VQX_INT_W1S(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_BCH_H__ */
