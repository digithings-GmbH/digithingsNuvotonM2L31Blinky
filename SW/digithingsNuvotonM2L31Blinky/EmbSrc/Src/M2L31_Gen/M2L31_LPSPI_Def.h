// Base Addres of LPSPI = 0x400E1000

#define M2L31_LPSPI_LPSPI_CTL_RESET_VALUE 0x00000034
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
} sM2L31_LPSPI_LPSPI_CTL;

typedef union {
    sM2L31_LPSPI_LPSPI_CTL Bit;
    unsigned long  All;
} uM2L31_LPSPI_LPSPI_CTL;

#define M2L31_LPSPI_LPSPI_CLKDIV_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DIVIDER : 9;
    unsigned long Res0 : 23;
} sM2L31_LPSPI_LPSPI_CLKDIV;

typedef union {
    sM2L31_LPSPI_LPSPI_CLKDIV Bit;
    unsigned long  All;
} uM2L31_LPSPI_LPSPI_CLKDIV;

#define M2L31_LPSPI_LPSPI_SSCTL_RESET_VALUE 0x00000000
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
} sM2L31_LPSPI_LPSPI_SSCTL;

typedef union {
    sM2L31_LPSPI_LPSPI_SSCTL Bit;
    unsigned long  All;
} uM2L31_LPSPI_LPSPI_SSCTL;

#define M2L31_LPSPI_LPSPI_PDMACTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXPDMAEN : 1;
    unsigned long RXPDMAEN : 1;
    unsigned long PDMARST : 1;
    unsigned long Res0 : 29;
} sM2L31_LPSPI_LPSPI_PDMACTL;

typedef union {
    sM2L31_LPSPI_LPSPI_PDMACTL Bit;
    unsigned long  All;
} uM2L31_LPSPI_LPSPI_PDMACTL;

#define M2L31_LPSPI_LPSPI_FIFOCTL_RESET_VALUE 0x22000000
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
} sM2L31_LPSPI_LPSPI_FIFOCTL;

typedef union {
    sM2L31_LPSPI_LPSPI_FIFOCTL Bit;
    unsigned long  All;
} uM2L31_LPSPI_LPSPI_FIFOCTL;

#define M2L31_LPSPI_LPSPI_STATUS_RESET_VALUE 0x00050110
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
} sM2L31_LPSPI_LPSPI_STATUS;

typedef union {
    sM2L31_LPSPI_LPSPI_STATUS Bit;
    unsigned long  All;
} uM2L31_LPSPI_LPSPI_STATUS;

#define M2L31_LPSPI_LPSPI_STATUS2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 24;
    unsigned long SLVBENUM : 6;
    unsigned long Res1 : 2;
} sM2L31_LPSPI_LPSPI_STATUS2;

typedef union {
    sM2L31_LPSPI_LPSPI_STATUS2 Bit;
    unsigned long  All;
} uM2L31_LPSPI_LPSPI_STATUS2;

#define M2L31_LPSPI_LPSPI_TX_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TX : 32;
} sM2L31_LPSPI_LPSPI_TX;

typedef union {
    sM2L31_LPSPI_LPSPI_TX Bit;
    unsigned long  All;
} uM2L31_LPSPI_LPSPI_TX;

#define M2L31_LPSPI_LPSPI_RX_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RX : 32;
} sM2L31_LPSPI_LPSPI_RX;

typedef union {
    sM2L31_LPSPI_LPSPI_RX Bit;
    unsigned long  All;
} uM2L31_LPSPI_LPSPI_RX;

#define M2L31_LPSPI_LPSPI_AUTOCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TRIGSEL : 4;
    unsigned long TRIGEN : 1;
    unsigned long CNTIEN : 1;
    unsigned long FULLRXEN : 1;
    unsigned long SSWKEN : 1;
    unsigned long AUTOEN : 1;
    unsigned long SWTRIG : 1;
    unsigned long CNTWKEN : 1;
    unsigned long Res0 : 5;
    unsigned long TCNT : 8;
    unsigned long Res1 : 8;
} sM2L31_LPSPI_LPSPI_AUTOCTL;

typedef union {
    sM2L31_LPSPI_LPSPI_AUTOCTL Bit;
    unsigned long  All;
} uM2L31_LPSPI_LPSPI_AUTOCTL;

#define M2L31_LPSPI_LPSPI_AUTOSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTIF : 1;
    unsigned long SSWKF : 1;
    unsigned long AOBUSY : 1;
    unsigned long CNTWKF : 1;
    unsigned long Res0 : 28;
} sM2L31_LPSPI_LPSPI_AUTOSTS;

typedef union {
    sM2L31_LPSPI_LPSPI_AUTOSTS Bit;
    unsigned long  All;
} uM2L31_LPSPI_LPSPI_AUTOSTS;

typedef struct {
    uM2L31_LPSPI_LPSPI_CTL M2L31_LPSPI_LPSPI_CTL; // Offset: 0x0
    uM2L31_LPSPI_LPSPI_CLKDIV M2L31_LPSPI_LPSPI_CLKDIV; // Offset: 0x4
    uM2L31_LPSPI_LPSPI_SSCTL M2L31_LPSPI_LPSPI_SSCTL; // Offset: 0x8
    uM2L31_LPSPI_LPSPI_PDMACTL M2L31_LPSPI_LPSPI_PDMACTL; // Offset: 0xc
    uM2L31_LPSPI_LPSPI_FIFOCTL M2L31_LPSPI_LPSPI_FIFOCTL; // Offset: 0x10
    uM2L31_LPSPI_LPSPI_STATUS M2L31_LPSPI_LPSPI_STATUS; // Offset: 0x14
    uM2L31_LPSPI_LPSPI_STATUS2 M2L31_LPSPI_LPSPI_STATUS2; // Offset: 0x18
    unsigned long Reserved0;
    uM2L31_LPSPI_LPSPI_TX M2L31_LPSPI_LPSPI_TX; // Offset: 0x20
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    uM2L31_LPSPI_LPSPI_RX M2L31_LPSPI_LPSPI_RX; // Offset: 0x30
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    unsigned long Reserved9;
    unsigned long Reserved10;
    uM2L31_LPSPI_LPSPI_AUTOCTL M2L31_LPSPI_LPSPI_AUTOCTL; // Offset: 0x50
    uM2L31_LPSPI_LPSPI_AUTOSTS M2L31_LPSPI_LPSPI_AUTOSTS; // Offset: 0x54
} sM2L31_LPSPI;

