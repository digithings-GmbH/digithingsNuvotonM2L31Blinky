// Base Addres of UUART0 = 0x400D0000

#define M2L31_UUART0_UUART_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FUNMODE : 3;
    unsigned long Res0 : 29;
} sM2L31_UUART0_UUART_CTL;

typedef union {
    sM2L31_UUART0_UUART_CTL Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_CTL;

#define M2L31_UUART0_UUART_INTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long TXSTIEN : 1;
    unsigned long TXENDIEN : 1;
    unsigned long RXSTIEN : 1;
    unsigned long RXENDIEN : 1;
    unsigned long Res1 : 27;
} sM2L31_UUART0_UUART_INTEN;

typedef union {
    sM2L31_UUART0_UUART_INTEN Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_INTEN;

#define M2L31_UUART0_UUART_BRGEN_RESET_VALUE 0x00003C00
typedef struct {
    unsigned long RCLKSEL : 1;
    unsigned long PTCLKSEL : 1;
    unsigned long SPCLKSEL : 2;
    unsigned long TMCNTEN : 1;
    unsigned long TMCNTSRC : 1;
    unsigned long Res0 : 2;
    unsigned long PDSCNT : 2;
    unsigned long DSCNT : 5;
    unsigned long Res1 : 1;
    unsigned long CLKDIV : 10;
    unsigned long Res2 : 6;
} sM2L31_UUART0_UUART_BRGEN;

typedef union {
    sM2L31_UUART0_UUART_BRGEN Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_BRGEN;

#define M2L31_UUART0_UUART_DATIN0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SYNCSEL : 1;
    unsigned long Res0 : 1;
    unsigned long ININV : 1;
    unsigned long EDGEDET : 2;
    unsigned long Res1 : 27;
} sM2L31_UUART0_UUART_DATIN0;

typedef union {
    sM2L31_UUART0_UUART_DATIN0 Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_DATIN0;

#define M2L31_UUART0_UUART_CTLIN0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SYNCSEL : 1;
    unsigned long Res0 : 1;
    unsigned long ININV : 1;
    unsigned long Res1 : 29;
} sM2L31_UUART0_UUART_CTLIN0;

typedef union {
    sM2L31_UUART0_UUART_CTLIN0 Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_CTLIN0;

#define M2L31_UUART0_UUART_CLKIN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SYNCSEL : 1;
    unsigned long Res0 : 31;
} sM2L31_UUART0_UUART_CLKIN;

typedef union {
    sM2L31_UUART0_UUART_CLKIN Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_CLKIN;

#define M2L31_UUART0_UUART_LINECTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LSB : 1;
    unsigned long Res0 : 4;
    unsigned long DATOINV : 1;
    unsigned long Res1 : 1;
    unsigned long CTLOINV : 1;
    unsigned long DWIDTH : 4;
    unsigned long Res2 : 20;
} sM2L31_UUART0_UUART_LINECTL;

typedef union {
    sM2L31_UUART0_UUART_LINECTL Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_LINECTL;

#define M2L31_UUART0_UUART_TXDAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXDAT : 16;
    unsigned long Res0 : 16;
} sM2L31_UUART0_UUART_TXDAT;

typedef union {
    sM2L31_UUART0_UUART_TXDAT Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_TXDAT;

#define M2L31_UUART0_UUART_RXDAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RXDAT : 16;
    unsigned long Res0 : 16;
} sM2L31_UUART0_UUART_RXDAT;

typedef union {
    sM2L31_UUART0_UUART_RXDAT Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_RXDAT;

#define M2L31_UUART0_UUART_BUFCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 7;
    unsigned long TXCLR : 1;
    unsigned long Res1 : 6;
    unsigned long RXOVIEN : 1;
    unsigned long RXCLR : 1;
    unsigned long TXRST : 1;
    unsigned long RXRST : 1;
    unsigned long Res2 : 14;
} sM2L31_UUART0_UUART_BUFCTL;

typedef union {
    sM2L31_UUART0_UUART_BUFCTL Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_BUFCTL;

#define M2L31_UUART0_UUART_BUFSTS_RESET_VALUE 0x00000101
typedef struct {
    unsigned long RXEMPTY : 1;
    unsigned long RXFULL : 1;
    unsigned long Res0 : 1;
    unsigned long RXOVIF : 1;
    unsigned long Res1 : 4;
    unsigned long TXEMPTY : 1;
    unsigned long TXFULL : 1;
    unsigned long Res2 : 22;
} sM2L31_UUART0_UUART_BUFSTS;

typedef union {
    sM2L31_UUART0_UUART_BUFSTS Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_BUFSTS;

#define M2L31_UUART0_UUART_PDMACTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDMARST : 1;
    unsigned long TXPDMAEN : 1;
    unsigned long RXPDMAEN : 1;
    unsigned long PDMAEN : 1;
    unsigned long Res0 : 28;
} sM2L31_UUART0_UUART_PDMACTL;

typedef union {
    sM2L31_UUART0_UUART_PDMACTL Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_PDMACTL;

#define M2L31_UUART0_UUART_WKCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKEN : 1;
    unsigned long Res0 : 1;
    unsigned long PDBOPT : 1;
    unsigned long Res1 : 29;
} sM2L31_UUART0_UUART_WKCTL;

typedef union {
    sM2L31_UUART0_UUART_WKCTL Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_WKCTL;

#define M2L31_UUART0_UUART_WKSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKF : 1;
    unsigned long Res0 : 31;
} sM2L31_UUART0_UUART_WKSTS;

typedef union {
    sM2L31_UUART0_UUART_WKSTS Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_WKSTS;

#define M2L31_UUART0_UUART_PROTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long STOPB : 1;
    unsigned long PARITYEN : 1;
    unsigned long EVENPARITY : 1;
    unsigned long RTSAUTOEN : 1;
    unsigned long CTSAUTOEN : 1;
    unsigned long RTSAUDIREN : 1;
    unsigned long ABREN : 1;
    unsigned long Res0 : 2;
    unsigned long DATWKEN : 1;
    unsigned long CTSWKEN : 1;
    unsigned long WAKECNT : 4;
    unsigned long Res1 : 1;
    unsigned long BRDETITV : 9;
    unsigned long Res2 : 1;
    unsigned long STICKEN : 1;
    unsigned long Res3 : 2;
    unsigned long BCEN : 1;
    unsigned long DGE : 1;
    unsigned long PROTEN : 1;
} sM2L31_UUART0_UUART_PROTCTL;

typedef union {
    sM2L31_UUART0_UUART_PROTCTL Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_PROTCTL;

#define M2L31_UUART0_UUART_PROTIEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long ABRIEN : 1;
    unsigned long RLSIEN : 1;
    unsigned long Res1 : 29;
} sM2L31_UUART0_UUART_PROTIEN;

typedef union {
    sM2L31_UUART0_UUART_PROTIEN Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_PROTIEN;

#define M2L31_UUART0_UUART_PROTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long TXSTIF : 1;
    unsigned long TXENDIF : 1;
    unsigned long RXSTIF : 1;
    unsigned long RXENDIF : 1;
    unsigned long PARITYERR : 1;
    unsigned long FRMERR : 1;
    unsigned long BREAK : 1;
    unsigned long Res1 : 1;
    unsigned long ABRDETIF : 1;
    unsigned long RXBUSY : 1;
    unsigned long ABERRSTS : 1;
    unsigned long Res2 : 4;
    unsigned long CTSSYNCLV : 1;
    unsigned long CTSLV : 1;
    unsigned long Res3 : 14;
} sM2L31_UUART0_UUART_PROTSTS;

typedef union {
    sM2L31_UUART0_UUART_PROTSTS Bit;
    unsigned long  All;
} uM2L31_UUART0_UUART_PROTSTS;

typedef struct {
    uM2L31_UUART0_UUART_CTL M2L31_UUART0_UUART_CTL; // Offset: 0x0
    uM2L31_UUART0_UUART_INTEN M2L31_UUART0_UUART_INTEN; // Offset: 0x4
    uM2L31_UUART0_UUART_BRGEN M2L31_UUART0_UUART_BRGEN; // Offset: 0x8
    unsigned long Reserved0;
    uM2L31_UUART0_UUART_DATIN0 M2L31_UUART0_UUART_DATIN0; // Offset: 0x10
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    uM2L31_UUART0_UUART_CTLIN0 M2L31_UUART0_UUART_CTLIN0; // Offset: 0x20
    unsigned long Reserved4;
    uM2L31_UUART0_UUART_CLKIN M2L31_UUART0_UUART_CLKIN; // Offset: 0x28
    uM2L31_UUART0_UUART_LINECTL M2L31_UUART0_UUART_LINECTL; // Offset: 0x2c
    uM2L31_UUART0_UUART_TXDAT M2L31_UUART0_UUART_TXDAT; // Offset: 0x30
    uM2L31_UUART0_UUART_RXDAT M2L31_UUART0_UUART_RXDAT; // Offset: 0x34
    uM2L31_UUART0_UUART_BUFCTL M2L31_UUART0_UUART_BUFCTL; // Offset: 0x38
    uM2L31_UUART0_UUART_BUFSTS M2L31_UUART0_UUART_BUFSTS; // Offset: 0x3c
    uM2L31_UUART0_UUART_PDMACTL M2L31_UUART0_UUART_PDMACTL; // Offset: 0x40
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    uM2L31_UUART0_UUART_WKCTL M2L31_UUART0_UUART_WKCTL; // Offset: 0x54
    uM2L31_UUART0_UUART_WKSTS M2L31_UUART0_UUART_WKSTS; // Offset: 0x58
    uM2L31_UUART0_UUART_PROTCTL M2L31_UUART0_UUART_PROTCTL; // Offset: 0x5c
    uM2L31_UUART0_UUART_PROTIEN M2L31_UUART0_UUART_PROTIEN; // Offset: 0x60
    uM2L31_UUART0_UUART_PROTSTS M2L31_UUART0_UUART_PROTSTS; // Offset: 0x64
} sM2L31_UUART0;

