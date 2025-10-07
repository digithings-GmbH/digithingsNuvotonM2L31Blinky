// Base Addres of TTMR01 = 0x400E5000

#define M2L31_TTMR01_TTMR0_CTL_RESET_VALUE 0x00000005
typedef struct {
    unsigned long PSC : 8;
    unsigned long Res0 : 8;
    unsigned long PDCLKEN : 1;
    unsigned long Res1 : 3;
    unsigned long PERIOSEL : 1;
    unsigned long Res2 : 2;
    unsigned long WKEN : 1;
    unsigned long Res3 : 1;
    unsigned long ACTSTS : 1;
    unsigned long Res4 : 1;
    unsigned long OPMODE : 2;
    unsigned long INTEN : 1;
    unsigned long CNTEN : 1;
    unsigned long ICEDEBUG : 1;
} sM2L31_TTMR01_TTMR0_CTL;

typedef union {
    sM2L31_TTMR01_TTMR0_CTL Bit;
    unsigned long  All;
} uM2L31_TTMR01_TTMR0_CTL;

#define M2L31_TTMR01_TTMR0_CMP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMPDAT : 24;
    unsigned long Res0 : 8;
} sM2L31_TTMR01_TTMR0_CMP;

typedef union {
    sM2L31_TTMR01_TTMR0_CMP Bit;
    unsigned long  All;
} uM2L31_TTMR01_TTMR0_CMP;

#define M2L31_TTMR01_TTMR0_INTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TIF : 1;
    unsigned long TWKF : 1;
    unsigned long Res0 : 30;
} sM2L31_TTMR01_TTMR0_INTSTS;

typedef union {
    sM2L31_TTMR01_TTMR0_INTSTS Bit;
    unsigned long  All;
} uM2L31_TTMR01_TTMR0_INTSTS;

#define M2L31_TTMR01_TTMR0_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 24;
    unsigned long Res0 : 7;
    unsigned long RSTACT : 1;
} sM2L31_TTMR01_TTMR0_CNT;

typedef union {
    sM2L31_TTMR01_TTMR0_CNT Bit;
    unsigned long  All;
} uM2L31_TTMR01_TTMR0_CNT;

#define M2L31_TTMR01_TTMR0_TRGCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long TRGEN : 1;
    unsigned long Res1 : 2;
    unsigned long TRGLPPDMA : 1;
    unsigned long Res2 : 27;
} sM2L31_TTMR01_TTMR0_TRGCTL;

typedef union {
    sM2L31_TTMR01_TTMR0_TRGCTL Bit;
    unsigned long  All;
} uM2L31_TTMR01_TTMR0_TRGCTL;

#define M2L31_TTMR01_TTMR1_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TTMR01_TTMR1_CTL;

typedef union {
    sM2L31_TTMR01_TTMR1_CTL Bit;
    unsigned long  All;
} uM2L31_TTMR01_TTMR1_CTL;

#define M2L31_TTMR01_TTMR1_CMP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TTMR01_TTMR1_CMP;

typedef union {
    sM2L31_TTMR01_TTMR1_CMP Bit;
    unsigned long  All;
} uM2L31_TTMR01_TTMR1_CMP;

#define M2L31_TTMR01_TTMR1_INTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TTMR01_TTMR1_INTSTS;

typedef union {
    sM2L31_TTMR01_TTMR1_INTSTS Bit;
    unsigned long  All;
} uM2L31_TTMR01_TTMR1_INTSTS;

#define M2L31_TTMR01_TTMR1_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TTMR01_TTMR1_CNT;

typedef union {
    sM2L31_TTMR01_TTMR1_CNT Bit;
    unsigned long  All;
} uM2L31_TTMR01_TTMR1_CNT;

#define M2L31_TTMR01_TTMR1_TRGCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TTMR01_TTMR1_TRGCTL;

typedef union {
    sM2L31_TTMR01_TTMR1_TRGCTL Bit;
    unsigned long  All;
} uM2L31_TTMR01_TTMR1_TRGCTL;

typedef struct {
    uM2L31_TTMR01_TTMR0_CTL M2L31_TTMR01_TTMR0_CTL; // Offset: 0x0
    uM2L31_TTMR01_TTMR0_CMP M2L31_TTMR01_TTMR0_CMP; // Offset: 0x4
    uM2L31_TTMR01_TTMR0_INTSTS M2L31_TTMR01_TTMR0_INTSTS; // Offset: 0x8
    uM2L31_TTMR01_TTMR0_CNT M2L31_TTMR01_TTMR0_CNT; // Offset: 0xc
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    uM2L31_TTMR01_TTMR0_TRGCTL M2L31_TTMR01_TTMR0_TRGCTL; // Offset: 0x1c
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
    unsigned long Reserved14;
    unsigned long Reserved15;
    unsigned long Reserved16;
    unsigned long Reserved17;
    unsigned long Reserved18;
    unsigned long Reserved19;
    unsigned long Reserved20;
    unsigned long Reserved21;
    unsigned long Reserved22;
    unsigned long Reserved23;
    unsigned long Reserved24;
    unsigned long Reserved25;
    unsigned long Reserved26;
    unsigned long Reserved27;
    unsigned long Reserved28;
    unsigned long Reserved29;
    unsigned long Reserved30;
    unsigned long Reserved31;
    unsigned long Reserved32;
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
    unsigned long Reserved56;
    unsigned long Reserved57;
    unsigned long Reserved58;
    uM2L31_TTMR01_TTMR1_CTL M2L31_TTMR01_TTMR1_CTL; // Offset: 0x100
    uM2L31_TTMR01_TTMR1_CMP M2L31_TTMR01_TTMR1_CMP; // Offset: 0x104
    uM2L31_TTMR01_TTMR1_INTSTS M2L31_TTMR01_TTMR1_INTSTS; // Offset: 0x108
    uM2L31_TTMR01_TTMR1_CNT M2L31_TTMR01_TTMR1_CNT; // Offset: 0x10c
    unsigned long Reserved59;
    unsigned long Reserved60;
    unsigned long Reserved61;
    uM2L31_TTMR01_TTMR1_TRGCTL M2L31_TTMR01_TTMR1_TRGCTL; // Offset: 0x11c
} sM2L31_TTMR01;

