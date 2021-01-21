#ifndef W5500_DEFS_H
#define W5500_DEFS_H

#define ETH_SEL_COMM_REG 0x00
#define ETH_SEL_SOC0_REG 0x01
#define ETH_SEL_SOC0_TXB 0x02
#define ETH_SEL_SOC0_RXB 0x03
#define ETH_SEL_SOC1_REG 0x05
#define ETH_SEL_SOC1_TXB 0x06
#define ETH_SEL_SOC1_RXB 0x07
#define ETH_SEL_SOC2_REG 0x09
#define ETH_SEL_SOC2_TXB 0x0a
#define ETH_SEL_SOC2_RXB 0x0b
#define ETH_SEL_SOC3_REG 0x0d
#define ETH_SEL_SOC3_TXB 0x0e
#define ETH_SEL_SOC3_RXB 0x0f
#define ETH_SEL_SOC4_REG 0x11
#define ETH_SEL_SOC4_TXB 0x12
#define ETH_SEL_SOC4_RXB 0x13
#define ETH_SEL_SOC5_REG 0x15
#define ETH_SEL_SOC5_TXB 0x16
#define ETH_SEL_SOC5_RXB 0x17
#define ETH_SEL_SOC6_REG 0x19
#define ETH_SEL_SOC6_TXB 0x1a
#define ETH_SEL_SOC6_RXB 0x1b
#define ETH_SEL_SOC7_REG 0x1d
#define ETH_SEL_SOC7_TXB 0x1e
#define ETH_SEL_SOC7_RXB 0x1f

#define ETH_ACCESS_MODE_RD 0
#define ETH_ACCESS_MODE_WR 1

#define ETH_OPMODE_VDLM_NB 0
#define ETH_OPMODE_FDLM_1B 1
#define ETH_OPMODE_FDLM_2B 2
#define ETH_OPMODE_FDLM_4B 3

#define ETH_REG_MR        0x0000
#define ETH_REG_GAR0      0x0001
#define ETH_REG_GAR1      0x0002
#define ETH_REG_GAR2      0x0003
#define ETH_REG_GAR3      0x0004
#define ETH_REG_SUBR0     0x0005
#define ETH_REG_SUBR1     0x0006
#define ETH_REG_SUBR2     0x0007
#define ETH_REG_SUBR3     0x0008
#define ETH_REG_SHAR0     0x0009
#define ETH_REG_SHAR1     0x000a
#define ETH_REG_SHAR2     0x000b
#define ETH_REG_SHAR3     0x000c
#define ETH_REG_SHAR4     0x000d
#define ETH_REG_SHAR5     0x000e
#define ETH_REG_SIRP0     0x000f
#define ETH_REG_SIRP1     0x0010
#define ETH_REG_SIRP2     0x0011
#define ETH_REG_SIRP3     0x0012
#define ETH_REG_INTLEVEL0 0x0013
#define ETH_REG_INTLEVEL1 0x0014
#define ETH_REG_IR        0x0015
#define ETH_REG_IMR       0x0016
#define ETH_REG_SIR       0x0017
#define ETH_REG_SIMR      0x0018
#define ETH_REG_RTR0      0x0019
#define ETH_REG_RTR1      0x001a
#define ETH_REG_RCR       0x001b
#define ETH_REG_PTIMER    0x001c
#define ETH_REG_PMAGIC    0x001d
#define ETH_REG_PHAR0     0x001e
#define ETH_REG_PHAR1     0x001f
#define ETH_REG_PHAR2     0x0020
#define ETH_REG_PHAR3     0x0021
#define ETH_REG_PHAR4     0x0022
#define ETH_REG_PHAR5     0x0023
#define ETH_REG_PSID0     0x0024
#define ETH_REG_PSID1     0x0025
#define ETH_REG_PMRU0     0x0026
#define ETH_REG_PMRU1     0x0027
#define ETH_REG_UIPR0     0x0028
#define ETH_REG_UIPR1     0x0029
#define ETH_REG_UIPR2     0x002a
#define ETH_REG_UIPR3     0x002b
#define ETH_REG_UPORTR0   0x002c
#define ETH_REG_UPORTR1   0x002d
#define ETH_REG_PHYCFGR   0x002e
#define ETH_REG_VERSIONR  0x0039

#define ETH_REG_SN_MR         0x0000
#define ETH_REG_SN_CR         0x0001
#define ETH_REG_SN_IR         0x0002
#define ETH_REG_SN_SR         0x0003
#define ETH_REG_SN_PORT0      0x0004
#define ETH_REG_SN_PORT1      0x0005
#define ETH_REG_SN_DHAR0      0x0006
#define ETH_REG_SN_DHAR1      0x0007
#define ETH_REG_SN_DHAR2      0x0008
#define ETH_REG_SN_DHAR3      0x0009
#define ETH_REG_SN_DHAR4      0x000a
#define ETH_REG_SN_DHAR5      0x000b
#define ETH_REG_SN_DIPR0      0x000c
#define ETH_REG_SN_DIPR1      0x000d
#define ETH_REG_SN_DIPR2      0x000e
#define ETH_REG_SN_DIPR3      0x000f
#define ETH_REG_SN_DPORT0     0x0010
#define ETH_REG_SN_DPORT1     0x0011
#define ETH_REG_SN_MSSR0      0x0012
#define ETH_REG_SN_MSSR1      0x0013
#define ETH_REG_SN_TOS        0x0015
#define ETH_REG_SN_TTL        0x0016
#define ETH_REG_SN_RXBUF_SIZE 0x001e
#define ETH_REG_SN_TXBUF_SIZE 0x001f
#define ETH_REG_SN_TX_FSR0    0x0020
#define ETH_REG_SN_TX_FRS1    0x0021
#define ETH_REG_SN_TX_RD0     0x0022
#define ETH_REG_SN_TX_RD1     0x0023
#define ETH_REG_SN_TX_WR0     0x0024
#define ETH_REG_SN_TX_WR1     0x0025
#define ETH_REG_SN_RX_RSR0    0x0026
#define ETH_REG_SN_RX_RSR1    0x0027
#define ETH_REG_SN_RX_RD0     0x0028
#define ETH_REG_SN_RX_RD1     0x0029
#define ETH_REG_SN_RX_WR0     0x002a
#define ETH_REG_SN_RX_WR1     0x002b
#define ETH_REG_SN_IMR        0x002c
#define ETH_REG_SN_FRAG0      0x002d
#define ETH_REG_SN_FRAG1      0x002e
#define ETH_REG_SN_KPALVTR    0x002f

//TODO: 30. oldal v�ge, m�r csak a bitek megnevez�sei vannak h�tra _BV

#endif