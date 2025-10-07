// Base Addres of ACMP01 = 0x40045000

#define M2L31_ACMP01_ACMP_CTL0_RESET_VALUE 0x10000000
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
    unsigned long WCMPSEL : 1;
    unsigned long Res3 : 1;
    unsigned long FCLKDIV : 2;
    unsigned long Res4 : 2;
    unsigned long HYSSEL : 3;
    unsigned long Res5 : 1;
    unsigned long MODESEL : 2;
    unsigned long INTPOL : 2;
} sM2L31_ACMP01_ACMP_CTL0;

typedef union {
    sM2L31_ACMP01_ACMP_CTL0 Bit;
    unsigned long  All;
} uM2L31_ACMP01_ACMP_CTL0;

#define M2L31_ACMP01_ACMP_CTL1_RESET_VALUE 0x10000000
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
    unsigned long WCMPSEL : 1;
    unsigned long Res3 : 1;
    unsigned long FCLKDIV : 2;
    unsigned long Res4 : 2;
    unsigned long HYSSEL : 3;
    unsigned long Res5 : 1;
    unsigned long MODESEL : 2;
    unsigned long INTPOL : 2;
} sM2L31_ACMP01_ACMP_CTL1;

typedef union {
    sM2L31_ACMP01_ACMP_CTL1 Bit;
    unsigned long  All;
} uM2L31_ACMP01_ACMP_CTL1;

#define M2L31_ACMP01_ACMP_STATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ACMPIF0 : 1;
    unsigned long ACMPIF1 : 1;
    unsigned long Res0 : 2;
    unsigned long ACMPO0 : 1;
    unsigned long ACMPO1 : 1;
    unsigned long Res1 : 2;
    unsigned long WKIF0 : 1;
    unsigned long WKIF1 : 1;
    unsigned long Res2 : 2;
    unsigned long ACMPS0 : 1;
    unsigned long ACMPS1 : 1;
    unsigned long Res3 : 2;
    unsigned long ACMPWO : 1;
    unsigned long Res4 : 15;
} sM2L31_ACMP01_ACMP_STATUS;

typedef union {
    sM2L31_ACMP01_ACMP_STATUS Bit;
    unsigned long  All;
} uM2L31_ACMP01_ACMP_STATUS;

#define M2L31_ACMP01_ACMP_VREF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CRV0SEL : 6;
    unsigned long CRV0SSEL : 1;
    unsigned long Res0 : 1;
    unsigned long CRV0EN : 1;
    unsigned long Res1 : 7;
    unsigned long CRV1SEL : 6;
    unsigned long CRV1SSEL : 1;
    unsigned long Res2 : 1;
    unsigned long CRV1EN : 1;
    unsigned long Res3 : 7;
} sM2L31_ACMP01_ACMP_VREF;

typedef union {
    sM2L31_ACMP01_ACMP_VREF Bit;
    unsigned long  All;
} uM2L31_ACMP01_ACMP_VREF;

#define M2L31_ACMP01_ACMP_CALCTL_RESET_VALUE 0x00000050
typedef struct {
    unsigned long CALTRG0 : 1;
    unsigned long CALTRG1 : 1;
    unsigned long Res0 : 30;
} sM2L31_ACMP01_ACMP_CALCTL;

typedef union {
    sM2L31_ACMP01_ACMP_CALCTL Bit;
    unsigned long  All;
} uM2L31_ACMP01_ACMP_CALCTL;

#define M2L31_ACMP01_ACMP_CALSR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DONE0 : 1;
    unsigned long Res0 : 3;
    unsigned long DONE1 : 1;
    unsigned long Res1 : 27;
} sM2L31_ACMP01_ACMP_CALSR;

typedef union {
    sM2L31_ACMP01_ACMP_CALSR Bit;
    unsigned long  All;
} uM2L31_ACMP01_ACMP_CALSR;

typedef struct {
    uM2L31_ACMP01_ACMP_CTL0 M2L31_ACMP01_ACMP_CTL0; // Offset: 0x0
    uM2L31_ACMP01_ACMP_CTL1 M2L31_ACMP01_ACMP_CTL1; // Offset: 0x4
    uM2L31_ACMP01_ACMP_STATUS M2L31_ACMP01_ACMP_STATUS; // Offset: 0x8
    uM2L31_ACMP01_ACMP_VREF M2L31_ACMP01_ACMP_VREF; // Offset: 0xc
    uM2L31_ACMP01_ACMP_CALCTL M2L31_ACMP01_ACMP_CALCTL; // Offset: 0x10
    uM2L31_ACMP01_ACMP_CALSR M2L31_ACMP01_ACMP_CALSR; // Offset: 0x14
} sM2L31_ACMP01;

