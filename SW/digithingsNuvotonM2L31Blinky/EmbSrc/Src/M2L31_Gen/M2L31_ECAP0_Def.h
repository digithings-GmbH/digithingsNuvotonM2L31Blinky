// Base Addres of ECAP0 = 0x400B4000

#define M2L31_ECAP0_ECAP_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 24;
    unsigned long Res0 : 8;
} sM2L31_ECAP0_ECAP_CNT;

typedef union {
    sM2L31_ECAP0_ECAP_CNT Bit;
    unsigned long  All;
} uM2L31_ECAP0_ECAP_CNT;

#define M2L31_ECAP0_ECAP_HLD0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long HOLD : 24;
    unsigned long Res0 : 8;
} sM2L31_ECAP0_ECAP_HLD0;

typedef union {
    sM2L31_ECAP0_ECAP_HLD0 Bit;
    unsigned long  All;
} uM2L31_ECAP0_ECAP_HLD0;

#define M2L31_ECAP0_ECAP_HLD1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_ECAP0_ECAP_HLD1;

typedef union {
    sM2L31_ECAP0_ECAP_HLD1 Bit;
    unsigned long  All;
} uM2L31_ECAP0_ECAP_HLD1;

#define M2L31_ECAP0_ECAP_HLD2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_ECAP0_ECAP_HLD2;

typedef union {
    sM2L31_ECAP0_ECAP_HLD2 Bit;
    unsigned long  All;
} uM2L31_ECAP0_ECAP_HLD2;

#define M2L31_ECAP0_ECAP_CNTCMP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTCMP : 24;
    unsigned long Res0 : 8;
} sM2L31_ECAP0_ECAP_CNTCMP;

typedef union {
    sM2L31_ECAP0_ECAP_CNTCMP Bit;
    unsigned long  All;
} uM2L31_ECAP0_ECAP_CNTCMP;

#define M2L31_ECAP0_ECAP_CTL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NFCLKSEL : 3;
    unsigned long CAPNFDIS : 1;
    unsigned long IC0EN : 1;
    unsigned long IC1EN : 1;
    unsigned long IC2EN : 1;
    unsigned long Res0 : 1;
    unsigned long CAPSEL0 : 2;
    unsigned long CAPSEL1 : 2;
    unsigned long CAPSEL2 : 2;
    unsigned long Res1 : 2;
    unsigned long CAPIEN0 : 1;
    unsigned long CAPIEN1 : 1;
    unsigned long CAPIEN2 : 1;
    unsigned long Res2 : 1;
    unsigned long OVIEN : 1;
    unsigned long CMPIEN : 1;
    unsigned long Res3 : 2;
    unsigned long CNTEN : 1;
    unsigned long CMPCLREN : 1;
    unsigned long Res4 : 2;
    unsigned long CMPEN : 1;
    unsigned long CAPEN : 1;
    unsigned long Res5 : 2;
} sM2L31_ECAP0_ECAP_CTL0;

typedef union {
    sM2L31_ECAP0_ECAP_CTL0 Bit;
    unsigned long  All;
} uM2L31_ECAP0_ECAP_CTL0;

#define M2L31_ECAP0_ECAP_CTL1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EDGESEL0 : 2;
    unsigned long EDGESEL1 : 2;
    unsigned long EDGESEL2 : 2;
    unsigned long Res0 : 2;
    unsigned long CAP0RLDEN : 1;
    unsigned long CAP1RLDEN : 1;
    unsigned long CAP2RLDEN : 1;
    unsigned long OVRLDEN : 1;
    unsigned long CLKSEL : 3;
    unsigned long Res1 : 1;
    unsigned long CNTSRCSEL : 2;
    unsigned long Res2 : 2;
    unsigned long CAP0CLREN : 1;
    unsigned long CAP1CLREN : 1;
    unsigned long CAP2CLREN : 1;
    unsigned long Res3 : 9;
} sM2L31_ECAP0_ECAP_CTL1;

typedef union {
    sM2L31_ECAP0_ECAP_CTL1 Bit;
    unsigned long  All;
} uM2L31_ECAP0_ECAP_CTL1;

#define M2L31_ECAP0_ECAP_STATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPTF0 : 1;
    unsigned long CAPTF1 : 1;
    unsigned long CAPTF2 : 1;
    unsigned long Res0 : 1;
    unsigned long CAPCMPF : 1;
    unsigned long CAPOVF : 1;
    unsigned long Res1 : 2;
    unsigned long CAP0 : 1;
    unsigned long CAP1 : 1;
    unsigned long CAP2 : 1;
    unsigned long Res2 : 21;
} sM2L31_ECAP0_ECAP_STATUS;

typedef union {
    sM2L31_ECAP0_ECAP_STATUS Bit;
    unsigned long  All;
} uM2L31_ECAP0_ECAP_STATUS;

typedef struct {
    uM2L31_ECAP0_ECAP_CNT M2L31_ECAP0_ECAP_CNT; // Offset: 0x0
    uM2L31_ECAP0_ECAP_HLD0 M2L31_ECAP0_ECAP_HLD0; // Offset: 0x4
    uM2L31_ECAP0_ECAP_HLD1 M2L31_ECAP0_ECAP_HLD1; // Offset: 0x8
    uM2L31_ECAP0_ECAP_HLD2 M2L31_ECAP0_ECAP_HLD2; // Offset: 0xc
    uM2L31_ECAP0_ECAP_CNTCMP M2L31_ECAP0_ECAP_CNTCMP; // Offset: 0x10
    uM2L31_ECAP0_ECAP_CTL0 M2L31_ECAP0_ECAP_CTL0; // Offset: 0x14
    uM2L31_ECAP0_ECAP_CTL1 M2L31_ECAP0_ECAP_CTL1; // Offset: 0x18
    uM2L31_ECAP0_ECAP_STATUS M2L31_ECAP0_ECAP_STATUS; // Offset: 0x1c
} sM2L31_ECAP0;

