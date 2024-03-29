#ifndef __CAVM_CSRS_MPI_H__
#define __CAVM_CSRS_MPI_H__
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
 * OcteonTX MPI.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration mpi_bar_e
 *
 * MPI/SPI Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define CAVM_MPI_BAR_E_MPIX_PF_BAR0(a) (0x804000000000ll + 0x1000000000ll * (a))
#define CAVM_MPI_BAR_E_MPIX_PF_BAR0_SIZE 0x10000ull
#define CAVM_MPI_BAR_E_MPIX_PF_BAR4(a) (0x804000f00000ll + 0x1000000000ll * (a))
#define CAVM_MPI_BAR_E_MPIX_PF_BAR4_SIZE 0x100000ull
#define CAVM_MPI_BAR_E_MPI_PF_BAR0 (0x804000000000ll)
#define CAVM_MPI_BAR_E_MPI_PF_BAR0_SIZE 0x800000ull
#define CAVM_MPI_BAR_E_MPI_PF_BAR4 (0x804000f00000ll)
#define CAVM_MPI_BAR_E_MPI_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration mpi_int_vec_e
 *
 * MPI/SPI MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define CAVM_MPI_INT_VEC_E_ESPI_INTSX(a) (1 + (a))
#define CAVM_MPI_INT_VEC_E_INTS (0)

/**
 * Enumeration mpi_iomode_e
 *
 * MPI IOMODE Enumeration
 * Enumerates the I/O mode in MPI()_CFG[IOMODE].
 */
#define CAVM_MPI_IOMODE_E_X1_BIDIR (1)
#define CAVM_MPI_IOMODE_E_X1_UNIDIR (0)
#define CAVM_MPI_IOMODE_E_X2_BIDIR (2)
#define CAVM_MPI_IOMODE_E_X4_BIDIR (3)

/**
 * Register (NCB) mpi#_cfg
 *
 * MPI/SPI Configuration Register
 * This register provides configuration for the MPI/SPI interface. Writes to the CSR
 * will be unpredictable if done while MPI()_STS[BUSY] is asserted.
 */
union cavm_mpix_cfg
{
    uint64_t u;
    struct cavm_mpix_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t double_buf_en         : 1;  /**< [ 50: 50](R/W) Enable double-buffer mode.
                                                                 0 = Single transmit/receive buffer of 1152 bytes.
                                                                 1 = Buffer is split in two.  Each transmit/receive buffer is 576 bytes.
                                                                 Buffer is selected with MPI()_XMIT[BUF_SEL] */
        uint64_t tb100_en              : 1;  /**< [ 49: 49](R/W) SPI 100 MHz clock enable. See [CLKDIV].
                                                                 0 = Use system clock as base frequency. This provides higher granularity, but
                                                                 may require changing [CLKDIV] if the system clock frequency is changed.
                                                                 1 = Use 100 MHz clock as base frequency. This is the reset value to enable the
                                                                 boot process to be frequency agnostic. */
        uint64_t reserved_48           : 1;
        uint64_t cs_espi_en            : 4;  /**< [ 47: 44](R/W) Enable ESPI mode per each slave.  Each bit corresponds to each of the four possible CS's
                                                                 on this MPI.
                                                                 If the bit is 0:
                                                                 * CRC hardware is disabled.
                                                                 * The turn around time is default for SPI.
                                                                 * No special parsing in hardware.

                                                                 If the bit is 1:
                                                                 * CRC hardware is enabled. Hardware will automatically calculate CRC for one
                                                                 transaction and then apply it to the end of the transmission. On a read it will apply to
                                                                 end of transaction and then check the CRC on response and if there is an error the
                                                                 MPI()_STS[CRC_ERR] bit will be set.
                                                                 * The turn around time (TAR in the ESPI spec) is set to two cycles.
                                                                 * Parsing for special state is enabled.

                                                                 Internal:
                                                                 Regarding CRCs: On a write, It would actually internally increase the tx_count and
                                                                 total_count by 1.  On a read (tx count != total_count) it would add 1 to tx_count and 2
                                                                 to total_count) so it would get the recieve CRC as well. */
        uint64_t reserved_36_43        : 8;
        uint64_t iomode                : 2;  /**< [ 35: 34](R/W) I/O bus configuration mode.
                                                                 Used when [LEGACY_DIS] is set.
                                                                 Enumerated by MPI_IOMODE_E. */
        uint64_t reserved_32_33        : 2;
        uint64_t legacy_dis            : 1;  /**< [ 31: 31](R/W) Disable legacy mode.
                                                                 0 = Simple SPI/MPI support backward compatible with CN8XXX-series chips.
                                                                 1 = New interface that allows support for ESPI. */
        uint64_t reserved_29_30        : 2;
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor. Value 0x0 disables the SPI clock.

                                                                 _ SPI clock = base clock / (2 * [CLKDIV])

                                                                 where base clock is coprocessor clock or 100 MHz based on [TB100_EN]. If
                                                                 [TB100_EN] is clear, [CLKDIV] must not be 1. */
        uint64_t csena3                : 1;  /**< [ 15: 15](R/W) Must be one. */
        uint64_t csena2                : 1;  /**< [ 14: 14](R/W) Must be one. */
        uint64_t csena1                : 1;  /**< [ 13: 13](R/W) Must be one. */
        uint64_t csena0                : 1;  /**< [ 12: 12](R/W) Must be one. */
        uint64_t cslate                : 1;  /**< [ 11: 11](R/W) SPI_CSn_L late.
                                                                 0 = SPI_CSn_L asserts 1/2 SPI_CK cycle before the transaction.
                                                                 1 = SPI_CSn_L asserts coincident with the transaction. */
        uint64_t tritx                 : 1;  /**< [ 10: 10](R/W) This works for [LEGACY_DIS] = 0 only on IO pin 0 (formerly SPI_DO).
                                                                 This works for [LEGACY_DIS] = 1 on all IO pins.
                                                                 Tristate TX. Used only when WIREOR = 1
                                                                 0 = SPI_DO pin is driven when slave is not expected to be driving.
                                                                 1 = SPI_DO pin is tristated when not transmitting. Setting this for eSPI means
                                                                 TX phase plus first cycle of TAR phase is to follow ESPI standard. */
        uint64_t idleclks              : 2;  /**< [  9:  8](R/W) Idle clocks. When set, guarantees idle SPI_CK cycles between commands. If TX only
                                                                 transaction, this doesn't do anything. */
        uint64_t cshi                  : 1;  /**< [  7:  7](R/W) SPI_CSn_L high: 1 = SPI_CSn_L is asserted high, 0 = SPI_CSn_L is asserted low. */
        uint64_t reserved_6            : 1;
        uint64_t cs_sticky             : 1;  /**< [  5:  5](R/W) Configuration chip select is sticky.
                                                                 0 = On a write to MPI()_CFG, chip selects will deassert.
                                                                 1 = On a write to MPI()_CFG, chip selects will retain their previous
                                                                 values (but see also MPI()_TX[LEAVECS] and MPI()_CFG[CSHI]). */
        uint64_t lsbfirst              : 1;  /**< [  4:  4](R/W) This bit should only be used when [LEGACY_DIS] is 0. Do not use this with ESPI, it could
                                                                 screw up the protocol.
                                                                 Shift LSB first: 0 = shift MSB first, 1 = shift LSB first. */
        uint64_t wireor                : 1;  /**< [  3:  3](R/W) Only used when [LEGACY_DIS] = 0, otherwise see MPI_IOMODE_E.
                                                                 Wire-OR DO and DI.
                                                                 0 = SPI_DO and SPI_DI are separate wires (SPI). SPI_DO pin is always driven.
                                                                 1 = SPI_DO/DI is all from SPI_DO pin (MPI). SPI_DO pin is tristated when not transmitting.
                                                                 If [WIREOR] = 1, SPI_DI pin is not used by the MPI/SPI engine. */
        uint64_t clk_cont              : 1;  /**< [  2:  2](R/W) Clock control. Only used when ESPI mode is disabled.
                                                                 0 = Clock idles to value given by IDLELO after completion of MPI/SPI transaction.
                                                                 1 = Clock never idles, requires SPI_CSn_L deassertion/assertion between commands. */
        uint64_t idlelo                : 1;  /**< [  1:  1](R/W) Clock idle low/clock invert. Only used when ESPI is disabled, as the ESPI
                                                                 standard requires driving clock always negedge, sampling on posedge, and the
                                                                 clock always starts at 0.
                                                                 0 = SPI_CK idles high, first transition is high-to-low.
                                                                 1 = SPI_CK idles low, first transition is low-to-high. */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) MPI/SPI enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) MPI/SPI enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
        uint64_t idlelo                : 1;  /**< [  1:  1](R/W) Clock idle low/clock invert. Only used when ESPI is disabled, as the ESPI
                                                                 standard requires driving clock always negedge, sampling on posedge, and the
                                                                 clock always starts at 0.
                                                                 0 = SPI_CK idles high, first transition is high-to-low.
                                                                 1 = SPI_CK idles low, first transition is low-to-high. */
        uint64_t clk_cont              : 1;  /**< [  2:  2](R/W) Clock control. Only used when ESPI mode is disabled.
                                                                 0 = Clock idles to value given by IDLELO after completion of MPI/SPI transaction.
                                                                 1 = Clock never idles, requires SPI_CSn_L deassertion/assertion between commands. */
        uint64_t wireor                : 1;  /**< [  3:  3](R/W) Only used when [LEGACY_DIS] = 0, otherwise see MPI_IOMODE_E.
                                                                 Wire-OR DO and DI.
                                                                 0 = SPI_DO and SPI_DI are separate wires (SPI). SPI_DO pin is always driven.
                                                                 1 = SPI_DO/DI is all from SPI_DO pin (MPI). SPI_DO pin is tristated when not transmitting.
                                                                 If [WIREOR] = 1, SPI_DI pin is not used by the MPI/SPI engine. */
        uint64_t lsbfirst              : 1;  /**< [  4:  4](R/W) This bit should only be used when [LEGACY_DIS] is 0. Do not use this with ESPI, it could
                                                                 screw up the protocol.
                                                                 Shift LSB first: 0 = shift MSB first, 1 = shift LSB first. */
        uint64_t cs_sticky             : 1;  /**< [  5:  5](R/W) Configuration chip select is sticky.
                                                                 0 = On a write to MPI()_CFG, chip selects will deassert.
                                                                 1 = On a write to MPI()_CFG, chip selects will retain their previous
                                                                 values (but see also MPI()_TX[LEAVECS] and MPI()_CFG[CSHI]). */
        uint64_t reserved_6            : 1;
        uint64_t cshi                  : 1;  /**< [  7:  7](R/W) SPI_CSn_L high: 1 = SPI_CSn_L is asserted high, 0 = SPI_CSn_L is asserted low. */
        uint64_t idleclks              : 2;  /**< [  9:  8](R/W) Idle clocks. When set, guarantees idle SPI_CK cycles between commands. If TX only
                                                                 transaction, this doesn't do anything. */
        uint64_t tritx                 : 1;  /**< [ 10: 10](R/W) This works for [LEGACY_DIS] = 0 only on IO pin 0 (formerly SPI_DO).
                                                                 This works for [LEGACY_DIS] = 1 on all IO pins.
                                                                 Tristate TX. Used only when WIREOR = 1
                                                                 0 = SPI_DO pin is driven when slave is not expected to be driving.
                                                                 1 = SPI_DO pin is tristated when not transmitting. Setting this for eSPI means
                                                                 TX phase plus first cycle of TAR phase is to follow ESPI standard. */
        uint64_t cslate                : 1;  /**< [ 11: 11](R/W) SPI_CSn_L late.
                                                                 0 = SPI_CSn_L asserts 1/2 SPI_CK cycle before the transaction.
                                                                 1 = SPI_CSn_L asserts coincident with the transaction. */
        uint64_t csena0                : 1;  /**< [ 12: 12](R/W) Must be one. */
        uint64_t csena1                : 1;  /**< [ 13: 13](R/W) Must be one. */
        uint64_t csena2                : 1;  /**< [ 14: 14](R/W) Must be one. */
        uint64_t csena3                : 1;  /**< [ 15: 15](R/W) Must be one. */
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor. Value 0x0 disables the SPI clock.

                                                                 _ SPI clock = base clock / (2 * [CLKDIV])

                                                                 where base clock is coprocessor clock or 100 MHz based on [TB100_EN]. If
                                                                 [TB100_EN] is clear, [CLKDIV] must not be 1. */
        uint64_t reserved_29_30        : 2;
        uint64_t legacy_dis            : 1;  /**< [ 31: 31](R/W) Disable legacy mode.
                                                                 0 = Simple SPI/MPI support backward compatible with CN8XXX-series chips.
                                                                 1 = New interface that allows support for ESPI. */
        uint64_t reserved_32_33        : 2;
        uint64_t iomode                : 2;  /**< [ 35: 34](R/W) I/O bus configuration mode.
                                                                 Used when [LEGACY_DIS] is set.
                                                                 Enumerated by MPI_IOMODE_E. */
        uint64_t reserved_36_43        : 8;
        uint64_t cs_espi_en            : 4;  /**< [ 47: 44](R/W) Enable ESPI mode per each slave.  Each bit corresponds to each of the four possible CS's
                                                                 on this MPI.
                                                                 If the bit is 0:
                                                                 * CRC hardware is disabled.
                                                                 * The turn around time is default for SPI.
                                                                 * No special parsing in hardware.

                                                                 If the bit is 1:
                                                                 * CRC hardware is enabled. Hardware will automatically calculate CRC for one
                                                                 transaction and then apply it to the end of the transmission. On a read it will apply to
                                                                 end of transaction and then check the CRC on response and if there is an error the
                                                                 MPI()_STS[CRC_ERR] bit will be set.
                                                                 * The turn around time (TAR in the ESPI spec) is set to two cycles.
                                                                 * Parsing for special state is enabled.

                                                                 Internal:
                                                                 Regarding CRCs: On a write, It would actually internally increase the tx_count and
                                                                 total_count by 1.  On a read (tx count != total_count) it would add 1 to tx_count and 2
                                                                 to total_count) so it would get the recieve CRC as well. */
        uint64_t reserved_48           : 1;
        uint64_t tb100_en              : 1;  /**< [ 49: 49](R/W) SPI 100 MHz clock enable. See [CLKDIV].
                                                                 0 = Use system clock as base frequency. This provides higher granularity, but
                                                                 may require changing [CLKDIV] if the system clock frequency is changed.
                                                                 1 = Use 100 MHz clock as base frequency. This is the reset value to enable the
                                                                 boot process to be frequency agnostic. */
        uint64_t double_buf_en         : 1;  /**< [ 50: 50](R/W) Enable double-buffer mode.
                                                                 0 = Single transmit/receive buffer of 1152 bytes.
                                                                 1 = Buffer is split in two.  Each transmit/receive buffer is 576 bytes.
                                                                 Buffer is selected with MPI()_XMIT[BUF_SEL] */
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_cfg_s cn9; */
    struct cavm_mpix_cfg_cn96xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_50_63        : 14;
        uint64_t tb100_en              : 1;  /**< [ 49: 49](R/W) SPI 100 MHz clock enable. See [CLKDIV].
                                                                 0 = Use system clock as base frequency. This provides higher granularity, but
                                                                 may require changing [CLKDIV] if the system clock frequency is changed.
                                                                 1 = Use 100 MHz clock as base frequency. This is the reset value to enable the
                                                                 boot process to be frequency agnostic. */
        uint64_t reserved_48           : 1;
        uint64_t cs_espi_en            : 4;  /**< [ 47: 44](R/W) Enable ESPI mode per each slave.  Each bit corresponds to each of the four possible CS's
                                                                 on this MPI.
                                                                 If the bit is 0:
                                                                 * CRC hardware is disabled.
                                                                 * The turn around time is default for SPI.
                                                                 * No special parsing in hardware.

                                                                 If the bit is 1:
                                                                 * CRC hardware is enabled. Hardware will automatically calculate CRC for one
                                                                 transaction and then apply it to the end of the transmission. On a read it will apply to
                                                                 end of transaction and then check the CRC on response and if there is an error the
                                                                 MPI()_STS[CRC_ERR] bit will be set.
                                                                 * The turn around time (TAR in the ESPI spec) is set to two cycles.
                                                                 * Parsing for special state is enabled.

                                                                 Internal:
                                                                 Regarding CRCs: On a write, It would actually internally increase the tx_count and
                                                                 total_count by 1.  On a read (tx count != total_count) it would add 1 to tx_count and 2
                                                                 to total_count) so it would get the recieve CRC as well. */
        uint64_t reserved_36_43        : 8;
        uint64_t iomode                : 2;  /**< [ 35: 34](R/W) I/O bus configuration mode.
                                                                 Used when [LEGACY_DIS] is set.
                                                                 Enumerated by MPI_IOMODE_E. */
        uint64_t reserved_32_33        : 2;
        uint64_t legacy_dis            : 1;  /**< [ 31: 31](R/W) Disable legacy mode.
                                                                 0 = Simple SPI/MPI support backward compatible with CN8XXX-series chips.
                                                                 1 = New interface that allows support for ESPI. */
        uint64_t reserved_29_30        : 2;
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor. Value 0x0 disables the SPI clock.

                                                                 _ SPI clock = base clock / (2 * [CLKDIV])

                                                                 where base clock is coprocessor clock or 100 MHz based on [TB100_EN]. If
                                                                 [TB100_EN] is clear, [CLKDIV] must not be 1. */
        uint64_t csena3                : 1;  /**< [ 15: 15](R/W) Must be one. */
        uint64_t csena2                : 1;  /**< [ 14: 14](R/W) Must be one. */
        uint64_t csena1                : 1;  /**< [ 13: 13](R/W) Must be one. */
        uint64_t csena0                : 1;  /**< [ 12: 12](R/W) Must be one. */
        uint64_t cslate                : 1;  /**< [ 11: 11](R/W) SPI_CSn_L late.
                                                                 0 = SPI_CSn_L asserts 1/2 SPI_CK cycle before the transaction.
                                                                 1 = SPI_CSn_L asserts coincident with the transaction. */
        uint64_t tritx                 : 1;  /**< [ 10: 10](R/W) This works for [LEGACY_DIS] = 0 only on IO pin 0 (formerly SPI_DO).
                                                                 This works for [LEGACY_DIS] = 1 on all IO pins.
                                                                 Tristate TX. Used only when WIREOR = 1
                                                                 0 = SPI_DO pin is driven when slave is not expected to be driving.
                                                                 1 = SPI_DO pin is tristated when not transmitting. Setting this for eSPI means
                                                                 TX phase plus first cycle of TAR phase is to follow ESPI standard. */
        uint64_t idleclks              : 2;  /**< [  9:  8](R/W) Idle clocks. When set, guarantees idle SPI_CK cycles between commands. If TX only
                                                                 transaction, this doesn't do anything. */
        uint64_t cshi                  : 1;  /**< [  7:  7](R/W) SPI_CSn_L high: 1 = SPI_CSn_L is asserted high, 0 = SPI_CSn_L is asserted low. */
        uint64_t reserved_6            : 1;
        uint64_t cs_sticky             : 1;  /**< [  5:  5](R/W) Configuration chip select is sticky.
                                                                 0 = On a write to MPI()_CFG, chip selects will deassert.
                                                                 1 = On a write to MPI()_CFG, chip selects will retain their previous
                                                                 values (but see also MPI()_TX[LEAVECS] and MPI()_CFG[CSHI]). */
        uint64_t lsbfirst              : 1;  /**< [  4:  4](R/W) This bit should only be used when [LEGACY_DIS] is 0. Do not use this with ESPI, it could
                                                                 screw up the protocol.
                                                                 Shift LSB first: 0 = shift MSB first, 1 = shift LSB first. */
        uint64_t wireor                : 1;  /**< [  3:  3](R/W) Only used when [LEGACY_DIS] = 0, otherwise see MPI_IOMODE_E.
                                                                 Wire-OR DO and DI.
                                                                 0 = SPI_DO and SPI_DI are separate wires (SPI). SPI_DO pin is always driven.
                                                                 1 = SPI_DO/DI is all from SPI_DO pin (MPI). SPI_DO pin is tristated when not transmitting.
                                                                 If [WIREOR] = 1, SPI_DI pin is not used by the MPI/SPI engine. */
        uint64_t clk_cont              : 1;  /**< [  2:  2](R/W) Clock control. Only used when ESPI mode is disabled.
                                                                 0 = Clock idles to value given by IDLELO after completion of MPI/SPI transaction.
                                                                 1 = Clock never idles, requires SPI_CSn_L deassertion/assertion between commands. */
        uint64_t idlelo                : 1;  /**< [  1:  1](R/W) Clock idle low/clock invert. Only used when ESPI is disabled, as the ESPI
                                                                 standard requires driving clock always negedge, sampling on posedge, and the
                                                                 clock always starts at 0.
                                                                 0 = SPI_CK idles high, first transition is high-to-low.
                                                                 1 = SPI_CK idles low, first transition is low-to-high. */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) MPI/SPI enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) MPI/SPI enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
        uint64_t idlelo                : 1;  /**< [  1:  1](R/W) Clock idle low/clock invert. Only used when ESPI is disabled, as the ESPI
                                                                 standard requires driving clock always negedge, sampling on posedge, and the
                                                                 clock always starts at 0.
                                                                 0 = SPI_CK idles high, first transition is high-to-low.
                                                                 1 = SPI_CK idles low, first transition is low-to-high. */
        uint64_t clk_cont              : 1;  /**< [  2:  2](R/W) Clock control. Only used when ESPI mode is disabled.
                                                                 0 = Clock idles to value given by IDLELO after completion of MPI/SPI transaction.
                                                                 1 = Clock never idles, requires SPI_CSn_L deassertion/assertion between commands. */
        uint64_t wireor                : 1;  /**< [  3:  3](R/W) Only used when [LEGACY_DIS] = 0, otherwise see MPI_IOMODE_E.
                                                                 Wire-OR DO and DI.
                                                                 0 = SPI_DO and SPI_DI are separate wires (SPI). SPI_DO pin is always driven.
                                                                 1 = SPI_DO/DI is all from SPI_DO pin (MPI). SPI_DO pin is tristated when not transmitting.
                                                                 If [WIREOR] = 1, SPI_DI pin is not used by the MPI/SPI engine. */
        uint64_t lsbfirst              : 1;  /**< [  4:  4](R/W) This bit should only be used when [LEGACY_DIS] is 0. Do not use this with ESPI, it could
                                                                 screw up the protocol.
                                                                 Shift LSB first: 0 = shift MSB first, 1 = shift LSB first. */
        uint64_t cs_sticky             : 1;  /**< [  5:  5](R/W) Configuration chip select is sticky.
                                                                 0 = On a write to MPI()_CFG, chip selects will deassert.
                                                                 1 = On a write to MPI()_CFG, chip selects will retain their previous
                                                                 values (but see also MPI()_TX[LEAVECS] and MPI()_CFG[CSHI]). */
        uint64_t reserved_6            : 1;
        uint64_t cshi                  : 1;  /**< [  7:  7](R/W) SPI_CSn_L high: 1 = SPI_CSn_L is asserted high, 0 = SPI_CSn_L is asserted low. */
        uint64_t idleclks              : 2;  /**< [  9:  8](R/W) Idle clocks. When set, guarantees idle SPI_CK cycles between commands. If TX only
                                                                 transaction, this doesn't do anything. */
        uint64_t tritx                 : 1;  /**< [ 10: 10](R/W) This works for [LEGACY_DIS] = 0 only on IO pin 0 (formerly SPI_DO).
                                                                 This works for [LEGACY_DIS] = 1 on all IO pins.
                                                                 Tristate TX. Used only when WIREOR = 1
                                                                 0 = SPI_DO pin is driven when slave is not expected to be driving.
                                                                 1 = SPI_DO pin is tristated when not transmitting. Setting this for eSPI means
                                                                 TX phase plus first cycle of TAR phase is to follow ESPI standard. */
        uint64_t cslate                : 1;  /**< [ 11: 11](R/W) SPI_CSn_L late.
                                                                 0 = SPI_CSn_L asserts 1/2 SPI_CK cycle before the transaction.
                                                                 1 = SPI_CSn_L asserts coincident with the transaction. */
        uint64_t csena0                : 1;  /**< [ 12: 12](R/W) Must be one. */
        uint64_t csena1                : 1;  /**< [ 13: 13](R/W) Must be one. */
        uint64_t csena2                : 1;  /**< [ 14: 14](R/W) Must be one. */
        uint64_t csena3                : 1;  /**< [ 15: 15](R/W) Must be one. */
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor. Value 0x0 disables the SPI clock.

                                                                 _ SPI clock = base clock / (2 * [CLKDIV])

                                                                 where base clock is coprocessor clock or 100 MHz based on [TB100_EN]. If
                                                                 [TB100_EN] is clear, [CLKDIV] must not be 1. */
        uint64_t reserved_29_30        : 2;
        uint64_t legacy_dis            : 1;  /**< [ 31: 31](R/W) Disable legacy mode.
                                                                 0 = Simple SPI/MPI support backward compatible with CN8XXX-series chips.
                                                                 1 = New interface that allows support for ESPI. */
        uint64_t reserved_32_33        : 2;
        uint64_t iomode                : 2;  /**< [ 35: 34](R/W) I/O bus configuration mode.
                                                                 Used when [LEGACY_DIS] is set.
                                                                 Enumerated by MPI_IOMODE_E. */
        uint64_t reserved_36_43        : 8;
        uint64_t cs_espi_en            : 4;  /**< [ 47: 44](R/W) Enable ESPI mode per each slave.  Each bit corresponds to each of the four possible CS's
                                                                 on this MPI.
                                                                 If the bit is 0:
                                                                 * CRC hardware is disabled.
                                                                 * The turn around time is default for SPI.
                                                                 * No special parsing in hardware.

                                                                 If the bit is 1:
                                                                 * CRC hardware is enabled. Hardware will automatically calculate CRC for one
                                                                 transaction and then apply it to the end of the transmission. On a read it will apply to
                                                                 end of transaction and then check the CRC on response and if there is an error the
                                                                 MPI()_STS[CRC_ERR] bit will be set.
                                                                 * The turn around time (TAR in the ESPI spec) is set to two cycles.
                                                                 * Parsing for special state is enabled.

                                                                 Internal:
                                                                 Regarding CRCs: On a write, It would actually internally increase the tx_count and
                                                                 total_count by 1.  On a read (tx count != total_count) it would add 1 to tx_count and 2
                                                                 to total_count) so it would get the recieve CRC as well. */
        uint64_t reserved_48           : 1;
        uint64_t tb100_en              : 1;  /**< [ 49: 49](R/W) SPI 100 MHz clock enable. See [CLKDIV].
                                                                 0 = Use system clock as base frequency. This provides higher granularity, but
                                                                 may require changing [CLKDIV] if the system clock frequency is changed.
                                                                 1 = Use 100 MHz clock as base frequency. This is the reset value to enable the
                                                                 boot process to be frequency agnostic. */
        uint64_t reserved_50_63        : 14;
#endif /* Word 0 - End */
    } cn96xxp1;
    struct cavm_mpix_cfg_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t double_buf_en         : 1;  /**< [ 50: 50](R/W) Enable double-buffer mode.
                                                                 0 = Single transmit/receive buffer of 1152 bytes.
                                                                 1 = Buffer is split in two.  Each transmit/receive buffer is 576 bytes.
                                                                 Buffer is selected with MPI()_XMIT[BUF_SEL] */
        uint64_t tb100_en              : 1;  /**< [ 49: 49](R/W) SPI 100 MHz clock enable. See [CLKDIV].
                                                                 0 = Use system clock as base frequency. This provides higher granularity, but
                                                                 may require changing [CLKDIV] if the system clock frequency is changed.
                                                                 1 = Use 100 MHz clock as base frequency. This is the reset value to enable the
                                                                 boot process to be frequency agnostic. */
        uint64_t reserved_48           : 1;
        uint64_t cs_espi_en            : 4;  /**< [ 47: 44](R/W) Enable ESPI mode per each slave.  Each bit corresponds to each of the four possible CS's
                                                                 on this MPI.
                                                                 If the bit is 0:
                                                                 * CRC hardware is disabled.
                                                                 * The turn around time is default for SPI.
                                                                 * No special parsing in hardware.

                                                                 If the bit is 1:
                                                                 * CRC hardware is enabled. Hardware will automatically calculate CRC for one
                                                                 transaction and then apply it to the end of the transmission. On a read it will apply to
                                                                 end of transaction and then check the CRC on response and if there is an error the
                                                                 MPI()_STS[CRC_ERR] bit will be set.
                                                                 * The turn around time (TAR in the ESPI spec) is set to two cycles.
                                                                 * Parsing for special state is enabled.

                                                                 Internal:
                                                                 Regarding CRCs: On a write, It would actually internally increase the tx_count and
                                                                 total_count by 1.  On a read (tx count != total_count) it would add 1 to tx_count and 2
                                                                 to total_count) so it would get the recieve CRC as well. */
        uint64_t reserved_36_43        : 8;
        uint64_t iomode                : 2;  /**< [ 35: 34](R/W) I/O bus configuration mode.
                                                                 Used when [LEGACY_DIS] is set.
                                                                 Enumerated by MPI_IOMODE_E. */
        uint64_t reserved_32_33        : 2;
        uint64_t legacy_dis            : 1;  /**< [ 31: 31](R/W) Disable legacy mode.
                                                                 0 = Simple SPI/MPI support backward compatible with CN8XXX-series chips.
                                                                 1 = New interface that allows support for ESPI. */
        uint64_t reserved_29_30        : 2;
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor. Value 0x0 disables the SPI clock.

                                                                 _ SPI clock = base clock / (2 * [CLKDIV])

                                                                 where base clock is coprocessor clock or 100 MHz based on [TB100_EN]. If
                                                                 [TB100_EN] is clear, [CLKDIV] must not be 1. */
        uint64_t csena3                : 1;  /**< [ 15: 15](R/W) Must be one. */
        uint64_t csena2                : 1;  /**< [ 14: 14](R/W) Must be one. */
        uint64_t csena1                : 1;  /**< [ 13: 13](R/W) Must be one. */
        uint64_t csena0                : 1;  /**< [ 12: 12](R/W) Must be one. */
        uint64_t cslate                : 1;  /**< [ 11: 11](R/W) SPI_CSn_L late.
                                                                 0 = SPI_CSn_L asserts 1/2 SPI clock cycle before the transaction.
                                                                 1 = SPI_CSn_L asserts coincident with the transaction. */
        uint64_t tritx                 : 1;  /**< [ 10: 10](R/W) This works for [LEGACY_DIS] = 0 only on I/O pin 0 (formerly SPI_MOSI).
                                                                 This works for [LEGACY_DIS] = 1 on all I/O pins.
                                                                 Tristate TX. Used only when WIREOR = 1
                                                                 0 = SPI_MOSI pin is driven when slave is not expected to be driving.
                                                                 1 = SPI_MOSI pin is tristated when not transmitting. Setting this for eSPI means
                                                                 TX phase plus first cycle of TAR phase is to follow ESPI standard. */
        uint64_t idleclks              : 2;  /**< [  9:  8](R/W) Idle clocks. When set, guarantees idle SPI clock cycles between commands. If TX only
                                                                 transaction, this doesn't do anything. */
        uint64_t cshi                  : 1;  /**< [  7:  7](R/W) SPI_CSn_L high: 1 = SPI_CSn_L is asserted high, 0 = SPI_CSn_L is asserted low. */
        uint64_t reserved_6            : 1;
        uint64_t cs_sticky             : 1;  /**< [  5:  5](R/W) Configuration chip select is sticky.
                                                                 0 = On a write to MPI()_CFG, chip selects will deassert.
                                                                 1 = On a write to MPI()_CFG, chip selects will retain their previous
                                                                 values (but see also MPI()_TX[LEAVECS] and MPI()_CFG[CSHI]). */
        uint64_t lsbfirst              : 1;  /**< [  4:  4](R/W) This bit should only be used when [LEGACY_DIS] is 0. Do not use this with ESPI, it could
                                                                 screw up the protocol.
                                                                 Shift LSB first: 0 = shift MSB first, 1 = shift LSB first. */
        uint64_t wireor                : 1;  /**< [  3:  3](R/W) Only used when [LEGACY_DIS] = 0, otherwise see MPI_IOMODE_E.
                                                                 Wire-OR MOSI and MISO.
                                                                 0 = SPI_MOSI and SPI_MISO are separate wires (SPI). SPI_MOSI pin is always driven.
                                                                 1 = SPI_MOSI/MISO is all from SPI_MOSI pin (MPI). SPI_MOSI pin is tristated when not transmitting.
                                                                 If [WIREOR] = 1, SPI_MISO pin is not used by the MPI/SPI engine. */
        uint64_t clk_cont              : 1;  /**< [  2:  2](R/W) Clock control. Only used when ESPI mode is disabled.
                                                                 0 = Clock idles to value given by IDLELO after completion of MPI/SPI transaction.
                                                                 1 = Clock never idles, requires SPI_CSn_L deassertion/assertion between commands. */
        uint64_t idlelo                : 1;  /**< [  1:  1](R/W) Clock idle low/clock invert. Only used when ESPI is disabled, as the ESPI
                                                                 standard requires driving clock always negedge, sampling on posedge, and the
                                                                 clock always starts at 0.
                                                                 0 = SPI_CK idles high, first transition is high-to-low.
                                                                 1 = SPI_CK idles low, first transition is low-to-high. */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) MPI/SPI enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) MPI/SPI enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
        uint64_t idlelo                : 1;  /**< [  1:  1](R/W) Clock idle low/clock invert. Only used when ESPI is disabled, as the ESPI
                                                                 standard requires driving clock always negedge, sampling on posedge, and the
                                                                 clock always starts at 0.
                                                                 0 = SPI_CK idles high, first transition is high-to-low.
                                                                 1 = SPI_CK idles low, first transition is low-to-high. */
        uint64_t clk_cont              : 1;  /**< [  2:  2](R/W) Clock control. Only used when ESPI mode is disabled.
                                                                 0 = Clock idles to value given by IDLELO after completion of MPI/SPI transaction.
                                                                 1 = Clock never idles, requires SPI_CSn_L deassertion/assertion between commands. */
        uint64_t wireor                : 1;  /**< [  3:  3](R/W) Only used when [LEGACY_DIS] = 0, otherwise see MPI_IOMODE_E.
                                                                 Wire-OR MOSI and MISO.
                                                                 0 = SPI_MOSI and SPI_MISO are separate wires (SPI). SPI_MOSI pin is always driven.
                                                                 1 = SPI_MOSI/MISO is all from SPI_MOSI pin (MPI). SPI_MOSI pin is tristated when not transmitting.
                                                                 If [WIREOR] = 1, SPI_MISO pin is not used by the MPI/SPI engine. */
        uint64_t lsbfirst              : 1;  /**< [  4:  4](R/W) This bit should only be used when [LEGACY_DIS] is 0. Do not use this with ESPI, it could
                                                                 screw up the protocol.
                                                                 Shift LSB first: 0 = shift MSB first, 1 = shift LSB first. */
        uint64_t cs_sticky             : 1;  /**< [  5:  5](R/W) Configuration chip select is sticky.
                                                                 0 = On a write to MPI()_CFG, chip selects will deassert.
                                                                 1 = On a write to MPI()_CFG, chip selects will retain their previous
                                                                 values (but see also MPI()_TX[LEAVECS] and MPI()_CFG[CSHI]). */
        uint64_t reserved_6            : 1;
        uint64_t cshi                  : 1;  /**< [  7:  7](R/W) SPI_CSn_L high: 1 = SPI_CSn_L is asserted high, 0 = SPI_CSn_L is asserted low. */
        uint64_t idleclks              : 2;  /**< [  9:  8](R/W) Idle clocks. When set, guarantees idle SPI clock cycles between commands. If TX only
                                                                 transaction, this doesn't do anything. */
        uint64_t tritx                 : 1;  /**< [ 10: 10](R/W) This works for [LEGACY_DIS] = 0 only on I/O pin 0 (formerly SPI_MOSI).
                                                                 This works for [LEGACY_DIS] = 1 on all I/O pins.
                                                                 Tristate TX. Used only when WIREOR = 1
                                                                 0 = SPI_MOSI pin is driven when slave is not expected to be driving.
                                                                 1 = SPI_MOSI pin is tristated when not transmitting. Setting this for eSPI means
                                                                 TX phase plus first cycle of TAR phase is to follow ESPI standard. */
        uint64_t cslate                : 1;  /**< [ 11: 11](R/W) SPI_CSn_L late.
                                                                 0 = SPI_CSn_L asserts 1/2 SPI clock cycle before the transaction.
                                                                 1 = SPI_CSn_L asserts coincident with the transaction. */
        uint64_t csena0                : 1;  /**< [ 12: 12](R/W) Must be one. */
        uint64_t csena1                : 1;  /**< [ 13: 13](R/W) Must be one. */
        uint64_t csena2                : 1;  /**< [ 14: 14](R/W) Must be one. */
        uint64_t csena3                : 1;  /**< [ 15: 15](R/W) Must be one. */
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor. Value 0x0 disables the SPI clock.

                                                                 _ SPI clock = base clock / (2 * [CLKDIV])

                                                                 where base clock is coprocessor clock or 100 MHz based on [TB100_EN]. If
                                                                 [TB100_EN] is clear, [CLKDIV] must not be 1. */
        uint64_t reserved_29_30        : 2;
        uint64_t legacy_dis            : 1;  /**< [ 31: 31](R/W) Disable legacy mode.
                                                                 0 = Simple SPI/MPI support backward compatible with CN8XXX-series chips.
                                                                 1 = New interface that allows support for ESPI. */
        uint64_t reserved_32_33        : 2;
        uint64_t iomode                : 2;  /**< [ 35: 34](R/W) I/O bus configuration mode.
                                                                 Used when [LEGACY_DIS] is set.
                                                                 Enumerated by MPI_IOMODE_E. */
        uint64_t reserved_36_43        : 8;
        uint64_t cs_espi_en            : 4;  /**< [ 47: 44](R/W) Enable ESPI mode per each slave.  Each bit corresponds to each of the four possible CS's
                                                                 on this MPI.
                                                                 If the bit is 0:
                                                                 * CRC hardware is disabled.
                                                                 * The turn around time is default for SPI.
                                                                 * No special parsing in hardware.

                                                                 If the bit is 1:
                                                                 * CRC hardware is enabled. Hardware will automatically calculate CRC for one
                                                                 transaction and then apply it to the end of the transmission. On a read it will apply to
                                                                 end of transaction and then check the CRC on response and if there is an error the
                                                                 MPI()_STS[CRC_ERR] bit will be set.
                                                                 * The turn around time (TAR in the ESPI spec) is set to two cycles.
                                                                 * Parsing for special state is enabled.

                                                                 Internal:
                                                                 Regarding CRCs: On a write, It would actually internally increase the tx_count and
                                                                 total_count by 1.  On a read (tx count != total_count) it would add 1 to tx_count and 2
                                                                 to total_count) so it would get the recieve CRC as well. */
        uint64_t reserved_48           : 1;
        uint64_t tb100_en              : 1;  /**< [ 49: 49](R/W) SPI 100 MHz clock enable. See [CLKDIV].
                                                                 0 = Use system clock as base frequency. This provides higher granularity, but
                                                                 may require changing [CLKDIV] if the system clock frequency is changed.
                                                                 1 = Use 100 MHz clock as base frequency. This is the reset value to enable the
                                                                 boot process to be frequency agnostic. */
        uint64_t double_buf_en         : 1;  /**< [ 50: 50](R/W) Enable double-buffer mode.
                                                                 0 = Single transmit/receive buffer of 1152 bytes.
                                                                 1 = Buffer is split in two.  Each transmit/receive buffer is 576 bytes.
                                                                 Buffer is selected with MPI()_XMIT[BUF_SEL] */
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } cn96xxp3;
    /* struct cavm_mpix_cfg_cn96xxp3 cn98xx; */
    struct cavm_mpix_cfg_cnf95xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_51_63        : 13;
        uint64_t reserved_50           : 1;
        uint64_t tb100_en              : 1;  /**< [ 49: 49](R/W) SPI 100 MHz clock enable. See [CLKDIV].
                                                                 0 = Use system clock as base frequency. This provides higher granularity, but
                                                                 may require changing [CLKDIV] if the system clock frequency is changed.
                                                                 1 = Use 100 MHz clock as base frequency. This is the reset value to enable the
                                                                 boot process to be frequency agnostic. */
        uint64_t reserved_48           : 1;
        uint64_t cs_espi_en            : 4;  /**< [ 47: 44](R/W) Enable ESPI mode per each slave.  Each bit corresponds to each of the four possible CS's
                                                                 on this MPI.
                                                                 If the bit is 0:
                                                                 * CRC hardware is disabled.
                                                                 * The turn around time is default for SPI.
                                                                 * No special parsing in hardware.

                                                                 If the bit is 1:
                                                                 * CRC hardware is enabled. Hardware will automatically calculate CRC for one
                                                                 transaction and then apply it to the end of the transmission. On a read it will apply to
                                                                 end of transaction and then check the CRC on response and if there is an error the
                                                                 MPI()_STS[CRC_ERR] bit will be set.
                                                                 * The turn around time (TAR in the ESPI spec) is set to two cycles.
                                                                 * Parsing for special state is enabled.

                                                                 Internal:
                                                                 Regarding CRCs: On a write, It would actually internally increase the tx_count and
                                                                 total_count by 1.  On a read (tx count != total_count) it would add 1 to tx_count and 2
                                                                 to total_count) so it would get the recieve CRC as well. */
        uint64_t reserved_36_43        : 8;
        uint64_t iomode                : 2;  /**< [ 35: 34](R/W) I/O bus configuration mode.
                                                                 Used when [LEGACY_DIS] is set.
                                                                 Enumerated by MPI_IOMODE_E. */
        uint64_t reserved_32_33        : 2;
        uint64_t legacy_dis            : 1;  /**< [ 31: 31](R/W) Disable legacy mode.
                                                                 0 = Simple SPI/MPI support backward compatible with CN8XXX-series chips.
                                                                 1 = New interface that allows support for ESPI. */
        uint64_t reserved_29_30        : 2;
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor. Value 0x0 disables the SPI clock.

                                                                 _ SPI clock = base clock / (2 * [CLKDIV])

                                                                 where base clock is coprocessor clock or 100 MHz based on [TB100_EN]. If
                                                                 [TB100_EN] is clear, [CLKDIV] must not be 1. */
        uint64_t csena3                : 1;  /**< [ 15: 15](R/W) Must be one. */
        uint64_t csena2                : 1;  /**< [ 14: 14](R/W) Must be one. */
        uint64_t csena1                : 1;  /**< [ 13: 13](R/W) Must be one. */
        uint64_t csena0                : 1;  /**< [ 12: 12](R/W) Must be one. */
        uint64_t cslate                : 1;  /**< [ 11: 11](R/W) SPI_CSn_L late.
                                                                 0 = SPI_CSn_L asserts 1/2 SPI clock cycle before the transaction.
                                                                 1 = SPI_CSn_L asserts coincident with the transaction. */
        uint64_t tritx                 : 1;  /**< [ 10: 10](R/W) This works for [LEGACY_DIS] = 0 only on I/O pin 0 (formerly SPI_MOSI).
                                                                 This works for [LEGACY_DIS] = 1 on all I/O pins.
                                                                 Tristate TX. Used only when WIREOR = 1
                                                                 0 = SPI_MOSI pin is driven when slave is not expected to be driving.
                                                                 1 = SPI_MOSI pin is tristated when not transmitting. Setting this for eSPI means
                                                                 TX phase plus first cycle of TAR phase is to follow ESPI standard. */
        uint64_t idleclks              : 2;  /**< [  9:  8](R/W) Idle clocks. When set, guarantees idle SPI clock cycles between commands. If TX only
                                                                 transaction, this doesn't do anything. */
        uint64_t cshi                  : 1;  /**< [  7:  7](R/W) SPI_CSn_L high: 1 = SPI_CSn_L is asserted high, 0 = SPI_CSn_L is asserted low. */
        uint64_t reserved_6            : 1;
        uint64_t cs_sticky             : 1;  /**< [  5:  5](R/W) Configuration chip select is sticky.
                                                                 0 = On a write to MPI()_CFG, chip selects will deassert.
                                                                 1 = On a write to MPI()_CFG, chip selects will retain their previous
                                                                 values (but see also MPI()_TX[LEAVECS] and MPI()_CFG[CSHI]). */
        uint64_t lsbfirst              : 1;  /**< [  4:  4](R/W) This bit should only be used when [LEGACY_DIS] is 0. Do not use this with ESPI, it could
                                                                 screw up the protocol.
                                                                 Shift LSB first: 0 = shift MSB first, 1 = shift LSB first. */
        uint64_t wireor                : 1;  /**< [  3:  3](R/W) Only used when [LEGACY_DIS] = 0, otherwise see MPI_IOMODE_E.
                                                                 Wire-OR MOSI and MISO.
                                                                 0 = SPI_MOSI and SPI_MISO are separate wires (SPI). SPI_MOSI pin is always driven.
                                                                 1 = SPI_MOSI/MISO is all from SPI_MOSI pin (MPI). SPI_MOSI pin is tristated when not transmitting.
                                                                 If [WIREOR] = 1, SPI_MISO pin is not used by the MPI/SPI engine. */
        uint64_t clk_cont              : 1;  /**< [  2:  2](R/W) Clock control. Only used when ESPI mode is disabled.
                                                                 0 = Clock idles to value given by IDLELO after completion of MPI/SPI transaction.
                                                                 1 = Clock never idles, requires SPI_CSn_L deassertion/assertion between commands. */
        uint64_t idlelo                : 1;  /**< [  1:  1](R/W) Clock idle low/clock invert. Only used when ESPI is disabled, as the ESPI
                                                                 standard requires driving clock always negedge, sampling on posedge, and the
                                                                 clock always starts at 0.
                                                                 0 = SPI_CK idles high, first transition is high-to-low.
                                                                 1 = SPI_CK idles low, first transition is low-to-high. */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) MPI/SPI enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) MPI/SPI enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
        uint64_t idlelo                : 1;  /**< [  1:  1](R/W) Clock idle low/clock invert. Only used when ESPI is disabled, as the ESPI
                                                                 standard requires driving clock always negedge, sampling on posedge, and the
                                                                 clock always starts at 0.
                                                                 0 = SPI_CK idles high, first transition is high-to-low.
                                                                 1 = SPI_CK idles low, first transition is low-to-high. */
        uint64_t clk_cont              : 1;  /**< [  2:  2](R/W) Clock control. Only used when ESPI mode is disabled.
                                                                 0 = Clock idles to value given by IDLELO after completion of MPI/SPI transaction.
                                                                 1 = Clock never idles, requires SPI_CSn_L deassertion/assertion between commands. */
        uint64_t wireor                : 1;  /**< [  3:  3](R/W) Only used when [LEGACY_DIS] = 0, otherwise see MPI_IOMODE_E.
                                                                 Wire-OR MOSI and MISO.
                                                                 0 = SPI_MOSI and SPI_MISO are separate wires (SPI). SPI_MOSI pin is always driven.
                                                                 1 = SPI_MOSI/MISO is all from SPI_MOSI pin (MPI). SPI_MOSI pin is tristated when not transmitting.
                                                                 If [WIREOR] = 1, SPI_MISO pin is not used by the MPI/SPI engine. */
        uint64_t lsbfirst              : 1;  /**< [  4:  4](R/W) This bit should only be used when [LEGACY_DIS] is 0. Do not use this with ESPI, it could
                                                                 screw up the protocol.
                                                                 Shift LSB first: 0 = shift MSB first, 1 = shift LSB first. */
        uint64_t cs_sticky             : 1;  /**< [  5:  5](R/W) Configuration chip select is sticky.
                                                                 0 = On a write to MPI()_CFG, chip selects will deassert.
                                                                 1 = On a write to MPI()_CFG, chip selects will retain their previous
                                                                 values (but see also MPI()_TX[LEAVECS] and MPI()_CFG[CSHI]). */
        uint64_t reserved_6            : 1;
        uint64_t cshi                  : 1;  /**< [  7:  7](R/W) SPI_CSn_L high: 1 = SPI_CSn_L is asserted high, 0 = SPI_CSn_L is asserted low. */
        uint64_t idleclks              : 2;  /**< [  9:  8](R/W) Idle clocks. When set, guarantees idle SPI clock cycles between commands. If TX only
                                                                 transaction, this doesn't do anything. */
        uint64_t tritx                 : 1;  /**< [ 10: 10](R/W) This works for [LEGACY_DIS] = 0 only on I/O pin 0 (formerly SPI_MOSI).
                                                                 This works for [LEGACY_DIS] = 1 on all I/O pins.
                                                                 Tristate TX. Used only when WIREOR = 1
                                                                 0 = SPI_MOSI pin is driven when slave is not expected to be driving.
                                                                 1 = SPI_MOSI pin is tristated when not transmitting. Setting this for eSPI means
                                                                 TX phase plus first cycle of TAR phase is to follow ESPI standard. */
        uint64_t cslate                : 1;  /**< [ 11: 11](R/W) SPI_CSn_L late.
                                                                 0 = SPI_CSn_L asserts 1/2 SPI clock cycle before the transaction.
                                                                 1 = SPI_CSn_L asserts coincident with the transaction. */
        uint64_t csena0                : 1;  /**< [ 12: 12](R/W) Must be one. */
        uint64_t csena1                : 1;  /**< [ 13: 13](R/W) Must be one. */
        uint64_t csena2                : 1;  /**< [ 14: 14](R/W) Must be one. */
        uint64_t csena3                : 1;  /**< [ 15: 15](R/W) Must be one. */
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor. Value 0x0 disables the SPI clock.

                                                                 _ SPI clock = base clock / (2 * [CLKDIV])

                                                                 where base clock is coprocessor clock or 100 MHz based on [TB100_EN]. If
                                                                 [TB100_EN] is clear, [CLKDIV] must not be 1. */
        uint64_t reserved_29_30        : 2;
        uint64_t legacy_dis            : 1;  /**< [ 31: 31](R/W) Disable legacy mode.
                                                                 0 = Simple SPI/MPI support backward compatible with CN8XXX-series chips.
                                                                 1 = New interface that allows support for ESPI. */
        uint64_t reserved_32_33        : 2;
        uint64_t iomode                : 2;  /**< [ 35: 34](R/W) I/O bus configuration mode.
                                                                 Used when [LEGACY_DIS] is set.
                                                                 Enumerated by MPI_IOMODE_E. */
        uint64_t reserved_36_43        : 8;
        uint64_t cs_espi_en            : 4;  /**< [ 47: 44](R/W) Enable ESPI mode per each slave.  Each bit corresponds to each of the four possible CS's
                                                                 on this MPI.
                                                                 If the bit is 0:
                                                                 * CRC hardware is disabled.
                                                                 * The turn around time is default for SPI.
                                                                 * No special parsing in hardware.

                                                                 If the bit is 1:
                                                                 * CRC hardware is enabled. Hardware will automatically calculate CRC for one
                                                                 transaction and then apply it to the end of the transmission. On a read it will apply to
                                                                 end of transaction and then check the CRC on response and if there is an error the
                                                                 MPI()_STS[CRC_ERR] bit will be set.
                                                                 * The turn around time (TAR in the ESPI spec) is set to two cycles.
                                                                 * Parsing for special state is enabled.

                                                                 Internal:
                                                                 Regarding CRCs: On a write, It would actually internally increase the tx_count and
                                                                 total_count by 1.  On a read (tx count != total_count) it would add 1 to tx_count and 2
                                                                 to total_count) so it would get the recieve CRC as well. */
        uint64_t reserved_48           : 1;
        uint64_t tb100_en              : 1;  /**< [ 49: 49](R/W) SPI 100 MHz clock enable. See [CLKDIV].
                                                                 0 = Use system clock as base frequency. This provides higher granularity, but
                                                                 may require changing [CLKDIV] if the system clock frequency is changed.
                                                                 1 = Use 100 MHz clock as base frequency. This is the reset value to enable the
                                                                 boot process to be frequency agnostic. */
        uint64_t reserved_50           : 1;
        uint64_t reserved_51_63        : 13;
#endif /* Word 0 - End */
    } cnf95xxp1;
    /* struct cavm_mpix_cfg_cn96xxp3 cnf95xxp2; */
    /* struct cavm_mpix_cfg_cn96xxp3 loki; */
};
typedef union cavm_mpix_cfg cavm_mpix_cfg_t;

static inline uint64_t CAVM_MPIX_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_CFG(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001000ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_CFG(a) cavm_mpix_cfg_t
#define bustype_CAVM_MPIX_CFG(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_CFG(a) "MPIX_CFG"
#define device_bar_CAVM_MPIX_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_CFG(a) (a)
#define arguments_CAVM_MPIX_CFG(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_cfg2
 *
 * MPI/SPI Advanced Configuration Register
 * This register provides configuration for the overwrite MPI/SPI interface. Writes to the CSR
 * will be unpredictable if done while MPI()_STS[BUSY] is asserted.
 */
union cavm_mpix_cfg2
{
    uint64_t u;
    struct cavm_mpix_cfg2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t delay_spiclk          : 2;  /**< [  7:  6](R/W) Delay the SPICLK between 0 and 3 half-cycles. Default is zero delay. */
        uint64_t reserved_3_5          : 3;
        uint64_t drv_edge              : 1;  /**< [  2:  2](R/W) Data drive clock edge. Set means negedge, clear means posedge. */
        uint64_t ck_idle_lvl           : 1;  /**< [  1:  1](R/W) Clocks IDLE level. */
        uint64_t force_this_cfg        : 1;  /**< [  0:  0](R/W) Force configuration.
                                                                 0 = Use normal CSRs for configuration.
                                                                 1 = Force an override of the configuration to use this reigsters other bits. */
#else /* Word 0 - Little Endian */
        uint64_t force_this_cfg        : 1;  /**< [  0:  0](R/W) Force configuration.
                                                                 0 = Use normal CSRs for configuration.
                                                                 1 = Force an override of the configuration to use this reigsters other bits. */
        uint64_t ck_idle_lvl           : 1;  /**< [  1:  1](R/W) Clocks IDLE level. */
        uint64_t drv_edge              : 1;  /**< [  2:  2](R/W) Data drive clock edge. Set means negedge, clear means posedge. */
        uint64_t reserved_3_5          : 3;
        uint64_t delay_spiclk          : 2;  /**< [  7:  6](R/W) Delay the SPICLK between 0 and 3 half-cycles. Default is zero delay. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_cfg2_s cn9; */
    /* struct cavm_mpix_cfg2_s cn96xxp1; */
    struct cavm_mpix_cfg2_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t delay_spiclk          : 2;  /**< [  7:  6](R/W) Delay the SPICLK between 0 and 3 half-cycles. Default is zero delay. */
        uint64_t reserved_3_5          : 3;
        uint64_t drv_edge              : 1;  /**< [  2:  2](R/W) Data drive clock edge. Set means negedge, clear means posedge. */
        uint64_t ck_idle_lvl           : 1;  /**< [  1:  1](R/W) Clocks IDLE level. */
        uint64_t force_this_cfg        : 1;  /**< [  0:  0](R/W) Force configuration.
                                                                 0 = Use normal CSRs for configuration.
                                                                 1 = Force an override of the configuration to use this registers other bits. */
#else /* Word 0 - Little Endian */
        uint64_t force_this_cfg        : 1;  /**< [  0:  0](R/W) Force configuration.
                                                                 0 = Use normal CSRs for configuration.
                                                                 1 = Force an override of the configuration to use this registers other bits. */
        uint64_t ck_idle_lvl           : 1;  /**< [  1:  1](R/W) Clocks IDLE level. */
        uint64_t drv_edge              : 1;  /**< [  2:  2](R/W) Data drive clock edge. Set means negedge, clear means posedge. */
        uint64_t reserved_3_5          : 3;
        uint64_t delay_spiclk          : 2;  /**< [  7:  6](R/W) Delay the SPICLK between 0 and 3 half-cycles. Default is zero delay. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } cn96xxp3;
    /* struct cavm_mpix_cfg2_cn96xxp3 cn98xx; */
    /* struct cavm_mpix_cfg2_cn96xxp3 cnf95xx; */
    /* struct cavm_mpix_cfg2_cn96xxp3 loki; */
};
typedef union cavm_mpix_cfg2 cavm_mpix_cfg2_t;

static inline uint64_t CAVM_MPIX_CFG2(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_CFG2(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000002000ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_CFG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_CFG2(a) cavm_mpix_cfg2_t
#define bustype_CAVM_MPIX_CFG2(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_CFG2(a) "MPIX_CFG2"
#define device_bar_CAVM_MPIX_CFG2(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_CFG2(a) (a)
#define arguments_CAVM_MPIX_CFG2(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_clken
 *
 * MPI Clock Enable Register
 * This register is to force conditional clock enable.
 */
union cavm_mpix_clken
{
    uint64_t u;
    struct cavm_mpix_clken_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t clken                 : 1;  /**< [  0:  0](R/W) Force the conditional clocking within MPI to be always on. For diagnostic use only. */
#else /* Word 0 - Little Endian */
        uint64_t clken                 : 1;  /**< [  0:  0](R/W) Force the conditional clocking within MPI to be always on. For diagnostic use only. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_clken_s cn; */
};
typedef union cavm_mpix_clken cavm_mpix_clken_t;

static inline uint64_t CAVM_MPIX_CLKEN(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_CLKEN(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000002080ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_CLKEN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_CLKEN(a) cavm_mpix_clken_t
#define bustype_CAVM_MPIX_CLKEN(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_CLKEN(a) "MPIX_CLKEN"
#define device_bar_CAVM_MPIX_CLKEN(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_CLKEN(a) (a)
#define arguments_CAVM_MPIX_CLKEN(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_const
 *
 * MPI Constants Register
 * This register contains constants for software discovery.
 */
union cavm_mpix_const
{
    uint64_t u;
    struct cavm_mpix_const_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t double_buf            : 1;  /**< [ 12: 12](RO) Buffer can be split in half.  See MPI()_CFG[DOUBLE_BUF_EN]. */
        uint64_t reserved_11           : 1;
        uint64_t frequency             : 3;  /**< [ 10:  8](RO) Maximum SPI clock frequency.
                                                                 0x0 = 50 MHz.
                                                                 0x1 = 100 MHz.
                                                                 0x2-0x7 = Reserved. */
        uint64_t reserved_7            : 1;
        uint64_t devices               : 3;  /**< [  6:  4](RO) Maximum Number of independent chip selects (i.e. devices).
                                                                 0x0 = Single device (cs0).
                                                                 0x1 = Two devices (cs0, cs1).
                                                                 0x2 = Three devices (cs0 - cs2).
                                                                 0x3 = Four devices (cs0 - cs3).
                                                                 0x4-0x7 = Reserved. */
        uint64_t width                 : 2;  /**< [  3:  2](RO) Maximum data bus width.
                                                                 0x0 = x4, x2 and x1 data bus widths supported.
                                                                 0x1 = x2 and x1 data bus widths supported.
                                                                 0x2 = x1 data bus width supported.
                                                                 0x3 = Reserved. */
        uint64_t duplex                : 1;  /**< [  1:  1](RO) Full duplex.
                                                                 0 = Full-duplex operations not supported.
                                                                 1 = Full-duplex operations supported. */
        uint64_t espi                  : 1;  /**< [  0:  0](RO) ESPI support.
                                                                 0 = ESPI not supported by this interface.
                                                                 1 = ESPI supported by this interface. */
#else /* Word 0 - Little Endian */
        uint64_t espi                  : 1;  /**< [  0:  0](RO) ESPI support.
                                                                 0 = ESPI not supported by this interface.
                                                                 1 = ESPI supported by this interface. */
        uint64_t duplex                : 1;  /**< [  1:  1](RO) Full duplex.
                                                                 0 = Full-duplex operations not supported.
                                                                 1 = Full-duplex operations supported. */
        uint64_t width                 : 2;  /**< [  3:  2](RO) Maximum data bus width.
                                                                 0x0 = x4, x2 and x1 data bus widths supported.
                                                                 0x1 = x2 and x1 data bus widths supported.
                                                                 0x2 = x1 data bus width supported.
                                                                 0x3 = Reserved. */
        uint64_t devices               : 3;  /**< [  6:  4](RO) Maximum Number of independent chip selects (i.e. devices).
                                                                 0x0 = Single device (cs0).
                                                                 0x1 = Two devices (cs0, cs1).
                                                                 0x2 = Three devices (cs0 - cs2).
                                                                 0x3 = Four devices (cs0 - cs3).
                                                                 0x4-0x7 = Reserved. */
        uint64_t reserved_7            : 1;
        uint64_t frequency             : 3;  /**< [ 10:  8](RO) Maximum SPI clock frequency.
                                                                 0x0 = 50 MHz.
                                                                 0x1 = 100 MHz.
                                                                 0x2-0x7 = Reserved. */
        uint64_t reserved_11           : 1;
        uint64_t double_buf            : 1;  /**< [ 12: 12](RO) Buffer can be split in half.  See MPI()_CFG[DOUBLE_BUF_EN]. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_const_s cn9; */
    /* struct cavm_mpix_const_s cn96xx; */
    /* struct cavm_mpix_const_s cn98xx; */
    struct cavm_mpix_const_cnf95xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t reserved_12           : 1;
        uint64_t reserved_11           : 1;
        uint64_t frequency             : 3;  /**< [ 10:  8](RO) Maximum SPI clock frequency.
                                                                 0x0 = 50 MHz.
                                                                 0x1 = 100 MHz.
                                                                 0x2-0x7 = Reserved. */
        uint64_t reserved_7            : 1;
        uint64_t devices               : 3;  /**< [  6:  4](RO) Maximum Number of independent chip selects (i.e. devices).
                                                                 0x0 = Single device (cs0).
                                                                 0x1 = Two devices (cs0, cs1).
                                                                 0x2 = Three devices (cs0 - cs2).
                                                                 0x3 = Four devices (cs0 - cs3).
                                                                 0x4-0x7 = Reserved. */
        uint64_t width                 : 2;  /**< [  3:  2](RO) Maximum data bus width.
                                                                 0x0 = x4, x2 and x1 data bus widths supported.
                                                                 0x1 = x2 and x1 data bus widths supported.
                                                                 0x2 = x1 data bus width supported.
                                                                 0x3 = Reserved. */
        uint64_t duplex                : 1;  /**< [  1:  1](RO) Full duplex.
                                                                 0 = Full-duplex operations not supported.
                                                                 1 = Full-duplex operations supported. */
        uint64_t espi                  : 1;  /**< [  0:  0](RO) ESPI support.
                                                                 0 = ESPI not supported by this interface.
                                                                 1 = ESPI supported by this interface. */
#else /* Word 0 - Little Endian */
        uint64_t espi                  : 1;  /**< [  0:  0](RO) ESPI support.
                                                                 0 = ESPI not supported by this interface.
                                                                 1 = ESPI supported by this interface. */
        uint64_t duplex                : 1;  /**< [  1:  1](RO) Full duplex.
                                                                 0 = Full-duplex operations not supported.
                                                                 1 = Full-duplex operations supported. */
        uint64_t width                 : 2;  /**< [  3:  2](RO) Maximum data bus width.
                                                                 0x0 = x4, x2 and x1 data bus widths supported.
                                                                 0x1 = x2 and x1 data bus widths supported.
                                                                 0x2 = x1 data bus width supported.
                                                                 0x3 = Reserved. */
        uint64_t devices               : 3;  /**< [  6:  4](RO) Maximum Number of independent chip selects (i.e. devices).
                                                                 0x0 = Single device (cs0).
                                                                 0x1 = Two devices (cs0, cs1).
                                                                 0x2 = Three devices (cs0 - cs2).
                                                                 0x3 = Four devices (cs0 - cs3).
                                                                 0x4-0x7 = Reserved. */
        uint64_t reserved_7            : 1;
        uint64_t frequency             : 3;  /**< [ 10:  8](RO) Maximum SPI clock frequency.
                                                                 0x0 = 50 MHz.
                                                                 0x1 = 100 MHz.
                                                                 0x2-0x7 = Reserved. */
        uint64_t reserved_11           : 1;
        uint64_t reserved_12           : 1;
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } cnf95xxp1;
    /* struct cavm_mpix_const_s cnf95xxp2; */
    /* struct cavm_mpix_const_s loki; */
};
typedef union cavm_mpix_const cavm_mpix_const_t;

static inline uint64_t CAVM_MPIX_CONST(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_CONST(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x804000000000ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x804000000000ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x804000000000ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=1))
        return 0x804000000000ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_CONST(a) cavm_mpix_const_t
#define bustype_CAVM_MPIX_CONST(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_CONST(a) "MPIX_CONST"
#define device_bar_CAVM_MPIX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_CONST(a) (a)
#define arguments_CAVM_MPIX_CONST(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_csclk_active_pc
 *
 * MPI Conditional Coprocessor Clock Counter Register
 * This register counts conditional clocks for power management.
 *
 * This register is reset on chip reset.
 */
union cavm_mpix_csclk_active_pc
{
    uint64_t u;
    struct cavm_mpix_csclk_active_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Count of conditional coprocessor-clock cycles since reset. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_csclk_active_pc_s cn; */
};
typedef union cavm_mpix_csclk_active_pc cavm_mpix_csclk_active_pc_t;

static inline uint64_t CAVM_MPIX_CSCLK_ACTIVE_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_CSCLK_ACTIVE_PC(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x8040000010e8ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_CSCLK_ACTIVE_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_CSCLK_ACTIVE_PC(a) cavm_mpix_csclk_active_pc_t
#define bustype_CAVM_MPIX_CSCLK_ACTIVE_PC(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_CSCLK_ACTIVE_PC(a) "MPIX_CSCLK_ACTIVE_PC"
#define device_bar_CAVM_MPIX_CSCLK_ACTIVE_PC(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_CSCLK_ACTIVE_PC(a) (a)
#define arguments_CAVM_MPIX_CSCLK_ACTIVE_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_dat#
 *
 * MPI/SPI Legacy Data Registers
 * This register is only for MPI()_CFG[LEGACY_DIS]=0, otherwise see MPI()_WIDE_BUF().
 * Set this register for data transmission less than or equal to 8 bytes. Writes to
 * the CSR will be unpredictable if done while MPI()_STS[BUSY] is asserted.
 */
union cavm_mpix_datx
{
    uint64_t u;
    struct cavm_mpix_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t data                  : 8;  /**< [  7:  0](R/W/H) Data to transmit/receive. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 8;  /**< [  7:  0](R/W/H) Data to transmit/receive. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_datx_s cn; */
};
typedef union cavm_mpix_datx cavm_mpix_datx_t;

static inline uint64_t CAVM_MPIX_DATX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_DATX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && ((a<=1) && (b<=8)))
        return 0x804000001080ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    __cavm_csr_fatal("MPIX_DATX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_DATX(a,b) cavm_mpix_datx_t
#define bustype_CAVM_MPIX_DATX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MPIX_DATX(a,b) "MPIX_DATX"
#define device_bar_CAVM_MPIX_DATX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_DATX(a,b) (a)
#define arguments_CAVM_MPIX_DATX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mpi#_espi_rint_ena_w1c
 *
 * MPI ESPI Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union cavm_mpix_espi_rint_ena_w1c
{
    uint64_t u;
    struct cavm_mpix_espi_rint_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t espi_intr             : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for MPI(0..1)_ESPI_RINT_W1C[ESPI_INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t espi_intr             : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for MPI(0..1)_ESPI_RINT_W1C[ESPI_INTR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_espi_rint_ena_w1c_s cn; */
};
typedef union cavm_mpix_espi_rint_ena_w1c cavm_mpix_espi_rint_ena_w1c_t;

static inline uint64_t CAVM_MPIX_ESPI_RINT_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_ESPI_RINT_ENA_W1C(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001148ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_ESPI_RINT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_ESPI_RINT_ENA_W1C(a) cavm_mpix_espi_rint_ena_w1c_t
#define bustype_CAVM_MPIX_ESPI_RINT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_ESPI_RINT_ENA_W1C(a) "MPIX_ESPI_RINT_ENA_W1C"
#define device_bar_CAVM_MPIX_ESPI_RINT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_ESPI_RINT_ENA_W1C(a) (a)
#define arguments_CAVM_MPIX_ESPI_RINT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_espi_rint_ena_w1s
 *
 * MPI ESPI Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union cavm_mpix_espi_rint_ena_w1s
{
    uint64_t u;
    struct cavm_mpix_espi_rint_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t espi_intr             : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for MPI(0..1)_ESPI_RINT_W1C[ESPI_INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t espi_intr             : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for MPI(0..1)_ESPI_RINT_W1C[ESPI_INTR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_espi_rint_ena_w1s_s cn; */
};
typedef union cavm_mpix_espi_rint_ena_w1s cavm_mpix_espi_rint_ena_w1s_t;

static inline uint64_t CAVM_MPIX_ESPI_RINT_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_ESPI_RINT_ENA_W1S(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001150ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_ESPI_RINT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_ESPI_RINT_ENA_W1S(a) cavm_mpix_espi_rint_ena_w1s_t
#define bustype_CAVM_MPIX_ESPI_RINT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_ESPI_RINT_ENA_W1S(a) "MPIX_ESPI_RINT_ENA_W1S"
#define device_bar_CAVM_MPIX_ESPI_RINT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_ESPI_RINT_ENA_W1S(a) (a)
#define arguments_CAVM_MPIX_ESPI_RINT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_espi_rint_w1c
 *
 * MPI ESPI Interrupt Clear Register
 */
union cavm_mpix_espi_rint_w1c
{
    uint64_t u;
    struct cavm_mpix_espi_rint_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t espi_intr             : 64; /**< [ 63:  0](R/W1C/H) Interrupts for MPI_INT_VEC_E::ESPI_INTS(0..63). Physical interrupt sets for a set a
                                                                 virtual wire interrupts in ESPI mode. Software does virtual to physical mapping. */
#else /* Word 0 - Little Endian */
        uint64_t espi_intr             : 64; /**< [ 63:  0](R/W1C/H) Interrupts for MPI_INT_VEC_E::ESPI_INTS(0..63). Physical interrupt sets for a set a
                                                                 virtual wire interrupts in ESPI mode. Software does virtual to physical mapping. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_espi_rint_w1c_s cn; */
};
typedef union cavm_mpix_espi_rint_w1c cavm_mpix_espi_rint_w1c_t;

static inline uint64_t CAVM_MPIX_ESPI_RINT_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_ESPI_RINT_W1C(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001138ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_ESPI_RINT_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_ESPI_RINT_W1C(a) cavm_mpix_espi_rint_w1c_t
#define bustype_CAVM_MPIX_ESPI_RINT_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_ESPI_RINT_W1C(a) "MPIX_ESPI_RINT_W1C"
#define device_bar_CAVM_MPIX_ESPI_RINT_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_ESPI_RINT_W1C(a) (a)
#define arguments_CAVM_MPIX_ESPI_RINT_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_espi_rint_w1s
 *
 * MPI ESPI Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mpix_espi_rint_w1s
{
    uint64_t u;
    struct cavm_mpix_espi_rint_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t espi_intr             : 64; /**< [ 63:  0](R/W1S/H) Reads or sets MPI(0..1)_ESPI_RINT_W1C[ESPI_INTR]. */
#else /* Word 0 - Little Endian */
        uint64_t espi_intr             : 64; /**< [ 63:  0](R/W1S/H) Reads or sets MPI(0..1)_ESPI_RINT_W1C[ESPI_INTR]. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_espi_rint_w1s_s cn; */
};
typedef union cavm_mpix_espi_rint_w1s cavm_mpix_espi_rint_w1s_t;

static inline uint64_t CAVM_MPIX_ESPI_RINT_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_ESPI_RINT_W1S(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001140ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_ESPI_RINT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_ESPI_RINT_W1S(a) cavm_mpix_espi_rint_w1s_t
#define bustype_CAVM_MPIX_ESPI_RINT_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_ESPI_RINT_W1S(a) "MPIX_ESPI_RINT_W1S"
#define device_bar_CAVM_MPIX_ESPI_RINT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_ESPI_RINT_W1S(a) (a)
#define arguments_CAVM_MPIX_ESPI_RINT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_force_cs
 *
 * MPI Manual Chip Select Register
 */
union cavm_mpix_force_cs
{
    uint64_t u;
    struct cavm_mpix_force_cs_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t csid                  : 4;  /**< [  3:  0](R/W) Force chip select on. One bit per chip select.
                                                                 When one, forces the corresponding chip select active regardless of operation.
                                                                 Potentially used with devices that require CS be asserted or held more than
                                                                 typical MOSI timing (1/2 SPI clock). */
#else /* Word 0 - Little Endian */
        uint64_t csid                  : 4;  /**< [  3:  0](R/W) Force chip select on. One bit per chip select.
                                                                 When one, forces the corresponding chip select active regardless of operation.
                                                                 Potentially used with devices that require CS be asserted or held more than
                                                                 typical MOSI timing (1/2 SPI clock). */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_force_cs_s cn; */
};
typedef union cavm_mpix_force_cs cavm_mpix_force_cs_t;

static inline uint64_t CAVM_MPIX_FORCE_CS(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_FORCE_CS(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x804000002088ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x804000002088ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_CNF95XX) && (a<=1))
        return 0x804000002088ll + 0x1000000000ll * ((a) & 0x1);
    if (cavm_is_model(OCTEONTX_LOKI) && (a<=1))
        return 0x804000002088ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_FORCE_CS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_FORCE_CS(a) cavm_mpix_force_cs_t
#define bustype_CAVM_MPIX_FORCE_CS(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_FORCE_CS(a) "MPIX_FORCE_CS"
#define device_bar_CAVM_MPIX_FORCE_CS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_FORCE_CS(a) (a)
#define arguments_CAVM_MPIX_FORCE_CS(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_int_ena_w1c
 *
 * MPI/SPI Interrupt Enable Clear Register
 * This register clears interrupt enables.
 */
union cavm_mpix_int_ena_w1c
{
    uint64_t u;
    struct cavm_mpix_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1C) Reads or clears MPI()_INT_ENA_W1S[MPI_INTR]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1C) Reads or clears MPI()_INT_ENA_W1S[MPI_INTR]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_int_ena_w1c_s cn; */
};
typedef union cavm_mpix_int_ena_w1c cavm_mpix_int_ena_w1c_t;

static inline uint64_t CAVM_MPIX_INT_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_INT_ENA_W1C(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001030ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_INT_ENA_W1C(a) cavm_mpix_int_ena_w1c_t
#define bustype_CAVM_MPIX_INT_ENA_W1C(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_INT_ENA_W1C(a) "MPIX_INT_ENA_W1C"
#define device_bar_CAVM_MPIX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_INT_ENA_W1C(a) (a)
#define arguments_CAVM_MPIX_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_int_ena_w1s
 *
 * MPI/SPI Interrupt Enable Set Register
 * This register sets interrupt enables.
 */
union cavm_mpix_int_ena_w1s
{
    uint64_t u;
    struct cavm_mpix_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1S) Enables reporting of MPI()_STS[MPI_INTR]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1S) Enables reporting of MPI()_STS[MPI_INTR]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_int_ena_w1s_s cn; */
};
typedef union cavm_mpix_int_ena_w1s cavm_mpix_int_ena_w1s_t;

static inline uint64_t CAVM_MPIX_INT_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_INT_ENA_W1S(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001038ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_INT_ENA_W1S(a) cavm_mpix_int_ena_w1s_t
#define bustype_CAVM_MPIX_INT_ENA_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_INT_ENA_W1S(a) "MPIX_INT_ENA_W1S"
#define device_bar_CAVM_MPIX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_INT_ENA_W1S(a) (a)
#define arguments_CAVM_MPIX_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_io_ctl
 *
 * MPI/SPI I/O Control Register
 * This register controls the MPI0 I/O drive strength and slew rates. MPI1 outputs are
 * controlled by GPIO_IO_CTL[DRIVE2] and GPIO_IO_CTL[SLEW2].
 */
union cavm_mpix_io_ctl
{
    uint64_t u;
    struct cavm_mpix_io_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_4_63         : 60;
        uint64_t drive                 : 2;  /**< [  3:  2](R/W) MPI/SPI bus pin output drive strength.
                                                                 0x0 = 2 mA.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 16 mA. */
        uint64_t reserved_1            : 1;
        uint64_t slew                  : 1;  /**< [  0:  0](R/W) MPI/SPI bus pins output slew rate control.
                                                                 0 = Low slew rate.
                                                                 1 = High slew rate. */
#else /* Word 0 - Little Endian */
        uint64_t slew                  : 1;  /**< [  0:  0](R/W) MPI/SPI bus pins output slew rate control.
                                                                 0 = Low slew rate.
                                                                 1 = High slew rate. */
        uint64_t reserved_1            : 1;
        uint64_t drive                 : 2;  /**< [  3:  2](R/W) MPI/SPI bus pin output drive strength.
                                                                 0x0 = 2 mA.
                                                                 0x1 = 4 mA.
                                                                 0x2 = 8 mA.
                                                                 0x3 = 16 mA. */
        uint64_t reserved_4_63         : 60;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_io_ctl_s cn; */
};
typedef union cavm_mpix_io_ctl cavm_mpix_io_ctl_t;

static inline uint64_t CAVM_MPIX_IO_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_IO_CTL(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001048ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_IO_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_IO_CTL(a) cavm_mpix_io_ctl_t
#define bustype_CAVM_MPIX_IO_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_IO_CTL(a) "MPIX_IO_CTL"
#define device_bar_CAVM_MPIX_IO_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_IO_CTL(a) (a)
#define arguments_CAVM_MPIX_IO_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_msix_pba#
 *
 * MPI/SPI MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the MPI_INT_VEC_E enumeration.
 */
union cavm_mpix_msix_pbax
{
    uint64_t u;
    struct cavm_mpix_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated MPI()_MSIX_VEC()_CTL, enumerated by MPI_INT_VEC_E. Bits
                                                                 that have no associated MPI_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated MPI()_MSIX_VEC()_CTL, enumerated by MPI_INT_VEC_E. Bits
                                                                 that have no associated MPI_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_msix_pbax_s cn; */
};
typedef union cavm_mpix_msix_pbax cavm_mpix_msix_pbax_t;

static inline uint64_t CAVM_MPIX_MSIX_PBAX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_MSIX_PBAX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && ((a<=1) && (b<=1)))
        return 0x804000ff0000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __cavm_csr_fatal("MPIX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_MSIX_PBAX(a,b) cavm_mpix_msix_pbax_t
#define bustype_CAVM_MPIX_MSIX_PBAX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MPIX_MSIX_PBAX(a,b) "MPIX_MSIX_PBAX"
#define device_bar_CAVM_MPIX_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MPIX_MSIX_PBAX(a,b) (a)
#define arguments_CAVM_MPIX_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mpi#_msix_vec#_addr
 *
 * MPI/SPI MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the MPI_INT_VEC_E enumeration.
 */
union cavm_mpix_msix_vecx_addr
{
    uint64_t u;
    struct cavm_mpix_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's MPI()_MSIX_VEC()_ADDR, MPI()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of MPI()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_MPI_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's MPI()_MSIX_VEC()_ADDR, MPI()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of MPI()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_MPI_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_msix_vecx_addr_s cn9; */
    /* struct cavm_mpix_msix_vecx_addr_s cn96xxp1; */
    struct cavm_mpix_msix_vecx_addr_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 51; /**< [ 52:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's MPI()_MSIX_VEC()_ADDR, MPI()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of MPI()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_MPI_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
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
                                                                 1 = This vector's MPI()_MSIX_VEC()_ADDR, MPI()_MSIX_VEC()_CTL, and corresponding
                                                                 bit of MPI()_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_MPI_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
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
    /* struct cavm_mpix_msix_vecx_addr_cn96xxp3 cn98xx; */
    /* struct cavm_mpix_msix_vecx_addr_cn96xxp3 cnf95xx; */
    /* struct cavm_mpix_msix_vecx_addr_cn96xxp3 loki; */
};
typedef union cavm_mpix_msix_vecx_addr cavm_mpix_msix_vecx_addr_t;

static inline uint64_t CAVM_MPIX_MSIX_VECX_ADDR(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_MSIX_VECX_ADDR(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && ((a<=1) && (b<=64)))
        return 0x804000f00000ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x7f);
    __cavm_csr_fatal("MPIX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_MSIX_VECX_ADDR(a,b) cavm_mpix_msix_vecx_addr_t
#define bustype_CAVM_MPIX_MSIX_VECX_ADDR(a,b) CSR_TYPE_NCB
#define basename_CAVM_MPIX_MSIX_VECX_ADDR(a,b) "MPIX_MSIX_VECX_ADDR"
#define device_bar_CAVM_MPIX_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MPIX_MSIX_VECX_ADDR(a,b) (a)
#define arguments_CAVM_MPIX_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mpi#_msix_vec#_ctl
 *
 * MPI/SPI MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the MPI_INT_VEC_E enumeration.
 */
union cavm_mpix_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_mpix_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 32; /**< [ 31:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_msix_vecx_ctl_s cn; */
};
typedef union cavm_mpix_msix_vecx_ctl cavm_mpix_msix_vecx_ctl_t;

static inline uint64_t CAVM_MPIX_MSIX_VECX_CTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_MSIX_VECX_CTL(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && ((a<=1) && (b<=64)))
        return 0x804000f00008ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x7f);
    __cavm_csr_fatal("MPIX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_MSIX_VECX_CTL(a,b) cavm_mpix_msix_vecx_ctl_t
#define bustype_CAVM_MPIX_MSIX_VECX_CTL(a,b) CSR_TYPE_NCB
#define basename_CAVM_MPIX_MSIX_VECX_CTL(a,b) "MPIX_MSIX_VECX_CTL"
#define device_bar_CAVM_MPIX_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MPIX_MSIX_VECX_CTL(a,b) (a)
#define arguments_CAVM_MPIX_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mpi#_rcvd#
 *
 * MPI/SPI Receive Buffer Register
 * This register is for both legacy and nonlegacy modes.  The data bits received from the slave device
 * are captured in the register to provide information for full duplex operations.  The
 * data is only valid when
 * MPI()_CFG[IOMODE] is set to MPI_IOMODE_E::X1_UNIDIR.
 */
union cavm_mpix_rcvdx
{
    uint64_t u;
    struct cavm_mpix_rcvdx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Data/Status received. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](RO/H) Data/Status received. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_rcvdx_s cn; */
};
typedef union cavm_mpix_rcvdx cavm_mpix_rcvdx_t;

static inline uint64_t CAVM_MPIX_RCVDX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_RCVDX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=143)))
        return 0x804000002800ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=143)))
        return 0x804000002800ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_CNF95XX) && ((a<=1) && (b<=143)))
        return 0x804000002800ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    if (cavm_is_model(OCTEONTX_LOKI) && ((a<=1) && (b<=143)))
        return 0x804000002800ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    __cavm_csr_fatal("MPIX_RCVDX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_RCVDX(a,b) cavm_mpix_rcvdx_t
#define bustype_CAVM_MPIX_RCVDX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MPIX_RCVDX(a,b) "MPIX_RCVDX"
#define device_bar_CAVM_MPIX_RCVDX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_RCVDX(a,b) (a)
#define arguments_CAVM_MPIX_RCVDX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mpi#_sts
 *
 * MPI/SPI STS Register
 */
union cavm_mpix_sts
{
    uint64_t u;
    struct cavm_mpix_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t crc                   : 8;  /**< [ 39: 32](R/W1C/H) MPI CRC value received. */
        uint64_t reserved_27_31        : 5;
        uint64_t crc_err               : 1;  /**< [ 26: 26](R/W1C/H) MPI CRC error on receive. Software should read this indication to tell if the
                                                                 receive data was error free. */
        uint64_t reserved_19_25        : 7;
        uint64_t rxnum                 : 11; /**< [ 18:  8](RO/H) Actual number of bytes received for the transaction. */
        uint64_t reserved_3_7          : 5;
        uint64_t rcvd_present          : 1;  /**< [  2:  2](RO/H) Received buffer feature present.
                                                                 0 = MPI()_RCVD() not present; accessing it is unpredictable.
                                                                 1 = MPI()_RCVD() register is present. */
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1C/H) MPI interrupt on transaction done.  This interrupt should be cleared
                                                                 before any new SPI/MPI transaction is requested. */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Busy.
                                                                 0 = No MPI/SPI transaction in progress.
                                                                 1 = MPI/SPI engine is processing a transaction. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Busy.
                                                                 0 = No MPI/SPI transaction in progress.
                                                                 1 = MPI/SPI engine is processing a transaction. */
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1C/H) MPI interrupt on transaction done.  This interrupt should be cleared
                                                                 before any new SPI/MPI transaction is requested. */
        uint64_t rcvd_present          : 1;  /**< [  2:  2](RO/H) Received buffer feature present.
                                                                 0 = MPI()_RCVD() not present; accessing it is unpredictable.
                                                                 1 = MPI()_RCVD() register is present. */
        uint64_t reserved_3_7          : 5;
        uint64_t rxnum                 : 11; /**< [ 18:  8](RO/H) Actual number of bytes received for the transaction. */
        uint64_t reserved_19_25        : 7;
        uint64_t crc_err               : 1;  /**< [ 26: 26](R/W1C/H) MPI CRC error on receive. Software should read this indication to tell if the
                                                                 receive data was error free. */
        uint64_t reserved_27_31        : 5;
        uint64_t crc                   : 8;  /**< [ 39: 32](R/W1C/H) MPI CRC value received. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_sts_s cn9; */
    struct cavm_mpix_sts_cn96xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t crc                   : 8;  /**< [ 39: 32](R/W1C/H) MPI CRC value received. */
        uint64_t reserved_27_31        : 5;
        uint64_t crc_err               : 1;  /**< [ 26: 26](R/W1C/H) MPI CRC error on receive. Software should read this indication to tell if the
                                                                 receive data was error free. */
        uint64_t reserved_19_25        : 7;
        uint64_t rxnum                 : 11; /**< [ 18:  8](RO/H) Actual number of bytes received for the transaction. */
        uint64_t reserved_2_7          : 6;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1C/H) MPI interrupt on transaction done.  This interrupt should be cleared
                                                                 before any new SPI/MPI transaction is requested. */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Busy.
                                                                 0 = No MPI/SPI transaction in progress.
                                                                 1 = MPI/SPI engine is processing a transaction. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Busy.
                                                                 0 = No MPI/SPI transaction in progress.
                                                                 1 = MPI/SPI engine is processing a transaction. */
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1C/H) MPI interrupt on transaction done.  This interrupt should be cleared
                                                                 before any new SPI/MPI transaction is requested. */
        uint64_t reserved_2_7          : 6;
        uint64_t rxnum                 : 11; /**< [ 18:  8](RO/H) Actual number of bytes received for the transaction. */
        uint64_t reserved_19_25        : 7;
        uint64_t crc_err               : 1;  /**< [ 26: 26](R/W1C/H) MPI CRC error on receive. Software should read this indication to tell if the
                                                                 receive data was error free. */
        uint64_t reserved_27_31        : 5;
        uint64_t crc                   : 8;  /**< [ 39: 32](R/W1C/H) MPI CRC value received. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } cn96xxp1;
    /* struct cavm_mpix_sts_s cn96xxp3; */
    /* struct cavm_mpix_sts_s cn98xx; */
    /* struct cavm_mpix_sts_s cnf95xx; */
    /* struct cavm_mpix_sts_s loki; */
};
typedef union cavm_mpix_sts cavm_mpix_sts_t;

static inline uint64_t CAVM_MPIX_STS(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_STS(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001008ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_STS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_STS(a) cavm_mpix_sts_t
#define bustype_CAVM_MPIX_STS(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_STS(a) "MPIX_STS"
#define device_bar_CAVM_MPIX_STS(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_STS(a) (a)
#define arguments_CAVM_MPIX_STS(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_sts_w1s
 *
 * MPI/SPI Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mpix_sts_w1s
{
    uint64_t u;
    struct cavm_mpix_sts_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MPI()_STS[MPI_INTR]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MPI()_STS[MPI_INTR]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_sts_w1s_s cn; */
};
typedef union cavm_mpix_sts_w1s cavm_mpix_sts_w1s_t;

static inline uint64_t CAVM_MPIX_STS_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_STS_W1S(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001020ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_STS_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_STS_W1S(a) cavm_mpix_sts_w1s_t
#define bustype_CAVM_MPIX_STS_W1S(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_STS_W1S(a) "MPIX_STS_W1S"
#define device_bar_CAVM_MPIX_STS_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_STS_W1S(a) (a)
#define arguments_CAVM_MPIX_STS_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_tx
 *
 * LEGACY MPI/SPI Transmit Register
 * This register is the legacy register, and must only be used when MPI()_CFG[LEGACY_DIS]=0.
 * This register shadows the value of MPI()_XMIT.
 * Writes to the CSR will be unpredictable if done while MPI()_STS[BUSY] is asserted.
 */
union cavm_mpix_tx
{
    uint64_t u;
    struct cavm_mpix_tx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t csid                  : 2;  /**< [ 21: 20](WO) Which CS to assert for this transaction. */
        uint64_t reserved_17_19        : 3;
        uint64_t leavecs               : 1;  /**< [ 16: 16](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done, but may
                                                                 deassert when MPI()_CFG is written (see MPI()_CFG[CS_STICKY]. */
        uint64_t buf_sel               : 1;  /**< [ 15: 15](WO) Buffer Selection used when MPI()_CFG[DOUBLE_BUF_EN] is set.
                                                                 Not supported in Legacy Mode.  Must be 0. */
        uint64_t reserved_13_14        : 2;
        uint64_t txnum                 : 5;  /**< [ 12:  8](WO) Number of bytes to transmit. */
        uint64_t reserved_5_7          : 3;
        uint64_t totnum                : 5;  /**< [  4:  0](WO) Total number of bytes to shift (transmit and receive). */
#else /* Word 0 - Little Endian */
        uint64_t totnum                : 5;  /**< [  4:  0](WO) Total number of bytes to shift (transmit and receive). */
        uint64_t reserved_5_7          : 3;
        uint64_t txnum                 : 5;  /**< [ 12:  8](WO) Number of bytes to transmit. */
        uint64_t reserved_13_14        : 2;
        uint64_t buf_sel               : 1;  /**< [ 15: 15](WO) Buffer Selection used when MPI()_CFG[DOUBLE_BUF_EN] is set.
                                                                 Not supported in Legacy Mode.  Must be 0. */
        uint64_t leavecs               : 1;  /**< [ 16: 16](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done, but may
                                                                 deassert when MPI()_CFG is written (see MPI()_CFG[CS_STICKY]. */
        uint64_t reserved_17_19        : 3;
        uint64_t csid                  : 2;  /**< [ 21: 20](WO) Which CS to assert for this transaction. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_tx_s cn9; */
    struct cavm_mpix_tx_cn96xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t csid                  : 2;  /**< [ 21: 20](WO) Which CS to assert for this transaction. */
        uint64_t reserved_17_19        : 3;
        uint64_t leavecs               : 1;  /**< [ 16: 16](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done, but may
                                                                 deassert when MPI()_CFG is written (see MPI()_CFG[CS_STICKY]. */
        uint64_t reserved_13_15        : 3;
        uint64_t txnum                 : 5;  /**< [ 12:  8](WO) Number of bytes to transmit. */
        uint64_t reserved_5_7          : 3;
        uint64_t totnum                : 5;  /**< [  4:  0](WO) Total number of bytes to shift (transmit and receive). */
#else /* Word 0 - Little Endian */
        uint64_t totnum                : 5;  /**< [  4:  0](WO) Total number of bytes to shift (transmit and receive). */
        uint64_t reserved_5_7          : 3;
        uint64_t txnum                 : 5;  /**< [ 12:  8](WO) Number of bytes to transmit. */
        uint64_t reserved_13_15        : 3;
        uint64_t leavecs               : 1;  /**< [ 16: 16](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done, but may
                                                                 deassert when MPI()_CFG is written (see MPI()_CFG[CS_STICKY]. */
        uint64_t reserved_17_19        : 3;
        uint64_t csid                  : 2;  /**< [ 21: 20](WO) Which CS to assert for this transaction. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } cn96xxp1;
    /* struct cavm_mpix_tx_s cn96xxp3; */
    /* struct cavm_mpix_tx_s cn98xx; */
    struct cavm_mpix_tx_cnf95xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t csid                  : 2;  /**< [ 21: 20](WO) Which CS to assert for this transaction. */
        uint64_t reserved_17_19        : 3;
        uint64_t leavecs               : 1;  /**< [ 16: 16](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done, but may
                                                                 deassert when MPI()_CFG is written (see MPI()_CFG[CS_STICKY]. */
        uint64_t reserved_15           : 1;
        uint64_t reserved_13_14        : 2;
        uint64_t txnum                 : 5;  /**< [ 12:  8](WO) Number of bytes to transmit. */
        uint64_t reserved_5_7          : 3;
        uint64_t totnum                : 5;  /**< [  4:  0](WO) Total number of bytes to shift (transmit and receive). */
#else /* Word 0 - Little Endian */
        uint64_t totnum                : 5;  /**< [  4:  0](WO) Total number of bytes to shift (transmit and receive). */
        uint64_t reserved_5_7          : 3;
        uint64_t txnum                 : 5;  /**< [ 12:  8](WO) Number of bytes to transmit. */
        uint64_t reserved_13_14        : 2;
        uint64_t reserved_15           : 1;
        uint64_t leavecs               : 1;  /**< [ 16: 16](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done, but may
                                                                 deassert when MPI()_CFG is written (see MPI()_CFG[CS_STICKY]. */
        uint64_t reserved_17_19        : 3;
        uint64_t csid                  : 2;  /**< [ 21: 20](WO) Which CS to assert for this transaction. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } cnf95xxp1;
    /* struct cavm_mpix_tx_s cnf95xxp2; */
    /* struct cavm_mpix_tx_s loki; */
};
typedef union cavm_mpix_tx cavm_mpix_tx_t;

static inline uint64_t CAVM_MPIX_TX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_TX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001010ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_TX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_TX(a) cavm_mpix_tx_t
#define bustype_CAVM_MPIX_TX(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_TX(a) "MPIX_TX"
#define device_bar_CAVM_MPIX_TX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_TX(a) (a)
#define arguments_CAVM_MPIX_TX(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_wide_buf#
 *
 * MPI/SPI Wide Data Register
 * This register is for both legacy and nonlegacy modes to receive and transmit up
 * to 1K bytes of data buffer plus command header (max 16 bytes). Writes to the
 * CSR will be unpredictable if done while MPI()_STS[BUSY] is asserted.
 */
union cavm_mpix_wide_bufx
{
    uint64_t u;
    struct cavm_mpix_wide_bufx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Data to transmit/receive. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Data to transmit/receive. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_wide_bufx_s cn; */
};
typedef union cavm_mpix_wide_bufx cavm_mpix_wide_bufx_t;

static inline uint64_t CAVM_MPIX_WIDE_BUFX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_WIDE_BUFX(unsigned long a, unsigned long b)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && ((a<=1) && (b<=143)))
        return 0x804000001800ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0xff);
    __cavm_csr_fatal("MPIX_WIDE_BUFX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_WIDE_BUFX(a,b) cavm_mpix_wide_bufx_t
#define bustype_CAVM_MPIX_WIDE_BUFX(a,b) CSR_TYPE_NCB
#define basename_CAVM_MPIX_WIDE_BUFX(a,b) "MPIX_WIDE_BUFX"
#define device_bar_CAVM_MPIX_WIDE_BUFX(a,b) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_WIDE_BUFX(a,b) (a)
#define arguments_CAVM_MPIX_WIDE_BUFX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) mpi#_wide_dat
 *
 * MPI/SPI Legacy Wide Data Register
 * This register is only for MPI()_CFG[LEGACY_DIS]=0, otherwise see MPI()_WIDE_BUF().
 * Set this register for data transmission less than or equal to 8 bytes. Writes to
 * the CSR will be unpredictable if done while MPI()_STS[BUSY] is asserted.
 */
union cavm_mpix_wide_dat
{
    uint64_t u;
    struct cavm_mpix_wide_dat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Data to transmit/receive. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Data to transmit/receive. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_wide_dat_s cn; */
};
typedef union cavm_mpix_wide_dat cavm_mpix_wide_dat_t;

static inline uint64_t CAVM_MPIX_WIDE_DAT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_WIDE_DAT(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001040ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_WIDE_DAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_WIDE_DAT(a) cavm_mpix_wide_dat_t
#define bustype_CAVM_MPIX_WIDE_DAT(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_WIDE_DAT(a) "MPIX_WIDE_DAT"
#define device_bar_CAVM_MPIX_WIDE_DAT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_WIDE_DAT(a) (a)
#define arguments_CAVM_MPIX_WIDE_DAT(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi#_xmit
 *
 * MPI/SPI Transmit Register
 * Transmit transaction register.
 * Writes to the CSR will be unpredictable if done while MPI()_STS[BUSY] is asserted.
 */
union cavm_mpix_xmit
{
    uint64_t u;
    struct cavm_mpix_xmit_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t csid                  : 2;  /**< [ 62: 61](WO) Which CS to assert for this transaction */
        uint64_t leavecs               : 1;  /**< [ 60: 60](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done. */
        uint64_t buf_sel               : 1;  /**< [ 59: 59](WO) Buffer Selection used when MPI()_CFG[DOUBLE_BUF_EN] is set.
                                                                 0 = Contents are sent/received starting from offset 0 in MPI()_WIDE_BUF()/MPI()_RCVD().
                                                                 1 = Contents are sent/received starting from offset 72 in MPI()_WIDE_BUF()/MPI()_RCVD(). */
        uint64_t reserved_31_58        : 28;
        uint64_t txnum                 : 11; /**< [ 30: 20](WO) Number of bytes to transmit. If software writes a value larger than 1152 bytes,
                                                                 hardware will overwrite the number to 1152 bytes. */
        uint64_t reserved_11_19        : 9;
        uint64_t totnum                : 11; /**< [ 10:  0](WO) Total number of bytes to shift (transmit and receive). If you are in ESPI mode,
                                                                 this setting is not guaranteed because RXNUM is up to the slave. If the response
                                                                 is short, the MPI()_STS[MPI_INTR] interrupt will notify software. If software
                                                                 writes this CSR to be larger than 1152 bytes, hardware will overwrite the number
                                                                 as 1152 bytes. */
#else /* Word 0 - Little Endian */
        uint64_t totnum                : 11; /**< [ 10:  0](WO) Total number of bytes to shift (transmit and receive). If you are in ESPI mode,
                                                                 this setting is not guaranteed because RXNUM is up to the slave. If the response
                                                                 is short, the MPI()_STS[MPI_INTR] interrupt will notify software. If software
                                                                 writes this CSR to be larger than 1152 bytes, hardware will overwrite the number
                                                                 as 1152 bytes. */
        uint64_t reserved_11_19        : 9;
        uint64_t txnum                 : 11; /**< [ 30: 20](WO) Number of bytes to transmit. If software writes a value larger than 1152 bytes,
                                                                 hardware will overwrite the number to 1152 bytes. */
        uint64_t reserved_31_58        : 28;
        uint64_t buf_sel               : 1;  /**< [ 59: 59](WO) Buffer Selection used when MPI()_CFG[DOUBLE_BUF_EN] is set.
                                                                 0 = Contents are sent/received starting from offset 0 in MPI()_WIDE_BUF()/MPI()_RCVD().
                                                                 1 = Contents are sent/received starting from offset 72 in MPI()_WIDE_BUF()/MPI()_RCVD(). */
        uint64_t leavecs               : 1;  /**< [ 60: 60](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done. */
        uint64_t csid                  : 2;  /**< [ 62: 61](WO) Which CS to assert for this transaction */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpix_xmit_s cn9; */
    struct cavm_mpix_xmit_cn96xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t csid                  : 2;  /**< [ 62: 61](WO) Which CS to assert for this transaction */
        uint64_t leavecs               : 1;  /**< [ 60: 60](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done. */
        uint64_t reserved_51_59        : 9;
        uint64_t reserved_31_50        : 20;
        uint64_t txnum                 : 11; /**< [ 30: 20](WO) Number of bytes to transmit. If software writes a value larger than 1152 bytes,
                                                                 hardware will overwrite the number to 1152 bytes. */
        uint64_t reserved_11_19        : 9;
        uint64_t totnum                : 11; /**< [ 10:  0](WO) Total number of bytes to shift (transmit and receive). If you are in ESPI mode,
                                                                 this setting is not guaranteed because RXNUM is up to the slave. If the response
                                                                 is short, the MPI()_STS[MPI_INTR] interrupt will notify software. If software
                                                                 writes this CSR to be larger than 1152 bytes, hardware will overwrite the number
                                                                 as 1152 bytes. */
#else /* Word 0 - Little Endian */
        uint64_t totnum                : 11; /**< [ 10:  0](WO) Total number of bytes to shift (transmit and receive). If you are in ESPI mode,
                                                                 this setting is not guaranteed because RXNUM is up to the slave. If the response
                                                                 is short, the MPI()_STS[MPI_INTR] interrupt will notify software. If software
                                                                 writes this CSR to be larger than 1152 bytes, hardware will overwrite the number
                                                                 as 1152 bytes. */
        uint64_t reserved_11_19        : 9;
        uint64_t txnum                 : 11; /**< [ 30: 20](WO) Number of bytes to transmit. If software writes a value larger than 1152 bytes,
                                                                 hardware will overwrite the number to 1152 bytes. */
        uint64_t reserved_31_50        : 20;
        uint64_t reserved_51_59        : 9;
        uint64_t leavecs               : 1;  /**< [ 60: 60](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done. */
        uint64_t csid                  : 2;  /**< [ 62: 61](WO) Which CS to assert for this transaction */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } cn96xxp1;
    struct cavm_mpix_xmit_cn96xxp3
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t csid                  : 2;  /**< [ 62: 61](WO) Which CS to assert for this transaction */
        uint64_t leavecs               : 1;  /**< [ 60: 60](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done. */
        uint64_t buf_sel               : 1;  /**< [ 59: 59](WO) Buffer Selection used when MPI()_CFG[DOUBLE_BUF_EN] is set.
                                                                 0 = Contents are sent/received starting from offset 0 in MPI()_WIDE_BUF()/MPI()_RCVD().
                                                                 1 = Contents are sent/received starting from offset 72 in MPI()_WIDE_BUF()/MPI()_RCVD(). */
        uint64_t reserved_51_58        : 8;
        uint64_t reserved_31_50        : 20;
        uint64_t txnum                 : 11; /**< [ 30: 20](WO) Number of bytes to transmit. If software writes a value larger
                                                                 than 1152 (576 if MPI()_CFG[DOUBLE_BUF_EN] is set) bytes,
                                                                 hardware will overwrite the number to the max value. */
        uint64_t reserved_11_19        : 9;
        uint64_t totnum                : 11; /**< [ 10:  0](WO) Total number of bytes to shift (transmit and receive). If you are in ESPI mode,
                                                                 this setting is not guaranteed because RXNUM is up to the slave. If the response
                                                                 is short, the MPI()_STS[MPI_INTR] interrupt will notify software. If software
                                                                 writes this CSR to be larger than 1152 (576 if MPI()_CFG[DOUBLE_BUF_EN] is set) bytes,
                                                                 hardware set the number to the maximum value. */
#else /* Word 0 - Little Endian */
        uint64_t totnum                : 11; /**< [ 10:  0](WO) Total number of bytes to shift (transmit and receive). If you are in ESPI mode,
                                                                 this setting is not guaranteed because RXNUM is up to the slave. If the response
                                                                 is short, the MPI()_STS[MPI_INTR] interrupt will notify software. If software
                                                                 writes this CSR to be larger than 1152 (576 if MPI()_CFG[DOUBLE_BUF_EN] is set) bytes,
                                                                 hardware set the number to the maximum value. */
        uint64_t reserved_11_19        : 9;
        uint64_t txnum                 : 11; /**< [ 30: 20](WO) Number of bytes to transmit. If software writes a value larger
                                                                 than 1152 (576 if MPI()_CFG[DOUBLE_BUF_EN] is set) bytes,
                                                                 hardware will overwrite the number to the max value. */
        uint64_t reserved_31_50        : 20;
        uint64_t reserved_51_58        : 8;
        uint64_t buf_sel               : 1;  /**< [ 59: 59](WO) Buffer Selection used when MPI()_CFG[DOUBLE_BUF_EN] is set.
                                                                 0 = Contents are sent/received starting from offset 0 in MPI()_WIDE_BUF()/MPI()_RCVD().
                                                                 1 = Contents are sent/received starting from offset 72 in MPI()_WIDE_BUF()/MPI()_RCVD(). */
        uint64_t leavecs               : 1;  /**< [ 60: 60](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done. */
        uint64_t csid                  : 2;  /**< [ 62: 61](WO) Which CS to assert for this transaction */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } cn96xxp3;
    /* struct cavm_mpix_xmit_cn96xxp3 cn98xx; */
    struct cavm_mpix_xmit_cnf95xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_63           : 1;
        uint64_t csid                  : 2;  /**< [ 62: 61](WO) Which CS to assert for this transaction */
        uint64_t leavecs               : 1;  /**< [ 60: 60](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done. */
        uint64_t reserved_59           : 1;
        uint64_t reserved_51_58        : 8;
        uint64_t reserved_31_50        : 20;
        uint64_t txnum                 : 11; /**< [ 30: 20](WO) Number of bytes to transmit. If software writes a value larger
                                                                 than 1152 (576 if MPI()_CFG[DOUBLE_BUF_EN] is set) bytes,
                                                                 hardware will overwrite the number to the max value. */
        uint64_t reserved_11_19        : 9;
        uint64_t totnum                : 11; /**< [ 10:  0](WO) Total number of bytes to shift (transmit and receive). If you are in ESPI mode,
                                                                 this setting is not guaranteed because RXNUM is up to the slave. If the response
                                                                 is short, the MPI()_STS[MPI_INTR] interrupt will notify software. If software
                                                                 writes this CSR to be larger than 1152 (576 if MPI()_CFG[DOUBLE_BUF_EN] is set) bytes,
                                                                 hardware set the number to the maximum value. */
#else /* Word 0 - Little Endian */
        uint64_t totnum                : 11; /**< [ 10:  0](WO) Total number of bytes to shift (transmit and receive). If you are in ESPI mode,
                                                                 this setting is not guaranteed because RXNUM is up to the slave. If the response
                                                                 is short, the MPI()_STS[MPI_INTR] interrupt will notify software. If software
                                                                 writes this CSR to be larger than 1152 (576 if MPI()_CFG[DOUBLE_BUF_EN] is set) bytes,
                                                                 hardware set the number to the maximum value. */
        uint64_t reserved_11_19        : 9;
        uint64_t txnum                 : 11; /**< [ 30: 20](WO) Number of bytes to transmit. If software writes a value larger
                                                                 than 1152 (576 if MPI()_CFG[DOUBLE_BUF_EN] is set) bytes,
                                                                 hardware will overwrite the number to the max value. */
        uint64_t reserved_31_50        : 20;
        uint64_t reserved_51_58        : 8;
        uint64_t reserved_59           : 1;
        uint64_t leavecs               : 1;  /**< [ 60: 60](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done. */
        uint64_t csid                  : 2;  /**< [ 62: 61](WO) Which CS to assert for this transaction */
        uint64_t reserved_63           : 1;
#endif /* Word 0 - End */
    } cnf95xxp1;
    /* struct cavm_mpix_xmit_cn96xxp3 cnf95xxp2; */
    /* struct cavm_mpix_xmit_cn96xxp3 loki; */
};
typedef union cavm_mpix_xmit cavm_mpix_xmit_t;

static inline uint64_t CAVM_MPIX_XMIT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPIX_XMIT(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN9XXX) && (a<=1))
        return 0x804000001018ll + 0x1000000000ll * ((a) & 0x1);
    __cavm_csr_fatal("MPIX_XMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPIX_XMIT(a) cavm_mpix_xmit_t
#define bustype_CAVM_MPIX_XMIT(a) CSR_TYPE_NCB
#define basename_CAVM_MPIX_XMIT(a) "MPIX_XMIT"
#define device_bar_CAVM_MPIX_XMIT(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPIX_XMIT(a) (a)
#define arguments_CAVM_MPIX_XMIT(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi_cfg
 *
 * MPI/SPI Configuration Register
 * This register provides configuration for the MPI/SPI interface.
 */
union cavm_mpi_cfg
{
    uint64_t u;
    struct cavm_mpi_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_29_63        : 35;
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor.
                                                                 SPI_CK = coprocessor clock / (2 * CLKDIV)
                                                                 CLKDIV = coprocessor clock / (2 * SPI_CK) */
        uint64_t csena3                : 1;  /**< [ 15: 15](R/W) Must be one. */
        uint64_t csena2                : 1;  /**< [ 14: 14](R/W) Must be one. */
        uint64_t csena1                : 1;  /**< [ 13: 13](R/W) Must be one. */
        uint64_t csena0                : 1;  /**< [ 12: 12](R/W) Must be one. */
        uint64_t cslate                : 1;  /**< [ 11: 11](R/W) SPI_CSn_L late.
                                                                 0 = SPI_CSn_L asserts 1/2 SPI clock cycle before the transaction.
                                                                 1 = SPI_CSn_L asserts coincident with the transaction. */
        uint64_t tritx                 : 1;  /**< [ 10: 10](R/W) Tristate TX. Used only when WIREOR = 1
                                                                 0 = SPI_DO pin is driven when slave is not expected to be driving.
                                                                 1 = SPI_DO pin is tristated when not transmitting. */
        uint64_t idleclks              : 2;  /**< [  9:  8](R/W) Idle clocks. When set, guarantees idle SPI_CK cycles between commands. */
        uint64_t cshi                  : 1;  /**< [  7:  7](R/W) SPI_CSn_L high: 1 = SPI_CSn_L is asserted high, 0 = SPI_CSn_L is asserted low. */
        uint64_t reserved_5_6          : 2;
        uint64_t lsbfirst              : 1;  /**< [  4:  4](R/W) Shift LSB first: 0 = shift MSB first, 1 = shift LSB first. */
        uint64_t wireor                : 1;  /**< [  3:  3](R/W) Wire-OR DO and DI.
                                                                 0 = SPI_DO and SPI_DI are separate wires (SPI). SPI_DO pin is always driven.
                                                                 1 = SPI_DO/DI is all from SPI_DO pin (MPI). SPI_DO pin is tristated when not transmitting.
                                                                 If [WIREOR] = 1, SPI_DI pin is not used by the MPI/SPI engine. */
        uint64_t clk_cont              : 1;  /**< [  2:  2](R/W) Clock control.
                                                                 0 = Clock idles to value given by IDLELO after completion of MPI/SPI transaction.
                                                                 1 = Clock never idles, requires SPI_CSn_L deassertion/assertion between commands. */
        uint64_t idlelo                : 1;  /**< [  1:  1](R/W) Clock idle low/clock invert.
                                                                 0 = SPI_CK idles high, first transition is high-to-low.
                                                                 1 = SPI_CK idles low, first transition is low-to-high. */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) MPI/SPI enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W) MPI/SPI enable.
                                                                 0 = Pins are tristated.
                                                                 1 = Pins are driven. */
        uint64_t idlelo                : 1;  /**< [  1:  1](R/W) Clock idle low/clock invert.
                                                                 0 = SPI_CK idles high, first transition is high-to-low.
                                                                 1 = SPI_CK idles low, first transition is low-to-high. */
        uint64_t clk_cont              : 1;  /**< [  2:  2](R/W) Clock control.
                                                                 0 = Clock idles to value given by IDLELO after completion of MPI/SPI transaction.
                                                                 1 = Clock never idles, requires SPI_CSn_L deassertion/assertion between commands. */
        uint64_t wireor                : 1;  /**< [  3:  3](R/W) Wire-OR DO and DI.
                                                                 0 = SPI_DO and SPI_DI are separate wires (SPI). SPI_DO pin is always driven.
                                                                 1 = SPI_DO/DI is all from SPI_DO pin (MPI). SPI_DO pin is tristated when not transmitting.
                                                                 If [WIREOR] = 1, SPI_DI pin is not used by the MPI/SPI engine. */
        uint64_t lsbfirst              : 1;  /**< [  4:  4](R/W) Shift LSB first: 0 = shift MSB first, 1 = shift LSB first. */
        uint64_t reserved_5_6          : 2;
        uint64_t cshi                  : 1;  /**< [  7:  7](R/W) SPI_CSn_L high: 1 = SPI_CSn_L is asserted high, 0 = SPI_CSn_L is asserted low. */
        uint64_t idleclks              : 2;  /**< [  9:  8](R/W) Idle clocks. When set, guarantees idle SPI_CK cycles between commands. */
        uint64_t tritx                 : 1;  /**< [ 10: 10](R/W) Tristate TX. Used only when WIREOR = 1
                                                                 0 = SPI_DO pin is driven when slave is not expected to be driving.
                                                                 1 = SPI_DO pin is tristated when not transmitting. */
        uint64_t cslate                : 1;  /**< [ 11: 11](R/W) SPI_CSn_L late.
                                                                 0 = SPI_CSn_L asserts 1/2 SPI clock cycle before the transaction.
                                                                 1 = SPI_CSn_L asserts coincident with the transaction. */
        uint64_t csena0                : 1;  /**< [ 12: 12](R/W) Must be one. */
        uint64_t csena1                : 1;  /**< [ 13: 13](R/W) Must be one. */
        uint64_t csena2                : 1;  /**< [ 14: 14](R/W) Must be one. */
        uint64_t csena3                : 1;  /**< [ 15: 15](R/W) Must be one. */
        uint64_t clkdiv                : 13; /**< [ 28: 16](R/W) Clock divisor.
                                                                 SPI_CK = coprocessor clock / (2 * CLKDIV)
                                                                 CLKDIV = coprocessor clock / (2 * SPI_CK) */
        uint64_t reserved_29_63        : 35;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpi_cfg_s cn; */
};
typedef union cavm_mpi_cfg cavm_mpi_cfg_t;

#define CAVM_MPI_CFG CAVM_MPI_CFG_FUNC()
static inline uint64_t CAVM_MPI_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPI_CFG_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x804000001000ll;
    __cavm_csr_fatal("MPI_CFG", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPI_CFG cavm_mpi_cfg_t
#define bustype_CAVM_MPI_CFG CSR_TYPE_NCB
#define basename_CAVM_MPI_CFG "MPI_CFG"
#define device_bar_CAVM_MPI_CFG 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPI_CFG 0
#define arguments_CAVM_MPI_CFG -1,-1,-1,-1

/**
 * Register (NCB) mpi_dat#
 *
 * MPI/SPI Data Registers
 */
union cavm_mpi_datx
{
    uint64_t u;
    struct cavm_mpi_datx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t data                  : 8;  /**< [  7:  0](R/W/H) Data to transmit/receive. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 8;  /**< [  7:  0](R/W/H) Data to transmit/receive. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpi_datx_s cn; */
};
typedef union cavm_mpi_datx cavm_mpi_datx_t;

static inline uint64_t CAVM_MPI_DATX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPI_DATX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN8XXX) && (a<=8))
        return 0x804000001080ll + 8ll * ((a) & 0xf);
    __cavm_csr_fatal("MPI_DATX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPI_DATX(a) cavm_mpi_datx_t
#define bustype_CAVM_MPI_DATX(a) CSR_TYPE_NCB
#define basename_CAVM_MPI_DATX(a) "MPI_DATX"
#define device_bar_CAVM_MPI_DATX(a) 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPI_DATX(a) (a)
#define arguments_CAVM_MPI_DATX(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi_int_ena_w1c
 *
 * MPI Interrupt Enable Clear Register
 * This register clears interrupt enables.
 */
union cavm_mpi_int_ena_w1c
{
    uint64_t u;
    struct cavm_mpi_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1C) Reads or clears MPI_INT_ENA_W1S[MPI_INTR]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1C) Reads or clears MPI_INT_ENA_W1S[MPI_INTR]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpi_int_ena_w1c_s cn; */
};
typedef union cavm_mpi_int_ena_w1c cavm_mpi_int_ena_w1c_t;

#define CAVM_MPI_INT_ENA_W1C CAVM_MPI_INT_ENA_W1C_FUNC()
static inline uint64_t CAVM_MPI_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPI_INT_ENA_W1C_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x804000001030ll;
    __cavm_csr_fatal("MPI_INT_ENA_W1C", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPI_INT_ENA_W1C cavm_mpi_int_ena_w1c_t
#define bustype_CAVM_MPI_INT_ENA_W1C CSR_TYPE_NCB
#define basename_CAVM_MPI_INT_ENA_W1C "MPI_INT_ENA_W1C"
#define device_bar_CAVM_MPI_INT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPI_INT_ENA_W1C 0
#define arguments_CAVM_MPI_INT_ENA_W1C -1,-1,-1,-1

/**
 * Register (NCB) mpi_int_ena_w1s
 *
 * MPI Interrupt Enable Set Register
 * This register sets interrupt enables.
 */
union cavm_mpi_int_ena_w1s
{
    uint64_t u;
    struct cavm_mpi_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1S) Enables reporting of MPI_STS[MPI_INTR]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1S) Enables reporting of MPI_STS[MPI_INTR]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpi_int_ena_w1s_s cn; */
};
typedef union cavm_mpi_int_ena_w1s cavm_mpi_int_ena_w1s_t;

#define CAVM_MPI_INT_ENA_W1S CAVM_MPI_INT_ENA_W1S_FUNC()
static inline uint64_t CAVM_MPI_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPI_INT_ENA_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x804000001038ll;
    __cavm_csr_fatal("MPI_INT_ENA_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPI_INT_ENA_W1S cavm_mpi_int_ena_w1s_t
#define bustype_CAVM_MPI_INT_ENA_W1S CSR_TYPE_NCB
#define basename_CAVM_MPI_INT_ENA_W1S "MPI_INT_ENA_W1S"
#define device_bar_CAVM_MPI_INT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPI_INT_ENA_W1S 0
#define arguments_CAVM_MPI_INT_ENA_W1S -1,-1,-1,-1

/**
 * Register (NCB) mpi_msix_pba#
 *
 * MPI/SPI MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the MPI_INT_VEC_E enumeration.
 */
union cavm_mpi_msix_pbax
{
    uint64_t u;
    struct cavm_mpi_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated MPI_MSIX_VEC()_CTL, enumerated by MPI_INT_VEC_E. Bits
                                                                 that have no associated MPI_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated MPI_MSIX_VEC()_CTL, enumerated by MPI_INT_VEC_E. Bits
                                                                 that have no associated MPI_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpi_msix_pbax_s cn; */
};
typedef union cavm_mpi_msix_pbax cavm_mpi_msix_pbax_t;

static inline uint64_t CAVM_MPI_MSIX_PBAX(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPI_MSIX_PBAX(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN8XXX) && (a==0))
        return 0x804000ff0000ll + 8ll * ((a) & 0x0);
    __cavm_csr_fatal("MPI_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPI_MSIX_PBAX(a) cavm_mpi_msix_pbax_t
#define bustype_CAVM_MPI_MSIX_PBAX(a) CSR_TYPE_NCB
#define basename_CAVM_MPI_MSIX_PBAX(a) "MPI_MSIX_PBAX"
#define device_bar_CAVM_MPI_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MPI_MSIX_PBAX(a) (a)
#define arguments_CAVM_MPI_MSIX_PBAX(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi_msix_vec#_addr
 *
 * MPI/SPI MSI-X Vector Table Address Registers
 * This register is the MSI-X vector table, indexed by the MPI_INT_VEC_E enumeration.
 */
union cavm_mpi_msix_vecx_addr
{
    uint64_t u;
    struct cavm_mpi_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t addr                  : 47; /**< [ 48:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's MPI_MSIX_VEC()_ADDR, MPI_MSIX_VEC()_CTL, and corresponding
                                                                 bit of MPI_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_MPI_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's MPI_MSIX_VEC()_ADDR, MPI_MSIX_VEC()_CTL, and corresponding
                                                                 bit of MPI_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_MPI_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 47; /**< [ 48:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpi_msix_vecx_addr_s cn; */
};
typedef union cavm_mpi_msix_vecx_addr cavm_mpi_msix_vecx_addr_t;

static inline uint64_t CAVM_MPI_MSIX_VECX_ADDR(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPI_MSIX_VECX_ADDR(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN8XXX) && (a==0))
        return 0x804000f00000ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("MPI_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPI_MSIX_VECX_ADDR(a) cavm_mpi_msix_vecx_addr_t
#define bustype_CAVM_MPI_MSIX_VECX_ADDR(a) CSR_TYPE_NCB
#define basename_CAVM_MPI_MSIX_VECX_ADDR(a) "MPI_MSIX_VECX_ADDR"
#define device_bar_CAVM_MPI_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MPI_MSIX_VECX_ADDR(a) (a)
#define arguments_CAVM_MPI_MSIX_VECX_ADDR(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi_msix_vec#_ctl
 *
 * MPI/SPI MSI-X Vector Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the MPI_INT_VEC_E enumeration.
 */
union cavm_mpi_msix_vecx_ctl
{
    uint64_t u;
    struct cavm_mpi_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t reserved_20_31        : 12;
        uint64_t data                  : 20; /**< [ 19:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 20; /**< [ 19:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t reserved_20_31        : 12;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts will be sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpi_msix_vecx_ctl_s cn; */
};
typedef union cavm_mpi_msix_vecx_ctl cavm_mpi_msix_vecx_ctl_t;

static inline uint64_t CAVM_MPI_MSIX_VECX_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPI_MSIX_VECX_CTL(unsigned long a)
{
    if (cavm_is_model(OCTEONTX_CN8XXX) && (a==0))
        return 0x804000f00008ll + 0x10ll * ((a) & 0x0);
    __cavm_csr_fatal("MPI_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPI_MSIX_VECX_CTL(a) cavm_mpi_msix_vecx_ctl_t
#define bustype_CAVM_MPI_MSIX_VECX_CTL(a) CSR_TYPE_NCB
#define basename_CAVM_MPI_MSIX_VECX_CTL(a) "MPI_MSIX_VECX_CTL"
#define device_bar_CAVM_MPI_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_CAVM_MPI_MSIX_VECX_CTL(a) (a)
#define arguments_CAVM_MPI_MSIX_VECX_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) mpi_sts
 *
 * MPI/SPI STS Register
 */
union cavm_mpi_sts
{
    uint64_t u;
    struct cavm_mpi_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t rxnum                 : 5;  /**< [ 12:  8](RO/H) Actual number of bytes received for the transaction. */
        uint64_t reserved_2_7          : 6;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1C/H) MPI interrupt on transaction done.  This interrupt should be cleared
                                                                 before any new SPI/MPI transaction is requested. */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Busy.
                                                                 0 = No MPI/SPI transaction in progress.
                                                                 1 = MPI/SPI engine is processing a transaction. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Busy.
                                                                 0 = No MPI/SPI transaction in progress.
                                                                 1 = MPI/SPI engine is processing a transaction. */
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1C/H) MPI interrupt on transaction done.  This interrupt should be cleared
                                                                 before any new SPI/MPI transaction is requested. */
        uint64_t reserved_2_7          : 6;
        uint64_t rxnum                 : 5;  /**< [ 12:  8](RO/H) Actual number of bytes received for the transaction. */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpi_sts_s cn; */
};
typedef union cavm_mpi_sts cavm_mpi_sts_t;

#define CAVM_MPI_STS CAVM_MPI_STS_FUNC()
static inline uint64_t CAVM_MPI_STS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPI_STS_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x804000001008ll;
    __cavm_csr_fatal("MPI_STS", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPI_STS cavm_mpi_sts_t
#define bustype_CAVM_MPI_STS CSR_TYPE_NCB
#define basename_CAVM_MPI_STS "MPI_STS"
#define device_bar_CAVM_MPI_STS 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPI_STS 0
#define arguments_CAVM_MPI_STS -1,-1,-1,-1

/**
 * Register (NCB) mpi_sts_w1s
 *
 * MPI Interrupt Set Register
 * This register sets interrupt bits.
 */
union cavm_mpi_sts_w1s
{
    uint64_t u;
    struct cavm_mpi_sts_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MPI_STS[MPI_INTR]. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t mpi_intr              : 1;  /**< [  1:  1](R/W1S/H) Reads or sets MPI_STS[MPI_INTR]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpi_sts_w1s_s cn; */
};
typedef union cavm_mpi_sts_w1s cavm_mpi_sts_w1s_t;

#define CAVM_MPI_STS_W1S CAVM_MPI_STS_W1S_FUNC()
static inline uint64_t CAVM_MPI_STS_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPI_STS_W1S_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x804000001020ll;
    __cavm_csr_fatal("MPI_STS_W1S", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPI_STS_W1S cavm_mpi_sts_w1s_t
#define bustype_CAVM_MPI_STS_W1S CSR_TYPE_NCB
#define basename_CAVM_MPI_STS_W1S "MPI_STS_W1S"
#define device_bar_CAVM_MPI_STS_W1S 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPI_STS_W1S 0
#define arguments_CAVM_MPI_STS_W1S -1,-1,-1,-1

/**
 * Register (NCB) mpi_tx
 *
 * MPI/SPI Transmit Register
 */
union cavm_mpi_tx
{
    uint64_t u;
    struct cavm_mpi_tx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_22_63        : 42;
        uint64_t csid                  : 2;  /**< [ 21: 20](WO) Which CS to assert for this transaction. */
        uint64_t reserved_17_19        : 3;
        uint64_t leavecs               : 1;  /**< [ 16: 16](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done. */
        uint64_t reserved_13_15        : 3;
        uint64_t txnum                 : 5;  /**< [ 12:  8](WO) Number of bytes to transmit. */
        uint64_t reserved_5_7          : 3;
        uint64_t totnum                : 5;  /**< [  4:  0](WO) Total number of bytes to shift (transmit and receive). */
#else /* Word 0 - Little Endian */
        uint64_t totnum                : 5;  /**< [  4:  0](WO) Total number of bytes to shift (transmit and receive). */
        uint64_t reserved_5_7          : 3;
        uint64_t txnum                 : 5;  /**< [ 12:  8](WO) Number of bytes to transmit. */
        uint64_t reserved_13_15        : 3;
        uint64_t leavecs               : 1;  /**< [ 16: 16](WO) Leave SPI_CSn_L asserted.
                                                                 0 = Deassert SPI_CSn_L after the transaction is done.
                                                                 1 = Leave SPI_CSn_L asserted after the transaction is done. */
        uint64_t reserved_17_19        : 3;
        uint64_t csid                  : 2;  /**< [ 21: 20](WO) Which CS to assert for this transaction. */
        uint64_t reserved_22_63        : 42;
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpi_tx_s cn; */
};
typedef union cavm_mpi_tx cavm_mpi_tx_t;

#define CAVM_MPI_TX CAVM_MPI_TX_FUNC()
static inline uint64_t CAVM_MPI_TX_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPI_TX_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x804000001010ll;
    __cavm_csr_fatal("MPI_TX", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPI_TX cavm_mpi_tx_t
#define bustype_CAVM_MPI_TX CSR_TYPE_NCB
#define basename_CAVM_MPI_TX "MPI_TX"
#define device_bar_CAVM_MPI_TX 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPI_TX 0
#define arguments_CAVM_MPI_TX -1,-1,-1,-1

/**
 * Register (NCB) mpi_wide_dat
 *
 * MPI/SPI Wide Data Register
 */
union cavm_mpi_wide_dat
{
    uint64_t u;
    struct cavm_mpi_wide_dat_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Data to transmit/receive. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Data to transmit/receive. */
#endif /* Word 0 - End */
    } s;
    /* struct cavm_mpi_wide_dat_s cn; */
};
typedef union cavm_mpi_wide_dat cavm_mpi_wide_dat_t;

#define CAVM_MPI_WIDE_DAT CAVM_MPI_WIDE_DAT_FUNC()
static inline uint64_t CAVM_MPI_WIDE_DAT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t CAVM_MPI_WIDE_DAT_FUNC(void)
{
    if (cavm_is_model(OCTEONTX_CN8XXX))
        return 0x804000001040ll;
    __cavm_csr_fatal("MPI_WIDE_DAT", 0, 0, 0, 0, 0, 0, 0);
}

#define typedef_CAVM_MPI_WIDE_DAT cavm_mpi_wide_dat_t
#define bustype_CAVM_MPI_WIDE_DAT CSR_TYPE_NCB
#define basename_CAVM_MPI_WIDE_DAT "MPI_WIDE_DAT"
#define device_bar_CAVM_MPI_WIDE_DAT 0x0 /* PF_BAR0 */
#define busnum_CAVM_MPI_WIDE_DAT 0
#define arguments_CAVM_MPI_WIDE_DAT -1,-1,-1,-1

#endif /* __CAVM_CSRS_MPI_H__ */
