// Base Addres of EBI = 0x40010000

#define M2L31_EBI_EBI_CTL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EN : 1;
    unsigned long DW16 : 1;
    unsigned long CSPOLINV : 1;
    unsigned long ADSEPEN : 1;
    unsigned long CACCESS : 1;
    unsigned long Res0 : 3;
    unsigned long MCLKDIV : 3;
    unsigned long Res1 : 5;
    unsigned long TALE : 3;
    unsigned long Res2 : 5;
    unsigned long WBUFEN : 1;
    unsigned long Res3 : 7;
} sM2L31_EBI_EBI_CTL0;

typedef union {
    sM2L31_EBI_EBI_CTL0 Bit;
    unsigned long  All;
} uM2L31_EBI_EBI_CTL0;

#define M2L31_EBI_EBI_TCTL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 3;
    unsigned long TACC : 5;
    unsigned long TAHD : 3;
    unsigned long Res1 : 1;
    unsigned long W2X : 4;
    unsigned long Res2 : 6;
    unsigned long RAHDOFF : 1;
    unsigned long WAHDOFF : 1;
    unsigned long R2R : 4;
    unsigned long Res3 : 4;
} sM2L31_EBI_EBI_TCTL0;

typedef union {
    sM2L31_EBI_EBI_TCTL0 Bit;
    unsigned long  All;
} uM2L31_EBI_EBI_TCTL0;

#define M2L31_EBI_EBI_CTL1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EBI_EBI_CTL1;

typedef union {
    sM2L31_EBI_EBI_CTL1 Bit;
    unsigned long  All;
} uM2L31_EBI_EBI_CTL1;

#define M2L31_EBI_EBI_TCTL1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EBI_EBI_TCTL1;

typedef union {
    sM2L31_EBI_EBI_TCTL1 Bit;
    unsigned long  All;
} uM2L31_EBI_EBI_TCTL1;

#define M2L31_EBI_EBI_CTL2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EBI_EBI_CTL2;

typedef union {
    sM2L31_EBI_EBI_CTL2 Bit;
    unsigned long  All;
} uM2L31_EBI_EBI_CTL2;

#define M2L31_EBI_EBI_TCTL2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EBI_EBI_TCTL2;

typedef union {
    sM2L31_EBI_EBI_TCTL2 Bit;
    unsigned long  All;
} uM2L31_EBI_EBI_TCTL2;

typedef struct {
    uM2L31_EBI_EBI_CTL0 M2L31_EBI_EBI_CTL0; // Offset: 0x0
    uM2L31_EBI_EBI_TCTL0 M2L31_EBI_EBI_TCTL0; // Offset: 0x4
    unsigned long Reserved0;
    unsigned long Reserved1;
    uM2L31_EBI_EBI_CTL1 M2L31_EBI_EBI_CTL1; // Offset: 0x10
    uM2L31_EBI_EBI_TCTL1 M2L31_EBI_EBI_TCTL1; // Offset: 0x14
    unsigned long Reserved2;
    unsigned long Reserved3;
    uM2L31_EBI_EBI_CTL2 M2L31_EBI_EBI_CTL2; // Offset: 0x20
    uM2L31_EBI_EBI_TCTL2 M2L31_EBI_EBI_TCTL2; // Offset: 0x24
} sM2L31_EBI;

