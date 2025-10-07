// Base Addres of USPI0 = 0x400D0000

#define M2L31_USPI0_USPI_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FUNMODE : 3;
    unsigned long Res0 : 29;
} sM2L31_USPI0_USPI_CTL;

typedef union {
    sM2L31_USPI0_USPI_CTL Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_CTL;

#define M2L31_USPI0_USPI_INTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long TXSTIEN : 1;
    unsigned long TXENDIEN : 1;
    unsigned long RXSTIEN : 1;
    unsigned long RXENDIEN : 1;
    unsigned long Res1 : 27;
} sM2L31_USPI0_USPI_INTEN;

typedef union {
    sM2L31_USPI0_USPI_INTEN Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_INTEN;

#define M2L31_USPI0_USPI_BRGEN_RESET_VALUE 0x00003C00
typedef struct {
    unsigned long RCLKSEL : 1;
    unsigned long PTCLKSEL : 1;
    unsigned long SPCLKSEL : 2;
    unsigned long TMCNTEN : 1;
    unsigned long TMCNTSRC : 1;
    unsigned long Res0 : 10;
    unsigned long CLKDIV : 10;
    unsigned long Res1 : 6;
} sM2L31_USPI0_USPI_BRGEN;

typedef union {
    sM2L31_USPI0_USPI_BRGEN Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_BRGEN;

#define M2L31_USPI0_USPI_DATIN0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SYNCSEL : 1;
    unsigned long Res0 : 1;
    unsigned long ININV : 1;
    unsigned long Res1 : 29;
} sM2L31_USPI0_USPI_DATIN0;

typedef union {
    sM2L31_USPI0_USPI_DATIN0 Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_DATIN0;

#define M2L31_USPI0_USPI_CTLIN0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SYNCSEL : 1;
    unsigned long Res0 : 1;
    unsigned long ININV : 1;
    unsigned long Res1 : 29;
} sM2L31_USPI0_USPI_CTLIN0;

typedef union {
    sM2L31_USPI0_USPI_CTLIN0 Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_CTLIN0;

#define M2L31_USPI0_USPI_CLKIN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SYNCSEL : 1;
    unsigned long Res0 : 31;
} sM2L31_USPI0_USPI_CLKIN;

typedef union {
    sM2L31_USPI0_USPI_CLKIN Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_CLKIN;

#define M2L31_USPI0_USPI_LINECTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LSB : 1;
    unsigned long Res0 : 4;
    unsigned long DATOINV : 1;
    unsigned long Res1 : 1;
    unsigned long CTLOINV : 1;
    unsigned long DWIDTH : 4;
    unsigned long Res2 : 20;
} sM2L31_USPI0_USPI_LINECTL;

typedef union {
    sM2L31_USPI0_USPI_LINECTL Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_LINECTL;

#define M2L31_USPI0_USPI_TXDAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXDAT : 16;
    unsigned long PORTDIR : 1;
    unsigned long Res0 : 15;
} sM2L31_USPI0_USPI_TXDAT;

typedef union {
    sM2L31_USPI0_USPI_TXDAT Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_TXDAT;

#define M2L31_USPI0_USPI_RXDAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RXDAT : 16;
    unsigned long Res0 : 16;
} sM2L31_USPI0_USPI_RXDAT;

typedef union {
    sM2L31_USPI0_USPI_RXDAT Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_RXDAT;

#define M2L31_USPI0_USPI_BUFCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 6;
    unsigned long TXUDRIEN : 1;
    unsigned long TXCLR : 1;
    unsigned long Res1 : 6;
    unsigned long RXOVIEN : 1;
    unsigned long RXCLR : 1;
    unsigned long TXRST : 1;
    unsigned long RXRST : 1;
    unsigned long Res2 : 14;
} sM2L31_USPI0_USPI_BUFCTL;

typedef union {
    sM2L31_USPI0_USPI_BUFCTL Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_BUFCTL;

#define M2L31_USPI0_USPI_BUFSTS_RESET_VALUE 0x00000101
typedef struct {
    unsigned long RXEMPTY : 1;
    unsigned long RXFULL : 1;
    unsigned long Res0 : 1;
    unsigned long RXOVIF : 1;
    unsigned long Res1 : 4;
    unsigned long TXEMPTY : 1;
    unsigned long TXFULL : 1;
    unsigned long Res2 : 1;
    unsigned long TXUDRIF : 1;
    unsigned long Res3 : 20;
} sM2L31_USPI0_USPI_BUFSTS;

typedef union {
    sM2L31_USPI0_USPI_BUFSTS Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_BUFSTS;

#define M2L31_USPI0_USPI_PDMACTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDMARST : 1;
    unsigned long TXPDMAEN : 1;
    unsigned long RXPDMAEN : 1;
    unsigned long PDMAEN : 1;
    unsigned long Res0 : 28;
} sM2L31_USPI0_USPI_PDMACTL;

typedef union {
    sM2L31_USPI0_USPI_PDMACTL Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_PDMACTL;

#define M2L31_USPI0_USPI_WKCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKEN : 1;
    unsigned long Res0 : 1;
    unsigned long PDBOPT : 1;
    unsigned long Res1 : 29;
} sM2L31_USPI0_USPI_WKCTL;

typedef union {
    sM2L31_USPI0_USPI_WKCTL Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_WKCTL;

#define M2L31_USPI0_USPI_WKSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKF : 1;
    unsigned long Res0 : 31;
} sM2L31_USPI0_USPI_WKSTS;

typedef union {
    sM2L31_USPI0_USPI_WKSTS Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_WKSTS;

#define M2L31_USPI0_USPI_PROTCTL_RESET_VALUE 0x00000300
typedef struct {
    unsigned long SLAVE : 1;
    unsigned long SLV3WIRE : 1;
    unsigned long SS : 1;
    unsigned long AUTOSS : 1;
    unsigned long Res0 : 2;
    unsigned long SCLKMODE : 2;
    unsigned long SUSPITV : 4;
    unsigned long TSMSEL : 3;
    unsigned long Res1 : 1;
    unsigned long SLVTOCNT : 10;
    unsigned long Res2 : 2;
    unsigned long TXUDRPOL : 1;
    unsigned long Res3 : 2;
    unsigned long PROTEN : 1;
} sM2L31_USPI0_USPI_PROTCTL;

typedef union {
    sM2L31_USPI0_USPI_PROTCTL Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_PROTCTL;

#define M2L31_USPI0_USPI_PROTIEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SSINAIEN : 1;
    unsigned long SSACTIEN : 1;
    unsigned long SLVTOIEN : 1;
    unsigned long SLVBEIEN : 1;
    unsigned long Res0 : 28;
} sM2L31_USPI0_USPI_PROTIEN;

typedef union {
    sM2L31_USPI0_USPI_PROTIEN Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_PROTIEN;

#define M2L31_USPI0_USPI_PROTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long TXSTIF : 1;
    unsigned long TXENDIF : 1;
    unsigned long RXSTIF : 1;
    unsigned long RXENDIF : 1;
    unsigned long SLVTOIF : 1;
    unsigned long SLVBEIF : 1;
    unsigned long Res1 : 1;
    unsigned long SSINAIF : 1;
    unsigned long SSACTIF : 1;
    unsigned long Res2 : 6;
    unsigned long SSLINE : 1;
    unsigned long BUSY : 1;
    unsigned long SLVUDR : 1;
    unsigned long Res3 : 13;
} sM2L31_USPI0_USPI_PROTSTS;

typedef union {
    sM2L31_USPI0_USPI_PROTSTS Bit;
    unsigned long  All;
} uM2L31_USPI0_USPI_PROTSTS;

typedef struct {
    uM2L31_USPI0_USPI_CTL M2L31_USPI0_USPI_CTL; // Offset: 0x0
    uM2L31_USPI0_USPI_INTEN M2L31_USPI0_USPI_INTEN; // Offset: 0x4
    uM2L31_USPI0_USPI_BRGEN M2L31_USPI0_USPI_BRGEN; // Offset: 0x8
    unsigned long Reserved0;
    uM2L31_USPI0_USPI_DATIN0 M2L31_USPI0_USPI_DATIN0; // Offset: 0x10
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    uM2L31_USPI0_USPI_CTLIN0 M2L31_USPI0_USPI_CTLIN0; // Offset: 0x20
    unsigned long Reserved4;
    uM2L31_USPI0_USPI_CLKIN M2L31_USPI0_USPI_CLKIN; // Offset: 0x28
    uM2L31_USPI0_USPI_LINECTL M2L31_USPI0_USPI_LINECTL; // Offset: 0x2c
    uM2L31_USPI0_USPI_TXDAT M2L31_USPI0_USPI_TXDAT; // Offset: 0x30
    uM2L31_USPI0_USPI_RXDAT M2L31_USPI0_USPI_RXDAT; // Offset: 0x34
    uM2L31_USPI0_USPI_BUFCTL M2L31_USPI0_USPI_BUFCTL; // Offset: 0x38
    uM2L31_USPI0_USPI_BUFSTS M2L31_USPI0_USPI_BUFSTS; // Offset: 0x3c
    uM2L31_USPI0_USPI_PDMACTL M2L31_USPI0_USPI_PDMACTL; // Offset: 0x40
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    uM2L31_USPI0_USPI_WKCTL M2L31_USPI0_USPI_WKCTL; // Offset: 0x54
    uM2L31_USPI0_USPI_WKSTS M2L31_USPI0_USPI_WKSTS; // Offset: 0x58
    uM2L31_USPI0_USPI_PROTCTL M2L31_USPI0_USPI_PROTCTL; // Offset: 0x5c
    uM2L31_USPI0_USPI_PROTIEN M2L31_USPI0_USPI_PROTIEN; // Offset: 0x60
    uM2L31_USPI0_USPI_PROTSTS M2L31_USPI0_USPI_PROTSTS; // Offset: 0x64
} sM2L31_USPI0;

