// Base Addres of LPUART0 = 0x400E0000

#define M2L31_LPUART0_LPUART_DAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DAT : 8;
    unsigned long PARITY : 1;
    unsigned long Res0 : 23;
} sM2L31_LPUART0_LPUART_DAT;

typedef union {
    sM2L31_LPUART0_LPUART_DAT Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_DAT;

#define M2L31_LPUART0_LPUART_INTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RDAIEN : 1;
    unsigned long THREIEN : 1;
    unsigned long RLSIEN : 1;
    unsigned long MODEMIEN : 1;
    unsigned long RXTOIEN : 1;
    unsigned long BUFERRIEN : 1;
    unsigned long WKIEN : 1;
    unsigned long Res0 : 4;
    unsigned long TOCNTEN : 1;
    unsigned long ATORTSEN : 1;
    unsigned long ATOCTSEN : 1;
    unsigned long TXPDMAEN : 1;
    unsigned long RXPDMAEN : 1;
    unsigned long SWBEIEN : 1;
    unsigned long Res1 : 1;
    unsigned long ABRIEN : 1;
    unsigned long Res2 : 3;
    unsigned long TXENDIEN : 1;
    unsigned long Res3 : 9;
} sM2L31_LPUART0_LPUART_INTEN;

typedef union {
    sM2L31_LPUART0_LPUART_INTEN Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_INTEN;

#define M2L31_LPUART0_LPUART_FIFO_RESET_VALUE 0x00000101
typedef struct {
    unsigned long Res0 : 1;
    unsigned long RXRST : 1;
    unsigned long TXRST : 1;
    unsigned long Res1 : 1;
    unsigned long RFITL : 4;
    unsigned long RXOFF : 1;
    unsigned long Res2 : 7;
    unsigned long RTSTRGLV : 4;
    unsigned long Res3 : 12;
} sM2L31_LPUART0_LPUART_FIFO;

typedef union {
    sM2L31_LPUART0_LPUART_FIFO Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_FIFO;

#define M2L31_LPUART0_LPUART_LINE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WLS : 2;
    unsigned long NSB : 1;
    unsigned long PBE : 1;
    unsigned long EPE : 1;
    unsigned long SPE : 1;
    unsigned long BCB : 1;
    unsigned long PSS : 1;
    unsigned long TXDINV : 1;
    unsigned long RXDINV : 1;
    unsigned long Res0 : 22;
} sM2L31_LPUART0_LPUART_LINE;

typedef union {
    sM2L31_LPUART0_LPUART_LINE Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_LINE;

#define M2L31_LPUART0_LPUART_MODEM_RESET_VALUE 0x00000200
typedef struct {
    unsigned long Res0 : 1;
    unsigned long RTS : 1;
    unsigned long Res1 : 7;
    unsigned long RTSACTLV : 1;
    unsigned long Res2 : 3;
    unsigned long RTSSTS : 1;
    unsigned long Res3 : 18;
} sM2L31_LPUART0_LPUART_MODEM;

typedef union {
    sM2L31_LPUART0_LPUART_MODEM Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_MODEM;

#define M2L31_LPUART0_LPUART_MODEMSTS_RESET_VALUE 0x00000110
typedef struct {
    unsigned long CTSDETF : 1;
    unsigned long Res0 : 3;
    unsigned long CTSSTS : 1;
    unsigned long Res1 : 3;
    unsigned long CTSACTLV : 1;
    unsigned long Res2 : 23;
} sM2L31_LPUART0_LPUART_MODEMSTS;

typedef union {
    sM2L31_LPUART0_LPUART_MODEMSTS Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_MODEMSTS;

#define M2L31_LPUART0_LPUART_FIFOSTS_RESET_VALUE 0xB0404000
typedef struct {
    unsigned long RXOVIF : 1;
    unsigned long ABRDIF : 1;
    unsigned long ABRDTOIF : 1;
    unsigned long ADDRDETF : 1;
    unsigned long PEF : 1;
    unsigned long FEF : 1;
    unsigned long BIF : 1;
    unsigned long Res0 : 1;
    unsigned long RXPTR : 6;
    unsigned long RXEMPTY : 1;
    unsigned long RXFULL : 1;
    unsigned long TXPTR : 6;
    unsigned long TXEMPTY : 1;
    unsigned long TXFULL : 1;
    unsigned long TXOVIF : 1;
    unsigned long Res1 : 3;
    unsigned long TXEMPTYF : 1;
    unsigned long RXIDLE : 1;
    unsigned long Res2 : 1;
    unsigned long TXRXACT : 1;
} sM2L31_LPUART0_LPUART_FIFOSTS;

typedef union {
    sM2L31_LPUART0_LPUART_FIFOSTS Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_FIFOSTS;

#define M2L31_LPUART0_LPUART_INTSTS_RESET_VALUE 0x00400002
typedef struct {
    unsigned long RDAIF : 1;
    unsigned long THREIF : 1;
    unsigned long RLSIF : 1;
    unsigned long MODEMIF : 1;
    unsigned long RXTOIF : 1;
    unsigned long BUFERRIF : 1;
    unsigned long WKIF : 1;
    unsigned long Res0 : 1;
    unsigned long RDAINT : 1;
    unsigned long THREINT : 1;
    unsigned long RLSINT : 1;
    unsigned long MODEMINT : 1;
    unsigned long RXTOINT : 1;
    unsigned long BUFERRINT : 1;
    unsigned long WKINT : 1;
    unsigned long Res1 : 1;
    unsigned long SWBEIF : 1;
    unsigned long Res2 : 1;
    unsigned long HWRLSIF : 1;
    unsigned long HWMODIF : 1;
    unsigned long HWTOIF : 1;
    unsigned long HWBUFEIF : 1;
    unsigned long TXENDIF : 1;
    unsigned long Res3 : 1;
    unsigned long SWBEINT : 1;
    unsigned long Res4 : 1;
    unsigned long HWRLSINT : 1;
    unsigned long HWMODINT : 1;
    unsigned long HWTOINT : 1;
    unsigned long HWBUFEINT : 1;
    unsigned long TXENDINT : 1;
    unsigned long ABRINT : 1;
} sM2L31_LPUART0_LPUART_INTSTS;

typedef union {
    sM2L31_LPUART0_LPUART_INTSTS Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_INTSTS;

#define M2L31_LPUART0_LPUART_TOUT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TOIC : 8;
    unsigned long DLY : 8;
    unsigned long Res0 : 15;
    unsigned long BITOMEN : 1;
} sM2L31_LPUART0_LPUART_TOUT;

typedef union {
    sM2L31_LPUART0_LPUART_TOUT Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_TOUT;

#define M2L31_LPUART0_LPUART_BAUD_RESET_VALUE 0x0F000000
typedef struct {
    unsigned long BRD : 16;
    unsigned long Res0 : 8;
    unsigned long EDIVM1 : 4;
    unsigned long BAUDM0 : 1;
    unsigned long BAUDM1 : 1;
    unsigned long Res1 : 2;
} sM2L31_LPUART0_LPUART_BAUD;

typedef union {
    sM2L31_LPUART0_LPUART_BAUD Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_BAUD;

#define M2L31_LPUART0_LPUART_ALTCTL_RESET_VALUE 0x0000000C
typedef struct {
    unsigned long Res0 : 8;
    unsigned long RS485NMM : 1;
    unsigned long RS485AAD : 1;
    unsigned long RS485AUD : 1;
    unsigned long Res1 : 4;
    unsigned long ADDRDEN : 1;
    unsigned long Res2 : 1;
    unsigned long ABRIF : 1;
    unsigned long ABRDEN : 1;
    unsigned long ABRDBITS : 2;
    unsigned long Res3 : 3;
    unsigned long ADDRMV : 8;
} sM2L31_LPUART0_LPUART_ALTCTL;

typedef union {
    sM2L31_LPUART0_LPUART_ALTCTL Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_ALTCTL;

#define M2L31_LPUART0_LPUART_FUNCSEL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FUNCSEL : 3;
    unsigned long TXRXDIS : 1;
    unsigned long Res0 : 2;
    unsigned long DGE : 1;
    unsigned long TXRXSWP : 1;
    unsigned long Res1 : 24;
} sM2L31_LPUART0_LPUART_FUNCSEL;

typedef union {
    sM2L31_LPUART0_LPUART_FUNCSEL Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_FUNCSEL;

#define M2L31_LPUART0_LPUART_BRCOMP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BRCOMP : 9;
    unsigned long Res0 : 22;
    unsigned long BRCOMPDEC : 1;
} sM2L31_LPUART0_LPUART_BRCOMP;

typedef union {
    sM2L31_LPUART0_LPUART_BRCOMP Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_BRCOMP;

#define M2L31_LPUART0_LPUART_WKCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKCTSEN : 1;
    unsigned long WKDATEN : 1;
    unsigned long WKRFRTEN : 1;
    unsigned long WKRS485EN : 1;
    unsigned long WKTOUTEN : 1;
    unsigned long Res0 : 27;
} sM2L31_LPUART0_LPUART_WKCTL;

typedef union {
    sM2L31_LPUART0_LPUART_WKCTL Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_WKCTL;

#define M2L31_LPUART0_LPUART_WKSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CTSWKF : 1;
    unsigned long DATWKF : 1;
    unsigned long RFRTWKF : 1;
    unsigned long RS485WKF : 1;
    unsigned long TOUTWKF : 1;
    unsigned long Res0 : 27;
} sM2L31_LPUART0_LPUART_WKSTS;

typedef union {
    sM2L31_LPUART0_LPUART_WKSTS Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_WKSTS;

#define M2L31_LPUART0_LPUART_DWKCOMP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long STCOMP : 16;
    unsigned long Res0 : 16;
} sM2L31_LPUART0_LPUART_DWKCOMP;

typedef union {
    sM2L31_LPUART0_LPUART_DWKCOMP Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_DWKCOMP;

#define M2L31_LPUART0_LPUART_RS485DD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RTSDDLY : 16;
    unsigned long Res0 : 16;
} sM2L31_LPUART0_LPUART_RS485DD;

typedef union {
    sM2L31_LPUART0_LPUART_RS485DD Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_RS485DD;

#define M2L31_LPUART0_LPUART_AUTOCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TRIGSEL : 4;
    unsigned long TRIGEN : 1;
    unsigned long CKAWOEN : 1;
    unsigned long Res0 : 2;
    unsigned long WKAOTOEN : 1;
    unsigned long SWTRIG : 1;
    unsigned long Res1 : 21;
    unsigned long AOEN : 1;
} sM2L31_LPUART0_LPUART_AUTOCTL;

typedef union {
    sM2L31_LPUART0_LPUART_AUTOCTL Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_AUTOCTL;

#define M2L31_LPUART0_LPUART_AUTOSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long AOTOWKF : 1;
    unsigned long Res0 : 31;
} sM2L31_LPUART0_LPUART_AUTOSTS;

typedef union {
    sM2L31_LPUART0_LPUART_AUTOSTS Bit;
    unsigned long  All;
} uM2L31_LPUART0_LPUART_AUTOSTS;

typedef struct {
    uM2L31_LPUART0_LPUART_DAT M2L31_LPUART0_LPUART_DAT; // Offset: 0x0
    uM2L31_LPUART0_LPUART_INTEN M2L31_LPUART0_LPUART_INTEN; // Offset: 0x4
    uM2L31_LPUART0_LPUART_FIFO M2L31_LPUART0_LPUART_FIFO; // Offset: 0x8
    uM2L31_LPUART0_LPUART_LINE M2L31_LPUART0_LPUART_LINE; // Offset: 0xc
    uM2L31_LPUART0_LPUART_MODEM M2L31_LPUART0_LPUART_MODEM; // Offset: 0x10
    uM2L31_LPUART0_LPUART_MODEMSTS M2L31_LPUART0_LPUART_MODEMSTS; // Offset: 0x14
    uM2L31_LPUART0_LPUART_FIFOSTS M2L31_LPUART0_LPUART_FIFOSTS; // Offset: 0x18
    uM2L31_LPUART0_LPUART_INTSTS M2L31_LPUART0_LPUART_INTSTS; // Offset: 0x1c
    uM2L31_LPUART0_LPUART_TOUT M2L31_LPUART0_LPUART_TOUT; // Offset: 0x20
    uM2L31_LPUART0_LPUART_BAUD M2L31_LPUART0_LPUART_BAUD; // Offset: 0x24
    unsigned long Reserved0;
    uM2L31_LPUART0_LPUART_ALTCTL M2L31_LPUART0_LPUART_ALTCTL; // Offset: 0x2c
    uM2L31_LPUART0_LPUART_FUNCSEL M2L31_LPUART0_LPUART_FUNCSEL; // Offset: 0x30
    unsigned long Reserved1;
    unsigned long Reserved2;
    uM2L31_LPUART0_LPUART_BRCOMP M2L31_LPUART0_LPUART_BRCOMP; // Offset: 0x3c
    uM2L31_LPUART0_LPUART_WKCTL M2L31_LPUART0_LPUART_WKCTL; // Offset: 0x40
    uM2L31_LPUART0_LPUART_WKSTS M2L31_LPUART0_LPUART_WKSTS; // Offset: 0x44
    uM2L31_LPUART0_LPUART_DWKCOMP M2L31_LPUART0_LPUART_DWKCOMP; // Offset: 0x48
    uM2L31_LPUART0_LPUART_RS485DD M2L31_LPUART0_LPUART_RS485DD; // Offset: 0x4c
    unsigned long Reserved3;
    unsigned long Reserved4;
    uM2L31_LPUART0_LPUART_AUTOCTL M2L31_LPUART0_LPUART_AUTOCTL; // Offset: 0x58
    uM2L31_LPUART0_LPUART_AUTOSTS M2L31_LPUART0_LPUART_AUTOSTS; // Offset: 0x5c
} sM2L31_LPUART0;

