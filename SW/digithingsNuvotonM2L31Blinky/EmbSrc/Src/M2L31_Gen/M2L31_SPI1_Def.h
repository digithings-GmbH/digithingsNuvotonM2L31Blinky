// Base Addres of SPI1 = 0x40062000

#define M2L31_SPI1_SPIx_CTL_RESET_VALUE 0x00000034
typedef struct {
    unsigned long SPIEN : 1;
    unsigned long RXNEG : 1;
    unsigned long TXNEG : 1;
    unsigned long CLKPOL : 1;
    unsigned long SUSPITV : 4;
    unsigned long DWIDTH : 5;
    unsigned long LSB : 1;
    unsigned long HALFDPX : 1;
    unsigned long RXONLY : 1;
    unsigned long Res0 : 1;
    unsigned long UNITIEN : 1;
    unsigned long SLAVE : 1;
    unsigned long REORDER : 1;
    unsigned long DATDIR : 1;
    unsigned long Res1 : 11;
} sM2L31_SPI1_SPIx_CTL;

typedef union {
    sM2L31_SPI1_SPIx_CTL Bit;
    unsigned long  All;
} uM2L31_SPI1_SPIx_CTL;

#define M2L31_SPI1_SPIx_CLKDIV_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DIVIDER : 9;
    unsigned long Res0 : 23;
} sM2L31_SPI1_SPIx_CLKDIV;

typedef union {
    sM2L31_SPI1_SPIx_CLKDIV Bit;
    unsigned long  All;
} uM2L31_SPI1_SPIx_CLKDIV;

#define M2L31_SPI1_SPIx_SSCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SS : 1;
    unsigned long Res0 : 1;
    unsigned long SSACTPOL : 1;
    unsigned long AUTOSS : 1;
    unsigned long SLV3WIRE : 1;
    unsigned long Res1 : 3;
    unsigned long SLVBEIEN : 1;
    unsigned long SLVURIEN : 1;
    unsigned long Res2 : 2;
    unsigned long SSACTIEN : 1;
    unsigned long SSINAIEN : 1;
    unsigned long Res3 : 18;
} sM2L31_SPI1_SPIx_SSCTL;

typedef union {
    sM2L31_SPI1_SPIx_SSCTL Bit;
    unsigned long  All;
} uM2L31_SPI1_SPIx_SSCTL;

#define M2L31_SPI1_SPIx_PDMACTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXPDMAEN : 1;
    unsigned long RXPDMAEN : 1;
    unsigned long PDMARST : 1;
    unsigned long Res0 : 29;
} sM2L31_SPI1_SPIx_PDMACTL;

typedef union {
    sM2L31_SPI1_SPIx_PDMACTL Bit;
    unsigned long  All;
} uM2L31_SPI1_SPIx_PDMACTL;

#define M2L31_SPI1_SPIx_FIFOCTL_RESET_VALUE 0x22000000
typedef struct {
    unsigned long RXRST : 1;
    unsigned long TXRST : 1;
    unsigned long RXTHIEN : 1;
    unsigned long TXTHIEN : 1;
    unsigned long RXTOIEN : 1;
    unsigned long RXOVIEN : 1;
    unsigned long TXUFPOL : 1;
    unsigned long TXUFIEN : 1;
    unsigned long RXFBCLR : 1;
    unsigned long TXFBCLR : 1;
    unsigned long SLVBERX : 1;
    unsigned long Res0 : 13;
    unsigned long RXTH : 3;
    unsigned long Res1 : 1;
    unsigned long TXTH : 3;
    unsigned long Res2 : 1;
} sM2L31_SPI1_SPIx_FIFOCTL;

typedef union {
    sM2L31_SPI1_SPIx_FIFOCTL Bit;
    unsigned long  All;
} uM2L31_SPI1_SPIx_FIFOCTL;

#define M2L31_SPI1_SPIx_STATUS_RESET_VALUE 0x00050110
typedef struct {
    unsigned long BUSY : 1;
    unsigned long UNITIF : 1;
    unsigned long SSACTIF : 1;
    unsigned long SSINAIF : 1;
    unsigned long SSLINE : 1;
    unsigned long Res0 : 1;
    unsigned long SLVBEIF : 1;
    unsigned long SLVURIF : 1;
    unsigned long RXEMPTY : 1;
    unsigned long RXFULL : 1;
    unsigned long RXTHIF : 1;
    unsigned long RXOVIF : 1;
    unsigned long RXTOIF : 1;
    unsigned long Res1 : 2;
    unsigned long SPIENSTS : 1;
    unsigned long TXEMPTY : 1;
    unsigned long TXFULL : 1;
    unsigned long TXTHIF : 1;
    unsigned long TXUFIF : 1;
    unsigned long Res2 : 3;
    unsigned long TXRXRST : 1;
    unsigned long RXCNT : 4;
    unsigned long TXCNT : 4;
} sM2L31_SPI1_SPIx_STATUS;

typedef union {
    sM2L31_SPI1_SPIx_STATUS Bit;
    unsigned long  All;
} uM2L31_SPI1_SPIx_STATUS;

#define M2L31_SPI1_SPIx_STATUS2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 24;
    unsigned long SLVBENUM : 6;
    unsigned long Res1 : 2;
} sM2L31_SPI1_SPIx_STATUS2;

typedef union {
    sM2L31_SPI1_SPIx_STATUS2 Bit;
    unsigned long  All;
} uM2L31_SPI1_SPIx_STATUS2;

#define M2L31_SPI1_SPIx_TX_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TX : 32;
} sM2L31_SPI1_SPIx_TX;

typedef union {
    sM2L31_SPI1_SPIx_TX Bit;
    unsigned long  All;
} uM2L31_SPI1_SPIx_TX;

#define M2L31_SPI1_SPIx_RX_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RX : 32;
} sM2L31_SPI1_SPIx_RX;

typedef union {
    sM2L31_SPI1_SPIx_RX Bit;
    unsigned long  All;
} uM2L31_SPI1_SPIx_RX;

#define M2L31_SPI1_SPIx_I2SCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long I2SEN : 1;
    unsigned long TXEN : 1;
    unsigned long RXEN : 1;
    unsigned long MUTE : 1;
    unsigned long WDWIDTH : 2;
    unsigned long MONO : 1;
    unsigned long ORDER : 1;
    unsigned long SLAVE : 1;
    unsigned long Res0 : 6;
    unsigned long MCLKEN : 1;
    unsigned long RZCEN : 1;
    unsigned long LZCEN : 1;
    unsigned long Res1 : 5;
    unsigned long RXLCH : 1;
    unsigned long RZCIEN : 1;
    unsigned long LZCIEN : 1;
    unsigned long Res2 : 2;
    unsigned long FORMAT : 2;
    unsigned long Res3 : 1;
    unsigned long SLVERRIEN : 1;
} sM2L31_SPI1_SPIx_I2SCTL;

typedef union {
    sM2L31_SPI1_SPIx_I2SCTL Bit;
    unsigned long  All;
} uM2L31_SPI1_SPIx_I2SCTL;

#define M2L31_SPI1_SPIx_I2SCLK_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MCLKDIV : 7;
    unsigned long Res0 : 1;
    unsigned long BCLKDIV : 10;
    unsigned long Res1 : 6;
    unsigned long I2SMODE : 1;
    unsigned long I2SSLAVE : 1;
    unsigned long Res2 : 6;
} sM2L31_SPI1_SPIx_I2SCLK;

typedef union {
    sM2L31_SPI1_SPIx_I2SCLK Bit;
    unsigned long  All;
} uM2L31_SPI1_SPIx_I2SCLK;

#define M2L31_SPI1_SPIx_I2SSTS_RESET_VALUE 0x00050100
typedef struct {
    unsigned long Res0 : 4;
    unsigned long RIGHT : 1;
    unsigned long Res1 : 3;
    unsigned long RXEMPTY : 1;
    unsigned long RXFULL : 1;
    unsigned long RXTHIF : 1;
    unsigned long RXOVIF : 1;
    unsigned long RXTOIF : 1;
    unsigned long Res2 : 2;
    unsigned long I2SENSTS : 1;
    unsigned long TXEMPTY : 1;
    unsigned long TXFULL : 1;
    unsigned long TXTHIF : 1;
    unsigned long TXUFIF : 1;
    unsigned long RZCIF : 1;
    unsigned long LZCIF : 1;
    unsigned long SLVERRIF : 1;
    unsigned long TXRXRST : 1;
    unsigned long RXCNT : 3;
    unsigned long Res3 : 1;
    unsigned long TXCNT : 3;
    unsigned long Res4 : 1;
} sM2L31_SPI1_SPIx_I2SSTS;

typedef union {
    sM2L31_SPI1_SPIx_I2SSTS Bit;
    unsigned long  All;
} uM2L31_SPI1_SPIx_I2SSTS;

typedef struct {
    uM2L31_SPI1_SPIx_CTL M2L31_SPI1_SPIx_CTL; // Offset: 0x0
    uM2L31_SPI1_SPIx_CLKDIV M2L31_SPI1_SPIx_CLKDIV; // Offset: 0x4
    uM2L31_SPI1_SPIx_SSCTL M2L31_SPI1_SPIx_SSCTL; // Offset: 0x8
    uM2L31_SPI1_SPIx_PDMACTL M2L31_SPI1_SPIx_PDMACTL; // Offset: 0xc
    uM2L31_SPI1_SPIx_FIFOCTL M2L31_SPI1_SPIx_FIFOCTL; // Offset: 0x10
    uM2L31_SPI1_SPIx_STATUS M2L31_SPI1_SPIx_STATUS; // Offset: 0x14
    uM2L31_SPI1_SPIx_STATUS2 M2L31_SPI1_SPIx_STATUS2; // Offset: 0x18
    unsigned long Reserved0;
    uM2L31_SPI1_SPIx_TX M2L31_SPI1_SPIx_TX; // Offset: 0x20
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    uM2L31_SPI1_SPIx_RX M2L31_SPI1_SPIx_RX; // Offset: 0x30
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    unsigned long Reserved9;
    unsigned long Reserved10;
    unsigned long Reserved11;
    unsigned long Reserved12;
    unsigned long Reserved13;
    unsigned long Reserved14;
    uM2L31_SPI1_SPIx_I2SCTL M2L31_SPI1_SPIx_I2SCTL; // Offset: 0x60
    uM2L31_SPI1_SPIx_I2SCLK M2L31_SPI1_SPIx_I2SCLK; // Offset: 0x64
    uM2L31_SPI1_SPIx_I2SSTS M2L31_SPI1_SPIx_I2SSTS; // Offset: 0x68
} sM2L31_SPI1;

