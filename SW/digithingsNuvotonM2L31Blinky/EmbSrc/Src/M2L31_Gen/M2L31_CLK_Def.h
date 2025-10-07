// Base Addres of CLK = 0x40000200

#define M2L31_CLK_CLK_PWRCTL_RESET_VALUE 0x2000001C
typedef struct {
    unsigned long HXTEN : 1;
    unsigned long LXTEN : 1;
    unsigned long HIRCEN : 1;
    unsigned long LIRCEN : 1;
    unsigned long Res0 : 1;
    unsigned long PDWKIEN : 1;
    unsigned long PDWKIF : 1;
    unsigned long PDEN : 1;
    unsigned long Res1 : 4;
    unsigned long HXTSELTYP : 1;
    unsigned long Res2 : 1;
    unsigned long HIRC48MSTBS : 2;
    unsigned long HIRCSTBS : 2;
    unsigned long HIRC48MEN : 1;
    unsigned long Res3 : 1;
    unsigned long HXTGAIN : 3;
    unsigned long Res4 : 1;
    unsigned long MIRCSTBS : 2;
    unsigned long MIRCEN : 1;
    unsigned long Res5 : 1;
    unsigned long MIRCFSEL : 3;
    unsigned long HXTMD : 1;
} sM2L31_CLK_CLK_PWRCTL;

typedef union {
    sM2L31_CLK_CLK_PWRCTL Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PWRCTL;

#define M2L31_CLK_CLK_AHBCLK0_RESET_VALUE 0x00008004
typedef struct {
    unsigned long Res0 : 1;
    unsigned long PDMA0CKEN : 1;
    unsigned long ISPCKEN : 1;
    unsigned long EBICKEN : 1;
    unsigned long STCKEN : 1;
    unsigned long Res1 : 2;
    unsigned long CRCCKEN : 1;
    unsigned long Res2 : 4;
    unsigned long CRPTCKEN : 1;
    unsigned long KSCKEN : 1;
    unsigned long Res3 : 1;
    unsigned long FMCIDLE : 1;
    unsigned long USBHCKEN : 1;
    unsigned long Res4 : 6;
    unsigned long FMCFDIS : 1;
    unsigned long GPACKEN : 1;
    unsigned long GPBCKEN : 1;
    unsigned long GPCCKEN : 1;
    unsigned long GPDCKEN : 1;
    unsigned long GPECKEN : 1;
    unsigned long GPFCKEN : 1;
    unsigned long GPGCKEN : 1;
    unsigned long GPHCKEN : 1;
} sM2L31_CLK_CLK_AHBCLK0;

typedef union {
    sM2L31_CLK_CLK_AHBCLK0 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_AHBCLK0;

#define M2L31_CLK_CLK_APBCLK0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long RTCCKEN : 1;
    unsigned long TMR0CKEN : 1;
    unsigned long TMR1CKEN : 1;
    unsigned long TMR2CKEN : 1;
    unsigned long TMR3CKEN : 1;
    unsigned long CLKOCKEN : 1;
    unsigned long ACMP01CKEN : 1;
    unsigned long I2C0CKEN : 1;
    unsigned long I2C1CKEN : 1;
    unsigned long I2C2CKEN : 1;
    unsigned long I2C3CKEN : 1;
    unsigned long QSPI0CKEN : 1;
    unsigned long SPI0CKEN : 1;
    unsigned long SPI1CKEN : 1;
    unsigned long SPI2CKEN : 1;
    unsigned long UART0CKEN : 1;
    unsigned long UART1CKEN : 1;
    unsigned long UART2CKEN : 1;
    unsigned long UART3CKEN : 1;
    unsigned long UART4CKEN : 1;
    unsigned long UART5CKEN : 1;
    unsigned long UART6CKEN : 1;
    unsigned long UART7CKEN : 1;
    unsigned long Res1 : 2;
    unsigned long OTGCKEN : 1;
    unsigned long USBDCKEN : 1;
    unsigned long EADC0CKEN : 1;
    unsigned long Res2 : 2;
    unsigned long TRNGCKEN : 1;
} sM2L31_CLK_CLK_APBCLK0;

typedef union {
    sM2L31_CLK_CLK_APBCLK0 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_APBCLK0;

#define M2L31_CLK_CLK_APBCLK1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 6;
    unsigned long SPI3CKEN : 1;
    unsigned long Res1 : 1;
    unsigned long USCI0CKEN : 1;
    unsigned long USCI1CKEN : 1;
    unsigned long Res2 : 1;
    unsigned long WWDTCKEN : 1;
    unsigned long DACEN : 1;
    unsigned long Res3 : 3;
    unsigned long EPWM0CKEN : 1;
    unsigned long EPWM1CKEN : 1;
    unsigned long Res4 : 4;
    unsigned long EQEI0CKEN : 1;
    unsigned long EQEI1CKEN : 1;
    unsigned long Res5 : 1;
    unsigned long TKCKEN : 1;
    unsigned long ECAP0CKEN : 1;
    unsigned long ECAP1CKEN : 1;
    unsigned long Res6 : 4;
} sM2L31_CLK_CLK_APBCLK1;

typedef union {
    sM2L31_CLK_CLK_APBCLK1 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_APBCLK1;

#define M2L31_CLK_CLK_CLKSEL0_RESET_VALUE 0x0F000D3F
typedef struct {
    unsigned long HCLK0SEL : 3;
    unsigned long STCLKSEL : 3;
    unsigned long Res0 : 2;
    unsigned long USBSEL : 1;
    unsigned long Res1 : 1;
    unsigned long EADC0SEL : 2;
    unsigned long HCLK1SEL : 3;
    unsigned long Res2 : 9;
    unsigned long CANFD0SEL : 2;
    unsigned long CANFD1SEL : 2;
    unsigned long Res3 : 4;
} sM2L31_CLK_CLK_CLKSEL0;

typedef union {
    sM2L31_CLK_CLK_CLKSEL0 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CLKSEL0;

#define M2L31_CLK_CLK_CLKSEL1_RESET_VALUE 0x80777730
typedef struct {
    unsigned long Res0 : 4;
    unsigned long CLKOSEL : 4;
    unsigned long TMR0SEL : 3;
    unsigned long Res1 : 1;
    unsigned long TMR1SEL : 3;
    unsigned long Res2 : 1;
    unsigned long TMR2SEL : 3;
    unsigned long Res3 : 1;
    unsigned long TMR3SEL : 3;
    unsigned long Res4 : 7;
    unsigned long WWDTSEL : 2;
} sM2L31_CLK_CLK_CLKSEL1;

typedef union {
    sM2L31_CLK_CLK_CLKSEL1 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CLKSEL1;

#define M2L31_CLK_CLK_CLKSEL2_RESET_VALUE 0x0000202B
typedef struct {
    unsigned long EPWM0SEL : 1;
    unsigned long EPWM1SEL : 1;
    unsigned long QSPI0SEL : 2;
    unsigned long SPI0SEL : 3;
    unsigned long TKSEL : 1;
    unsigned long Res0 : 4;
    unsigned long SPI1SEL : 3;
    unsigned long Res1 : 17;
} sM2L31_CLK_CLK_CLKSEL2;

typedef union {
    sM2L31_CLK_CLK_CLKSEL2 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CLKSEL2;

#define M2L31_CLK_CLK_CLKSEL3_RESET_VALUE 0x00002200
typedef struct {
    unsigned long Res0 : 6;
    unsigned long PWM0SEL : 1;
    unsigned long PWM1SEL : 1;
    unsigned long SPI2SEL : 3;
    unsigned long Res1 : 1;
    unsigned long SPI3SEL : 3;
    unsigned long Res2 : 17;
} sM2L31_CLK_CLK_CLKSEL3;

typedef union {
    sM2L31_CLK_CLK_CLKSEL3 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CLKSEL3;

#define M2L31_CLK_CLK_CLKDIV0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long HCLK0DIV : 4;
    unsigned long USBDIV : 4;
    unsigned long UART0DIV : 4;
    unsigned long UART1DIV : 4;
    unsigned long EADC0DIV : 8;
    unsigned long Res0 : 8;
} sM2L31_CLK_CLK_CLKDIV0;

typedef union {
    sM2L31_CLK_CLK_CLKDIV0 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CLKDIV0;

#define M2L31_CLK_CLK_CLKDIV4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long UART2DIV : 4;
    unsigned long UART3DIV : 4;
    unsigned long UART4DIV : 4;
    unsigned long UART5DIV : 4;
    unsigned long UART6DIV : 4;
    unsigned long UART7DIV : 4;
    unsigned long Res0 : 8;
} sM2L31_CLK_CLK_CLKDIV4;

typedef union {
    sM2L31_CLK_CLK_CLKDIV4 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CLKDIV4;

#define M2L31_CLK_CLK_PCLKDIV_RESET_VALUE 0x00000000
typedef struct {
    unsigned long APB0DIV : 3;
    unsigned long Res0 : 1;
    unsigned long APB1DIV : 3;
    unsigned long Res1 : 25;
} sM2L31_CLK_CLK_PCLKDIV;

typedef union {
    sM2L31_CLK_CLK_PCLKDIV Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PCLKDIV;

#define M2L31_CLK_CLK_APBCLK2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 7;
    unsigned long ACMP2CKEN : 1;
    unsigned long PWM0CKEN : 1;
    unsigned long PWM1CKEN : 1;
    unsigned long Res1 : 5;
    unsigned long UTCPD0CKEN : 1;
    unsigned long Res2 : 16;
} sM2L31_CLK_CLK_APBCLK2;

typedef union {
    sM2L31_CLK_CLK_APBCLK2 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_APBCLK2;

#define M2L31_CLK_CLK_CLKDIV5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CANFD0DIV : 4;
    unsigned long CANFD1DIV : 4;
    unsigned long Res0 : 24;
} sM2L31_CLK_CLK_CLKDIV5;

typedef union {
    sM2L31_CLK_CLK_CLKDIV5 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CLKDIV5;

#define M2L31_CLK_CLK_PLLCTL_RESET_VALUE 0x00010000
typedef struct {
    unsigned long Res0 : 16;
    unsigned long PD : 1;
    unsigned long BP : 1;
    unsigned long OE : 1;
    unsigned long PLLSRC : 1;
    unsigned long Res1 : 3;
    unsigned long STBSEL : 1;
    unsigned long Res2 : 8;
} sM2L31_CLK_CLK_PLLCTL;

typedef union {
    sM2L31_CLK_CLK_PLLCTL Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PLLCTL;

#define M2L31_CLK_CLK_PLLCTL2_RESET_VALUE 0x00008422
typedef struct {
    unsigned long FBDIV : 9;
    unsigned long INDIV : 5;
    unsigned long OUTDIV : 2;
    unsigned long FRDIV : 12;
    unsigned long Res0 : 4;
} sM2L31_CLK_CLK_PLLCTL2;

typedef union {
    sM2L31_CLK_CLK_PLLCTL2 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PLLCTL2;

#define M2L31_CLK_CLK_CLKSEL4_RESET_VALUE 0x33333333
typedef struct {
    unsigned long UART0SEL : 3;
    unsigned long Res0 : 1;
    unsigned long UART1SEL : 3;
    unsigned long Res1 : 1;
    unsigned long UART2SEL : 3;
    unsigned long Res2 : 1;
    unsigned long UART3SEL : 3;
    unsigned long Res3 : 1;
    unsigned long UART4SEL : 3;
    unsigned long Res4 : 1;
    unsigned long UART5SEL : 3;
    unsigned long Res5 : 1;
    unsigned long UART6SEL : 3;
    unsigned long Res6 : 1;
    unsigned long UART7SEL : 3;
    unsigned long Res7 : 1;
} sM2L31_CLK_CLK_CLKSEL4;

typedef union {
    sM2L31_CLK_CLK_CLKSEL4 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CLKSEL4;

#define M2L31_CLK_CLK_STATUS_RESET_VALUE 0x00000018
typedef struct {
    unsigned long HXTSTB : 1;
    unsigned long LXTSTB : 1;
    unsigned long PLLSTB : 1;
    unsigned long LIRCSTB : 1;
    unsigned long HIRCSTB : 1;
    unsigned long MIRCSTB : 1;
    unsigned long HIRC48MSTB : 1;
    unsigned long CLKSFAIL : 1;
    unsigned long Res0 : 24;
} sM2L31_CLK_CLK_STATUS;

typedef union {
    sM2L31_CLK_CLK_STATUS Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_STATUS;

#define M2L31_CLK_CLK_AHBCLK1_RESET_VALUE 0x10000000
typedef struct {
    unsigned long Res0 : 16;
    unsigned long CANRAM0EN : 1;
    unsigned long CANRAM1EN : 1;
    unsigned long Res1 : 2;
    unsigned long CANFD0CKEN : 1;
    unsigned long CANFD1CKEN : 1;
    unsigned long Res2 : 6;
    unsigned long HCLK1EN : 1;
    unsigned long Res3 : 3;
} sM2L31_CLK_CLK_AHBCLK1;

typedef union {
    sM2L31_CLK_CLK_AHBCLK1 Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_AHBCLK1;

#define M2L31_CLK_CLK_CLKOCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FREQSEL : 4;
    unsigned long CLKOEN : 1;
    unsigned long DIV1EN : 1;
    unsigned long CLK1HZEN : 1;
    unsigned long Res0 : 25;
} sM2L31_CLK_CLK_CLKOCTL;

typedef union {
    sM2L31_CLK_CLK_CLKOCTL Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CLKOCTL;

#define M2L31_CLK_CLK_CLKDCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long HXTFDEN : 1;
    unsigned long HXTFIEN : 1;
    unsigned long Res1 : 6;
    unsigned long LXTFDEN : 1;
    unsigned long LXTFIEN : 1;
    unsigned long Res2 : 2;
    unsigned long HXTFQDEN : 1;
    unsigned long HXTFQIEN : 1;
    unsigned long Res3 : 14;
} sM2L31_CLK_CLK_CLKDCTL;

typedef union {
    sM2L31_CLK_CLK_CLKDCTL Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CLKDCTL;

#define M2L31_CLK_CLK_CLKDSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long HXTFIF : 1;
    unsigned long LXTFIF : 1;
    unsigned long Res0 : 6;
    unsigned long HXTFQIF : 1;
    unsigned long Res1 : 23;
} sM2L31_CLK_CLK_CLKDSTS;

typedef union {
    sM2L31_CLK_CLK_CLKDSTS Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CLKDSTS;

#define M2L31_CLK_CLK_CDUPB_RESET_VALUE 0x00000000
typedef struct {
    unsigned long UPERBD : 11;
    unsigned long Res0 : 21;
} sM2L31_CLK_CLK_CDUPB;

typedef union {
    sM2L31_CLK_CLK_CDUPB Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CDUPB;

#define M2L31_CLK_CLK_CDLOWB_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LOWERBD : 11;
    unsigned long Res0 : 21;
} sM2L31_CLK_CLK_CDLOWB;

typedef union {
    sM2L31_CLK_CLK_CDLOWB Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_CDLOWB;

#define M2L31_CLK_CLK_STOPREQ_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CANFD0REQ : 1;
    unsigned long CANFD1REQ : 1;
    unsigned long Res0 : 30;
} sM2L31_CLK_CLK_STOPREQ;

typedef union {
    sM2L31_CLK_CLK_STOPREQ Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_STOPREQ;

#define M2L31_CLK_CLK_STOPACK_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CANFD0ACK : 1;
    unsigned long CANFD1ACK : 1;
    unsigned long Res0 : 30;
} sM2L31_CLK_CLK_STOPACK;

typedef union {
    sM2L31_CLK_CLK_STOPACK Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_STOPACK;

#define M2L31_CLK_CLK_PMUCTL_RESET_VALUE 0x00010600
typedef struct {
    unsigned long PDMSEL : 4;
    unsigned long Res0 : 4;
    unsigned long SRETSEL : 3;
    unsigned long Res1 : 5;
    unsigned long LSRETSEL : 1;
    unsigned long Res2 : 3;
    unsigned long CARETDIS : 1;
    unsigned long Res3 : 11;
} sM2L31_CLK_CLK_PMUCTL;

typedef union {
    sM2L31_CLK_CLK_PMUCTL Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PMUCTL;

#define M2L31_CLK_CLK_PMUSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKPIN0 : 1;
    unsigned long TMRWK : 1;
    unsigned long RTCWK : 1;
    unsigned long WKPIN1 : 1;
    unsigned long WKPIN2 : 1;
    unsigned long WKPIN3 : 1;
    unsigned long WKPIN4 : 1;
    unsigned long WKPIN5 : 1;
    unsigned long GPAWK0 : 1;
    unsigned long GPBWK0 : 1;
    unsigned long GPCWK0 : 1;
    unsigned long GPDWK0 : 1;
    unsigned long LVRWK : 1;
    unsigned long BODWK : 1;
    unsigned long Res0 : 1;
    unsigned long RSTWK : 1;
    unsigned long ACMPWK0 : 1;
    unsigned long ACMPWK1 : 1;
    unsigned long ACMPWK2 : 1;
    unsigned long Res1 : 5;
    unsigned long GPAWK1 : 1;
    unsigned long GPBWK1 : 1;
    unsigned long GPCWK1 : 1;
    unsigned long GPDWK1 : 1;
    unsigned long Res2 : 3;
    unsigned long CLRWK : 1;
} sM2L31_CLK_CLK_PMUSTS;

typedef union {
    sM2L31_CLK_CLK_PMUSTS Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PMUSTS;

#define M2L31_CLK_CLK_PMUWKCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKTMREN : 1;
    unsigned long WKTMRMOD : 1;
    unsigned long Res0 : 4;
    unsigned long ACMPWKEN : 1;
    unsigned long RTCWKEN : 1;
    unsigned long WKTMRIS : 4;
    unsigned long Res1 : 4;
    unsigned long WKPINEN0 : 2;
    unsigned long WKPINEN1 : 2;
    unsigned long WKPINEN2 : 2;
    unsigned long WKPINEN3 : 2;
    unsigned long WKPINEN4 : 2;
    unsigned long WKPINEN5 : 2;
    unsigned long Res2 : 3;
    unsigned long DISAUTOC : 1;
} sM2L31_CLK_CLK_PMUWKCTL;

typedef union {
    sM2L31_CLK_CLK_PMUWKCTL Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PMUWKCTL;

#define M2L31_CLK_CLK_PWDBCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SWKDBCLKSEL : 4;
    unsigned long Res0 : 28;
} sM2L31_CLK_CLK_PWDBCTL;

typedef union {
    sM2L31_CLK_CLK_PWDBCTL Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PWDBCTL;

#define M2L31_CLK_CLK_PAPWCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKEN0 : 1;
    unsigned long PRWKEN0 : 1;
    unsigned long PFWKEN0 : 1;
    unsigned long Res0 : 1;
    unsigned long WKPSEL0 : 4;
    unsigned long DBEN0 : 1;
    unsigned long Res1 : 1;
    unsigned long TRIGM0 : 1;
    unsigned long NMR0 : 1;
    unsigned long Res2 : 4;
    unsigned long WKEN1 : 1;
    unsigned long PRWKEN1 : 1;
    unsigned long PFWKEN1 : 1;
    unsigned long Res3 : 1;
    unsigned long WKPSEL1 : 4;
    unsigned long DBEN1 : 1;
    unsigned long Res4 : 1;
    unsigned long TRIGM1 : 1;
    unsigned long NMR1 : 1;
    unsigned long Res5 : 4;
} sM2L31_CLK_CLK_PAPWCTL;

typedef union {
    sM2L31_CLK_CLK_PAPWCTL Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PAPWCTL;

#define M2L31_CLK_CLK_PBPWCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKEN0 : 1;
    unsigned long PRWKEN0 : 1;
    unsigned long PFWKEN0 : 1;
    unsigned long Res0 : 1;
    unsigned long WKPSEL0 : 4;
    unsigned long DBEN0 : 1;
    unsigned long Res1 : 1;
    unsigned long TRIGM0 : 1;
    unsigned long NMR0 : 1;
    unsigned long Res2 : 4;
    unsigned long WKEN1 : 1;
    unsigned long PRWKEN1 : 1;
    unsigned long PFWKEN1 : 1;
    unsigned long Res3 : 1;
    unsigned long WKPSEL1 : 4;
    unsigned long DBEN1 : 1;
    unsigned long Res4 : 1;
    unsigned long TRIGM1 : 1;
    unsigned long NMR1 : 1;
    unsigned long Res5 : 4;
} sM2L31_CLK_CLK_PBPWCTL;

typedef union {
    sM2L31_CLK_CLK_PBPWCTL Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PBPWCTL;

#define M2L31_CLK_CLK_PCPWCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKEN0 : 1;
    unsigned long PRWKEN0 : 1;
    unsigned long PFWKEN0 : 1;
    unsigned long Res0 : 1;
    unsigned long WKPSEL0 : 4;
    unsigned long DBEN0 : 1;
    unsigned long Res1 : 1;
    unsigned long TRIGM0 : 1;
    unsigned long NMR0 : 1;
    unsigned long Res2 : 4;
    unsigned long WKEN1 : 1;
    unsigned long PRWKEN1 : 1;
    unsigned long PFWKEN1 : 1;
    unsigned long Res3 : 1;
    unsigned long WKPSEL1 : 4;
    unsigned long DBEN1 : 1;
    unsigned long Res4 : 1;
    unsigned long TRIGM1 : 1;
    unsigned long NMR1 : 1;
    unsigned long Res5 : 4;
} sM2L31_CLK_CLK_PCPWCTL;

typedef union {
    sM2L31_CLK_CLK_PCPWCTL Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PCPWCTL;

#define M2L31_CLK_CLK_PDPWCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKEN0 : 1;
    unsigned long PRWKEN0 : 1;
    unsigned long PFWKEN0 : 1;
    unsigned long Res0 : 1;
    unsigned long WKPSEL0 : 4;
    unsigned long DBEN0 : 1;
    unsigned long Res1 : 1;
    unsigned long TRIGM0 : 1;
    unsigned long NMR0 : 1;
    unsigned long Res2 : 4;
    unsigned long WKEN1 : 1;
    unsigned long PRWKEN1 : 1;
    unsigned long PFWKEN1 : 1;
    unsigned long Res3 : 1;
    unsigned long WKPSEL1 : 4;
    unsigned long DBEN1 : 1;
    unsigned long Res4 : 1;
    unsigned long TRIGM1 : 1;
    unsigned long NMR1 : 1;
    unsigned long Res5 : 4;
} sM2L31_CLK_CLK_PDPWCTL;

typedef union {
    sM2L31_CLK_CLK_PDPWCTL Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PDPWCTL;

#define M2L31_CLK_CLK_IOPDCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IOHR : 1;
    unsigned long Res0 : 7;
    unsigned long DPDHOLDEN : 1;
    unsigned long Res1 : 23;
} sM2L31_CLK_CLK_IOPDCTL;

typedef union {
    sM2L31_CLK_CLK_IOPDCTL Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_IOPDCTL;

#define M2L31_CLK_CLK_PMUINTC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKTMRIE : 1;
    unsigned long Res0 : 7;
    unsigned long WKIOA0IE : 1;
    unsigned long WKIOB0IE : 1;
    unsigned long WKIOC0IE : 1;
    unsigned long WKIOD0IE : 1;
    unsigned long WKIOA1IE : 1;
    unsigned long WKIOB1IE : 1;
    unsigned long WKIOC1IE : 1;
    unsigned long WKIOD1IE : 1;
    unsigned long Res1 : 16;
} sM2L31_CLK_CLK_PMUINTC;

typedef union {
    sM2L31_CLK_CLK_PMUINTC Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PMUINTC;

#define M2L31_CLK_CLK_PMUINTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKTMRIF : 1;
    unsigned long Res0 : 7;
    unsigned long WKIOA0IF : 1;
    unsigned long WKIOB0IF : 1;
    unsigned long WKIOC0IF : 1;
    unsigned long WKIOD0IF : 1;
    unsigned long WKIOA1IF : 1;
    unsigned long WKIOB1IF : 1;
    unsigned long WKIOC1IF : 1;
    unsigned long WKIOD1IF : 1;
    unsigned long Res1 : 16;
} sM2L31_CLK_CLK_PMUINTS;

typedef union {
    sM2L31_CLK_CLK_PMUINTS Bit;
    unsigned long  All;
} uM2L31_CLK_CLK_PMUINTS;

typedef struct {
    uM2L31_CLK_CLK_PWRCTL M2L31_CLK_CLK_PWRCTL; // Offset: 0x0
    uM2L31_CLK_CLK_AHBCLK0 M2L31_CLK_CLK_AHBCLK0; // Offset: 0x4
    uM2L31_CLK_CLK_APBCLK0 M2L31_CLK_CLK_APBCLK0; // Offset: 0x8
    uM2L31_CLK_CLK_APBCLK1 M2L31_CLK_CLK_APBCLK1; // Offset: 0xc
    uM2L31_CLK_CLK_CLKSEL0 M2L31_CLK_CLK_CLKSEL0; // Offset: 0x10
    uM2L31_CLK_CLK_CLKSEL1 M2L31_CLK_CLK_CLKSEL1; // Offset: 0x14
    uM2L31_CLK_CLK_CLKSEL2 M2L31_CLK_CLK_CLKSEL2; // Offset: 0x18
    uM2L31_CLK_CLK_CLKSEL3 M2L31_CLK_CLK_CLKSEL3; // Offset: 0x1c
    uM2L31_CLK_CLK_CLKDIV0 M2L31_CLK_CLK_CLKDIV0; // Offset: 0x20
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    uM2L31_CLK_CLK_CLKDIV4 M2L31_CLK_CLK_CLKDIV4; // Offset: 0x30
    uM2L31_CLK_CLK_PCLKDIV M2L31_CLK_CLK_PCLKDIV; // Offset: 0x34
    uM2L31_CLK_CLK_APBCLK2 M2L31_CLK_CLK_APBCLK2; // Offset: 0x38
    uM2L31_CLK_CLK_CLKDIV5 M2L31_CLK_CLK_CLKDIV5; // Offset: 0x3c
    uM2L31_CLK_CLK_PLLCTL M2L31_CLK_CLK_PLLCTL; // Offset: 0x40
    uM2L31_CLK_CLK_PLLCTL2 M2L31_CLK_CLK_PLLCTL2; // Offset: 0x44
    uM2L31_CLK_CLK_CLKSEL4 M2L31_CLK_CLK_CLKSEL4; // Offset: 0x48
    unsigned long Reserved3;
    uM2L31_CLK_CLK_STATUS M2L31_CLK_CLK_STATUS; // Offset: 0x50
    unsigned long Reserved4;
    uM2L31_CLK_CLK_AHBCLK1 M2L31_CLK_CLK_AHBCLK1; // Offset: 0x58
    unsigned long Reserved5;
    uM2L31_CLK_CLK_CLKOCTL M2L31_CLK_CLK_CLKOCTL; // Offset: 0x60
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    uM2L31_CLK_CLK_CLKDCTL M2L31_CLK_CLK_CLKDCTL; // Offset: 0x70
    uM2L31_CLK_CLK_CLKDSTS M2L31_CLK_CLK_CLKDSTS; // Offset: 0x74
    uM2L31_CLK_CLK_CDUPB M2L31_CLK_CLK_CDUPB; // Offset: 0x78
    uM2L31_CLK_CLK_CDLOWB M2L31_CLK_CLK_CDLOWB; // Offset: 0x7c
    uM2L31_CLK_CLK_STOPREQ M2L31_CLK_CLK_STOPREQ; // Offset: 0x80
    uM2L31_CLK_CLK_STOPACK M2L31_CLK_CLK_STOPACK; // Offset: 0x84
    unsigned long Reserved9;
    unsigned long Reserved10;
    uM2L31_CLK_CLK_PMUCTL M2L31_CLK_CLK_PMUCTL; // Offset: 0x90
    uM2L31_CLK_CLK_PMUSTS M2L31_CLK_CLK_PMUSTS; // Offset: 0x94
    uM2L31_CLK_CLK_PMUWKCTL M2L31_CLK_CLK_PMUWKCTL; // Offset: 0x98
    uM2L31_CLK_CLK_PWDBCTL M2L31_CLK_CLK_PWDBCTL; // Offset: 0x9c
    uM2L31_CLK_CLK_PAPWCTL M2L31_CLK_CLK_PAPWCTL; // Offset: 0xa0
    uM2L31_CLK_CLK_PBPWCTL M2L31_CLK_CLK_PBPWCTL; // Offset: 0xa4
    uM2L31_CLK_CLK_PCPWCTL M2L31_CLK_CLK_PCPWCTL; // Offset: 0xa8
    uM2L31_CLK_CLK_PDPWCTL M2L31_CLK_CLK_PDPWCTL; // Offset: 0xac
    uM2L31_CLK_CLK_IOPDCTL M2L31_CLK_CLK_IOPDCTL; // Offset: 0xb0
    unsigned long Reserved11;
    unsigned long Reserved12;
    unsigned long Reserved13;
    uM2L31_CLK_CLK_PMUINTC M2L31_CLK_CLK_PMUINTC; // Offset: 0xc0
    uM2L31_CLK_CLK_PMUINTS M2L31_CLK_CLK_PMUINTS; // Offset: 0xc4
} sM2L31_CLK;

