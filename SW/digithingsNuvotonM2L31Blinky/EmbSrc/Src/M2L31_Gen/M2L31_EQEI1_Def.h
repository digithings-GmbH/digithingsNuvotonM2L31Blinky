// Base Addres of EQEI1 = 0x400B1000

#define M2L31_EQEI1_EQEI_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 32;
} sM2L31_EQEI1_EQEI_CNT;

typedef union {
    sM2L31_EQEI1_EQEI_CNT Bit;
    unsigned long  All;
} uM2L31_EQEI1_EQEI_CNT;

#define M2L31_EQEI1_EQEI_CNTHOLD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTHOLD : 32;
} sM2L31_EQEI1_EQEI_CNTHOLD;

typedef union {
    sM2L31_EQEI1_EQEI_CNTHOLD Bit;
    unsigned long  All;
} uM2L31_EQEI1_EQEI_CNTHOLD;

#define M2L31_EQEI1_EQEI_CNTLATCH_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTLATCH : 32;
} sM2L31_EQEI1_EQEI_CNTLATCH;

typedef union {
    sM2L31_EQEI1_EQEI_CNTLATCH Bit;
    unsigned long  All;
} uM2L31_EQEI1_EQEI_CNTLATCH;

#define M2L31_EQEI1_EQEI_CNTCMP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTCMP : 32;
} sM2L31_EQEI1_EQEI_CNTCMP;

typedef union {
    sM2L31_EQEI1_EQEI_CNTCMP Bit;
    unsigned long  All;
} uM2L31_EQEI1_EQEI_CNTCMP;

#define M2L31_EQEI1_EQEI_CNTMAX_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTMAX : 32;
} sM2L31_EQEI1_EQEI_CNTMAX;

typedef union {
    sM2L31_EQEI1_EQEI_CNTMAX Bit;
    unsigned long  All;
} uM2L31_EQEI1_EQEI_CNTMAX;

#define M2L31_EQEI1_EQEI_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NFCLKSEL : 3;
    unsigned long NFDIS : 1;
    unsigned long CHAEN : 1;
    unsigned long CHBEN : 1;
    unsigned long IDXEN : 1;
    unsigned long IDXRSTEN : 1;
    unsigned long MODE : 3;
    unsigned long Res0 : 1;
    unsigned long CHAINV : 1;
    unsigned long CHBINV : 1;
    unsigned long IDXINV : 1;
    unsigned long IDXRSTEV : 1;
    unsigned long OVUNIEN : 1;
    unsigned long DIRIEN : 1;
    unsigned long CMPIEN : 1;
    unsigned long IDXIEN : 1;
    unsigned long HOLDTMR0 : 1;
    unsigned long HOLDTMR1 : 1;
    unsigned long HOLDTMR2 : 1;
    unsigned long HOLDTMR3 : 1;
    unsigned long HOLDCNT : 1;
    unsigned long IDXLATEN : 1;
    unsigned long Res1 : 1;
    unsigned long IDXRLDEN : 1;
    unsigned long CMPEN : 1;
    unsigned long EQEIEN : 1;
    unsigned long Res2 : 2;
} sM2L31_EQEI1_EQEI_CTL;

typedef union {
    sM2L31_EQEI1_EQEI_CTL Bit;
    unsigned long  All;
} uM2L31_EQEI1_EQEI_CTL;

#define M2L31_EQEI1_EQEI_CTL2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SWAPEN : 1;
    unsigned long CRS : 2;
    unsigned long Res0 : 1;
    unsigned long DIRSRC : 2;
    unsigned long Res1 : 2;
    unsigned long UTEN : 1;
    unsigned long UTHOLDEN : 1;
    unsigned long UTEVTRST : 1;
    unsigned long IDXRSTUTS : 1;
    unsigned long Res2 : 4;
    unsigned long PHEIEN : 1;
    unsigned long UTIEIEN : 1;
    unsigned long Res3 : 14;
} sM2L31_EQEI1_EQEI_CTL2;

typedef union {
    sM2L31_EQEI1_EQEI_CTL2 Bit;
    unsigned long  All;
} uM2L31_EQEI1_EQEI_CTL2;

#define M2L31_EQEI1_EQEI_UTCNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long UTCNT : 32;
} sM2L31_EQEI1_EQEI_UTCNT;

typedef union {
    sM2L31_EQEI1_EQEI_UTCNT Bit;
    unsigned long  All;
} uM2L31_EQEI1_EQEI_UTCNT;

#define M2L31_EQEI1_EQEI_UTCMP_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long UTCMP : 32;
} sM2L31_EQEI1_EQEI_UTCMP;

typedef union {
    sM2L31_EQEI1_EQEI_UTCMP Bit;
    unsigned long  All;
} uM2L31_EQEI1_EQEI_UTCMP;

#define M2L31_EQEI1_EQEI_STATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IDXF : 1;
    unsigned long CMPF : 1;
    unsigned long OVUNF : 1;
    unsigned long DIRCHGF : 1;
    unsigned long Res0 : 4;
    unsigned long DIRF : 1;
    unsigned long FIDXEF : 1;
    unsigned long Res1 : 6;
    unsigned long PHEF : 1;
    unsigned long UTIEF : 1;
    unsigned long Res2 : 14;
} sM2L31_EQEI1_EQEI_STATUS;

typedef union {
    sM2L31_EQEI1_EQEI_STATUS Bit;
    unsigned long  All;
} uM2L31_EQEI1_EQEI_STATUS;

typedef struct {
    uM2L31_EQEI1_EQEI_CNT M2L31_EQEI1_EQEI_CNT; // Offset: 0x0
    uM2L31_EQEI1_EQEI_CNTHOLD M2L31_EQEI1_EQEI_CNTHOLD; // Offset: 0x4
    uM2L31_EQEI1_EQEI_CNTLATCH M2L31_EQEI1_EQEI_CNTLATCH; // Offset: 0x8
    uM2L31_EQEI1_EQEI_CNTCMP M2L31_EQEI1_EQEI_CNTCMP; // Offset: 0xc
    unsigned long Reserved0;
    uM2L31_EQEI1_EQEI_CNTMAX M2L31_EQEI1_EQEI_CNTMAX; // Offset: 0x14
    uM2L31_EQEI1_EQEI_CTL M2L31_EQEI1_EQEI_CTL; // Offset: 0x18
    uM2L31_EQEI1_EQEI_CTL2 M2L31_EQEI1_EQEI_CTL2; // Offset: 0x1c
    uM2L31_EQEI1_EQEI_UTCNT M2L31_EQEI1_EQEI_UTCNT; // Offset: 0x20
    uM2L31_EQEI1_EQEI_UTCMP M2L31_EQEI1_EQEI_UTCMP; // Offset: 0x24
    unsigned long Reserved1;
    uM2L31_EQEI1_EQEI_STATUS M2L31_EQEI1_EQEI_STATUS; // Offset: 0x2c
} sM2L31_EQEI1;

