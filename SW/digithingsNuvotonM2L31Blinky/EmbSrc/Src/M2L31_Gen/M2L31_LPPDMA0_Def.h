// Base Addres of LPPDMA0 = 0x40039000

#define M2L31_LPPDMA0_LPPDMAx_DSCT0_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OPMODE : 2;
    unsigned long TXTYPE : 1;
    unsigned long Res0 : 1;
    unsigned long BURSIZE : 3;
    unsigned long TBINTDIS : 1;
    unsigned long SAINC : 2;
    unsigned long DAINC : 2;
    unsigned long TXWIDTH : 2;
    unsigned long Res1 : 2;
    unsigned long TXCNT : 16;
} sM2L31_LPPDMA0_LPPDMAx_DSCT0_CTL;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT0_CTL Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT0_CTL;

#define M2L31_LPPDMA0_LPPDMAx_DSCT1_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT1_CTL;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT1_CTL Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT1_CTL;

#define M2L31_LPPDMA0_LPPDMAx_DSCT2_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT2_CTL;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT2_CTL Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT2_CTL;

#define M2L31_LPPDMA0_LPPDMAx_DSCT3_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT3_CTL;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT3_CTL Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT3_CTL;

#define M2L31_LPPDMA0_LPPDMAx_DSCT0_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SA : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT0_SA;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT0_SA Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT0_SA;

#define M2L31_LPPDMA0_LPPDMAx_DSCT1_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT1_SA;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT1_SA Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT1_SA;

#define M2L31_LPPDMA0_LPPDMAx_DSCT2_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT2_SA;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT2_SA Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT2_SA;

#define M2L31_LPPDMA0_LPPDMAx_DSCT3_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT3_SA;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT3_SA Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT3_SA;

#define M2L31_LPPDMA0_LPPDMAx_DSCT0_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DA : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT0_DA;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT0_DA Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT0_DA;

#define M2L31_LPPDMA0_LPPDMAx_DSCT1_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT1_DA;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT1_DA Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT1_DA;

#define M2L31_LPPDMA0_LPPDMAx_DSCT2_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT2_DA;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT2_DA Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT2_DA;

#define M2L31_LPPDMA0_LPPDMAx_DSCT3_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT3_DA;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT3_DA Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT3_DA;

#define M2L31_LPPDMA0_LPPDMAx_DSCT0_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NEXT : 16;
    unsigned long EXENEXT : 16;
} sM2L31_LPPDMA0_LPPDMAx_DSCT0_NEXT;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT0_NEXT Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT0_NEXT;

#define M2L31_LPPDMA0_LPPDMAx_DSCT1_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT1_NEXT;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT1_NEXT Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT1_NEXT;

#define M2L31_LPPDMA0_LPPDMAx_DSCT2_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT2_NEXT;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT2_NEXT Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT2_NEXT;

#define M2L31_LPPDMA0_LPPDMAx_DSCT3_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_DSCT3_NEXT;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_DSCT3_NEXT Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_DSCT3_NEXT;

#define M2L31_LPPDMA0_LPPDMAx_CURSCAT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CURADDR : 32;
} sM2L31_LPPDMA0_LPPDMAx_CURSCAT0;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_CURSCAT0 Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_CURSCAT0;

#define M2L31_LPPDMA0_LPPDMAx_CURSCAT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_CURSCAT1;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_CURSCAT1 Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_CURSCAT1;

#define M2L31_LPPDMA0_LPPDMAx_CURSCAT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_CURSCAT2;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_CURSCAT2 Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_CURSCAT2;

#define M2L31_LPPDMA0_LPPDMAx_CURSCAT3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPPDMA0_LPPDMAx_CURSCAT3;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_CURSCAT3 Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_CURSCAT3;

#define M2L31_LPPDMA0_LPPDMAx_CHCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CHEN0 : 1;
    unsigned long CHEN1 : 1;
    unsigned long CHEN2 : 1;
    unsigned long CHEN3 : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_CHCTL;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_CHCTL Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_CHCTL;

#define M2L31_LPPDMA0_LPPDMAx_PAUSE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PAUSE0 : 1;
    unsigned long PAUSE1 : 1;
    unsigned long PAUSE2 : 1;
    unsigned long PAUSE3 : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_PAUSE;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_PAUSE Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_PAUSE;

#define M2L31_LPPDMA0_LPPDMAx_SWREQ_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SWREQ0 : 1;
    unsigned long SWREQ1 : 1;
    unsigned long SWREQ2 : 1;
    unsigned long SWREQ3 : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_SWREQ;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_SWREQ Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_SWREQ;

#define M2L31_LPPDMA0_LPPDMAx_TRGSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long REQSTS0 : 1;
    unsigned long REQSTS1 : 1;
    unsigned long REQSTS2 : 1;
    unsigned long REQSTS3 : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_TRGSTS;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_TRGSTS Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_TRGSTS;

#define M2L31_LPPDMA0_LPPDMAx_PRISET_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FPRISET0 : 1;
    unsigned long FPRISET1 : 1;
    unsigned long FPRISET2 : 1;
    unsigned long FPRISET3 : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_PRISET;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_PRISET Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_PRISET;

#define M2L31_LPPDMA0_LPPDMAx_PRICLR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FPRICLR0 : 1;
    unsigned long FPRICLR1 : 1;
    unsigned long FPRICLR2 : 1;
    unsigned long FPRICLR3 : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_PRICLR;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_PRICLR Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_PRICLR;

#define M2L31_LPPDMA0_LPPDMAx_INTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long INTEN0 : 1;
    unsigned long INTEN1 : 1;
    unsigned long INTEN2 : 1;
    unsigned long INTEN3 : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_INTEN;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_INTEN Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_INTEN;

#define M2L31_LPPDMA0_LPPDMAx_INTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ABTIF : 1;
    unsigned long TDIF : 1;
    unsigned long ALIGNF : 1;
    unsigned long WKF : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_INTSTS;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_INTSTS Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_INTSTS;

#define M2L31_LPPDMA0_LPPDMAx_ABTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ABTIF0 : 1;
    unsigned long ABTIF1 : 1;
    unsigned long ABTIF2 : 1;
    unsigned long ABTIF3 : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_ABTSTS;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_ABTSTS Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_ABTSTS;

#define M2L31_LPPDMA0_LPPDMAx_TDSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TDIF0 : 1;
    unsigned long TDIF1 : 1;
    unsigned long TDIF2 : 1;
    unsigned long TDIF3 : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_TDSTS;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_TDSTS Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_TDSTS;

#define M2L31_LPPDMA0_LPPDMAx_ALIGN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ALIGN0 : 1;
    unsigned long ALIGN1 : 1;
    unsigned long ALIGN2 : 1;
    unsigned long ALIGN3 : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_ALIGN;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_ALIGN Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_ALIGN;

#define M2L31_LPPDMA0_LPPDMAx_TACTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXACTF0 : 1;
    unsigned long TXACTF1 : 1;
    unsigned long TXACTF2 : 1;
    unsigned long TXACTF3 : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_TACTSTS;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_TACTSTS Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_TACTSTS;

#define M2L31_LPPDMA0_LPPDMAx_SCATBA_RESET_VALUE 0x28000000
typedef struct {
    unsigned long Res0 : 16;
    unsigned long SCATBA : 16;
} sM2L31_LPPDMA0_LPPDMAx_SCATBA;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_SCATBA Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_SCATBA;

#define M2L31_LPPDMA0_LPPDMAx_CHRST_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CH0RST : 1;
    unsigned long CH1RST : 1;
    unsigned long CH2RST : 1;
    unsigned long CH3RST : 1;
    unsigned long Res0 : 28;
} sM2L31_LPPDMA0_LPPDMAx_CHRST;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_CHRST Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_CHRST;

#define M2L31_LPPDMA0_LPPDMAx_REQSEL0_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long REQSRC0 : 7;
    unsigned long Res0 : 1;
    unsigned long REQSRC1 : 7;
    unsigned long Res1 : 1;
    unsigned long REQSRC2 : 7;
    unsigned long Res2 : 1;
    unsigned long REQSRC3 : 7;
    unsigned long Res3 : 1;
} sM2L31_LPPDMA0_LPPDMAx_REQSEL0_3;

typedef union {
    sM2L31_LPPDMA0_LPPDMAx_REQSEL0_3 Bit;
    unsigned long  All;
} uM2L31_LPPDMA0_LPPDMAx_REQSEL0_3;

typedef struct {
    uM2L31_LPPDMA0_LPPDMAx_DSCT0_CTL M2L31_LPPDMA0_LPPDMAx_DSCT0_CTL; // Offset: 0x0
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    uM2L31_LPPDMA0_LPPDMAx_DSCT1_CTL M2L31_LPPDMA0_LPPDMAx_DSCT1_CTL; // Offset: 0x10
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    uM2L31_LPPDMA0_LPPDMAx_DSCT2_CTL M2L31_LPPDMA0_LPPDMAx_DSCT2_CTL; // Offset: 0x20
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    uM2L31_LPPDMA0_LPPDMAx_DSCT3_CTL M2L31_LPPDMA0_LPPDMAx_DSCT3_CTL; // Offset: 0x30
    uM2L31_LPPDMA0_LPPDMAx_DSCT0_SA M2L31_LPPDMA0_LPPDMAx_DSCT0_SA; // Offset: 0x4
    unsigned long Reserved9;
    unsigned long Reserved10;
    unsigned long Reserved11;
    uM2L31_LPPDMA0_LPPDMAx_DSCT1_SA M2L31_LPPDMA0_LPPDMAx_DSCT1_SA; // Offset: 0x14
    unsigned long Reserved12;
    unsigned long Reserved13;
    unsigned long Reserved14;
    uM2L31_LPPDMA0_LPPDMAx_DSCT2_SA M2L31_LPPDMA0_LPPDMAx_DSCT2_SA; // Offset: 0x24
    unsigned long Reserved15;
    unsigned long Reserved16;
    unsigned long Reserved17;
    uM2L31_LPPDMA0_LPPDMAx_DSCT3_SA M2L31_LPPDMA0_LPPDMAx_DSCT3_SA; // Offset: 0x34
    uM2L31_LPPDMA0_LPPDMAx_DSCT0_DA M2L31_LPPDMA0_LPPDMAx_DSCT0_DA; // Offset: 0x8
    unsigned long Reserved18;
    unsigned long Reserved19;
    unsigned long Reserved20;
    uM2L31_LPPDMA0_LPPDMAx_DSCT1_DA M2L31_LPPDMA0_LPPDMAx_DSCT1_DA; // Offset: 0x18
    unsigned long Reserved21;
    unsigned long Reserved22;
    unsigned long Reserved23;
    uM2L31_LPPDMA0_LPPDMAx_DSCT2_DA M2L31_LPPDMA0_LPPDMAx_DSCT2_DA; // Offset: 0x28
    unsigned long Reserved24;
    unsigned long Reserved25;
    unsigned long Reserved26;
    uM2L31_LPPDMA0_LPPDMAx_DSCT3_DA M2L31_LPPDMA0_LPPDMAx_DSCT3_DA; // Offset: 0x38
    uM2L31_LPPDMA0_LPPDMAx_DSCT0_NEXT M2L31_LPPDMA0_LPPDMAx_DSCT0_NEXT; // Offset: 0xc
    unsigned long Reserved27;
    unsigned long Reserved28;
    unsigned long Reserved29;
    uM2L31_LPPDMA0_LPPDMAx_DSCT1_NEXT M2L31_LPPDMA0_LPPDMAx_DSCT1_NEXT; // Offset: 0x1c
    unsigned long Reserved30;
    unsigned long Reserved31;
    unsigned long Reserved32;
    uM2L31_LPPDMA0_LPPDMAx_DSCT2_NEXT M2L31_LPPDMA0_LPPDMAx_DSCT2_NEXT; // Offset: 0x2c
    unsigned long Reserved33;
    unsigned long Reserved34;
    unsigned long Reserved35;
    uM2L31_LPPDMA0_LPPDMAx_DSCT3_NEXT M2L31_LPPDMA0_LPPDMAx_DSCT3_NEXT; // Offset: 0x3c
    uM2L31_LPPDMA0_LPPDMAx_CURSCAT0 M2L31_LPPDMA0_LPPDMAx_CURSCAT0; // Offset: 0x40
    uM2L31_LPPDMA0_LPPDMAx_CURSCAT1 M2L31_LPPDMA0_LPPDMAx_CURSCAT1; // Offset: 0x44
    uM2L31_LPPDMA0_LPPDMAx_CURSCAT2 M2L31_LPPDMA0_LPPDMAx_CURSCAT2; // Offset: 0x48
    uM2L31_LPPDMA0_LPPDMAx_CURSCAT3 M2L31_LPPDMA0_LPPDMAx_CURSCAT3; // Offset: 0x4c
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
    unsigned long Reserved59;
    unsigned long Reserved60;
    unsigned long Reserved61;
    unsigned long Reserved62;
    unsigned long Reserved63;
    unsigned long Reserved64;
    unsigned long Reserved65;
    unsigned long Reserved66;
    unsigned long Reserved67;
    unsigned long Reserved68;
    unsigned long Reserved69;
    unsigned long Reserved70;
    unsigned long Reserved71;
    unsigned long Reserved72;
    unsigned long Reserved73;
    unsigned long Reserved74;
    unsigned long Reserved75;
    unsigned long Reserved76;
    unsigned long Reserved77;
    unsigned long Reserved78;
    unsigned long Reserved79;
    unsigned long Reserved80;
    unsigned long Reserved81;
    unsigned long Reserved82;
    unsigned long Reserved83;
    unsigned long Reserved84;
    unsigned long Reserved85;
    unsigned long Reserved86;
    unsigned long Reserved87;
    unsigned long Reserved88;
    unsigned long Reserved89;
    unsigned long Reserved90;
    unsigned long Reserved91;
    unsigned long Reserved92;
    unsigned long Reserved93;
    unsigned long Reserved94;
    unsigned long Reserved95;
    unsigned long Reserved96;
    unsigned long Reserved97;
    unsigned long Reserved98;
    unsigned long Reserved99;
    unsigned long Reserved100;
    unsigned long Reserved101;
    unsigned long Reserved102;
    unsigned long Reserved103;
    unsigned long Reserved104;
    unsigned long Reserved105;
    unsigned long Reserved106;
    unsigned long Reserved107;
    unsigned long Reserved108;
    unsigned long Reserved109;
    unsigned long Reserved110;
    unsigned long Reserved111;
    unsigned long Reserved112;
    unsigned long Reserved113;
    unsigned long Reserved114;
    unsigned long Reserved115;
    unsigned long Reserved116;
    unsigned long Reserved117;
    unsigned long Reserved118;
    unsigned long Reserved119;
    unsigned long Reserved120;
    unsigned long Reserved121;
    unsigned long Reserved122;
    unsigned long Reserved123;
    unsigned long Reserved124;
    unsigned long Reserved125;
    unsigned long Reserved126;
    unsigned long Reserved127;
    unsigned long Reserved128;
    unsigned long Reserved129;
    unsigned long Reserved130;
    unsigned long Reserved131;
    unsigned long Reserved132;
    unsigned long Reserved133;
    unsigned long Reserved134;
    unsigned long Reserved135;
    unsigned long Reserved136;
    unsigned long Reserved137;
    unsigned long Reserved138;
    unsigned long Reserved139;
    unsigned long Reserved140;
    unsigned long Reserved141;
    unsigned long Reserved142;
    unsigned long Reserved143;
    unsigned long Reserved144;
    unsigned long Reserved145;
    unsigned long Reserved146;
    unsigned long Reserved147;
    unsigned long Reserved148;
    unsigned long Reserved149;
    unsigned long Reserved150;
    unsigned long Reserved151;
    unsigned long Reserved152;
    unsigned long Reserved153;
    unsigned long Reserved154;
    unsigned long Reserved155;
    unsigned long Reserved156;
    unsigned long Reserved157;
    unsigned long Reserved158;
    unsigned long Reserved159;
    unsigned long Reserved160;
    unsigned long Reserved161;
    unsigned long Reserved162;
    unsigned long Reserved163;
    unsigned long Reserved164;
    unsigned long Reserved165;
    unsigned long Reserved166;
    unsigned long Reserved167;
    unsigned long Reserved168;
    unsigned long Reserved169;
    unsigned long Reserved170;
    unsigned long Reserved171;
    unsigned long Reserved172;
    unsigned long Reserved173;
    unsigned long Reserved174;
    unsigned long Reserved175;
    unsigned long Reserved176;
    unsigned long Reserved177;
    unsigned long Reserved178;
    unsigned long Reserved179;
    unsigned long Reserved180;
    unsigned long Reserved181;
    unsigned long Reserved182;
    unsigned long Reserved183;
    unsigned long Reserved184;
    unsigned long Reserved185;
    unsigned long Reserved186;
    unsigned long Reserved187;
    unsigned long Reserved188;
    unsigned long Reserved189;
    unsigned long Reserved190;
    unsigned long Reserved191;
    unsigned long Reserved192;
    unsigned long Reserved193;
    unsigned long Reserved194;
    unsigned long Reserved195;
    unsigned long Reserved196;
    unsigned long Reserved197;
    unsigned long Reserved198;
    unsigned long Reserved199;
    unsigned long Reserved200;
    unsigned long Reserved201;
    unsigned long Reserved202;
    unsigned long Reserved203;
    unsigned long Reserved204;
    unsigned long Reserved205;
    unsigned long Reserved206;
    unsigned long Reserved207;
    unsigned long Reserved208;
    unsigned long Reserved209;
    unsigned long Reserved210;
    unsigned long Reserved211;
    unsigned long Reserved212;
    unsigned long Reserved213;
    unsigned long Reserved214;
    unsigned long Reserved215;
    unsigned long Reserved216;
    unsigned long Reserved217;
    unsigned long Reserved218;
    unsigned long Reserved219;
    unsigned long Reserved220;
    unsigned long Reserved221;
    unsigned long Reserved222;
    unsigned long Reserved223;
    unsigned long Reserved224;
    unsigned long Reserved225;
    unsigned long Reserved226;
    unsigned long Reserved227;
    unsigned long Reserved228;
    unsigned long Reserved229;
    unsigned long Reserved230;
    unsigned long Reserved231;
    unsigned long Reserved232;
    unsigned long Reserved233;
    unsigned long Reserved234;
    unsigned long Reserved235;
    unsigned long Reserved236;
    unsigned long Reserved237;
    unsigned long Reserved238;
    unsigned long Reserved239;
    unsigned long Reserved240;
    unsigned long Reserved241;
    unsigned long Reserved242;
    unsigned long Reserved243;
    unsigned long Reserved244;
    unsigned long Reserved245;
    unsigned long Reserved246;
    unsigned long Reserved247;
    unsigned long Reserved248;
    unsigned long Reserved249;
    unsigned long Reserved250;
    unsigned long Reserved251;
    unsigned long Reserved252;
    unsigned long Reserved253;
    unsigned long Reserved254;
    unsigned long Reserved255;
    unsigned long Reserved256;
    unsigned long Reserved257;
    unsigned long Reserved258;
    unsigned long Reserved259;
    unsigned long Reserved260;
    unsigned long Reserved261;
    unsigned long Reserved262;
    unsigned long Reserved263;
    unsigned long Reserved264;
    unsigned long Reserved265;
    unsigned long Reserved266;
    unsigned long Reserved267;
    unsigned long Reserved268;
    unsigned long Reserved269;
    unsigned long Reserved270;
    unsigned long Reserved271;
    uM2L31_LPPDMA0_LPPDMAx_CHCTL M2L31_LPPDMA0_LPPDMAx_CHCTL; // Offset: 0x400
    uM2L31_LPPDMA0_LPPDMAx_PAUSE M2L31_LPPDMA0_LPPDMAx_PAUSE; // Offset: 0x404
    uM2L31_LPPDMA0_LPPDMAx_SWREQ M2L31_LPPDMA0_LPPDMAx_SWREQ; // Offset: 0x408
    uM2L31_LPPDMA0_LPPDMAx_TRGSTS M2L31_LPPDMA0_LPPDMAx_TRGSTS; // Offset: 0x40c
    uM2L31_LPPDMA0_LPPDMAx_PRISET M2L31_LPPDMA0_LPPDMAx_PRISET; // Offset: 0x410
    uM2L31_LPPDMA0_LPPDMAx_PRICLR M2L31_LPPDMA0_LPPDMAx_PRICLR; // Offset: 0x414
    uM2L31_LPPDMA0_LPPDMAx_INTEN M2L31_LPPDMA0_LPPDMAx_INTEN; // Offset: 0x418
    uM2L31_LPPDMA0_LPPDMAx_INTSTS M2L31_LPPDMA0_LPPDMAx_INTSTS; // Offset: 0x41c
    uM2L31_LPPDMA0_LPPDMAx_ABTSTS M2L31_LPPDMA0_LPPDMAx_ABTSTS; // Offset: 0x420
    uM2L31_LPPDMA0_LPPDMAx_TDSTS M2L31_LPPDMA0_LPPDMAx_TDSTS; // Offset: 0x424
    uM2L31_LPPDMA0_LPPDMAx_ALIGN M2L31_LPPDMA0_LPPDMAx_ALIGN; // Offset: 0x428
    uM2L31_LPPDMA0_LPPDMAx_TACTSTS M2L31_LPPDMA0_LPPDMAx_TACTSTS; // Offset: 0x42c
    unsigned long Reserved272;
    unsigned long Reserved273;
    unsigned long Reserved274;
    uM2L31_LPPDMA0_LPPDMAx_SCATBA M2L31_LPPDMA0_LPPDMAx_SCATBA; // Offset: 0x43c
    unsigned long Reserved275;
    unsigned long Reserved276;
    unsigned long Reserved277;
    unsigned long Reserved278;
    unsigned long Reserved279;
    unsigned long Reserved280;
    unsigned long Reserved281;
    unsigned long Reserved282;
    uM2L31_LPPDMA0_LPPDMAx_CHRST M2L31_LPPDMA0_LPPDMAx_CHRST; // Offset: 0x460
    unsigned long Reserved283;
    unsigned long Reserved284;
    unsigned long Reserved285;
    unsigned long Reserved286;
    unsigned long Reserved287;
    unsigned long Reserved288;
    unsigned long Reserved289;
    uM2L31_LPPDMA0_LPPDMAx_REQSEL0_3 M2L31_LPPDMA0_LPPDMAx_REQSEL0_3; // Offset: 0x480
} sM2L31_LPPDMA0;

