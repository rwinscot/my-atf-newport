#ifndef __CAVM_CSRS_ZIP_H__
#define __CAVM_CSRS_ZIP_H__
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
 * OcteonTX ZIP.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration zip_bar_e
 *
 * ZIP Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_ZIP_BAR_E_ZIPX_PF_BAR0(a) (0x838000000000ll + 0x1000000000ll * (a))
#define CAVM_ZIP_BAR_E_ZIPX_PF_BAR0_SIZE 0x800000ull
#define CAVM_ZIP_BAR_E_ZIPX_PF_BAR4(a) (0x838010000000ll + 0x1000000000ll * (a))
#define CAVM_ZIP_BAR_E_ZIPX_PF_BAR4_SIZE 0x100000ull
#define CAVM_ZIP_BAR_E_ZIPX_VFX_BAR0(a,b) (0x838020000000ll + 0x1000000000ll * (a) + 0x100000ll * (b))
#define CAVM_ZIP_BAR_E_ZIPX_VFX_BAR0_SIZE 0x100000ull
#define CAVM_ZIP_BAR_E_ZIPX_VFX_BAR4(a,b) (0x838030000000ll + 0x1000000000ll * (a) + 0x100000ll * (b))
#define CAVM_ZIP_BAR_E_ZIPX_VFX_BAR4_SIZE 0x100000ull
#define CAVM_ZIP_BAR_E_ZIP_PF_BAR0 (0x838000000000ll)
#define CAVM_ZIP_BAR_E_ZIP_PF_BAR0_SIZE 0x800000ull
#define CAVM_ZIP_BAR_E_ZIP_PF_BAR4 (0x838010000000ll)
#define CAVM_ZIP_BAR_E_ZIP_PF_BAR4_SIZE 0x100000ull
#define CAVM_ZIP_BAR_E_ZIP_VFX_BAR0(a) (0x838020000000ll + 0x100000ll * (a))
#define CAVM_ZIP_BAR_E_ZIP_VFX_BAR0_SIZE 0x100000ull
#define CAVM_ZIP_BAR_E_ZIP_VFX_BAR4(a) (0x838030000000ll + 0x100000ll * (a))
#define CAVM_ZIP_BAR_E_ZIP_VFX_BAR4_SIZE 0x100000ull

/**
 * Enumeration zip_cc_e
 *
 * ZIP Compression Coding Enumeration
 * Enumerates ZIP_INST_S[CC] which determines the format of the compressed data during
 * a compression (i.e. ZIP_OP_E::COMP).
 */
#define CAVM_ZIP_CC_E_DEFLATE (0)
#define CAVM_ZIP_CC_E_DEFLATE_DYNHUFF (1)
#define CAVM_ZIP_CC_E_DEFLATE_FIXEDHUFF (2)
#define CAVM_ZIP_CC_E_LZS (3)

/**
 * Enumeration zip_comp_e
 *
 * ZIP Completion Enumeration
 * Enumerates the values of ZIP_ZRES_S[COMPCODE].
 */
#define CAVM_ZIP_COMP_E_BADCODE (7)
#define CAVM_ZIP_COMP_E_BADCODE2 (8)
#define CAVM_ZIP_COMP_E_DSTOP (3)
#define CAVM_ZIP_COMP_E_DTRUNC (2)
#define CAVM_ZIP_COMP_E_FATAL (0xb)
#define CAVM_ZIP_COMP_E_HCTX_ERR (0xe)
#define CAVM_ZIP_COMP_E_INSTR_ERR (0xd)
#define CAVM_ZIP_COMP_E_ITRUNC (4)
#define CAVM_ZIP_COMP_E_NLEN (6)
#define CAVM_ZIP_COMP_E_NOTDONE (0)
#define CAVM_ZIP_COMP_E_PARITY (0xa)
#define CAVM_ZIP_COMP_E_PTR_ERR (0xf)
#define CAVM_ZIP_COMP_E_RBLOCK (5)
#define CAVM_ZIP_COMP_E_SUCCESS (1)
#define CAVM_ZIP_COMP_E_TIMEOUT (0xc)
#define CAVM_ZIP_COMP_E_ZERO_LEN (9)

/**
 * Enumeration zip_hash_alg_e
 *
 * ZIP Hash Algorithm Enumeration
 * Enumerates ZIP_INST_S[HALG].
 */
#define CAVM_ZIP_HASH_ALG_E_NONE (0)
#define CAVM_ZIP_HASH_ALG_E_SHA1 (1)
#define CAVM_ZIP_HASH_ALG_E_SHA256 (2)

/**
 * Enumeration zip_op_e
 *
 * ZIP Operation Enumeration
 * Enumerates ZIP_INST_S[OP].
 * Internal:
 * This encoding provides backward compatibility with CN88XX software.
 */
#define CAVM_ZIP_OP_E_COMP (2)
#define CAVM_ZIP_OP_E_DECOMP (0)
#define CAVM_ZIP_OP_E_NOCOMP (1)

/**
 * Enumeration zip_pf_int_vec_e
 *
 * ZIP MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_ZIP_PF_INT_VEC_E_ECCE (0)
#define CAVM_ZIP_PF_INT_VEC_E_FIFE (1)
#define CAVM_ZIP_PF_INT_VEC_E_MBOXX_CN8(a) (2 + (a))
#define CAVM_ZIP_PF_INT_VEC_E_MBOXX_CN9(a) (0 + (a))
#define CAVM_ZIP_PF_INT_VEC_E_RAS (1)

/**
 * Enumeration zip_vf_int_vec_e
 *
 * ZIP VF MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_ZIP_VF_INT_VEC_E_QUE_DONE (0)
#define CAVM_ZIP_VF_INT_VEC_E_QUE_ERR (1)

/**
 * Structure zip_hash_s
 *
 * ZIP Hash State Structure
 * This structure contains hash state. The endianness depends on
 * ZIP()_QUE()_SBUF_CTL[INST_BE].
 *
 * When ZIP_INST_S[HALG] != 0x0 (NONE), and ZIP_INST_S[BF] and ZIP_INST_S[IV] are set, then
 * ZIP_INST_S[HASH_PTR] points to this structure, which will be read by the ZIP coprocessor at
 * the beginning of an instruction's processing to establish the hash state.
 *
 * When ZIP_INST_S[HALG] != 0x0 (NONE), and ZIP_INST_S[BF] is clear, then
 * ZIP_INST_S[HASH_PTR] points to this structure, which will be read by the ZIP coprocessor at
 * the beginning of an instruction's processing to continue hashing chunks within a file.
 *
 * When ZIP_INST_S[HALG] != 0x0 (NONE), and ZIP_INST_S[HMIF] is set, then
 * ZIP_INST_S[HASH_PTR] points to this structure, which will be written by the ZIP coprocessor at
 * the end of an instruction to save the hash intermediate state.  This may be passed
 * to future instructions which have ZIP_INST_S[BF] and ZIP_INST_S[IV] clear.
 *
 * If chaining hashes (ZIP_INST_S[BF] is clear or ZIP_INST_S[HMIF] is set), software
 * must ensure that the dependent instructions will not be launched in parallel.  This
 * may be accomplished by waiting for an instruction to complete before submitting the
 * dependent instruction on the same file, or by assigning only a single engine to the
 * queue.
 */
union cavm_zip_hash_s
{
    uint64_t u[20];
    struct cavm_zip_hash_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t hash0                 : 64; /**< [ 63:  0] Double-word 0 of initial value or computed intermediate hash.

                                                                 When ZIP_INST_S[BF] and ZIP_INST_S[IV] are set, software must program this field
                                                                 with the correct hash hash initial value.

                                                                 When ZIP_INST_S[BF] is clear, the ZIP coprocessor reads [HASH0] written by previous
                                                                 chunk's hash operation.

                                                                 When ZIP_INST_S[HMIF] is set, the ZIP coprocessor writes [HASH0] with the intermediate
                                                                 computed hash value. */
#else /* Word 0 - Little Endian */
        uint64_t hash0                 : 64; /**< [ 63:  0] Double-word 0 of initial value or computed intermediate hash.

                                                                 When ZIP_INST_S[BF] and ZIP_INST_S[IV] are set, software must program this field
                                                                 with the correct hash hash initial value.

                                                                 When ZIP_INST_S[BF] is clear, the ZIP coprocessor reads [HASH0] written by previous
                                                                 chunk's hash operation.

                                                                 When ZIP_INST_S[HMIF] is set, the ZIP coprocessor writes [HASH0] with the intermediate
                                                                 computed hash value. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t hash1                 : 64; /**< [127: 64] Double-word 1 of hash. See [HASH0]. */
#else /* Word 1 - Little Endian */
        uint64_t hash1                 : 64; /**< [127: 64] Double-word 1 of hash. See [HASH0]. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t hash2                 : 64; /**< [191:128] Double-word 2 of hash. See [HASH0]. */
#else /* Word 2 - Little Endian */
        uint64_t hash2                 : 64; /**< [191:128] Double-word 2 of hash. See [HASH0]. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t hash3                 : 64; /**< [255:192] Double-word 3 of hash. See [HASH0]. */
#else /* Word 3 - Little Endian */
        uint64_t hash3                 : 64; /**< [255:192] Double-word 3 of hash. See [HASH0]. */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t reserved_317_319      : 3;
        uint64_t prevlen               : 61; /**< [316:256] Previous length in bytes.

                                                                 When ZIP_INST_S[BF] and ZIP_INST_S[IV] are set, for the first chunk in a file,
                                                                 if this value is nonzero (up to 64), hardware will read up to [PREVLEN] bytes
                                                                 data in [PDATA0] ... [PDATA7] to use as header to be hashed.  Otherwise, software
                                                                 must write 0x0, since there is no previous hashed block yet.

                                                                 When ZIP_INST_S[IV] is set and [PREVLEN] is zero, [PDATA0] ... [PDATA7] are
                                                                 ignored by hardware.

                                                                 When ZIP_INST_S[HMIF] is set, at the end of invocation, the ZIP coprocessor
                                                                 writes [PREVLEN] with the sum of the initial [PREVLEN] value (from the start of
                                                                 the instruction) and the number of bytes consumed by the hash in the current
                                                                 instruction.  When ZIP_INST_S[HMIF] is set, ZIP also writes internal
                                                                 intermediate states to [PDATA0] ... [PDATA7] at the end of the invocation. */
#else /* Word 4 - Little Endian */
        uint64_t prevlen               : 61; /**< [316:256] Previous length in bytes.

                                                                 When ZIP_INST_S[BF] and ZIP_INST_S[IV] are set, for the first chunk in a file,
                                                                 if this value is nonzero (up to 64), hardware will read up to [PREVLEN] bytes
                                                                 data in [PDATA0] ... [PDATA7] to use as header to be hashed.  Otherwise, software
                                                                 must write 0x0, since there is no previous hashed block yet.

                                                                 When ZIP_INST_S[IV] is set and [PREVLEN] is zero, [PDATA0] ... [PDATA7] are
                                                                 ignored by hardware.

                                                                 When ZIP_INST_S[HMIF] is set, at the end of invocation, the ZIP coprocessor
                                                                 writes [PREVLEN] with the sum of the initial [PREVLEN] value (from the start of
                                                                 the instruction) and the number of bytes consumed by the hash in the current
                                                                 instruction.  When ZIP_INST_S[HMIF] is set, ZIP also writes internal
                                                                 intermediate states to [PDATA0] ... [PDATA7] at the end of the invocation. */
        uint64_t reserved_317_319      : 3;
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t sha1                  : 1;  /**< [383:383] Indicates that the ZIP_HASH_S contents are for a SHA1 operation.

                                                                 When ZIP_INST_S[BF] is clear, the ZIP coprocessor reads [SHA1] written by the previous
                                                                 chunk's instruction.

                                                                 When ZIP_INST_S[BF] is set, ignored by the ZIP coprocessor. */
        uint64_t wcnt                  : 7;  /**< [382:376] Word count.

                                                                 When ZIP_INST_S[BF] is clear, the ZIP coprocessor reads [WCNT] written by the previous
                                                                 chunk's instruction.

                                                                 When ZIP_INST_S[BF] is set, ignored by the ZIP coprocessor.

                                                                 When ZIP_INST_S[HMIF] is set, the ZIP coprocessor writes [WCNT]. */
        uint64_t leftover              : 56; /**< [375:320] Left over hash input data.

                                                                 When ZIP_INST_S[BF] is clear, the ZIP coprocessor reads the [LEFTOVER] value written
                                                                 by the previous chunk's instruction.

                                                                 When ZIP_INST_S[BF] is set, ignored by the ZIP coprocessor.

                                                                 When ZIP_INST_S[HMIF] is set, the ZIP coprocessor writes [LEFTOVER]. */
#else /* Word 5 - Little Endian */
        uint64_t leftover              : 56; /**< [375:320] Left over hash input data.

                                                                 When ZIP_INST_S[BF] is clear, the ZIP coprocessor reads the [LEFTOVER] value written
                                                                 by the previous chunk's instruction.

                                                                 When ZIP_INST_S[BF] is set, ignored by the ZIP coprocessor.

                                                                 When ZIP_INST_S[HMIF] is set, the ZIP coprocessor writes [LEFTOVER]. */
        uint64_t wcnt                  : 7;  /**< [382:376] Word count.

                                                                 When ZIP_INST_S[BF] is clear, the ZIP coprocessor reads [WCNT] written by the previous
                                                                 chunk's instruction.

                                                                 When ZIP_INST_S[BF] is set, ignored by the ZIP coprocessor.

                                                                 When ZIP_INST_S[HMIF] is set, the ZIP coprocessor writes [WCNT]. */
        uint64_t sha1                  : 1;  /**< [383:383] Indicates that the ZIP_HASH_S contents are for a SHA1 operation.

                                                                 When ZIP_INST_S[BF] is clear, the ZIP coprocessor reads [SHA1] written by the previous
                                                                 chunk's instruction.

                                                                 When ZIP_INST_S[BF] is set, ignored by the ZIP coprocessor. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t reserved_385_447      : 63;
        uint64_t herr                  : 1;  /**< [384:384] Hash error.

                                                                 When ZIP_INST_S[BF] is clear, the ZIP coprocessor reads [HERR] written by the previous
                                                                 chunk's instruction.

                                                                 When ZIP_INST_S[BF] is set, ignored by the ZIP coprocessor. */
#else /* Word 6 - Little Endian */
        uint64_t herr                  : 1;  /**< [384:384] Hash error.

                                                                 When ZIP_INST_S[BF] is clear, the ZIP coprocessor reads [HERR] written by the previous
                                                                 chunk's instruction.

                                                                 When ZIP_INST_S[BF] is set, ignored by the ZIP coprocessor. */
        uint64_t reserved_385_447      : 63;
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t reserved_448_511      : 64;
#else /* Word 7 - Little Endian */
        uint64_t reserved_448_511      : 64;
#endif /* Word 7 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 8 - Big Endian */
        uint64_t pdata0                : 64; /**< [575:512] First 8-bytes of partial data. See [PREVLEN]. */
#else /* Word 8 - Little Endian */
        uint64_t pdata0                : 64; /**< [575:512] First 8-bytes of partial data. See [PREVLEN]. */
#endif /* Word 8 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 9 - Big Endian */
        uint64_t pdata1                : 64; /**< [639:576] Next 8-bytes of partial data. See [PREVLEN]. */
#else /* Word 9 - Little Endian */
        uint64_t pdata1                : 64; /**< [639:576] Next 8-bytes of partial data. See [PREVLEN]. */
#endif /* Word 9 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 10 - Big Endian */
        uint64_t pdata2                : 64; /**< [703:640] Next 8-bytes of partial data. See [PREVLEN]. */
#else /* Word 10 - Little Endian */
        uint64_t pdata2                : 64; /**< [703:640] Next 8-bytes of partial data. See [PREVLEN]. */
#endif /* Word 10 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 11 - Big Endian */
        uint64_t pdata3                : 64; /**< [767:704] Next 8-bytes of partial data. See [PREVLEN]. */
#else /* Word 11 - Little Endian */
        uint64_t pdata3                : 64; /**< [767:704] Next 8-bytes of partial data. See [PREVLEN]. */
#endif /* Word 11 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 12 - Big Endian */
        uint64_t pdata4                : 64; /**< [831:768] First 8-bytes of partial data. See [PREVLEN]. */
#else /* Word 12 - Little Endian */
        uint64_t pdata4                : 64; /**< [831:768] First 8-bytes of partial data. See [PREVLEN]. */
#endif /* Word 12 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 13 - Big Endian */
        uint64_t pdata5                : 64; /**< [895:832] Next 8-bytes of partial data. See [PREVLEN]. */
#else /* Word 13 - Little Endian */
        uint64_t pdata5                : 64; /**< [895:832] Next 8-bytes of partial data. See [PREVLEN]. */
#endif /* Word 13 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 14 - Big Endian */
        uint64_t pdata6                : 64; /**< [959:896] Next 8-bytes of partial data. See [PREVLEN]. */
#else /* Word 14 - Little Endian */
        uint64_t pdata6                : 64; /**< [959:896] Next 8-bytes of partial data. See [PREVLEN]. */
#endif /* Word 14 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 15 - Big Endian */
        uint64_t pdata7                : 64; /**< [1023:960] Next 8-bytes of partial data. See [PREVLEN]. */
#else /* Word 15 - Little Endian */
        uint64_t pdata7                : 64; /**< [1023:960] Next 8-bytes of partial data. See [PREVLEN]. */
#endif /* Word 15 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 16 - Big Endian */
        uint64_t sha_ab                : 64; /**< [1087:1024] Double-word 0 of hash state. Written when ZIP_INST_S[HMIF] is set and read by the ZIP
                                                                 coprocessor when ZIP_INST_S[BF] is cleared. */
#else /* Word 16 - Little Endian */
        uint64_t sha_ab                : 64; /**< [1087:1024] Double-word 0 of hash state. Written when ZIP_INST_S[HMIF] is set and read by the ZIP
                                                                 coprocessor when ZIP_INST_S[BF] is cleared. */
#endif /* Word 16 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 17 - Big Endian */
        uint64_t sha_cd                : 64; /**< [1151:1088] Double-word 1 of hash state. See [SHA_AB]. */
#else /* Word 17 - Little Endian */
        uint64_t sha_cd                : 64; /**< [1151:1088] Double-word 1 of hash state. See [SHA_AB]. */
#endif /* Word 17 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 18 - Big Endian */
        uint64_t sha_ef                : 64; /**< [1215:1152] Double-word 2 of hash state. See [SHA_AB]. */
#else /* Word 18 - Little Endian */
        uint64_t sha_ef                : 64; /**< [1215:1152] Double-word 2 of hash state. See [SHA_AB]. */
#endif /* Word 18 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 19 - Big Endian */
        uint64_t sha_gh                : 64; /**< [1279:1216] Double-word 3 of hash state. See [SHA_AB]. */
#else /* Word 19 - Little Endian */
        uint64_t sha_gh                : 64; /**< [1279:1216] Double-word 3 of hash state. See [SHA_AB]. */
#endif /* Word 19 - End */
    } s;
    /* struct cavm_zip_hash_s_s cn; */
};

/**
 * Structure zip_inst_s
 *
 * ZIP Instruction Structure
 * Each ZIP instruction has 16 words (called IWORD0 to IWORD15 within the structure).
 */
union cavm_zip_inst_s
{
    uint64_t u[16];
    struct cavm_zip_inst_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t doneint               : 1;  /**< [ 63: 63] Done interrupt. When [DONEINT] is set and the instruction completes,
                                                                 ZIP_VQ()_DONE[DONE] will be incremented. */
        uint64_t reserved_56_62        : 7;
        uint64_t totaloutputlength     : 24; /**< [ 55: 32] Indicates the maximum number of output-stream bytes that can be written.
                                                                 [TOTALOUTPUTLENGTH] must exactly match the number of bytes indicated by the output
                                                                 pointer (either by ZIP_ZPTR_S[LENGTH] directly if [DS] = 0, or indirectly if [DS] = 1). */
        uint64_t reserved_27_31        : 5;
        uint64_t exn                   : 3;  /**< [ 26: 24] Number of bits produced beyond the last output byte written by the prior ZIP
                                                                 coprocessor invocation.  See [EXBITS]. */
        uint64_t iv                    : 1;  /**< [ 23: 23] Initial values for hashing.
                                                                 0 = If hashing is performed, the initial values start a new hash, using the
                                                                 algorithm-specific initial values specified in ZIP_HASH_ALG_E.
                                                                 1 = If hashing is performed, hash initial values and states are loaded from
                                                                 the ZIP_HASH_S structure pointed to by [HASH_PTR].

                                                                 Must be clear when [HALG] = 0x0 (NONE), or [BF] is clear. */
        uint64_t exbits                : 7;  /**< [ 22: 16] [EXN], [EXBITS] are the previously-generated compressed bits beyond the last
                                                                 compressed byte written for the file. These bits are required context for partial-file
                                                                 processing because the ZIP compression algorithm produces a compressed bit
                                                                 stream, but the output stream is in bytes.

                                                                 For compression, when [BF] = 1, [EXN], [EXBITS] must be 0x0.
                                                                 For compression, when [BF] = 0, [EXN], [EXBITS] are typically equal to the
                                                                 ZIP_ZRES_S[EXN] and ZIP_ZRES_S[EXBITS] from the previous ZIP compression coprocessor
                                                                 invocation for the file. (If software instead inserts its own blocks in the compressed
                                                                 output stream between ZIP compression coprocessor invocations, [EXN], [EXBITS] will
                                                                 instead be the result after the last software insertion.)

                                                                 [EXBITS] contains the extra bits. Bit \<0\> contains the first extra bit, \<1\> the
                                                                 second extra bit, etc. All unused [EXBITS] bits must be 0.

                                                                 For decompression, [EXN], [EXBITS] must be 0x0. */
        uint64_t hmif                  : 1;  /**< [ 15: 15] Hash more-in-file (i.e. not end-of-file).
                                                                 0 = If hashing is performed, this is the final block in the file.  Hash results will be
                                                                 stored in ZIP_ZRES_S.
                                                                 1 = If hashing is performed, additional blocks will follow in this file.  Intermediate
                                                                 state will be stored in the ZIP_HASH_S structure pointed to by [HASH_PTR].

                                                                 If [HALG] = 0x0 (NONE), [HMIF] must be clear. */
        uint64_t halg                  : 3;  /**< [ 14: 12] Hash algorithm and enable. Enumerated by ZIP_HASH_ALG_E. */
        uint64_t sf                    : 1;  /**< [ 11: 11] Sync flush. When set, enables SYNC FLUSH functionality.

                                                                 For DEFLATE compression, [SF] forces ZIP hardware to append a zero-length nocompress
                                                                 block to the end of the partial compressed data stream. This forces the partial compressed
                                                                 stream to be byte-aligned. This grows the output by 35-39 bits.  [SF] must not be set when
                                                                 [EF] is set. ZIP_ZRES_S[EXN,EXBITS] will always be 0x0 when [SF] is set.

                                                                 For LZS compression, [SF] must always be set whenever [EF] is clear. ZIP hardware always
                                                                 inserts an end-of-block marker at the end of the partial compressed data stream. This
                                                                 forces the partial compressed stream to be byte-aligned. [SF] must not be set when [EF]
                                                                 is set.  ZIP_ZRES_S[EXN,EXBITS] will always be 0x0.

                                                                 For decompression, [SF] should always be set. */
        uint64_t ss                    : 2;  /**< [ 10:  9] Compression speed/storage.
                                                                 Selects the ZIP compression engine speed, at the expense of the compression ratio.

                                                                 For compression:
                                                                 0x0 = best quality, slowest speed.
                                                                 0x2 = lower quality, faster speed.
                                                                 0x1 = medium quality, medium speed.
                                                                 0x3 = lowest quality, best speed.

                                                                 For decompression, [SS] must be 0x0. */
        uint64_t cc                    : 2;  /**< [  8:  7] Compression coding.

                                                                 For compression:
                                                                 0x0 = hardware selects the better of fixed or dynamic Huffman encoding.
                                                                 0x1 = force dynamic Huffman encoding.
                                                                 0x2 = force fixed Huffman encoding.
                                                                 0x3 = force LZS encoding.

                                                                 For DEFLATE decompression, [CC] must be 0x0. For LZS decompression, [CC] must be 0x3. */
        uint64_t ef                    : 1;  /**< [  6:  6] End of input data. Set when the end of the input-data stream ends a file.

                                                                 For compression, if [EF] = 1, the ZIP engine always marks the last output block
                                                                 to be final. (The extra bits are zero-extended and written out as an
                                                                 output-stream byte.)

                                                                 For decompression, it is an error if [EF] = 1 and the ZIP coprocessor does not
                                                                 complete decompression of all blocks before it exhausts the input compressed
                                                                 data stream (ZIP_ZRES_S[COMPCODE] = ZIP_COMP_E::ITRUNC in this case.). It is not
                                                                 an error if [EF] = 0 when the ZIP coprocessor completes decompression of all
                                                                 blocks in the file. */
        uint64_t bf                    : 1;  /**< [  5:  5] Beginning of file. Set when the beginning of the (non-history) input stream starts a
                                                                 file.

                                                                 For compression:
                                                                 0 = first byte of input data is not the beginning of the file.
                                                                 1 = first byte of input data (after history data or not) is the beginning of the file.
                                                                 Note that in the compress case when [HISTORYLENGTH] is nonzero, the
                                                                 beginning of the input data stream is history data. Regardless of whether history
                                                                 data is present for a compress operation, [BF] should indicate whether the first non-
                                                                 history byte (i.e. the byte at position [HISTORYLENGTH] in the input data stream) is the
                                                                 first byte of the file.

                                                                 For decompression:
                                                                 0 = not the beginning of the file, read context from memory at [CTX_PTR_ADDR].
                                                                 1 = beginning of the file, create a new context.

                                                                 For hash (SHA1/SHA256):
                                                                 0 = not the beginning of the file, read hash context from ZIP_HASH_S structure in memory
                                                                 at [HASH_PTR].
                                                                 1 = beginning of the file, load IVs from ZIP_HASH_S structure in memory at [HASH_PTR] if
                                                                 ZIP_INST_S[IV] is set, read hash header text bytes (up to 64 bytes) from ZIP_HASH_S
                                                                 structure in memory at [HASH_PTR] if ZIP_HASH_S[PREVLEN] is nonzero, and create a new
                                                                 context. */
        uint64_t op                    : 2;  /**< [  4:  3] Compression/decompression operation. Enumerated by ZIP_OP_E. */
        uint64_t ds                    : 1;  /**< [  2:  2] Data scatter:
                                                                 1 = [OUT_PTR_ADDR] points to a list of scatter pointers that are read
                                                                 by the ZIP coprocessor to determine the locations to write the output data.
                                                                 0 = [OUT_PTR_ADDR] points directly at the location to write the output data.

                                                                 If [DS] = 1, the [OUT_PTR_CTL]'s LENGTH field, indicating the number of pointers
                                                                 in the output scatter list, must be at least 0x2. */
        uint64_t dg                    : 1;  /**< [  1:  1] Data gather:
                                                                 1 = [INP_PTR_ADDR] (the input and compression history pointer) points to a gather list of
                                                                 pointers that are read by the ZIP coprocessor to locate the actual history/input data.
                                                                 0 = [INP_PTR_ADDR] points directly at the actual history/input data.

                                                                 If [DG] = 1, the [INP_PTR_CTL]'s LENGTH field, indicating the number of pointers
                                                                 in the input and compression history gather list, must be at least 0x2. */
        uint64_t hg                    : 1;  /**< [  0:  0] History gather:
                                                                 1 = [HIS_PTR_ADDR] points to a gather list of pointers that are read by the
                                                                 ZIP coprocessor to locate the actual history data.
                                                                 0 = [HIS_PTR_ADDR] points directly at the actual history data. [HG] must be zero for
                                                                 a compression operation.

                                                                 If [HG] = 1, history data must be present for the decompression operation, and the
                                                                 [HIS_PTR_ADDR]'s LENGTH field, indicating the number of pointers in the
                                                                 decompression history gather list, must be at least 0x2. */
#else /* Word 0 - Little Endian */
        uint64_t hg                    : 1;  /**< [  0:  0] History gather:
                                                                 1 = [HIS_PTR_ADDR] points to a gather list of pointers that are read by the
                                                                 ZIP coprocessor to locate the actual history data.
                                                                 0 = [HIS_PTR_ADDR] points directly at the actual history data. [HG] must be zero for
                                                                 a compression operation.

                                                                 If [HG] = 1, history data must be present for the decompression operation, and the
                                                                 [HIS_PTR_ADDR]'s LENGTH field, indicating the number of pointers in the
                                                                 decompression history gather list, must be at least 0x2. */
        uint64_t dg                    : 1;  /**< [  1:  1] Data gather:
                                                                 1 = [INP_PTR_ADDR] (the input and compression history pointer) points to a gather list of
                                                                 pointers that are read by the ZIP coprocessor to locate the actual history/input data.
                                                                 0 = [INP_PTR_ADDR] points directly at the actual history/input data.

                                                                 If [DG] = 1, the [INP_PTR_CTL]'s LENGTH field, indicating the number of pointers
                                                                 in the input and compression history gather list, must be at least 0x2. */
        uint64_t ds                    : 1;  /**< [  2:  2] Data scatter:
                                                                 1 = [OUT_PTR_ADDR] points to a list of scatter pointers that are read
                                                                 by the ZIP coprocessor to determine the locations to write the output data.
                                                                 0 = [OUT_PTR_ADDR] points directly at the location to write the output data.

                                                                 If [DS] = 1, the [OUT_PTR_CTL]'s LENGTH field, indicating the number of pointers
                                                                 in the output scatter list, must be at least 0x2. */
        uint64_t op                    : 2;  /**< [  4:  3] Compression/decompression operation. Enumerated by ZIP_OP_E. */
        uint64_t bf                    : 1;  /**< [  5:  5] Beginning of file. Set when the beginning of the (non-history) input stream starts a
                                                                 file.

                                                                 For compression:
                                                                 0 = first byte of input data is not the beginning of the file.
                                                                 1 = first byte of input data (after history data or not) is the beginning of the file.
                                                                 Note that in the compress case when [HISTORYLENGTH] is nonzero, the
                                                                 beginning of the input data stream is history data. Regardless of whether history
                                                                 data is present for a compress operation, [BF] should indicate whether the first non-
                                                                 history byte (i.e. the byte at position [HISTORYLENGTH] in the input data stream) is the
                                                                 first byte of the file.

                                                                 For decompression:
                                                                 0 = not the beginning of the file, read context from memory at [CTX_PTR_ADDR].
                                                                 1 = beginning of the file, create a new context.

                                                                 For hash (SHA1/SHA256):
                                                                 0 = not the beginning of the file, read hash context from ZIP_HASH_S structure in memory
                                                                 at [HASH_PTR].
                                                                 1 = beginning of the file, load IVs from ZIP_HASH_S structure in memory at [HASH_PTR] if
                                                                 ZIP_INST_S[IV] is set, read hash header text bytes (up to 64 bytes) from ZIP_HASH_S
                                                                 structure in memory at [HASH_PTR] if ZIP_HASH_S[PREVLEN] is nonzero, and create a new
                                                                 context. */
        uint64_t ef                    : 1;  /**< [  6:  6] End of input data. Set when the end of the input-data stream ends a file.

                                                                 For compression, if [EF] = 1, the ZIP engine always marks the last output block
                                                                 to be final. (The extra bits are zero-extended and written out as an
                                                                 output-stream byte.)

                                                                 For decompression, it is an error if [EF] = 1 and the ZIP coprocessor does not
                                                                 complete decompression of all blocks before it exhausts the input compressed
                                                                 data stream (ZIP_ZRES_S[COMPCODE] = ZIP_COMP_E::ITRUNC in this case.). It is not
                                                                 an error if [EF] = 0 when the ZIP coprocessor completes decompression of all
                                                                 blocks in the file. */
        uint64_t cc                    : 2;  /**< [  8:  7] Compression coding.

                                                                 For compression:
                                                                 0x0 = hardware selects the better of fixed or dynamic Huffman encoding.
                                                                 0x1 = force dynamic Huffman encoding.
                                                                 0x2 = force fixed Huffman encoding.
                                                                 0x3 = force LZS encoding.

                                                                 For DEFLATE decompression, [CC] must be 0x0. For LZS decompression, [CC] must be 0x3. */
        uint64_t ss                    : 2;  /**< [ 10:  9] Compression speed/storage.
                                                                 Selects the ZIP compression engine speed, at the expense of the compression ratio.

                                                                 For compression:
                                                                 0x0 = best quality, slowest speed.
                                                                 0x2 = lower quality, faster speed.
                                                                 0x1 = medium quality, medium speed.
                                                                 0x3 = lowest quality, best speed.

                                                                 For decompression, [SS] must be 0x0. */
        uint64_t sf                    : 1;  /**< [ 11: 11] Sync flush. When set, enables SYNC FLUSH functionality.

                                                                 For DEFLATE compression, [SF] forces ZIP hardware to append a zero-length nocompress
                                                                 block to the end of the partial compressed data stream. This forces the partial compressed
                                                                 stream to be byte-aligned. This grows the output by 35-39 bits.  [SF] must not be set when
                                                                 [EF] is set. ZIP_ZRES_S[EXN,EXBITS] will always be 0x0 when [SF] is set.

                                                                 For LZS compression, [SF] must always be set whenever [EF] is clear. ZIP hardware always
                                                                 inserts an end-of-block marker at the end of the partial compressed data stream. This
                                                                 forces the partial compressed stream to be byte-aligned. [SF] must not be set when [EF]
                                                                 is set.  ZIP_ZRES_S[EXN,EXBITS] will always be 0x0.

                                                                 For decompression, [SF] should always be set. */
        uint64_t halg                  : 3;  /**< [ 14: 12] Hash algorithm and enable. Enumerated by ZIP_HASH_ALG_E. */
        uint64_t hmif                  : 1;  /**< [ 15: 15] Hash more-in-file (i.e. not end-of-file).
                                                                 0 = If hashing is performed, this is the final block in the file.  Hash results will be
                                                                 stored in ZIP_ZRES_S.
                                                                 1 = If hashing is performed, additional blocks will follow in this file.  Intermediate
                                                                 state will be stored in the ZIP_HASH_S structure pointed to by [HASH_PTR].

                                                                 If [HALG] = 0x0 (NONE), [HMIF] must be clear. */
        uint64_t exbits                : 7;  /**< [ 22: 16] [EXN], [EXBITS] are the previously-generated compressed bits beyond the last
                                                                 compressed byte written for the file. These bits are required context for partial-file
                                                                 processing because the ZIP compression algorithm produces a compressed bit
                                                                 stream, but the output stream is in bytes.

                                                                 For compression, when [BF] = 1, [EXN], [EXBITS] must be 0x0.
                                                                 For compression, when [BF] = 0, [EXN], [EXBITS] are typically equal to the
                                                                 ZIP_ZRES_S[EXN] and ZIP_ZRES_S[EXBITS] from the previous ZIP compression coprocessor
                                                                 invocation for the file. (If software instead inserts its own blocks in the compressed
                                                                 output stream between ZIP compression coprocessor invocations, [EXN], [EXBITS] will
                                                                 instead be the result after the last software insertion.)

                                                                 [EXBITS] contains the extra bits. Bit \<0\> contains the first extra bit, \<1\> the
                                                                 second extra bit, etc. All unused [EXBITS] bits must be 0.

                                                                 For decompression, [EXN], [EXBITS] must be 0x0. */
        uint64_t iv                    : 1;  /**< [ 23: 23] Initial values for hashing.
                                                                 0 = If hashing is performed, the initial values start a new hash, using the
                                                                 algorithm-specific initial values specified in ZIP_HASH_ALG_E.
                                                                 1 = If hashing is performed, hash initial values and states are loaded from
                                                                 the ZIP_HASH_S structure pointed to by [HASH_PTR].

                                                                 Must be clear when [HALG] = 0x0 (NONE), or [BF] is clear. */
        uint64_t exn                   : 3;  /**< [ 26: 24] Number of bits produced beyond the last output byte written by the prior ZIP
                                                                 coprocessor invocation.  See [EXBITS]. */
        uint64_t reserved_27_31        : 5;
        uint64_t totaloutputlength     : 24; /**< [ 55: 32] Indicates the maximum number of output-stream bytes that can be written.
                                                                 [TOTALOUTPUTLENGTH] must exactly match the number of bytes indicated by the output
                                                                 pointer (either by ZIP_ZPTR_S[LENGTH] directly if [DS] = 0, or indirectly if [DS] = 1). */
        uint64_t reserved_56_62        : 7;
        uint64_t doneint               : 1;  /**< [ 63: 63] Done interrupt. When [DONEINT] is set and the instruction completes,
                                                                 ZIP_VQ()_DONE[DONE] will be incremented. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t historylength         : 16; /**< [127:112] With compression, history bytes can be prepended in the input data stream
                                                                 before the bytes that are actually to be compressed. These history bytes
                                                                 are generally the (uncompressed) file input bytes immediately preceding the file
                                                                 bytes being compressed. However, it is also possible to pass in a preset dictionary at
                                                                 the beginning of the file (which will be followed by the first bytes of the file).
                                                                 [HISTORYLENGTH] must never exceed ZIP_CONSTANTS[DEPTH].  [HISTORYLENGTH] must never
                                                                 exceed the sum of the preset dictionary size plus the number of bytes previously
                                                                 processed in the (uncompressed) input data stream for the file. The supplied history
                                                                 bytes must exactly match the bytes previously processed in the (uncompressed) input
                                                                 data stream for the file, preceded by the preset dictionary, if necessary.
                                                                 [HISTORYLENGTH] must never exceed 2048 with LZS. */
        uint64_t reserved_96_111       : 16;
        uint64_t adlercrc32            : 32; /**< [ 95: 64] This 32-bit field represents the current state of the ADLER32 or CRC32 units. The
                                                                 hardware executes both ADLER32 and CRC32 on the processed uncompressed data
                                                                 bytes using this value as the current checksum. Though the hardware outputs both
                                                                 the ADLER32 and CRC32 results, [ADLERCRC32] is the only checksum input, so only
                                                                 one of the two outputs is likely to be useful.

                                                                 The ADLER32 algorithm is defined in RFC1950.

                                                                 CRC32 is defined in ITU-T X.244, Annex D, pp. 144-145 / ISO 8073. */
#else /* Word 1 - Little Endian */
        uint64_t adlercrc32            : 32; /**< [ 95: 64] This 32-bit field represents the current state of the ADLER32 or CRC32 units. The
                                                                 hardware executes both ADLER32 and CRC32 on the processed uncompressed data
                                                                 bytes using this value as the current checksum. Though the hardware outputs both
                                                                 the ADLER32 and CRC32 results, [ADLERCRC32] is the only checksum input, so only
                                                                 one of the two outputs is likely to be useful.

                                                                 The ADLER32 algorithm is defined in RFC1950.

                                                                 CRC32 is defined in ITU-T X.244, Annex D, pp. 144-145 / ISO 8073. */
        uint64_t reserved_96_111       : 16;
        uint64_t historylength         : 16; /**< [127:112] With compression, history bytes can be prepended in the input data stream
                                                                 before the bytes that are actually to be compressed. These history bytes
                                                                 are generally the (uncompressed) file input bytes immediately preceding the file
                                                                 bytes being compressed. However, it is also possible to pass in a preset dictionary at
                                                                 the beginning of the file (which will be followed by the first bytes of the file).
                                                                 [HISTORYLENGTH] must never exceed ZIP_CONSTANTS[DEPTH].  [HISTORYLENGTH] must never
                                                                 exceed the sum of the preset dictionary size plus the number of bytes previously
                                                                 processed in the (uncompressed) input data stream for the file. The supplied history
                                                                 bytes must exactly match the bytes previously processed in the (uncompressed) input
                                                                 data stream for the file, preceded by the preset dictionary, if necessary.
                                                                 [HISTORYLENGTH] must never exceed 2048 with LZS. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t ctx_ptr_addr          : 64; /**< [191:128] Decompression context pointer address (ZIP_ZPTR_S format address word definition).
                                                                 The address must be 16-byte aligned.  If 0x0 and [OP] = DECOMP, behavior is unpredictable. */
#else /* Word 2 - Little Endian */
        uint64_t ctx_ptr_addr          : 64; /**< [191:128] Decompression context pointer address (ZIP_ZPTR_S format address word definition).
                                                                 The address must be 16-byte aligned.  If 0x0 and [OP] = DECOMP, behavior is unpredictable. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t ctx_ptr_ctl           : 64; /**< [255:192] Decompression context pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[LENGTH] = 0 (2048 bytes implied). */
#else /* Word 3 - Little Endian */
        uint64_t ctx_ptr_ctl           : 64; /**< [255:192] Decompression context pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[LENGTH] = 0 (2048 bytes implied). */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t his_ptr_addr          : 64; /**< [319:256] Decompression history pointer address (ZIP_ZPTR_S format address word definition).
                                                                 If 0x0 and [OP] = DECOMP, behavior is unpredictable. */
#else /* Word 4 - Little Endian */
        uint64_t his_ptr_addr          : 64; /**< [319:256] Decompression history pointer address (ZIP_ZPTR_S format address word definition).
                                                                 If 0x0 and [OP] = DECOMP, behavior is unpredictable. */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t his_ptr_ctl           : 64; /**< [383:320] Decompression history pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[FW] = 0. ZIP_INST_S[HG] must be set for history gather mode. */
#else /* Word 5 - Little Endian */
        uint64_t his_ptr_ctl           : 64; /**< [383:320] Decompression history pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[FW] = 0. ZIP_INST_S[HG] must be set for history gather mode. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t inp_ptr_addr          : 64; /**< [447:384] Input and compression history pointer address (ZIP_ZPTR_S format address word definition).
                                                                 Behavior is unpredictable if the address is 0x0. */
#else /* Word 6 - Little Endian */
        uint64_t inp_ptr_addr          : 64; /**< [447:384] Input and compression history pointer address (ZIP_ZPTR_S format address word definition).
                                                                 Behavior is unpredictable if the address is 0x0. */
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t inp_ptr_ctl           : 64; /**< [511:448] Input and compression history pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[FW] = 0. ZIP_INST_S[DG] must be set for input gather mode. */
#else /* Word 7 - Little Endian */
        uint64_t inp_ptr_ctl           : 64; /**< [511:448] Input and compression history pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[FW] = 0. ZIP_INST_S[DG] must be set for input gather mode. */
#endif /* Word 7 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 8 - Big Endian */
        uint64_t out_ptr_addr          : 64; /**< [575:512] Output pointer address  (ZIP_ZPTR_S format address word definition).
                                                                 Points to the location where the output data will be written by the ZIP coprocessor for
                                                                 this invocation.  Behavior is unpredictable if the address is 0x0. */
#else /* Word 8 - Little Endian */
        uint64_t out_ptr_addr          : 64; /**< [575:512] Output pointer address  (ZIP_ZPTR_S format address word definition).
                                                                 Points to the location where the output data will be written by the ZIP coprocessor for
                                                                 this invocation.  Behavior is unpredictable if the address is 0x0. */
#endif /* Word 8 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 9 - Big Endian */
        uint64_t out_ptr_ctl           : 64; /**< [639:576] Output pointer control (ZIP_ZPTR_S format control word definition).  [DS] must be set
                                                                 for output scatter mode. */
#else /* Word 9 - Little Endian */
        uint64_t out_ptr_ctl           : 64; /**< [639:576] Output pointer control (ZIP_ZPTR_S format control word definition).  [DS] must be set
                                                                 for output scatter mode. */
#endif /* Word 9 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 10 - Big Endian */
        uint64_t res_ptr_addr          : 64; /**< [703:640] Result pointer address (ZIP_ZPTR_S format address word definition).  If
                                                                 ZIP_INST_S[HALG]=NONE, the address must be 32-byte aligned.  Otherwise, the address must
                                                                 be 64-byte aligned.  Behavior is unpredictable if the address is 0x0. */
#else /* Word 10 - Little Endian */
        uint64_t res_ptr_addr          : 64; /**< [703:640] Result pointer address (ZIP_ZPTR_S format address word definition).  If
                                                                 ZIP_INST_S[HALG]=NONE, the address must be 32-byte aligned.  Otherwise, the address must
                                                                 be 64-byte aligned.  Behavior is unpredictable if the address is 0x0. */
#endif /* Word 10 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 11 - Big Endian */
        uint64_t res_ptr_ctl           : 64; /**< [767:704] Result pointer control (ZIP_ZPTR_S format control word definition).

                                                                 Inside this ZIP_ZPTR_S:
                                                                   * ZIP_ZPTR_S[FW] can be either 0 or 1.
                                                                   * ZIP_ZPTR_S[NC] can be either 0 or 1.
                                                                   * ZIP_ZPTR_S[LENGTH] must be 0. (24-bytes is implied for non-hash operations, and
                                                                     64-bytes is implied otherwise). */
#else /* Word 11 - Little Endian */
        uint64_t res_ptr_ctl           : 64; /**< [767:704] Result pointer control (ZIP_ZPTR_S format control word definition).

                                                                 Inside this ZIP_ZPTR_S:
                                                                   * ZIP_ZPTR_S[FW] can be either 0 or 1.
                                                                   * ZIP_ZPTR_S[NC] can be either 0 or 1.
                                                                   * ZIP_ZPTR_S[LENGTH] must be 0. (24-bytes is implied for non-hash operations, and
                                                                     64-bytes is implied otherwise). */
#endif /* Word 11 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 12 - Big Endian */
        uint64_t reserved_812_831      : 20;
        uint64_t ggrp                  : 10; /**< [811:802] If [WQ_PTR] is nonzero, the SSO guest-group to use when the ZIP coprocessor submits work
                                                                 to the SSO.  For the SSO to not discard the add-work request, SSO_PF_MAP() must map [GGRP]
                                                                 and the corresponding queue's ZIP_PF_QUE()_GMCTL[GMID] as valid. */
        uint64_t tt                    : 2;  /**< [801:800] If [WQ_PTR] is nonzero, the SSO tag type to use when the ZIP coprocessor submits work to the SSO. */
        uint64_t tag                   : 32; /**< [799:768] If [WQ_PTR] is nonzero, the SSO tag to use when the ZIP coprocessor submits work to the SSO. */
#else /* Word 12 - Little Endian */
        uint64_t tag                   : 32; /**< [799:768] If [WQ_PTR] is nonzero, the SSO tag to use when the ZIP coprocessor submits work to the SSO. */
        uint64_t tt                    : 2;  /**< [801:800] If [WQ_PTR] is nonzero, the SSO tag type to use when the ZIP coprocessor submits work to the SSO. */
        uint64_t ggrp                  : 10; /**< [811:802] If [WQ_PTR] is nonzero, the SSO guest-group to use when the ZIP coprocessor submits work
                                                                 to the SSO.  For the SSO to not discard the add-work request, SSO_PF_MAP() must map [GGRP]
                                                                 and the corresponding queue's ZIP_PF_QUE()_GMCTL[GMID] as valid. */
        uint64_t reserved_812_831      : 20;
#endif /* Word 12 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 13 - Big Endian */
        uint64_t wq_ptr                : 64; /**< [895:832] If [WQ_PTR] is nonzero, it is a pointer to a work-queue entry that the ZIP coprocessor
                                                                 uses to submit work to the SSO after all context, output data, and result write
                                                                 operations are visible to other CNXXXX units and the cores.

                                                                 Bits \<2:0\> must be zero.  Bits \<63:49\> are ignored by hardware; software should
                                                                 use a sign-extended bit \<48\> for forward compatibility.

                                                                 Internal:
                                                                 Bits \<63:49\>, \<2:0\> are ignored by hardware, treated as always 0x0. */
#else /* Word 13 - Little Endian */
        uint64_t wq_ptr                : 64; /**< [895:832] If [WQ_PTR] is nonzero, it is a pointer to a work-queue entry that the ZIP coprocessor
                                                                 uses to submit work to the SSO after all context, output data, and result write
                                                                 operations are visible to other CNXXXX units and the cores.

                                                                 Bits \<2:0\> must be zero.  Bits \<63:49\> are ignored by hardware; software should
                                                                 use a sign-extended bit \<48\> for forward compatibility.

                                                                 Internal:
                                                                 Bits \<63:49\>, \<2:0\> are ignored by hardware, treated as always 0x0. */
#endif /* Word 13 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 14 - Big Endian */
        uint64_t reserved_896_959      : 64;
#else /* Word 14 - Little Endian */
        uint64_t reserved_896_959      : 64;
#endif /* Word 14 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 15 - Big Endian */
        uint64_t hash_ptr              : 64; /**< [1023:960] Hash structure (ZIP_HASH_S) pointer. Bits \<6:0\> must be zero.
                                                                 Bits \<63:49\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<48\> for forward compatibility.

                                                                 If [HALG] = 0x0 (NONE), must be 0x0.

                                                                 If [HALG] = ZIP_HASH_ALG_E::SHA1/SHA256, [HASH_PTR] points to the IOVA of a ZIP_HASH_S,
                                                                 from which ZIP may read to obtain the initial hash state or hash context.  An initial hash
                                                                 state is read if [BF] and [IV] are set.  The hash context is read if [BF] is not set.  If
                                                                 [HASH_PTR] is 0x0, and [HALG] is not NONE, and [BF] and [IV] are both set or [BF] is not
                                                                 set, behavior is unpredictable.

                                                                 If [HALG] = ZIP_HASH_ALG_E::SHA1/SHA256 and [HMIF] is set, [HASH_PTR] points to the
                                                                 IOVA of a ZIP_HASH_S, which ZIP will write at the end of this instruction, and may be
                                                                 used by subsequent instructions to continue hashing the subsequent chunk of the same file.

                                                                 If [HASH_PTR] is 0x0, and [HALG] is not NONE, and [HMIF] is set, behavior is
                                                                 unpredictable.

                                                                 Internal:
                                                                 Bits \<63:49\>, \<6:0\> are ignored by hardware, treated as always 0x0. */
#else /* Word 15 - Little Endian */
        uint64_t hash_ptr              : 64; /**< [1023:960] Hash structure (ZIP_HASH_S) pointer. Bits \<6:0\> must be zero.
                                                                 Bits \<63:49\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<48\> for forward compatibility.

                                                                 If [HALG] = 0x0 (NONE), must be 0x0.

                                                                 If [HALG] = ZIP_HASH_ALG_E::SHA1/SHA256, [HASH_PTR] points to the IOVA of a ZIP_HASH_S,
                                                                 from which ZIP may read to obtain the initial hash state or hash context.  An initial hash
                                                                 state is read if [BF] and [IV] are set.  The hash context is read if [BF] is not set.  If
                                                                 [HASH_PTR] is 0x0, and [HALG] is not NONE, and [BF] and [IV] are both set or [BF] is not
                                                                 set, behavior is unpredictable.

                                                                 If [HALG] = ZIP_HASH_ALG_E::SHA1/SHA256 and [HMIF] is set, [HASH_PTR] points to the
                                                                 IOVA of a ZIP_HASH_S, which ZIP will write at the end of this instruction, and may be
                                                                 used by subsequent instructions to continue hashing the subsequent chunk of the same file.

                                                                 If [HASH_PTR] is 0x0, and [HALG] is not NONE, and [HMIF] is set, behavior is
                                                                 unpredictable.

                                                                 Internal:
                                                                 Bits \<63:49\>, \<6:0\> are ignored by hardware, treated as always 0x0. */
#endif /* Word 15 - End */
    } s;
    /* struct cavm_zip_inst_s_s cn8; */
    struct cavm_zip_inst_s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t doneint               : 1;  /**< [ 63: 63] Done interrupt. When [DONEINT] is set and the instruction completes,
                                                                 ZIP_VQ()_DONE[DONE] will be incremented. */
        uint64_t reserved_56_62        : 7;
        uint64_t totaloutputlength     : 24; /**< [ 55: 32] Indicates the maximum number of output-stream bytes that can be written.
                                                                 [TOTALOUTPUTLENGTH] must exactly match the number of bytes indicated by the output
                                                                 pointer (either by ZIP_ZPTR_S[LENGTH] directly if [DS] = 0, or indirectly if [DS] = 1). */
        uint64_t reserved_27_31        : 5;
        uint64_t exn                   : 3;  /**< [ 26: 24] Number of bits produced beyond the last output byte written by the prior ZIP
                                                                 coprocessor invocation.  See [EXBITS]. */
        uint64_t iv                    : 1;  /**< [ 23: 23] Initial values for hashing.
                                                                 0 = If hashing is performed, the initial values start a new hash, using the
                                                                 algorithm-specific initial values specified in ZIP_HASH_ALG_E.
                                                                 1 = If hashing is performed, hash initial values and states are loaded from
                                                                 the ZIP_HASH_S structure pointed to by [HASH_PTR].

                                                                 Must be clear when [HALG] = 0x0 (NONE), or [BF] is clear. */
        uint64_t exbits                : 7;  /**< [ 22: 16] [EXN], [EXBITS] are the previously-generated compressed bits beyond the last
                                                                 compressed byte written for the file. These bits are required context for partial-file
                                                                 processing because the ZIP compression algorithm produces a compressed bit
                                                                 stream, but the output stream is in bytes.

                                                                 For compression, when [BF] = 1, [EXN], [EXBITS] must be 0x0.
                                                                 For compression, when [BF] = 0, [EXN], [EXBITS] are typically equal to the
                                                                 ZIP_ZRES_S[EXN] and ZIP_ZRES_S[EXBITS] from the previous ZIP compression coprocessor
                                                                 invocation for the file. (If software instead inserts its own blocks in the compressed
                                                                 output stream between ZIP compression coprocessor invocations, [EXN], [EXBITS] will
                                                                 instead be the result after the last software insertion.)

                                                                 [EXBITS] contains the extra bits. Bit \<0\> contains the first extra bit, \<1\> the
                                                                 second extra bit, etc. All unused [EXBITS] bits must be 0.

                                                                 For decompression, [EXN], [EXBITS] must be 0x0. */
        uint64_t hmif                  : 1;  /**< [ 15: 15] Hash more-in-file (i.e. not end-of-file).
                                                                 0 = If hashing is performed, this is the final block in the file.  Hash results will be
                                                                 stored in ZIP_ZRES_S.
                                                                 1 = If hashing is performed, additional blocks will follow in this file.  Intermediate
                                                                 state will be stored in the ZIP_HASH_S structure pointed to by [HASH_PTR].

                                                                 If [HALG] = 0x0 (NONE), [HMIF] must be clear. */
        uint64_t halg                  : 3;  /**< [ 14: 12] Hash algorithm and enable. Enumerated by ZIP_HASH_ALG_E. */
        uint64_t sf                    : 1;  /**< [ 11: 11] Sync flush. When set, enables SYNC FLUSH functionality.

                                                                 For DEFLATE compression, [SF] forces ZIP hardware to append a zero-length nocompress
                                                                 block to the end of the partial compressed data stream. This forces the partial compressed
                                                                 stream to be byte-aligned. This grows the output by 35-39 bits.  [SF] must not be set when
                                                                 [EF] is set. ZIP_ZRES_S[EXN,EXBITS] will always be 0x0 when [SF] is set.

                                                                 For LZS compression, [SF] must always be set whenever [EF] is clear. ZIP hardware always
                                                                 inserts an end-of-block marker at the end of the partial compressed data stream. This
                                                                 forces the partial compressed stream to be byte-aligned. [SF] must not be set when [EF]
                                                                 is set.  ZIP_ZRES_S[EXN,EXBITS] will always be 0x0.

                                                                 For decompression, [SF] should always be set. */
        uint64_t ss                    : 2;  /**< [ 10:  9] Compression speed/storage.
                                                                 Selects the ZIP compression engine speed, at the expense of the compression ratio.

                                                                 For compression:
                                                                 0x0 = best quality, slowest speed.
                                                                 0x2 = lower quality, faster speed.
                                                                 0x1 = medium quality, medium speed.
                                                                 0x3 = lowest quality, best speed.

                                                                 For decompression, [SS] must be 0x0. */
        uint64_t cc                    : 2;  /**< [  8:  7] Compression coding. During a compression (i.e. ZIP_OP_E::COMP), selects
                                                                 DEFLATE or LZS and more. Enumerated by ZIP_CC_E. */
        uint64_t ef                    : 1;  /**< [  6:  6] End of input data. Set when the end of the input-data stream ends a file.

                                                                 For compression, if [EF] = 1, the ZIP engine always marks the last output block
                                                                 to be final. (The extra bits are zero-extended and written out as an
                                                                 output-stream byte.)

                                                                 For decompression, it is an error if [EF] = 1 and the ZIP coprocessor does not
                                                                 complete decompression of all blocks before it exhausts the input compressed
                                                                 data stream (ZIP_ZRES_S[COMPCODE] = ZIP_COMP_E::ITRUNC in this case.). It is not
                                                                 an error if [EF] = 0 when the ZIP coprocessor completes decompression of all
                                                                 blocks in the file. */
        uint64_t bf                    : 1;  /**< [  5:  5] Beginning of file. Set when the beginning of the (non-history) input stream starts a
                                                                 file.

                                                                 For compression:
                                                                 0 = first byte of input data is not the beginning of the file.
                                                                 1 = first byte of input data (after history data or not) is the beginning of the file.
                                                                 Note that in the compress case when [HISTORYLENGTH] is nonzero, the
                                                                 beginning of the input data stream is history data. Regardless of whether history
                                                                 data is present for a compress operation, [BF] should indicate whether the first non-
                                                                 history byte (i.e. the byte at position [HISTORYLENGTH] in the input data stream) is the
                                                                 first byte of the file.

                                                                 For decompression:
                                                                 0 = not the beginning of the file, read context from memory at [CTX_PTR_ADDR].
                                                                 1 = beginning of the file, create a new context.

                                                                 For hash (SHA1/SHA256):
                                                                 0 = not the beginning of the file, read hash context from ZIP_HASH_S structure in memory
                                                                 at [HASH_PTR].
                                                                 1 = beginning of the file, load IVs from ZIP_HASH_S structure in memory at [HASH_PTR] if
                                                                 ZIP_INST_S[IV] is set, read hash header text bytes (up to 64 bytes) from ZIP_HASH_S
                                                                 structure in memory at [HASH_PTR] if ZIP_HASH_S[PREVLEN] is nonzero, and create a new
                                                                 context. */
        uint64_t op                    : 2;  /**< [  4:  3] Compression/decompression operation. Enumerated by ZIP_OP_E. */
        uint64_t ds                    : 1;  /**< [  2:  2] Data scatter:
                                                                 1 = [OUT_PTR_ADDR] points to a list of scatter pointers that are read
                                                                 by the ZIP coprocessor to determine the locations to write the output data.
                                                                 0 = [OUT_PTR_ADDR] points directly at the location to write the output data.

                                                                 If [DS] = 1, the [OUT_PTR_CTL]'s LENGTH field, indicating the number of pointers
                                                                 in the output scatter list, must be at least 0x2. */
        uint64_t dg                    : 1;  /**< [  1:  1] Data gather:
                                                                 1 = [INP_PTR_ADDR] (the input and compression history pointer) points to a gather list of
                                                                 pointers that are read by the ZIP coprocessor to locate the actual history/input data.
                                                                 0 = [INP_PTR_ADDR] points directly at the actual history/input data.

                                                                 If [DG] = 1, the [INP_PTR_CTL]'s LENGTH field, indicating the number of pointers
                                                                 in the input and compression history gather list, must be at least 0x2. */
        uint64_t hg                    : 1;  /**< [  0:  0] History gather:
                                                                 1 = [HIS_PTR_ADDR] points to a gather list of pointers that are read by the
                                                                 ZIP coprocessor to locate the actual history data.
                                                                 0 = [HIS_PTR_ADDR] points directly at the actual history data. [HG] must be zero for
                                                                 a compression operation.

                                                                 If [HG] = 1, history data must be present for the decompression operation, and the
                                                                 [HIS_PTR_ADDR]'s LENGTH field, indicating the number of pointers in the
                                                                 decompression history gather list, must be at least 0x2. */
#else /* Word 0 - Little Endian */
        uint64_t hg                    : 1;  /**< [  0:  0] History gather:
                                                                 1 = [HIS_PTR_ADDR] points to a gather list of pointers that are read by the
                                                                 ZIP coprocessor to locate the actual history data.
                                                                 0 = [HIS_PTR_ADDR] points directly at the actual history data. [HG] must be zero for
                                                                 a compression operation.

                                                                 If [HG] = 1, history data must be present for the decompression operation, and the
                                                                 [HIS_PTR_ADDR]'s LENGTH field, indicating the number of pointers in the
                                                                 decompression history gather list, must be at least 0x2. */
        uint64_t dg                    : 1;  /**< [  1:  1] Data gather:
                                                                 1 = [INP_PTR_ADDR] (the input and compression history pointer) points to a gather list of
                                                                 pointers that are read by the ZIP coprocessor to locate the actual history/input data.
                                                                 0 = [INP_PTR_ADDR] points directly at the actual history/input data.

                                                                 If [DG] = 1, the [INP_PTR_CTL]'s LENGTH field, indicating the number of pointers
                                                                 in the input and compression history gather list, must be at least 0x2. */
        uint64_t ds                    : 1;  /**< [  2:  2] Data scatter:
                                                                 1 = [OUT_PTR_ADDR] points to a list of scatter pointers that are read
                                                                 by the ZIP coprocessor to determine the locations to write the output data.
                                                                 0 = [OUT_PTR_ADDR] points directly at the location to write the output data.

                                                                 If [DS] = 1, the [OUT_PTR_CTL]'s LENGTH field, indicating the number of pointers
                                                                 in the output scatter list, must be at least 0x2. */
        uint64_t op                    : 2;  /**< [  4:  3] Compression/decompression operation. Enumerated by ZIP_OP_E. */
        uint64_t bf                    : 1;  /**< [  5:  5] Beginning of file. Set when the beginning of the (non-history) input stream starts a
                                                                 file.

                                                                 For compression:
                                                                 0 = first byte of input data is not the beginning of the file.
                                                                 1 = first byte of input data (after history data or not) is the beginning of the file.
                                                                 Note that in the compress case when [HISTORYLENGTH] is nonzero, the
                                                                 beginning of the input data stream is history data. Regardless of whether history
                                                                 data is present for a compress operation, [BF] should indicate whether the first non-
                                                                 history byte (i.e. the byte at position [HISTORYLENGTH] in the input data stream) is the
                                                                 first byte of the file.

                                                                 For decompression:
                                                                 0 = not the beginning of the file, read context from memory at [CTX_PTR_ADDR].
                                                                 1 = beginning of the file, create a new context.

                                                                 For hash (SHA1/SHA256):
                                                                 0 = not the beginning of the file, read hash context from ZIP_HASH_S structure in memory
                                                                 at [HASH_PTR].
                                                                 1 = beginning of the file, load IVs from ZIP_HASH_S structure in memory at [HASH_PTR] if
                                                                 ZIP_INST_S[IV] is set, read hash header text bytes (up to 64 bytes) from ZIP_HASH_S
                                                                 structure in memory at [HASH_PTR] if ZIP_HASH_S[PREVLEN] is nonzero, and create a new
                                                                 context. */
        uint64_t ef                    : 1;  /**< [  6:  6] End of input data. Set when the end of the input-data stream ends a file.

                                                                 For compression, if [EF] = 1, the ZIP engine always marks the last output block
                                                                 to be final. (The extra bits are zero-extended and written out as an
                                                                 output-stream byte.)

                                                                 For decompression, it is an error if [EF] = 1 and the ZIP coprocessor does not
                                                                 complete decompression of all blocks before it exhausts the input compressed
                                                                 data stream (ZIP_ZRES_S[COMPCODE] = ZIP_COMP_E::ITRUNC in this case.). It is not
                                                                 an error if [EF] = 0 when the ZIP coprocessor completes decompression of all
                                                                 blocks in the file. */
        uint64_t cc                    : 2;  /**< [  8:  7] Compression coding. During a compression (i.e. ZIP_OP_E::COMP), selects
                                                                 DEFLATE or LZS and more. Enumerated by ZIP_CC_E. */
        uint64_t ss                    : 2;  /**< [ 10:  9] Compression speed/storage.
                                                                 Selects the ZIP compression engine speed, at the expense of the compression ratio.

                                                                 For compression:
                                                                 0x0 = best quality, slowest speed.
                                                                 0x2 = lower quality, faster speed.
                                                                 0x1 = medium quality, medium speed.
                                                                 0x3 = lowest quality, best speed.

                                                                 For decompression, [SS] must be 0x0. */
        uint64_t sf                    : 1;  /**< [ 11: 11] Sync flush. When set, enables SYNC FLUSH functionality.

                                                                 For DEFLATE compression, [SF] forces ZIP hardware to append a zero-length nocompress
                                                                 block to the end of the partial compressed data stream. This forces the partial compressed
                                                                 stream to be byte-aligned. This grows the output by 35-39 bits.  [SF] must not be set when
                                                                 [EF] is set. ZIP_ZRES_S[EXN,EXBITS] will always be 0x0 when [SF] is set.

                                                                 For LZS compression, [SF] must always be set whenever [EF] is clear. ZIP hardware always
                                                                 inserts an end-of-block marker at the end of the partial compressed data stream. This
                                                                 forces the partial compressed stream to be byte-aligned. [SF] must not be set when [EF]
                                                                 is set.  ZIP_ZRES_S[EXN,EXBITS] will always be 0x0.

                                                                 For decompression, [SF] should always be set. */
        uint64_t halg                  : 3;  /**< [ 14: 12] Hash algorithm and enable. Enumerated by ZIP_HASH_ALG_E. */
        uint64_t hmif                  : 1;  /**< [ 15: 15] Hash more-in-file (i.e. not end-of-file).
                                                                 0 = If hashing is performed, this is the final block in the file.  Hash results will be
                                                                 stored in ZIP_ZRES_S.
                                                                 1 = If hashing is performed, additional blocks will follow in this file.  Intermediate
                                                                 state will be stored in the ZIP_HASH_S structure pointed to by [HASH_PTR].

                                                                 If [HALG] = 0x0 (NONE), [HMIF] must be clear. */
        uint64_t exbits                : 7;  /**< [ 22: 16] [EXN], [EXBITS] are the previously-generated compressed bits beyond the last
                                                                 compressed byte written for the file. These bits are required context for partial-file
                                                                 processing because the ZIP compression algorithm produces a compressed bit
                                                                 stream, but the output stream is in bytes.

                                                                 For compression, when [BF] = 1, [EXN], [EXBITS] must be 0x0.
                                                                 For compression, when [BF] = 0, [EXN], [EXBITS] are typically equal to the
                                                                 ZIP_ZRES_S[EXN] and ZIP_ZRES_S[EXBITS] from the previous ZIP compression coprocessor
                                                                 invocation for the file. (If software instead inserts its own blocks in the compressed
                                                                 output stream between ZIP compression coprocessor invocations, [EXN], [EXBITS] will
                                                                 instead be the result after the last software insertion.)

                                                                 [EXBITS] contains the extra bits. Bit \<0\> contains the first extra bit, \<1\> the
                                                                 second extra bit, etc. All unused [EXBITS] bits must be 0.

                                                                 For decompression, [EXN], [EXBITS] must be 0x0. */
        uint64_t iv                    : 1;  /**< [ 23: 23] Initial values for hashing.
                                                                 0 = If hashing is performed, the initial values start a new hash, using the
                                                                 algorithm-specific initial values specified in ZIP_HASH_ALG_E.
                                                                 1 = If hashing is performed, hash initial values and states are loaded from
                                                                 the ZIP_HASH_S structure pointed to by [HASH_PTR].

                                                                 Must be clear when [HALG] = 0x0 (NONE), or [BF] is clear. */
        uint64_t exn                   : 3;  /**< [ 26: 24] Number of bits produced beyond the last output byte written by the prior ZIP
                                                                 coprocessor invocation.  See [EXBITS]. */
        uint64_t reserved_27_31        : 5;
        uint64_t totaloutputlength     : 24; /**< [ 55: 32] Indicates the maximum number of output-stream bytes that can be written.
                                                                 [TOTALOUTPUTLENGTH] must exactly match the number of bytes indicated by the output
                                                                 pointer (either by ZIP_ZPTR_S[LENGTH] directly if [DS] = 0, or indirectly if [DS] = 1). */
        uint64_t reserved_56_62        : 7;
        uint64_t doneint               : 1;  /**< [ 63: 63] Done interrupt. When [DONEINT] is set and the instruction completes,
                                                                 ZIP_VQ()_DONE[DONE] will be incremented. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t historylength         : 16; /**< [127:112] With compression, history bytes can be prepended in the input data stream
                                                                 before the bytes that are actually to be compressed. These history bytes
                                                                 are generally the (uncompressed) file input bytes immediately preceding the file
                                                                 bytes being compressed. However, it is also possible to pass in a preset dictionary at
                                                                 the beginning of the file (which will be followed by the first bytes of the file).
                                                                 [HISTORYLENGTH] must never exceed ZIP_CONSTANTS[DEPTH].  [HISTORYLENGTH] must never
                                                                 exceed the sum of the preset dictionary size plus the number of bytes previously
                                                                 processed in the (uncompressed) input data stream for the file. The supplied history
                                                                 bytes must exactly match the bytes previously processed in the (uncompressed) input
                                                                 data stream for the file, preceded by the preset dictionary, if necessary.
                                                                 [HISTORYLENGTH] must never exceed 2048 with LZS. */
        uint64_t reserved_96_111       : 16;
        uint64_t adlercrc32            : 32; /**< [ 95: 64] This 32-bit field represents the current state of the ADLER32 or CRC32 units. The
                                                                 hardware executes both ADLER32 and CRC32 on the processed uncompressed data
                                                                 bytes using this value as the current checksum. Though the hardware outputs both
                                                                 the ADLER32 and CRC32 results, [ADLERCRC32] is the only checksum input, so only
                                                                 one of the two outputs is likely to be useful.

                                                                 The ADLER32 algorithm is defined in RFC1950.

                                                                 CRC32 is defined in ITU-T X.244, Annex D, pp. 144-145 / ISO 8073. */
#else /* Word 1 - Little Endian */
        uint64_t adlercrc32            : 32; /**< [ 95: 64] This 32-bit field represents the current state of the ADLER32 or CRC32 units. The
                                                                 hardware executes both ADLER32 and CRC32 on the processed uncompressed data
                                                                 bytes using this value as the current checksum. Though the hardware outputs both
                                                                 the ADLER32 and CRC32 results, [ADLERCRC32] is the only checksum input, so only
                                                                 one of the two outputs is likely to be useful.

                                                                 The ADLER32 algorithm is defined in RFC1950.

                                                                 CRC32 is defined in ITU-T X.244, Annex D, pp. 144-145 / ISO 8073. */
        uint64_t reserved_96_111       : 16;
        uint64_t historylength         : 16; /**< [127:112] With compression, history bytes can be prepended in the input data stream
                                                                 before the bytes that are actually to be compressed. These history bytes
                                                                 are generally the (uncompressed) file input bytes immediately preceding the file
                                                                 bytes being compressed. However, it is also possible to pass in a preset dictionary at
                                                                 the beginning of the file (which will be followed by the first bytes of the file).
                                                                 [HISTORYLENGTH] must never exceed ZIP_CONSTANTS[DEPTH].  [HISTORYLENGTH] must never
                                                                 exceed the sum of the preset dictionary size plus the number of bytes previously
                                                                 processed in the (uncompressed) input data stream for the file. The supplied history
                                                                 bytes must exactly match the bytes previously processed in the (uncompressed) input
                                                                 data stream for the file, preceded by the preset dictionary, if necessary.
                                                                 [HISTORYLENGTH] must never exceed 2048 with LZS. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t ctx_ptr_addr          : 64; /**< [191:128] Decompression context pointer address (ZIP_ZPTR_S format address word definition).
                                                                 The address must be 16-byte aligned.  If 0x0 and [OP] = DECOMP, behavior is unpredictable. */
#else /* Word 2 - Little Endian */
        uint64_t ctx_ptr_addr          : 64; /**< [191:128] Decompression context pointer address (ZIP_ZPTR_S format address word definition).
                                                                 The address must be 16-byte aligned.  If 0x0 and [OP] = DECOMP, behavior is unpredictable. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t ctx_ptr_ctl           : 64; /**< [255:192] Decompression context pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[LENGTH] = 0 (2048 bytes implied). */
#else /* Word 3 - Little Endian */
        uint64_t ctx_ptr_ctl           : 64; /**< [255:192] Decompression context pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[LENGTH] = 0 (2048 bytes implied). */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t his_ptr_addr          : 64; /**< [319:256] Decompression history pointer address (ZIP_ZPTR_S format address word definition).
                                                                 If 0x0 and [OP] = DECOMP, behavior is unpredictable. */
#else /* Word 4 - Little Endian */
        uint64_t his_ptr_addr          : 64; /**< [319:256] Decompression history pointer address (ZIP_ZPTR_S format address word definition).
                                                                 If 0x0 and [OP] = DECOMP, behavior is unpredictable. */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t his_ptr_ctl           : 64; /**< [383:320] Decompression history pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[FW] = 0. ZIP_INST_S[HG] must be set for history gather mode. */
#else /* Word 5 - Little Endian */
        uint64_t his_ptr_ctl           : 64; /**< [383:320] Decompression history pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[FW] = 0. ZIP_INST_S[HG] must be set for history gather mode. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t inp_ptr_addr          : 64; /**< [447:384] Input and compression history pointer address (ZIP_ZPTR_S format address word definition).
                                                                 Behavior is unpredictable if the address is 0x0. */
#else /* Word 6 - Little Endian */
        uint64_t inp_ptr_addr          : 64; /**< [447:384] Input and compression history pointer address (ZIP_ZPTR_S format address word definition).
                                                                 Behavior is unpredictable if the address is 0x0. */
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t inp_ptr_ctl           : 64; /**< [511:448] Input and compression history pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[FW] = 0. ZIP_INST_S[DG] must be set for input gather mode. */
#else /* Word 7 - Little Endian */
        uint64_t inp_ptr_ctl           : 64; /**< [511:448] Input and compression history pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[FW] = 0. ZIP_INST_S[DG] must be set for input gather mode. */
#endif /* Word 7 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 8 - Big Endian */
        uint64_t out_ptr_addr          : 64; /**< [575:512] Output pointer address  (ZIP_ZPTR_S format address word definition).
                                                                 Points to the location where the output data will be written by the ZIP coprocessor for
                                                                 this invocation.  Behavior is unpredictable if the address is 0x0. */
#else /* Word 8 - Little Endian */
        uint64_t out_ptr_addr          : 64; /**< [575:512] Output pointer address  (ZIP_ZPTR_S format address word definition).
                                                                 Points to the location where the output data will be written by the ZIP coprocessor for
                                                                 this invocation.  Behavior is unpredictable if the address is 0x0. */
#endif /* Word 8 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 9 - Big Endian */
        uint64_t out_ptr_ctl           : 64; /**< [639:576] Output pointer control (ZIP_ZPTR_S format control word definition).  [DS] must be set
                                                                 for output scatter mode. */
#else /* Word 9 - Little Endian */
        uint64_t out_ptr_ctl           : 64; /**< [639:576] Output pointer control (ZIP_ZPTR_S format control word definition).  [DS] must be set
                                                                 for output scatter mode. */
#endif /* Word 9 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 10 - Big Endian */
        uint64_t res_ptr_addr          : 64; /**< [703:640] Result pointer address (ZIP_ZPTR_S format address word definition).  If
                                                                 ZIP_INST_S[HALG]=NONE, the address must be 32-byte aligned.  Otherwise, the address must
                                                                 be 64-byte aligned.  Behavior is unpredictable if the address is 0x0. */
#else /* Word 10 - Little Endian */
        uint64_t res_ptr_addr          : 64; /**< [703:640] Result pointer address (ZIP_ZPTR_S format address word definition).  If
                                                                 ZIP_INST_S[HALG]=NONE, the address must be 32-byte aligned.  Otherwise, the address must
                                                                 be 64-byte aligned.  Behavior is unpredictable if the address is 0x0. */
#endif /* Word 10 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 11 - Big Endian */
        uint64_t res_ptr_ctl           : 64; /**< [767:704] Result pointer control (ZIP_ZPTR_S format control word definition).

                                                                 Inside this ZIP_ZPTR_S:
                                                                   * ZIP_ZPTR_S[FW] can be either 0 or 1.
                                                                   * ZIP_ZPTR_S[NC] can be either 0 or 1.
                                                                   * ZIP_ZPTR_S[LENGTH] must be 0. (24-bytes is implied for non-hash operations, and
                                                                     64-bytes is implied otherwise). */
#else /* Word 11 - Little Endian */
        uint64_t res_ptr_ctl           : 64; /**< [767:704] Result pointer control (ZIP_ZPTR_S format control word definition).

                                                                 Inside this ZIP_ZPTR_S:
                                                                   * ZIP_ZPTR_S[FW] can be either 0 or 1.
                                                                   * ZIP_ZPTR_S[NC] can be either 0 or 1.
                                                                   * ZIP_ZPTR_S[LENGTH] must be 0. (24-bytes is implied for non-hash operations, and
                                                                     64-bytes is implied otherwise). */
#endif /* Word 11 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 12 - Big Endian */
        uint64_t reserved_812_831      : 20;
        uint64_t ggrp                  : 10; /**< [811:802] If [WQ_PTR] is nonzero, the SSO guest-group to use when the ZIP coprocessor
                                                                 submits work to the SSO. For the SSO to not discard the add-work request, the
                                                                 SSO must map [GGRP] as valid in the PF FUNC specified by the corresponding
                                                                 queue's ZIP_PF_QUE()_GMCTL[SSO_PF_FUNC]. */
        uint64_t tt                    : 2;  /**< [801:800] If [WQ_PTR] is nonzero, the SSO tag type to use when the ZIP coprocessor submits work to the SSO. */
        uint64_t tag                   : 32; /**< [799:768] If [WQ_PTR] is nonzero, the SSO tag to use when the ZIP coprocessor submits work to the SSO. */
#else /* Word 12 - Little Endian */
        uint64_t tag                   : 32; /**< [799:768] If [WQ_PTR] is nonzero, the SSO tag to use when the ZIP coprocessor submits work to the SSO. */
        uint64_t tt                    : 2;  /**< [801:800] If [WQ_PTR] is nonzero, the SSO tag type to use when the ZIP coprocessor submits work to the SSO. */
        uint64_t ggrp                  : 10; /**< [811:802] If [WQ_PTR] is nonzero, the SSO guest-group to use when the ZIP coprocessor
                                                                 submits work to the SSO. For the SSO to not discard the add-work request, the
                                                                 SSO must map [GGRP] as valid in the PF FUNC specified by the corresponding
                                                                 queue's ZIP_PF_QUE()_GMCTL[SSO_PF_FUNC]. */
        uint64_t reserved_812_831      : 20;
#endif /* Word 12 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 13 - Big Endian */
        uint64_t wq_ptr                : 64; /**< [895:832] If [WQ_PTR] is nonzero, it is a pointer to a work-queue entry that the ZIP coprocessor
                                                                 uses to submit work to the SSO after all context, output data, and result write
                                                                 operations are visible to other CNXXXX units and the cores.

                                                                 Bits \<2:0\> must be zero.  Bits \<63:53\> are ignored by hardware; software should
                                                                 use a sign-extended bit \<52\> for forward compatibility.

                                                                 Internal:
                                                                 Bits \<63:53\>, \<2:0\> are ignored by hardware, treated as always 0x0. */
#else /* Word 13 - Little Endian */
        uint64_t wq_ptr                : 64; /**< [895:832] If [WQ_PTR] is nonzero, it is a pointer to a work-queue entry that the ZIP coprocessor
                                                                 uses to submit work to the SSO after all context, output data, and result write
                                                                 operations are visible to other CNXXXX units and the cores.

                                                                 Bits \<2:0\> must be zero.  Bits \<63:53\> are ignored by hardware; software should
                                                                 use a sign-extended bit \<52\> for forward compatibility.

                                                                 Internal:
                                                                 Bits \<63:53\>, \<2:0\> are ignored by hardware, treated as always 0x0. */
#endif /* Word 13 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 14 - Big Endian */
        uint64_t reserved_896_959      : 64;
#else /* Word 14 - Little Endian */
        uint64_t reserved_896_959      : 64;
#endif /* Word 14 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 15 - Big Endian */
        uint64_t hash_ptr              : 64; /**< [1023:960] Hash structure (ZIP_HASH_S) pointer. Bits \<6:0\> must be zero.
                                                                 Bits \<63:53\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<52\> for forward compatibility.

                                                                 If [HALG] = 0x0 (NONE), must be 0x0.

                                                                 If [HALG] = ZIP_HASH_ALG_E::SHA1/SHA256, [HASH_PTR] points to the IOVA of a ZIP_HASH_S,
                                                                 from which ZIP may read to obtain the initial hash state or hash context.  An initial hash
                                                                 state is read if [BF] and [IV] are set.  The hash context is read if [BF] is not set.  If
                                                                 [HASH_PTR] is 0x0, and [HALG] is not NONE, and [BF] and [IV] are both set or [BF] is not
                                                                 set, behavior is unpredictable.

                                                                 If [HALG] = ZIP_HASH_ALG_E::SHA1/SHA256 and [HMIF] is set, [HASH_PTR] points to the
                                                                 IOVA of a ZIP_HASH_S, which ZIP will write at the end of this instruction, and may be
                                                                 used by subsequent instructions to continue hashing the subsequent chunk of the same file.

                                                                 If [HASH_PTR] is 0x0, and [HALG] is not NONE, and [HMIF] is set, behavior is
                                                                 unpredictable.

                                                                 Internal:
                                                                 Bits \<63:53\>, \<6:0\> are ignored by hardware, treated as always 0x0. */
#else /* Word 15 - Little Endian */
        uint64_t hash_ptr              : 64; /**< [1023:960] Hash structure (ZIP_HASH_S) pointer. Bits \<6:0\> must be zero.
                                                                 Bits \<63:53\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<52\> for forward compatibility.

                                                                 If [HALG] = 0x0 (NONE), must be 0x0.

                                                                 If [HALG] = ZIP_HASH_ALG_E::SHA1/SHA256, [HASH_PTR] points to the IOVA of a ZIP_HASH_S,
                                                                 from which ZIP may read to obtain the initial hash state or hash context.  An initial hash
                                                                 state is read if [BF] and [IV] are set.  The hash context is read if [BF] is not set.  If
                                                                 [HASH_PTR] is 0x0, and [HALG] is not NONE, and [BF] and [IV] are both set or [BF] is not
                                                                 set, behavior is unpredictable.

                                                                 If [HALG] = ZIP_HASH_ALG_E::SHA1/SHA256 and [HMIF] is set, [HASH_PTR] points to the
                                                                 IOVA of a ZIP_HASH_S, which ZIP will write at the end of this instruction, and may be
                                                                 used by subsequent instructions to continue hashing the subsequent chunk of the same file.

                                                                 If [HASH_PTR] is 0x0, and [HALG] is not NONE, and [HMIF] is set, behavior is
                                                                 unpredictable.

                                                                 Internal:
                                                                 Bits \<63:53\>, \<6:0\> are ignored by hardware, treated as always 0x0. */
#endif /* Word 15 - End */
    } cn9;
    /* struct cavm_zip_inst_s_cn9 cn96xx; */
    struct cavm_zip_inst_s_cn98xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t doneint               : 1;  /**< [ 63: 63] Done interrupt. When [DONEINT] is set and the instruction completes,
                                                                 ZIP()_VQ()_DONE[DONE] will be incremented. */
        uint64_t reserved_56_62        : 7;
        uint64_t totaloutputlength     : 24; /**< [ 55: 32] Indicates the maximum number of output-stream bytes that can be written.
                                                                 [TOTALOUTPUTLENGTH] must exactly match the number of bytes indicated by the output
                                                                 pointer (either by ZIP_ZPTR_S[LENGTH] directly if [DS] = 0, or indirectly if [DS] = 1). */
        uint64_t reserved_27_31        : 5;
        uint64_t exn                   : 3;  /**< [ 26: 24] Number of bits produced beyond the last output byte written by the prior ZIP
                                                                 coprocessor invocation.  See [EXBITS]. */
        uint64_t iv                    : 1;  /**< [ 23: 23] Initial values for hashing.
                                                                 0 = If hashing is performed, the initial values start a new hash, using the
                                                                 algorithm-specific initial values specified in ZIP_HASH_ALG_E.
                                                                 1 = If hashing is performed, hash initial values and states are loaded from
                                                                 the ZIP_HASH_S structure pointed to by [HASH_PTR].

                                                                 Must be clear when [HALG] = 0x0 (NONE), or [BF] is clear. */
        uint64_t exbits                : 7;  /**< [ 22: 16] [EXN], [EXBITS] are the previously-generated compressed bits beyond the last
                                                                 compressed byte written for the file. These bits are required context for partial-file
                                                                 processing because the ZIP compression algorithm produces a compressed bit
                                                                 stream, but the output stream is in bytes.

                                                                 For compression, when [BF] = 1, [EXN], [EXBITS] must be 0x0.
                                                                 For compression, when [BF] = 0, [EXN], [EXBITS] are typically equal to the
                                                                 ZIP_ZRES_S[EXN] and ZIP_ZRES_S[EXBITS] from the previous ZIP compression coprocessor
                                                                 invocation for the file. (If software instead inserts its own blocks in the compressed
                                                                 output stream between ZIP compression coprocessor invocations, [EXN], [EXBITS] will
                                                                 instead be the result after the last software insertion.)

                                                                 [EXBITS] contains the extra bits. Bit \<0\> contains the first extra bit, \<1\> the
                                                                 second extra bit, etc. All unused [EXBITS] bits must be 0.

                                                                 For decompression, [EXN], [EXBITS] must be 0x0. */
        uint64_t hmif                  : 1;  /**< [ 15: 15] Hash more-in-file (i.e. not end-of-file).
                                                                 0 = If hashing is performed, this is the final block in the file.  Hash results will be
                                                                 stored in ZIP_ZRES_S.
                                                                 1 = If hashing is performed, additional blocks will follow in this file.  Intermediate
                                                                 state will be stored in the ZIP_HASH_S structure pointed to by [HASH_PTR].

                                                                 If [HALG] = 0x0 (NONE), [HMIF] must be clear. */
        uint64_t halg                  : 3;  /**< [ 14: 12] Hash algorithm and enable. Enumerated by ZIP_HASH_ALG_E. */
        uint64_t sf                    : 1;  /**< [ 11: 11] Sync flush. When set, enables SYNC FLUSH functionality.

                                                                 For DEFLATE compression, [SF] forces ZIP hardware to append a zero-length nocompress
                                                                 block to the end of the partial compressed data stream. This forces the partial compressed
                                                                 stream to be byte-aligned. This grows the output by 35-39 bits.  [SF] must not be set when
                                                                 [EF] is set. ZIP_ZRES_S[EXN,EXBITS] will always be 0x0 when [SF] is set.

                                                                 For LZS compression, [SF] must always be set whenever [EF] is clear. ZIP hardware always
                                                                 inserts an end-of-block marker at the end of the partial compressed data stream. This
                                                                 forces the partial compressed stream to be byte-aligned. [SF] must not be set when [EF]
                                                                 is set.  ZIP_ZRES_S[EXN,EXBITS] will always be 0x0.

                                                                 For decompression, [SF] should always be set. */
        uint64_t ss                    : 2;  /**< [ 10:  9] Compression speed/storage.
                                                                 Selects the ZIP compression engine speed, at the expense of the compression ratio.

                                                                 For compression:
                                                                 0x0 = best quality, slowest speed.
                                                                 0x2 = lower quality, faster speed.
                                                                 0x1 = medium quality, medium speed.
                                                                 0x3 = lowest quality, best speed.

                                                                 For decompression, [SS] must be 0x0. */
        uint64_t cc                    : 2;  /**< [  8:  7] Compression coding. During a compression (i.e. ZIP_OP_E::COMP), selects
                                                                 DEFLATE or LZS and more. Enumerated by ZIP_CC_E. */
        uint64_t ef                    : 1;  /**< [  6:  6] End of input data. Set when the end of the input-data stream ends a file.

                                                                 For compression, if [EF] = 1, the ZIP engine always marks the last output block
                                                                 to be final. (The extra bits are zero-extended and written out as an
                                                                 output-stream byte.)

                                                                 For decompression, it is an error if [EF] = 1 and the ZIP coprocessor does not
                                                                 complete decompression of all blocks before it exhausts the input compressed
                                                                 data stream (ZIP_ZRES_S[COMPCODE] = ZIP_COMP_E::ITRUNC in this case.). It is not
                                                                 an error if [EF] = 0 when the ZIP coprocessor completes decompression of all
                                                                 blocks in the file. */
        uint64_t bf                    : 1;  /**< [  5:  5] Beginning of file. Set when the beginning of the (non-history) input stream starts a
                                                                 file.

                                                                 For compression:
                                                                 0 = first byte of input data is not the beginning of the file.
                                                                 1 = first byte of input data (after history data or not) is the beginning of the file.
                                                                 Note that in the compress case when [HISTORYLENGTH] is nonzero, the
                                                                 beginning of the input data stream is history data. Regardless of whether history
                                                                 data is present for a compress operation, [BF] should indicate whether the first non-
                                                                 history byte (i.e. the byte at position [HISTORYLENGTH] in the input data stream) is the
                                                                 first byte of the file.

                                                                 For decompression:
                                                                 0 = not the beginning of the file, read context from memory at [CTX_PTR_ADDR].
                                                                 1 = beginning of the file, create a new context.

                                                                 For hash (SHA1/SHA256):
                                                                 0 = not the beginning of the file, read hash context from ZIP_HASH_S structure in memory
                                                                 at [HASH_PTR].
                                                                 1 = beginning of the file, load IVs from ZIP_HASH_S structure in memory at [HASH_PTR] if
                                                                 ZIP_INST_S[IV] is set, read hash header text bytes (up to 64 bytes) from ZIP_HASH_S
                                                                 structure in memory at [HASH_PTR] if ZIP_HASH_S[PREVLEN] is nonzero, and create a new
                                                                 context. */
        uint64_t op                    : 2;  /**< [  4:  3] Compression/decompression operation. Enumerated by ZIP_OP_E. */
        uint64_t ds                    : 1;  /**< [  2:  2] Data scatter:
                                                                 1 = [OUT_PTR_ADDR] points to a list of scatter pointers that are read
                                                                 by the ZIP coprocessor to determine the locations to write the output data.
                                                                 0 = [OUT_PTR_ADDR] points directly at the location to write the output data.

                                                                 If [DS] = 1, the [OUT_PTR_CTL]'s LENGTH field, indicating the number of pointers
                                                                 in the output scatter list, must be at least 0x2. */
        uint64_t dg                    : 1;  /**< [  1:  1] Data gather:
                                                                 1 = [INP_PTR_ADDR] (the input and compression history pointer) points to a gather list of
                                                                 pointers that are read by the ZIP coprocessor to locate the actual history/input data.
                                                                 0 = [INP_PTR_ADDR] points directly at the actual history/input data.

                                                                 If [DG] = 1, the [INP_PTR_CTL]'s LENGTH field, indicating the number of pointers
                                                                 in the input and compression history gather list, must be at least 0x2. */
        uint64_t hg                    : 1;  /**< [  0:  0] History gather:
                                                                 1 = [HIS_PTR_ADDR] points to a gather list of pointers that are read by the
                                                                 ZIP coprocessor to locate the actual history data.
                                                                 0 = [HIS_PTR_ADDR] points directly at the actual history data. [HG] must be zero for
                                                                 a compression operation.

                                                                 If [HG] = 1, history data must be present for the decompression operation, and the
                                                                 [HIS_PTR_ADDR]'s LENGTH field, indicating the number of pointers in the
                                                                 decompression history gather list, must be at least 0x2. */
#else /* Word 0 - Little Endian */
        uint64_t hg                    : 1;  /**< [  0:  0] History gather:
                                                                 1 = [HIS_PTR_ADDR] points to a gather list of pointers that are read by the
                                                                 ZIP coprocessor to locate the actual history data.
                                                                 0 = [HIS_PTR_ADDR] points directly at the actual history data. [HG] must be zero for
                                                                 a compression operation.

                                                                 If [HG] = 1, history data must be present for the decompression operation, and the
                                                                 [HIS_PTR_ADDR]'s LENGTH field, indicating the number of pointers in the
                                                                 decompression history gather list, must be at least 0x2. */
        uint64_t dg                    : 1;  /**< [  1:  1] Data gather:
                                                                 1 = [INP_PTR_ADDR] (the input and compression history pointer) points to a gather list of
                                                                 pointers that are read by the ZIP coprocessor to locate the actual history/input data.
                                                                 0 = [INP_PTR_ADDR] points directly at the actual history/input data.

                                                                 If [DG] = 1, the [INP_PTR_CTL]'s LENGTH field, indicating the number of pointers
                                                                 in the input and compression history gather list, must be at least 0x2. */
        uint64_t ds                    : 1;  /**< [  2:  2] Data scatter:
                                                                 1 = [OUT_PTR_ADDR] points to a list of scatter pointers that are read
                                                                 by the ZIP coprocessor to determine the locations to write the output data.
                                                                 0 = [OUT_PTR_ADDR] points directly at the location to write the output data.

                                                                 If [DS] = 1, the [OUT_PTR_CTL]'s LENGTH field, indicating the number of pointers
                                                                 in the output scatter list, must be at least 0x2. */
        uint64_t op                    : 2;  /**< [  4:  3] Compression/decompression operation. Enumerated by ZIP_OP_E. */
        uint64_t bf                    : 1;  /**< [  5:  5] Beginning of file. Set when the beginning of the (non-history) input stream starts a
                                                                 file.

                                                                 For compression:
                                                                 0 = first byte of input data is not the beginning of the file.
                                                                 1 = first byte of input data (after history data or not) is the beginning of the file.
                                                                 Note that in the compress case when [HISTORYLENGTH] is nonzero, the
                                                                 beginning of the input data stream is history data. Regardless of whether history
                                                                 data is present for a compress operation, [BF] should indicate whether the first non-
                                                                 history byte (i.e. the byte at position [HISTORYLENGTH] in the input data stream) is the
                                                                 first byte of the file.

                                                                 For decompression:
                                                                 0 = not the beginning of the file, read context from memory at [CTX_PTR_ADDR].
                                                                 1 = beginning of the file, create a new context.

                                                                 For hash (SHA1/SHA256):
                                                                 0 = not the beginning of the file, read hash context from ZIP_HASH_S structure in memory
                                                                 at [HASH_PTR].
                                                                 1 = beginning of the file, load IVs from ZIP_HASH_S structure in memory at [HASH_PTR] if
                                                                 ZIP_INST_S[IV] is set, read hash header text bytes (up to 64 bytes) from ZIP_HASH_S
                                                                 structure in memory at [HASH_PTR] if ZIP_HASH_S[PREVLEN] is nonzero, and create a new
                                                                 context. */
        uint64_t ef                    : 1;  /**< [  6:  6] End of input data. Set when the end of the input-data stream ends a file.

                                                                 For compression, if [EF] = 1, the ZIP engine always marks the last output block
                                                                 to be final. (The extra bits are zero-extended and written out as an
                                                                 output-stream byte.)

                                                                 For decompression, it is an error if [EF] = 1 and the ZIP coprocessor does not
                                                                 complete decompression of all blocks before it exhausts the input compressed
                                                                 data stream (ZIP_ZRES_S[COMPCODE] = ZIP_COMP_E::ITRUNC in this case.). It is not
                                                                 an error if [EF] = 0 when the ZIP coprocessor completes decompression of all
                                                                 blocks in the file. */
        uint64_t cc                    : 2;  /**< [  8:  7] Compression coding. During a compression (i.e. ZIP_OP_E::COMP), selects
                                                                 DEFLATE or LZS and more. Enumerated by ZIP_CC_E. */
        uint64_t ss                    : 2;  /**< [ 10:  9] Compression speed/storage.
                                                                 Selects the ZIP compression engine speed, at the expense of the compression ratio.

                                                                 For compression:
                                                                 0x0 = best quality, slowest speed.
                                                                 0x2 = lower quality, faster speed.
                                                                 0x1 = medium quality, medium speed.
                                                                 0x3 = lowest quality, best speed.

                                                                 For decompression, [SS] must be 0x0. */
        uint64_t sf                    : 1;  /**< [ 11: 11] Sync flush. When set, enables SYNC FLUSH functionality.

                                                                 For DEFLATE compression, [SF] forces ZIP hardware to append a zero-length nocompress
                                                                 block to the end of the partial compressed data stream. This forces the partial compressed
                                                                 stream to be byte-aligned. This grows the output by 35-39 bits.  [SF] must not be set when
                                                                 [EF] is set. ZIP_ZRES_S[EXN,EXBITS] will always be 0x0 when [SF] is set.

                                                                 For LZS compression, [SF] must always be set whenever [EF] is clear. ZIP hardware always
                                                                 inserts an end-of-block marker at the end of the partial compressed data stream. This
                                                                 forces the partial compressed stream to be byte-aligned. [SF] must not be set when [EF]
                                                                 is set.  ZIP_ZRES_S[EXN,EXBITS] will always be 0x0.

                                                                 For decompression, [SF] should always be set. */
        uint64_t halg                  : 3;  /**< [ 14: 12] Hash algorithm and enable. Enumerated by ZIP_HASH_ALG_E. */
        uint64_t hmif                  : 1;  /**< [ 15: 15] Hash more-in-file (i.e. not end-of-file).
                                                                 0 = If hashing is performed, this is the final block in the file.  Hash results will be
                                                                 stored in ZIP_ZRES_S.
                                                                 1 = If hashing is performed, additional blocks will follow in this file.  Intermediate
                                                                 state will be stored in the ZIP_HASH_S structure pointed to by [HASH_PTR].

                                                                 If [HALG] = 0x0 (NONE), [HMIF] must be clear. */
        uint64_t exbits                : 7;  /**< [ 22: 16] [EXN], [EXBITS] are the previously-generated compressed bits beyond the last
                                                                 compressed byte written for the file. These bits are required context for partial-file
                                                                 processing because the ZIP compression algorithm produces a compressed bit
                                                                 stream, but the output stream is in bytes.

                                                                 For compression, when [BF] = 1, [EXN], [EXBITS] must be 0x0.
                                                                 For compression, when [BF] = 0, [EXN], [EXBITS] are typically equal to the
                                                                 ZIP_ZRES_S[EXN] and ZIP_ZRES_S[EXBITS] from the previous ZIP compression coprocessor
                                                                 invocation for the file. (If software instead inserts its own blocks in the compressed
                                                                 output stream between ZIP compression coprocessor invocations, [EXN], [EXBITS] will
                                                                 instead be the result after the last software insertion.)

                                                                 [EXBITS] contains the extra bits. Bit \<0\> contains the first extra bit, \<1\> the
                                                                 second extra bit, etc. All unused [EXBITS] bits must be 0.

                                                                 For decompression, [EXN], [EXBITS] must be 0x0. */
        uint64_t iv                    : 1;  /**< [ 23: 23] Initial values for hashing.
                                                                 0 = If hashing is performed, the initial values start a new hash, using the
                                                                 algorithm-specific initial values specified in ZIP_HASH_ALG_E.
                                                                 1 = If hashing is performed, hash initial values and states are loaded from
                                                                 the ZIP_HASH_S structure pointed to by [HASH_PTR].

                                                                 Must be clear when [HALG] = 0x0 (NONE), or [BF] is clear. */
        uint64_t exn                   : 3;  /**< [ 26: 24] Number of bits produced beyond the last output byte written by the prior ZIP
                                                                 coprocessor invocation.  See [EXBITS]. */
        uint64_t reserved_27_31        : 5;
        uint64_t totaloutputlength     : 24; /**< [ 55: 32] Indicates the maximum number of output-stream bytes that can be written.
                                                                 [TOTALOUTPUTLENGTH] must exactly match the number of bytes indicated by the output
                                                                 pointer (either by ZIP_ZPTR_S[LENGTH] directly if [DS] = 0, or indirectly if [DS] = 1). */
        uint64_t reserved_56_62        : 7;
        uint64_t doneint               : 1;  /**< [ 63: 63] Done interrupt. When [DONEINT] is set and the instruction completes,
                                                                 ZIP()_VQ()_DONE[DONE] will be incremented. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t historylength         : 16; /**< [127:112] With compression, history bytes can be prepended in the input data stream
                                                                 before the bytes that are actually to be compressed. These history bytes
                                                                 are generally the (uncompressed) file input bytes immediately preceding the file
                                                                 bytes being compressed. However, it is also possible to pass in a preset dictionary at
                                                                 the beginning of the file (which will be followed by the first bytes of the file).
                                                                 [HISTORYLENGTH] must never exceed ZIP()_CONSTANTS[DEPTH].  [HISTORYLENGTH] must never
                                                                 exceed the sum of the preset dictionary size plus the number of bytes previously
                                                                 processed in the (uncompressed) input data stream for the file. The supplied history
                                                                 bytes must exactly match the bytes previously processed in the (uncompressed) input
                                                                 data stream for the file, preceded by the preset dictionary, if necessary.
                                                                 [HISTORYLENGTH] must never exceed 2048 with LZS. */
        uint64_t reserved_96_111       : 16;
        uint64_t adlercrc32            : 32; /**< [ 95: 64] This 32-bit field represents the current state of the ADLER32 or CRC32 units. The
                                                                 hardware executes both ADLER32 and CRC32 on the processed uncompressed data
                                                                 bytes using this value as the current checksum. Though the hardware outputs both
                                                                 the ADLER32 and CRC32 results, [ADLERCRC32] is the only checksum input, so only
                                                                 one of the two outputs is likely to be useful.

                                                                 The ADLER32 algorithm is defined in RFC1950.

                                                                 CRC32 is defined in ITU-T X.244, Annex D, pp. 144-145 / ISO 8073. */
#else /* Word 1 - Little Endian */
        uint64_t adlercrc32            : 32; /**< [ 95: 64] This 32-bit field represents the current state of the ADLER32 or CRC32 units. The
                                                                 hardware executes both ADLER32 and CRC32 on the processed uncompressed data
                                                                 bytes using this value as the current checksum. Though the hardware outputs both
                                                                 the ADLER32 and CRC32 results, [ADLERCRC32] is the only checksum input, so only
                                                                 one of the two outputs is likely to be useful.

                                                                 The ADLER32 algorithm is defined in RFC1950.

                                                                 CRC32 is defined in ITU-T X.244, Annex D, pp. 144-145 / ISO 8073. */
        uint64_t reserved_96_111       : 16;
        uint64_t historylength         : 16; /**< [127:112] With compression, history bytes can be prepended in the input data stream
                                                                 before the bytes that are actually to be compressed. These history bytes
                                                                 are generally the (uncompressed) file input bytes immediately preceding the file
                                                                 bytes being compressed. However, it is also possible to pass in a preset dictionary at
                                                                 the beginning of the file (which will be followed by the first bytes of the file).
                                                                 [HISTORYLENGTH] must never exceed ZIP()_CONSTANTS[DEPTH].  [HISTORYLENGTH] must never
                                                                 exceed the sum of the preset dictionary size plus the number of bytes previously
                                                                 processed in the (uncompressed) input data stream for the file. The supplied history
                                                                 bytes must exactly match the bytes previously processed in the (uncompressed) input
                                                                 data stream for the file, preceded by the preset dictionary, if necessary.
                                                                 [HISTORYLENGTH] must never exceed 2048 with LZS. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t ctx_ptr_addr          : 64; /**< [191:128] Decompression context pointer address (ZIP_ZPTR_S format address word definition).
                                                                 The address must be 16-byte aligned.  If 0x0 and [OP] = DECOMP, behavior is unpredictable. */
#else /* Word 2 - Little Endian */
        uint64_t ctx_ptr_addr          : 64; /**< [191:128] Decompression context pointer address (ZIP_ZPTR_S format address word definition).
                                                                 The address must be 16-byte aligned.  If 0x0 and [OP] = DECOMP, behavior is unpredictable. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t ctx_ptr_ctl           : 64; /**< [255:192] Decompression context pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[LENGTH] = 0 (2048 bytes implied). */
#else /* Word 3 - Little Endian */
        uint64_t ctx_ptr_ctl           : 64; /**< [255:192] Decompression context pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[LENGTH] = 0 (2048 bytes implied). */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t his_ptr_addr          : 64; /**< [319:256] Decompression history pointer address (ZIP_ZPTR_S format address word definition).
                                                                 If 0x0 and [OP] = DECOMP, behavior is unpredictable. */
#else /* Word 4 - Little Endian */
        uint64_t his_ptr_addr          : 64; /**< [319:256] Decompression history pointer address (ZIP_ZPTR_S format address word definition).
                                                                 If 0x0 and [OP] = DECOMP, behavior is unpredictable. */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t his_ptr_ctl           : 64; /**< [383:320] Decompression history pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[FW] = 0. ZIP_INST_S[HG] must be set for history gather mode. */
#else /* Word 5 - Little Endian */
        uint64_t his_ptr_ctl           : 64; /**< [383:320] Decompression history pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[FW] = 0. ZIP_INST_S[HG] must be set for history gather mode. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t inp_ptr_addr          : 64; /**< [447:384] Input and compression history pointer address (ZIP_ZPTR_S format address word definition).
                                                                 Behavior is unpredictable if the address is 0x0. */
#else /* Word 6 - Little Endian */
        uint64_t inp_ptr_addr          : 64; /**< [447:384] Input and compression history pointer address (ZIP_ZPTR_S format address word definition).
                                                                 Behavior is unpredictable if the address is 0x0. */
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t inp_ptr_ctl           : 64; /**< [511:448] Input and compression history pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[FW] = 0. ZIP_INST_S[DG] must be set for input gather mode. */
#else /* Word 7 - Little Endian */
        uint64_t inp_ptr_ctl           : 64; /**< [511:448] Input and compression history pointer control (ZIP_ZPTR_S format control word definition).
                                                                 ZIP_ZPTR_S[FW] = 0. ZIP_INST_S[DG] must be set for input gather mode. */
#endif /* Word 7 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 8 - Big Endian */
        uint64_t out_ptr_addr          : 64; /**< [575:512] Output pointer address  (ZIP_ZPTR_S format address word definition).
                                                                 Points to the location where the output data will be written by the ZIP coprocessor for
                                                                 this invocation.  Behavior is unpredictable if the address is 0x0. */
#else /* Word 8 - Little Endian */
        uint64_t out_ptr_addr          : 64; /**< [575:512] Output pointer address  (ZIP_ZPTR_S format address word definition).
                                                                 Points to the location where the output data will be written by the ZIP coprocessor for
                                                                 this invocation.  Behavior is unpredictable if the address is 0x0. */
#endif /* Word 8 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 9 - Big Endian */
        uint64_t out_ptr_ctl           : 64; /**< [639:576] Output pointer control (ZIP_ZPTR_S format control word definition).  [DS] must be set
                                                                 for output scatter mode. */
#else /* Word 9 - Little Endian */
        uint64_t out_ptr_ctl           : 64; /**< [639:576] Output pointer control (ZIP_ZPTR_S format control word definition).  [DS] must be set
                                                                 for output scatter mode. */
#endif /* Word 9 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 10 - Big Endian */
        uint64_t res_ptr_addr          : 64; /**< [703:640] Result pointer address (ZIP_ZPTR_S format address word definition).  If
                                                                 ZIP_INST_S[HALG]=NONE, the address must be 32-byte aligned.  Otherwise, the address must
                                                                 be 64-byte aligned.  Behavior is unpredictable if the address is 0x0. */
#else /* Word 10 - Little Endian */
        uint64_t res_ptr_addr          : 64; /**< [703:640] Result pointer address (ZIP_ZPTR_S format address word definition).  If
                                                                 ZIP_INST_S[HALG]=NONE, the address must be 32-byte aligned.  Otherwise, the address must
                                                                 be 64-byte aligned.  Behavior is unpredictable if the address is 0x0. */
#endif /* Word 10 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 11 - Big Endian */
        uint64_t res_ptr_ctl           : 64; /**< [767:704] Result pointer control (ZIP_ZPTR_S format control word definition).

                                                                 Inside this ZIP_ZPTR_S:
                                                                   * ZIP_ZPTR_S[FW] can be either 0 or 1.
                                                                   * ZIP_ZPTR_S[NC] can be either 0 or 1.
                                                                   * ZIP_ZPTR_S[LENGTH] must be 0. (24-bytes is implied for non-hash operations, and
                                                                     64-bytes is implied otherwise). */
#else /* Word 11 - Little Endian */
        uint64_t res_ptr_ctl           : 64; /**< [767:704] Result pointer control (ZIP_ZPTR_S format control word definition).

                                                                 Inside this ZIP_ZPTR_S:
                                                                   * ZIP_ZPTR_S[FW] can be either 0 or 1.
                                                                   * ZIP_ZPTR_S[NC] can be either 0 or 1.
                                                                   * ZIP_ZPTR_S[LENGTH] must be 0. (24-bytes is implied for non-hash operations, and
                                                                     64-bytes is implied otherwise). */
#endif /* Word 11 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 12 - Big Endian */
        uint64_t reserved_812_831      : 20;
        uint64_t ggrp                  : 10; /**< [811:802] If [WQ_PTR] is nonzero, the SSO guest-group to use when the ZIP coprocessor
                                                                 submits work to the SSO. For the SSO to not discard the add-work request, the
                                                                 SSO must map [GGRP] as valid in the PF FUNC specified by the corresponding
                                                                 queue's ZIP()_PF_QUE()_GMCTL[SSO_PF_FUNC]. */
        uint64_t tt                    : 2;  /**< [801:800] If [WQ_PTR] is nonzero, the SSO tag type to use when the ZIP coprocessor submits work to the SSO. */
        uint64_t tag                   : 32; /**< [799:768] If [WQ_PTR] is nonzero, the SSO tag to use when the ZIP coprocessor submits work to the SSO. */
#else /* Word 12 - Little Endian */
        uint64_t tag                   : 32; /**< [799:768] If [WQ_PTR] is nonzero, the SSO tag to use when the ZIP coprocessor submits work to the SSO. */
        uint64_t tt                    : 2;  /**< [801:800] If [WQ_PTR] is nonzero, the SSO tag type to use when the ZIP coprocessor submits work to the SSO. */
        uint64_t ggrp                  : 10; /**< [811:802] If [WQ_PTR] is nonzero, the SSO guest-group to use when the ZIP coprocessor
                                                                 submits work to the SSO. For the SSO to not discard the add-work request, the
                                                                 SSO must map [GGRP] as valid in the PF FUNC specified by the corresponding
                                                                 queue's ZIP()_PF_QUE()_GMCTL[SSO_PF_FUNC]. */
        uint64_t reserved_812_831      : 20;
#endif /* Word 12 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 13 - Big Endian */
        uint64_t wq_ptr                : 64; /**< [895:832] If [WQ_PTR] is nonzero, it is a pointer to a work-queue entry that the ZIP coprocessor
                                                                 uses to submit work to the SSO after all context, output data, and result write
                                                                 operations are visible to other CNXXXX units and the cores.

                                                                 Bits \<2:0\> must be zero.  Bits \<63:53\> are ignored by hardware; software should
                                                                 use a sign-extended bit \<52\> for forward compatibility.

                                                                 Internal:
                                                                 Bits \<63:53\>, \<2:0\> are ignored by hardware, treated as always 0x0. */
#else /* Word 13 - Little Endian */
        uint64_t wq_ptr                : 64; /**< [895:832] If [WQ_PTR] is nonzero, it is a pointer to a work-queue entry that the ZIP coprocessor
                                                                 uses to submit work to the SSO after all context, output data, and result write
                                                                 operations are visible to other CNXXXX units and the cores.

                                                                 Bits \<2:0\> must be zero.  Bits \<63:53\> are ignored by hardware; software should
                                                                 use a sign-extended bit \<52\> for forward compatibility.

                                                                 Internal:
                                                                 Bits \<63:53\>, \<2:0\> are ignored by hardware, treated as always 0x0. */
#endif /* Word 13 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 14 - Big Endian */
        uint64_t reserved_896_959      : 64;
#else /* Word 14 - Little Endian */
        uint64_t reserved_896_959      : 64;
#endif /* Word 14 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 15 - Big Endian */
        uint64_t hash_ptr              : 64; /**< [1023:960] Hash structure (ZIP_HASH_S) pointer. Bits \<6:0\> must be zero.
                                                                 Bits \<63:53\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<52\> for forward compatibility.

                                                                 If [HALG] = 0x0 (NONE), must be 0x0.

                                                                 If [HALG] = ZIP_HASH_ALG_E::SHA1/SHA256, [HASH_PTR] points to the IOVA of a ZIP_HASH_S,
                                                                 from which ZIP may read to obtain the initial hash state or hash context.  An initial hash
                                                                 state is read if [BF] and [IV] are set.  The hash context is read if [BF] is not set.  If
                                                                 [HASH_PTR] is 0x0, and [HALG] is not NONE, and [BF] and [IV] are both set or [BF] is not
                                                                 set, behavior is unpredictable.

                                                                 If [HALG] = ZIP_HASH_ALG_E::SHA1/SHA256 and [HMIF] is set, [HASH_PTR] points to the
                                                                 IOVA of a ZIP_HASH_S, which ZIP will write at the end of this instruction, and may be
                                                                 used by subsequent instructions to continue hashing the subsequent chunk of the same file.

                                                                 If [HASH_PTR] is 0x0, and [HALG] is not NONE, and [HMIF] is set, behavior is
                                                                 unpredictable.

                                                                 Internal:
                                                                 Bits \<63:53\>, \<6:0\> are ignored by hardware, treated as always 0x0. */
#else /* Word 15 - Little Endian */
        uint64_t hash_ptr              : 64; /**< [1023:960] Hash structure (ZIP_HASH_S) pointer. Bits \<6:0\> must be zero.
                                                                 Bits \<63:53\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<52\> for forward compatibility.

                                                                 If [HALG] = 0x0 (NONE), must be 0x0.

                                                                 If [HALG] = ZIP_HASH_ALG_E::SHA1/SHA256, [HASH_PTR] points to the IOVA of a ZIP_HASH_S,
                                                                 from which ZIP may read to obtain the initial hash state or hash context.  An initial hash
                                                                 state is read if [BF] and [IV] are set.  The hash context is read if [BF] is not set.  If
                                                                 [HASH_PTR] is 0x0, and [HALG] is not NONE, and [BF] and [IV] are both set or [BF] is not
                                                                 set, behavior is unpredictable.

                                                                 If [HALG] = ZIP_HASH_ALG_E::SHA1/SHA256 and [HMIF] is set, [HASH_PTR] points to the
                                                                 IOVA of a ZIP_HASH_S, which ZIP will write at the end of this instruction, and may be
                                                                 used by subsequent instructions to continue hashing the subsequent chunk of the same file.

                                                                 If [HASH_PTR] is 0x0, and [HALG] is not NONE, and [HMIF] is set, behavior is
                                                                 unpredictable.

                                                                 Internal:
                                                                 Bits \<63:53\>, \<6:0\> are ignored by hardware, treated as always 0x0. */
#endif /* Word 15 - End */
    } cn98xx;
};

/**
 * Structure zip_nptr_s
 *
 * ZIP Instruction Next-Chunk-Buffer Pointer (NPTR) Structure
 * This structure is used to chain the ZIP instruction buffers together. ZIP instruction
 * buffers are allocated by software, and optionally released by hardware.
 */
union cavm_zip_nptr_s
{
    uint64_t u;
    struct cavm_zip_nptr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 64; /**< [ 63:  0] Pointer to next instruction's IOVA.  Behavior is unpredictable if the address is 0x0.

                                                                 Bits \<6:0\> must be zero. All the ZIP instruction buffers must be aligned on an
                                                                 128 byte boundary.

                                                                 Bits \<63:49\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<48\> for forward compatibility.

                                                                 Internal:
                                                                 Bits \<63:49\> and \<6:0\> are ignored by hardware. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 64; /**< [ 63:  0] Pointer to next instruction's IOVA.  Behavior is unpredictable if the address is 0x0.

                                                                 Bits \<6:0\> must be zero. All the ZIP instruction buffers must be aligned on an
                                                                 128 byte boundary.

                                                                 Bits \<63:49\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<48\> for forward compatibility.

                                                                 Internal:
                                                                 Bits \<63:49\> and \<6:0\> are ignored by hardware. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_nptr_s_s cn8; */
    struct cavm_zip_nptr_s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 64; /**< [ 63:  0] Pointer to next instruction's IOVA.  Behavior is unpredictable if the address is 0x0.

                                                                 Bits \<6:0\> must be zero. All the ZIP instruction buffers must be aligned on an
                                                                 128 byte boundary.

                                                                 Bits \<63:53\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<52\> for forward compatibility.

                                                                 Internal:
                                                                 Bits \<63:53\> and \<6:0\> are ignored by hardware. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 64; /**< [ 63:  0] Pointer to next instruction's IOVA.  Behavior is unpredictable if the address is 0x0.

                                                                 Bits \<6:0\> must be zero. All the ZIP instruction buffers must be aligned on an
                                                                 128 byte boundary.

                                                                 Bits \<63:53\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<52\> for forward compatibility.

                                                                 Internal:
                                                                 Bits \<63:53\> and \<6:0\> are ignored by hardware. */
#endif /* Word 0 - End */
    } cn9;
};

/**
 * Structure zip_zptr_s
 *
 * ZIP Generic Pointer Structure
 * This structure is the generic format of pointers in ZIP_INST_S amd in gather/scatter lists.
 */
union cavm_zip_zptr_s
{
    uint64_t u[2];
    struct cavm_zip_zptr_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 64; /**< [ 63:  0] When a ZIP_ZPTR_S is in an instruction word, [ADDR] is either:
                                                                 * (a) A direct IOVA byte pointer into L2C/DDR attached memory, or
                                                                 * (b) An IOVA pointer to a gather/scatter list in memory.

                                                                 When a ZIP_ZPTR_S is in a gather/scatter list, [ADDR] is:
                                                                 * (c) An IOVA direct byte pointer into the attached memory.

                                                                 In case (b) above, and for context pointers, [ADDR]\<3:0\> must be zero. (All these
                                                                 cases must be aligned on an 16 byte boundary.)

                                                                 For result pointers, [ADDR]\<4:0\> or \<5:0\> must be zero, based on the ZIP_INST_S[HALG]
                                                                 setting.  See ZIP_INST_S[RES_PTR_ADDR].

                                                                 In cases (a) or (c) above, for input data and history pointers, [ADDR] may be any
                                                                 byte alignment.

                                                                 In all cases bits \<63:49\> are ignored by hardware; software should use a
                                                                 sign-extended bit \<48\> for forward compatibility. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 64; /**< [ 63:  0] When a ZIP_ZPTR_S is in an instruction word, [ADDR] is either:
                                                                 * (a) A direct IOVA byte pointer into L2C/DDR attached memory, or
                                                                 * (b) An IOVA pointer to a gather/scatter list in memory.

                                                                 When a ZIP_ZPTR_S is in a gather/scatter list, [ADDR] is:
                                                                 * (c) An IOVA direct byte pointer into the attached memory.

                                                                 In case (b) above, and for context pointers, [ADDR]\<3:0\> must be zero. (All these
                                                                 cases must be aligned on an 16 byte boundary.)

                                                                 For result pointers, [ADDR]\<4:0\> or \<5:0\> must be zero, based on the ZIP_INST_S[HALG]
                                                                 setting.  See ZIP_INST_S[RES_PTR_ADDR].

                                                                 In cases (a) or (c) above, for input data and history pointers, [ADDR] may be any
                                                                 byte alignment.

                                                                 In all cases bits \<63:49\> are ignored by hardware; software should use a
                                                                 sign-extended bit \<48\> for forward compatibility. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_112_127      : 16;
        uint64_t length                : 16; /**< [111: 96] In case (a) and (c) in the [ADDR] description, [LENGTH] is the number of bytes pointed
                                                                 at by [ADDR].  [LENGTH] must be nonzero in this case.
                                                                 In case (b) in the [ADDR] description, [LENGTH] is the number of gather/ scatter list
                                                                 pointer entries pointed at by [ADDR]. ([LENGTH]*16 is the number of bytes.) [LENGTH]
                                                                 must be at least 2 in this case.
                                                                 [LENGTH] must be zero for context and result pointers, because each has an implied fixed-
                                                                 size length (of ZIP_CONSTANTS[CTXSIZE] or fewer bytes and 24 or 64 bytes, respectively). */
        uint64_t reserved_67_95        : 29;
        uint64_t fw                    : 1;  /**< [ 66: 66] Full-block write. [FW] may be set in any case (a) or (c) where stores to [ADDR] can be
                                                                 generated to indicate that the hardware may corrupt any unwritten bytes of all
                                                                 cache blocks touched by the range [ADDR] ... [ADDR]+[LENGTH]-1.  [FW] must not be
                                                                 set in case (b) above, or whenever stores to [ADDR] cannot possibly be generated. */
        uint64_t nc                    : 1;  /**< [ 65: 65] No cache allocation. [NC] may be set in any case to indicate that the read/write
                                                                 operations generated should preferably not load cache blocks into the L2 cache.
                                                                 Note that in case (b) above, [NC] indicates that the gather/scatter list should not be
                                                                 loaded into the cache. In cases (a) and (c) above, [NC] indicates that the data or results
                                                                 should not be loaded into the L2 cache.
                                                                 Note that the ZIP hardware will ignore [NC] for write operations when full cache blocks
                                                                 cannot be written. */
        uint64_t data_be               : 1;  /**< [ 64: 64] Reserved. */
#else /* Word 1 - Little Endian */
        uint64_t data_be               : 1;  /**< [ 64: 64] Reserved. */
        uint64_t nc                    : 1;  /**< [ 65: 65] No cache allocation. [NC] may be set in any case to indicate that the read/write
                                                                 operations generated should preferably not load cache blocks into the L2 cache.
                                                                 Note that in case (b) above, [NC] indicates that the gather/scatter list should not be
                                                                 loaded into the cache. In cases (a) and (c) above, [NC] indicates that the data or results
                                                                 should not be loaded into the L2 cache.
                                                                 Note that the ZIP hardware will ignore [NC] for write operations when full cache blocks
                                                                 cannot be written. */
        uint64_t fw                    : 1;  /**< [ 66: 66] Full-block write. [FW] may be set in any case (a) or (c) where stores to [ADDR] can be
                                                                 generated to indicate that the hardware may corrupt any unwritten bytes of all
                                                                 cache blocks touched by the range [ADDR] ... [ADDR]+[LENGTH]-1.  [FW] must not be
                                                                 set in case (b) above, or whenever stores to [ADDR] cannot possibly be generated. */
        uint64_t reserved_67_95        : 29;
        uint64_t length                : 16; /**< [111: 96] In case (a) and (c) in the [ADDR] description, [LENGTH] is the number of bytes pointed
                                                                 at by [ADDR].  [LENGTH] must be nonzero in this case.
                                                                 In case (b) in the [ADDR] description, [LENGTH] is the number of gather/ scatter list
                                                                 pointer entries pointed at by [ADDR]. ([LENGTH]*16 is the number of bytes.) [LENGTH]
                                                                 must be at least 2 in this case.
                                                                 [LENGTH] must be zero for context and result pointers, because each has an implied fixed-
                                                                 size length (of ZIP_CONSTANTS[CTXSIZE] or fewer bytes and 24 or 64 bytes, respectively). */
        uint64_t reserved_112_127      : 16;
#endif /* Word 1 - End */
    } s;
    /* struct cavm_zip_zptr_s_s cn8; */
    struct cavm_zip_zptr_s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 64; /**< [ 63:  0] When a ZIP_ZPTR_S is in an instruction word, [ADDR] is either:
                                                                 * (a) A direct IOVA byte pointer into LLC/DRAM attached memory, or
                                                                 * (b) An IOVA pointer to a gather/scatter list in memory.

                                                                 When a ZIP_ZPTR_S is in a gather/scatter list, [ADDR] is:
                                                                 * (c) An IOVA direct byte pointer into the attached memory.

                                                                 In case (b) above, and for context pointers, [ADDR]\<3:0\> must be zero. (All these
                                                                 cases must be aligned on an 16 byte boundary.)

                                                                 For result pointers, [ADDR]\<4:0\> or \<5:0\> must be zero, based on the ZIP_INST_S[HALG]
                                                                 setting.  See ZIP_INST_S[RES_PTR_ADDR].

                                                                 In cases (a) or (c) above, for input data and history pointers, [ADDR] may be any
                                                                 byte alignment.

                                                                 In all cases bits \<63:53\> are ignored by hardware; software should use a
                                                                 sign-extended bit \<52\> for forward compatibility. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 64; /**< [ 63:  0] When a ZIP_ZPTR_S is in an instruction word, [ADDR] is either:
                                                                 * (a) A direct IOVA byte pointer into LLC/DRAM attached memory, or
                                                                 * (b) An IOVA pointer to a gather/scatter list in memory.

                                                                 When a ZIP_ZPTR_S is in a gather/scatter list, [ADDR] is:
                                                                 * (c) An IOVA direct byte pointer into the attached memory.

                                                                 In case (b) above, and for context pointers, [ADDR]\<3:0\> must be zero. (All these
                                                                 cases must be aligned on an 16 byte boundary.)

                                                                 For result pointers, [ADDR]\<4:0\> or \<5:0\> must be zero, based on the ZIP_INST_S[HALG]
                                                                 setting.  See ZIP_INST_S[RES_PTR_ADDR].

                                                                 In cases (a) or (c) above, for input data and history pointers, [ADDR] may be any
                                                                 byte alignment.

                                                                 In all cases bits \<63:53\> are ignored by hardware; software should use a
                                                                 sign-extended bit \<52\> for forward compatibility. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_112_127      : 16;
        uint64_t length                : 16; /**< [111: 96] In case (a) and (c) in the [ADDR] description, [LENGTH] is the number of bytes pointed
                                                                 at by [ADDR].  [LENGTH] must be nonzero in this case.
                                                                 In case (b) in the [ADDR] description, [LENGTH] is the number of gather/ scatter list
                                                                 pointer entries pointed at by [ADDR]. ([LENGTH]*16 is the number of bytes.) [LENGTH]
                                                                 must be at least 2 in this case.
                                                                 [LENGTH] must be zero for context and result pointers, because each has an implied fixed-
                                                                 size length (of ZIP_CONSTANTS[CTXSIZE] or fewer bytes and 24 or 64 bytes, respectively). */
        uint64_t reserved_67_95        : 29;
        uint64_t fw                    : 1;  /**< [ 66: 66] Full-block write. [FW] may be set in any case (a) or (c) where stores to [ADDR] can be
                                                                 generated to indicate that the hardware may corrupt any unwritten bytes of all
                                                                 cache blocks touched by the range [ADDR] ... [ADDR]+[LENGTH]-1.  [FW] must not be
                                                                 set in case (b) above, or whenever stores to [ADDR] cannot possibly be generated. */
        uint64_t nc                    : 1;  /**< [ 65: 65] No cache allocation. [NC] may be set in any case to indicate that the read/write
                                                                 operations generated should preferably not load cache blocks into the LLC.
                                                                 Note that in case (b) above, [NC] indicates that the gather/scatter list should not be
                                                                 loaded into the cache. In cases (a) and (c) above, [NC] indicates that the data or results
                                                                 should not be loaded into the LLC.
                                                                 Note that the ZIP hardware will ignore [NC] for write operations when full cache blocks
                                                                 cannot be written. */
        uint64_t data_be               : 1;  /**< [ 64: 64] Reserved. */
#else /* Word 1 - Little Endian */
        uint64_t data_be               : 1;  /**< [ 64: 64] Reserved. */
        uint64_t nc                    : 1;  /**< [ 65: 65] No cache allocation. [NC] may be set in any case to indicate that the read/write
                                                                 operations generated should preferably not load cache blocks into the LLC.
                                                                 Note that in case (b) above, [NC] indicates that the gather/scatter list should not be
                                                                 loaded into the cache. In cases (a) and (c) above, [NC] indicates that the data or results
                                                                 should not be loaded into the LLC.
                                                                 Note that the ZIP hardware will ignore [NC] for write operations when full cache blocks
                                                                 cannot be written. */
        uint64_t fw                    : 1;  /**< [ 66: 66] Full-block write. [FW] may be set in any case (a) or (c) where stores to [ADDR] can be
                                                                 generated to indicate that the hardware may corrupt any unwritten bytes of all
                                                                 cache blocks touched by the range [ADDR] ... [ADDR]+[LENGTH]-1.  [FW] must not be
                                                                 set in case (b) above, or whenever stores to [ADDR] cannot possibly be generated. */
        uint64_t reserved_67_95        : 29;
        uint64_t length                : 16; /**< [111: 96] In case (a) and (c) in the [ADDR] description, [LENGTH] is the number of bytes pointed
                                                                 at by [ADDR].  [LENGTH] must be nonzero in this case.
                                                                 In case (b) in the [ADDR] description, [LENGTH] is the number of gather/ scatter list
                                                                 pointer entries pointed at by [ADDR]. ([LENGTH]*16 is the number of bytes.) [LENGTH]
                                                                 must be at least 2 in this case.
                                                                 [LENGTH] must be zero for context and result pointers, because each has an implied fixed-
                                                                 size length (of ZIP_CONSTANTS[CTXSIZE] or fewer bytes and 24 or 64 bytes, respectively). */
        uint64_t reserved_112_127      : 16;
#endif /* Word 1 - End */
    } cn9;
    /* struct cavm_zip_zptr_s_cn9 cn96xx; */
    struct cavm_zip_zptr_s_cn98xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t addr                  : 64; /**< [ 63:  0] When a ZIP_ZPTR_S is in an instruction word, [ADDR] is either:
                                                                 * (a) A direct IOVA byte pointer into LLC/DRAM attached memory, or
                                                                 * (b) An IOVA pointer to a gather/scatter list in memory.

                                                                 When a ZIP_ZPTR_S is in a gather/scatter list, [ADDR] is:
                                                                 * (c) An IOVA direct byte pointer into the attached memory.

                                                                 In case (b) above, and for context pointers, [ADDR]\<3:0\> must be zero. (All these
                                                                 cases must be aligned on an 16 byte boundary.)

                                                                 For result pointers, [ADDR]\<4:0\> or \<5:0\> must be zero, based on the ZIP_INST_S[HALG]
                                                                 setting.  See ZIP_INST_S[RES_PTR_ADDR].

                                                                 In cases (a) or (c) above, for input data and history pointers, [ADDR] may be any
                                                                 byte alignment.

                                                                 In all cases bits \<63:53\> are ignored by hardware; software should use a
                                                                 sign-extended bit \<52\> for forward compatibility. */
#else /* Word 0 - Little Endian */
        uint64_t addr                  : 64; /**< [ 63:  0] When a ZIP_ZPTR_S is in an instruction word, [ADDR] is either:
                                                                 * (a) A direct IOVA byte pointer into LLC/DRAM attached memory, or
                                                                 * (b) An IOVA pointer to a gather/scatter list in memory.

                                                                 When a ZIP_ZPTR_S is in a gather/scatter list, [ADDR] is:
                                                                 * (c) An IOVA direct byte pointer into the attached memory.

                                                                 In case (b) above, and for context pointers, [ADDR]\<3:0\> must be zero. (All these
                                                                 cases must be aligned on an 16 byte boundary.)

                                                                 For result pointers, [ADDR]\<4:0\> or \<5:0\> must be zero, based on the ZIP_INST_S[HALG]
                                                                 setting.  See ZIP_INST_S[RES_PTR_ADDR].

                                                                 In cases (a) or (c) above, for input data and history pointers, [ADDR] may be any
                                                                 byte alignment.

                                                                 In all cases bits \<63:53\> are ignored by hardware; software should use a
                                                                 sign-extended bit \<52\> for forward compatibility. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_112_127      : 16;
        uint64_t length                : 16; /**< [111: 96] In case (a) and (c) in the [ADDR] description, [LENGTH] is the number of bytes pointed
                                                                 at by [ADDR].  [LENGTH] must be nonzero in this case.
                                                                 In case (b) in the [ADDR] description, [LENGTH] is the number of gather/ scatter list
                                                                 pointer entries pointed at by [ADDR]. ([LENGTH]*16 is the number of bytes.) [LENGTH]
                                                                 must be at least 2 in this case.
                                                                 [LENGTH] must be zero for context and result pointers, because each has an implied fixed-
                                                                 size length (of ZIP()_CONSTANTS[CTXSIZE] or fewer bytes and 24 or 64 bytes, respectively). */
        uint64_t reserved_67_95        : 29;
        uint64_t fw                    : 1;  /**< [ 66: 66] Full-block write. [FW] may be set in any case (a) or (c) where stores to [ADDR] can be
                                                                 generated to indicate that the hardware may corrupt any unwritten bytes of all
                                                                 cache blocks touched by the range [ADDR] ... [ADDR]+[LENGTH]-1.  [FW] must not be
                                                                 set in case (b) above, or whenever stores to [ADDR] cannot possibly be generated. */
        uint64_t nc                    : 1;  /**< [ 65: 65] No cache allocation. [NC] may be set in any case to indicate that the read/write
                                                                 operations generated should preferably not load cache blocks into the LLC.
                                                                 Note that in case (b) above, [NC] indicates that the gather/scatter list should not be
                                                                 loaded into the cache. In cases (a) and (c) above, [NC] indicates that the data or results
                                                                 should not be loaded into the LLC.
                                                                 Note that the ZIP hardware will ignore [NC] for write operations when full cache blocks
                                                                 cannot be written. */
        uint64_t data_be               : 1;  /**< [ 64: 64] Reserved. */
#else /* Word 1 - Little Endian */
        uint64_t data_be               : 1;  /**< [ 64: 64] Reserved. */
        uint64_t nc                    : 1;  /**< [ 65: 65] No cache allocation. [NC] may be set in any case to indicate that the read/write
                                                                 operations generated should preferably not load cache blocks into the LLC.
                                                                 Note that in case (b) above, [NC] indicates that the gather/scatter list should not be
                                                                 loaded into the cache. In cases (a) and (c) above, [NC] indicates that the data or results
                                                                 should not be loaded into the LLC.
                                                                 Note that the ZIP hardware will ignore [NC] for write operations when full cache blocks
                                                                 cannot be written. */
        uint64_t fw                    : 1;  /**< [ 66: 66] Full-block write. [FW] may be set in any case (a) or (c) where stores to [ADDR] can be
                                                                 generated to indicate that the hardware may corrupt any unwritten bytes of all
                                                                 cache blocks touched by the range [ADDR] ... [ADDR]+[LENGTH]-1.  [FW] must not be
                                                                 set in case (b) above, or whenever stores to [ADDR] cannot possibly be generated. */
        uint64_t reserved_67_95        : 29;
        uint64_t length                : 16; /**< [111: 96] In case (a) and (c) in the [ADDR] description, [LENGTH] is the number of bytes pointed
                                                                 at by [ADDR].  [LENGTH] must be nonzero in this case.
                                                                 In case (b) in the [ADDR] description, [LENGTH] is the number of gather/ scatter list
                                                                 pointer entries pointed at by [ADDR]. ([LENGTH]*16 is the number of bytes.) [LENGTH]
                                                                 must be at least 2 in this case.
                                                                 [LENGTH] must be zero for context and result pointers, because each has an implied fixed-
                                                                 size length (of ZIP()_CONSTANTS[CTXSIZE] or fewer bytes and 24 or 64 bytes, respectively). */
        uint64_t reserved_112_127      : 16;
#endif /* Word 1 - End */
    } cn98xx;
};

/**
 * Structure zip_zres_s
 *
 * ZIP Result Structure
 * The ZIP coprocessor writes the result structure after it completes the
 * invocation. Each invocation of the ZIP coprocessor produces exactly one result
 * structure. The result structure is 24 bytes if ZIP_INST_S[HALG]=NONE, and is
 * otherwise 64 bytes. The endianness depends on ZIP()_QUE()_SBUF_CTL[INST_BE].
 */
union cavm_zip_zres_s
{
    uint64_t u[8];
    struct cavm_zip_zres_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t crc32                 : 32; /**< [ 63: 32] The CRC32 result corresponding to the bytes processed in the uncompressed stream,
                                                                 seeded with ZIP_INST_S[ADLERCRC32].

                                                                 For an error-free compression, [TOTALBYTESREAD] indicates the
                                                                 number of non-history bytes from the input stream that contributed to the hardware
                                                                 CRC32 calculation. [CRC32] is valid for all error-free compression invocations,
                                                                 whether at the beginning, middle, or end of file.

                                                                 For decompression, [CRC32] is valid only for error-free invocations that find the end of
                                                                 file (i.e. that have [EF] = 1), where it indicates the ADLER/CRC32 result
                                                                 for the file.

                                                                 For standalone hashing invocations, [CRC32] is always 0x0. */
        uint64_t adler32               : 32; /**< [ 31:  0] The ADLER32 result corresponding to the bytes processed in the uncompressed
                                                                 stream, starting with the checksum ZIP_INST_S[ADLERCRC32].

                                                                 For an error-free compression, [TOTALBYTESREAD] indicates the
                                                                 number of non-history bytes from the input stream that contributed to the hardware
                                                                 ADLER32 calculation. [ADLER32] is valid for all error-free compression invocations,
                                                                 whether at the beginning, middle, or end of file.

                                                                 For decompression, [ADLER32] is valid only for error-free invocations that find
                                                                 the end of file (i.e. that have [EF] = 1), where it indicates the ADLER/CRC32
                                                                 result for the file.

                                                                 For standalone hashing invocations, [ADLER32] is always 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t adler32               : 32; /**< [ 31:  0] The ADLER32 result corresponding to the bytes processed in the uncompressed
                                                                 stream, starting with the checksum ZIP_INST_S[ADLERCRC32].

                                                                 For an error-free compression, [TOTALBYTESREAD] indicates the
                                                                 number of non-history bytes from the input stream that contributed to the hardware
                                                                 ADLER32 calculation. [ADLER32] is valid for all error-free compression invocations,
                                                                 whether at the beginning, middle, or end of file.

                                                                 For decompression, [ADLER32] is valid only for error-free invocations that find
                                                                 the end of file (i.e. that have [EF] = 1), where it indicates the ADLER/CRC32
                                                                 result for the file.

                                                                 For standalone hashing invocations, [ADLER32] is always 0x0. */
        uint64_t crc32                 : 32; /**< [ 63: 32] The CRC32 result corresponding to the bytes processed in the uncompressed stream,
                                                                 seeded with ZIP_INST_S[ADLERCRC32].

                                                                 For an error-free compression, [TOTALBYTESREAD] indicates the
                                                                 number of non-history bytes from the input stream that contributed to the hardware
                                                                 CRC32 calculation. [CRC32] is valid for all error-free compression invocations,
                                                                 whether at the beginning, middle, or end of file.

                                                                 For decompression, [CRC32] is valid only for error-free invocations that find the end of
                                                                 file (i.e. that have [EF] = 1), where it indicates the ADLER/CRC32 result
                                                                 for the file.

                                                                 For standalone hashing invocations, [CRC32] is always 0x0. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t totalbyteswritten     : 32; /**< [127: 96] The total number of bytes produced in the output stream during this coprocessor
                                                                 invocation. [TOTALBYTESWRITTEN] does not exceed ZIP_INST_S[TOTALOUTPUTLENGTH] in all
                                                                 error-free cases.

                                                                 For an error-free compression, [TOTALBYTESWRITTEN] is the number of
                                                                 compressed output bytes that were written during the compression. This includes
                                                                 any valid [EXN],[EXBITS] when [EF] = 1, and excludes any valid [EXN],[EXBITS] when [EF] =
                                                                 0.

                                                                 For an error-free decompression, [TOTALBYTESWRITTEN] is the number of
                                                                 uncompressed output bytes produced by the operation.

                                                                 For standalone hashing invocations, [TOTALBYTESWRITTEN] is always 0. */
        uint64_t totalbytesread        : 32; /**< [ 95: 64] The total number of bytes processed from the input stream during this coprocessor
                                                                 invocation. Note that for a compression operation, [TOTALBYTESREAD] does count
                                                                 the history bytes read in (when ZIP_INST_S[HISTORYLENGTH] != 0x0).

                                                                 For an error-free compression, [TOTALBYTESREAD] - ZIP_INST_S[HISTORYLENGTH] is
                                                                 the number of uncompressed input bytes which, when compressed and concatenated after
                                                                 ZIP_INST_S[EXN], ZIP_INST_S[EXBITS], produces the compressed byte-output stream
                                                                 (and [EXN],[EXBITS] when valid). In all error-free compression
                                                                 invocations, [TOTALBYTESREAD] equals the total number of input bytes supplied
                                                                 via ZIP_INST_S[INP_PTR_ADDR] (input and compression history bytes).

                                                                 For an error-free decompression, [TOTALBYTESREAD] is the number of compressed
                                                                 input bytes which were read during the decompression.

                                                                 For standalone hashing invocations, [TOTALBYTESREAD] is unpredictable. */
#else /* Word 1 - Little Endian */
        uint64_t totalbytesread        : 32; /**< [ 95: 64] The total number of bytes processed from the input stream during this coprocessor
                                                                 invocation. Note that for a compression operation, [TOTALBYTESREAD] does count
                                                                 the history bytes read in (when ZIP_INST_S[HISTORYLENGTH] != 0x0).

                                                                 For an error-free compression, [TOTALBYTESREAD] - ZIP_INST_S[HISTORYLENGTH] is
                                                                 the number of uncompressed input bytes which, when compressed and concatenated after
                                                                 ZIP_INST_S[EXN], ZIP_INST_S[EXBITS], produces the compressed byte-output stream
                                                                 (and [EXN],[EXBITS] when valid). In all error-free compression
                                                                 invocations, [TOTALBYTESREAD] equals the total number of input bytes supplied
                                                                 via ZIP_INST_S[INP_PTR_ADDR] (input and compression history bytes).

                                                                 For an error-free decompression, [TOTALBYTESREAD] is the number of compressed
                                                                 input bytes which were read during the decompression.

                                                                 For standalone hashing invocations, [TOTALBYTESREAD] is unpredictable. */
        uint64_t totalbyteswritten     : 32; /**< [127: 96] The total number of bytes produced in the output stream during this coprocessor
                                                                 invocation. [TOTALBYTESWRITTEN] does not exceed ZIP_INST_S[TOTALOUTPUTLENGTH] in all
                                                                 error-free cases.

                                                                 For an error-free compression, [TOTALBYTESWRITTEN] is the number of
                                                                 compressed output bytes that were written during the compression. This includes
                                                                 any valid [EXN],[EXBITS] when [EF] = 1, and excludes any valid [EXN],[EXBITS] when [EF] =
                                                                 0.

                                                                 For an error-free decompression, [TOTALBYTESWRITTEN] is the number of
                                                                 uncompressed output bytes produced by the operation.

                                                                 For standalone hashing invocations, [TOTALBYTESWRITTEN] is always 0. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t totalbitsprocessed    : 32; /**< [191:160] When [EF] = 1 for an error-free decompression operation, [TOTALBITSPROCESSED] indicates
                                                                 the number of compressed input bits consumed to decompress all blocks in the file.
                                                                 ([TOTALBITSPROCESSED] + 7)/8 is the total number of bytes in the entire compressed
                                                                 input stream from the file in that case. (For example, this can be used to find the
                                                                 location of the ADLER32/CRC32 codes that follow the compressed data.) Note that
                                                                 [TOTALBITSPROCESSED] refers to the total number of bits processed during all invocations
                                                                 of the ZIP decompression coprocessor for the entire file.

                                                                 For any decompression with an error or with [EF] = 0, [TOTALBITSPROCESSED] is
                                                                 unused and unpredictable.

                                                                 For any compression operation, [TOTALBITSPROCESSED] is unused and unpredictable.

                                                                 For any standalone hashing, [TOTALBITSPROCESSED] is the byte count of all the
                                                                 bytes hashed in the current instruction. When ZIP_INST_S[BF] and ZIP_INST_S[IV]
                                                                 are set, [TOTALBITSPROCESSED] also includes the ZIP_HASH_S[PREVLEN] bytes of
                                                                 header included in ZIP_HASH_S[PDATA0...7].  The field name is historical, and the
                                                                 units for standalone hashing are bytes.

                                                                 If the true total bits processed by the ZIP coprocessor equals or exceeds 2^32
                                                                 for a file, [TOTALBITSPROCESSED] contains the low-order 32-bits of the actual
                                                                 value for the file. If necessary, in this large file decompression case,
                                                                 software can calculate the true total bits processed by the ZIP coprocessor
                                                                 using the [TOTALBITSPROCESSED] value returned by the hardware, together with the
                                                                 total number of input bytes in the compressed file. */
        uint64_t doneint               : 1;  /**< [159:159] Done interrupt. This bit is copied from the corresponding ZIP instruction ZIP_INST_S[DONEINT]. */
        uint64_t reserved_155_158      : 4;
        uint64_t exn                   : 3;  /**< [154:152] The number of extra bits produced beyond the last output byte written.  See details in [EXBITS]. */
        uint64_t reserved_151          : 1;
        uint64_t exbits                : 7;  /**< [150:144] [EXN] and [EXBITS] specify the compressed bits produced beyond the last compressed byte
                                                                 written. These bits are required context for partial-file processing, as the ZIP
                                                                 compression algorithm produces a compressed bit stream, but the output stream of the
                                                                 operation is byte-based. [EXN], [EXBITS] are valid for any error-free compression when
                                                                 ZIP_INST_S[EF] = 0 and ZIP_INST_S[SF] = 0, and are not used and unpredictable in all
                                                                 other cases.

                                                                 [EXBITS] contains the extra bits. Bit \<0\> contains the first extra bit, \<1\> the
                                                                 second extra bit, etc.

                                                                 For decompression or standalone hashing, [EXN] and [EXBITS] are not used and are
                                                                 unpredictable. */
        uint64_t reserved_137_143      : 7;
        uint64_t ef                    : 1;  /**< [136:136] End of file.

                                                                 For any error-free decompression, [EF] indicates whether the ZIP coprocessor
                                                                 completed decompression of all blocks in the file during this invocation. If
                                                                 [EF] = 1 for a decompression operation, the ZIP coprocessor must not be invoked
                                                                 again for further processing on this file.

                                                                 For compression or standalone hashing, [EF] is not used and is unpredictable. */
        uint64_t compcode              : 8;  /**< [135:128] Indicates completion/error status of the ZIP coprocessor for this invocation,
                                                                 as enumerated by ZIP_COMP_E.  Software may write the memory location containing
                                                                 [COMPCODE] to 0x0 before submitting the instruction, and then poll for completion
                                                                 by checking for a nonzero value.

                                                                 Once software observes a nonzero [COMPCODE] value in this case, the ZIP
                                                                 coprocessor will have also completed L2/DRAM write operations for all context,
                                                                 output stream, and result data. */
#else /* Word 2 - Little Endian */
        uint64_t compcode              : 8;  /**< [135:128] Indicates completion/error status of the ZIP coprocessor for this invocation,
                                                                 as enumerated by ZIP_COMP_E.  Software may write the memory location containing
                                                                 [COMPCODE] to 0x0 before submitting the instruction, and then poll for completion
                                                                 by checking for a nonzero value.

                                                                 Once software observes a nonzero [COMPCODE] value in this case, the ZIP
                                                                 coprocessor will have also completed L2/DRAM write operations for all context,
                                                                 output stream, and result data. */
        uint64_t ef                    : 1;  /**< [136:136] End of file.

                                                                 For any error-free decompression, [EF] indicates whether the ZIP coprocessor
                                                                 completed decompression of all blocks in the file during this invocation. If
                                                                 [EF] = 1 for a decompression operation, the ZIP coprocessor must not be invoked
                                                                 again for further processing on this file.

                                                                 For compression or standalone hashing, [EF] is not used and is unpredictable. */
        uint64_t reserved_137_143      : 7;
        uint64_t exbits                : 7;  /**< [150:144] [EXN] and [EXBITS] specify the compressed bits produced beyond the last compressed byte
                                                                 written. These bits are required context for partial-file processing, as the ZIP
                                                                 compression algorithm produces a compressed bit stream, but the output stream of the
                                                                 operation is byte-based. [EXN], [EXBITS] are valid for any error-free compression when
                                                                 ZIP_INST_S[EF] = 0 and ZIP_INST_S[SF] = 0, and are not used and unpredictable in all
                                                                 other cases.

                                                                 [EXBITS] contains the extra bits. Bit \<0\> contains the first extra bit, \<1\> the
                                                                 second extra bit, etc.

                                                                 For decompression or standalone hashing, [EXN] and [EXBITS] are not used and are
                                                                 unpredictable. */
        uint64_t reserved_151          : 1;
        uint64_t exn                   : 3;  /**< [154:152] The number of extra bits produced beyond the last output byte written.  See details in [EXBITS]. */
        uint64_t reserved_155_158      : 4;
        uint64_t doneint               : 1;  /**< [159:159] Done interrupt. This bit is copied from the corresponding ZIP instruction ZIP_INST_S[DONEINT]. */
        uint64_t totalbitsprocessed    : 32; /**< [191:160] When [EF] = 1 for an error-free decompression operation, [TOTALBITSPROCESSED] indicates
                                                                 the number of compressed input bits consumed to decompress all blocks in the file.
                                                                 ([TOTALBITSPROCESSED] + 7)/8 is the total number of bytes in the entire compressed
                                                                 input stream from the file in that case. (For example, this can be used to find the
                                                                 location of the ADLER32/CRC32 codes that follow the compressed data.) Note that
                                                                 [TOTALBITSPROCESSED] refers to the total number of bits processed during all invocations
                                                                 of the ZIP decompression coprocessor for the entire file.

                                                                 For any decompression with an error or with [EF] = 0, [TOTALBITSPROCESSED] is
                                                                 unused and unpredictable.

                                                                 For any compression operation, [TOTALBITSPROCESSED] is unused and unpredictable.

                                                                 For any standalone hashing, [TOTALBITSPROCESSED] is the byte count of all the
                                                                 bytes hashed in the current instruction. When ZIP_INST_S[BF] and ZIP_INST_S[IV]
                                                                 are set, [TOTALBITSPROCESSED] also includes the ZIP_HASH_S[PREVLEN] bytes of
                                                                 header included in ZIP_HASH_S[PDATA0...7].  The field name is historical, and the
                                                                 units for standalone hashing are bytes.

                                                                 If the true total bits processed by the ZIP coprocessor equals or exceeds 2^32
                                                                 for a file, [TOTALBITSPROCESSED] contains the low-order 32-bits of the actual
                                                                 value for the file. If necessary, in this large file decompression case,
                                                                 software can calculate the true total bits processed by the ZIP coprocessor
                                                                 using the [TOTALBITSPROCESSED] value returned by the hardware, together with the
                                                                 total number of input bytes in the compressed file. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t reserved_253_255      : 3;
        uint64_t hshlen                : 61; /**< [252:192] Total hash length in bytes. For compression-and-hash or standalone hashing, the
                                                                 sum of ZIP_HASH_S[PREVLEN] (if any was read, otherwise 0x0) and [TOTALBYTESREAD].
                                                                 For decompression, the sum of ZIP_HASH_S[PREVLEN] (if any were read, otherwise 0x0) and
                                                                 [TOTALBYTESWRITTEN].

                                                                 This word is only written when ZIP_INST_S[HALG] != ZIP_HASH_ALG_E::NONE. When
                                                                 ZIP_INST_S[HMIF] is set, [HSHLEN] is the total bytes hashed up to and including the
                                                                 current instruction. */
#else /* Word 3 - Little Endian */
        uint64_t hshlen                : 61; /**< [252:192] Total hash length in bytes. For compression-and-hash or standalone hashing, the
                                                                 sum of ZIP_HASH_S[PREVLEN] (if any was read, otherwise 0x0) and [TOTALBYTESREAD].
                                                                 For decompression, the sum of ZIP_HASH_S[PREVLEN] (if any were read, otherwise 0x0) and
                                                                 [TOTALBYTESWRITTEN].

                                                                 This word is only written when ZIP_INST_S[HALG] != ZIP_HASH_ALG_E::NONE. When
                                                                 ZIP_INST_S[HMIF] is set, [HSHLEN] is the total bytes hashed up to and including the
                                                                 current instruction. */
        uint64_t reserved_253_255      : 3;
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t hash0                 : 64; /**< [319:256] Double-word 0 of computed hash. The hash result in [HASH0]-[HASH3] is in the
                                                                 standards mandated big endian format (w4\<63:56\> for byte 0), and is not
                                                                 controlled by the ZIP_QUE()_SBUF_CTL[INST_BE] setting.

                                                                 This word is only written when ZIP_INST_S[HALG] != ZIP_HASH_ALG_E::NONE and
                                                                 ZIP_INST_S[HMIF] is clear.

                                                                 When ZIP_INST_S[HMIF] is set, [HASH0] is the double-word 0 of computed hash up to
                                                                 the latest 64 byte block. */
#else /* Word 4 - Little Endian */
        uint64_t hash0                 : 64; /**< [319:256] Double-word 0 of computed hash. The hash result in [HASH0]-[HASH3] is in the
                                                                 standards mandated big endian format (w4\<63:56\> for byte 0), and is not
                                                                 controlled by the ZIP_QUE()_SBUF_CTL[INST_BE] setting.

                                                                 This word is only written when ZIP_INST_S[HALG] != ZIP_HASH_ALG_E::NONE and
                                                                 ZIP_INST_S[HMIF] is clear.

                                                                 When ZIP_INST_S[HMIF] is set, [HASH0] is the double-word 0 of computed hash up to
                                                                 the latest 64 byte block. */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t hash1                 : 64; /**< [383:320] Double-word 1 of computed hash. See [HASH0]. */
#else /* Word 5 - Little Endian */
        uint64_t hash1                 : 64; /**< [383:320] Double-word 1 of computed hash. See [HASH0]. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t hash2                 : 64; /**< [447:384] Double-word 2 of computed hash. See [HASH0]. */
#else /* Word 6 - Little Endian */
        uint64_t hash2                 : 64; /**< [447:384] Double-word 2 of computed hash. See [HASH0]. */
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t hash3                 : 64; /**< [511:448] Double-word 3 of computed hash. See [HASH0]. */
#else /* Word 7 - Little Endian */
        uint64_t hash3                 : 64; /**< [511:448] Double-word 3 of computed hash. See [HASH0]. */
#endif /* Word 7 - End */
    } s;
    /* struct cavm_zip_zres_s_s cn8; */
    struct cavm_zip_zres_s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t crc32                 : 32; /**< [ 63: 32] The CRC32 result corresponding to the bytes processed in the uncompressed stream,
                                                                 seeded with ZIP_INST_S[ADLERCRC32].

                                                                 For an error-free compression, [TOTALBYTESREAD] indicates the
                                                                 number of non-history bytes from the input stream that contributed to the hardware
                                                                 CRC32 calculation. [CRC32] is valid for all error-free compression invocations,
                                                                 whether at the beginning, middle, or end of file.

                                                                 For decompression, [CRC32] is valid only for error-free invocations that find the end of
                                                                 file (i.e. that have [EF] = 1), where it indicates the ADLER/CRC32 result
                                                                 for the file.

                                                                 For standalone hashing invocations, [CRC32] is always 0x0. */
        uint64_t adler32               : 32; /**< [ 31:  0] The ADLER32 result corresponding to the bytes processed in the uncompressed
                                                                 stream, starting with the checksum ZIP_INST_S[ADLERCRC32].

                                                                 For an error-free compression, [TOTALBYTESREAD] indicates the
                                                                 number of non-history bytes from the input stream that contributed to the hardware
                                                                 ADLER32 calculation. [ADLER32] is valid for all error-free compression invocations,
                                                                 whether at the beginning, middle, or end of file.

                                                                 For decompression, [ADLER32] is valid only for error-free invocations that find
                                                                 the end of file (i.e. that have [EF] = 1), where it indicates the ADLER/CRC32
                                                                 result for the file.

                                                                 For standalone hashing invocations, [ADLER32] is always 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t adler32               : 32; /**< [ 31:  0] The ADLER32 result corresponding to the bytes processed in the uncompressed
                                                                 stream, starting with the checksum ZIP_INST_S[ADLERCRC32].

                                                                 For an error-free compression, [TOTALBYTESREAD] indicates the
                                                                 number of non-history bytes from the input stream that contributed to the hardware
                                                                 ADLER32 calculation. [ADLER32] is valid for all error-free compression invocations,
                                                                 whether at the beginning, middle, or end of file.

                                                                 For decompression, [ADLER32] is valid only for error-free invocations that find
                                                                 the end of file (i.e. that have [EF] = 1), where it indicates the ADLER/CRC32
                                                                 result for the file.

                                                                 For standalone hashing invocations, [ADLER32] is always 0x0. */
        uint64_t crc32                 : 32; /**< [ 63: 32] The CRC32 result corresponding to the bytes processed in the uncompressed stream,
                                                                 seeded with ZIP_INST_S[ADLERCRC32].

                                                                 For an error-free compression, [TOTALBYTESREAD] indicates the
                                                                 number of non-history bytes from the input stream that contributed to the hardware
                                                                 CRC32 calculation. [CRC32] is valid for all error-free compression invocations,
                                                                 whether at the beginning, middle, or end of file.

                                                                 For decompression, [CRC32] is valid only for error-free invocations that find the end of
                                                                 file (i.e. that have [EF] = 1), where it indicates the ADLER/CRC32 result
                                                                 for the file.

                                                                 For standalone hashing invocations, [CRC32] is always 0x0. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t totalbyteswritten     : 32; /**< [127: 96] The total number of bytes produced in the output stream during this coprocessor
                                                                 invocation. [TOTALBYTESWRITTEN] does not exceed ZIP_INST_S[TOTALOUTPUTLENGTH] in all
                                                                 error-free cases.

                                                                 For an error-free compression, [TOTALBYTESWRITTEN] is the number of
                                                                 compressed output bytes that were written during the compression. This includes
                                                                 any valid [EXN],[EXBITS] when [EF] = 1, and excludes any valid [EXN],[EXBITS] when [EF] =
                                                                 0.

                                                                 For an error-free decompression, [TOTALBYTESWRITTEN] is the number of
                                                                 uncompressed output bytes produced by the operation.

                                                                 For standalone hashing invocations, [TOTALBYTESWRITTEN] is always 0. */
        uint64_t totalbytesread        : 32; /**< [ 95: 64] The total number of bytes processed from the input stream during this coprocessor
                                                                 invocation. Note that for a compression operation, [TOTALBYTESREAD] does count
                                                                 the history bytes read in (when ZIP_INST_S[HISTORYLENGTH] != 0x0).

                                                                 For an error-free compression, [TOTALBYTESREAD] - ZIP_INST_S[HISTORYLENGTH] is
                                                                 the number of uncompressed input bytes which, when compressed and concatenated after
                                                                 ZIP_INST_S[EXN], ZIP_INST_S[EXBITS], produces the compressed byte-output stream
                                                                 (and [EXN],[EXBITS] when valid). In all error-free compression
                                                                 invocations, [TOTALBYTESREAD] equals the total number of input bytes supplied
                                                                 via ZIP_INST_S[INP_PTR_ADDR] (input and compression history bytes).

                                                                 For an error-free decompression, [TOTALBYTESREAD] is the number of compressed
                                                                 input bytes which were read during the decompression.

                                                                 For standalone hashing invocations, [TOTALBYTESREAD] is unpredictable. */
#else /* Word 1 - Little Endian */
        uint64_t totalbytesread        : 32; /**< [ 95: 64] The total number of bytes processed from the input stream during this coprocessor
                                                                 invocation. Note that for a compression operation, [TOTALBYTESREAD] does count
                                                                 the history bytes read in (when ZIP_INST_S[HISTORYLENGTH] != 0x0).

                                                                 For an error-free compression, [TOTALBYTESREAD] - ZIP_INST_S[HISTORYLENGTH] is
                                                                 the number of uncompressed input bytes which, when compressed and concatenated after
                                                                 ZIP_INST_S[EXN], ZIP_INST_S[EXBITS], produces the compressed byte-output stream
                                                                 (and [EXN],[EXBITS] when valid). In all error-free compression
                                                                 invocations, [TOTALBYTESREAD] equals the total number of input bytes supplied
                                                                 via ZIP_INST_S[INP_PTR_ADDR] (input and compression history bytes).

                                                                 For an error-free decompression, [TOTALBYTESREAD] is the number of compressed
                                                                 input bytes which were read during the decompression.

                                                                 For standalone hashing invocations, [TOTALBYTESREAD] is unpredictable. */
        uint64_t totalbyteswritten     : 32; /**< [127: 96] The total number of bytes produced in the output stream during this coprocessor
                                                                 invocation. [TOTALBYTESWRITTEN] does not exceed ZIP_INST_S[TOTALOUTPUTLENGTH] in all
                                                                 error-free cases.

                                                                 For an error-free compression, [TOTALBYTESWRITTEN] is the number of
                                                                 compressed output bytes that were written during the compression. This includes
                                                                 any valid [EXN],[EXBITS] when [EF] = 1, and excludes any valid [EXN],[EXBITS] when [EF] =
                                                                 0.

                                                                 For an error-free decompression, [TOTALBYTESWRITTEN] is the number of
                                                                 uncompressed output bytes produced by the operation.

                                                                 For standalone hashing invocations, [TOTALBYTESWRITTEN] is always 0. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t totalbitsprocessed    : 32; /**< [191:160] When [EF] = 1 for an error-free decompression operation, [TOTALBITSPROCESSED] indicates
                                                                 the number of compressed input bits consumed to decompress all blocks in the file.
                                                                 ([TOTALBITSPROCESSED] + 7)/8 is the total number of bytes in the entire compressed
                                                                 input stream from the file in that case. (For example, this can be used to find the
                                                                 location of the ADLER32/CRC32 codes that follow the compressed data.) Note that
                                                                 [TOTALBITSPROCESSED] refers to the total number of bits processed during all invocations
                                                                 of the ZIP decompression coprocessor for the entire file.

                                                                 For any decompression with an error or with [EF] = 0, [TOTALBITSPROCESSED] is
                                                                 unused and unpredictable.

                                                                 For any compression operation, [TOTALBITSPROCESSED] is unused and unpredictable.

                                                                 For any standalone hashing, [TOTALBITSPROCESSED] is the byte count of all the
                                                                 bytes hashed in the current instruction. When ZIP_INST_S[BF] and ZIP_INST_S[IV]
                                                                 are set, [TOTALBITSPROCESSED] also includes the ZIP_HASH_S[PREVLEN] bytes of
                                                                 header included in ZIP_HASH_S[PDATA0...7].  The field name is historical, and the
                                                                 units for standalone hashing are bytes.

                                                                 If the true total bits processed by the ZIP coprocessor equals or exceeds 2^32
                                                                 for a file, [TOTALBITSPROCESSED] contains the low-order 32-bits of the actual
                                                                 value for the file. If necessary, in this large file decompression case,
                                                                 software can calculate the true total bits processed by the ZIP coprocessor
                                                                 using the [TOTALBITSPROCESSED] value returned by the hardware, together with the
                                                                 total number of input bytes in the compressed file. */
        uint64_t doneint               : 1;  /**< [159:159] Done interrupt. This bit is copied from the corresponding ZIP instruction ZIP_INST_S[DONEINT]. */
        uint64_t reserved_155_158      : 4;
        uint64_t exn                   : 3;  /**< [154:152] The number of extra bits produced beyond the last output byte written.  See details in [EXBITS]. */
        uint64_t reserved_151          : 1;
        uint64_t exbits                : 7;  /**< [150:144] [EXN] and [EXBITS] specify the compressed bits produced beyond the last compressed byte
                                                                 written. These bits are required context for partial-file processing, as the ZIP
                                                                 compression algorithm produces a compressed bit stream, but the output stream of the
                                                                 operation is byte-based. [EXN], [EXBITS] are valid for any error-free compression when
                                                                 ZIP_INST_S[EF] = 0 and ZIP_INST_S[SF] = 0, and are not used and unpredictable in all
                                                                 other cases.

                                                                 [EXBITS] contains the extra bits. Bit \<0\> contains the first extra bit, \<1\> the
                                                                 second extra bit, etc.

                                                                 For decompression or standalone hashing, [EXN] and [EXBITS] are not used and are
                                                                 unpredictable. */
        uint64_t reserved_137_143      : 7;
        uint64_t ef                    : 1;  /**< [136:136] End of file.

                                                                 For any error-free decompression, [EF] indicates whether the ZIP coprocessor
                                                                 completed decompression of all blocks in the file during this invocation. If
                                                                 [EF] = 1 for a decompression operation, the ZIP coprocessor must not be invoked
                                                                 again for further processing on this file.

                                                                 For compression or standalone hashing, [EF] is not used and is unpredictable. */
        uint64_t compcode              : 8;  /**< [135:128] Indicates completion/error status of the ZIP coprocessor for this invocation,
                                                                 as enumerated by ZIP_COMP_E.  Software may write the memory location containing
                                                                 [COMPCODE] to 0x0 before submitting the instruction, and then poll for completion
                                                                 by checking for a nonzero value.

                                                                 Once software observes a nonzero [COMPCODE] value in this case, the ZIP
                                                                 coprocessor will have also completed LLC/DRAM write operations for all context,
                                                                 output stream, and result data. */
#else /* Word 2 - Little Endian */
        uint64_t compcode              : 8;  /**< [135:128] Indicates completion/error status of the ZIP coprocessor for this invocation,
                                                                 as enumerated by ZIP_COMP_E.  Software may write the memory location containing
                                                                 [COMPCODE] to 0x0 before submitting the instruction, and then poll for completion
                                                                 by checking for a nonzero value.

                                                                 Once software observes a nonzero [COMPCODE] value in this case, the ZIP
                                                                 coprocessor will have also completed LLC/DRAM write operations for all context,
                                                                 output stream, and result data. */
        uint64_t ef                    : 1;  /**< [136:136] End of file.

                                                                 For any error-free decompression, [EF] indicates whether the ZIP coprocessor
                                                                 completed decompression of all blocks in the file during this invocation. If
                                                                 [EF] = 1 for a decompression operation, the ZIP coprocessor must not be invoked
                                                                 again for further processing on this file.

                                                                 For compression or standalone hashing, [EF] is not used and is unpredictable. */
        uint64_t reserved_137_143      : 7;
        uint64_t exbits                : 7;  /**< [150:144] [EXN] and [EXBITS] specify the compressed bits produced beyond the last compressed byte
                                                                 written. These bits are required context for partial-file processing, as the ZIP
                                                                 compression algorithm produces a compressed bit stream, but the output stream of the
                                                                 operation is byte-based. [EXN], [EXBITS] are valid for any error-free compression when
                                                                 ZIP_INST_S[EF] = 0 and ZIP_INST_S[SF] = 0, and are not used and unpredictable in all
                                                                 other cases.

                                                                 [EXBITS] contains the extra bits. Bit \<0\> contains the first extra bit, \<1\> the
                                                                 second extra bit, etc.

                                                                 For decompression or standalone hashing, [EXN] and [EXBITS] are not used and are
                                                                 unpredictable. */
        uint64_t reserved_151          : 1;
        uint64_t exn                   : 3;  /**< [154:152] The number of extra bits produced beyond the last output byte written.  See details in [EXBITS]. */
        uint64_t reserved_155_158      : 4;
        uint64_t doneint               : 1;  /**< [159:159] Done interrupt. This bit is copied from the corresponding ZIP instruction ZIP_INST_S[DONEINT]. */
        uint64_t totalbitsprocessed    : 32; /**< [191:160] When [EF] = 1 for an error-free decompression operation, [TOTALBITSPROCESSED] indicates
                                                                 the number of compressed input bits consumed to decompress all blocks in the file.
                                                                 ([TOTALBITSPROCESSED] + 7)/8 is the total number of bytes in the entire compressed
                                                                 input stream from the file in that case. (For example, this can be used to find the
                                                                 location of the ADLER32/CRC32 codes that follow the compressed data.) Note that
                                                                 [TOTALBITSPROCESSED] refers to the total number of bits processed during all invocations
                                                                 of the ZIP decompression coprocessor for the entire file.

                                                                 For any decompression with an error or with [EF] = 0, [TOTALBITSPROCESSED] is
                                                                 unused and unpredictable.

                                                                 For any compression operation, [TOTALBITSPROCESSED] is unused and unpredictable.

                                                                 For any standalone hashing, [TOTALBITSPROCESSED] is the byte count of all the
                                                                 bytes hashed in the current instruction. When ZIP_INST_S[BF] and ZIP_INST_S[IV]
                                                                 are set, [TOTALBITSPROCESSED] also includes the ZIP_HASH_S[PREVLEN] bytes of
                                                                 header included in ZIP_HASH_S[PDATA0...7].  The field name is historical, and the
                                                                 units for standalone hashing are bytes.

                                                                 If the true total bits processed by the ZIP coprocessor equals or exceeds 2^32
                                                                 for a file, [TOTALBITSPROCESSED] contains the low-order 32-bits of the actual
                                                                 value for the file. If necessary, in this large file decompression case,
                                                                 software can calculate the true total bits processed by the ZIP coprocessor
                                                                 using the [TOTALBITSPROCESSED] value returned by the hardware, together with the
                                                                 total number of input bytes in the compressed file. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t reserved_253_255      : 3;
        uint64_t hshlen                : 61; /**< [252:192] Total hash length in bytes. For compression-and-hash or standalone hashing, the
                                                                 sum of ZIP_HASH_S[PREVLEN] (if any was read, otherwise 0x0) and [TOTALBYTESREAD].
                                                                 For decompression, the sum of ZIP_HASH_S[PREVLEN] (if any were read, otherwise 0x0) and
                                                                 [TOTALBYTESWRITTEN].

                                                                 This word is only written when ZIP_INST_S[HALG] != ZIP_HASH_ALG_E::NONE. When
                                                                 ZIP_INST_S[HMIF] is set, [HSHLEN] is the total bytes hashed up to and including the
                                                                 current instruction. */
#else /* Word 3 - Little Endian */
        uint64_t hshlen                : 61; /**< [252:192] Total hash length in bytes. For compression-and-hash or standalone hashing, the
                                                                 sum of ZIP_HASH_S[PREVLEN] (if any was read, otherwise 0x0) and [TOTALBYTESREAD].
                                                                 For decompression, the sum of ZIP_HASH_S[PREVLEN] (if any were read, otherwise 0x0) and
                                                                 [TOTALBYTESWRITTEN].

                                                                 This word is only written when ZIP_INST_S[HALG] != ZIP_HASH_ALG_E::NONE. When
                                                                 ZIP_INST_S[HMIF] is set, [HSHLEN] is the total bytes hashed up to and including the
                                                                 current instruction. */
        uint64_t reserved_253_255      : 3;
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t hash0                 : 64; /**< [319:256] Double-word 0 of computed hash. The hash result in [HASH0]-[HASH3] is in the
                                                                 standards mandated big endian format (w4\<63:56\> for byte 0), and is not
                                                                 controlled by the ZIP_QUE()_SBUF_CTL[INST_BE] setting.

                                                                 This word is only written when ZIP_INST_S[HALG] != ZIP_HASH_ALG_E::NONE and
                                                                 ZIP_INST_S[HMIF] is clear.

                                                                 When ZIP_INST_S[HMIF] is set, [HASH0] is the double-word 0 of computed hash up to
                                                                 the latest 64 byte block. */
#else /* Word 4 - Little Endian */
        uint64_t hash0                 : 64; /**< [319:256] Double-word 0 of computed hash. The hash result in [HASH0]-[HASH3] is in the
                                                                 standards mandated big endian format (w4\<63:56\> for byte 0), and is not
                                                                 controlled by the ZIP_QUE()_SBUF_CTL[INST_BE] setting.

                                                                 This word is only written when ZIP_INST_S[HALG] != ZIP_HASH_ALG_E::NONE and
                                                                 ZIP_INST_S[HMIF] is clear.

                                                                 When ZIP_INST_S[HMIF] is set, [HASH0] is the double-word 0 of computed hash up to
                                                                 the latest 64 byte block. */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t hash1                 : 64; /**< [383:320] Double-word 1 of computed hash. See [HASH0]. */
#else /* Word 5 - Little Endian */
        uint64_t hash1                 : 64; /**< [383:320] Double-word 1 of computed hash. See [HASH0]. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t hash2                 : 64; /**< [447:384] Double-word 2 of computed hash. See [HASH0]. */
#else /* Word 6 - Little Endian */
        uint64_t hash2                 : 64; /**< [447:384] Double-word 2 of computed hash. See [HASH0]. */
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t hash3                 : 64; /**< [511:448] Double-word 3 of computed hash. See [HASH0]. */
#else /* Word 7 - Little Endian */
        uint64_t hash3                 : 64; /**< [511:448] Double-word 3 of computed hash. See [HASH0]. */
#endif /* Word 7 - End */
    } cn9;
    /* struct cavm_zip_zres_s_cn9 cn96xx; */
    struct cavm_zip_zres_s_cn98xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t crc32                 : 32; /**< [ 63: 32] The CRC32 result corresponding to the bytes processed in the uncompressed stream,
                                                                 seeded with ZIP_INST_S[ADLERCRC32].

                                                                 For an error-free compression, [TOTALBYTESREAD] indicates the
                                                                 number of non-history bytes from the input stream that contributed to the hardware
                                                                 CRC32 calculation. [CRC32] is valid for all error-free compression invocations,
                                                                 whether at the beginning, middle, or end of file.

                                                                 For decompression, [CRC32] is valid only for error-free invocations that find the end of
                                                                 file (i.e. that have [EF] = 1), where it indicates the ADLER/CRC32 result
                                                                 for the file.

                                                                 For standalone hashing invocations, [CRC32] is always 0x0. */
        uint64_t adler32               : 32; /**< [ 31:  0] The ADLER32 result corresponding to the bytes processed in the uncompressed
                                                                 stream, starting with the checksum ZIP_INST_S[ADLERCRC32].

                                                                 For an error-free compression, [TOTALBYTESREAD] indicates the
                                                                 number of non-history bytes from the input stream that contributed to the hardware
                                                                 ADLER32 calculation. [ADLER32] is valid for all error-free compression invocations,
                                                                 whether at the beginning, middle, or end of file.

                                                                 For decompression, [ADLER32] is valid only for error-free invocations that find
                                                                 the end of file (i.e. that have [EF] = 1), where it indicates the ADLER/CRC32
                                                                 result for the file.

                                                                 For standalone hashing invocations, [ADLER32] is always 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t adler32               : 32; /**< [ 31:  0] The ADLER32 result corresponding to the bytes processed in the uncompressed
                                                                 stream, starting with the checksum ZIP_INST_S[ADLERCRC32].

                                                                 For an error-free compression, [TOTALBYTESREAD] indicates the
                                                                 number of non-history bytes from the input stream that contributed to the hardware
                                                                 ADLER32 calculation. [ADLER32] is valid for all error-free compression invocations,
                                                                 whether at the beginning, middle, or end of file.

                                                                 For decompression, [ADLER32] is valid only for error-free invocations that find
                                                                 the end of file (i.e. that have [EF] = 1), where it indicates the ADLER/CRC32
                                                                 result for the file.

                                                                 For standalone hashing invocations, [ADLER32] is always 0x0. */
        uint64_t crc32                 : 32; /**< [ 63: 32] The CRC32 result corresponding to the bytes processed in the uncompressed stream,
                                                                 seeded with ZIP_INST_S[ADLERCRC32].

                                                                 For an error-free compression, [TOTALBYTESREAD] indicates the
                                                                 number of non-history bytes from the input stream that contributed to the hardware
                                                                 CRC32 calculation. [CRC32] is valid for all error-free compression invocations,
                                                                 whether at the beginning, middle, or end of file.

                                                                 For decompression, [CRC32] is valid only for error-free invocations that find the end of
                                                                 file (i.e. that have [EF] = 1), where it indicates the ADLER/CRC32 result
                                                                 for the file.

                                                                 For standalone hashing invocations, [CRC32] is always 0x0. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t totalbyteswritten     : 32; /**< [127: 96] The total number of bytes produced in the output stream during this coprocessor
                                                                 invocation. [TOTALBYTESWRITTEN] does not exceed ZIP_INST_S[TOTALOUTPUTLENGTH] in all
                                                                 error-free cases.

                                                                 For an error-free compression, [TOTALBYTESWRITTEN] is the number of
                                                                 compressed output bytes that were written during the compression. This includes
                                                                 any valid [EXN],[EXBITS] when [EF] = 1, and excludes any valid [EXN],[EXBITS] when [EF] =
                                                                 0.

                                                                 For an error-free decompression, [TOTALBYTESWRITTEN] is the number of
                                                                 uncompressed output bytes produced by the operation.

                                                                 For standalone hashing invocations, [TOTALBYTESWRITTEN] is always 0. */
        uint64_t totalbytesread        : 32; /**< [ 95: 64] The total number of bytes processed from the input stream during this coprocessor
                                                                 invocation. Note that for a compression operation, [TOTALBYTESREAD] does count
                                                                 the history bytes read in (when ZIP_INST_S[HISTORYLENGTH] != 0x0).

                                                                 For an error-free compression, [TOTALBYTESREAD] - ZIP_INST_S[HISTORYLENGTH] is
                                                                 the number of uncompressed input bytes which, when compressed and concatenated after
                                                                 ZIP_INST_S[EXN], ZIP_INST_S[EXBITS], produces the compressed byte-output stream
                                                                 (and [EXN],[EXBITS] when valid). In all error-free compression
                                                                 invocations, [TOTALBYTESREAD] equals the total number of input bytes supplied
                                                                 via ZIP_INST_S[INP_PTR_ADDR] (input and compression history bytes).

                                                                 For an error-free decompression, [TOTALBYTESREAD] is the number of compressed
                                                                 input bytes which were read during the decompression.

                                                                 For standalone hashing invocations, [TOTALBYTESREAD] is unpredictable. */
#else /* Word 1 - Little Endian */
        uint64_t totalbytesread        : 32; /**< [ 95: 64] The total number of bytes processed from the input stream during this coprocessor
                                                                 invocation. Note that for a compression operation, [TOTALBYTESREAD] does count
                                                                 the history bytes read in (when ZIP_INST_S[HISTORYLENGTH] != 0x0).

                                                                 For an error-free compression, [TOTALBYTESREAD] - ZIP_INST_S[HISTORYLENGTH] is
                                                                 the number of uncompressed input bytes which, when compressed and concatenated after
                                                                 ZIP_INST_S[EXN], ZIP_INST_S[EXBITS], produces the compressed byte-output stream
                                                                 (and [EXN],[EXBITS] when valid). In all error-free compression
                                                                 invocations, [TOTALBYTESREAD] equals the total number of input bytes supplied
                                                                 via ZIP_INST_S[INP_PTR_ADDR] (input and compression history bytes).

                                                                 For an error-free decompression, [TOTALBYTESREAD] is the number of compressed
                                                                 input bytes which were read during the decompression.

                                                                 For standalone hashing invocations, [TOTALBYTESREAD] is unpredictable. */
        uint64_t totalbyteswritten     : 32; /**< [127: 96] The total number of bytes produced in the output stream during this coprocessor
                                                                 invocation. [TOTALBYTESWRITTEN] does not exceed ZIP_INST_S[TOTALOUTPUTLENGTH] in all
                                                                 error-free cases.

                                                                 For an error-free compression, [TOTALBYTESWRITTEN] is the number of
                                                                 compressed output bytes that were written during the compression. This includes
                                                                 any valid [EXN],[EXBITS] when [EF] = 1, and excludes any valid [EXN],[EXBITS] when [EF] =
                                                                 0.

                                                                 For an error-free decompression, [TOTALBYTESWRITTEN] is the number of
                                                                 uncompressed output bytes produced by the operation.

                                                                 For standalone hashing invocations, [TOTALBYTESWRITTEN] is always 0. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t totalbitsprocessed    : 32; /**< [191:160] When [EF] = 1 for an error-free decompression operation, [TOTALBITSPROCESSED] indicates
                                                                 the number of compressed input bits consumed to decompress all blocks in the file.
                                                                 ([TOTALBITSPROCESSED] + 7)/8 is the total number of bytes in the entire compressed
                                                                 input stream from the file in that case. (For example, this can be used to find the
                                                                 location of the ADLER32/CRC32 codes that follow the compressed data.) Note that
                                                                 [TOTALBITSPROCESSED] refers to the total number of bits processed during all invocations
                                                                 of the ZIP decompression coprocessor for the entire file.

                                                                 For any decompression with an error or with [EF] = 0, [TOTALBITSPROCESSED] is
                                                                 unused and unpredictable.

                                                                 For any compression operation, [TOTALBITSPROCESSED] is unused and unpredictable.

                                                                 For any standalone hashing, [TOTALBITSPROCESSED] is the byte count of all the
                                                                 bytes hashed in the current instruction. When ZIP_INST_S[BF] and ZIP_INST_S[IV]
                                                                 are set, [TOTALBITSPROCESSED] also includes the ZIP_HASH_S[PREVLEN] bytes of
                                                                 header included in ZIP_HASH_S[PDATA0...7].  The field name is historical, and the
                                                                 units for standalone hashing are bytes.

                                                                 If the true total bits processed by the ZIP coprocessor equals or exceeds 2^32
                                                                 for a file, [TOTALBITSPROCESSED] contains the low-order 32-bits of the actual
                                                                 value for the file. If necessary, in this large file decompression case,
                                                                 software can calculate the true total bits processed by the ZIP coprocessor
                                                                 using the [TOTALBITSPROCESSED] value returned by the hardware, together with the
                                                                 total number of input bytes in the compressed file. */
        uint64_t doneint               : 1;  /**< [159:159] Done interrupt. This bit is copied from the corresponding ZIP instruction ZIP_INST_S[DONEINT]. */
        uint64_t reserved_155_158      : 4;
        uint64_t exn                   : 3;  /**< [154:152] The number of extra bits produced beyond the last output byte written.  See details in [EXBITS]. */
        uint64_t reserved_151          : 1;
        uint64_t exbits                : 7;  /**< [150:144] [EXN] and [EXBITS] specify the compressed bits produced beyond the last compressed byte
                                                                 written. These bits are required context for partial-file processing, as the ZIP
                                                                 compression algorithm produces a compressed bit stream, but the output stream of the
                                                                 operation is byte-based. [EXN], [EXBITS] are valid for any error-free compression when
                                                                 ZIP_INST_S[EF] = 0 and ZIP_INST_S[SF] = 0, and are not used and unpredictable in all
                                                                 other cases.

                                                                 [EXBITS] contains the extra bits. Bit \<0\> contains the first extra bit, \<1\> the
                                                                 second extra bit, etc.

                                                                 For decompression or standalone hashing, [EXN] and [EXBITS] are not used and are
                                                                 unpredictable. */
        uint64_t reserved_137_143      : 7;
        uint64_t ef                    : 1;  /**< [136:136] End of file.

                                                                 For any error-free decompression, [EF] indicates whether the ZIP coprocessor
                                                                 completed decompression of all blocks in the file during this invocation. If
                                                                 [EF] = 1 for a decompression operation, the ZIP coprocessor must not be invoked
                                                                 again for further processing on this file.

                                                                 For compression or standalone hashing, [EF] is not used and is unpredictable. */
        uint64_t compcode              : 8;  /**< [135:128] Indicates completion/error status of the ZIP coprocessor for this invocation,
                                                                 as enumerated by ZIP_COMP_E.  Software may write the memory location containing
                                                                 [COMPCODE] to 0x0 before submitting the instruction, and then poll for completion
                                                                 by checking for a nonzero value.

                                                                 Once software observes a nonzero [COMPCODE] value in this case, the ZIP
                                                                 coprocessor will have also completed LLC/DRAM write operations for all context,
                                                                 output stream, and result data. */
#else /* Word 2 - Little Endian */
        uint64_t compcode              : 8;  /**< [135:128] Indicates completion/error status of the ZIP coprocessor for this invocation,
                                                                 as enumerated by ZIP_COMP_E.  Software may write the memory location containing
                                                                 [COMPCODE] to 0x0 before submitting the instruction, and then poll for completion
                                                                 by checking for a nonzero value.

                                                                 Once software observes a nonzero [COMPCODE] value in this case, the ZIP
                                                                 coprocessor will have also completed LLC/DRAM write operations for all context,
                                                                 output stream, and result data. */
        uint64_t ef                    : 1;  /**< [136:136] End of file.

                                                                 For any error-free decompression, [EF] indicates whether the ZIP coprocessor
                                                                 completed decompression of all blocks in the file during this invocation. If
                                                                 [EF] = 1 for a decompression operation, the ZIP coprocessor must not be invoked
                                                                 again for further processing on this file.

                                                                 For compression or standalone hashing, [EF] is not used and is unpredictable. */
        uint64_t reserved_137_143      : 7;
        uint64_t exbits                : 7;  /**< [150:144] [EXN] and [EXBITS] specify the compressed bits produced beyond the last compressed byte
                                                                 written. These bits are required context for partial-file processing, as the ZIP
                                                                 compression algorithm produces a compressed bit stream, but the output stream of the
                                                                 operation is byte-based. [EXN], [EXBITS] are valid for any error-free compression when
                                                                 ZIP_INST_S[EF] = 0 and ZIP_INST_S[SF] = 0, and are not used and unpredictable in all
                                                                 other cases.

                                                                 [EXBITS] contains the extra bits. Bit \<0\> contains the first extra bit, \<1\> the
                                                                 second extra bit, etc.

                                                                 For decompression or standalone hashing, [EXN] and [EXBITS] are not used and are
                                                                 unpredictable. */
        uint64_t reserved_151          : 1;
        uint64_t exn                   : 3;  /**< [154:152] The number of extra bits produced beyond the last output byte written.  See details in [EXBITS]. */
        uint64_t reserved_155_158      : 4;
        uint64_t doneint               : 1;  /**< [159:159] Done interrupt. This bit is copied from the corresponding ZIP instruction ZIP_INST_S[DONEINT]. */
        uint64_t totalbitsprocessed    : 32; /**< [191:160] When [EF] = 1 for an error-free decompression operation, [TOTALBITSPROCESSED] indicates
                                                                 the number of compressed input bits consumed to decompress all blocks in the file.
                                                                 ([TOTALBITSPROCESSED] + 7)/8 is the total number of bytes in the entire compressed
                                                                 input stream from the file in that case. (For example, this can be used to find the
                                                                 location of the ADLER32/CRC32 codes that follow the compressed data.) Note that
                                                                 [TOTALBITSPROCESSED] refers to the total number of bits processed during all invocations
                                                                 of the ZIP decompression coprocessor for the entire file.

                                                                 For any decompression with an error or with [EF] = 0, [TOTALBITSPROCESSED] is
                                                                 unused and unpredictable.

                                                                 For any compression operation, [TOTALBITSPROCESSED] is unused and unpredictable.

                                                                 For any standalone hashing, [TOTALBITSPROCESSED] is the byte count of all the
                                                                 bytes hashed in the current instruction. When ZIP_INST_S[BF] and ZIP_INST_S[IV]
                                                                 are set, [TOTALBITSPROCESSED] also includes the ZIP_HASH_S[PREVLEN] bytes of
                                                                 header included in ZIP_HASH_S[PDATA0...7].  The field name is historical, and the
                                                                 units for standalone hashing are bytes.

                                                                 If the true total bits processed by the ZIP coprocessor equals or exceeds 2^32
                                                                 for a file, [TOTALBITSPROCESSED] contains the low-order 32-bits of the actual
                                                                 value for the file. If necessary, in this large file decompression case,
                                                                 software can calculate the true total bits processed by the ZIP coprocessor
                                                                 using the [TOTALBITSPROCESSED] value returned by the hardware, together with the
                                                                 total number of input bytes in the compressed file. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t reserved_253_255      : 3;
        uint64_t hshlen                : 61; /**< [252:192] Total hash length in bytes. For compression-and-hash or standalone hashing, the
                                                                 sum of ZIP_HASH_S[PREVLEN] (if any was read, otherwise 0x0) and [TOTALBYTESREAD].
                                                                 For decompression, the sum of ZIP_HASH_S[PREVLEN] (if any were read, otherwise 0x0) and
                                                                 [TOTALBYTESWRITTEN].

                                                                 This word is only written when ZIP_INST_S[HALG] != ZIP_HASH_ALG_E::NONE. When
                                                                 ZIP_INST_S[HMIF] is set, [HSHLEN] is the total bytes hashed up to and including the
                                                                 current instruction. */
#else /* Word 3 - Little Endian */
        uint64_t hshlen                : 61; /**< [252:192] Total hash length in bytes. For compression-and-hash or standalone hashing, the
                                                                 sum of ZIP_HASH_S[PREVLEN] (if any was read, otherwise 0x0) and [TOTALBYTESREAD].
                                                                 For decompression, the sum of ZIP_HASH_S[PREVLEN] (if any were read, otherwise 0x0) and
                                                                 [TOTALBYTESWRITTEN].

                                                                 This word is only written when ZIP_INST_S[HALG] != ZIP_HASH_ALG_E::NONE. When
                                                                 ZIP_INST_S[HMIF] is set, [HSHLEN] is the total bytes hashed up to and including the
                                                                 current instruction. */
        uint64_t reserved_253_255      : 3;
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t hash0                 : 64; /**< [319:256] Double-word 0 of computed hash. The hash result in [HASH0]-[HASH3] is in the
                                                                 standards mandated big endian format (w4\<63:56\> for byte 0), and is not
                                                                 controlled by the ZIP()_QUE()_SBUF_CTL[INST_BE] setting.

                                                                 This word is only written when ZIP_INST_S[HALG] != ZIP_HASH_ALG_E::NONE and
                                                                 ZIP_INST_S[HMIF] is clear.

                                                                 When ZIP_INST_S[HMIF] is set, [HASH0] is the double-word 0 of computed hash up to
                                                                 the latest 64 byte block. */
#else /* Word 4 - Little Endian */
        uint64_t hash0                 : 64; /**< [319:256] Double-word 0 of computed hash. The hash result in [HASH0]-[HASH3] is in the
                                                                 standards mandated big endian format (w4\<63:56\> for byte 0), and is not
                                                                 controlled by the ZIP()_QUE()_SBUF_CTL[INST_BE] setting.

                                                                 This word is only written when ZIP_INST_S[HALG] != ZIP_HASH_ALG_E::NONE and
                                                                 ZIP_INST_S[HMIF] is clear.

                                                                 When ZIP_INST_S[HMIF] is set, [HASH0] is the double-word 0 of computed hash up to
                                                                 the latest 64 byte block. */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t hash1                 : 64; /**< [383:320] Double-word 1 of computed hash. See [HASH0]. */
#else /* Word 5 - Little Endian */
        uint64_t hash1                 : 64; /**< [383:320] Double-word 1 of computed hash. See [HASH0]. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t hash2                 : 64; /**< [447:384] Double-word 2 of computed hash. See [HASH0]. */
#else /* Word 6 - Little Endian */
        uint64_t hash2                 : 64; /**< [447:384] Double-word 2 of computed hash. See [HASH0]. */
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t hash3                 : 64; /**< [511:448] Double-word 3 of computed hash. See [HASH0]. */
#else /* Word 7 - Little Endian */
        uint64_t hash3                 : 64; /**< [511:448] Double-word 3 of computed hash. See [HASH0]. */
#endif /* Word 7 - End */
    } cn98xx;
};

/**
 * Register (NCB) zip#_cmd_ctl
 *
 * ZIP Clock/Reset Control Register
 * This register controls clock and reset.
 */
union cavm_zipx_cmd_ctl
{
    uint64_t u;
    struct cavm_zipx_cmd_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t eng_forceclk          : 12; /**< [ 43: 32](R/W) When a bit is set to 1, it forces corresponding ZIP engine conditional clock always on. */
        uint64_t reserved_3_31         : 29;
        uint64_t ctl_forceclk          : 1;  /**< [  2:  2](R/W) When this bit is set to 1, it forces CTL conditional clock always on. */
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) When this bit is set to 1, it forces all ZIP subsystem conditional clocks on. */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset one-shot pulse to reset ZIP subsystem. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset one-shot pulse to reset ZIP subsystem. */
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) When this bit is set to 1, it forces all ZIP subsystem conditional clocks on. */
        uint64_t ctl_forceclk          : 1;  /**< [  2:  2](R/W) When this bit is set to 1, it forces CTL conditional clock always on. */
        uint64_t reserved_3_31         : 29;
        uint64_t eng_forceclk          : 12; /**< [ 43: 32](R/W) When a bit is set to 1, it forces corresponding ZIP engine conditional clock always on. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_cmd_ctl_s cn; */
};
typedef union cavm_zipx_cmd_ctl cavm_zipx_cmd_ctl_t;

static inline uint64_t CAVM_ZIPX_CMD_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_CMD_CTL(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000000ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_CMD_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_CMD_CTL(a) cavm_zipx_cmd_ctl_t
#define bustype_CAVM_ZIPX_CMD_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_CMD_CTL(a) "ZIPX_CMD_CTL"
#define device_bar_CAVM_ZIPX_CMD_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_CMD_CTL(a) (a)
#define arguments_CAVM_ZIPX_CMD_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_constants
 *
 * ZIP Constants Register
 * This register contains implementation-related parameters of the ZIP core in this
 * chip.
 */
union cavm_zipx_constants
{
    uint64_t u;
    struct cavm_zipx_constants_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nexec                 : 8;  /**< [ 63: 56](RO/H) Number of max available ZIP execution units (compression-only plus decompression-only
                                                                 plus compression-or-decompression). */
        uint64_t reserved_50_55        : 6;
        uint64_t hash                  : 1;  /**< [ 49: 49](RO) Hashing supported: 1 = supported, 0 = not supported. */
        uint64_t syncflush_capable     : 1;  /**< [ 48: 48](RO) Sync flush supported: 1 = supported, 0 = not supported. */
        uint64_t depth                 : 16; /**< [ 47: 32](RO) Maximum search depth for compression. */
        uint64_t onfsize               : 12; /**< [ 31: 20](RO) Output near full threshold, in bytes. */
        uint64_t ctxsize               : 12; /**< [ 19:  8](RO) Decompression context size in bytes. */
        uint64_t reserved_1_7          : 7;
        uint64_t disabled              : 1;  /**< [  0:  0](RO) Disable. 1 = ZIP is disabled, 0 = ZIP is enabled. */
#else /* Word 0 - Little Endian */
        uint64_t disabled              : 1;  /**< [  0:  0](RO) Disable. 1 = ZIP is disabled, 0 = ZIP is enabled. */
        uint64_t reserved_1_7          : 7;
        uint64_t ctxsize               : 12; /**< [ 19:  8](RO) Decompression context size in bytes. */
        uint64_t onfsize               : 12; /**< [ 31: 20](RO) Output near full threshold, in bytes. */
        uint64_t depth                 : 16; /**< [ 47: 32](RO) Maximum search depth for compression. */
        uint64_t syncflush_capable     : 1;  /**< [ 48: 48](RO) Sync flush supported: 1 = supported, 0 = not supported. */
        uint64_t hash                  : 1;  /**< [ 49: 49](RO) Hashing supported: 1 = supported, 0 = not supported. */
        uint64_t reserved_50_55        : 6;
        uint64_t nexec                 : 8;  /**< [ 63: 56](RO/H) Number of max available ZIP execution units (compression-only plus decompression-only
                                                                 plus compression-or-decompression). */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_constants_s cn; */
};
typedef union cavm_zipx_constants cavm_zipx_constants_t;

static inline uint64_t CAVM_ZIPX_CONSTANTS(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_CONSTANTS(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x8380000000a0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_CONSTANTS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_CONSTANTS(a) cavm_zipx_constants_t
#define bustype_CAVM_ZIPX_CONSTANTS(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_CONSTANTS(a) "ZIPX_CONSTANTS"
#define device_bar_CAVM_ZIPX_CONSTANTS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_CONSTANTS(a) (a)
#define arguments_CAVM_ZIPX_CONSTANTS(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_constants2
 *
 * ZIP Constants 2 Register
 * This register contains additional implementation-related parameters of the ZIP core
 * in this chip.
 */
union cavm_zipx_constants2
{
    uint64_t u;
    struct cavm_zipx_constants2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t texec                 : 24; /**< [ 39: 16](RO/H) Execution unit type. The lower ZIP()_CONSTANTS[NEXEC] bits of this field define
                                                                 a bit mask indicating the type of the corresponding ZIP engine.
                                                                 0 = Decompression engine.
                                                                 1 = Compression engine. */
        uint64_t dexec                 : 8;  /**< [ 15:  8](RO/H) Number of enabled decompression-only units. */
        uint64_t cexec                 : 8;  /**< [  7:  0](RO/H) Number of enabled compression-only units. */
#else /* Word 0 - Little Endian */
        uint64_t cexec                 : 8;  /**< [  7:  0](RO/H) Number of enabled compression-only units. */
        uint64_t dexec                 : 8;  /**< [ 15:  8](RO/H) Number of enabled decompression-only units. */
        uint64_t texec                 : 24; /**< [ 39: 16](RO/H) Execution unit type. The lower ZIP()_CONSTANTS[NEXEC] bits of this field define
                                                                 a bit mask indicating the type of the corresponding ZIP engine.
                                                                 0 = Decompression engine.
                                                                 1 = Compression engine. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_constants2_s cn; */
};
typedef union cavm_zipx_constants2 cavm_zipx_constants2_t;

static inline uint64_t CAVM_ZIPX_CONSTANTS2(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_CONSTANTS2(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x8380000000a8ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_CONSTANTS2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_CONSTANTS2(a) cavm_zipx_constants2_t
#define bustype_CAVM_ZIPX_CONSTANTS2(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_CONSTANTS2(a) "ZIPX_CONSTANTS2"
#define device_bar_CAVM_ZIPX_CONSTANTS2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_CONSTANTS2(a) (a)
#define arguments_CAVM_ZIPX_CONSTANTS2(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_core#_bp_test
 *
 * INTERNAL: ZIP Backpressure Test Registers
 */
union cavm_zipx_corex_bp_test
{
    uint64_t u;
    struct cavm_zipx_corex_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t enable                : 4;  /**< [ 51: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<51\> = Randomly make corresponding engine gather  FIFO output not valid.
                                                                 \<50\> = Randomly make corresponding engine scatter FIFO output not valid.
                                                                 \<49\> = Randomly make corresponding engine input   FIFO output not valid.
                                                                 \<48\> = Randomly make corresponding engine input tag FIFO output not valid.

                                                                 NOTE: Setting multiple [ENABLE]s could slow down the corresponding engine read DMA. */
        uint64_t reserved_24_47        : 24;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<23:22\> = Config 3.
                                                                    \<21:20\> = Config 2.
                                                                    \<19:18\> = Config 1.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
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
                                                                    \<23:22\> = Config 3.
                                                                    \<21:20\> = Config 2.
                                                                    \<19:18\> = Config 1.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_24_47        : 24;
        uint64_t enable                : 4;  /**< [ 51: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<51\> = Randomly make corresponding engine gather  FIFO output not valid.
                                                                 \<50\> = Randomly make corresponding engine scatter FIFO output not valid.
                                                                 \<49\> = Randomly make corresponding engine input   FIFO output not valid.
                                                                 \<48\> = Randomly make corresponding engine input tag FIFO output not valid.

                                                                 NOTE: Setting multiple [ENABLE]s could slow down the corresponding engine read DMA. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_corex_bp_test_s cn; */
};
typedef union cavm_zipx_corex_bp_test cavm_zipx_corex_bp_test_t;

static inline uint64_t CAVM_ZIPX_COREX_BP_TEST(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_COREX_BP_TEST(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=11)))
        return 0x838000003400ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("ZIPX_COREX_BP_TEST", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_COREX_BP_TEST(a,b) cavm_zipx_corex_bp_test_t
#define bustype_CAVM_ZIPX_COREX_BP_TEST(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_COREX_BP_TEST(a,b) "ZIPX_COREX_BP_TEST"
#define device_bar_CAVM_ZIPX_COREX_BP_TEST(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_COREX_BP_TEST(a,b) (a)
#define arguments_CAVM_ZIPX_COREX_BP_TEST(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_core#_to_sta
 *
 * ZIP Core Status Registers
 * These registers reflect the timeout status of ZIP cores.
 */
union cavm_zipx_corex_to_sta
{
    uint64_t u;
    struct cavm_zipx_corex_to_sta_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cnt                   : 32; /**< [ 31:  0](RO/H) Timeout counter value. The counter is reset to 0x0 whenever there is a output
                                                                 from ZIP engine or there is no output buffer credit for the ZIP
                                                                 engine. Otherwise, increments and is compared with ZIP()_CORE_TO_CFG[TIMEOUT]. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 32; /**< [ 31:  0](RO/H) Timeout counter value. The counter is reset to 0x0 whenever there is a output
                                                                 from ZIP engine or there is no output buffer credit for the ZIP
                                                                 engine. Otherwise, increments and is compared with ZIP()_CORE_TO_CFG[TIMEOUT]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_corex_to_sta_s cn; */
};
typedef union cavm_zipx_corex_to_sta cavm_zipx_corex_to_sta_t;

static inline uint64_t CAVM_ZIPX_COREX_TO_STA(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_COREX_TO_STA(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=11)))
        return 0x838000000780ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("ZIPX_COREX_TO_STA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_COREX_TO_STA(a,b) cavm_zipx_corex_to_sta_t
#define bustype_CAVM_ZIPX_COREX_TO_STA(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_COREX_TO_STA(a,b) "ZIPX_COREX_TO_STA"
#define device_bar_CAVM_ZIPX_COREX_TO_STA(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_COREX_TO_STA(a,b) (a)
#define arguments_CAVM_ZIPX_COREX_TO_STA(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_core_reset
 *
 * ZIP Core Reset Register
 * This register resets the ZIP cores. For diagnostic use only.
 */
union cavm_zipx_core_reset
{
    uint64_t u;
    struct cavm_zipx_core_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reac                  : 1;  /**< [ 63: 63](R/W) Reset ZIP engine after completion of each instruction, to limit exposure to
                                                                 corrupt commands and structures affecting subsequent commands. */
        uint64_t reac_plus             : 1;  /**< [ 62: 62](R/W) Reserved.
                                                                 Internal:
                                                                 Additional CYA mode to reset both the ZIP engine and engine control logic
                                                                 after completion of each instruction.  The existing REAC mode (bit 63)
                                                                 only resets the ZIP engine, and preserves the state of some engine control
                                                                 logic.  This mode only takes effect if the REAC mode is also
                                                                 enabled. */
        uint64_t reserved_12_61        : 50;
        uint64_t reset                 : 12; /**< [ 11:  0](R/W) When set, the corresponding core will be put into reset. When clear, the core is out of
                                                                 reset.  Bit[\<a\>] resets ZIP core \<a\>. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 12; /**< [ 11:  0](R/W) When set, the corresponding core will be put into reset. When clear, the core is out of
                                                                 reset.  Bit[\<a\>] resets ZIP core \<a\>. */
        uint64_t reserved_12_61        : 50;
        uint64_t reac_plus             : 1;  /**< [ 62: 62](R/W) Reserved.
                                                                 Internal:
                                                                 Additional CYA mode to reset both the ZIP engine and engine control logic
                                                                 after completion of each instruction.  The existing REAC mode (bit 63)
                                                                 only resets the ZIP engine, and preserves the state of some engine control
                                                                 logic.  This mode only takes effect if the REAC mode is also
                                                                 enabled. */
        uint64_t reac                  : 1;  /**< [ 63: 63](R/W) Reset ZIP engine after completion of each instruction, to limit exposure to
                                                                 corrupt commands and structures affecting subsequent commands. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_core_reset_s cn; */
};
typedef union cavm_zipx_core_reset cavm_zipx_core_reset_t;

static inline uint64_t CAVM_ZIPX_CORE_RESET(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_CORE_RESET(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000300ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_CORE_RESET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_CORE_RESET(a) cavm_zipx_core_reset_t
#define bustype_CAVM_ZIPX_CORE_RESET(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_CORE_RESET(a) "ZIPX_CORE_RESET"
#define device_bar_CAVM_ZIPX_CORE_RESET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_CORE_RESET(a) (a)
#define arguments_CAVM_ZIPX_CORE_RESET(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_core_to_cfg
 *
 * ZIP Engine Timeout Configure Register
 * Configures the core timeout value in terms of coprocessor clock cycles.
 */
union cavm_zipx_core_to_cfg
{
    uint64_t u;
    struct cavm_zipx_core_to_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t halt                  : 1;  /**< [ 63: 63](R/W) If set, when timeout is detected, control will halt input and output and set the
                                                                 completion code in result buffer to ZIP_COMP_E::TIMEOUT. If cleared (for
                                                                 diagnostic use only), if ZIP core continues outputting after timeout period the
                                                                 instruction will still be finished by the ZIP core. */
        uint64_t ar                    : 1;  /**< [ 62: 62](R/W) Auto reset. This bit only takes effect when [HALT] is set. When [HALT] is cleared, [AR] is
                                                                 ignored.
                                                                 0 = On a timeout, the timed-out core will hold the timed-out operation and not be auto-
                                                                 reset.
                                                                 1 = On a timeout, the timed-out core will be auto-reset. */
        uint64_t reserved_32_61        : 30;
        uint64_t timeout               : 32; /**< [ 31:  0](R/W) Number of coprocessor-clocks before a ZIP engine is considered hung. When the
                                                                 ZIP()_CORE()_TO_STA[CNT] reaches ZIP()_CORE_TO_CFG[TIMEOUT], the ZIP engine hang
                                                                 can be reported through interrupt ZIP()_VF()_MISC_INT[CTO] if the interrupt is enabled.
                                                                 If [TIMEOUT] is 0, engine timeout detection is disabled.

                                                                 Internal:
                                                                 Decompression could be very slow if someone created a malicious compressed stream.
                                                                 Compression is much more bounded. The worst case would be .5B/cycle plus the Huffman
                                                                 encoding delay of around 8K cycles. Also note the cripple feature can increase the worst
                                                                 case delay 4x.
                                                                 If hangs are just theoretical and therefore very rare, using a large number say 1M
                                                                 cycles is recommended. Assume 1K cycles to cover the decompression time, plus 8K
                                                                 Huffman encoding delay, for a total of 9K cycles. In the worst crippled case, the
                                                                 timeout upper limit is 9K x 4 x 4 = 36K x 4 = 0x24000. For SKUs without cripple, S/W can
                                                                 overwrite this value to 0x2400. */
#else /* Word 0 - Little Endian */
        uint64_t timeout               : 32; /**< [ 31:  0](R/W) Number of coprocessor-clocks before a ZIP engine is considered hung. When the
                                                                 ZIP()_CORE()_TO_STA[CNT] reaches ZIP()_CORE_TO_CFG[TIMEOUT], the ZIP engine hang
                                                                 can be reported through interrupt ZIP()_VF()_MISC_INT[CTO] if the interrupt is enabled.
                                                                 If [TIMEOUT] is 0, engine timeout detection is disabled.

                                                                 Internal:
                                                                 Decompression could be very slow if someone created a malicious compressed stream.
                                                                 Compression is much more bounded. The worst case would be .5B/cycle plus the Huffman
                                                                 encoding delay of around 8K cycles. Also note the cripple feature can increase the worst
                                                                 case delay 4x.
                                                                 If hangs are just theoretical and therefore very rare, using a large number say 1M
                                                                 cycles is recommended. Assume 1K cycles to cover the decompression time, plus 8K
                                                                 Huffman encoding delay, for a total of 9K cycles. In the worst crippled case, the
                                                                 timeout upper limit is 9K x 4 x 4 = 36K x 4 = 0x24000. For SKUs without cripple, S/W can
                                                                 overwrite this value to 0x2400. */
        uint64_t reserved_32_61        : 30;
        uint64_t ar                    : 1;  /**< [ 62: 62](R/W) Auto reset. This bit only takes effect when [HALT] is set. When [HALT] is cleared, [AR] is
                                                                 ignored.
                                                                 0 = On a timeout, the timed-out core will hold the timed-out operation and not be auto-
                                                                 reset.
                                                                 1 = On a timeout, the timed-out core will be auto-reset. */
        uint64_t halt                  : 1;  /**< [ 63: 63](R/W) If set, when timeout is detected, control will halt input and output and set the
                                                                 completion code in result buffer to ZIP_COMP_E::TIMEOUT. If cleared (for
                                                                 diagnostic use only), if ZIP core continues outputting after timeout period the
                                                                 instruction will still be finished by the ZIP core. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_core_to_cfg_s cn; */
};
typedef union cavm_zipx_core_to_cfg cavm_zipx_core_to_cfg_t;

static inline uint64_t CAVM_ZIPX_CORE_TO_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_CORE_TO_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000700ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_CORE_TO_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_CORE_TO_CFG(a) cavm_zipx_core_to_cfg_t
#define bustype_CAVM_ZIPX_CORE_TO_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_CORE_TO_CFG(a) "ZIPX_CORE_TO_CFG"
#define device_bar_CAVM_ZIPX_CORE_TO_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_CORE_TO_CFG(a) (a)
#define arguments_CAVM_ZIPX_CORE_TO_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_ctl_cfg
 *
 * ZIP Controller Configuration Register
 * This register controls the behavior of the ZIP DMA engines. It is recommended to keep default
 * values for normal operation. Changing the values of the fields may be useful for diagnostics.
 */
union cavm_zipx_ctl_cfg
{
    uint64_t u;
    struct cavm_zipx_ctl_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t skid                  : 5;  /**< [ 60: 56](R/W) ZIP engine SKID FIFO credits.  Must not exceed 16. */
        uint64_t reserved_53_55        : 3;
        uint64_t ildf                  : 5;  /**< [ 52: 48](R/W) Instruction load command FIFO credits.  Must not exceed 16. */
        uint64_t reserved_43_47        : 5;
        uint64_t iprf                  : 3;  /**< [ 42: 40](RAZ) Reserved. */
        uint64_t reserved_39           : 1;
        uint64_t drtf                  : 7;  /**< [ 38: 32](R/W) Data read tag FIFOs (per core) credits.  Must not exceed 32. */
        uint64_t reserved_28_31        : 4;
        uint64_t stcf                  : 4;  /**< [ 27: 24](R/W) Store command FIFO credits.  Must not exceed 8. */
        uint64_t reserved_21_23        : 3;
        uint64_t ldcf                  : 5;  /**< [ 20: 16](R/W) Load command FIFO credits.  Must not exceed 16. */
        uint64_t reserved_13_15        : 3;
        uint64_t wkqf                  : 5;  /**< [ 12:  8](R/W) Work queue FIFO credits.  Must not exceed 16. */
        uint64_t reserved_3_7          : 5;
        uint64_t rd_psn_ign            : 1;  /**< [  2:  2](R/W) Read poison ignore.

                                                                 0 = Poisons received on a NCB instruction response are fatal and set interrupt
                                                                 ZIP()_PF_RAS[LD_CMD_PSN], poisons received on a NCB DMA data response are
                                                                 propagated into result structure and set interrupt ZIP()_PF_RAS[LD_DAT_PSN].

                                                                 1 = Poisons received on a NCB instruction response are ignored and set interrupt
                                                                 ZIP()_PF_RAS[LD_CMD_PSN], poisons received on a NCB DMA data response are
                                                                 ignored and set interrupt ZIP()_PF_RAS[LD_DAT_PSN]. */
        uint64_t busy                  : 1;  /**< [  1:  1](RO/H) Busy.
                                                                 0 = ZIP system is idle.
                                                                 1 = ZIP system is busy. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t busy                  : 1;  /**< [  1:  1](RO/H) Busy.
                                                                 0 = ZIP system is idle.
                                                                 1 = ZIP system is busy. */
        uint64_t rd_psn_ign            : 1;  /**< [  2:  2](R/W) Read poison ignore.

                                                                 0 = Poisons received on a NCB instruction response are fatal and set interrupt
                                                                 ZIP()_PF_RAS[LD_CMD_PSN], poisons received on a NCB DMA data response are
                                                                 propagated into result structure and set interrupt ZIP()_PF_RAS[LD_DAT_PSN].

                                                                 1 = Poisons received on a NCB instruction response are ignored and set interrupt
                                                                 ZIP()_PF_RAS[LD_CMD_PSN], poisons received on a NCB DMA data response are
                                                                 ignored and set interrupt ZIP()_PF_RAS[LD_DAT_PSN]. */
        uint64_t reserved_3_7          : 5;
        uint64_t wkqf                  : 5;  /**< [ 12:  8](R/W) Work queue FIFO credits.  Must not exceed 16. */
        uint64_t reserved_13_15        : 3;
        uint64_t ldcf                  : 5;  /**< [ 20: 16](R/W) Load command FIFO credits.  Must not exceed 16. */
        uint64_t reserved_21_23        : 3;
        uint64_t stcf                  : 4;  /**< [ 27: 24](R/W) Store command FIFO credits.  Must not exceed 8. */
        uint64_t reserved_28_31        : 4;
        uint64_t drtf                  : 7;  /**< [ 38: 32](R/W) Data read tag FIFOs (per core) credits.  Must not exceed 32. */
        uint64_t reserved_39           : 1;
        uint64_t iprf                  : 3;  /**< [ 42: 40](RAZ) Reserved. */
        uint64_t reserved_43_47        : 5;
        uint64_t ildf                  : 5;  /**< [ 52: 48](R/W) Instruction load command FIFO credits.  Must not exceed 16. */
        uint64_t reserved_53_55        : 3;
        uint64_t skid                  : 5;  /**< [ 60: 56](R/W) ZIP engine SKID FIFO credits.  Must not exceed 16. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_ctl_cfg_s cn; */
};
typedef union cavm_zipx_ctl_cfg cavm_zipx_ctl_cfg_t;

static inline uint64_t CAVM_ZIPX_CTL_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_CTL_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000560ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_CTL_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_CTL_CFG(a) cavm_zipx_ctl_cfg_t
#define bustype_CAVM_ZIPX_CTL_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_CTL_CFG(a) "ZIPX_CTL_CFG"
#define device_bar_CAVM_ZIPX_CTL_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_CTL_CFG(a) (a)
#define arguments_CAVM_ZIPX_CTL_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_dbg_core#_inst
 *
 * ZIP Core Current Instruction Registers
 * These registers reflect the status of the current instruction that the ZIP core is executing
 * or has executed. These registers are only for debug use.
 */
union cavm_zipx_dbg_corex_inst
{
    uint64_t u;
    struct cavm_zipx_dbg_corex_inst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Core state. 0 = core is idle; 1 = core is busy. */
        uint64_t outstanding           : 1;  /**< [ 62: 62](RO/H) When set, core is waiting for an outstanding NCB transaction(s).  Otherwise, there is no
                                                                 outstanding NCB transaction, and the core can be reset if needed. */
        uint64_t cto                   : 1;  /**< [ 61: 61](RO/H) Core timeout detected. When set, it indicates that this core timed out when
                                                                 executing the current instruction with instruction ID [IID] from queue [QID]. */
        uint64_t launched              : 1;  /**< [ 60: 60](RO/H) Instruction launch status.  When 1, an instruction has been completely launched to a zip
                                                                 core.  When 0, an instruction launch is in progress or may have been interrupted due to an
                                                                 instruction fetch error. */
        uint64_t reserved_35_59        : 25;
        uint64_t qid                   : 3;  /**< [ 34: 32](RO/H) Queue index of instruction executed ([BUSY] = 0) or being executed ([BUSY] = 1) on this core. */
        uint64_t iid                   : 32; /**< [ 31:  0](RO/H) Instruction index executed ([BUSY] = 0) or being executed ([BUSY] = 1) on this core. */
#else /* Word 0 - Little Endian */
        uint64_t iid                   : 32; /**< [ 31:  0](RO/H) Instruction index executed ([BUSY] = 0) or being executed ([BUSY] = 1) on this core. */
        uint64_t qid                   : 3;  /**< [ 34: 32](RO/H) Queue index of instruction executed ([BUSY] = 0) or being executed ([BUSY] = 1) on this core. */
        uint64_t reserved_35_59        : 25;
        uint64_t launched              : 1;  /**< [ 60: 60](RO/H) Instruction launch status.  When 1, an instruction has been completely launched to a zip
                                                                 core.  When 0, an instruction launch is in progress or may have been interrupted due to an
                                                                 instruction fetch error. */
        uint64_t cto                   : 1;  /**< [ 61: 61](RO/H) Core timeout detected. When set, it indicates that this core timed out when
                                                                 executing the current instruction with instruction ID [IID] from queue [QID]. */
        uint64_t outstanding           : 1;  /**< [ 62: 62](RO/H) When set, core is waiting for an outstanding NCB transaction(s).  Otherwise, there is no
                                                                 outstanding NCB transaction, and the core can be reset if needed. */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Core state. 0 = core is idle; 1 = core is busy. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_dbg_corex_inst_s cn; */
};
typedef union cavm_zipx_dbg_corex_inst cavm_zipx_dbg_corex_inst_t;

static inline uint64_t CAVM_ZIPX_DBG_COREX_INST(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_DBG_COREX_INST(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=11)))
        return 0x838000003000ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("ZIPX_DBG_COREX_INST", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_DBG_COREX_INST(a,b) cavm_zipx_dbg_corex_inst_t
#define bustype_CAVM_ZIPX_DBG_COREX_INST(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_DBG_COREX_INST(a,b) "ZIPX_DBG_COREX_INST"
#define device_bar_CAVM_ZIPX_DBG_COREX_INST(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_DBG_COREX_INST(a,b) (a)
#define arguments_CAVM_ZIPX_DBG_COREX_INST(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_dbg_core#_sta
 *
 * ZIP Core Status Registers
 * These registers reflect the status of the ZIP cores and are for debug use only.
 */
union cavm_zipx_dbg_corex_sta
{
    uint64_t u;
    struct cavm_zipx_dbg_corex_sta_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Core state. 0 = core is idle; 1 = core is busy. */
        uint64_t reserved_38_62        : 25;
        uint64_t ist                   : 6;  /**< [ 37: 32](RO/H) FSM State of current instruction that is executing.
                                                                 Internal:
                                                                 See sta_fsm_t in zip_defs.vh. */
        uint64_t nie                   : 32; /**< [ 31:  0](RO/H) Number of instructions executed on this core. */
#else /* Word 0 - Little Endian */
        uint64_t nie                   : 32; /**< [ 31:  0](RO/H) Number of instructions executed on this core. */
        uint64_t ist                   : 6;  /**< [ 37: 32](RO/H) FSM State of current instruction that is executing.
                                                                 Internal:
                                                                 See sta_fsm_t in zip_defs.vh. */
        uint64_t reserved_38_62        : 25;
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Core state. 0 = core is idle; 1 = core is busy. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_dbg_corex_sta_s cn; */
};
typedef union cavm_zipx_dbg_corex_sta cavm_zipx_dbg_corex_sta_t;

static inline uint64_t CAVM_ZIPX_DBG_COREX_STA(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_DBG_COREX_STA(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=11)))
        return 0x838000003200ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("ZIPX_DBG_COREX_STA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_DBG_COREX_STA(a,b) cavm_zipx_dbg_corex_sta_t
#define bustype_CAVM_ZIPX_DBG_COREX_STA(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_DBG_COREX_STA(a,b) "ZIPX_DBG_COREX_STA"
#define device_bar_CAVM_ZIPX_DBG_COREX_STA(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_DBG_COREX_STA(a,b) (a)
#define arguments_CAVM_ZIPX_DBG_COREX_STA(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_dbg_que#_sta
 *
 * ZIP Queue Status Registers
 * These registers reflect status of the ZIP instruction queues and are for debug use only.
 */
union cavm_zipx_dbg_quex_sta
{
    uint64_t u;
    struct cavm_zipx_dbg_quex_sta_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Queue state. 0 = queue is idle; 1 = queue is busy. */
        uint64_t outstanding           : 1;  /**< [ 62: 62](RO/H) When set, the queue is waiting for outstanding NCB transaction(s).  Otherwise, there are
                                                                 no outstanding NCB transactions and the queue can be reset. */
        uint64_t reserved_56_61        : 6;
        uint64_t rqwc                  : 24; /**< [ 55: 32](RO/H) Number of remaining instruction qwords to be fetched. */
        uint64_t nii                   : 32; /**< [ 31:  0](RO/H) Number of instructions issued from this queue. Reset to 0x0 when ZIP()_VQ()_SBUF_ADDR
                                                                 is written. */
#else /* Word 0 - Little Endian */
        uint64_t nii                   : 32; /**< [ 31:  0](RO/H) Number of instructions issued from this queue. Reset to 0x0 when ZIP()_VQ()_SBUF_ADDR
                                                                 is written. */
        uint64_t rqwc                  : 24; /**< [ 55: 32](RO/H) Number of remaining instruction qwords to be fetched. */
        uint64_t reserved_56_61        : 6;
        uint64_t outstanding           : 1;  /**< [ 62: 62](RO/H) When set, the queue is waiting for outstanding NCB transaction(s).  Otherwise, there are
                                                                 no outstanding NCB transactions and the queue can be reset. */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Queue state. 0 = queue is idle; 1 = queue is busy. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_dbg_quex_sta_s cn; */
};
typedef union cavm_zipx_dbg_quex_sta cavm_zipx_dbg_quex_sta_t;

static inline uint64_t CAVM_ZIPX_DBG_QUEX_STA(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_DBG_QUEX_STA(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838000001800ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_DBG_QUEX_STA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_DBG_QUEX_STA(a,b) cavm_zipx_dbg_quex_sta_t
#define bustype_CAVM_ZIPX_DBG_QUEX_STA(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_DBG_QUEX_STA(a,b) "ZIPX_DBG_QUEX_STA"
#define device_bar_CAVM_ZIPX_DBG_QUEX_STA(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_DBG_QUEX_STA(a,b) (a)
#define arguments_CAVM_ZIPX_DBG_QUEX_STA(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_eco
 *
 * INTERNAL: ZIP ECO Register
 */
union cavm_zipx_eco
{
    uint64_t u;
    struct cavm_zipx_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_eco_s cn; */
};
typedef union cavm_zipx_eco cavm_zipx_eco_t;

static inline uint64_t CAVM_ZIPX_ECO(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_ECO(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x8380000005f0ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_ECO(a) cavm_zipx_eco_t
#define bustype_CAVM_ZIPX_ECO(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_ECO(a) "ZIPX_ECO"
#define device_bar_CAVM_ZIPX_ECO(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_ECO(a) (a)
#define arguments_CAVM_ZIPX_ECO(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_pf_active_pc
 *
 * ZIP PF Conditional Clock Counter Register
 */
union cavm_zipx_pf_active_pc
{
    uint64_t u;
    struct cavm_zipx_pf_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_active_pc_s cn; */
};
typedef union cavm_zipx_pf_active_pc cavm_zipx_pf_active_pc_t;

static inline uint64_t CAVM_ZIPX_PF_ACTIVE_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_ACTIVE_PC(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000450ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_ACTIVE_PC(a) cavm_zipx_pf_active_pc_t
#define bustype_CAVM_ZIPX_PF_ACTIVE_PC(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_ACTIVE_PC(a) "ZIPX_PF_ACTIVE_PC"
#define device_bar_CAVM_ZIPX_PF_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_ACTIVE_PC(a) (a)
#define arguments_CAVM_ZIPX_PF_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_pf_inst_latency_pc
 *
 * ZIP PF Instruction Latency Counter Register
 */
union cavm_zipx_pf_inst_latency_pc
{
    uint64_t u;
    struct cavm_zipx_pf_inst_latency_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for an instruction to complete (i.e., have the ZIP_ZRES_S
                                                                 result committed to memory).  Incremented every coprocessor-clock by the
                                                                 number of instructions active in that cycle. This may be divided by
                                                                 ZIP()_PF_RD_REQ_PC to determine the average hardware instruction latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for an instruction to complete (i.e., have the ZIP_ZRES_S
                                                                 result committed to memory).  Incremented every coprocessor-clock by the
                                                                 number of instructions active in that cycle. This may be divided by
                                                                 ZIP()_PF_RD_REQ_PC to determine the average hardware instruction latency. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_inst_latency_pc_s cn; */
};
typedef union cavm_zipx_pf_inst_latency_pc cavm_zipx_pf_inst_latency_pc_t;

static inline uint64_t CAVM_ZIPX_PF_INST_LATENCY_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_INST_LATENCY_PC(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000420ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_INST_LATENCY_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_INST_LATENCY_PC(a) cavm_zipx_pf_inst_latency_pc_t
#define bustype_CAVM_ZIPX_PF_INST_LATENCY_PC(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_INST_LATENCY_PC(a) "ZIPX_PF_INST_LATENCY_PC"
#define device_bar_CAVM_ZIPX_PF_INST_LATENCY_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_INST_LATENCY_PC(a) (a)
#define arguments_CAVM_ZIPX_PF_INST_LATENCY_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_pf_inst_req_pc
 *
 * ZIP PF Instruction Request Performance Counter Register
 */
union cavm_zipx_pf_inst_req_pc
{
    uint64_t u;
    struct cavm_zipx_pf_inst_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of instructions (ZIP_INST_S) that have started processing. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of instructions (ZIP_INST_S) that have started processing. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_inst_req_pc_s cn; */
};
typedef union cavm_zipx_pf_inst_req_pc cavm_zipx_pf_inst_req_pc_t;

static inline uint64_t CAVM_ZIPX_PF_INST_REQ_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_INST_REQ_PC(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000410ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_INST_REQ_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_INST_REQ_PC(a) cavm_zipx_pf_inst_req_pc_t
#define bustype_CAVM_ZIPX_PF_INST_REQ_PC(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_INST_REQ_PC(a) "ZIPX_PF_INST_REQ_PC"
#define device_bar_CAVM_ZIPX_PF_INST_REQ_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_INST_REQ_PC(a) (a)
#define arguments_CAVM_ZIPX_PF_INST_REQ_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_pf_mbox_ena_w1c#
 *
 * ZIP PF Mailbox Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_zipx_pf_mbox_ena_w1cx
{
    uint64_t u;
    struct cavm_zipx_pf_mbox_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for ZIP(0)_PF_MBOX_INT(0)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for ZIP(0)_PF_MBOX_INT(0)[MBOX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_mbox_ena_w1cx_s cn; */
};
typedef union cavm_zipx_pf_mbox_ena_w1cx cavm_zipx_pf_mbox_ena_w1cx_t;

static inline uint64_t CAVM_ZIPX_PF_MBOX_ENA_W1CX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_MBOX_ENA_W1CX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b==0)))
        return 0x838000000940ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_MBOX_ENA_W1CX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_MBOX_ENA_W1CX(a,b) cavm_zipx_pf_mbox_ena_w1cx_t
#define bustype_CAVM_ZIPX_PF_MBOX_ENA_W1CX(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_MBOX_ENA_W1CX(a,b) "ZIPX_PF_MBOX_ENA_W1CX"
#define device_bar_CAVM_ZIPX_PF_MBOX_ENA_W1CX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_MBOX_ENA_W1CX(a,b) (a)
#define arguments_CAVM_ZIPX_PF_MBOX_ENA_W1CX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_pf_mbox_ena_w1s#
 *
 * ZIP PF Mailbox Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_zipx_pf_mbox_ena_w1sx
{
    uint64_t u;
    struct cavm_zipx_pf_mbox_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for ZIP(0)_PF_MBOX_INT(0)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for ZIP(0)_PF_MBOX_INT(0)[MBOX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_mbox_ena_w1sx_s cn; */
};
typedef union cavm_zipx_pf_mbox_ena_w1sx cavm_zipx_pf_mbox_ena_w1sx_t;

static inline uint64_t CAVM_ZIPX_PF_MBOX_ENA_W1SX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_MBOX_ENA_W1SX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b==0)))
        return 0x838000000960ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_MBOX_ENA_W1SX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_MBOX_ENA_W1SX(a,b) cavm_zipx_pf_mbox_ena_w1sx_t
#define bustype_CAVM_ZIPX_PF_MBOX_ENA_W1SX(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_MBOX_ENA_W1SX(a,b) "ZIPX_PF_MBOX_ENA_W1SX"
#define device_bar_CAVM_ZIPX_PF_MBOX_ENA_W1SX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_MBOX_ENA_W1SX(a,b) (a)
#define arguments_CAVM_ZIPX_PF_MBOX_ENA_W1SX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_pf_mbox_int#
 *
 * ZIP PF Mailbox Interrupt Registers
 */
union cavm_zipx_pf_mbox_intx
{
    uint64_t u;
    struct cavm_zipx_pf_mbox_intx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) One interrupt bit per VF. Each bit is set when the associated ZIP()_VF()_PF_MBOX(1) is
                                                                 written.  Bits corresponding to unimplemented VFs (above bit 7) are never set by hardware. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) One interrupt bit per VF. Each bit is set when the associated ZIP()_VF()_PF_MBOX(1) is
                                                                 written.  Bits corresponding to unimplemented VFs (above bit 7) are never set by hardware. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_mbox_intx_s cn; */
};
typedef union cavm_zipx_pf_mbox_intx cavm_zipx_pf_mbox_intx_t;

static inline uint64_t CAVM_ZIPX_PF_MBOX_INTX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_MBOX_INTX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b==0)))
        return 0x838000000900ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_MBOX_INTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_MBOX_INTX(a,b) cavm_zipx_pf_mbox_intx_t
#define bustype_CAVM_ZIPX_PF_MBOX_INTX(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_MBOX_INTX(a,b) "ZIPX_PF_MBOX_INTX"
#define device_bar_CAVM_ZIPX_PF_MBOX_INTX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_MBOX_INTX(a,b) (a)
#define arguments_CAVM_ZIPX_PF_MBOX_INTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_pf_mbox_int_w1s#
 *
 * ZIP PF Mailbox Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_zipx_pf_mbox_int_w1sx
{
    uint64_t u;
    struct cavm_zipx_pf_mbox_int_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets ZIP(0)_PF_MBOX_INT(0)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets ZIP(0)_PF_MBOX_INT(0)[MBOX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_mbox_int_w1sx_s cn; */
};
typedef union cavm_zipx_pf_mbox_int_w1sx cavm_zipx_pf_mbox_int_w1sx_t;

static inline uint64_t CAVM_ZIPX_PF_MBOX_INT_W1SX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_MBOX_INT_W1SX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b==0)))
        return 0x838000000920ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_MBOX_INT_W1SX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_MBOX_INT_W1SX(a,b) cavm_zipx_pf_mbox_int_w1sx_t
#define bustype_CAVM_ZIPX_PF_MBOX_INT_W1SX(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_MBOX_INT_W1SX(a,b) "ZIPX_PF_MBOX_INT_W1SX"
#define device_bar_CAVM_ZIPX_PF_MBOX_INT_W1SX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_MBOX_INT_W1SX(a,b) (a)
#define arguments_CAVM_ZIPX_PF_MBOX_INT_W1SX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_pf_msix_pba#
 *
 * ZIP MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the
 * ZIP_PF_INT_VEC_E enumeration.
 */
union cavm_zipx_pf_msix_pbax
{
    uint64_t u;
    struct cavm_zipx_pf_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated ZIP()_PF_MSIX_VEC()_CTL, enumerated by ZIP_PF_INT_VEC_E.
                                                                 Bits that have no associated ZIP_PF_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated ZIP()_PF_MSIX_VEC()_CTL, enumerated by ZIP_PF_INT_VEC_E.
                                                                 Bits that have no associated ZIP_PF_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_msix_pbax_s cn; */
};
typedef union cavm_zipx_pf_msix_pbax cavm_zipx_pf_msix_pbax_t;

static inline uint64_t CAVM_ZIPX_PF_MSIX_PBAX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_MSIX_PBAX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b==0)))
        return 0x8380100f0000ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_MSIX_PBAX(a,b) cavm_zipx_pf_msix_pbax_t
#define bustype_CAVM_ZIPX_PF_MSIX_PBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_MSIX_PBAX(a,b) "ZIPX_PF_MSIX_PBAX"
#define device_bar_CAVM_ZIPX_PF_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_ZIPX_PF_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_ZIPX_PF_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_pf_msix_vec#_addr
 *
 * ZIP MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the ZIP_PF_INT_VEC_E enumeration.
 */
union cavm_zipx_pf_msix_vecx_addr
{
    uint64_t u;
    struct cavm_zipx_pf_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's ZIP()_PF_MSIX_VEC()_ADDR, ZIP()_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of ZIP()_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_ZIP()_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

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

                                                                 1 = This vector's ZIP()_PF_MSIX_VEC()_ADDR, ZIP()_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of ZIP()_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_ZIP()_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

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
    } s;
    /* struct cavm_zipx_pf_msix_vecx_addr_s cn; */
};
typedef union cavm_zipx_pf_msix_vecx_addr cavm_zipx_pf_msix_vecx_addr_t;

static inline uint64_t CAVM_ZIPX_PF_MSIX_VECX_ADDR(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_MSIX_VECX_ADDR(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=1)))
        return 0x838010000000ll + 0x1000000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("ZIPX_PF_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_MSIX_VECX_ADDR(a,b) cavm_zipx_pf_msix_vecx_addr_t
#define bustype_CAVM_ZIPX_PF_MSIX_VECX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_MSIX_VECX_ADDR(a,b) "ZIPX_PF_MSIX_VECX_ADDR"
#define device_bar_CAVM_ZIPX_PF_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_ZIPX_PF_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_ZIPX_PF_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_pf_msix_vec#_ctl
 *
 * ZIP MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the ZIP_PF_INT_VEC_E enumeration.
 */
union cavm_zipx_pf_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_zipx_pf_msix_vecx_ctl_s
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
    /* struct cavm_zipx_pf_msix_vecx_ctl_s cn; */
};
typedef union cavm_zipx_pf_msix_vecx_ctl cavm_zipx_pf_msix_vecx_ctl_t;

static inline uint64_t CAVM_ZIPX_PF_MSIX_VECX_CTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_MSIX_VECX_CTL(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=1)))
        return 0x838010000008ll + 0x1000000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("ZIPX_PF_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_MSIX_VECX_CTL(a,b) cavm_zipx_pf_msix_vecx_ctl_t
#define bustype_CAVM_ZIPX_PF_MSIX_VECX_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_MSIX_VECX_CTL(a,b) "ZIPX_PF_MSIX_VECX_CTL"
#define device_bar_CAVM_ZIPX_PF_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_ZIPX_PF_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_ZIPX_PF_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_pf_que#_gmctl
 *
 * ZIP Queue Guest Machine Control Register
 * This register configures queues.
 */
union cavm_zipx_pf_quex_gmctl
{
    uint64_t u;
    struct cavm_zipx_pf_quex_gmctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sso_pf_func           : 16; /**< [ 15:  0](R/W) SSO RVU physical and virtual function. Indicates the RVU PF and VF to which
                                                                 queue's SSO add works are sent. */
#else /* Word 0 - Little Endian */
        uint64_t sso_pf_func           : 16; /**< [ 15:  0](R/W) SSO RVU physical and virtual function. Indicates the RVU PF and VF to which
                                                                 queue's SSO add works are sent. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_quex_gmctl_s cn; */
};
typedef union cavm_zipx_pf_quex_gmctl cavm_zipx_pf_quex_gmctl_t;

static inline uint64_t CAVM_ZIPX_PF_QUEX_GMCTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_QUEX_GMCTL(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838000000800ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_PF_QUEX_GMCTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_QUEX_GMCTL(a,b) cavm_zipx_pf_quex_gmctl_t
#define bustype_CAVM_ZIPX_PF_QUEX_GMCTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_QUEX_GMCTL(a,b) "ZIPX_PF_QUEX_GMCTL"
#define device_bar_CAVM_ZIPX_PF_QUEX_GMCTL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_QUEX_GMCTL(a,b) (a)
#define arguments_CAVM_ZIPX_PF_QUEX_GMCTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_pf_ras
 *
 * ZIP PF RAS Register
 * This register contains PF RAS error flags for ZPI.
 */
union cavm_zipx_pf_ras
{
    uint64_t u;
    struct cavm_zipx_pf_ras_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1C/H) Poison received on a NCB instruction response. */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1C/H) Poison received on a NCB data response. */
#else /* Word 0 - Little Endian */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1C/H) Poison received on a NCB data response. */
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1C/H) Poison received on a NCB instruction response. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_ras_s cn; */
};
typedef union cavm_zipx_pf_ras cavm_zipx_pf_ras_t;

static inline uint64_t CAVM_ZIPX_PF_RAS(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_RAS(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000980ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_RAS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_RAS(a) cavm_zipx_pf_ras_t
#define bustype_CAVM_ZIPX_PF_RAS(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_RAS(a) "ZIPX_PF_RAS"
#define device_bar_CAVM_ZIPX_PF_RAS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_RAS(a) (a)
#define arguments_CAVM_ZIPX_PF_RAS(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_pf_ras_ena_w1c
 *
 * ZIP PF RAS Register
 * This register clears interrupt enable bits.
 */
union cavm_zipx_pf_ras_ena_w1c
{
    uint64_t u;
    struct cavm_zipx_pf_ras_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for ZIP(0)_PF_RAS[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ZIP(0)_PF_RAS[LD_DAT_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ZIP(0)_PF_RAS[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for ZIP(0)_PF_RAS[LD_CMD_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_ras_ena_w1c_s cn; */
};
typedef union cavm_zipx_pf_ras_ena_w1c cavm_zipx_pf_ras_ena_w1c_t;

static inline uint64_t CAVM_ZIPX_PF_RAS_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_RAS_ENA_W1C(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000990ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_RAS_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_RAS_ENA_W1C(a) cavm_zipx_pf_ras_ena_w1c_t
#define bustype_CAVM_ZIPX_PF_RAS_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_RAS_ENA_W1C(a) "ZIPX_PF_RAS_ENA_W1C"
#define device_bar_CAVM_ZIPX_PF_RAS_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_RAS_ENA_W1C(a) (a)
#define arguments_CAVM_ZIPX_PF_RAS_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_pf_ras_ena_w1s
 *
 * ZIP PF RAS Register
 * This register sets interrupt enable bits.
 */
union cavm_zipx_pf_ras_ena_w1s
{
    uint64_t u;
    struct cavm_zipx_pf_ras_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for ZIP(0)_PF_RAS[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ZIP(0)_PF_RAS[LD_DAT_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ZIP(0)_PF_RAS[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for ZIP(0)_PF_RAS[LD_CMD_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_ras_ena_w1s_s cn; */
};
typedef union cavm_zipx_pf_ras_ena_w1s cavm_zipx_pf_ras_ena_w1s_t;

static inline uint64_t CAVM_ZIPX_PF_RAS_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_RAS_ENA_W1S(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000998ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_RAS_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_RAS_ENA_W1S(a) cavm_zipx_pf_ras_ena_w1s_t
#define bustype_CAVM_ZIPX_PF_RAS_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_RAS_ENA_W1S(a) "ZIPX_PF_RAS_ENA_W1S"
#define device_bar_CAVM_ZIPX_PF_RAS_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_RAS_ENA_W1S(a) (a)
#define arguments_CAVM_ZIPX_PF_RAS_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_pf_ras_w1s
 *
 * ZIP PF RAS Register
 * This register sets interrupt bits.
 */
union cavm_zipx_pf_ras_w1s
{
    uint64_t u;
    struct cavm_zipx_pf_ras_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets ZIP(0)_PF_RAS[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ZIP(0)_PF_RAS[LD_DAT_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ZIP(0)_PF_RAS[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets ZIP(0)_PF_RAS[LD_CMD_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_ras_w1s_s cn; */
};
typedef union cavm_zipx_pf_ras_w1s cavm_zipx_pf_ras_w1s_t;

static inline uint64_t CAVM_ZIPX_PF_RAS_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_RAS_W1S(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000988ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_RAS_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_RAS_W1S(a) cavm_zipx_pf_ras_w1s_t
#define bustype_CAVM_ZIPX_PF_RAS_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_RAS_W1S(a) "ZIPX_PF_RAS_W1S"
#define device_bar_CAVM_ZIPX_PF_RAS_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_RAS_W1S(a) (a)
#define arguments_CAVM_ZIPX_PF_RAS_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_pf_rd_latency_pc
 *
 * ZIP PF Read Latency Counter Register
 */
union cavm_zipx_pf_rd_latency_pc
{
    uint64_t u;
    struct cavm_zipx_pf_rd_latency_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for NCB read returns. Incremented every
                                                                 coprocessor-clock by the number of read transactions outstanding in that cycle. This
                                                                 may be divided by ZIP()_PF_RD_REQ_PC to determine the average read latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for NCB read returns. Incremented every
                                                                 coprocessor-clock by the number of read transactions outstanding in that cycle. This
                                                                 may be divided by ZIP()_PF_RD_REQ_PC to determine the average read latency. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_rd_latency_pc_s cn; */
};
typedef union cavm_zipx_pf_rd_latency_pc cavm_zipx_pf_rd_latency_pc_t;

static inline uint64_t CAVM_ZIPX_PF_RD_LATENCY_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_RD_LATENCY_PC(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000440ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_RD_LATENCY_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_RD_LATENCY_PC(a) cavm_zipx_pf_rd_latency_pc_t
#define bustype_CAVM_ZIPX_PF_RD_LATENCY_PC(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_RD_LATENCY_PC(a) "ZIPX_PF_RD_LATENCY_PC"
#define device_bar_CAVM_ZIPX_PF_RD_LATENCY_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_RD_LATENCY_PC(a) (a)
#define arguments_CAVM_ZIPX_PF_RD_LATENCY_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_pf_rd_req_pc
 *
 * ZIP PF Read Request Performance Counter Register
 */
union cavm_zipx_pf_rd_req_pc
{
    uint64_t u;
    struct cavm_zipx_pf_rd_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of NCB read requests issued. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of NCB read requests issued. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_rd_req_pc_s cn; */
};
typedef union cavm_zipx_pf_rd_req_pc cavm_zipx_pf_rd_req_pc_t;

static inline uint64_t CAVM_ZIPX_PF_RD_REQ_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_RD_REQ_PC(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000430ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_PF_RD_REQ_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_RD_REQ_PC(a) cavm_zipx_pf_rd_req_pc_t
#define bustype_CAVM_ZIPX_PF_RD_REQ_PC(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_RD_REQ_PC(a) "ZIPX_PF_RD_REQ_PC"
#define device_bar_CAVM_ZIPX_PF_RD_REQ_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_RD_REQ_PC(a) (a)
#define arguments_CAVM_ZIPX_PF_RD_REQ_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_pf_vf#_mbox#
 *
 * ZIP PF/VF Mailbox Registers
 */
union cavm_zipx_pf_vfx_mboxx
{
    uint64_t u;
    struct cavm_zipx_pf_vfx_mboxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These PF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. Each corresponding VF may access the same storage using
                                                                 ZIP()_VF()_PF_MBOX(). MBOX(0) is typically used for PF to VF signaling, MBOX(1)
                                                                 for VF to PF. Writing ZIP()_PF_VF()_MBOX(0) (but not
                                                                 ZIP()_VF()_PF_MBOX(0)) will set the corresponding
                                                                 ZIP()_VF()_MISC_INT[MBOX] which if appropriately enabled will send an interrupt
                                                                 to the VF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These PF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. Each corresponding VF may access the same storage using
                                                                 ZIP()_VF()_PF_MBOX(). MBOX(0) is typically used for PF to VF signaling, MBOX(1)
                                                                 for VF to PF. Writing ZIP()_PF_VF()_MBOX(0) (but not
                                                                 ZIP()_VF()_PF_MBOX(0)) will set the corresponding
                                                                 ZIP()_VF()_MISC_INT[MBOX] which if appropriately enabled will send an interrupt
                                                                 to the VF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_pf_vfx_mboxx_s cn; */
};
typedef union cavm_zipx_pf_vfx_mboxx cavm_zipx_pf_vfx_mboxx_t;

static inline uint64_t CAVM_ZIPX_PF_VFX_MBOXX(unsigned long a, unsigned long b, unsigned long c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_PF_VFX_MBOXX(unsigned long a, unsigned long b, unsigned long c)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7) && (c<=1)))
        return 0x838000002000ll + 0x1000000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x7) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("ZIPX_PF_VFX_MBOXX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_PF_VFX_MBOXX(a,b,c) cavm_zipx_pf_vfx_mboxx_t
#define bustype_CAVM_ZIPX_PF_VFX_MBOXX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_PF_VFX_MBOXX(a,b,c) "ZIPX_PF_VFX_MBOXX"
#define device_bar_CAVM_ZIPX_PF_VFX_MBOXX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_PF_VFX_MBOXX(a,b,c) (a)
#define arguments_CAVM_ZIPX_PF_VFX_MBOXX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) zip#_que#_gcfg
 *
 * ZIP Queue General Configuration Registers
 * These registers reflect status of the ZIP instruction queues and are for debug use only.
 */
union cavm_zipx_quex_gcfg
{
    uint64_t u;
    struct cavm_zipx_quex_gcfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t iqb_ldwb              : 1;  /**< [  3:  3](R/W) Load don't write back.

                                                                 0 = The hardware issues regular NCB loads towards the cache, which will cause the
                                                                 line to be written back before being replaced.

                                                                 1 = The hardware issues LDWB read-and-invalidate NCB commands towards the cache
                                                                 when fetching the last word of instructions; as a result the line will not be
                                                                 written back when replaced.  This improves performance, but software must not
                                                                 read the instructions after they are posted to the hardware.

                                                                 Partial cache line reads always use LDI. */
        uint64_t cbw_sty               : 1;  /**< [  2:  2](R/W) When set, a context cache block write will use STY. When clear, a context write will use STF. */
        uint64_t l2ld_cmd              : 2;  /**< [  1:  0](R/W) Which NCB load command to use for reading gather pointers, context, history and input
                                                                 data.
                                                                 0x0 = LDD.
                                                                 0x1 = LDI.
                                                                 0x2 = LDE.
                                                                 0x3 = LDY. */
#else /* Word 0 - Little Endian */
        uint64_t l2ld_cmd              : 2;  /**< [  1:  0](R/W) Which NCB load command to use for reading gather pointers, context, history and input
                                                                 data.
                                                                 0x0 = LDD.
                                                                 0x1 = LDI.
                                                                 0x2 = LDE.
                                                                 0x3 = LDY. */
        uint64_t cbw_sty               : 1;  /**< [  2:  2](R/W) When set, a context cache block write will use STY. When clear, a context write will use STF. */
        uint64_t iqb_ldwb              : 1;  /**< [  3:  3](R/W) Load don't write back.

                                                                 0 = The hardware issues regular NCB loads towards the cache, which will cause the
                                                                 line to be written back before being replaced.

                                                                 1 = The hardware issues LDWB read-and-invalidate NCB commands towards the cache
                                                                 when fetching the last word of instructions; as a result the line will not be
                                                                 written back when replaced.  This improves performance, but software must not
                                                                 read the instructions after they are posted to the hardware.

                                                                 Partial cache line reads always use LDI. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_quex_gcfg_s cn; */
};
typedef union cavm_zipx_quex_gcfg cavm_zipx_quex_gcfg_t;

static inline uint64_t CAVM_ZIPX_QUEX_GCFG(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_QUEX_GCFG(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838000001a00ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_QUEX_GCFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_QUEX_GCFG(a,b) cavm_zipx_quex_gcfg_t
#define bustype_CAVM_ZIPX_QUEX_GCFG(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_QUEX_GCFG(a,b) "ZIPX_QUEX_GCFG"
#define device_bar_CAVM_ZIPX_QUEX_GCFG(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_QUEX_GCFG(a,b) (a)
#define arguments_CAVM_ZIPX_QUEX_GCFG(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_que#_map
 *
 * ZIP Queue Mapping Registers
 * These registers control how each instruction queue maps to ZIP cores.
 */
union cavm_zipx_quex_map
{
    uint64_t u;
    struct cavm_zipx_quex_map_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t zce                   : 12; /**< [ 11:  0](R/W) ZIP core enable. Controls which ZIP cores can service the logical instruction queue.
                                                                 Setting [ZCE] to 0 effectively disables the queue from being served (however the
                                                                 instructions can still be fetched). Hardware automatically selects decompression
                                                                 cores for decompression, and compression cores for compression.
                                                                 _ZCE\<{a}\> = 1: ZIP core {a} can serve the queue. */
#else /* Word 0 - Little Endian */
        uint64_t zce                   : 12; /**< [ 11:  0](R/W) ZIP core enable. Controls which ZIP cores can service the logical instruction queue.
                                                                 Setting [ZCE] to 0 effectively disables the queue from being served (however the
                                                                 instructions can still be fetched). Hardware automatically selects decompression
                                                                 cores for decompression, and compression cores for compression.
                                                                 _ZCE\<{a}\> = 1: ZIP core {a} can serve the queue. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_quex_map_s cn; */
};
typedef union cavm_zipx_quex_map cavm_zipx_quex_map_t;

static inline uint64_t CAVM_ZIPX_QUEX_MAP(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_QUEX_MAP(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838000001400ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_QUEX_MAP", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_QUEX_MAP(a,b) cavm_zipx_quex_map_t
#define bustype_CAVM_ZIPX_QUEX_MAP(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_QUEX_MAP(a,b) "ZIPX_QUEX_MAP"
#define device_bar_CAVM_ZIPX_QUEX_MAP(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_QUEX_MAP(a,b) (a)
#define arguments_CAVM_ZIPX_QUEX_MAP(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_que#_sbuf_ctl
 *
 * ZIP Queue Buffer Parameter Registers
 * These registers set the buffer parameters for the instruction queues. When quiescent (i.e.
 * outstanding doorbell count is 0), it is safe to rewrite this register to effectively reset the
 * command buffer state machine. These registers must be programmed before software programs the
 * corresponding ZIP()_VQ()_SBUF_ADDR.
 */
union cavm_zipx_quex_sbuf_ctl
{
    uint64_t u;
    struct cavm_zipx_quex_sbuf_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t size                  : 13; /**< [ 44: 32](R/W) Command-buffer size, in number of 64-bit words per command buffer segment. */
        uint64_t inst_be               : 1;  /**< [ 31: 31](R/W) Instruction big endian control. When set, instructions, ZIP_HASH_S, and
                                                                 ZIP_ZRES_S are stored in big endian format in memory. */
        uint64_t inst_free             : 1;  /**< [ 30: 30](RO) Reserved. */
        uint64_t reserved_24_29        : 6;
        uint64_t stream_id             : 8;  /**< [ 23: 16](R/W) Lower 8-bits of stream ID for this queue. */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t stream_id             : 8;  /**< [ 23: 16](R/W) Lower 8-bits of stream ID for this queue. */
        uint64_t reserved_24_29        : 6;
        uint64_t inst_free             : 1;  /**< [ 30: 30](RO) Reserved. */
        uint64_t inst_be               : 1;  /**< [ 31: 31](R/W) Instruction big endian control. When set, instructions, ZIP_HASH_S, and
                                                                 ZIP_ZRES_S are stored in big endian format in memory. */
        uint64_t size                  : 13; /**< [ 44: 32](R/W) Command-buffer size, in number of 64-bit words per command buffer segment. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_quex_sbuf_ctl_s cn; */
};
typedef union cavm_zipx_quex_sbuf_ctl cavm_zipx_quex_sbuf_ctl_t;

static inline uint64_t CAVM_ZIPX_QUEX_SBUF_CTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_QUEX_SBUF_CTL(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838000001200ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_QUEX_SBUF_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_QUEX_SBUF_CTL(a,b) cavm_zipx_quex_sbuf_ctl_t
#define bustype_CAVM_ZIPX_QUEX_SBUF_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_QUEX_SBUF_CTL(a,b) "ZIPX_QUEX_SBUF_CTL"
#define device_bar_CAVM_ZIPX_QUEX_SBUF_CTL(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_QUEX_SBUF_CTL(a,b) (a)
#define arguments_CAVM_ZIPX_QUEX_SBUF_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_que_pri
 *
 * ZIP Queue Priority Register
 * This registers defines the priority between instruction queues.
 */
union cavm_zipx_que_pri
{
    uint64_t u;
    struct cavm_zipx_que_pri_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t pri                   : 8;  /**< [  7:  0](R/W) Queue priority. Each bit corresponds to a queue:
                                                                 PRI[{a}]=1: Queue {a} has higher priority. Round-robin between higher priority queues.
                                                                 PRI[{a}]=0: Queue {a} has lower priority. Round-robin between lower priority queues. */
#else /* Word 0 - Little Endian */
        uint64_t pri                   : 8;  /**< [  7:  0](R/W) Queue priority. Each bit corresponds to a queue:
                                                                 PRI[{a}]=1: Queue {a} has higher priority. Round-robin between higher priority queues.
                                                                 PRI[{a}]=0: Queue {a} has lower priority. Round-robin between lower priority queues. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_que_pri_s cn; */
};
typedef union cavm_zipx_que_pri cavm_zipx_que_pri_t;

static inline uint64_t CAVM_ZIPX_QUE_PRI(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_QUE_PRI(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000508ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_QUE_PRI", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_QUE_PRI(a) cavm_zipx_que_pri_t
#define bustype_CAVM_ZIPX_QUE_PRI(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_QUE_PRI(a) "ZIPX_QUE_PRI"
#define device_bar_CAVM_ZIPX_QUE_PRI(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_QUE_PRI(a) (a)
#define arguments_CAVM_ZIPX_QUE_PRI(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_que_reset
 *
 * INTERNAL: ZIP Queue Reset Register
 *
 * This register resets the ZIP instruction queues.
 */
union cavm_zipx_que_reset
{
    uint64_t u;
    struct cavm_zipx_que_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t reset                 : 8;  /**< [  7:  0](R/W) When set, the corresponding queue will be put into reset. When clear, the queue is out of
                                                                 reset. Bit[\<a\>] resets queue \<a\>. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 8;  /**< [  7:  0](R/W) When set, the corresponding queue will be put into reset. When clear, the queue is out of
                                                                 reset. Bit[\<a\>] resets queue \<a\>. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_que_reset_s cn; */
};
typedef union cavm_zipx_que_reset cavm_zipx_que_reset_t;

static inline uint64_t CAVM_ZIPX_QUE_RESET(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_QUE_RESET(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000400ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_QUE_RESET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_QUE_RESET(a) cavm_zipx_que_reset_t
#define bustype_CAVM_ZIPX_QUE_RESET(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_QUE_RESET(a) "ZIPX_QUE_RESET"
#define device_bar_CAVM_ZIPX_QUE_RESET(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_QUE_RESET(a) (a)
#define arguments_CAVM_ZIPX_QUE_RESET(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_throttle
 *
 * ZIP Throttle Register
 * This register controls the maximum number of in-flight NCB data fetch transactions. Writing 0
 * to this register causes the ZIP instruction execution unit to temporarily suspend
 * NCB read accesses;
 * this is not recommended for normal operation, but may be useful for diagnostics.
 */
union cavm_zipx_throttle
{
    uint64_t u;
    struct cavm_zipx_throttle_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t ld_infl               : 7;  /**< [  6:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values may improve
                                                                 ZIP performance but may starve other devices on the same NCB. Maximum allowed value is 0x40. */
#else /* Word 0 - Little Endian */
        uint64_t ld_infl               : 7;  /**< [  6:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values may improve
                                                                 ZIP performance but may starve other devices on the same NCB. Maximum allowed value is 0x40. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_throttle_s cn; */
};
typedef union cavm_zipx_throttle cavm_zipx_throttle_t;

static inline uint64_t CAVM_ZIPX_THROTTLE(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_THROTTLE(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && (a==0))
        return 0x838000000010ll + 0x1000000000ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIPX_THROTTLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_THROTTLE(a) cavm_zipx_throttle_t
#define bustype_CAVM_ZIPX_THROTTLE(a) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_THROTTLE(a) "ZIPX_THROTTLE"
#define device_bar_CAVM_ZIPX_THROTTLE(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIPX_THROTTLE(a) (a)
#define arguments_CAVM_ZIPX_THROTTLE(a) (a),-1,-1,-1

/**
 * Register (NCB) zip#_vf#_misc_ena_w1c
 *
 * ZIP VF Queue Misc Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_zipx_vfx_misc_ena_w1c
{
    uint64_t u;
    struct cavm_zipx_vfx_misc_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for ZIP(0)_VF(0..7)_MISC_INT[CTO]. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for ZIP(0)_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for ZIP(0)_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for ZIP(0)_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for ZIP(0)_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ZIP(0)_VF(0..7)_MISC_INT[DOVF]. */
#else /* Word 0 - Little Endian */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ZIP(0)_VF(0..7)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for ZIP(0)_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for ZIP(0)_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for ZIP(0)_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t reserved_4            : 1;
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for ZIP(0)_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for ZIP(0)_VF(0..7)_MISC_INT[CTO]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vfx_misc_ena_w1c_s cn; */
};
typedef union cavm_zipx_vfx_misc_ena_w1c cavm_zipx_vfx_misc_ena_w1c_t;

static inline uint64_t CAVM_ZIPX_VFX_MISC_ENA_W1C(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VFX_MISC_ENA_W1C(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838020000330ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_VFX_MISC_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VFX_MISC_ENA_W1C(a,b) cavm_zipx_vfx_misc_ena_w1c_t
#define bustype_CAVM_ZIPX_VFX_MISC_ENA_W1C(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VFX_MISC_ENA_W1C(a,b) "ZIPX_VFX_MISC_ENA_W1C"
#define device_bar_CAVM_ZIPX_VFX_MISC_ENA_W1C(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VFX_MISC_ENA_W1C(a,b) (a)
#define arguments_CAVM_ZIPX_VFX_MISC_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_vf#_misc_ena_w1s
 *
 * ZIP VF Queue Misc Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_zipx_vfx_misc_ena_w1s
{
    uint64_t u;
    struct cavm_zipx_vfx_misc_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for ZIP(0)_VF(0..7)_MISC_INT[CTO]. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for ZIP(0)_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for ZIP(0)_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for ZIP(0)_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for ZIP(0)_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ZIP(0)_VF(0..7)_MISC_INT[DOVF]. */
#else /* Word 0 - Little Endian */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ZIP(0)_VF(0..7)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for ZIP(0)_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for ZIP(0)_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for ZIP(0)_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t reserved_4            : 1;
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for ZIP(0)_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for ZIP(0)_VF(0..7)_MISC_INT[CTO]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vfx_misc_ena_w1s_s cn; */
};
typedef union cavm_zipx_vfx_misc_ena_w1s cavm_zipx_vfx_misc_ena_w1s_t;

static inline uint64_t CAVM_ZIPX_VFX_MISC_ENA_W1S(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VFX_MISC_ENA_W1S(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838020000320ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_VFX_MISC_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VFX_MISC_ENA_W1S(a,b) cavm_zipx_vfx_misc_ena_w1s_t
#define bustype_CAVM_ZIPX_VFX_MISC_ENA_W1S(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VFX_MISC_ENA_W1S(a,b) "ZIPX_VFX_MISC_ENA_W1S"
#define device_bar_CAVM_ZIPX_VFX_MISC_ENA_W1S(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VFX_MISC_ENA_W1S(a,b) (a)
#define arguments_CAVM_ZIPX_VFX_MISC_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_vf#_misc_int
 *
 * ZIP Queue Error Interrupt Register
 * These registers contain the per-queue error interrupts.
 */
union cavm_zipx_vfx_misc_int
{
    uint64_t u;
    struct cavm_zipx_vfx_misc_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1C/H) Core time out detected. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1C/H) PF to VF mailbox interrupt. Set when ZIP()_VF()_PF_MBOX(0) is written. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) NCB write response error. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1C/H) NCB read response error. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1C/H) Instruction NCB read response error. */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1C/H) Doorbell overflow. */
#else /* Word 0 - Little Endian */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1C/H) Doorbell overflow. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1C/H) Instruction NCB read response error. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1C/H) NCB read response error. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) NCB write response error. */
        uint64_t reserved_4            : 1;
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1C/H) PF to VF mailbox interrupt. Set when ZIP()_VF()_PF_MBOX(0) is written. */
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1C/H) Core time out detected. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vfx_misc_int_s cn; */
};
typedef union cavm_zipx_vfx_misc_int cavm_zipx_vfx_misc_int_t;

static inline uint64_t CAVM_ZIPX_VFX_MISC_INT(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VFX_MISC_INT(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838020000300ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_VFX_MISC_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VFX_MISC_INT(a,b) cavm_zipx_vfx_misc_int_t
#define bustype_CAVM_ZIPX_VFX_MISC_INT(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VFX_MISC_INT(a,b) "ZIPX_VFX_MISC_INT"
#define device_bar_CAVM_ZIPX_VFX_MISC_INT(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VFX_MISC_INT(a,b) (a)
#define arguments_CAVM_ZIPX_VFX_MISC_INT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_vf#_misc_int_w1s
 *
 * ZIP VF Queue Misc Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_zipx_vfx_misc_int_w1s
{
    uint64_t u;
    struct cavm_zipx_vfx_misc_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets ZIP(0)_VF(0..7)_MISC_INT[CTO]. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1S/H) Reads or sets ZIP(0)_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets ZIP(0)_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets ZIP(0)_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets ZIP(0)_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ZIP(0)_VF(0..7)_MISC_INT[DOVF]. */
#else /* Word 0 - Little Endian */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ZIP(0)_VF(0..7)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets ZIP(0)_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets ZIP(0)_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets ZIP(0)_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t reserved_4            : 1;
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1S/H) Reads or sets ZIP(0)_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets ZIP(0)_VF(0..7)_MISC_INT[CTO]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vfx_misc_int_w1s_s cn; */
};
typedef union cavm_zipx_vfx_misc_int_w1s cavm_zipx_vfx_misc_int_w1s_t;

static inline uint64_t CAVM_ZIPX_VFX_MISC_INT_W1S(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VFX_MISC_INT_W1S(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838020000310ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_VFX_MISC_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VFX_MISC_INT_W1S(a,b) cavm_zipx_vfx_misc_int_w1s_t
#define bustype_CAVM_ZIPX_VFX_MISC_INT_W1S(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VFX_MISC_INT_W1S(a,b) "ZIPX_VFX_MISC_INT_W1S"
#define device_bar_CAVM_ZIPX_VFX_MISC_INT_W1S(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VFX_MISC_INT_W1S(a,b) (a)
#define arguments_CAVM_ZIPX_VFX_MISC_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_vf#_msix_pba#
 *
 * ZIP VF MSI-X Pending-Bit-Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the ZIP_VF_INT_VEC_E
 * enumeration.
 */
union cavm_zipx_vfx_msix_pbax
{
    uint64_t u;
    struct cavm_zipx_vfx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated ZIP()_PF_MSIX_VEC()_CTL, enumerated by ZIP_PF_INT_VEC_E.
                                                                 Bits that have no associated ZIP_PF_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated ZIP()_PF_MSIX_VEC()_CTL, enumerated by ZIP_PF_INT_VEC_E.
                                                                 Bits that have no associated ZIP_PF_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vfx_msix_pbax_s cn; */
};
typedef union cavm_zipx_vfx_msix_pbax cavm_zipx_vfx_msix_pbax_t;

static inline uint64_t CAVM_ZIPX_VFX_MSIX_PBAX(unsigned long a, unsigned long b, unsigned long c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VFX_MSIX_PBAX(unsigned long a, unsigned long b, unsigned long c)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7) && (c==0)))
        return 0x8380300f0000ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7) + 8ll * ((c) & 0x0);
    __cavm_csr_fatal("ZIPX_VFX_MSIX_PBAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VFX_MSIX_PBAX(a,b,c) cavm_zipx_vfx_msix_pbax_t
#define bustype_CAVM_ZIPX_VFX_MSIX_PBAX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VFX_MSIX_PBAX(a,b,c) "ZIPX_VFX_MSIX_PBAX"
#define device_bar_CAVM_ZIPX_VFX_MSIX_PBAX(a,b,c) 0x4 /* VF_BAR4 */
#define busnum_CAVM_ZIPX_VFX_MSIX_PBAX(a,b,c) (a)
#define arguments_CAVM_ZIPX_VFX_MSIX_PBAX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) zip#_vf#_msix_vec#_addr
 *
 * ZIP VF MSI-X Vector-Table Address Registers
 * This register is the MSI-X vector table, indexed by the ZIP_VF_INT_VEC_E enumeration.
 */
union cavm_zipx_vfx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_zipx_vfx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](RAZ) Secure vector. Zero as not supported on a per-vector basis for VFs; use
                                                                 PCCPF_ZIP()_VSEC_SCTL[MSIX_SEC] instead (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]). */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](RAZ) Secure vector. Zero as not supported on a per-vector basis for VFs; use
                                                                 PCCPF_ZIP()_VSEC_SCTL[MSIX_SEC] instead (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]). */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vfx_msix_vecx_addr_s cn; */
};
typedef union cavm_zipx_vfx_msix_vecx_addr cavm_zipx_vfx_msix_vecx_addr_t;

static inline uint64_t CAVM_ZIPX_VFX_MSIX_VECX_ADDR(unsigned long a, unsigned long b, unsigned long c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VFX_MSIX_VECX_ADDR(unsigned long a, unsigned long b, unsigned long c)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7) && (c<=1)))
        return 0x838030000000ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7) + 0x10ll * ((c) & 0x1);
    __cavm_csr_fatal("ZIPX_VFX_MSIX_VECX_ADDR", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VFX_MSIX_VECX_ADDR(a,b,c) cavm_zipx_vfx_msix_vecx_addr_t
#define bustype_CAVM_ZIPX_VFX_MSIX_VECX_ADDR(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VFX_MSIX_VECX_ADDR(a,b,c) "ZIPX_VFX_MSIX_VECX_ADDR"
#define device_bar_CAVM_ZIPX_VFX_MSIX_VECX_ADDR(a,b,c) 0x4 /* VF_BAR4 */
#define busnum_CAVM_ZIPX_VFX_MSIX_VECX_ADDR(a,b,c) (a)
#define arguments_CAVM_ZIPX_VFX_MSIX_VECX_ADDR(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) zip#_vf#_msix_vec#_ctl
 *
 * ZIP VF MSI-X Vector-Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the ZIP_VF_INT_VEC_E enumeration.
 */
union cavm_zipx_vfx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_zipx_vfx_msix_vecx_ctl_s
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
    /* struct cavm_zipx_vfx_msix_vecx_ctl_s cn; */
};
typedef union cavm_zipx_vfx_msix_vecx_ctl cavm_zipx_vfx_msix_vecx_ctl_t;

static inline uint64_t CAVM_ZIPX_VFX_MSIX_VECX_CTL(unsigned long a, unsigned long b, unsigned long c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VFX_MSIX_VECX_CTL(unsigned long a, unsigned long b, unsigned long c)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7) && (c<=1)))
        return 0x838030000008ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7) + 0x10ll * ((c) & 0x1);
    __cavm_csr_fatal("ZIPX_VFX_MSIX_VECX_CTL", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VFX_MSIX_VECX_CTL(a,b,c) cavm_zipx_vfx_msix_vecx_ctl_t
#define bustype_CAVM_ZIPX_VFX_MSIX_VECX_CTL(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VFX_MSIX_VECX_CTL(a,b,c) "ZIPX_VFX_MSIX_VECX_CTL"
#define device_bar_CAVM_ZIPX_VFX_MSIX_VECX_CTL(a,b,c) 0x4 /* VF_BAR4 */
#define busnum_CAVM_ZIPX_VFX_MSIX_VECX_CTL(a,b,c) (a)
#define arguments_CAVM_ZIPX_VFX_MSIX_VECX_CTL(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) zip#_vf#_pf_mbox#
 *
 * ZIP VF/PF Mailbox Registers
 */
union cavm_zipx_vfx_pf_mboxx
{
    uint64_t u;
    struct cavm_zipx_vfx_pf_mboxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These VF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. The PF may access the same storage using ZIP()_PF_VF()_MBOX(). MBOX(0) is
                                                                 typically used for PF to VF signaling, MBOX(1) for VF to PF. Writing
                                                                 ZIP()_VF()_PF_MBOX(1) (but not ZIP()_PF_VF()_MBOX(1)) will set the
                                                                 corresponding ZIP()_PF_MBOX_INT() bit, which if appropriately enabled will send an
                                                                 interrupt to the PF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These VF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. The PF may access the same storage using ZIP()_PF_VF()_MBOX(). MBOX(0) is
                                                                 typically used for PF to VF signaling, MBOX(1) for VF to PF. Writing
                                                                 ZIP()_VF()_PF_MBOX(1) (but not ZIP()_PF_VF()_MBOX(1)) will set the
                                                                 corresponding ZIP()_PF_MBOX_INT() bit, which if appropriately enabled will send an
                                                                 interrupt to the PF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vfx_pf_mboxx_s cn; */
};
typedef union cavm_zipx_vfx_pf_mboxx cavm_zipx_vfx_pf_mboxx_t;

static inline uint64_t CAVM_ZIPX_VFX_PF_MBOXX(unsigned long a, unsigned long b, unsigned long c) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VFX_PF_MBOXX(unsigned long a, unsigned long b, unsigned long c)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7) && (c<=1)))
        return 0x838020000400ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7) + 8ll * ((c) & 0x1);
    __cavm_csr_fatal("ZIPX_VFX_PF_MBOXX", 3, a, b, c, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VFX_PF_MBOXX(a,b,c) cavm_zipx_vfx_pf_mboxx_t
#define bustype_CAVM_ZIPX_VFX_PF_MBOXX(a,b,c) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VFX_PF_MBOXX(a,b,c) "ZIPX_VFX_PF_MBOXX"
#define device_bar_CAVM_ZIPX_VFX_PF_MBOXX(a,b,c) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VFX_PF_MBOXX(a,b,c) (a)
#define arguments_CAVM_ZIPX_VFX_PF_MBOXX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) zip#_vq#_done
 *
 * ZIP VF Queue Done Count Registers
 * These registers contain the per-queue instruction done count.
 */
union cavm_zipx_vqx_done
{
    uint64_t u;
    struct cavm_zipx_vqx_done_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t done                  : 20; /**< [ 19:  0](R/W/H) Done count. When ZIP_INST_S[DONEINT] set and that instruction completes,
                                                                 ZIP()_VQ()_DONE[DONE] is incremented. Writes to this field are for diagnostic use only;
                                                                 instead software writes ZIP()_VQ()_DONE_ACK[DONE_ACK] with the number of decrements for
                                                                 this field.

                                                                 Interrupts are sent as follows:

                                                                 * When ZIP()_VQ()_DONE[DONE] = 0, then no results are pending, the interrupt coalescing
                                                                 timer is held to zero, and an interrupt is not sent.

                                                                 * When ZIP()_VQ()_DONE[DONE] != 0, then the interrupt coalescing timer counts. If
                                                                 the counter is \>= ZIP()_VQ()_DONE_WAIT[TIME_WAIT] microseconds, or ZIP()_VQ()_DONE[DONE]
                                                                 \>= ZIP()_VQ()_DONE_WAIT[NUM_WAIT], i.e. enough time has passed or enough results
                                                                 have arrived, then the interrupt is sent.  Otherwise, it is not sent due to
                                                                 coalescing.

                                                                 * When ZIP()_VQ()_DONE_ACK is written, the interrupt coalescing timer restarts.
                                                                 Note that after decrementing, this interrupt equation is recomputed.  For example, if
                                                                 ZIP()_VQ()_DONE[DONE] \>= ZIP()_VQ()_DONE_WAIT[NUM_WAIT] and the timer is zero, the
                                                                 interrupt will be resent immediately.  This covers the race case between software
                                                                 acknowledging an interrupt and a result returning.

                                                                 * When ZIP()_VQ()_DONE_ENA_W1S[DONE_ENA] = 0, interrupts are not sent, but the counting
                                                                 described above still occurs.

                                                                 Since ZIP instructions within a queue can complete out-of-order when the queue is mapped
                                                                 to multiple ZIP engines, if software is using completion interrupts the suggested scheme
                                                                 is to request a DONEINT on each request, and when an interrupt arrives perform a "greedy"
                                                                 scan for completions; even if a later command is acknowledged first this will not result
                                                                 in missing a completion. Software could also use ZIP_ZRES_S[DONEINT] to check when
                                                                 instruction needs to be counted into ZIP()_VQ()_DONE/ZIP()_VQ()_DONE_ACK.

                                                                 Software is responsible for making sure [DONE] does not overflow; for example by
                                                                 insuring there are not more than 2^20-1 instructions in flight that may request
                                                                 interrupts. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 20; /**< [ 19:  0](R/W/H) Done count. When ZIP_INST_S[DONEINT] set and that instruction completes,
                                                                 ZIP()_VQ()_DONE[DONE] is incremented. Writes to this field are for diagnostic use only;
                                                                 instead software writes ZIP()_VQ()_DONE_ACK[DONE_ACK] with the number of decrements for
                                                                 this field.

                                                                 Interrupts are sent as follows:

                                                                 * When ZIP()_VQ()_DONE[DONE] = 0, then no results are pending, the interrupt coalescing
                                                                 timer is held to zero, and an interrupt is not sent.

                                                                 * When ZIP()_VQ()_DONE[DONE] != 0, then the interrupt coalescing timer counts. If
                                                                 the counter is \>= ZIP()_VQ()_DONE_WAIT[TIME_WAIT] microseconds, or ZIP()_VQ()_DONE[DONE]
                                                                 \>= ZIP()_VQ()_DONE_WAIT[NUM_WAIT], i.e. enough time has passed or enough results
                                                                 have arrived, then the interrupt is sent.  Otherwise, it is not sent due to
                                                                 coalescing.

                                                                 * When ZIP()_VQ()_DONE_ACK is written, the interrupt coalescing timer restarts.
                                                                 Note that after decrementing, this interrupt equation is recomputed.  For example, if
                                                                 ZIP()_VQ()_DONE[DONE] \>= ZIP()_VQ()_DONE_WAIT[NUM_WAIT] and the timer is zero, the
                                                                 interrupt will be resent immediately.  This covers the race case between software
                                                                 acknowledging an interrupt and a result returning.

                                                                 * When ZIP()_VQ()_DONE_ENA_W1S[DONE_ENA] = 0, interrupts are not sent, but the counting
                                                                 described above still occurs.

                                                                 Since ZIP instructions within a queue can complete out-of-order when the queue is mapped
                                                                 to multiple ZIP engines, if software is using completion interrupts the suggested scheme
                                                                 is to request a DONEINT on each request, and when an interrupt arrives perform a "greedy"
                                                                 scan for completions; even if a later command is acknowledged first this will not result
                                                                 in missing a completion. Software could also use ZIP_ZRES_S[DONEINT] to check when
                                                                 instruction needs to be counted into ZIP()_VQ()_DONE/ZIP()_VQ()_DONE_ACK.

                                                                 Software is responsible for making sure [DONE] does not overflow; for example by
                                                                 insuring there are not more than 2^20-1 instructions in flight that may request
                                                                 interrupts. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vqx_done_s cn; */
};
typedef union cavm_zipx_vqx_done cavm_zipx_vqx_done_t;

static inline uint64_t CAVM_ZIPX_VQX_DONE(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VQX_DONE(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838020000100ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_VQX_DONE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VQX_DONE(a,b) cavm_zipx_vqx_done_t
#define bustype_CAVM_ZIPX_VQX_DONE(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VQX_DONE(a,b) "ZIPX_VQX_DONE"
#define device_bar_CAVM_ZIPX_VQX_DONE(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VQX_DONE(a,b) (a)
#define arguments_CAVM_ZIPX_VQX_DONE(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_vq#_done_ack
 *
 * ZIP VF Queue Done Count Ack Registers
 * This register is written by software to acknowledge interrupts.
 */
union cavm_zipx_vqx_done_ack
{
    uint64_t u;
    struct cavm_zipx_vqx_done_ack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t done_ack              : 20; /**< [ 19:  0](R/W/H) Number of decrements to ZIP()_VQ()_DONE[DONE]. When read, returns ZIP()_VQ()_DONE[DONE].

                                                                 Written by software to acknowledge interrupts. If ZIP()_VQ()_DONE[DONE] is still
                                                                 nonzero, the interrupt will be re-sent if the conditions described in
                                                                 ZIP()_VQ()_DONE[DONE] are satified. */
#else /* Word 0 - Little Endian */
        uint64_t done_ack              : 20; /**< [ 19:  0](R/W/H) Number of decrements to ZIP()_VQ()_DONE[DONE]. When read, returns ZIP()_VQ()_DONE[DONE].

                                                                 Written by software to acknowledge interrupts. If ZIP()_VQ()_DONE[DONE] is still
                                                                 nonzero, the interrupt will be re-sent if the conditions described in
                                                                 ZIP()_VQ()_DONE[DONE] are satified. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vqx_done_ack_s cn; */
};
typedef union cavm_zipx_vqx_done_ack cavm_zipx_vqx_done_ack_t;

static inline uint64_t CAVM_ZIPX_VQX_DONE_ACK(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VQX_DONE_ACK(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838020000110ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_VQX_DONE_ACK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VQX_DONE_ACK(a,b) cavm_zipx_vqx_done_ack_t
#define bustype_CAVM_ZIPX_VQX_DONE_ACK(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VQX_DONE_ACK(a,b) "ZIPX_VQX_DONE_ACK"
#define device_bar_CAVM_ZIPX_VQX_DONE_ACK(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VQX_DONE_ACK(a,b) (a)
#define arguments_CAVM_ZIPX_VQX_DONE_ACK(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_vq#_done_ena_w1c
 *
 * ZIP VF Queue Done Interrupt Enable Clear Registers
 * Write 1 to these registers to disable the DONEINT interrupt for the queue.
 */
union cavm_zipx_vqx_done_ena_w1c
{
    uint64_t u;
    struct cavm_zipx_vqx_done_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done_ena              : 1;  /**< [  0:  0](R/W1C/H) Writing 1 will disable DONEINT for this queue. Writing 0 has no effect.
                                                                 A read will return the DONEINT enable bit. */
#else /* Word 0 - Little Endian */
        uint64_t done_ena              : 1;  /**< [  0:  0](R/W1C/H) Writing 1 will disable DONEINT for this queue. Writing 0 has no effect.
                                                                 A read will return the DONEINT enable bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vqx_done_ena_w1c_s cn; */
};
typedef union cavm_zipx_vqx_done_ena_w1c cavm_zipx_vqx_done_ena_w1c_t;

static inline uint64_t CAVM_ZIPX_VQX_DONE_ENA_W1C(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VQX_DONE_ENA_W1C(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838020000130ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_VQX_DONE_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VQX_DONE_ENA_W1C(a,b) cavm_zipx_vqx_done_ena_w1c_t
#define bustype_CAVM_ZIPX_VQX_DONE_ENA_W1C(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VQX_DONE_ENA_W1C(a,b) "ZIPX_VQX_DONE_ENA_W1C"
#define device_bar_CAVM_ZIPX_VQX_DONE_ENA_W1C(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VQX_DONE_ENA_W1C(a,b) (a)
#define arguments_CAVM_ZIPX_VQX_DONE_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_vq#_done_ena_w1s
 *
 * ZIP VF Queue Done Interrupt Enable Set Registers
 * Write 1 to these registers to enable the DONEINT interrupt for the queue.
 */
union cavm_zipx_vqx_done_ena_w1s
{
    uint64_t u;
    struct cavm_zipx_vqx_done_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done_ena              : 1;  /**< [  0:  0](R/W1S/H) Writing a 1 will enable DONEINT for this queue. Writing a 0 has no effect.
                                                                 A read will return the DONEINT enable bit. */
#else /* Word 0 - Little Endian */
        uint64_t done_ena              : 1;  /**< [  0:  0](R/W1S/H) Writing a 1 will enable DONEINT for this queue. Writing a 0 has no effect.
                                                                 A read will return the DONEINT enable bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vqx_done_ena_w1s_s cn; */
};
typedef union cavm_zipx_vqx_done_ena_w1s cavm_zipx_vqx_done_ena_w1s_t;

static inline uint64_t CAVM_ZIPX_VQX_DONE_ENA_W1S(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VQX_DONE_ENA_W1S(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838020000120ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_VQX_DONE_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VQX_DONE_ENA_W1S(a,b) cavm_zipx_vqx_done_ena_w1s_t
#define bustype_CAVM_ZIPX_VQX_DONE_ENA_W1S(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VQX_DONE_ENA_W1S(a,b) "ZIPX_VQX_DONE_ENA_W1S"
#define device_bar_CAVM_ZIPX_VQX_DONE_ENA_W1S(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VQX_DONE_ENA_W1S(a,b) (a)
#define arguments_CAVM_ZIPX_VQX_DONE_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_vq#_done_wait
 *
 * ZIP VF Queue Done Interrupt Coalescing Wait Registers
 * Specifies the per queue interrupt coalescing settings.
 */
union cavm_zipx_vqx_done_wait
{
    uint64_t u;
    struct cavm_zipx_vqx_done_wait_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t time_wait             : 16; /**< [ 47: 32](R/W) Timer hold-off. When ZIP()_VQ()_DONE[DONE] = 0, or ZIP()_VQ()_DONE_ACK is written a
                                                                 timer is cleared. When the timer reaches [TIME_WAIT] microseconds then interrupt
                                                                 coalescing ends; see ZIP()_VQ()_DONE[DONE]. If zero, time coalescing is disabled. */
        uint64_t reserved_20_31        : 12;
        uint64_t num_wait              : 20; /**< [ 19:  0](R/W) Number of messages hold-off.  When ZIP()_VQ()_DONE[DONE] \>= [NUM_WAIT] then interrupt
                                                                 coalescing ends; see ZIP()_VQ()_DONE[DONE]. If zero, message number coalescing is
                                                                 disabled. */
#else /* Word 0 - Little Endian */
        uint64_t num_wait              : 20; /**< [ 19:  0](R/W) Number of messages hold-off.  When ZIP()_VQ()_DONE[DONE] \>= [NUM_WAIT] then interrupt
                                                                 coalescing ends; see ZIP()_VQ()_DONE[DONE]. If zero, message number coalescing is
                                                                 disabled. */
        uint64_t reserved_20_31        : 12;
        uint64_t time_wait             : 16; /**< [ 47: 32](R/W) Timer hold-off. When ZIP()_VQ()_DONE[DONE] = 0, or ZIP()_VQ()_DONE_ACK is written a
                                                                 timer is cleared. When the timer reaches [TIME_WAIT] microseconds then interrupt
                                                                 coalescing ends; see ZIP()_VQ()_DONE[DONE]. If zero, time coalescing is disabled. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vqx_done_wait_s cn; */
};
typedef union cavm_zipx_vqx_done_wait cavm_zipx_vqx_done_wait_t;

static inline uint64_t CAVM_ZIPX_VQX_DONE_WAIT(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VQX_DONE_WAIT(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838020000140ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_VQX_DONE_WAIT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VQX_DONE_WAIT(a,b) cavm_zipx_vqx_done_wait_t
#define bustype_CAVM_ZIPX_VQX_DONE_WAIT(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VQX_DONE_WAIT(a,b) "ZIPX_VQX_DONE_WAIT"
#define device_bar_CAVM_ZIPX_VQX_DONE_WAIT(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VQX_DONE_WAIT(a,b) (a)
#define arguments_CAVM_ZIPX_VQX_DONE_WAIT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_vq#_doorbell
 *
 * ZIP VF Queue Doorbell Registers
 * Doorbells for the ZIP instruction queues.
 */
union cavm_zipx_vqx_doorbell
{
    uint64_t u;
    struct cavm_zipx_vqx_doorbell_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t dbell_cnt             : 20; /**< [ 19:  0](R/W/H) Number of instructions to add to the ZIP instruction doorbell count. */
#else /* Word 0 - Little Endian */
        uint64_t dbell_cnt             : 20; /**< [ 19:  0](R/W/H) Number of instructions to add to the ZIP instruction doorbell count. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vqx_doorbell_s cn; */
};
typedef union cavm_zipx_vqx_doorbell cavm_zipx_vqx_doorbell_t;

static inline uint64_t CAVM_ZIPX_VQX_DOORBELL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VQX_DOORBELL(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838020001000ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_VQX_DOORBELL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VQX_DOORBELL(a,b) cavm_zipx_vqx_doorbell_t
#define bustype_CAVM_ZIPX_VQX_DOORBELL(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VQX_DOORBELL(a,b) "ZIPX_VQX_DOORBELL"
#define device_bar_CAVM_ZIPX_VQX_DOORBELL(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VQX_DOORBELL(a,b) (a)
#define arguments_CAVM_ZIPX_VQX_DOORBELL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_vq#_ena
 *
 * ZIP VF Queue Enable Register
 * If a queue is disabled, ZIP CTL stops fetching instructions from the queue.
 */
union cavm_zipx_vqx_ena
{
    uint64_t u;
    struct cavm_zipx_vqx_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enables the logical instruction queue. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enables the logical instruction queue. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vqx_ena_s cn; */
};
typedef union cavm_zipx_vqx_ena cavm_zipx_vqx_ena_t;

static inline uint64_t CAVM_ZIPX_VQX_ENA(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VQX_ENA(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838020000010ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_VQX_ENA", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VQX_ENA(a,b) cavm_zipx_vqx_ena_t
#define bustype_CAVM_ZIPX_VQX_ENA(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VQX_ENA(a,b) "ZIPX_VQX_ENA"
#define device_bar_CAVM_ZIPX_VQX_ENA(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VQX_ENA(a,b) (a)
#define arguments_CAVM_ZIPX_VQX_ENA(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip#_vq#_sbuf_addr
 *
 * ZIP VF Queue Starting Buffer Address Registers
 * These registers set the buffer addresses for the instruction queues. When quiescent (i.e.
 * outstanding doorbell count is 0), it is safe to rewrite this register to effectively reset the
 * command buffer state machine. These registers must be programmed after software programs the
 * corresponding ZIP()_QUE()_SBUF_CTL.
 */
union cavm_zipx_vqx_sbuf_addr
{
    uint64_t u;
    struct cavm_zipx_vqx_sbuf_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) Instruction buffer pointer bits \<52:7\> (128-byte aligned). Behavior is unpredictable if
                                                                 the address is 0x0.  When written, it is the initial buffer starting IOVA; when read, it
                                                                 is the next read pointer IOVA to be requested from NCB.
                                                                 [PTR] is overwritten with the next pointer each time that the command buffer
                                                                 segment is exhausted. New commands will then be read from the newly specified command
                                                                 buffer pointer. */
        uint64_t off                   : 7;  /**< [  6:  0](RO/H) When written, the value is ignored. When read, the returned value is the offset
                                                                 of the next read pointer. */
#else /* Word 0 - Little Endian */
        uint64_t off                   : 7;  /**< [  6:  0](RO/H) When written, the value is ignored. When read, the returned value is the offset
                                                                 of the next read pointer. */
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) Instruction buffer pointer bits \<52:7\> (128-byte aligned). Behavior is unpredictable if
                                                                 the address is 0x0.  When written, it is the initial buffer starting IOVA; when read, it
                                                                 is the next read pointer IOVA to be requested from NCB.
                                                                 [PTR] is overwritten with the next pointer each time that the command buffer
                                                                 segment is exhausted. New commands will then be read from the newly specified command
                                                                 buffer pointer. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zipx_vqx_sbuf_addr_s cn; */
};
typedef union cavm_zipx_vqx_sbuf_addr cavm_zipx_vqx_sbuf_addr_t;

static inline uint64_t CAVM_ZIPX_VQX_SBUF_ADDR(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIPX_VQX_SBUF_ADDR(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a==0) && (b<=7)))
        return 0x838020000020ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0x7);
    __cavm_csr_fatal("ZIPX_VQX_SBUF_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIPX_VQX_SBUF_ADDR(a,b) cavm_zipx_vqx_sbuf_addr_t
#define bustype_CAVM_ZIPX_VQX_SBUF_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIPX_VQX_SBUF_ADDR(a,b) "ZIPX_VQX_SBUF_ADDR"
#define device_bar_CAVM_ZIPX_VQX_SBUF_ADDR(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIPX_VQX_SBUF_ADDR(a,b) (a)
#define arguments_CAVM_ZIPX_VQX_SBUF_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip_cmd_ctl
 *
 * ZIP Clock/Reset Control Register
 * This register controls clock and reset.
 */
union cavm_zip_cmd_ctl
{
    uint64_t u;
    struct cavm_zip_cmd_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t eng_forceclk          : 12; /**< [ 43: 32](R/W) When a bit is set to 1, it forces corresponding ZIP engine conditional clock always on. */
        uint64_t reserved_3_31         : 29;
        uint64_t ctl_forceclk          : 1;  /**< [  2:  2](R/W) When this bit is set to 1, it forces CTL conditional clock always on. */
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) When this bit is set to 1, it forces ZIP clocks on. */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset one-shot pulse to reset ZIP subsystem. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset one-shot pulse to reset ZIP subsystem. */
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) When this bit is set to 1, it forces ZIP clocks on. */
        uint64_t ctl_forceclk          : 1;  /**< [  2:  2](R/W) When this bit is set to 1, it forces CTL conditional clock always on. */
        uint64_t reserved_3_31         : 29;
        uint64_t eng_forceclk          : 12; /**< [ 43: 32](R/W) When a bit is set to 1, it forces corresponding ZIP engine conditional clock always on. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } s;
    struct cavm_zip_cmd_ctl_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) When this bit is set to 1, it forces ZIP clocks on. */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset one-shot pulse to reset ZIP subsystem. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset one-shot pulse to reset ZIP subsystem. */
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) When this bit is set to 1, it forces ZIP clocks on. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_zip_cmd_ctl_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_44_63        : 20;
        uint64_t eng_forceclk          : 12; /**< [ 43: 32](R/W) When a bit is set to 1, it forces corresponding ZIP engine conditional clock always on. */
        uint64_t reserved_3_31         : 29;
        uint64_t ctl_forceclk          : 1;  /**< [  2:  2](R/W) When this bit is set to 1, it forces CTL conditional clock always on. */
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) When this bit is set to 1, it forces all ZIP subsystem conditional clocks on. */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset one-shot pulse to reset ZIP subsystem. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset one-shot pulse to reset ZIP subsystem. */
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) When this bit is set to 1, it forces all ZIP subsystem conditional clocks on. */
        uint64_t ctl_forceclk          : 1;  /**< [  2:  2](R/W) When this bit is set to 1, it forces CTL conditional clock always on. */
        uint64_t reserved_3_31         : 29;
        uint64_t eng_forceclk          : 12; /**< [ 43: 32](R/W) When a bit is set to 1, it forces corresponding ZIP engine conditional clock always on. */
        uint64_t reserved_44_63        : 20;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_cmd_ctl cavm_zip_cmd_ctl_t;

#define CAVM_ZIP_CMD_CTL CAVM_ZIP_CMD_CTL_FUNC()
static inline uint64_t CAVM_ZIP_CMD_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_CMD_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000000ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000000ll;
    __cavm_csr_fatal("ZIP_CMD_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_CMD_CTL cavm_zip_cmd_ctl_t
#define bustype_CAVM_ZIP_CMD_CTL CSR_TYPE_NCB
#define basename_CAVM_ZIP_CMD_CTL "ZIP_CMD_CTL"
#define device_bar_CAVM_ZIP_CMD_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_CMD_CTL 0
#define arguments_CAVM_ZIP_CMD_CTL -1,-1,-1,-1

/**
 * Register (NCB) zip_constants
 *
 * ZIP Constants Register
 * This register contains implementation-related parameters of the ZIP core in this
 * chip.
 */
union cavm_zip_constants
{
    uint64_t u;
    struct cavm_zip_constants_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nexec                 : 8;  /**< [ 63: 56](RO) Number of available ZIP execution units (compression-only plus decompression-only
                                                                 plus compression-or-decompression). If ZIP is disabled, this field is 0x0. */
        uint64_t reserved_50_55        : 6;
        uint64_t hash                  : 1;  /**< [ 49: 49](RO) Hashing supported: 1 = supported, 0 = not supported. */
        uint64_t syncflush_capable     : 1;  /**< [ 48: 48](RO) Sync flush supported: 1 = supported, 0 = not supported. */
        uint64_t depth                 : 16; /**< [ 47: 32](RO) Maximum search depth for compression. */
        uint64_t onfsize               : 12; /**< [ 31: 20](RO) Output near full threshold, in bytes. */
        uint64_t ctxsize               : 12; /**< [ 19:  8](RO) Decompression context size in bytes. */
        uint64_t reserved_1_7          : 7;
        uint64_t disabled              : 1;  /**< [  0:  0](RO) Disable. 1 = ZIP is disabled, 0 = ZIP is enabled. */
#else /* Word 0 - Little Endian */
        uint64_t disabled              : 1;  /**< [  0:  0](RO) Disable. 1 = ZIP is disabled, 0 = ZIP is enabled. */
        uint64_t reserved_1_7          : 7;
        uint64_t ctxsize               : 12; /**< [ 19:  8](RO) Decompression context size in bytes. */
        uint64_t onfsize               : 12; /**< [ 31: 20](RO) Output near full threshold, in bytes. */
        uint64_t depth                 : 16; /**< [ 47: 32](RO) Maximum search depth for compression. */
        uint64_t syncflush_capable     : 1;  /**< [ 48: 48](RO) Sync flush supported: 1 = supported, 0 = not supported. */
        uint64_t hash                  : 1;  /**< [ 49: 49](RO) Hashing supported: 1 = supported, 0 = not supported. */
        uint64_t reserved_50_55        : 6;
        uint64_t nexec                 : 8;  /**< [ 63: 56](RO) Number of available ZIP execution units (compression-only plus decompression-only
                                                                 plus compression-or-decompression). If ZIP is disabled, this field is 0x0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_constants_s cn8; */
    struct cavm_zip_constants_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nexec                 : 8;  /**< [ 63: 56](RO/H) Number of max available ZIP execution units (compression-only plus decompression-only
                                                                 plus compression-or-decompression). */
        uint64_t reserved_50_55        : 6;
        uint64_t hash                  : 1;  /**< [ 49: 49](RO) Hashing supported: 1 = supported, 0 = not supported. */
        uint64_t syncflush_capable     : 1;  /**< [ 48: 48](RO) Sync flush supported: 1 = supported, 0 = not supported. */
        uint64_t depth                 : 16; /**< [ 47: 32](RO) Maximum search depth for compression. */
        uint64_t onfsize               : 12; /**< [ 31: 20](RO) Output near full threshold, in bytes. */
        uint64_t ctxsize               : 12; /**< [ 19:  8](RO) Decompression context size in bytes. */
        uint64_t reserved_1_7          : 7;
        uint64_t disabled              : 1;  /**< [  0:  0](RO) Disable. 1 = ZIP is disabled, 0 = ZIP is enabled. */
#else /* Word 0 - Little Endian */
        uint64_t disabled              : 1;  /**< [  0:  0](RO) Disable. 1 = ZIP is disabled, 0 = ZIP is enabled. */
        uint64_t reserved_1_7          : 7;
        uint64_t ctxsize               : 12; /**< [ 19:  8](RO) Decompression context size in bytes. */
        uint64_t onfsize               : 12; /**< [ 31: 20](RO) Output near full threshold, in bytes. */
        uint64_t depth                 : 16; /**< [ 47: 32](RO) Maximum search depth for compression. */
        uint64_t syncflush_capable     : 1;  /**< [ 48: 48](RO) Sync flush supported: 1 = supported, 0 = not supported. */
        uint64_t hash                  : 1;  /**< [ 49: 49](RO) Hashing supported: 1 = supported, 0 = not supported. */
        uint64_t reserved_50_55        : 6;
        uint64_t nexec                 : 8;  /**< [ 63: 56](RO/H) Number of max available ZIP execution units (compression-only plus decompression-only
                                                                 plus compression-or-decompression). */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_constants cavm_zip_constants_t;

#define CAVM_ZIP_CONSTANTS CAVM_ZIP_CONSTANTS_FUNC()
static inline uint64_t CAVM_ZIP_CONSTANTS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_CONSTANTS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x8380000000a0ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x8380000000a0ll;
    __cavm_csr_fatal("ZIP_CONSTANTS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_CONSTANTS cavm_zip_constants_t
#define bustype_CAVM_ZIP_CONSTANTS CSR_TYPE_NCB
#define basename_CAVM_ZIP_CONSTANTS "ZIP_CONSTANTS"
#define device_bar_CAVM_ZIP_CONSTANTS 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_CONSTANTS 0
#define arguments_CAVM_ZIP_CONSTANTS -1,-1,-1,-1

/**
 * Register (NCB) zip_constants2
 *
 * ZIP Constants 2 Register
 * This register contains additional implementation-related parameters of the ZIP core
 * in this chip.
 */
union cavm_zip_constants2
{
    uint64_t u;
    struct cavm_zip_constants2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t texec                 : 24; /**< [ 39: 16](RO/H) Execution unit type. The lower ZIP_CONSTANTS[NEXEC] bits of this field define
                                                                 a bit mask indicating the type of the corresponding ZIP engine.
                                                                 0 = Decompression engine.
                                                                 1 = Compression engine. */
        uint64_t dexec                 : 8;  /**< [ 15:  8](RO) Number of decompression-only units. If ZIP is disabled, this field is 0x0. */
        uint64_t cexec                 : 8;  /**< [  7:  0](RO) Number of compression-only units. If ZIP is disabled, this field is 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t cexec                 : 8;  /**< [  7:  0](RO) Number of compression-only units. If ZIP is disabled, this field is 0x0. */
        uint64_t dexec                 : 8;  /**< [ 15:  8](RO) Number of decompression-only units. If ZIP is disabled, this field is 0x0. */
        uint64_t texec                 : 24; /**< [ 39: 16](RO/H) Execution unit type. The lower ZIP_CONSTANTS[NEXEC] bits of this field define
                                                                 a bit mask indicating the type of the corresponding ZIP engine.
                                                                 0 = Decompression engine.
                                                                 1 = Compression engine. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    struct cavm_zip_constants2_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t dexec                 : 8;  /**< [ 15:  8](RO) Number of decompression-only units. If ZIP is disabled, this field is 0x0. */
        uint64_t cexec                 : 8;  /**< [  7:  0](RO) Number of compression-only units. If ZIP is disabled, this field is 0x0. */
#else /* Word 0 - Little Endian */
        uint64_t cexec                 : 8;  /**< [  7:  0](RO) Number of compression-only units. If ZIP is disabled, this field is 0x0. */
        uint64_t dexec                 : 8;  /**< [ 15:  8](RO) Number of decompression-only units. If ZIP is disabled, this field is 0x0. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_zip_constants2_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t texec                 : 24; /**< [ 39: 16](RO/H) Execution unit type. The lower ZIP_CONSTANTS[NEXEC] bits of this field define
                                                                 a bit mask indicating the type of the corresponding ZIP engine.
                                                                 0 = Decompression engine.
                                                                 1 = Compression engine. */
        uint64_t dexec                 : 8;  /**< [ 15:  8](RO/H) Number of enabled decompression-only units. */
        uint64_t cexec                 : 8;  /**< [  7:  0](RO/H) Number of enabled compression-only units. */
#else /* Word 0 - Little Endian */
        uint64_t cexec                 : 8;  /**< [  7:  0](RO/H) Number of enabled compression-only units. */
        uint64_t dexec                 : 8;  /**< [ 15:  8](RO/H) Number of enabled decompression-only units. */
        uint64_t texec                 : 24; /**< [ 39: 16](RO/H) Execution unit type. The lower ZIP_CONSTANTS[NEXEC] bits of this field define
                                                                 a bit mask indicating the type of the corresponding ZIP engine.
                                                                 0 = Decompression engine.
                                                                 1 = Compression engine. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_constants2 cavm_zip_constants2_t;

#define CAVM_ZIP_CONSTANTS2 CAVM_ZIP_CONSTANTS2_FUNC()
static inline uint64_t CAVM_ZIP_CONSTANTS2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_CONSTANTS2_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x8380000000a8ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x8380000000a8ll;
    __cavm_csr_fatal("ZIP_CONSTANTS2", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_CONSTANTS2 cavm_zip_constants2_t
#define bustype_CAVM_ZIP_CONSTANTS2 CSR_TYPE_NCB
#define basename_CAVM_ZIP_CONSTANTS2 "ZIP_CONSTANTS2"
#define device_bar_CAVM_ZIP_CONSTANTS2 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_CONSTANTS2 0
#define arguments_CAVM_ZIP_CONSTANTS2 -1,-1,-1,-1

/**
 * Register (NCB) zip_core#_bist_status
 *
 * ZIP Core BIST Status Registers
 * These registers have the BIST status of memories in ZIP cores. Each bit is the BIST result of
 * an individual memory (per bit, 0 = pass and 1 = fail).
 */
union cavm_zip_corex_bist_status
{
    uint64_t u;
    struct cavm_zip_corex_bist_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_26_63        : 38;
        uint64_t bstatus               : 26; /**< [ 25:  0](RO/H) BIST result of the ZIP core memories.
                                                                 Internal:
                                                                 ZIPC (cores 0,2,4):
                                                                 \<25:18\> = zipc_hash mem 7-0.
                                                                 \<17\>    = zip state symbols.
                                                                 \<16\>    = zip state code1.
                                                                 \<15\>    = zip state code0.
                                                                 \<14\>    = zip state data1 hi.
                                                                 \<13\>    = zip state data1 lo.
                                                                 \<12\>    = zip state data0 hi.
                                                                 \<11\>    = zip state data0 lo.
                                                                 \<10:8\>  = zip history mem1 banks 2-0.
                                                                 \<7:5\>   = zip history mem0 banks 2-0.
                                                                 \<4\>     = zip history outfifo.
                                                                 \<3:2\>   = zip history bundle fifo 1-0.
                                                                 \<1\>     = zip history dfifo.
                                                                 \<0\>     = sha ifif.

                                                                 ZIPD (cores 1,3,5):
                                                                 \<25:19\> = 0.
                                                                 \<18\>    = zip state cam.
                                                                 \<17\>    = zip state symbols.
                                                                 \<16\>    = zip state code1.
                                                                 \<15\>    = zip state code0.
                                                                 \<14\>    = zip state data1 hi.
                                                                 \<13\>    = zip state data1 lo.
                                                                 \<12\>    = zip state data0 hi.
                                                                 \<11\>    = zip state data0 lo.
                                                                 \<10:8\>  = zip history mem1 banks 2-0.
                                                                 \<7:5\>   = zip history mem0 banks 2-0.
                                                                 \<4\>     = zip history outfifo.
                                                                 \<3:2\>   = zip history bundle fifo 1-0.
                                                                 \<1\>     = zip history dfifo.
                                                                 \<0\>     = sha ifif. */
#else /* Word 0 - Little Endian */
        uint64_t bstatus               : 26; /**< [ 25:  0](RO/H) BIST result of the ZIP core memories.
                                                                 Internal:
                                                                 ZIPC (cores 0,2,4):
                                                                 \<25:18\> = zipc_hash mem 7-0.
                                                                 \<17\>    = zip state symbols.
                                                                 \<16\>    = zip state code1.
                                                                 \<15\>    = zip state code0.
                                                                 \<14\>    = zip state data1 hi.
                                                                 \<13\>    = zip state data1 lo.
                                                                 \<12\>    = zip state data0 hi.
                                                                 \<11\>    = zip state data0 lo.
                                                                 \<10:8\>  = zip history mem1 banks 2-0.
                                                                 \<7:5\>   = zip history mem0 banks 2-0.
                                                                 \<4\>     = zip history outfifo.
                                                                 \<3:2\>   = zip history bundle fifo 1-0.
                                                                 \<1\>     = zip history dfifo.
                                                                 \<0\>     = sha ifif.

                                                                 ZIPD (cores 1,3,5):
                                                                 \<25:19\> = 0.
                                                                 \<18\>    = zip state cam.
                                                                 \<17\>    = zip state symbols.
                                                                 \<16\>    = zip state code1.
                                                                 \<15\>    = zip state code0.
                                                                 \<14\>    = zip state data1 hi.
                                                                 \<13\>    = zip state data1 lo.
                                                                 \<12\>    = zip state data0 hi.
                                                                 \<11\>    = zip state data0 lo.
                                                                 \<10:8\>  = zip history mem1 banks 2-0.
                                                                 \<7:5\>   = zip history mem0 banks 2-0.
                                                                 \<4\>     = zip history outfifo.
                                                                 \<3:2\>   = zip history bundle fifo 1-0.
                                                                 \<1\>     = zip history dfifo.
                                                                 \<0\>     = sha ifif. */
        uint64_t reserved_26_63        : 38;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_corex_bist_status_s cn; */
};
typedef union cavm_zip_corex_bist_status cavm_zip_corex_bist_status_t;

static inline uint64_t CAVM_ZIP_COREX_BIST_STATUS(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_COREX_BIST_STATUS(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=5))
        return 0x838000000520ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_COREX_BIST_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_COREX_BIST_STATUS(a) cavm_zip_corex_bist_status_t
#define bustype_CAVM_ZIP_COREX_BIST_STATUS(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_COREX_BIST_STATUS(a) "ZIP_COREX_BIST_STATUS"
#define device_bar_CAVM_ZIP_COREX_BIST_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_COREX_BIST_STATUS(a) (a)
#define arguments_CAVM_ZIP_COREX_BIST_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_core#_bp_test
 *
 * INTERNAL: ZIP Backpressure Test Registers
 */
union cavm_zip_corex_bp_test
{
    uint64_t u;
    struct cavm_zip_corex_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t enable                : 4;  /**< [ 51: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<51\> = Randomly make corresponding engine gather  FIFO output not valid.
                                                                 \<50\> = Randomly make corresponding engine scatter FIFO output not valid.
                                                                 \<49\> = Randomly make corresponding engine input   FIFO output not valid.
                                                                 \<48\> = Randomly make corresponding engine input tag FIFO output not valid.

                                                                 NOTE: Setting multiple [ENABLE]s could slow down the corresponding engine read DMA. */
        uint64_t reserved_24_47        : 24;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                    \<23:22\> = Config 3.
                                                                    \<21:20\> = Config 2.
                                                                    \<19:18\> = Config 1.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
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
                                                                    \<23:22\> = Config 3.
                                                                    \<21:20\> = Config 2.
                                                                    \<19:18\> = Config 1.
                                                                    \<17:16\> = Config 0.

                                                                  When using 0x0, the constant backpressure means the testbench must toggle the
                                                                  corresponding [ENABLE] bit to keep traffic flowing. */
        uint64_t reserved_24_47        : 24;
        uint64_t enable                : 4;  /**< [ 51: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<51\> = Randomly make corresponding engine gather  FIFO output not valid.
                                                                 \<50\> = Randomly make corresponding engine scatter FIFO output not valid.
                                                                 \<49\> = Randomly make corresponding engine input   FIFO output not valid.
                                                                 \<48\> = Randomly make corresponding engine input tag FIFO output not valid.

                                                                 NOTE: Setting multiple [ENABLE]s could slow down the corresponding engine read DMA. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_corex_bp_test_s cn; */
};
typedef union cavm_zip_corex_bp_test cavm_zip_corex_bp_test_t;

static inline uint64_t CAVM_ZIP_COREX_BP_TEST(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_COREX_BP_TEST(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=11))
        return 0x838000003400ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("ZIP_COREX_BP_TEST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_COREX_BP_TEST(a) cavm_zip_corex_bp_test_t
#define bustype_CAVM_ZIP_COREX_BP_TEST(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_COREX_BP_TEST(a) "ZIP_COREX_BP_TEST"
#define device_bar_CAVM_ZIP_COREX_BP_TEST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_COREX_BP_TEST(a) (a)
#define arguments_CAVM_ZIP_COREX_BP_TEST(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_core#_to_sta
 *
 * ZIP Core Status Registers
 * These registers reflect the timeout status of ZIP cores.
 */
union cavm_zip_corex_to_sta
{
    uint64_t u;
    struct cavm_zip_corex_to_sta_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cnt                   : 32; /**< [ 31:  0](RO/H) Timeout counter value. The counter is reset to 0x0 whenever there is a output
                                                                 from ZIP engine or there is no output buffer credit for the ZIP
                                                                 engine. Otherwise, increments and is compared with ZIP_CORE_TO_CFG[TIMEOUT]. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 32; /**< [ 31:  0](RO/H) Timeout counter value. The counter is reset to 0x0 whenever there is a output
                                                                 from ZIP engine or there is no output buffer credit for the ZIP
                                                                 engine. Otherwise, increments and is compared with ZIP_CORE_TO_CFG[TIMEOUT]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_corex_to_sta_s cn; */
};
typedef union cavm_zip_corex_to_sta cavm_zip_corex_to_sta_t;

static inline uint64_t CAVM_ZIP_COREX_TO_STA(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_COREX_TO_STA(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=5))
        return 0x838000000780ll + 8ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=11))
        return 0x838000000780ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("ZIP_COREX_TO_STA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_COREX_TO_STA(a) cavm_zip_corex_to_sta_t
#define bustype_CAVM_ZIP_COREX_TO_STA(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_COREX_TO_STA(a) "ZIP_COREX_TO_STA"
#define device_bar_CAVM_ZIP_COREX_TO_STA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_COREX_TO_STA(a) (a)
#define arguments_CAVM_ZIP_COREX_TO_STA(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_core_reset
 *
 * ZIP Core Reset Register
 * This register resets the ZIP cores. For diagnostic use only.
 */
union cavm_zip_core_reset
{
    uint64_t u;
    struct cavm_zip_core_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reac                  : 1;  /**< [ 63: 63](R/W) Reset ZIP engine after completion of each instruction, to limit exposure to
                                                                 corrupt commands and structures affecting subsequent commands. */
        uint64_t reac_plus             : 1;  /**< [ 62: 62](R/W) Reserved.
                                                                 Internal:
                                                                 Additional CYA mode to reset both the ZIP engine and engine control logic
                                                                 after completion of each instruction.  The existing REAC mode (bit 63)
                                                                 only resets the ZIP engine, and preserves the state of some engine control
                                                                 logic.  This mode only takes effect if the REAC mode is also
                                                                 enabled. */
        uint64_t reserved_12_61        : 50;
        uint64_t reset                 : 12; /**< [ 11:  0](R/W) When set, the corresponding core will be put into reset. When clear, the core is out of
                                                                 reset.  Bit[\<a\>] resets ZIP core \<a\>. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 12; /**< [ 11:  0](R/W) When set, the corresponding core will be put into reset. When clear, the core is out of
                                                                 reset.  Bit[\<a\>] resets ZIP core \<a\>. */
        uint64_t reserved_12_61        : 50;
        uint64_t reac_plus             : 1;  /**< [ 62: 62](R/W) Reserved.
                                                                 Internal:
                                                                 Additional CYA mode to reset both the ZIP engine and engine control logic
                                                                 after completion of each instruction.  The existing REAC mode (bit 63)
                                                                 only resets the ZIP engine, and preserves the state of some engine control
                                                                 logic.  This mode only takes effect if the REAC mode is also
                                                                 enabled. */
        uint64_t reac                  : 1;  /**< [ 63: 63](R/W) Reset ZIP engine after completion of each instruction, to limit exposure to
                                                                 corrupt commands and structures affecting subsequent commands. */
#endif /* Word 0 - End */
    } s;
    struct cavm_zip_core_reset_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reac                  : 1;  /**< [ 63: 63](R/W) Reset ZIP engine after completion of each instruction, to limit exposure to
                                                                 corrupt commands and structures affecting subsequent commands. */
        uint64_t reac_plus             : 1;  /**< [ 62: 62](R/W) Reserved.
                                                                 Internal:
                                                                 Additional CYA mode to reset both the ZIP engine and engine control logic
                                                                 after completion of each instruction.  The existing REAC mode (bit 63)
                                                                 only resets the ZIP engine, and preserves the state of some engine control
                                                                 logic.  This mode only takes effect if the REAC mode is also
                                                                 enabled. */
        uint64_t reserved_6_61         : 56;
        uint64_t reset                 : 6;  /**< [  5:  0](R/W) When set, the corresponding core will be put into reset. When clear, the core is out of
                                                                 reset.  Bit[\<a\>] resets ZIP core \<a\>. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 6;  /**< [  5:  0](R/W) When set, the corresponding core will be put into reset. When clear, the core is out of
                                                                 reset.  Bit[\<a\>] resets ZIP core \<a\>. */
        uint64_t reserved_6_61         : 56;
        uint64_t reac_plus             : 1;  /**< [ 62: 62](R/W) Reserved.
                                                                 Internal:
                                                                 Additional CYA mode to reset both the ZIP engine and engine control logic
                                                                 after completion of each instruction.  The existing REAC mode (bit 63)
                                                                 only resets the ZIP engine, and preserves the state of some engine control
                                                                 logic.  This mode only takes effect if the REAC mode is also
                                                                 enabled. */
        uint64_t reac                  : 1;  /**< [ 63: 63](R/W) Reset ZIP engine after completion of each instruction, to limit exposure to
                                                                 corrupt commands and structures affecting subsequent commands. */
#endif /* Word 0 - End */
    } cn8;
    /* struct cavm_zip_core_reset_s cn9; */
};
typedef union cavm_zip_core_reset cavm_zip_core_reset_t;

#define CAVM_ZIP_CORE_RESET CAVM_ZIP_CORE_RESET_FUNC()
static inline uint64_t CAVM_ZIP_CORE_RESET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_CORE_RESET_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000300ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000300ll;
    __cavm_csr_fatal("ZIP_CORE_RESET", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_CORE_RESET cavm_zip_core_reset_t
#define bustype_CAVM_ZIP_CORE_RESET CSR_TYPE_NCB
#define basename_CAVM_ZIP_CORE_RESET "ZIP_CORE_RESET"
#define device_bar_CAVM_ZIP_CORE_RESET 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_CORE_RESET 0
#define arguments_CAVM_ZIP_CORE_RESET -1,-1,-1,-1

/**
 * Register (NCB) zip_core_to_cfg
 *
 * ZIP Engine Timeout Configure Register
 * Configures the core timeout value in terms of coprocessor clock cycles.
 */
union cavm_zip_core_to_cfg
{
    uint64_t u;
    struct cavm_zip_core_to_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t halt                  : 1;  /**< [ 63: 63](R/W) If set, when timeout is detected, control will halt input and output and set the
                                                                 completion code in result buffer to ZIP_COMP_E::TIMEOUT. If cleared (for
                                                                 diagnostic use only), if ZIP core continues outputting after timeout period the
                                                                 instruction will still be finished by the ZIP core. */
        uint64_t ar                    : 1;  /**< [ 62: 62](R/W) Auto reset. This bit only takes effect when [HALT] is set. When [HALT] is cleared, [AR] is
                                                                 ignored.
                                                                 0 = On a timeout, the timed-out core will hold the timed-out operation and not be auto-
                                                                 reset.
                                                                 1 = On a timeout, the timed-out core will be auto-reset. */
        uint64_t reserved_32_61        : 30;
        uint64_t timeout               : 32; /**< [ 31:  0](R/W) Number of coprocessor-clocks before a ZIP engine is considered hung. When the
                                                                 ZIP_CORE()_TO_STA[CNT] reaches ZIP_CORE_TO_CFG[TIMEOUT], the ZIP engine hang
                                                                 can be reported through interrupt ZIP_VF()_MISC_INT[CTO] if the interrupt is enabled.
                                                                 If [TIMEOUT] is 0, engine timeout detection is disabled.

                                                                 Internal:
                                                                 Decompression could be very slow if someone created a malicious compressed stream.
                                                                 Compression is much more bounded. The worst case would be .5B/cycle plus the Huffman
                                                                 encoding delay of around 8K cycles. Also note the cripple feature can increase the worst
                                                                 case delay 4x.
                                                                 If hangs are just theoretical and therefore very rare, using a large number say 1M
                                                                 cycles is recommended. Assume 1K cycles to cover the decompression time, plus 8K
                                                                 Huffman encoding delay, for a total of 9K cycles. In the worst crippled case, the
                                                                 timeout upper limit is 9K x 4 x 4 = 36K x 4 = 0x24000. For SKUs without cripple, S/W can
                                                                 overwrite this value to 0x2400. */
#else /* Word 0 - Little Endian */
        uint64_t timeout               : 32; /**< [ 31:  0](R/W) Number of coprocessor-clocks before a ZIP engine is considered hung. When the
                                                                 ZIP_CORE()_TO_STA[CNT] reaches ZIP_CORE_TO_CFG[TIMEOUT], the ZIP engine hang
                                                                 can be reported through interrupt ZIP_VF()_MISC_INT[CTO] if the interrupt is enabled.
                                                                 If [TIMEOUT] is 0, engine timeout detection is disabled.

                                                                 Internal:
                                                                 Decompression could be very slow if someone created a malicious compressed stream.
                                                                 Compression is much more bounded. The worst case would be .5B/cycle plus the Huffman
                                                                 encoding delay of around 8K cycles. Also note the cripple feature can increase the worst
                                                                 case delay 4x.
                                                                 If hangs are just theoretical and therefore very rare, using a large number say 1M
                                                                 cycles is recommended. Assume 1K cycles to cover the decompression time, plus 8K
                                                                 Huffman encoding delay, for a total of 9K cycles. In the worst crippled case, the
                                                                 timeout upper limit is 9K x 4 x 4 = 36K x 4 = 0x24000. For SKUs without cripple, S/W can
                                                                 overwrite this value to 0x2400. */
        uint64_t reserved_32_61        : 30;
        uint64_t ar                    : 1;  /**< [ 62: 62](R/W) Auto reset. This bit only takes effect when [HALT] is set. When [HALT] is cleared, [AR] is
                                                                 ignored.
                                                                 0 = On a timeout, the timed-out core will hold the timed-out operation and not be auto-
                                                                 reset.
                                                                 1 = On a timeout, the timed-out core will be auto-reset. */
        uint64_t halt                  : 1;  /**< [ 63: 63](R/W) If set, when timeout is detected, control will halt input and output and set the
                                                                 completion code in result buffer to ZIP_COMP_E::TIMEOUT. If cleared (for
                                                                 diagnostic use only), if ZIP core continues outputting after timeout period the
                                                                 instruction will still be finished by the ZIP core. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_core_to_cfg_s cn; */
};
typedef union cavm_zip_core_to_cfg cavm_zip_core_to_cfg_t;

#define CAVM_ZIP_CORE_TO_CFG CAVM_ZIP_CORE_TO_CFG_FUNC()
static inline uint64_t CAVM_ZIP_CORE_TO_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_CORE_TO_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000700ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000700ll;
    __cavm_csr_fatal("ZIP_CORE_TO_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_CORE_TO_CFG cavm_zip_core_to_cfg_t
#define bustype_CAVM_ZIP_CORE_TO_CFG CSR_TYPE_NCB
#define basename_CAVM_ZIP_CORE_TO_CFG "ZIP_CORE_TO_CFG"
#define device_bar_CAVM_ZIP_CORE_TO_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_CORE_TO_CFG 0
#define arguments_CAVM_ZIP_CORE_TO_CFG -1,-1,-1,-1

/**
 * Register (NCB) zip_ctl_bist_status
 *
 * ZIP Control BIST Status Register
 * This register has the BIST status of memories in ZIP CTL (instruction buffer, G/S pointer
 * FIFO, input data buffer, output data buffers). Each bit is the BIST result of an individual
 * memory (per bit, 0 = pass and 1 = fail).
 */
union cavm_zip_ctl_bist_status
{
    uint64_t u;
    struct cavm_zip_ctl_bist_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_23_63        : 41;
        uint64_t bstatus               : 23; /**< [ 22:  0](RO/H) BIST result of CTL memories.
                                                                 Internal:
                                                                 \<22\> = MBOX.
                                                                 \<21\> = MSIX_PMEM.
                                                                 \<20\> = MSIX_VMEM.
                                                                 \<19:14\> = STDF[5:0].
                                                                 \<13:8\> = OFIF[5:0].
                                                                 \<7:2\> = Input data FIFO (idf) [5:0].
                                                                 \<1\> = Gather/scatter FIFO (gspf).
                                                                 \<0\> = Instruction buffer (iqf). */
#else /* Word 0 - Little Endian */
        uint64_t bstatus               : 23; /**< [ 22:  0](RO/H) BIST result of CTL memories.
                                                                 Internal:
                                                                 \<22\> = MBOX.
                                                                 \<21\> = MSIX_PMEM.
                                                                 \<20\> = MSIX_VMEM.
                                                                 \<19:14\> = STDF[5:0].
                                                                 \<13:8\> = OFIF[5:0].
                                                                 \<7:2\> = Input data FIFO (idf) [5:0].
                                                                 \<1\> = Gather/scatter FIFO (gspf).
                                                                 \<0\> = Instruction buffer (iqf). */
        uint64_t reserved_23_63        : 41;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_ctl_bist_status_s cn; */
};
typedef union cavm_zip_ctl_bist_status cavm_zip_ctl_bist_status_t;

#define CAVM_ZIP_CTL_BIST_STATUS CAVM_ZIP_CTL_BIST_STATUS_FUNC()
static inline uint64_t CAVM_ZIP_CTL_BIST_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_CTL_BIST_STATUS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000510ll;
    __cavm_csr_fatal("ZIP_CTL_BIST_STATUS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_CTL_BIST_STATUS cavm_zip_ctl_bist_status_t
#define bustype_CAVM_ZIP_CTL_BIST_STATUS CSR_TYPE_NCB
#define basename_CAVM_ZIP_CTL_BIST_STATUS "ZIP_CTL_BIST_STATUS"
#define device_bar_CAVM_ZIP_CTL_BIST_STATUS 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_CTL_BIST_STATUS 0
#define arguments_CAVM_ZIP_CTL_BIST_STATUS -1,-1,-1,-1

/**
 * Register (NCB) zip_ctl_cfg
 *
 * ZIP Controller Configuration Register
 * This register controls the behavior of the ZIP DMA engines. It is recommended to keep default
 * values for normal operation. Changing the values of the fields may be useful for diagnostics.
 */
union cavm_zip_ctl_cfg
{
    uint64_t u;
    struct cavm_zip_ctl_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t skid                  : 5;  /**< [ 60: 56](R/W) ZIP engine SKID FIFO credits.  Must not exceed 16. */
        uint64_t reserved_53_55        : 3;
        uint64_t ildf                  : 5;  /**< [ 52: 48](R/W) Instruction load command FIFO credits.  Must not exceed 8. */
        uint64_t reserved_43_47        : 5;
        uint64_t iprf                  : 3;  /**< [ 42: 40](R/W) Instruction page return command FIFO credits.  Must not exceed 4. */
        uint64_t reserved_39           : 1;
        uint64_t drtf                  : 7;  /**< [ 38: 32](R/W) Data read tag FIFOs (per core) credits.  Must not exceed 8. */
        uint64_t reserved_28_31        : 4;
        uint64_t stcf                  : 4;  /**< [ 27: 24](R/W) Store command FIFO credits.  Must not exceed 4. */
        uint64_t reserved_13_23        : 11;
        uint64_t wkqf                  : 5;  /**< [ 12:  8](R/W) Work queue FIFO credits.  Must not exceed 4. */
        uint64_t reserved_3_7          : 5;
        uint64_t rd_psn_ign            : 1;  /**< [  2:  2](R/W) Read poison ignore.

                                                                 0 = Poisons received on a NCB instruction response are fatal and set interrupt
                                                                 ZIP_PF_RAS[LD_CMD_PSN], poisons received on a NCB DMA data response are
                                                                 propagated into result structure and set interrupt ZIP_PF_RAS[LD_DAT_PSN].

                                                                 1 = Poisons received on a NCB instruction response are ignored and set interrupt
                                                                 ZIP_PF_RAS[LD_CMD_PSN], poisons received on a NCB DMA data response are
                                                                 ignored and set interrupt ZIP_PF_RAS[LD_DAT_PSN]. */
        uint64_t busy                  : 1;  /**< [  1:  1](RO/H) Busy.
                                                                 0 = ZIP system is idle.
                                                                 1 = ZIP system is busy. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t busy                  : 1;  /**< [  1:  1](RO/H) Busy.
                                                                 0 = ZIP system is idle.
                                                                 1 = ZIP system is busy. */
        uint64_t rd_psn_ign            : 1;  /**< [  2:  2](R/W) Read poison ignore.

                                                                 0 = Poisons received on a NCB instruction response are fatal and set interrupt
                                                                 ZIP_PF_RAS[LD_CMD_PSN], poisons received on a NCB DMA data response are
                                                                 propagated into result structure and set interrupt ZIP_PF_RAS[LD_DAT_PSN].

                                                                 1 = Poisons received on a NCB instruction response are ignored and set interrupt
                                                                 ZIP_PF_RAS[LD_CMD_PSN], poisons received on a NCB DMA data response are
                                                                 ignored and set interrupt ZIP_PF_RAS[LD_DAT_PSN]. */
        uint64_t reserved_3_7          : 5;
        uint64_t wkqf                  : 5;  /**< [ 12:  8](R/W) Work queue FIFO credits.  Must not exceed 4. */
        uint64_t reserved_13_23        : 11;
        uint64_t stcf                  : 4;  /**< [ 27: 24](R/W) Store command FIFO credits.  Must not exceed 4. */
        uint64_t reserved_28_31        : 4;
        uint64_t drtf                  : 7;  /**< [ 38: 32](R/W) Data read tag FIFOs (per core) credits.  Must not exceed 8. */
        uint64_t reserved_39           : 1;
        uint64_t iprf                  : 3;  /**< [ 42: 40](R/W) Instruction page return command FIFO credits.  Must not exceed 4. */
        uint64_t reserved_43_47        : 5;
        uint64_t ildf                  : 5;  /**< [ 52: 48](R/W) Instruction load command FIFO credits.  Must not exceed 8. */
        uint64_t reserved_53_55        : 3;
        uint64_t skid                  : 5;  /**< [ 60: 56](R/W) ZIP engine SKID FIFO credits.  Must not exceed 16. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } s;
    struct cavm_zip_ctl_cfg_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t ildf                  : 4;  /**< [ 51: 48](R/W) Instruction load command FIFO credits.  Must not exceed 8. */
        uint64_t reserved_43_47        : 5;
        uint64_t iprf                  : 3;  /**< [ 42: 40](R/W) Instruction page return command FIFO credits.  Must not exceed 4. */
        uint64_t reserved_36_39        : 4;
        uint64_t drtf                  : 4;  /**< [ 35: 32](R/W) Data read tag FIFOs (per core) credits.  Must not exceed 8. */
        uint64_t reserved_27_31        : 5;
        uint64_t stcf                  : 3;  /**< [ 26: 24](R/W) Store command FIFO credits.  Must not exceed 4. */
        uint64_t reserved_19_23        : 5;
        uint64_t ldf                   : 3;  /**< [ 18: 16](R/W) Load command FIFO credits.  Must not exceed 4. */
        uint64_t reserved_11_15        : 5;
        uint64_t wkqf                  : 3;  /**< [ 10:  8](R/W) Work queue FIFO credits.  Must not exceed 4. */
        uint64_t reserved_2_7          : 6;
        uint64_t busy                  : 1;  /**< [  1:  1](RO/H) Busy.
                                                                 0 = ZIP system is idle.
                                                                 1 = ZIP system is busy. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t busy                  : 1;  /**< [  1:  1](RO/H) Busy.
                                                                 0 = ZIP system is idle.
                                                                 1 = ZIP system is busy. */
        uint64_t reserved_2_7          : 6;
        uint64_t wkqf                  : 3;  /**< [ 10:  8](R/W) Work queue FIFO credits.  Must not exceed 4. */
        uint64_t reserved_11_15        : 5;
        uint64_t ldf                   : 3;  /**< [ 18: 16](R/W) Load command FIFO credits.  Must not exceed 4. */
        uint64_t reserved_19_23        : 5;
        uint64_t stcf                  : 3;  /**< [ 26: 24](R/W) Store command FIFO credits.  Must not exceed 4. */
        uint64_t reserved_27_31        : 5;
        uint64_t drtf                  : 4;  /**< [ 35: 32](R/W) Data read tag FIFOs (per core) credits.  Must not exceed 8. */
        uint64_t reserved_36_39        : 4;
        uint64_t iprf                  : 3;  /**< [ 42: 40](R/W) Instruction page return command FIFO credits.  Must not exceed 4. */
        uint64_t reserved_43_47        : 5;
        uint64_t ildf                  : 4;  /**< [ 51: 48](R/W) Instruction load command FIFO credits.  Must not exceed 8. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_zip_ctl_cfg_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_61_63        : 3;
        uint64_t skid                  : 5;  /**< [ 60: 56](R/W) ZIP engine SKID FIFO credits.  Must not exceed 16. */
        uint64_t reserved_53_55        : 3;
        uint64_t ildf                  : 5;  /**< [ 52: 48](R/W) Instruction load command FIFO credits.  Must not exceed 16. */
        uint64_t reserved_43_47        : 5;
        uint64_t iprf                  : 3;  /**< [ 42: 40](RAZ) Reserved. */
        uint64_t reserved_39           : 1;
        uint64_t drtf                  : 7;  /**< [ 38: 32](R/W) Data read tag FIFOs (per core) credits.  Must not exceed 64. */
        uint64_t reserved_28_31        : 4;
        uint64_t stcf                  : 4;  /**< [ 27: 24](R/W) Store command FIFO credits.  Must not exceed 8. */
        uint64_t reserved_21_23        : 3;
        uint64_t ldcf                  : 5;  /**< [ 20: 16](R/W) Load command FIFO credits.  Must not exceed 16. */
        uint64_t reserved_13_15        : 3;
        uint64_t wkqf                  : 5;  /**< [ 12:  8](R/W) Work queue FIFO credits.  Must not exceed 16. */
        uint64_t reserved_3_7          : 5;
        uint64_t rd_psn_ign            : 1;  /**< [  2:  2](R/W) Read poison ignore.

                                                                 0 = Poisons received on a NCB instruction response are fatal and set interrupt
                                                                 ZIP_PF_RAS[LD_CMD_PSN], poisons received on a NCB DMA data response are
                                                                 propagated into result structure and set interrupt ZIP_PF_RAS[LD_DAT_PSN].

                                                                 1 = Poisons received on a NCB instruction response are ignored and set interrupt
                                                                 ZIP_PF_RAS[LD_CMD_PSN], poisons received on a NCB DMA data response are
                                                                 ignored and set interrupt ZIP_PF_RAS[LD_DAT_PSN]. */
        uint64_t busy                  : 1;  /**< [  1:  1](RO/H) Busy.
                                                                 0 = ZIP system is idle.
                                                                 1 = ZIP system is busy. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t busy                  : 1;  /**< [  1:  1](RO/H) Busy.
                                                                 0 = ZIP system is idle.
                                                                 1 = ZIP system is busy. */
        uint64_t rd_psn_ign            : 1;  /**< [  2:  2](R/W) Read poison ignore.

                                                                 0 = Poisons received on a NCB instruction response are fatal and set interrupt
                                                                 ZIP_PF_RAS[LD_CMD_PSN], poisons received on a NCB DMA data response are
                                                                 propagated into result structure and set interrupt ZIP_PF_RAS[LD_DAT_PSN].

                                                                 1 = Poisons received on a NCB instruction response are ignored and set interrupt
                                                                 ZIP_PF_RAS[LD_CMD_PSN], poisons received on a NCB DMA data response are
                                                                 ignored and set interrupt ZIP_PF_RAS[LD_DAT_PSN]. */
        uint64_t reserved_3_7          : 5;
        uint64_t wkqf                  : 5;  /**< [ 12:  8](R/W) Work queue FIFO credits.  Must not exceed 16. */
        uint64_t reserved_13_15        : 3;
        uint64_t ldcf                  : 5;  /**< [ 20: 16](R/W) Load command FIFO credits.  Must not exceed 16. */
        uint64_t reserved_21_23        : 3;
        uint64_t stcf                  : 4;  /**< [ 27: 24](R/W) Store command FIFO credits.  Must not exceed 8. */
        uint64_t reserved_28_31        : 4;
        uint64_t drtf                  : 7;  /**< [ 38: 32](R/W) Data read tag FIFOs (per core) credits.  Must not exceed 64. */
        uint64_t reserved_39           : 1;
        uint64_t iprf                  : 3;  /**< [ 42: 40](RAZ) Reserved. */
        uint64_t reserved_43_47        : 5;
        uint64_t ildf                  : 5;  /**< [ 52: 48](R/W) Instruction load command FIFO credits.  Must not exceed 16. */
        uint64_t reserved_53_55        : 3;
        uint64_t skid                  : 5;  /**< [ 60: 56](R/W) ZIP engine SKID FIFO credits.  Must not exceed 16. */
        uint64_t reserved_61_63        : 3;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_ctl_cfg cavm_zip_ctl_cfg_t;

#define CAVM_ZIP_CTL_CFG CAVM_ZIP_CTL_CFG_FUNC()
static inline uint64_t CAVM_ZIP_CTL_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_CTL_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000560ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000560ll;
    __cavm_csr_fatal("ZIP_CTL_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_CTL_CFG cavm_zip_ctl_cfg_t
#define bustype_CAVM_ZIP_CTL_CFG CSR_TYPE_NCB
#define basename_CAVM_ZIP_CTL_CFG "ZIP_CTL_CFG"
#define device_bar_CAVM_ZIP_CTL_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_CTL_CFG 0
#define arguments_CAVM_ZIP_CTL_CFG -1,-1,-1,-1

/**
 * Register (NCB) zip_dbg_core#_inst
 *
 * ZIP Core Current Instruction Registers
 * These registers reflect the status of the current instruction that the ZIP core is executing
 * or has executed. These registers are only for debug use.
 */
union cavm_zip_dbg_corex_inst
{
    uint64_t u;
    struct cavm_zip_dbg_corex_inst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Core state. 0 = core is idle; 1 = core is busy. */
        uint64_t outstanding           : 1;  /**< [ 62: 62](RO/H) When set, core is waiting for an outstanding L2C transaction(s).  Otherwise, there is no
                                                                 outstanding L2C transaction, and the core can be reset if needed. */
        uint64_t cto                   : 1;  /**< [ 61: 61](RO/H) Core timeout detected. When set, it indicates that this core timed out when
                                                                 executing the current instruction with instruction ID [IID] from queue [QID]. */
        uint64_t launched              : 1;  /**< [ 60: 60](RO/H) Instruction launch status.  When 1, an instruction has been completely launched to a zip
                                                                 core.  When 0, an instruction launch is in progress or may have been interrupted due to an
                                                                 instruction fetch error. */
        uint64_t reserved_35_59        : 25;
        uint64_t qid                   : 3;  /**< [ 34: 32](RO/H) Queue index of instruction executed ([BUSY] = 0) or being executed ([BUSY] = 1) on this core. */
        uint64_t iid                   : 32; /**< [ 31:  0](RO/H) Instruction index executed ([BUSY] = 0) or being executed ([BUSY] = 1) on this core. */
#else /* Word 0 - Little Endian */
        uint64_t iid                   : 32; /**< [ 31:  0](RO/H) Instruction index executed ([BUSY] = 0) or being executed ([BUSY] = 1) on this core. */
        uint64_t qid                   : 3;  /**< [ 34: 32](RO/H) Queue index of instruction executed ([BUSY] = 0) or being executed ([BUSY] = 1) on this core. */
        uint64_t reserved_35_59        : 25;
        uint64_t launched              : 1;  /**< [ 60: 60](RO/H) Instruction launch status.  When 1, an instruction has been completely launched to a zip
                                                                 core.  When 0, an instruction launch is in progress or may have been interrupted due to an
                                                                 instruction fetch error. */
        uint64_t cto                   : 1;  /**< [ 61: 61](RO/H) Core timeout detected. When set, it indicates that this core timed out when
                                                                 executing the current instruction with instruction ID [IID] from queue [QID]. */
        uint64_t outstanding           : 1;  /**< [ 62: 62](RO/H) When set, core is waiting for an outstanding L2C transaction(s).  Otherwise, there is no
                                                                 outstanding L2C transaction, and the core can be reset if needed. */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Core state. 0 = core is idle; 1 = core is busy. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_dbg_corex_inst_s cn8; */
    struct cavm_zip_dbg_corex_inst_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Core state. 0 = core is idle; 1 = core is busy. */
        uint64_t outstanding           : 1;  /**< [ 62: 62](RO/H) When set, core is waiting for an outstanding NCB transaction(s).  Otherwise, there is no
                                                                 outstanding NCB transaction, and the core can be reset if needed. */
        uint64_t cto                   : 1;  /**< [ 61: 61](RO/H) Core timeout detected. When set, it indicates that this core timed out when
                                                                 executing the current instruction with instruction ID [IID] from queue [QID]. */
        uint64_t launched              : 1;  /**< [ 60: 60](RO/H) Instruction launch status.  When 1, an instruction has been completely launched to a zip
                                                                 core.  When 0, an instruction launch is in progress or may have been interrupted due to an
                                                                 instruction fetch error. */
        uint64_t reserved_35_59        : 25;
        uint64_t qid                   : 3;  /**< [ 34: 32](RO/H) Queue index of instruction executed ([BUSY] = 0) or being executed ([BUSY] = 1) on this core. */
        uint64_t iid                   : 32; /**< [ 31:  0](RO/H) Instruction index executed ([BUSY] = 0) or being executed ([BUSY] = 1) on this core. */
#else /* Word 0 - Little Endian */
        uint64_t iid                   : 32; /**< [ 31:  0](RO/H) Instruction index executed ([BUSY] = 0) or being executed ([BUSY] = 1) on this core. */
        uint64_t qid                   : 3;  /**< [ 34: 32](RO/H) Queue index of instruction executed ([BUSY] = 0) or being executed ([BUSY] = 1) on this core. */
        uint64_t reserved_35_59        : 25;
        uint64_t launched              : 1;  /**< [ 60: 60](RO/H) Instruction launch status.  When 1, an instruction has been completely launched to a zip
                                                                 core.  When 0, an instruction launch is in progress or may have been interrupted due to an
                                                                 instruction fetch error. */
        uint64_t cto                   : 1;  /**< [ 61: 61](RO/H) Core timeout detected. When set, it indicates that this core timed out when
                                                                 executing the current instruction with instruction ID [IID] from queue [QID]. */
        uint64_t outstanding           : 1;  /**< [ 62: 62](RO/H) When set, core is waiting for an outstanding NCB transaction(s).  Otherwise, there is no
                                                                 outstanding NCB transaction, and the core can be reset if needed. */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Core state. 0 = core is idle; 1 = core is busy. */
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_dbg_corex_inst cavm_zip_dbg_corex_inst_t;

static inline uint64_t CAVM_ZIP_DBG_COREX_INST(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_DBG_COREX_INST(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=5))
        return 0x838000000640ll + 8ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=11))
        return 0x838000003000ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("ZIP_DBG_COREX_INST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_DBG_COREX_INST(a) cavm_zip_dbg_corex_inst_t
#define bustype_CAVM_ZIP_DBG_COREX_INST(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_DBG_COREX_INST(a) "ZIP_DBG_COREX_INST"
#define device_bar_CAVM_ZIP_DBG_COREX_INST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_DBG_COREX_INST(a) (a)
#define arguments_CAVM_ZIP_DBG_COREX_INST(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_dbg_core#_sta
 *
 * ZIP Core Status Registers
 * These registers reflect the status of the ZIP cores and are for debug use only.
 */
union cavm_zip_dbg_corex_sta
{
    uint64_t u;
    struct cavm_zip_dbg_corex_sta_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Core state. 0 = core is idle; 1 = core is busy. */
        uint64_t reserved_38_62        : 25;
        uint64_t ist                   : 6;  /**< [ 37: 32](RO/H) FSM State of current instruction that is executing.
                                                                 Internal:
                                                                 See sta_fsm_t in zip_defs.vh. */
        uint64_t nie                   : 32; /**< [ 31:  0](RO/H) Number of instructions executed on this core. */
#else /* Word 0 - Little Endian */
        uint64_t nie                   : 32; /**< [ 31:  0](RO/H) Number of instructions executed on this core. */
        uint64_t ist                   : 6;  /**< [ 37: 32](RO/H) FSM State of current instruction that is executing.
                                                                 Internal:
                                                                 See sta_fsm_t in zip_defs.vh. */
        uint64_t reserved_38_62        : 25;
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Core state. 0 = core is idle; 1 = core is busy. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_dbg_corex_sta_s cn; */
};
typedef union cavm_zip_dbg_corex_sta cavm_zip_dbg_corex_sta_t;

static inline uint64_t CAVM_ZIP_DBG_COREX_STA(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_DBG_COREX_STA(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=5))
        return 0x838000000680ll + 8ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=11))
        return 0x838000003200ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("ZIP_DBG_COREX_STA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_DBG_COREX_STA(a) cavm_zip_dbg_corex_sta_t
#define bustype_CAVM_ZIP_DBG_COREX_STA(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_DBG_COREX_STA(a) "ZIP_DBG_COREX_STA"
#define device_bar_CAVM_ZIP_DBG_COREX_STA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_DBG_COREX_STA(a) (a)
#define arguments_CAVM_ZIP_DBG_COREX_STA(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_dbg_que#_sta
 *
 * ZIP Queue Status Registers
 * These registers reflect status of the ZIP instruction queues and are for debug use only.
 */
union cavm_zip_dbg_quex_sta
{
    uint64_t u;
    struct cavm_zip_dbg_quex_sta_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Queue state. 0 = queue is idle; 1 = queue is busy. */
        uint64_t outstanding           : 1;  /**< [ 62: 62](RO/H) When set, the queue is waiting for outstanding NCB transaction(s).  Otherwise, there are
                                                                 no outstanding NCB transactions and the queue can be reset. */
        uint64_t reserved_56_61        : 6;
        uint64_t rqwc                  : 24; /**< [ 55: 32](RO/H) Number of remaining instruction qwords to be fetched. */
        uint64_t nii                   : 32; /**< [ 31:  0](RO/H) Number of instructions issued from this queue. Reset to 0x0 when ZIP_VQ()_SBUF_ADDR
                                                                 is written. */
#else /* Word 0 - Little Endian */
        uint64_t nii                   : 32; /**< [ 31:  0](RO/H) Number of instructions issued from this queue. Reset to 0x0 when ZIP_VQ()_SBUF_ADDR
                                                                 is written. */
        uint64_t rqwc                  : 24; /**< [ 55: 32](RO/H) Number of remaining instruction qwords to be fetched. */
        uint64_t reserved_56_61        : 6;
        uint64_t outstanding           : 1;  /**< [ 62: 62](RO/H) When set, the queue is waiting for outstanding NCB transaction(s).  Otherwise, there are
                                                                 no outstanding NCB transactions and the queue can be reset. */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) Queue state. 0 = queue is idle; 1 = queue is busy. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_dbg_quex_sta_s cn; */
};
typedef union cavm_zip_dbg_quex_sta cavm_zip_dbg_quex_sta_t;

static inline uint64_t CAVM_ZIP_DBG_QUEX_STA(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_DBG_QUEX_STA(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838000001800ll + 8ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838000001800ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_DBG_QUEX_STA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_DBG_QUEX_STA(a) cavm_zip_dbg_quex_sta_t
#define bustype_CAVM_ZIP_DBG_QUEX_STA(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_DBG_QUEX_STA(a) "ZIP_DBG_QUEX_STA"
#define device_bar_CAVM_ZIP_DBG_QUEX_STA(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_DBG_QUEX_STA(a) (a)
#define arguments_CAVM_ZIP_DBG_QUEX_STA(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_ecc_ctl
 *
 * ZIP ECC Control Register
 * This register enables ECC for each individual internal memory that requires ECC. For debug
 * purpose, it can also flip one or two bits in the ECC data.
 */
union cavm_zip_ecc_ctl
{
    uint64_t u;
    struct cavm_zip_ecc_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_43_63        : 21;
        uint64_t mbox_cdis             : 1;  /**< [ 42: 42](R/W) MBOX memory ECC correction disable. */
        uint64_t mbox_fs               : 2;  /**< [ 41: 40](R/W) Controls MBOX memory flip syndrome.  See [IQF_FS]. */
        uint64_t reserved_39           : 1;
        uint64_t pmem_cdis             : 1;  /**< [ 38: 38](R/W) PMEM memory ECC correction disable. */
        uint64_t pmem_fs               : 2;  /**< [ 37: 36](R/W) Controls PMEM memory flip syndrome.  See [IQF_FS]. */
        uint64_t reserved_35           : 1;
        uint64_t vmem_cdis             : 1;  /**< [ 34: 34](R/W) VMEM memory ECC correction disable. */
        uint64_t vmem_fs               : 2;  /**< [ 33: 32](R/W) Controls VMEM memory flip syndrome.  See [IQF_FS]. */
        uint64_t reserved_31           : 1;
        uint64_t idf5_cdis             : 1;  /**< [ 30: 30](R/W) Input data FIFO 5 ECC correction disable. */
        uint64_t idf5_fs               : 2;  /**< [ 29: 28](R/W) Controls input data FIFO 5 flip syndrome.  See [IQF_FS]. */
        uint64_t reserved_27           : 1;
        uint64_t idf4_cdis             : 1;  /**< [ 26: 26](R/W) Input data FIFO 4 ECC correction disable. */
        uint64_t idf4_fs               : 2;  /**< [ 25: 24](R/W) Controls input data FIFO 4 flip syndrome.  See [IQF_FS]. */
        uint64_t reserved_23           : 1;
        uint64_t idf3_cdis             : 1;  /**< [ 22: 22](R/W) Input data FIFO 3 ECC correction disable. */
        uint64_t idf3_fs               : 2;  /**< [ 21: 20](R/W) Controls input data FIFO 3 flip syndrome.  See [IQF_FS]. */
        uint64_t reserved_19           : 1;
        uint64_t idf2_cdis             : 1;  /**< [ 18: 18](R/W) Input data FIFO 2 ECC correction disable. */
        uint64_t idf2_fs               : 2;  /**< [ 17: 16](R/W) Controls input data FIFO 2 flip syndrome.  See [IQF_FS]. */
        uint64_t reserved_15           : 1;
        uint64_t idf1_cdis             : 1;  /**< [ 14: 14](R/W) Input data FIFO 1 ECC correction disable. */
        uint64_t idf1_fs               : 2;  /**< [ 13: 12](R/W) Controls input data FIFO 1 flip syndrome.  See [IQF_FS]. */
        uint64_t reserved_11           : 1;
        uint64_t idf0_cdis             : 1;  /**< [ 10: 10](R/W) Input data FIFO 0 ECC correction disable. */
        uint64_t idf0_fs               : 2;  /**< [  9:  8](R/W) Controls input data FIFO 0 flip syndrome.  See [IQF_FS]. */
        uint64_t reserved_7            : 1;
        uint64_t gspf_cdis             : 1;  /**< [  6:  6](R/W) G/S pointer FIFO ECC correction disable. */
        uint64_t gspf_fs               : 2;  /**< [  5:  4](R/W) Controls G/S pointer FIFO flip syndrome.  See [IQF_FS]. */
        uint64_t reserved_3            : 1;
        uint64_t iqf_cdis              : 1;  /**< [  2:  2](R/W) Instruction queue FIFO ECC correction disable. */
        uint64_t iqf_fs                : 2;  /**< [  1:  0](R/W) Controls instruction queue FIFO flip syndrome.
                                                                 0x0 = no error generation.
                                                                 0x1 = flip one bit.
                                                                 0x2 = flip one bit.
                                                                 0x3 = flip two bits. */
#else /* Word 0 - Little Endian */
        uint64_t iqf_fs                : 2;  /**< [  1:  0](R/W) Controls instruction queue FIFO flip syndrome.
                                                                 0x0 = no error generation.
                                                                 0x1 = flip one bit.
                                                                 0x2 = flip one bit.
                                                                 0x3 = flip two bits. */
        uint64_t iqf_cdis              : 1;  /**< [  2:  2](R/W) Instruction queue FIFO ECC correction disable. */
        uint64_t reserved_3            : 1;
        uint64_t gspf_fs               : 2;  /**< [  5:  4](R/W) Controls G/S pointer FIFO flip syndrome.  See [IQF_FS]. */
        uint64_t gspf_cdis             : 1;  /**< [  6:  6](R/W) G/S pointer FIFO ECC correction disable. */
        uint64_t reserved_7            : 1;
        uint64_t idf0_fs               : 2;  /**< [  9:  8](R/W) Controls input data FIFO 0 flip syndrome.  See [IQF_FS]. */
        uint64_t idf0_cdis             : 1;  /**< [ 10: 10](R/W) Input data FIFO 0 ECC correction disable. */
        uint64_t reserved_11           : 1;
        uint64_t idf1_fs               : 2;  /**< [ 13: 12](R/W) Controls input data FIFO 1 flip syndrome.  See [IQF_FS]. */
        uint64_t idf1_cdis             : 1;  /**< [ 14: 14](R/W) Input data FIFO 1 ECC correction disable. */
        uint64_t reserved_15           : 1;
        uint64_t idf2_fs               : 2;  /**< [ 17: 16](R/W) Controls input data FIFO 2 flip syndrome.  See [IQF_FS]. */
        uint64_t idf2_cdis             : 1;  /**< [ 18: 18](R/W) Input data FIFO 2 ECC correction disable. */
        uint64_t reserved_19           : 1;
        uint64_t idf3_fs               : 2;  /**< [ 21: 20](R/W) Controls input data FIFO 3 flip syndrome.  See [IQF_FS]. */
        uint64_t idf3_cdis             : 1;  /**< [ 22: 22](R/W) Input data FIFO 3 ECC correction disable. */
        uint64_t reserved_23           : 1;
        uint64_t idf4_fs               : 2;  /**< [ 25: 24](R/W) Controls input data FIFO 4 flip syndrome.  See [IQF_FS]. */
        uint64_t idf4_cdis             : 1;  /**< [ 26: 26](R/W) Input data FIFO 4 ECC correction disable. */
        uint64_t reserved_27           : 1;
        uint64_t idf5_fs               : 2;  /**< [ 29: 28](R/W) Controls input data FIFO 5 flip syndrome.  See [IQF_FS]. */
        uint64_t idf5_cdis             : 1;  /**< [ 30: 30](R/W) Input data FIFO 5 ECC correction disable. */
        uint64_t reserved_31           : 1;
        uint64_t vmem_fs               : 2;  /**< [ 33: 32](R/W) Controls VMEM memory flip syndrome.  See [IQF_FS]. */
        uint64_t vmem_cdis             : 1;  /**< [ 34: 34](R/W) VMEM memory ECC correction disable. */
        uint64_t reserved_35           : 1;
        uint64_t pmem_fs               : 2;  /**< [ 37: 36](R/W) Controls PMEM memory flip syndrome.  See [IQF_FS]. */
        uint64_t pmem_cdis             : 1;  /**< [ 38: 38](R/W) PMEM memory ECC correction disable. */
        uint64_t reserved_39           : 1;
        uint64_t mbox_fs               : 2;  /**< [ 41: 40](R/W) Controls MBOX memory flip syndrome.  See [IQF_FS]. */
        uint64_t mbox_cdis             : 1;  /**< [ 42: 42](R/W) MBOX memory ECC correction disable. */
        uint64_t reserved_43_63        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_ecc_ctl_s cn; */
};
typedef union cavm_zip_ecc_ctl cavm_zip_ecc_ctl_t;

#define CAVM_ZIP_ECC_CTL CAVM_ZIP_ECC_CTL_FUNC()
static inline uint64_t CAVM_ZIP_ECC_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_ECC_CTL_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000568ll;
    __cavm_csr_fatal("ZIP_ECC_CTL", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_ECC_CTL cavm_zip_ecc_ctl_t
#define bustype_CAVM_ZIP_ECC_CTL CSR_TYPE_NCB
#define basename_CAVM_ZIP_ECC_CTL "ZIP_ECC_CTL"
#define device_bar_CAVM_ZIP_ECC_CTL 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_ECC_CTL 0
#define arguments_CAVM_ZIP_ECC_CTL -1,-1,-1,-1

/**
 * Register (NCB) zip_ecce_ena_w1c
 *
 * ZIP ECC Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_zip_ecce_ena_w1c
{
    uint64_t u;
    struct cavm_zip_ecce_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_43_63        : 21;
        uint64_t dbe                   : 11; /**< [ 42: 32](R/W1C/H) Reads or clears enable for ZIP_ECCE_INT[DBE].
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<42\> = mbox.
                                                                 \<41\> = msix_pmem.
                                                                 \<40\> = msix_vmem.
                                                                 \<39:34\> = idf[5:0].
                                                                 \<33\> = gspf.
                                                                 \<32\> = iqf. */
        uint64_t reserved_11_31        : 21;
        uint64_t sbe                   : 11; /**< [ 10:  0](R/W1C/H) Reads or clears enable for ZIP_ECCE_INT[SBE].
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<10\> = mbox.
                                                                 \<9\> = msix_pmem.
                                                                 \<8\> = msix_vmem.
                                                                 \<7:2\> = idf[5:0].
                                                                 \<1\> = gspf.
                                                                 \<0\> = iqf. */
#else /* Word 0 - Little Endian */
        uint64_t sbe                   : 11; /**< [ 10:  0](R/W1C/H) Reads or clears enable for ZIP_ECCE_INT[SBE].
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<10\> = mbox.
                                                                 \<9\> = msix_pmem.
                                                                 \<8\> = msix_vmem.
                                                                 \<7:2\> = idf[5:0].
                                                                 \<1\> = gspf.
                                                                 \<0\> = iqf. */
        uint64_t reserved_11_31        : 21;
        uint64_t dbe                   : 11; /**< [ 42: 32](R/W1C/H) Reads or clears enable for ZIP_ECCE_INT[DBE].
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<42\> = mbox.
                                                                 \<41\> = msix_pmem.
                                                                 \<40\> = msix_vmem.
                                                                 \<39:34\> = idf[5:0].
                                                                 \<33\> = gspf.
                                                                 \<32\> = iqf. */
        uint64_t reserved_43_63        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_ecce_ena_w1c_s cn; */
};
typedef union cavm_zip_ecce_ena_w1c cavm_zip_ecce_ena_w1c_t;

#define CAVM_ZIP_ECCE_ENA_W1C CAVM_ZIP_ECCE_ENA_W1C_FUNC()
static inline uint64_t CAVM_ZIP_ECCE_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_ECCE_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000598ll;
    __cavm_csr_fatal("ZIP_ECCE_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_ECCE_ENA_W1C cavm_zip_ecce_ena_w1c_t
#define bustype_CAVM_ZIP_ECCE_ENA_W1C CSR_TYPE_NCB
#define basename_CAVM_ZIP_ECCE_ENA_W1C "ZIP_ECCE_ENA_W1C"
#define device_bar_CAVM_ZIP_ECCE_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_ECCE_ENA_W1C 0
#define arguments_CAVM_ZIP_ECCE_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB) zip_ecce_ena_w1s
 *
 * ZIP ECC Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_zip_ecce_ena_w1s
{
    uint64_t u;
    struct cavm_zip_ecce_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_43_63        : 21;
        uint64_t dbe                   : 11; /**< [ 42: 32](R/W1S/H) Reads or sets enable for ZIP_ECCE_INT[DBE].
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<42\> = mbox.
                                                                 \<41\> = msix_pmem.
                                                                 \<40\> = msix_vmem.
                                                                 \<39:34\> = idf[5:0].
                                                                 \<33\> = gspf.
                                                                 \<32\> = iqf. */
        uint64_t reserved_11_31        : 21;
        uint64_t sbe                   : 11; /**< [ 10:  0](R/W1S/H) Reads or sets enable for ZIP_ECCE_INT[SBE].
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<10\> = mbox.
                                                                 \<9\> = msix_pmem.
                                                                 \<8\> = msix_vmem.
                                                                 \<7:2\> = idf[5:0].
                                                                 \<1\> = gspf.
                                                                 \<0\> = iqf. */
#else /* Word 0 - Little Endian */
        uint64_t sbe                   : 11; /**< [ 10:  0](R/W1S/H) Reads or sets enable for ZIP_ECCE_INT[SBE].
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<10\> = mbox.
                                                                 \<9\> = msix_pmem.
                                                                 \<8\> = msix_vmem.
                                                                 \<7:2\> = idf[5:0].
                                                                 \<1\> = gspf.
                                                                 \<0\> = iqf. */
        uint64_t reserved_11_31        : 21;
        uint64_t dbe                   : 11; /**< [ 42: 32](R/W1S/H) Reads or sets enable for ZIP_ECCE_INT[DBE].
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<42\> = mbox.
                                                                 \<41\> = msix_pmem.
                                                                 \<40\> = msix_vmem.
                                                                 \<39:34\> = idf[5:0].
                                                                 \<33\> = gspf.
                                                                 \<32\> = iqf. */
        uint64_t reserved_43_63        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_ecce_ena_w1s_s cn; */
};
typedef union cavm_zip_ecce_ena_w1s cavm_zip_ecce_ena_w1s_t;

#define CAVM_ZIP_ECCE_ENA_W1S CAVM_ZIP_ECCE_ENA_W1S_FUNC()
static inline uint64_t CAVM_ZIP_ECCE_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_ECCE_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000590ll;
    __cavm_csr_fatal("ZIP_ECCE_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_ECCE_ENA_W1S cavm_zip_ecce_ena_w1s_t
#define bustype_CAVM_ZIP_ECCE_ENA_W1S CSR_TYPE_NCB
#define basename_CAVM_ZIP_ECCE_ENA_W1S "ZIP_ECCE_ENA_W1S"
#define device_bar_CAVM_ZIP_ECCE_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_ECCE_ENA_W1S 0
#define arguments_CAVM_ZIP_ECCE_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB) zip_ecce_int
 *
 * ZIP ECC Interrupt Status Register
 * This register contains the status of the ECC interrupt sources.
 */
union cavm_zip_ecce_int
{
    uint64_t u;
    struct cavm_zip_ecce_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_43_63        : 21;
        uint64_t dbe                   : 11; /**< [ 42: 32](R/W1C/H) Double-bit error detected in internal RAM. 0 = pass, 1 = fail. One bit per memory.
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<42\> = mbox.
                                                                 \<41\> = msix_pmem.
                                                                 \<40\> = msix_vmem.
                                                                 \<39:34\> = idf[5:0].
                                                                 \<33\> = gspf.
                                                                 \<32\> = iqf. */
        uint64_t reserved_11_31        : 21;
        uint64_t sbe                   : 11; /**< [ 10:  0](R/W1C/H) Single-bit error detected in internal RAM. 0 = pass, 1 = fail. One bit per memory.
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<10\> = mbox.
                                                                 \<9\> = msix_pmem.
                                                                 \<8\> = msix_vmem.
                                                                 \<7:2\> = idf[5:0].
                                                                 \<1\> = gspf.
                                                                 \<0\> = iqf. */
#else /* Word 0 - Little Endian */
        uint64_t sbe                   : 11; /**< [ 10:  0](R/W1C/H) Single-bit error detected in internal RAM. 0 = pass, 1 = fail. One bit per memory.
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<10\> = mbox.
                                                                 \<9\> = msix_pmem.
                                                                 \<8\> = msix_vmem.
                                                                 \<7:2\> = idf[5:0].
                                                                 \<1\> = gspf.
                                                                 \<0\> = iqf. */
        uint64_t reserved_11_31        : 21;
        uint64_t dbe                   : 11; /**< [ 42: 32](R/W1C/H) Double-bit error detected in internal RAM. 0 = pass, 1 = fail. One bit per memory.
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<42\> = mbox.
                                                                 \<41\> = msix_pmem.
                                                                 \<40\> = msix_vmem.
                                                                 \<39:34\> = idf[5:0].
                                                                 \<33\> = gspf.
                                                                 \<32\> = iqf. */
        uint64_t reserved_43_63        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_ecce_int_s cn; */
};
typedef union cavm_zip_ecce_int cavm_zip_ecce_int_t;

#define CAVM_ZIP_ECCE_INT CAVM_ZIP_ECCE_INT_FUNC()
static inline uint64_t CAVM_ZIP_ECCE_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_ECCE_INT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000580ll;
    __cavm_csr_fatal("ZIP_ECCE_INT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_ECCE_INT cavm_zip_ecce_int_t
#define bustype_CAVM_ZIP_ECCE_INT CSR_TYPE_NCB
#define basename_CAVM_ZIP_ECCE_INT "ZIP_ECCE_INT"
#define device_bar_CAVM_ZIP_ECCE_INT 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_ECCE_INT 0
#define arguments_CAVM_ZIP_ECCE_INT -1,-1,-1,-1

/**
 * Register (NCB) zip_ecce_int_w1s
 *
 * ZIP ECC Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_zip_ecce_int_w1s
{
    uint64_t u;
    struct cavm_zip_ecce_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_43_63        : 21;
        uint64_t dbe                   : 11; /**< [ 42: 32](R/W1S/H) Reads or sets ZIP_ECCE_INT[DBE].
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<42\> = mbox.
                                                                 \<41\> = msix_pmem.
                                                                 \<40\> = msix_vmem.
                                                                 \<39:34\> = idf[5:0].
                                                                 \<33\> = gspf.
                                                                 \<32\> = iqf. */
        uint64_t reserved_11_31        : 21;
        uint64_t sbe                   : 11; /**< [ 10:  0](R/W1S/H) Reads or sets ZIP_ECCE_INT[SBE].
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<10\> = mbox.
                                                                 \<9\> = msix_pmem.
                                                                 \<8\> = msix_vmem.
                                                                 \<7:2\> = idf[5:0].
                                                                 \<1\> = gspf.
                                                                 \<0\> = iqf. */
#else /* Word 0 - Little Endian */
        uint64_t sbe                   : 11; /**< [ 10:  0](R/W1S/H) Reads or sets ZIP_ECCE_INT[SBE].
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<10\> = mbox.
                                                                 \<9\> = msix_pmem.
                                                                 \<8\> = msix_vmem.
                                                                 \<7:2\> = idf[5:0].
                                                                 \<1\> = gspf.
                                                                 \<0\> = iqf. */
        uint64_t reserved_11_31        : 21;
        uint64_t dbe                   : 11; /**< [ 42: 32](R/W1S/H) Reads or sets ZIP_ECCE_INT[DBE].
                                                                 Internal:
                                                                 One memory per bit as follows:
                                                                 \<42\> = mbox.
                                                                 \<41\> = msix_pmem.
                                                                 \<40\> = msix_vmem.
                                                                 \<39:34\> = idf[5:0].
                                                                 \<33\> = gspf.
                                                                 \<32\> = iqf. */
        uint64_t reserved_43_63        : 21;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_ecce_int_w1s_s cn; */
};
typedef union cavm_zip_ecce_int_w1s cavm_zip_ecce_int_w1s_t;

#define CAVM_ZIP_ECCE_INT_W1S CAVM_ZIP_ECCE_INT_W1S_FUNC()
static inline uint64_t CAVM_ZIP_ECCE_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_ECCE_INT_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000588ll;
    __cavm_csr_fatal("ZIP_ECCE_INT_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_ECCE_INT_W1S cavm_zip_ecce_int_w1s_t
#define bustype_CAVM_ZIP_ECCE_INT_W1S CSR_TYPE_NCB
#define basename_CAVM_ZIP_ECCE_INT_W1S "ZIP_ECCE_INT_W1S"
#define device_bar_CAVM_ZIP_ECCE_INT_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_ECCE_INT_W1S 0
#define arguments_CAVM_ZIP_ECCE_INT_W1S -1,-1,-1,-1

/**
 * Register (NCB) zip_eco
 *
 * INTERNAL: ZIP ECO Register
 */
union cavm_zip_eco
{
    uint64_t u;
    struct cavm_zip_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_eco_s cn; */
};
typedef union cavm_zip_eco cavm_zip_eco_t;

#define CAVM_ZIP_ECO CAVM_ZIP_ECO_FUNC()
static inline uint64_t CAVM_ZIP_ECO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_ECO_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x8380000005f0ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x8380000005f0ll;
    __cavm_csr_fatal("ZIP_ECO", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_ECO cavm_zip_eco_t
#define bustype_CAVM_ZIP_ECO CSR_TYPE_NCB
#define basename_CAVM_ZIP_ECO "ZIP_ECO"
#define device_bar_CAVM_ZIP_ECO 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_ECO 0
#define arguments_CAVM_ZIP_ECO -1,-1,-1,-1

/**
 * Register (NCB) zip_fife_ena_w1c
 *
 * ZIP Error Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_zip_fife_ena_w1c
{
    uint64_t u;
    struct cavm_zip_fife_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t asserts               : 42; /**< [ 41:  0](R/W1C/H) Reads or clears enable for ZIP_FIFE_INT[ASSERTS]. */
#else /* Word 0 - Little Endian */
        uint64_t asserts               : 42; /**< [ 41:  0](R/W1C/H) Reads or clears enable for ZIP_FIFE_INT[ASSERTS]. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_fife_ena_w1c_s cn; */
};
typedef union cavm_zip_fife_ena_w1c cavm_zip_fife_ena_w1c_t;

#define CAVM_ZIP_FIFE_ENA_W1C CAVM_ZIP_FIFE_ENA_W1C_FUNC()
static inline uint64_t CAVM_ZIP_FIFE_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_FIFE_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000090ll;
    __cavm_csr_fatal("ZIP_FIFE_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_FIFE_ENA_W1C cavm_zip_fife_ena_w1c_t
#define bustype_CAVM_ZIP_FIFE_ENA_W1C CSR_TYPE_NCB
#define basename_CAVM_ZIP_FIFE_ENA_W1C "ZIP_FIFE_ENA_W1C"
#define device_bar_CAVM_ZIP_FIFE_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_FIFE_ENA_W1C 0
#define arguments_CAVM_ZIP_FIFE_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB) zip_fife_ena_w1s
 *
 * ZIP Error Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_zip_fife_ena_w1s
{
    uint64_t u;
    struct cavm_zip_fife_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t asserts               : 42; /**< [ 41:  0](R/W1S/H) Reads or sets enable for ZIP_FIFE_INT[ASSERTS]. */
#else /* Word 0 - Little Endian */
        uint64_t asserts               : 42; /**< [ 41:  0](R/W1S/H) Reads or sets enable for ZIP_FIFE_INT[ASSERTS]. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_fife_ena_w1s_s cn; */
};
typedef union cavm_zip_fife_ena_w1s cavm_zip_fife_ena_w1s_t;

#define CAVM_ZIP_FIFE_ENA_W1S CAVM_ZIP_FIFE_ENA_W1S_FUNC()
static inline uint64_t CAVM_ZIP_FIFE_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_FIFE_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000088ll;
    __cavm_csr_fatal("ZIP_FIFE_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_FIFE_ENA_W1S cavm_zip_fife_ena_w1s_t
#define bustype_CAVM_ZIP_FIFE_ENA_W1S CSR_TYPE_NCB
#define basename_CAVM_ZIP_FIFE_ENA_W1S "ZIP_FIFE_ENA_W1S"
#define device_bar_CAVM_ZIP_FIFE_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_FIFE_ENA_W1S 0
#define arguments_CAVM_ZIP_FIFE_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB) zip_fife_int
 *
 * ZIP Error Interrupt Register
 */
union cavm_zip_fife_int
{
    uint64_t u;
    struct cavm_zip_fife_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t asserts               : 42; /**< [ 41:  0](R/W1C/H) FIFO assertion checks. */
#else /* Word 0 - Little Endian */
        uint64_t asserts               : 42; /**< [ 41:  0](R/W1C/H) FIFO assertion checks. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_fife_int_s cn; */
};
typedef union cavm_zip_fife_int cavm_zip_fife_int_t;

#define CAVM_ZIP_FIFE_INT CAVM_ZIP_FIFE_INT_FUNC()
static inline uint64_t CAVM_ZIP_FIFE_INT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_FIFE_INT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000078ll;
    __cavm_csr_fatal("ZIP_FIFE_INT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_FIFE_INT cavm_zip_fife_int_t
#define bustype_CAVM_ZIP_FIFE_INT CSR_TYPE_NCB
#define basename_CAVM_ZIP_FIFE_INT "ZIP_FIFE_INT"
#define device_bar_CAVM_ZIP_FIFE_INT 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_FIFE_INT 0
#define arguments_CAVM_ZIP_FIFE_INT -1,-1,-1,-1

/**
 * Register (NCB) zip_fife_int_w1s
 *
 * ZIP Error Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_zip_fife_int_w1s
{
    uint64_t u;
    struct cavm_zip_fife_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_42_63        : 22;
        uint64_t asserts               : 42; /**< [ 41:  0](R/W1S/H) Reads or sets ZIP_FIFE_INT[ASSERTS]. */
#else /* Word 0 - Little Endian */
        uint64_t asserts               : 42; /**< [ 41:  0](R/W1S/H) Reads or sets ZIP_FIFE_INT[ASSERTS]. */
        uint64_t reserved_42_63        : 22;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_fife_int_w1s_s cn; */
};
typedef union cavm_zip_fife_int_w1s cavm_zip_fife_int_w1s_t;

#define CAVM_ZIP_FIFE_INT_W1S CAVM_ZIP_FIFE_INT_W1S_FUNC()
static inline uint64_t CAVM_ZIP_FIFE_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_FIFE_INT_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000080ll;
    __cavm_csr_fatal("ZIP_FIFE_INT_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_FIFE_INT_W1S cavm_zip_fife_int_w1s_t
#define bustype_CAVM_ZIP_FIFE_INT_W1S CSR_TYPE_NCB
#define basename_CAVM_ZIP_FIFE_INT_W1S "ZIP_FIFE_INT_W1S"
#define device_bar_CAVM_ZIP_FIFE_INT_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_FIFE_INT_W1S 0
#define arguments_CAVM_ZIP_FIFE_INT_W1S -1,-1,-1,-1

/**
 * Register (NCB) zip_pf_active_pc
 *
 * ZIP PF Conditional Clock Counter Register
 */
union cavm_zip_pf_active_pc
{
    uint64_t u;
    struct cavm_zip_pf_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_active_pc_s cn; */
};
typedef union cavm_zip_pf_active_pc cavm_zip_pf_active_pc_t;

#define CAVM_ZIP_PF_ACTIVE_PC CAVM_ZIP_PF_ACTIVE_PC_FUNC()
static inline uint64_t CAVM_ZIP_PF_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_ACTIVE_PC_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000450ll;
    __cavm_csr_fatal("ZIP_PF_ACTIVE_PC", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_ACTIVE_PC cavm_zip_pf_active_pc_t
#define bustype_CAVM_ZIP_PF_ACTIVE_PC CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_ACTIVE_PC "ZIP_PF_ACTIVE_PC"
#define device_bar_CAVM_ZIP_PF_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_ACTIVE_PC 0
#define arguments_CAVM_ZIP_PF_ACTIVE_PC -1,-1,-1,-1

/**
 * Register (NCB) zip_pf_inst_latency_pc
 *
 * ZIP PF Instruction Latency Counter Register
 */
union cavm_zip_pf_inst_latency_pc
{
    uint64_t u;
    struct cavm_zip_pf_inst_latency_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for an instruction to complete (i.e., have the ZIP_ZRES_S
                                                                 result committed to memory).  Incremented every coprocessor-clock by the
                                                                 number of instructions active in that cycle. This may be divided by
                                                                 ZIP_PF_RD_REQ_PC to determine the average hardware instruction latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for an instruction to complete (i.e., have the ZIP_ZRES_S
                                                                 result committed to memory).  Incremented every coprocessor-clock by the
                                                                 number of instructions active in that cycle. This may be divided by
                                                                 ZIP_PF_RD_REQ_PC to determine the average hardware instruction latency. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_inst_latency_pc_s cn; */
};
typedef union cavm_zip_pf_inst_latency_pc cavm_zip_pf_inst_latency_pc_t;

#define CAVM_ZIP_PF_INST_LATENCY_PC CAVM_ZIP_PF_INST_LATENCY_PC_FUNC()
static inline uint64_t CAVM_ZIP_PF_INST_LATENCY_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_INST_LATENCY_PC_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000420ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000420ll;
    __cavm_csr_fatal("ZIP_PF_INST_LATENCY_PC", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_INST_LATENCY_PC cavm_zip_pf_inst_latency_pc_t
#define bustype_CAVM_ZIP_PF_INST_LATENCY_PC CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_INST_LATENCY_PC "ZIP_PF_INST_LATENCY_PC"
#define device_bar_CAVM_ZIP_PF_INST_LATENCY_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_INST_LATENCY_PC 0
#define arguments_CAVM_ZIP_PF_INST_LATENCY_PC -1,-1,-1,-1

/**
 * Register (NCB) zip_pf_inst_req_pc
 *
 * ZIP PF Instruction Request Performance Counter Register
 */
union cavm_zip_pf_inst_req_pc
{
    uint64_t u;
    struct cavm_zip_pf_inst_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of instructions (ZIP_INST_S) that have started processing. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of instructions (ZIP_INST_S) that have started processing. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_inst_req_pc_s cn; */
};
typedef union cavm_zip_pf_inst_req_pc cavm_zip_pf_inst_req_pc_t;

#define CAVM_ZIP_PF_INST_REQ_PC CAVM_ZIP_PF_INST_REQ_PC_FUNC()
static inline uint64_t CAVM_ZIP_PF_INST_REQ_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_INST_REQ_PC_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000410ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000410ll;
    __cavm_csr_fatal("ZIP_PF_INST_REQ_PC", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_INST_REQ_PC cavm_zip_pf_inst_req_pc_t
#define bustype_CAVM_ZIP_PF_INST_REQ_PC CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_INST_REQ_PC "ZIP_PF_INST_REQ_PC"
#define device_bar_CAVM_ZIP_PF_INST_REQ_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_INST_REQ_PC 0
#define arguments_CAVM_ZIP_PF_INST_REQ_PC -1,-1,-1,-1

/**
 * Register (NCB) zip_pf_mbox_ena_w1c#
 *
 * ZIP PF Mailbox Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union cavm_zip_pf_mbox_ena_w1cx
{
    uint64_t u;
    struct cavm_zip_pf_mbox_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for ZIP_PF_MBOX_INT(0)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for ZIP_PF_MBOX_INT(0)[MBOX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_mbox_ena_w1cx_s cn; */
};
typedef union cavm_zip_pf_mbox_ena_w1cx cavm_zip_pf_mbox_ena_w1cx_t;

static inline uint64_t CAVM_ZIP_PF_MBOX_ENA_W1CX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_MBOX_ENA_W1CX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a==0))
        return 0x838000000940ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a==0))
        return 0x838000000940ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIP_PF_MBOX_ENA_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_MBOX_ENA_W1CX(a) cavm_zip_pf_mbox_ena_w1cx_t
#define bustype_CAVM_ZIP_PF_MBOX_ENA_W1CX(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_MBOX_ENA_W1CX(a) "ZIP_PF_MBOX_ENA_W1CX"
#define device_bar_CAVM_ZIP_PF_MBOX_ENA_W1CX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_MBOX_ENA_W1CX(a) (a)
#define arguments_CAVM_ZIP_PF_MBOX_ENA_W1CX(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_pf_mbox_ena_w1s#
 *
 * ZIP PF Mailbox Enable Set Registers
 * This register sets interrupt enable bits.
 */
union cavm_zip_pf_mbox_ena_w1sx
{
    uint64_t u;
    struct cavm_zip_pf_mbox_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for ZIP_PF_MBOX_INT(0)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for ZIP_PF_MBOX_INT(0)[MBOX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_mbox_ena_w1sx_s cn; */
};
typedef union cavm_zip_pf_mbox_ena_w1sx cavm_zip_pf_mbox_ena_w1sx_t;

static inline uint64_t CAVM_ZIP_PF_MBOX_ENA_W1SX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_MBOX_ENA_W1SX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a==0))
        return 0x838000000960ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a==0))
        return 0x838000000960ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIP_PF_MBOX_ENA_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_MBOX_ENA_W1SX(a) cavm_zip_pf_mbox_ena_w1sx_t
#define bustype_CAVM_ZIP_PF_MBOX_ENA_W1SX(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_MBOX_ENA_W1SX(a) "ZIP_PF_MBOX_ENA_W1SX"
#define device_bar_CAVM_ZIP_PF_MBOX_ENA_W1SX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_MBOX_ENA_W1SX(a) (a)
#define arguments_CAVM_ZIP_PF_MBOX_ENA_W1SX(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_pf_mbox_int#
 *
 * ZIP PF Mailbox Interrupt Registers
 */
union cavm_zip_pf_mbox_intx
{
    uint64_t u;
    struct cavm_zip_pf_mbox_intx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) One interrupt bit per VF. Each bit is set when the associated ZIP_VF()_PF_MBOX(1) is
                                                                 written.  Bits corresponding to unimplemented VFs (above bit 7) are never set by hardware. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) One interrupt bit per VF. Each bit is set when the associated ZIP_VF()_PF_MBOX(1) is
                                                                 written.  Bits corresponding to unimplemented VFs (above bit 7) are never set by hardware. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_mbox_intx_s cn; */
};
typedef union cavm_zip_pf_mbox_intx cavm_zip_pf_mbox_intx_t;

static inline uint64_t CAVM_ZIP_PF_MBOX_INTX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_MBOX_INTX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a==0))
        return 0x838000000900ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a==0))
        return 0x838000000900ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIP_PF_MBOX_INTX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_MBOX_INTX(a) cavm_zip_pf_mbox_intx_t
#define bustype_CAVM_ZIP_PF_MBOX_INTX(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_MBOX_INTX(a) "ZIP_PF_MBOX_INTX"
#define device_bar_CAVM_ZIP_PF_MBOX_INTX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_MBOX_INTX(a) (a)
#define arguments_CAVM_ZIP_PF_MBOX_INTX(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_pf_mbox_int_w1s#
 *
 * ZIP PF Mailbox Interrupt Set Registers
 * This register sets interrupt bits.
 */
union cavm_zip_pf_mbox_int_w1sx
{
    uint64_t u;
    struct cavm_zip_pf_mbox_int_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets ZIP_PF_MBOX_INT(0)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets ZIP_PF_MBOX_INT(0)[MBOX]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_mbox_int_w1sx_s cn; */
};
typedef union cavm_zip_pf_mbox_int_w1sx cavm_zip_pf_mbox_int_w1sx_t;

static inline uint64_t CAVM_ZIP_PF_MBOX_INT_W1SX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_MBOX_INT_W1SX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a==0))
        return 0x838000000920ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a==0))
        return 0x838000000920ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIP_PF_MBOX_INT_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_MBOX_INT_W1SX(a) cavm_zip_pf_mbox_int_w1sx_t
#define bustype_CAVM_ZIP_PF_MBOX_INT_W1SX(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_MBOX_INT_W1SX(a) "ZIP_PF_MBOX_INT_W1SX"
#define device_bar_CAVM_ZIP_PF_MBOX_INT_W1SX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_MBOX_INT_W1SX(a) (a)
#define arguments_CAVM_ZIP_PF_MBOX_INT_W1SX(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_pf_msix_pba#
 *
 * ZIP MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the
 * ZIP_PF_INT_VEC_E enumeration.
 */
union cavm_zip_pf_msix_pbax
{
    uint64_t u;
    struct cavm_zip_pf_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated ZIP_PF_MSIX_VEC()_CTL, enumerated by ZIP_PF_INT_VEC_E.
                                                                 Bits that have no associated ZIP_PF_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated ZIP_PF_MSIX_VEC()_CTL, enumerated by ZIP_PF_INT_VEC_E.
                                                                 Bits that have no associated ZIP_PF_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_msix_pbax_s cn; */
};
typedef union cavm_zip_pf_msix_pbax cavm_zip_pf_msix_pbax_t;

static inline uint64_t CAVM_ZIP_PF_MSIX_PBAX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_MSIX_PBAX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a==0))
        return 0x8380100f0000ll + 8ll * ((a) & 0x0);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a==0))
        return 0x8380100f0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("ZIP_PF_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_MSIX_PBAX(a) cavm_zip_pf_msix_pbax_t
#define bustype_CAVM_ZIP_PF_MSIX_PBAX(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_MSIX_PBAX(a) "ZIP_PF_MSIX_PBAX"
#define device_bar_CAVM_ZIP_PF_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_ZIP_PF_MSIX_PBAX(a) (a)
#define arguments_CAVM_ZIP_PF_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_pf_msix_vec#_addr
 *
 * ZIP MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the ZIP_PF_INT_VEC_E enumeration.
 */
union cavm_zip_pf_msix_vecx_addr
{
    uint64_t u;
    struct cavm_zip_pf_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's ZIP_PF_MSIX_VEC()_ADDR, ZIP_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of ZIP_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_ZIP_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's ZIP_PF_MSIX_VEC()_ADDR, ZIP_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of ZIP_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_ZIP_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    struct cavm_zip_pf_msix_vecx_addr_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t addr                  : 47; /**< [ 48:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's ZIP_PF_MSIX_VEC()_ADDR, ZIP_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of ZIP_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_ZIP_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's ZIP_PF_MSIX_VEC()_ADDR, ZIP_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of ZIP_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_ZIP_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 47; /**< [ 48:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } cn8;
    /* struct cavm_zip_pf_msix_vecx_addr_s cn9; */
    /* struct cavm_zip_pf_msix_vecx_addr_s cn96xxp1; */
    struct cavm_zip_pf_msix_vecx_addr_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 The vector's IOVA is sent to the SMMU as nonsecure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1).

                                                                 1 = This vector's ZIP_PF_MSIX_VEC()_ADDR, ZIP_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of ZIP_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_ZIP_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

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

                                                                 1 = This vector's ZIP_PF_MSIX_VEC()_ADDR, ZIP_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of ZIP_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.
                                                                 The vector's IOVA is sent to the SMMU as secure (though this only affects
                                                                 physical addresses if PCCPF_XXX_VSEC_SCTL[MSIX_PHYS]=1 or
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC_PHYS]=1).

                                                                 If PCCPF_ZIP_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set.

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
};
typedef union cavm_zip_pf_msix_vecx_addr cavm_zip_pf_msix_vecx_addr_t;

static inline uint64_t CAVM_ZIP_PF_MSIX_VECX_ADDR(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_MSIX_VECX_ADDR(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=2))
        return 0x838010000000ll + 0x10ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=1))
        return 0x838010000000ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("ZIP_PF_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_MSIX_VECX_ADDR(a) cavm_zip_pf_msix_vecx_addr_t
#define bustype_CAVM_ZIP_PF_MSIX_VECX_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_MSIX_VECX_ADDR(a) "ZIP_PF_MSIX_VECX_ADDR"
#define device_bar_CAVM_ZIP_PF_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_ZIP_PF_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_ZIP_PF_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_pf_msix_vec#_ctl
 *
 * ZIP MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the ZIP_PF_INT_VEC_E enumeration.
 */
union cavm_zip_pf_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_zip_pf_msix_vecx_ctl_s
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
    struct cavm_zip_pf_msix_vecx_ctl_cn8
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
    /* struct cavm_zip_pf_msix_vecx_ctl_s cn9; */
};
typedef union cavm_zip_pf_msix_vecx_ctl cavm_zip_pf_msix_vecx_ctl_t;

static inline uint64_t CAVM_ZIP_PF_MSIX_VECX_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_MSIX_VECX_CTL(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=2))
        return 0x838010000008ll + 0x10ll * ((a) & 0x3);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=1))
        return 0x838010000008ll + 0x10ll * ((a) & 0x1);
    __cavm_csr_fatal("ZIP_PF_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_MSIX_VECX_CTL(a) cavm_zip_pf_msix_vecx_ctl_t
#define bustype_CAVM_ZIP_PF_MSIX_VECX_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_MSIX_VECX_CTL(a) "ZIP_PF_MSIX_VECX_CTL"
#define device_bar_CAVM_ZIP_PF_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_ZIP_PF_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_ZIP_PF_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_pf_que#_gmctl
 *
 * ZIP Queue Guest Machine Control Register
 * This register configures queues.
 */
union cavm_zip_pf_quex_gmctl
{
    uint64_t u;
    struct cavm_zip_pf_quex_gmctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_0_63         : 64;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_63         : 64;
#endif /* Word 0 - End */
    } s;
    struct cavm_zip_pf_quex_gmctl_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t gmid                  : 16; /**< [ 15:  0](R/W) Guest machine identifier. The GMID to send to FPA for all buffer free operations, or
                                                                 to SSO for all add-work operations initiated by this queue.  Must be nonzero or FPA/SSO
                                                                 will drop requests; see FPA_PF_MAP() and SSO_PF_MAP(). */
#else /* Word 0 - Little Endian */
        uint64_t gmid                  : 16; /**< [ 15:  0](R/W) Guest machine identifier. The GMID to send to FPA for all buffer free operations, or
                                                                 to SSO for all add-work operations initiated by this queue.  Must be nonzero or FPA/SSO
                                                                 will drop requests; see FPA_PF_MAP() and SSO_PF_MAP(). */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_zip_pf_quex_gmctl_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t sso_pf_func           : 16; /**< [ 15:  0](R/W) SSO RVU physical and virtual function. Indicates the RVU PF and VF to which
                                                                 queue's SSO add works are sent. */
#else /* Word 0 - Little Endian */
        uint64_t sso_pf_func           : 16; /**< [ 15:  0](R/W) SSO RVU physical and virtual function. Indicates the RVU PF and VF to which
                                                                 queue's SSO add works are sent. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_pf_quex_gmctl cavm_zip_pf_quex_gmctl_t;

static inline uint64_t CAVM_ZIP_PF_QUEX_GMCTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_QUEX_GMCTL(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838000000800ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838000000800ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_PF_QUEX_GMCTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_QUEX_GMCTL(a) cavm_zip_pf_quex_gmctl_t
#define bustype_CAVM_ZIP_PF_QUEX_GMCTL(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_QUEX_GMCTL(a) "ZIP_PF_QUEX_GMCTL"
#define device_bar_CAVM_ZIP_PF_QUEX_GMCTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_QUEX_GMCTL(a) (a)
#define arguments_CAVM_ZIP_PF_QUEX_GMCTL(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_pf_ras
 *
 * ZIP PF RAS Register
 * This register contains PF RAS error flags for ZPI.
 */
union cavm_zip_pf_ras
{
    uint64_t u;
    struct cavm_zip_pf_ras_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1C/H) Poison received on a NCB instruction response. */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1C/H) Poison received on a NCB data response. */
#else /* Word 0 - Little Endian */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1C/H) Poison received on a NCB data response. */
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1C/H) Poison received on a NCB instruction response. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_ras_s cn; */
};
typedef union cavm_zip_pf_ras cavm_zip_pf_ras_t;

#define CAVM_ZIP_PF_RAS CAVM_ZIP_PF_RAS_FUNC()
static inline uint64_t CAVM_ZIP_PF_RAS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_RAS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000980ll;
    __cavm_csr_fatal("ZIP_PF_RAS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_RAS cavm_zip_pf_ras_t
#define bustype_CAVM_ZIP_PF_RAS CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_RAS "ZIP_PF_RAS"
#define device_bar_CAVM_ZIP_PF_RAS 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_RAS 0
#define arguments_CAVM_ZIP_PF_RAS -1,-1,-1,-1

/**
 * Register (NCB) zip_pf_ras_ena_w1c
 *
 * ZIP PF RAS Register
 * This register clears interrupt enable bits.
 */
union cavm_zip_pf_ras_ena_w1c
{
    uint64_t u;
    struct cavm_zip_pf_ras_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for ZIP_PF_RAS[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ZIP_PF_RAS[LD_DAT_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ZIP_PF_RAS[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for ZIP_PF_RAS[LD_CMD_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_ras_ena_w1c_s cn; */
};
typedef union cavm_zip_pf_ras_ena_w1c cavm_zip_pf_ras_ena_w1c_t;

#define CAVM_ZIP_PF_RAS_ENA_W1C CAVM_ZIP_PF_RAS_ENA_W1C_FUNC()
static inline uint64_t CAVM_ZIP_PF_RAS_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_RAS_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000990ll;
    __cavm_csr_fatal("ZIP_PF_RAS_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_RAS_ENA_W1C cavm_zip_pf_ras_ena_w1c_t
#define bustype_CAVM_ZIP_PF_RAS_ENA_W1C CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_RAS_ENA_W1C "ZIP_PF_RAS_ENA_W1C"
#define device_bar_CAVM_ZIP_PF_RAS_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_RAS_ENA_W1C 0
#define arguments_CAVM_ZIP_PF_RAS_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB) zip_pf_ras_ena_w1s
 *
 * ZIP PF RAS Register
 * This register sets interrupt enable bits.
 */
union cavm_zip_pf_ras_ena_w1s
{
    uint64_t u;
    struct cavm_zip_pf_ras_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for ZIP_PF_RAS[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ZIP_PF_RAS[LD_DAT_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ZIP_PF_RAS[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for ZIP_PF_RAS[LD_CMD_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_ras_ena_w1s_s cn; */
};
typedef union cavm_zip_pf_ras_ena_w1s cavm_zip_pf_ras_ena_w1s_t;

#define CAVM_ZIP_PF_RAS_ENA_W1S CAVM_ZIP_PF_RAS_ENA_W1S_FUNC()
static inline uint64_t CAVM_ZIP_PF_RAS_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_RAS_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000998ll;
    __cavm_csr_fatal("ZIP_PF_RAS_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_RAS_ENA_W1S cavm_zip_pf_ras_ena_w1s_t
#define bustype_CAVM_ZIP_PF_RAS_ENA_W1S CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_RAS_ENA_W1S "ZIP_PF_RAS_ENA_W1S"
#define device_bar_CAVM_ZIP_PF_RAS_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_RAS_ENA_W1S 0
#define arguments_CAVM_ZIP_PF_RAS_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB) zip_pf_ras_w1s
 *
 * ZIP PF RAS Register
 * This register sets interrupt bits.
 */
union cavm_zip_pf_ras_w1s
{
    uint64_t u;
    struct cavm_zip_pf_ras_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets ZIP_PF_RAS[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ZIP_PF_RAS[LD_DAT_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_dat_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ZIP_PF_RAS[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets ZIP_PF_RAS[LD_CMD_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_ras_w1s_s cn; */
};
typedef union cavm_zip_pf_ras_w1s cavm_zip_pf_ras_w1s_t;

#define CAVM_ZIP_PF_RAS_W1S CAVM_ZIP_PF_RAS_W1S_FUNC()
static inline uint64_t CAVM_ZIP_PF_RAS_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_RAS_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000988ll;
    __cavm_csr_fatal("ZIP_PF_RAS_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_RAS_W1S cavm_zip_pf_ras_w1s_t
#define bustype_CAVM_ZIP_PF_RAS_W1S CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_RAS_W1S "ZIP_PF_RAS_W1S"
#define device_bar_CAVM_ZIP_PF_RAS_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_RAS_W1S 0
#define arguments_CAVM_ZIP_PF_RAS_W1S -1,-1,-1,-1

/**
 * Register (NCB) zip_pf_rd_latency_pc
 *
 * ZIP PF Read Latency Counter Register
 */
union cavm_zip_pf_rd_latency_pc
{
    uint64_t u;
    struct cavm_zip_pf_rd_latency_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for NCB read returns. Incremented every
                                                                 coprocessor-clock by the number of read transactions outstanding in that cycle. This
                                                                 may be divided by ZIP_PF_RD_REQ_PC to determine the average read latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for NCB read returns. Incremented every
                                                                 coprocessor-clock by the number of read transactions outstanding in that cycle. This
                                                                 may be divided by ZIP_PF_RD_REQ_PC to determine the average read latency. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_rd_latency_pc_s cn; */
};
typedef union cavm_zip_pf_rd_latency_pc cavm_zip_pf_rd_latency_pc_t;

#define CAVM_ZIP_PF_RD_LATENCY_PC CAVM_ZIP_PF_RD_LATENCY_PC_FUNC()
static inline uint64_t CAVM_ZIP_PF_RD_LATENCY_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_RD_LATENCY_PC_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000440ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000440ll;
    __cavm_csr_fatal("ZIP_PF_RD_LATENCY_PC", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_RD_LATENCY_PC cavm_zip_pf_rd_latency_pc_t
#define bustype_CAVM_ZIP_PF_RD_LATENCY_PC CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_RD_LATENCY_PC "ZIP_PF_RD_LATENCY_PC"
#define device_bar_CAVM_ZIP_PF_RD_LATENCY_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_RD_LATENCY_PC 0
#define arguments_CAVM_ZIP_PF_RD_LATENCY_PC -1,-1,-1,-1

/**
 * Register (NCB) zip_pf_rd_req_pc
 *
 * ZIP PF Read Request Performance Counter Register
 */
union cavm_zip_pf_rd_req_pc
{
    uint64_t u;
    struct cavm_zip_pf_rd_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of NCB read requests issued. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of NCB read requests issued. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_rd_req_pc_s cn; */
};
typedef union cavm_zip_pf_rd_req_pc cavm_zip_pf_rd_req_pc_t;

#define CAVM_ZIP_PF_RD_REQ_PC CAVM_ZIP_PF_RD_REQ_PC_FUNC()
static inline uint64_t CAVM_ZIP_PF_RD_REQ_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_RD_REQ_PC_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000430ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000430ll;
    __cavm_csr_fatal("ZIP_PF_RD_REQ_PC", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_RD_REQ_PC cavm_zip_pf_rd_req_pc_t
#define bustype_CAVM_ZIP_PF_RD_REQ_PC CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_RD_REQ_PC "ZIP_PF_RD_REQ_PC"
#define device_bar_CAVM_ZIP_PF_RD_REQ_PC 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_RD_REQ_PC 0
#define arguments_CAVM_ZIP_PF_RD_REQ_PC -1,-1,-1,-1

/**
 * Register (NCB) zip_pf_vf#_mbox#
 *
 * ZIP PF/VF Mailbox Registers
 */
union cavm_zip_pf_vfx_mboxx
{
    uint64_t u;
    struct cavm_zip_pf_vfx_mboxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These PF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. Each corresponding VF may access the same storage using
                                                                 ZIP_VF()_PF_MBOX(). MBOX(0) is typically used for PF to VF signaling, MBOX(1)
                                                                 for VF to PF. Writing ZIP_PF_VF()_MBOX(0) (but not
                                                                 ZIP_VF()_PF_MBOX(0)) will set the corresponding
                                                                 ZIP_VF()_MISC_INT[MBOX] which if appropriately enabled will send an interrupt
                                                                 to the VF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These PF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. Each corresponding VF may access the same storage using
                                                                 ZIP_VF()_PF_MBOX(). MBOX(0) is typically used for PF to VF signaling, MBOX(1)
                                                                 for VF to PF. Writing ZIP_PF_VF()_MBOX(0) (but not
                                                                 ZIP_VF()_PF_MBOX(0)) will set the corresponding
                                                                 ZIP_VF()_MISC_INT[MBOX] which if appropriately enabled will send an interrupt
                                                                 to the VF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_pf_vfx_mboxx_s cn; */
};
typedef union cavm_zip_pf_vfx_mboxx cavm_zip_pf_vfx_mboxx_t;

static inline uint64_t CAVM_ZIP_PF_VFX_MBOXX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_PF_VFX_MBOXX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && ((a<=7) && (b<=1)))
        return 0x838000002000ll + 0x10ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a<=7) && (b<=1)))
        return 0x838000002000ll + 0x10ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("ZIP_PF_VFX_MBOXX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_PF_VFX_MBOXX(a,b) cavm_zip_pf_vfx_mboxx_t
#define bustype_CAVM_ZIP_PF_VFX_MBOXX(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIP_PF_VFX_MBOXX(a,b) "ZIP_PF_VFX_MBOXX"
#define device_bar_CAVM_ZIP_PF_VFX_MBOXX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_PF_VFX_MBOXX(a,b) (a)
#define arguments_CAVM_ZIP_PF_VFX_MBOXX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip_que#_gcfg
 *
 * ZIP Queue General Configuration Registers
 * These registers reflect status of the ZIP instruction queues and are for debug use only.
 */
union cavm_zip_quex_gcfg
{
    uint64_t u;
    struct cavm_zip_quex_gcfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t iqb_ldwb              : 1;  /**< [  3:  3](R/W) Load don't write back.

                                                                 0 = The hardware issues regular NCB loads towards the cache, which will cause the
                                                                 line to be written back before being replaced.

                                                                 1 = The hardware issues LDWB read-and-invalidate NCB commands towards the cache
                                                                 when fetching the last word of instructions; as a result the line will not be
                                                                 written back when replaced.  This improves performance, but software must not
                                                                 read the instructions after they are posted to the hardware.

                                                                 Partial cache line reads always use LDI. */
        uint64_t cbw_sty               : 1;  /**< [  2:  2](R/W) When set, a context cache block write will use STY. When clear, a context write will use STF. */
        uint64_t l2ld_cmd              : 2;  /**< [  1:  0](R/W) Which NCB load command to use for reading gather pointers, context, history and input
                                                                 data.
                                                                 0x0 = LDD.
                                                                 0x1 = LDI.
                                                                 0x2 = LDE.
                                                                 0x3 = LDY. */
#else /* Word 0 - Little Endian */
        uint64_t l2ld_cmd              : 2;  /**< [  1:  0](R/W) Which NCB load command to use for reading gather pointers, context, history and input
                                                                 data.
                                                                 0x0 = LDD.
                                                                 0x1 = LDI.
                                                                 0x2 = LDE.
                                                                 0x3 = LDY. */
        uint64_t cbw_sty               : 1;  /**< [  2:  2](R/W) When set, a context cache block write will use STY. When clear, a context write will use STF. */
        uint64_t iqb_ldwb              : 1;  /**< [  3:  3](R/W) Load don't write back.

                                                                 0 = The hardware issues regular NCB loads towards the cache, which will cause the
                                                                 line to be written back before being replaced.

                                                                 1 = The hardware issues LDWB read-and-invalidate NCB commands towards the cache
                                                                 when fetching the last word of instructions; as a result the line will not be
                                                                 written back when replaced.  This improves performance, but software must not
                                                                 read the instructions after they are posted to the hardware.

                                                                 Partial cache line reads always use LDI. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_quex_gcfg_s cn; */
};
typedef union cavm_zip_quex_gcfg cavm_zip_quex_gcfg_t;

static inline uint64_t CAVM_ZIP_QUEX_GCFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_QUEX_GCFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838000001a00ll + 8ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838000001a00ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_QUEX_GCFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_QUEX_GCFG(a) cavm_zip_quex_gcfg_t
#define bustype_CAVM_ZIP_QUEX_GCFG(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_QUEX_GCFG(a) "ZIP_QUEX_GCFG"
#define device_bar_CAVM_ZIP_QUEX_GCFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_QUEX_GCFG(a) (a)
#define arguments_CAVM_ZIP_QUEX_GCFG(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_que#_map
 *
 * ZIP Queue Mapping Registers
 * These registers control how each instruction queue maps to ZIP cores.
 */
union cavm_zip_quex_map
{
    uint64_t u;
    struct cavm_zip_quex_map_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_12_63        : 52;
        uint64_t zce                   : 12; /**< [ 11:  0](R/W) ZIP core enable. Controls which ZIP cores can service the logical instruction queue.
                                                                 Setting [ZCE] to 0 effectively disables the queue from being served (however the
                                                                 instructions can still be fetched). Hardware automatically selects decompression
                                                                 cores for decompression, and compression cores for compression.
                                                                 _ZCE\<{a}\> = 1: ZIP core {a} can serve the queue. */
#else /* Word 0 - Little Endian */
        uint64_t zce                   : 12; /**< [ 11:  0](R/W) ZIP core enable. Controls which ZIP cores can service the logical instruction queue.
                                                                 Setting [ZCE] to 0 effectively disables the queue from being served (however the
                                                                 instructions can still be fetched). Hardware automatically selects decompression
                                                                 cores for decompression, and compression cores for compression.
                                                                 _ZCE\<{a}\> = 1: ZIP core {a} can serve the queue. */
        uint64_t reserved_12_63        : 52;
#endif /* Word 0 - End */
    } s;
    struct cavm_zip_quex_map_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t zce                   : 6;  /**< [  5:  0](R/W) ZIP core enable. Controls which ZIP cores can service the logical instruction queue.
                                                                 Setting [ZCE] to 0 effectively disables the queue from being served (however the
                                                                 instructions can still be fetched). Hardware automatically selects decompression
                                                                 cores for decompression, and compression cores for compression.
                                                                 _ZCE\<{a}\> = 1: ZIP core {a} can serve the queue. */
#else /* Word 0 - Little Endian */
        uint64_t zce                   : 6;  /**< [  5:  0](R/W) ZIP core enable. Controls which ZIP cores can service the logical instruction queue.
                                                                 Setting [ZCE] to 0 effectively disables the queue from being served (however the
                                                                 instructions can still be fetched). Hardware automatically selects decompression
                                                                 cores for decompression, and compression cores for compression.
                                                                 _ZCE\<{a}\> = 1: ZIP core {a} can serve the queue. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } cn8;
    /* struct cavm_zip_quex_map_s cn9; */
};
typedef union cavm_zip_quex_map cavm_zip_quex_map_t;

static inline uint64_t CAVM_ZIP_QUEX_MAP(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_QUEX_MAP(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838000001400ll + 8ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838000001400ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_QUEX_MAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_QUEX_MAP(a) cavm_zip_quex_map_t
#define bustype_CAVM_ZIP_QUEX_MAP(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_QUEX_MAP(a) "ZIP_QUEX_MAP"
#define device_bar_CAVM_ZIP_QUEX_MAP(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_QUEX_MAP(a) (a)
#define arguments_CAVM_ZIP_QUEX_MAP(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_que#_sbuf_ctl
 *
 * ZIP Queue Buffer Parameter Registers
 * These registers set the buffer parameters for the instruction queues. When quiescent (i.e.
 * outstanding doorbell count is 0), it is safe to rewrite this register to effectively reset the
 * command buffer state machine. These registers must be programmed before software programs the
 * corresponding ZIP_VQ()_SBUF_ADDR.
 */
union cavm_zip_quex_sbuf_ctl
{
    uint64_t u;
    struct cavm_zip_quex_sbuf_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t size                  : 13; /**< [ 44: 32](R/W) Command-buffer size, in number of 64-bit words per command buffer segment. */
        uint64_t inst_be               : 1;  /**< [ 31: 31](R/W) Instruction big endian control. When set, instructions, ZIP_HASH_S, and
                                                                 ZIP_ZRES_S are stored in big endian format in memory. */
        uint64_t inst_free             : 1;  /**< [ 30: 30](R/W) Instruction FPA free. When set, when ZIP reaches the end of an instruction
                                                                 chunk, that chunk will be freed to the FPA. */
        uint64_t reserved_24_29        : 6;
        uint64_t stream_id             : 8;  /**< [ 23: 16](R/W) Lower 8-bits of stream ID for this queue. */
        uint64_t reserved_12_15        : 4;
        uint64_t aura                  : 12; /**< [ 11:  0](R/W) Guest-aura for returning this queue's instruction-chunk buffers to FPA. Only
                                                                 used when [INST_FREE] is set. For the FPA to not discard the request,
                                                                 FPA_PF_MAP() must map [AURA] and ZIP_PF_QUE()_GMCTL[GMID] as valid. */
#else /* Word 0 - Little Endian */
        uint64_t aura                  : 12; /**< [ 11:  0](R/W) Guest-aura for returning this queue's instruction-chunk buffers to FPA. Only
                                                                 used when [INST_FREE] is set. For the FPA to not discard the request,
                                                                 FPA_PF_MAP() must map [AURA] and ZIP_PF_QUE()_GMCTL[GMID] as valid. */
        uint64_t reserved_12_15        : 4;
        uint64_t stream_id             : 8;  /**< [ 23: 16](R/W) Lower 8-bits of stream ID for this queue. */
        uint64_t reserved_24_29        : 6;
        uint64_t inst_free             : 1;  /**< [ 30: 30](R/W) Instruction FPA free. When set, when ZIP reaches the end of an instruction
                                                                 chunk, that chunk will be freed to the FPA. */
        uint64_t inst_be               : 1;  /**< [ 31: 31](R/W) Instruction big endian control. When set, instructions, ZIP_HASH_S, and
                                                                 ZIP_ZRES_S are stored in big endian format in memory. */
        uint64_t size                  : 13; /**< [ 44: 32](R/W) Command-buffer size, in number of 64-bit words per command buffer segment. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_quex_sbuf_ctl_s cn8; */
    struct cavm_zip_quex_sbuf_ctl_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_45_63        : 19;
        uint64_t size                  : 13; /**< [ 44: 32](R/W) Command-buffer size, in number of 64-bit words per command buffer segment. */
        uint64_t inst_be               : 1;  /**< [ 31: 31](R/W) Instruction big endian control. When set, instructions, ZIP_HASH_S, and
                                                                 ZIP_ZRES_S are stored in big endian format in memory. */
        uint64_t inst_free             : 1;  /**< [ 30: 30](RO) Reserved. */
        uint64_t reserved_24_29        : 6;
        uint64_t stream_id             : 8;  /**< [ 23: 16](R/W) Lower 8-bits of stream ID for this queue. */
        uint64_t reserved_0_15         : 16;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_15         : 16;
        uint64_t stream_id             : 8;  /**< [ 23: 16](R/W) Lower 8-bits of stream ID for this queue. */
        uint64_t reserved_24_29        : 6;
        uint64_t inst_free             : 1;  /**< [ 30: 30](RO) Reserved. */
        uint64_t inst_be               : 1;  /**< [ 31: 31](R/W) Instruction big endian control. When set, instructions, ZIP_HASH_S, and
                                                                 ZIP_ZRES_S are stored in big endian format in memory. */
        uint64_t size                  : 13; /**< [ 44: 32](R/W) Command-buffer size, in number of 64-bit words per command buffer segment. */
        uint64_t reserved_45_63        : 19;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_quex_sbuf_ctl cavm_zip_quex_sbuf_ctl_t;

static inline uint64_t CAVM_ZIP_QUEX_SBUF_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_QUEX_SBUF_CTL(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838000001200ll + 8ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838000001200ll + 8ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_QUEX_SBUF_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_QUEX_SBUF_CTL(a) cavm_zip_quex_sbuf_ctl_t
#define bustype_CAVM_ZIP_QUEX_SBUF_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_QUEX_SBUF_CTL(a) "ZIP_QUEX_SBUF_CTL"
#define device_bar_CAVM_ZIP_QUEX_SBUF_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_QUEX_SBUF_CTL(a) (a)
#define arguments_CAVM_ZIP_QUEX_SBUF_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_que_pri
 *
 * ZIP Queue Priority Register
 * This registers defines the priority between instruction queues.
 */
union cavm_zip_que_pri
{
    uint64_t u;
    struct cavm_zip_que_pri_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t pri                   : 8;  /**< [  7:  0](R/W) Queue priority. Each bit corresponds to a queue:
                                                                 PRI[{a}]=1: Queue {a} has higher priority. Round-robin between higher priority queues.
                                                                 PRI[{a}]=0: Queue {a} has lower priority. Round-robin between lower priority queues. */
#else /* Word 0 - Little Endian */
        uint64_t pri                   : 8;  /**< [  7:  0](R/W) Queue priority. Each bit corresponds to a queue:
                                                                 PRI[{a}]=1: Queue {a} has higher priority. Round-robin between higher priority queues.
                                                                 PRI[{a}]=0: Queue {a} has lower priority. Round-robin between lower priority queues. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_que_pri_s cn; */
};
typedef union cavm_zip_que_pri cavm_zip_que_pri_t;

#define CAVM_ZIP_QUE_PRI CAVM_ZIP_QUE_PRI_FUNC()
static inline uint64_t CAVM_ZIP_QUE_PRI_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_QUE_PRI_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000508ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000508ll;
    __cavm_csr_fatal("ZIP_QUE_PRI", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_QUE_PRI cavm_zip_que_pri_t
#define bustype_CAVM_ZIP_QUE_PRI CSR_TYPE_NCB
#define basename_CAVM_ZIP_QUE_PRI "ZIP_QUE_PRI"
#define device_bar_CAVM_ZIP_QUE_PRI 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_QUE_PRI 0
#define arguments_CAVM_ZIP_QUE_PRI -1,-1,-1,-1

/**
 * Register (NCB) zip_que_reset
 *
 * INTERNAL: ZIP Queue Reset Register
 *
 * This register resets the ZIP instruction queues.
 */
union cavm_zip_que_reset
{
    uint64_t u;
    struct cavm_zip_que_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t reset                 : 8;  /**< [  7:  0](R/W) When set, the corresponding queue will be put into reset. When clear, the queue is out of
                                                                 reset. Bit[\<a\>] resets queue \<a\>. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 8;  /**< [  7:  0](R/W) When set, the corresponding queue will be put into reset. When clear, the queue is out of
                                                                 reset. Bit[\<a\>] resets queue \<a\>. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_que_reset_s cn; */
};
typedef union cavm_zip_que_reset cavm_zip_que_reset_t;

#define CAVM_ZIP_QUE_RESET CAVM_ZIP_QUE_RESET_FUNC()
static inline uint64_t CAVM_ZIP_QUE_RESET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_QUE_RESET_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000400ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000400ll;
    __cavm_csr_fatal("ZIP_QUE_RESET", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_QUE_RESET cavm_zip_que_reset_t
#define bustype_CAVM_ZIP_QUE_RESET CSR_TYPE_NCB
#define basename_CAVM_ZIP_QUE_RESET "ZIP_QUE_RESET"
#define device_bar_CAVM_ZIP_QUE_RESET 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_QUE_RESET 0
#define arguments_CAVM_ZIP_QUE_RESET -1,-1,-1,-1

/**
 * Register (NCB) zip_throttle
 *
 * ZIP Throttle Register
 * This register controls the maximum number of in-flight NCB data fetch transactions. Writing 0
 * to this register causes the ZIP instruction execution unit to temporarily suspend
 * NCB read accesses;
 * this is not recommended for normal operation, but may be useful for diagnostics.
 */
union cavm_zip_throttle
{
    uint64_t u;
    struct cavm_zip_throttle_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t ld_infl               : 7;  /**< [  6:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values may improve
                                                                 ZIP performance but may starve other devices on the same NCB. */
#else /* Word 0 - Little Endian */
        uint64_t ld_infl               : 7;  /**< [  6:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values may improve
                                                                 ZIP performance but may starve other devices on the same NCB. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    struct cavm_zip_throttle_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_6_63         : 58;
        uint64_t ld_infl               : 6;  /**< [  5:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values may improve
                                                                 ZIP performance but may starve other devices on the same NCB. */
#else /* Word 0 - Little Endian */
        uint64_t ld_infl               : 6;  /**< [  5:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values may improve
                                                                 ZIP performance but may starve other devices on the same NCB. */
        uint64_t reserved_6_63         : 58;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_zip_throttle_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t ld_infl               : 7;  /**< [  6:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values may improve
                                                                 ZIP performance but may starve other devices on the same NCB. Maximum allowed value is 0x40. */
#else /* Word 0 - Little Endian */
        uint64_t ld_infl               : 7;  /**< [  6:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values may improve
                                                                 ZIP performance but may starve other devices on the same NCB. Maximum allowed value is 0x40. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_throttle cavm_zip_throttle_t;

#define CAVM_ZIP_THROTTLE CAVM_ZIP_THROTTLE_FUNC()
static inline uint64_t CAVM_ZIP_THROTTLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_THROTTLE_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN83XX))
        return 0x838000000010ll;
    if (cavm_is_model(OCTEONTX_CN96XX))
        return 0x838000000010ll;
    __cavm_csr_fatal("ZIP_THROTTLE", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_THROTTLE cavm_zip_throttle_t
#define bustype_CAVM_ZIP_THROTTLE CSR_TYPE_NCB
#define basename_CAVM_ZIP_THROTTLE "ZIP_THROTTLE"
#define device_bar_CAVM_ZIP_THROTTLE 0x0 /* PF_BAR0 */
#define busnum_CAVM_ZIP_THROTTLE 0
#define arguments_CAVM_ZIP_THROTTLE -1,-1,-1,-1

/**
 * Register (NCB) zip_vf#_misc_ena_w1c
 *
 * ZIP VF Queue Misc Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_zip_vfx_misc_ena_w1c
{
    uint64_t u;
    struct cavm_zip_vfx_misc_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[CTO]. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t mdbe                  : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[MDBE]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[DOVF]. */
#else /* Word 0 - Little Endian */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t mdbe                  : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[MDBE]. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[CTO]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vfx_misc_ena_w1c_s cn8; */
    struct cavm_zip_vfx_misc_ena_w1c_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[CTO]. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[DOVF]. */
#else /* Word 0 - Little Endian */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t reserved_4            : 1;
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for ZIP_VF(0..7)_MISC_INT[CTO]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_vfx_misc_ena_w1c cavm_zip_vfx_misc_ena_w1c_t;

static inline uint64_t CAVM_ZIP_VFX_MISC_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VFX_MISC_ENA_W1C(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838020000330ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838020000330ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_VFX_MISC_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VFX_MISC_ENA_W1C(a) cavm_zip_vfx_misc_ena_w1c_t
#define bustype_CAVM_ZIP_VFX_MISC_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VFX_MISC_ENA_W1C(a) "ZIP_VFX_MISC_ENA_W1C"
#define device_bar_CAVM_ZIP_VFX_MISC_ENA_W1C(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VFX_MISC_ENA_W1C(a) (a)
#define arguments_CAVM_ZIP_VFX_MISC_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_vf#_misc_ena_w1s
 *
 * ZIP VF Queue Misc Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_zip_vfx_misc_ena_w1s
{
    uint64_t u;
    struct cavm_zip_vfx_misc_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[CTO]. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t mdbe                  : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[MDBE]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[DOVF]. */
#else /* Word 0 - Little Endian */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t mdbe                  : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[MDBE]. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[CTO]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vfx_misc_ena_w1s_s cn8; */
    struct cavm_zip_vfx_misc_ena_w1s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[CTO]. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[DOVF]. */
#else /* Word 0 - Little Endian */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t reserved_4            : 1;
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for ZIP_VF(0..7)_MISC_INT[CTO]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_vfx_misc_ena_w1s cavm_zip_vfx_misc_ena_w1s_t;

static inline uint64_t CAVM_ZIP_VFX_MISC_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VFX_MISC_ENA_W1S(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838020000320ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838020000320ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_VFX_MISC_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VFX_MISC_ENA_W1S(a) cavm_zip_vfx_misc_ena_w1s_t
#define bustype_CAVM_ZIP_VFX_MISC_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VFX_MISC_ENA_W1S(a) "ZIP_VFX_MISC_ENA_W1S"
#define device_bar_CAVM_ZIP_VFX_MISC_ENA_W1S(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VFX_MISC_ENA_W1S(a) (a)
#define arguments_CAVM_ZIP_VFX_MISC_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_vf#_misc_int
 *
 * ZIP Queue Error Interrupt Register
 * These registers contain the per-queue error interrupts.
 */
union cavm_zip_vfx_misc_int
{
    uint64_t u;
    struct cavm_zip_vfx_misc_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1C/H) Core time out detected. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1C/H) PF to VF mailbox interrupt. Set when ZIP_VF()_PF_MBOX(0) is written. */
        uint64_t mdbe                  : 1;  /**< [  4:  4](R/W1C/H) SRAM ECC double-bit error. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) NCB write response error. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1C/H) NCB read response error. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1C/H) Instruction NCB read response error. */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1C/H) Doorbell overflow. */
#else /* Word 0 - Little Endian */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1C/H) Doorbell overflow. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1C/H) Instruction NCB read response error. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1C/H) NCB read response error. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) NCB write response error. */
        uint64_t mdbe                  : 1;  /**< [  4:  4](R/W1C/H) SRAM ECC double-bit error. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1C/H) PF to VF mailbox interrupt. Set when ZIP_VF()_PF_MBOX(0) is written. */
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1C/H) Core time out detected. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vfx_misc_int_s cn8; */
    struct cavm_zip_vfx_misc_int_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1C/H) Core time out detected. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1C/H) PF to VF mailbox interrupt. Set when ZIP_VF()_PF_MBOX(0) is written. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) NCB write response error. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1C/H) NCB read response error. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1C/H) Instruction NCB read response error. */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1C/H) Doorbell overflow. */
#else /* Word 0 - Little Endian */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1C/H) Doorbell overflow. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1C/H) Instruction NCB read response error. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1C/H) NCB read response error. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) NCB write response error. */
        uint64_t reserved_4            : 1;
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1C/H) PF to VF mailbox interrupt. Set when ZIP_VF()_PF_MBOX(0) is written. */
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1C/H) Core time out detected. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_vfx_misc_int cavm_zip_vfx_misc_int_t;

static inline uint64_t CAVM_ZIP_VFX_MISC_INT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VFX_MISC_INT(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838020000300ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838020000300ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_VFX_MISC_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VFX_MISC_INT(a) cavm_zip_vfx_misc_int_t
#define bustype_CAVM_ZIP_VFX_MISC_INT(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VFX_MISC_INT(a) "ZIP_VFX_MISC_INT"
#define device_bar_CAVM_ZIP_VFX_MISC_INT(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VFX_MISC_INT(a) (a)
#define arguments_CAVM_ZIP_VFX_MISC_INT(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_vf#_misc_int_w1s
 *
 * ZIP VF Queue Misc Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_zip_vfx_misc_int_w1s
{
    uint64_t u;
    struct cavm_zip_vfx_misc_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[CTO]. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t mdbe                  : 1;  /**< [  4:  4](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[MDBE]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[DOVF]. */
#else /* Word 0 - Little Endian */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t mdbe                  : 1;  /**< [  4:  4](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[MDBE]. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[CTO]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vfx_misc_int_w1s_s cn8; */
    struct cavm_zip_vfx_misc_int_w1s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[CTO]. */
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[DOVF]. */
#else /* Word 0 - Little Endian */
        uint64_t dovf                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[IRDE]. */
        uint64_t nrrp                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[NRRP]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[NWRP]. */
        uint64_t reserved_4            : 1;
        uint64_t mbox                  : 1;  /**< [  5:  5](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[MBOX]. */
        uint64_t cto                   : 1;  /**< [  6:  6](R/W1S/H) Reads or sets ZIP_VF(0..7)_MISC_INT[CTO]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_vfx_misc_int_w1s cavm_zip_vfx_misc_int_w1s_t;

static inline uint64_t CAVM_ZIP_VFX_MISC_INT_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VFX_MISC_INT_W1S(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838020000310ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838020000310ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_VFX_MISC_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VFX_MISC_INT_W1S(a) cavm_zip_vfx_misc_int_w1s_t
#define bustype_CAVM_ZIP_VFX_MISC_INT_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VFX_MISC_INT_W1S(a) "ZIP_VFX_MISC_INT_W1S"
#define device_bar_CAVM_ZIP_VFX_MISC_INT_W1S(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VFX_MISC_INT_W1S(a) (a)
#define arguments_CAVM_ZIP_VFX_MISC_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_vf#_msix_pba#
 *
 * ZIP VF MSI-X Pending-Bit-Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the ZIP_VF_INT_VEC_E
 * enumeration.
 */
union cavm_zip_vfx_msix_pbax
{
    uint64_t u;
    struct cavm_zip_vfx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated ZIP_PF_MSIX_VEC()_CTL, enumerated by ZIP_PF_INT_VEC_E.
                                                                 Bits that have no associated ZIP_PF_INT_VEC_E are 0. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated ZIP_PF_MSIX_VEC()_CTL, enumerated by ZIP_PF_INT_VEC_E.
                                                                 Bits that have no associated ZIP_PF_INT_VEC_E are 0. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vfx_msix_pbax_s cn; */
};
typedef union cavm_zip_vfx_msix_pbax cavm_zip_vfx_msix_pbax_t;

static inline uint64_t CAVM_ZIP_VFX_MSIX_PBAX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VFX_MSIX_PBAX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && ((a<=7) && (b==0)))
        return 0x8380300f0000ll + 0x100000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a<=7) && (b==0)))
        return 0x8380300f0000ll + 0x100000ll * ((a) & 0x7) + 8ll * ((b) & 0x0);
    __cavm_csr_fatal("ZIP_VFX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VFX_MSIX_PBAX(a,b) cavm_zip_vfx_msix_pbax_t
#define bustype_CAVM_ZIP_VFX_MSIX_PBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VFX_MSIX_PBAX(a,b) "ZIP_VFX_MSIX_PBAX"
#define device_bar_CAVM_ZIP_VFX_MSIX_PBAX(a,b) 0x4 /* VF_BAR4 */
#define busnum_CAVM_ZIP_VFX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_ZIP_VFX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip_vf#_msix_vec#_addr
 *
 * ZIP VF MSI-X Vector-Table Address Registers
 * This register is the MSI-X vector table, indexed by the ZIP_VF_INT_VEC_E enumeration.
 */
union cavm_zip_vfx_msix_vecx_addr
{
    uint64_t u;
    struct cavm_zip_vfx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](RAZ) Secure vector. Zero as not supported on a per-vector basis for VFs; use
                                                                 PCCPF_ZIP_VSEC_SCTL[MSIX_SEC] instead (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]). */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](RAZ) Secure vector. Zero as not supported on a per-vector basis for VFs; use
                                                                 PCCPF_ZIP_VSEC_SCTL[MSIX_SEC] instead (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]). */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    struct cavm_zip_vfx_msix_vecx_addr_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t addr                  : 47; /**< [ 48:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](RAZ) Secure vector. Zero as not supported on a per-vector basis for VFs; use
                                                                 PCCPF_ZIP_VSEC_SCTL[MSIX_SEC] instead (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]). */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](RAZ) Secure vector. Zero as not supported on a per-vector basis for VFs; use
                                                                 PCCPF_ZIP_VSEC_SCTL[MSIX_SEC] instead (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]). */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 47; /**< [ 48:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } cn8;
    /* struct cavm_zip_vfx_msix_vecx_addr_s cn9; */
};
typedef union cavm_zip_vfx_msix_vecx_addr cavm_zip_vfx_msix_vecx_addr_t;

static inline uint64_t CAVM_ZIP_VFX_MSIX_VECX_ADDR(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VFX_MSIX_VECX_ADDR(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && ((a<=7) && (b<=1)))
        return 0x838030000000ll + 0x100000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a<=7) && (b<=1)))
        return 0x838030000000ll + 0x100000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("ZIP_VFX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VFX_MSIX_VECX_ADDR(a,b) cavm_zip_vfx_msix_vecx_addr_t
#define bustype_CAVM_ZIP_VFX_MSIX_VECX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VFX_MSIX_VECX_ADDR(a,b) "ZIP_VFX_MSIX_VECX_ADDR"
#define device_bar_CAVM_ZIP_VFX_MSIX_VECX_ADDR(a,b) 0x4 /* VF_BAR4 */
#define busnum_CAVM_ZIP_VFX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_ZIP_VFX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip_vf#_msix_vec#_ctl
 *
 * ZIP VF MSI-X Vector-Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the ZIP_VF_INT_VEC_E enumeration.
 */
union cavm_zip_vfx_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_zip_vfx_msix_vecx_ctl_s
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
    struct cavm_zip_vfx_msix_vecx_ctl_cn8
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
    /* struct cavm_zip_vfx_msix_vecx_ctl_s cn9; */
};
typedef union cavm_zip_vfx_msix_vecx_ctl cavm_zip_vfx_msix_vecx_ctl_t;

static inline uint64_t CAVM_ZIP_VFX_MSIX_VECX_CTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VFX_MSIX_VECX_CTL(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && ((a<=7) && (b<=1)))
        return 0x838030000008ll + 0x100000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a<=7) && (b<=1)))
        return 0x838030000008ll + 0x100000ll * ((a) & 0x7) + 0x10ll * ((b) & 0x1);
    __cavm_csr_fatal("ZIP_VFX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VFX_MSIX_VECX_CTL(a,b) cavm_zip_vfx_msix_vecx_ctl_t
#define bustype_CAVM_ZIP_VFX_MSIX_VECX_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VFX_MSIX_VECX_CTL(a,b) "ZIP_VFX_MSIX_VECX_CTL"
#define device_bar_CAVM_ZIP_VFX_MSIX_VECX_CTL(a,b) 0x4 /* VF_BAR4 */
#define busnum_CAVM_ZIP_VFX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_ZIP_VFX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip_vf#_pf_mbox#
 *
 * ZIP VF/PF Mailbox Registers
 */
union cavm_zip_vfx_pf_mboxx
{
    uint64_t u;
    struct cavm_zip_vfx_pf_mboxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These VF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. The PF may access the same storage using ZIP_PF_VF()_MBOX(). MBOX(0) is
                                                                 typically used for PF to VF signaling, MBOX(1) for VF to PF. Writing
                                                                 ZIP_VF()_PF_MBOX(1) (but not ZIP_PF_VF()_MBOX(1)) will set the
                                                                 corresponding ZIP_PF_MBOX_INT() bit, which if appropriately enabled will send an
                                                                 interrupt to the PF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These VF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. The PF may access the same storage using ZIP_PF_VF()_MBOX(). MBOX(0) is
                                                                 typically used for PF to VF signaling, MBOX(1) for VF to PF. Writing
                                                                 ZIP_VF()_PF_MBOX(1) (but not ZIP_PF_VF()_MBOX(1)) will set the
                                                                 corresponding ZIP_PF_MBOX_INT() bit, which if appropriately enabled will send an
                                                                 interrupt to the PF. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vfx_pf_mboxx_s cn; */
};
typedef union cavm_zip_vfx_pf_mboxx cavm_zip_vfx_pf_mboxx_t;

static inline uint64_t CAVM_ZIP_VFX_PF_MBOXX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VFX_PF_MBOXX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && ((a<=7) && (b<=1)))
        return 0x838020000400ll + 0x100000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    if (cavm_is_model(OCTEONTX_CN96XX) && ((a<=7) && (b<=1)))
        return 0x838020000400ll + 0x100000ll * ((a) & 0x7) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("ZIP_VFX_PF_MBOXX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VFX_PF_MBOXX(a,b) cavm_zip_vfx_pf_mboxx_t
#define bustype_CAVM_ZIP_VFX_PF_MBOXX(a,b) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VFX_PF_MBOXX(a,b) "ZIP_VFX_PF_MBOXX"
#define device_bar_CAVM_ZIP_VFX_PF_MBOXX(a,b) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VFX_PF_MBOXX(a,b) (a)
#define arguments_CAVM_ZIP_VFX_PF_MBOXX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) zip_vq#_done
 *
 * ZIP VF Queue Done Count Registers
 * These registers contain the per-queue instruction done count.
 */
union cavm_zip_vqx_done
{
    uint64_t u;
    struct cavm_zip_vqx_done_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t done                  : 20; /**< [ 19:  0](R/W/H) Done count. When ZIP_INST_S[DONEINT] set and that instruction completes,
                                                                 ZIP_VQ()_DONE[DONE] is incremented. Writes to this field are for diagnostic use only;
                                                                 instead software writes ZIP_VQ()_DONE_ACK[DONE_ACK] with the number of decrements for
                                                                 this field.

                                                                 Interrupts are sent as follows:

                                                                 * When ZIP_VQ()_DONE[DONE] = 0, then no results are pending, the interrupt coalescing
                                                                 timer is held to zero, and an interrupt is not sent.

                                                                 * When ZIP_VQ()_DONE[DONE] != 0, then the interrupt coalescing timer counts. If
                                                                 the counter is \>= ZIP_VQ()_DONE_WAIT[TIME_WAIT]*1024, or ZIP_VQ()_DONE[DONE]
                                                                 \>= ZIP_VQ()_DONE_WAIT[NUM_WAIT], i.e. enough time has passed or enough results
                                                                 have arrived, then the interrupt is sent.  Otherwise, it is not sent due to
                                                                 coalescing.

                                                                 * When ZIP_VQ()_DONE_ACK is written, the interrupt coalescing timer restarts.
                                                                 Note that after decrementing, this interrupt equation is recomputed.  For example, if
                                                                 ZIP_VQ()_DONE[DONE] \>= ZIP_VQ()_DONE_WAIT[NUM_WAIT] and the timer is zero, the
                                                                 interrupt will be resent immediately.  This covers the race case between software
                                                                 acknowledging an interrupt and a result returning.

                                                                 * When ZIP_VQ()_DONE_ENA_W1S[DONE_ENA] = 0, interrupts are not sent, but the counting
                                                                 described above still occurs.

                                                                 Since ZIP instructions within a queue can complete out-of-order when the queue is mapped
                                                                 to multiple ZIP engines, if software is using completion interrupts the suggested scheme
                                                                 is to request a DONEINT on each request, and when an interrupt arrives perform a "greedy"
                                                                 scan for completions; even if a later command is acknowledged first this will not result
                                                                 in missing a completion. Software could also use ZIP_ZRES_S[DONEINT] to check when
                                                                 instruction needs to be counted into ZIP_VQ()_DONE/ZIP_VQ()_DONE_ACK.

                                                                 Software is responsible for making sure [DONE] does not overflow; for example by
                                                                 insuring there are not more than 2^20-1 instructions in flight that may request
                                                                 interrupts. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 20; /**< [ 19:  0](R/W/H) Done count. When ZIP_INST_S[DONEINT] set and that instruction completes,
                                                                 ZIP_VQ()_DONE[DONE] is incremented. Writes to this field are for diagnostic use only;
                                                                 instead software writes ZIP_VQ()_DONE_ACK[DONE_ACK] with the number of decrements for
                                                                 this field.

                                                                 Interrupts are sent as follows:

                                                                 * When ZIP_VQ()_DONE[DONE] = 0, then no results are pending, the interrupt coalescing
                                                                 timer is held to zero, and an interrupt is not sent.

                                                                 * When ZIP_VQ()_DONE[DONE] != 0, then the interrupt coalescing timer counts. If
                                                                 the counter is \>= ZIP_VQ()_DONE_WAIT[TIME_WAIT]*1024, or ZIP_VQ()_DONE[DONE]
                                                                 \>= ZIP_VQ()_DONE_WAIT[NUM_WAIT], i.e. enough time has passed or enough results
                                                                 have arrived, then the interrupt is sent.  Otherwise, it is not sent due to
                                                                 coalescing.

                                                                 * When ZIP_VQ()_DONE_ACK is written, the interrupt coalescing timer restarts.
                                                                 Note that after decrementing, this interrupt equation is recomputed.  For example, if
                                                                 ZIP_VQ()_DONE[DONE] \>= ZIP_VQ()_DONE_WAIT[NUM_WAIT] and the timer is zero, the
                                                                 interrupt will be resent immediately.  This covers the race case between software
                                                                 acknowledging an interrupt and a result returning.

                                                                 * When ZIP_VQ()_DONE_ENA_W1S[DONE_ENA] = 0, interrupts are not sent, but the counting
                                                                 described above still occurs.

                                                                 Since ZIP instructions within a queue can complete out-of-order when the queue is mapped
                                                                 to multiple ZIP engines, if software is using completion interrupts the suggested scheme
                                                                 is to request a DONEINT on each request, and when an interrupt arrives perform a "greedy"
                                                                 scan for completions; even if a later command is acknowledged first this will not result
                                                                 in missing a completion. Software could also use ZIP_ZRES_S[DONEINT] to check when
                                                                 instruction needs to be counted into ZIP_VQ()_DONE/ZIP_VQ()_DONE_ACK.

                                                                 Software is responsible for making sure [DONE] does not overflow; for example by
                                                                 insuring there are not more than 2^20-1 instructions in flight that may request
                                                                 interrupts. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vqx_done_s cn8; */
    struct cavm_zip_vqx_done_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t done                  : 20; /**< [ 19:  0](R/W/H) Done count. When ZIP_INST_S[DONEINT] set and that instruction completes,
                                                                 ZIP_VQ()_DONE[DONE] is incremented. Writes to this field are for diagnostic use only;
                                                                 instead software writes ZIP_VQ()_DONE_ACK[DONE_ACK] with the number of decrements for
                                                                 this field.

                                                                 Interrupts are sent as follows:

                                                                 * When ZIP_VQ()_DONE[DONE] = 0, then no results are pending, the interrupt coalescing
                                                                 timer is held to zero, and an interrupt is not sent.

                                                                 * When ZIP_VQ()_DONE[DONE] != 0, then the interrupt coalescing timer counts. If
                                                                 the counter is \>= ZIP_VQ()_DONE_WAIT[TIME_WAIT] microseconds, or ZIP_VQ()_DONE[DONE]
                                                                 \>= ZIP_VQ()_DONE_WAIT[NUM_WAIT], i.e. enough time has passed or enough results
                                                                 have arrived, then the interrupt is sent.  Otherwise, it is not sent due to
                                                                 coalescing.

                                                                 * When ZIP_VQ()_DONE_ACK is written, the interrupt coalescing timer restarts.
                                                                 Note that after decrementing, this interrupt equation is recomputed.  For example, if
                                                                 ZIP_VQ()_DONE[DONE] \>= ZIP_VQ()_DONE_WAIT[NUM_WAIT] and the timer is zero, the
                                                                 interrupt will be resent immediately.  This covers the race case between software
                                                                 acknowledging an interrupt and a result returning.

                                                                 * When ZIP_VQ()_DONE_ENA_W1S[DONE_ENA] = 0, interrupts are not sent, but the counting
                                                                 described above still occurs.

                                                                 Since ZIP instructions within a queue can complete out-of-order when the queue is mapped
                                                                 to multiple ZIP engines, if software is using completion interrupts the suggested scheme
                                                                 is to request a DONEINT on each request, and when an interrupt arrives perform a "greedy"
                                                                 scan for completions; even if a later command is acknowledged first this will not result
                                                                 in missing a completion. Software could also use ZIP_ZRES_S[DONEINT] to check when
                                                                 instruction needs to be counted into ZIP_VQ()_DONE/ZIP_VQ()_DONE_ACK.

                                                                 Software is responsible for making sure [DONE] does not overflow; for example by
                                                                 insuring there are not more than 2^20-1 instructions in flight that may request
                                                                 interrupts. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 20; /**< [ 19:  0](R/W/H) Done count. When ZIP_INST_S[DONEINT] set and that instruction completes,
                                                                 ZIP_VQ()_DONE[DONE] is incremented. Writes to this field are for diagnostic use only;
                                                                 instead software writes ZIP_VQ()_DONE_ACK[DONE_ACK] with the number of decrements for
                                                                 this field.

                                                                 Interrupts are sent as follows:

                                                                 * When ZIP_VQ()_DONE[DONE] = 0, then no results are pending, the interrupt coalescing
                                                                 timer is held to zero, and an interrupt is not sent.

                                                                 * When ZIP_VQ()_DONE[DONE] != 0, then the interrupt coalescing timer counts. If
                                                                 the counter is \>= ZIP_VQ()_DONE_WAIT[TIME_WAIT] microseconds, or ZIP_VQ()_DONE[DONE]
                                                                 \>= ZIP_VQ()_DONE_WAIT[NUM_WAIT], i.e. enough time has passed or enough results
                                                                 have arrived, then the interrupt is sent.  Otherwise, it is not sent due to
                                                                 coalescing.

                                                                 * When ZIP_VQ()_DONE_ACK is written, the interrupt coalescing timer restarts.
                                                                 Note that after decrementing, this interrupt equation is recomputed.  For example, if
                                                                 ZIP_VQ()_DONE[DONE] \>= ZIP_VQ()_DONE_WAIT[NUM_WAIT] and the timer is zero, the
                                                                 interrupt will be resent immediately.  This covers the race case between software
                                                                 acknowledging an interrupt and a result returning.

                                                                 * When ZIP_VQ()_DONE_ENA_W1S[DONE_ENA] = 0, interrupts are not sent, but the counting
                                                                 described above still occurs.

                                                                 Since ZIP instructions within a queue can complete out-of-order when the queue is mapped
                                                                 to multiple ZIP engines, if software is using completion interrupts the suggested scheme
                                                                 is to request a DONEINT on each request, and when an interrupt arrives perform a "greedy"
                                                                 scan for completions; even if a later command is acknowledged first this will not result
                                                                 in missing a completion. Software could also use ZIP_ZRES_S[DONEINT] to check when
                                                                 instruction needs to be counted into ZIP_VQ()_DONE/ZIP_VQ()_DONE_ACK.

                                                                 Software is responsible for making sure [DONE] does not overflow; for example by
                                                                 insuring there are not more than 2^20-1 instructions in flight that may request
                                                                 interrupts. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_vqx_done cavm_zip_vqx_done_t;

static inline uint64_t CAVM_ZIP_VQX_DONE(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VQX_DONE(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838020000100ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838020000100ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_VQX_DONE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VQX_DONE(a) cavm_zip_vqx_done_t
#define bustype_CAVM_ZIP_VQX_DONE(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VQX_DONE(a) "ZIP_VQX_DONE"
#define device_bar_CAVM_ZIP_VQX_DONE(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VQX_DONE(a) (a)
#define arguments_CAVM_ZIP_VQX_DONE(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_vq#_done_ack
 *
 * ZIP VF Queue Done Count Ack Registers
 * This register is written by software to acknowledge interrupts.
 */
union cavm_zip_vqx_done_ack
{
    uint64_t u;
    struct cavm_zip_vqx_done_ack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t done_ack              : 20; /**< [ 19:  0](R/W/H) Number of decrements to ZIP_VQ()_DONE[DONE]. When read, returns ZIP_VQ()_DONE[DONE].

                                                                 Written by software to acknowledge interrupts. If ZIP_VQ()_DONE[DONE] is still
                                                                 nonzero, the interrupt will be re-sent if the conditions described in
                                                                 ZIP_VQ()_DONE[DONE] are satified. */
#else /* Word 0 - Little Endian */
        uint64_t done_ack              : 20; /**< [ 19:  0](R/W/H) Number of decrements to ZIP_VQ()_DONE[DONE]. When read, returns ZIP_VQ()_DONE[DONE].

                                                                 Written by software to acknowledge interrupts. If ZIP_VQ()_DONE[DONE] is still
                                                                 nonzero, the interrupt will be re-sent if the conditions described in
                                                                 ZIP_VQ()_DONE[DONE] are satified. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vqx_done_ack_s cn; */
};
typedef union cavm_zip_vqx_done_ack cavm_zip_vqx_done_ack_t;

static inline uint64_t CAVM_ZIP_VQX_DONE_ACK(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VQX_DONE_ACK(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838020000110ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838020000110ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_VQX_DONE_ACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VQX_DONE_ACK(a) cavm_zip_vqx_done_ack_t
#define bustype_CAVM_ZIP_VQX_DONE_ACK(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VQX_DONE_ACK(a) "ZIP_VQX_DONE_ACK"
#define device_bar_CAVM_ZIP_VQX_DONE_ACK(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VQX_DONE_ACK(a) (a)
#define arguments_CAVM_ZIP_VQX_DONE_ACK(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_vq#_done_ena_w1c
 *
 * ZIP VF Queue Done Interrupt Enable Clear Registers
 * Write 1 to these registers to disable the DONEINT interrupt for the queue.
 */
union cavm_zip_vqx_done_ena_w1c
{
    uint64_t u;
    struct cavm_zip_vqx_done_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done_ena              : 1;  /**< [  0:  0](R/W1C/H) Writing 1 will disable DONEINT for this queue. Writing 0 has no effect.
                                                                 A read will return the DONEINT enable bit. */
#else /* Word 0 - Little Endian */
        uint64_t done_ena              : 1;  /**< [  0:  0](R/W1C/H) Writing 1 will disable DONEINT for this queue. Writing 0 has no effect.
                                                                 A read will return the DONEINT enable bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vqx_done_ena_w1c_s cn; */
};
typedef union cavm_zip_vqx_done_ena_w1c cavm_zip_vqx_done_ena_w1c_t;

static inline uint64_t CAVM_ZIP_VQX_DONE_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VQX_DONE_ENA_W1C(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838020000130ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838020000130ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_VQX_DONE_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VQX_DONE_ENA_W1C(a) cavm_zip_vqx_done_ena_w1c_t
#define bustype_CAVM_ZIP_VQX_DONE_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VQX_DONE_ENA_W1C(a) "ZIP_VQX_DONE_ENA_W1C"
#define device_bar_CAVM_ZIP_VQX_DONE_ENA_W1C(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VQX_DONE_ENA_W1C(a) (a)
#define arguments_CAVM_ZIP_VQX_DONE_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_vq#_done_ena_w1s
 *
 * ZIP VF Queue Done Interrupt Enable Set Registers
 * Write 1 to these registers to enable the DONEINT interrupt for the queue.
 */
union cavm_zip_vqx_done_ena_w1s
{
    uint64_t u;
    struct cavm_zip_vqx_done_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done_ena              : 1;  /**< [  0:  0](R/W1S/H) Writing a 1 will enable DONEINT for this queue. Writing a 0 has no effect.
                                                                 A read will return the DONEINT enable bit. */
#else /* Word 0 - Little Endian */
        uint64_t done_ena              : 1;  /**< [  0:  0](R/W1S/H) Writing a 1 will enable DONEINT for this queue. Writing a 0 has no effect.
                                                                 A read will return the DONEINT enable bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vqx_done_ena_w1s_s cn; */
};
typedef union cavm_zip_vqx_done_ena_w1s cavm_zip_vqx_done_ena_w1s_t;

static inline uint64_t CAVM_ZIP_VQX_DONE_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VQX_DONE_ENA_W1S(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838020000120ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838020000120ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_VQX_DONE_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VQX_DONE_ENA_W1S(a) cavm_zip_vqx_done_ena_w1s_t
#define bustype_CAVM_ZIP_VQX_DONE_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VQX_DONE_ENA_W1S(a) "ZIP_VQX_DONE_ENA_W1S"
#define device_bar_CAVM_ZIP_VQX_DONE_ENA_W1S(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VQX_DONE_ENA_W1S(a) (a)
#define arguments_CAVM_ZIP_VQX_DONE_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_vq#_done_wait
 *
 * ZIP VF Queue Done Interrupt Coalescing Wait Registers
 * Specifies the per queue interrupt coalescing settings.
 */
union cavm_zip_vqx_done_wait
{
    uint64_t u;
    struct cavm_zip_vqx_done_wait_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t time_wait             : 16; /**< [ 47: 32](R/W) Timer hold-off.  When ZIP_VQ()_DONE[DONE] = 0, or ZIP_VQ()_DONE_ACK is written a
                                                                 timer is cleared.  When the timer reaches [TIME_WAIT]*1024 then interrupt coalescing ends;
                                                                 see ZIP_VQ()_DONE[DONE]. If zero, time coalescing is disabled. */
        uint64_t reserved_20_31        : 12;
        uint64_t num_wait              : 20; /**< [ 19:  0](R/W) Number of messages hold-off.  When ZIP_VQ()_DONE[DONE] \>= [NUM_WAIT] then interrupt
                                                                 coalescing ends; see ZIP_VQ()_DONE[DONE]. If zero, message number coalescing is
                                                                 disabled. */
#else /* Word 0 - Little Endian */
        uint64_t num_wait              : 20; /**< [ 19:  0](R/W) Number of messages hold-off.  When ZIP_VQ()_DONE[DONE] \>= [NUM_WAIT] then interrupt
                                                                 coalescing ends; see ZIP_VQ()_DONE[DONE]. If zero, message number coalescing is
                                                                 disabled. */
        uint64_t reserved_20_31        : 12;
        uint64_t time_wait             : 16; /**< [ 47: 32](R/W) Timer hold-off.  When ZIP_VQ()_DONE[DONE] = 0, or ZIP_VQ()_DONE_ACK is written a
                                                                 timer is cleared.  When the timer reaches [TIME_WAIT]*1024 then interrupt coalescing ends;
                                                                 see ZIP_VQ()_DONE[DONE]. If zero, time coalescing is disabled. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vqx_done_wait_s cn8; */
    struct cavm_zip_vqx_done_wait_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t time_wait             : 16; /**< [ 47: 32](R/W) Timer hold-off. When ZIP_VQ()_DONE[DONE] = 0, or ZIP_VQ()_DONE_ACK is written a
                                                                 timer is cleared. When the timer reaches [TIME_WAIT] microseconds then interrupt
                                                                 coalescing ends; see ZIP_VQ()_DONE[DONE]. If zero, time coalescing is disabled. */
        uint64_t reserved_20_31        : 12;
        uint64_t num_wait              : 20; /**< [ 19:  0](R/W) Number of messages hold-off.  When ZIP_VQ()_DONE[DONE] \>= [NUM_WAIT] then interrupt
                                                                 coalescing ends; see ZIP_VQ()_DONE[DONE]. If zero, message number coalescing is
                                                                 disabled. */
#else /* Word 0 - Little Endian */
        uint64_t num_wait              : 20; /**< [ 19:  0](R/W) Number of messages hold-off.  When ZIP_VQ()_DONE[DONE] \>= [NUM_WAIT] then interrupt
                                                                 coalescing ends; see ZIP_VQ()_DONE[DONE]. If zero, message number coalescing is
                                                                 disabled. */
        uint64_t reserved_20_31        : 12;
        uint64_t time_wait             : 16; /**< [ 47: 32](R/W) Timer hold-off. When ZIP_VQ()_DONE[DONE] = 0, or ZIP_VQ()_DONE_ACK is written a
                                                                 timer is cleared. When the timer reaches [TIME_WAIT] microseconds then interrupt
                                                                 coalescing ends; see ZIP_VQ()_DONE[DONE]. If zero, time coalescing is disabled. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_vqx_done_wait cavm_zip_vqx_done_wait_t;

static inline uint64_t CAVM_ZIP_VQX_DONE_WAIT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VQX_DONE_WAIT(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838020000140ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838020000140ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_VQX_DONE_WAIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VQX_DONE_WAIT(a) cavm_zip_vqx_done_wait_t
#define bustype_CAVM_ZIP_VQX_DONE_WAIT(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VQX_DONE_WAIT(a) "ZIP_VQX_DONE_WAIT"
#define device_bar_CAVM_ZIP_VQX_DONE_WAIT(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VQX_DONE_WAIT(a) (a)
#define arguments_CAVM_ZIP_VQX_DONE_WAIT(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_vq#_doorbell
 *
 * ZIP VF Queue Doorbell Registers
 * Doorbells for the ZIP instruction queues.
 */
union cavm_zip_vqx_doorbell
{
    uint64_t u;
    struct cavm_zip_vqx_doorbell_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t dbell_cnt             : 20; /**< [ 19:  0](R/W/H) Number of instructions to add to the ZIP instruction doorbell count. */
#else /* Word 0 - Little Endian */
        uint64_t dbell_cnt             : 20; /**< [ 19:  0](R/W/H) Number of instructions to add to the ZIP instruction doorbell count. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vqx_doorbell_s cn; */
};
typedef union cavm_zip_vqx_doorbell cavm_zip_vqx_doorbell_t;

static inline uint64_t CAVM_ZIP_VQX_DOORBELL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VQX_DOORBELL(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838020001000ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838020001000ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_VQX_DOORBELL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VQX_DOORBELL(a) cavm_zip_vqx_doorbell_t
#define bustype_CAVM_ZIP_VQX_DOORBELL(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VQX_DOORBELL(a) "ZIP_VQX_DOORBELL"
#define device_bar_CAVM_ZIP_VQX_DOORBELL(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VQX_DOORBELL(a) (a)
#define arguments_CAVM_ZIP_VQX_DOORBELL(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_vq#_ena
 *
 * ZIP VF Queue Enable Register
 * If a queue is disabled, ZIP CTL stops fetching instructions from the queue.
 */
union cavm_zip_vqx_ena
{
    uint64_t u;
    struct cavm_zip_vqx_ena_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enables the logical instruction queue. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W) Enables the logical instruction queue. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_zip_vqx_ena_s cn; */
};
typedef union cavm_zip_vqx_ena cavm_zip_vqx_ena_t;

static inline uint64_t CAVM_ZIP_VQX_ENA(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VQX_ENA(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838020000010ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838020000010ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_VQX_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VQX_ENA(a) cavm_zip_vqx_ena_t
#define bustype_CAVM_ZIP_VQX_ENA(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VQX_ENA(a) "ZIP_VQX_ENA"
#define device_bar_CAVM_ZIP_VQX_ENA(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VQX_ENA(a) (a)
#define arguments_CAVM_ZIP_VQX_ENA(a) (a),-1,-1,-1

/**
 * Register (NCB) zip_vq#_sbuf_addr
 *
 * ZIP VF Queue Starting Buffer Address Registers
 * These registers set the buffer addresses for the instruction queues. When quiescent (i.e.
 * outstanding doorbell count is 0), it is safe to rewrite this register to effectively reset the
 * command buffer state machine. These registers must be programmed after software programs the
 * corresponding ZIP_QUE()_SBUF_CTL.
 */
union cavm_zip_vqx_sbuf_addr
{
    uint64_t u;
    struct cavm_zip_vqx_sbuf_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) Instruction buffer pointer bits \<41:7\> (128-byte aligned). Behavior is unpredictable if
                                                                 the address is 0x0.  When written, it is the initial buffer starting IOVA; when read, it
                                                                 is the next read pointer IOVA to be requested from NCB.
                                                                 [PTR] is overwritten with the next pointer each time that the command buffer
                                                                 segment is exhausted. New commands will then be read from the newly specified command
                                                                 buffer pointer. */
        uint64_t off                   : 7;  /**< [  6:  0](RO/H) When written, the value is ignored. When read, the returned value is the offset
                                                                 of the next read pointer. */
#else /* Word 0 - Little Endian */
        uint64_t off                   : 7;  /**< [  6:  0](RO/H) When written, the value is ignored. When read, the returned value is the offset
                                                                 of the next read pointer. */
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) Instruction buffer pointer bits \<41:7\> (128-byte aligned). Behavior is unpredictable if
                                                                 the address is 0x0.  When written, it is the initial buffer starting IOVA; when read, it
                                                                 is the next read pointer IOVA to be requested from NCB.
                                                                 [PTR] is overwritten with the next pointer each time that the command buffer
                                                                 segment is exhausted. New commands will then be read from the newly specified command
                                                                 buffer pointer. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    struct cavm_zip_vqx_sbuf_addr_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t ptr                   : 42; /**< [ 48:  7](R/W/H) Instruction buffer pointer bits \<41:7\> (128-byte aligned). Behavior is unpredictable if
                                                                 the address is 0x0.  When written, it is the initial buffer starting IOVA; when read, it
                                                                 is the next read pointer IOVA to be requested from NCB.
                                                                 [PTR] is overwritten with the next pointer each time that the command buffer
                                                                 segment is exhausted. New commands will then be read from the newly specified command
                                                                 buffer pointer. */
        uint64_t off                   : 7;  /**< [  6:  0](RO/H) When written, the value is ignored. When read, the returned value is the offset
                                                                 of the next read pointer. */
#else /* Word 0 - Little Endian */
        uint64_t off                   : 7;  /**< [  6:  0](RO/H) When written, the value is ignored. When read, the returned value is the offset
                                                                 of the next read pointer. */
        uint64_t ptr                   : 42; /**< [ 48:  7](R/W/H) Instruction buffer pointer bits \<41:7\> (128-byte aligned). Behavior is unpredictable if
                                                                 the address is 0x0.  When written, it is the initial buffer starting IOVA; when read, it
                                                                 is the next read pointer IOVA to be requested from NCB.
                                                                 [PTR] is overwritten with the next pointer each time that the command buffer
                                                                 segment is exhausted. New commands will then be read from the newly specified command
                                                                 buffer pointer. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } cn8;
    struct cavm_zip_vqx_sbuf_addr_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) Instruction buffer pointer bits \<52:7\> (128-byte aligned). Behavior is unpredictable if
                                                                 the address is 0x0.  When written, it is the initial buffer starting IOVA; when read, it
                                                                 is the next read pointer IOVA to be requested from NCB.
                                                                 [PTR] is overwritten with the next pointer each time that the command buffer
                                                                 segment is exhausted. New commands will then be read from the newly specified command
                                                                 buffer pointer. */
        uint64_t off                   : 7;  /**< [  6:  0](RO/H) When written, the value is ignored. When read, the returned value is the offset
                                                                 of the next read pointer. */
#else /* Word 0 - Little Endian */
        uint64_t off                   : 7;  /**< [  6:  0](RO/H) When written, the value is ignored. When read, the returned value is the offset
                                                                 of the next read pointer. */
        uint64_t ptr                   : 46; /**< [ 52:  7](R/W/H) Instruction buffer pointer bits \<52:7\> (128-byte aligned). Behavior is unpredictable if
                                                                 the address is 0x0.  When written, it is the initial buffer starting IOVA; when read, it
                                                                 is the next read pointer IOVA to be requested from NCB.
                                                                 [PTR] is overwritten with the next pointer each time that the command buffer
                                                                 segment is exhausted. New commands will then be read from the newly specified command
                                                                 buffer pointer. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } cn9;
};
typedef union cavm_zip_vqx_sbuf_addr cavm_zip_vqx_sbuf_addr_t;

static inline uint64_t CAVM_ZIP_VQX_SBUF_ADDR(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_ZIP_VQX_SBUF_ADDR(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN83XX) && (a<=7))
        return 0x838020000020ll + 0x100000ll * ((a) & 0x7);
    if (cavm_is_model(OCTEONTX_CN96XX) && (a<=7))
        return 0x838020000020ll + 0x100000ll * ((a) & 0x7);
    __cavm_csr_fatal("ZIP_VQX_SBUF_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_ZIP_VQX_SBUF_ADDR(a) cavm_zip_vqx_sbuf_addr_t
#define bustype_CAVM_ZIP_VQX_SBUF_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_ZIP_VQX_SBUF_ADDR(a) "ZIP_VQX_SBUF_ADDR"
#define device_bar_CAVM_ZIP_VQX_SBUF_ADDR(a) 0x0 /* VF_BAR0 */
#define busnum_CAVM_ZIP_VQX_SBUF_ADDR(a) (a)
#define arguments_CAVM_ZIP_VQX_SBUF_ADDR(a) (a),-1,-1,-1

#endif /* __CAVM_CSRS_ZIP_H__ */
