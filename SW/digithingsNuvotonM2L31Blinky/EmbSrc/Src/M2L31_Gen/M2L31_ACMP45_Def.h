// Base Addres of ACMP45 = 0x400C9000

#define M2L31_ACMP45_ACMP_CTL2_RESET_VALUE 0x10000000
typedef struct {
    unsigned long ACMPEN : 1;
    unsigned long ACMPIE : 1;
    unsigned long Res0 : 1;
    unsigned long ACMPOINV : 1;
    unsigned long NEGSEL : 3;
    unsigned long Res1 : 1;
    unsigned long POSSEL : 3;
    unsigned long Res2 : 1;
    unsigned long OUTSEL : 1;
    unsigned long FILTSEL : 3;
    unsigned long WKEN : 1;
    unsigned long WLATEN : 1;
    unsigned long Res3 : 2;
    unsigned long FCLKDIV : 2;
    unsigned long Res4 : 2;
    unsigned long HYSSEL : 3;
    unsigned long Res5 : 1;
    unsigned long MODESEL : 2;
    unsigned long INTPOL : 2;
} sM2L31_ACMP45_ACMP_CTL2;

typedef union {
    sM2L31_ACMP45_ACMP_CTL2 Bit;
    unsigned long  All;
} uM2L31_ACMP45_ACMP_CTL2;

#define M2L31_ACMP45_ACMP_STATUS2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ACMPIF2 : 1;
    unsigned long Res0 : 3;
    unsigned long ACMPO2 : 1;
    unsigned long Res1 : 3;
    unsigned long WKIF2 : 1;
    unsigned long Res2 : 3;
    unsigned long ACMPS2 : 1;
    unsigned long Res3 : 19;
} sM2L31_ACMP45_ACMP_STATUS2;

typedef union {
    sM2L31_ACMP45_ACMP_STATUS2 Bit;
    unsigned long  All;
} uM2L31_ACMP45_ACMP_STATUS2;

#define M2L31_ACMP45_ACMP_VREF2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CRV2SEL : 6;
    unsigned long CRV2SSEL : 1;
    unsigned long Res0 : 1;
    unsigned long CRV2EN : 1;
    unsigned long Res1 : 23;
} sM2L31_ACMP45_ACMP_VREF2;

typedef union {
    sM2L31_ACMP45_ACMP_VREF2 Bit;
    unsigned long  All;
} uM2L31_ACMP45_ACMP_VREF2;

#define M2L31_ACMP45_ACMP_CALCTL2_RESET_VALUE 0x00000050
typedef struct {
    unsigned long CALTRG2 : 1;
    unsigned long Res0 : 31;
} sM2L31_ACMP45_ACMP_CALCTL2;

typedef union {
    sM2L31_ACMP45_ACMP_CALCTL2 Bit;
    unsigned long  All;
} uM2L31_ACMP45_ACMP_CALCTL2;

#define M2L31_ACMP45_ACMP_CALSR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DONE2 : 1;
    unsigned long Res0 : 31;
} sM2L31_ACMP45_ACMP_CALSR2;

typedef union {
    sM2L31_ACMP45_ACMP_CALSR2 Bit;
    unsigned long  All;
} uM2L31_ACMP45_ACMP_CALSR2;

typedef struct {
    uM2L31_ACMP45_ACMP_CTL2 M2L31_ACMP45_ACMP_CTL2; // Offset: 0x0
    unsigned long Reserved0;
    uM2L31_ACMP45_ACMP_STATUS2 M2L31_ACMP45_ACMP_STATUS2; // Offset: 0x8
    uM2L31_ACMP45_ACMP_VREF2 M2L31_ACMP45_ACMP_VREF2; // Offset: 0xc
    uM2L31_ACMP45_ACMP_CALCTL2 M2L31_ACMP45_ACMP_CALCTL2; // Offset: 0x10
    uM2L31_ACMP45_ACMP_CALSR2 M2L31_ACMP45_ACMP_CALSR2; // Offset: 0x14
} sM2L31_ACMP45;

