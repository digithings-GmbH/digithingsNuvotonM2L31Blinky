// Base Addres of OPA = 0x40046000

#define M2L31_OPA_OPA_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OPEN0 : 1;
    unsigned long OPEN1 : 1;
    unsigned long OPEN2 : 1;
    unsigned long Res0 : 1;
    unsigned long OPDOEN0 : 1;
    unsigned long OPDOEN1 : 1;
    unsigned long OPDOEN2 : 1;
    unsigned long Res1 : 1;
    unsigned long OPDOIEN0 : 1;
    unsigned long OPDOIEN1 : 1;
    unsigned long OPDOIEN2 : 1;
    unsigned long Res2 : 1;
    unsigned long OPDOWKE0 : 1;
    unsigned long OPDOWKE1 : 1;
    unsigned long OPDOWKE2 : 1;
    unsigned long Res3 : 17;
} sM2L31_OPA_OPA_CTL;

typedef union {
    sM2L31_OPA_OPA_CTL Bit;
    unsigned long  All;
} uM2L31_OPA_OPA_CTL;

#define M2L31_OPA_OPA_MODE0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long POSCHEN : 4;
    unsigned long Res0 : 4;
    unsigned long NEGCHEN : 4;
    unsigned long Res1 : 4;
    unsigned long GAIN : 3;
    unsigned long Res2 : 1;
    unsigned long OUTOE : 1;
    unsigned long Res3 : 2;
    unsigned long LMODE : 1;
    unsigned long SWSEL : 2;
    unsigned long Res4 : 6;
} sM2L31_OPA_OPA_MODE0;

typedef union {
    sM2L31_OPA_OPA_MODE0 Bit;
    unsigned long  All;
} uM2L31_OPA_OPA_MODE0;

#define M2L31_OPA_OPA_MODE1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long POSCHEN : 4;
    unsigned long Res0 : 4;
    unsigned long NEGCHEN : 4;
    unsigned long Res1 : 4;
    unsigned long GAIN : 3;
    unsigned long Res2 : 1;
    unsigned long OUTOE : 1;
    unsigned long Res3 : 2;
    unsigned long LMODE : 1;
    unsigned long SWSEL : 2;
    unsigned long Res4 : 6;
} sM2L31_OPA_OPA_MODE1;

typedef union {
    sM2L31_OPA_OPA_MODE1 Bit;
    unsigned long  All;
} uM2L31_OPA_OPA_MODE1;

#define M2L31_OPA_OPA_MODE2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long POSCHEN : 5;
    unsigned long Res0 : 3;
    unsigned long NEGCHEN : 4;
    unsigned long Res1 : 4;
    unsigned long GAIN : 3;
    unsigned long Res2 : 1;
    unsigned long OUTOE : 1;
    unsigned long Res3 : 2;
    unsigned long LMODE : 1;
    unsigned long SWSEL : 2;
    unsigned long Res4 : 6;
} sM2L31_OPA_OPA_MODE2;

typedef union {
    sM2L31_OPA_OPA_MODE2 Bit;
    unsigned long  All;
} uM2L31_OPA_OPA_MODE2;

#define M2L31_OPA_OPA_STATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OPDO0 : 1;
    unsigned long OPDO1 : 1;
    unsigned long OPDO2 : 1;
    unsigned long Res0 : 1;
    unsigned long OPDOIF0 : 1;
    unsigned long OPDOIF1 : 1;
    unsigned long OPDOIF2 : 1;
    unsigned long Res1 : 1;
    unsigned long OPDOWKF0 : 1;
    unsigned long OPDOWKF1 : 1;
    unsigned long OPDOWKF2 : 1;
    unsigned long Res2 : 21;
} sM2L31_OPA_OPA_STATUS;

typedef union {
    sM2L31_OPA_OPA_STATUS Bit;
    unsigned long  All;
} uM2L31_OPA_OPA_STATUS;

#define M2L31_OPA_OPA_CALCTL_RESET_VALUE 0x000003F0
typedef struct {
    unsigned long CALTRG0 : 1;
    unsigned long CALTRG1 : 1;
    unsigned long CALTRG2 : 1;
    unsigned long Res0 : 1;
    unsigned long CALCLK0 : 2;
    unsigned long CALCLK1 : 2;
    unsigned long CALCLK2 : 2;
    unsigned long Res1 : 6;
    unsigned long CALRVS0 : 1;
    unsigned long CALRVS1 : 1;
    unsigned long CALRVS2 : 1;
    unsigned long Res2 : 5;
    unsigned long TRIMOPT0 : 1;
    unsigned long TRIMOPT1 : 1;
    unsigned long TRIMOPT2 : 1;
    unsigned long Res3 : 5;
} sM2L31_OPA_OPA_CALCTL;

typedef union {
    sM2L31_OPA_OPA_CALCTL Bit;
    unsigned long  All;
} uM2L31_OPA_OPA_CALCTL;

#define M2L31_OPA_OPA_CALST_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DONE0 : 1;
    unsigned long CALNS0 : 1;
    unsigned long CALPS0 : 1;
    unsigned long Res0 : 1;
    unsigned long DONE1 : 1;
    unsigned long CALNS1 : 1;
    unsigned long CALPS1 : 1;
    unsigned long Res1 : 1;
    unsigned long DONE2 : 1;
    unsigned long CALNS2 : 1;
    unsigned long CALPS2 : 1;
    unsigned long Res2 : 21;
} sM2L31_OPA_OPA_CALST;

typedef union {
    sM2L31_OPA_OPA_CALST Bit;
    unsigned long  All;
} uM2L31_OPA_OPA_CALST;

typedef struct {
    uM2L31_OPA_OPA_CTL M2L31_OPA_OPA_CTL; // Offset: 0x0
    uM2L31_OPA_OPA_MODE0 M2L31_OPA_OPA_MODE0; // Offset: 0x4
    uM2L31_OPA_OPA_MODE1 M2L31_OPA_OPA_MODE1; // Offset: 0x8
    uM2L31_OPA_OPA_MODE2 M2L31_OPA_OPA_MODE2; // Offset: 0xc
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    uM2L31_OPA_OPA_STATUS M2L31_OPA_OPA_STATUS; // Offset: 0x20
    uM2L31_OPA_OPA_CALCTL M2L31_OPA_OPA_CALCTL; // Offset: 0x24
    uM2L31_OPA_OPA_CALST M2L31_OPA_OPA_CALST; // Offset: 0x28
} sM2L31_OPA;

