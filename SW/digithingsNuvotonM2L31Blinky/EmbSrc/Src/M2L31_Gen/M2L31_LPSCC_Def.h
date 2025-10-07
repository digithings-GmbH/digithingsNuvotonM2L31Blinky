// Base Addres of LPSCC = 0x40038000

#define M2L31_LPSCC_LPSCC_IPRST0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LPPDMA0RST : 1;
    unsigned long LPGPIORST : 1;
    unsigned long LPSRAMRST : 1;
    unsigned long Res0 : 13;
    unsigned long WDTRST : 1;
    unsigned long LPSPI0RST : 1;
    unsigned long LPI2C0RST : 1;
    unsigned long LPUART0RST : 1;
    unsigned long LPTMR0RST : 1;
    unsigned long LPTMR1RST : 1;
    unsigned long TTMR0RST : 1;
    unsigned long TTMR1RST : 1;
    unsigned long LPADC0RST : 1;
    unsigned long Res1 : 2;
    unsigned long OPARST : 1;
    unsigned long Res2 : 4;
} sM2L31_LPSCC_LPSCC_IPRST0;

typedef union {
    sM2L31_LPSCC_LPSCC_IPRST0 Bit;
    unsigned long  All;
} uM2L31_LPSCC_LPSCC_IPRST0;

#define M2L31_LPSCC_LPSCC_CLKEN0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LPPDMA0CKEN : 1;
    unsigned long LPGPIOCKEN : 1;
    unsigned long LPSRAMCKEN : 1;
    unsigned long Res0 : 13;
    unsigned long WDTCKEN : 1;
    unsigned long LPSPI0CKEN : 1;
    unsigned long LPI2C0CKEN : 1;
    unsigned long LPUART0CKEN : 1;
    unsigned long LPTMR0CKEN : 1;
    unsigned long LPTMR1CKEN : 1;
    unsigned long TTMR0CKEN : 1;
    unsigned long TTMR1CKEN : 1;
    unsigned long LPADC0CKEN : 1;
    unsigned long Res1 : 2;
    unsigned long OPACKEN : 1;
    unsigned long Res2 : 4;
} sM2L31_LPSCC_LPSCC_CLKEN0;

typedef union {
    sM2L31_LPSCC_LPSCC_CLKEN0 Bit;
    unsigned long  All;
} uM2L31_LPSCC_LPSCC_CLKEN0;

#define M2L31_LPSCC_LPSCC_CLKKEEP0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LPPDMA0KEEP : 1;
    unsigned long LPGPIOKEEP : 1;
    unsigned long LPSRAMKEEP : 1;
    unsigned long Res0 : 13;
    unsigned long WDTKEEP : 1;
    unsigned long LPSPI0KEEP : 1;
    unsigned long LPI2C0KEEP : 1;
    unsigned long LPUART0KEEP : 1;
    unsigned long LPTMR0KEEP : 1;
    unsigned long LPTMR1KEEP : 1;
    unsigned long TTMR0KEEP : 1;
    unsigned long TTMR1KEEP : 1;
    unsigned long LPADC0KEEP : 1;
    unsigned long Res1 : 2;
    unsigned long OPAKEEP : 1;
    unsigned long Res2 : 4;
} sM2L31_LPSCC_LPSCC_CLKKEEP0;

typedef union {
    sM2L31_LPSCC_LPSCC_CLKKEEP0 Bit;
    unsigned long  All;
} uM2L31_LPSCC_LPSCC_CLKKEEP0;

#define M2L31_LPSCC_LPSCC_CLKSEL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LPUART0SEL : 2;
    unsigned long LPSPI0SEL : 2;
    unsigned long TTMR0SEL : 2;
    unsigned long TTMR1SEL : 2;
    unsigned long LPTMR0SEL : 3;
    unsigned long Res0 : 1;
    unsigned long LPTMR1SEL : 3;
    unsigned long Res1 : 1;
    unsigned long LPADC0SEL : 2;
    unsigned long Res2 : 6;
    unsigned long WDTSEL : 2;
    unsigned long Res3 : 6;
} sM2L31_LPSCC_LPSCC_CLKSEL0;

typedef union {
    sM2L31_LPSCC_LPSCC_CLKSEL0 Bit;
    unsigned long  All;
} uM2L31_LPSCC_LPSCC_CLKSEL0;

#define M2L31_LPSCC_LPSCC_CLKDIV0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long HCLK1DIV : 4;
    unsigned long APB2DIV : 3;
    unsigned long Res0 : 1;
    unsigned long LPUART0DIV : 4;
    unsigned long Res1 : 4;
    unsigned long LPADC0DIV : 4;
    unsigned long Res2 : 12;
} sM2L31_LPSCC_LPSCC_CLKDIV0;

typedef union {
    sM2L31_LPSCC_LPSCC_CLKDIV0 Bit;
    unsigned long  All;
} uM2L31_LPSCC_LPSCC_CLKDIV0;

#define M2L31_LPSCC_LPSCC_CLKMCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CLKM0SEL : 2;
    unsigned long Res0 : 6;
    unsigned long CLKM1SEL : 2;
    unsigned long Res1 : 14;
    unsigned long AOCMEN1 : 1;
    unsigned long AOCMEN2 : 1;
    unsigned long Res2 : 6;
} sM2L31_LPSCC_LPSCC_CLKMCTL;

typedef union {
    sM2L31_LPSCC_LPSCC_CLKMCTL Bit;
    unsigned long  All;
} uM2L31_LPSCC_LPSCC_CLKMCTL;

#define M2L31_LPSCC_LPSCC_SRAMCTL_RESET_VALUE 0x00000010
typedef struct {
    unsigned long LPSRAMEN : 1;
    unsigned long Res0 : 3;
    unsigned long LPSRAMDR : 1;
    unsigned long LPSRAMDRL : 1;
    unsigned long Res1 : 26;
} sM2L31_LPSCC_LPSCC_SRAMCTL;

typedef union {
    sM2L31_LPSCC_LPSCC_SRAMCTL Bit;
    unsigned long  All;
} uM2L31_LPSCC_LPSCC_SRAMCTL;

#define M2L31_LPSCC_LPSCC_IOHCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SCHDIS : 1;
    unsigned long Res0 : 31;
} sM2L31_LPSCC_LPSCC_IOHCTL;

typedef union {
    sM2L31_LPSCC_LPSCC_IOHCTL Bit;
    unsigned long  All;
} uM2L31_LPSCC_LPSCC_IOHCTL;

typedef struct {
    uM2L31_LPSCC_LPSCC_IPRST0 M2L31_LPSCC_LPSCC_IPRST0; // Offset: 0x4
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
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
    uM2L31_LPSCC_LPSCC_CLKEN0 M2L31_LPSCC_LPSCC_CLKEN0; // Offset: 0x40
    uM2L31_LPSCC_LPSCC_CLKKEEP0 M2L31_LPSCC_LPSCC_CLKKEEP0; // Offset: 0x44
    unsigned long Reserved14;
    unsigned long Reserved15;
    uM2L31_LPSCC_LPSCC_CLKSEL0 M2L31_LPSCC_LPSCC_CLKSEL0; // Offset: 0x50
    unsigned long Reserved16;
    unsigned long Reserved17;
    unsigned long Reserved18;
    uM2L31_LPSCC_LPSCC_CLKDIV0 M2L31_LPSCC_LPSCC_CLKDIV0; // Offset: 0x60
    unsigned long Reserved19;
    unsigned long Reserved20;
    unsigned long Reserved21;
    unsigned long Reserved22;
    unsigned long Reserved23;
    unsigned long Reserved24;
    unsigned long Reserved25;
    uM2L31_LPSCC_LPSCC_CLKMCTL M2L31_LPSCC_LPSCC_CLKMCTL; // Offset: 0x80
    unsigned long Reserved26;
    unsigned long Reserved27;
    unsigned long Reserved28;
    unsigned long Reserved29;
    unsigned long Reserved30;
    unsigned long Reserved31;
    unsigned long Reserved32;
    uM2L31_LPSCC_LPSCC_SRAMCTL M2L31_LPSCC_LPSCC_SRAMCTL; // Offset: 0xa0
    unsigned long Reserved33;
    unsigned long Reserved34;
    unsigned long Reserved35;
    unsigned long Reserved36;
    unsigned long Reserved37;
    unsigned long Reserved38;
    unsigned long Reserved39;
    unsigned long Reserved40;
    unsigned long Reserved41;
    unsigned long Reserved42;
    unsigned long Reserved43;
    unsigned long Reserved44;
    unsigned long Reserved45;
    unsigned long Reserved46;
    unsigned long Reserved47;
    unsigned long Reserved48;
    unsigned long Reserved49;
    unsigned long Reserved50;
    unsigned long Reserved51;
    unsigned long Reserved52;
    unsigned long Reserved53;
    unsigned long Reserved54;
    unsigned long Reserved55;
    uM2L31_LPSCC_LPSCC_IOHCTL M2L31_LPSCC_LPSCC_IOHCTL; // Offset: 0x100
} sM2L31_LPSCC;

