// Base Addres of TRNG = 0x400B9000

#define M2L31_TRNG_TRNG_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LDOEN : 1;
    unsigned long NRST : 1;
    unsigned long TRNGEN : 1;
    unsigned long START : 1;
    unsigned long MODE : 2;
    unsigned long Res0 : 2;
    unsigned long INSTANT : 1;
    unsigned long RESEED : 1;
    unsigned long UPDATE : 1;
    unsigned long Res1 : 13;
    unsigned long KATEN : 1;
    unsigned long KATSEL : 2;
    unsigned long Res2 : 3;
    unsigned long ERRIEN : 1;
    unsigned long DVIEN : 1;
} sM2L31_TRNG_TRNG_CTL;

typedef union {
    sM2L31_TRNG_TRNG_CTL Bit;
    unsigned long  All;
} uM2L31_TRNG_TRNG_CTL;

#define M2L31_TRNG_TRNG_CFG_RESET_VALUE 0xC2000000
typedef struct {
    unsigned long RESEED_INTERVAL : 26;
    unsigned long Res0 : 2;
    unsigned long CTRLEN : 4;
} sM2L31_TRNG_TRNG_CFG;

typedef union {
    sM2L31_TRNG_TRNG_CFG Bit;
    unsigned long  All;
} uM2L31_TRNG_TRNG_CFG;

#define M2L31_TRNG_TRNG_STS_RESET_VALUE 0x00000060
typedef struct {
    unsigned long LDORDY : 1;
    unsigned long TRNGRDY : 1;
    unsigned long Res0 : 2;
    unsigned long ESSUT : 1;
    unsigned long ESRCT : 1;
    unsigned long ESAPT : 1;
    unsigned long Res1 : 20;
    unsigned long KATPASS : 1;
    unsigned long Res2 : 2;
    unsigned long ERRIF : 1;
    unsigned long DVIF : 1;
} sM2L31_TRNG_TRNG_STS;

typedef union {
    sM2L31_TRNG_TRNG_STS Bit;
    unsigned long  All;
} uM2L31_TRNG_TRNG_STS;

#define M2L31_TRNG_TRNG_DATA0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATA : 32;
} sM2L31_TRNG_TRNG_DATA0;

typedef union {
    sM2L31_TRNG_TRNG_DATA0 Bit;
    unsigned long  All;
} uM2L31_TRNG_TRNG_DATA0;

#define M2L31_TRNG_TRNG_DATA1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TRNG_TRNG_DATA1;

typedef union {
    sM2L31_TRNG_TRNG_DATA1 Bit;
    unsigned long  All;
} uM2L31_TRNG_TRNG_DATA1;

#define M2L31_TRNG_TRNG_DATA2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TRNG_TRNG_DATA2;

typedef union {
    sM2L31_TRNG_TRNG_DATA2 Bit;
    unsigned long  All;
} uM2L31_TRNG_TRNG_DATA2;

#define M2L31_TRNG_TRNG_DATA3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TRNG_TRNG_DATA3;

typedef union {
    sM2L31_TRNG_TRNG_DATA3 Bit;
    unsigned long  All;
} uM2L31_TRNG_TRNG_DATA3;

typedef struct {
    uM2L31_TRNG_TRNG_CTL M2L31_TRNG_TRNG_CTL; // Offset: 0x0
    uM2L31_TRNG_TRNG_CFG M2L31_TRNG_TRNG_CFG; // Offset: 0x4
    uM2L31_TRNG_TRNG_STS M2L31_TRNG_TRNG_STS; // Offset: 0x8
    uM2L31_TRNG_TRNG_DATA0 M2L31_TRNG_TRNG_DATA0; // Offset: 0xc
    uM2L31_TRNG_TRNG_DATA1 M2L31_TRNG_TRNG_DATA1; // Offset: 0x10
    uM2L31_TRNG_TRNG_DATA2 M2L31_TRNG_TRNG_DATA2; // Offset: 0x14
    uM2L31_TRNG_TRNG_DATA3 M2L31_TRNG_TRNG_DATA3; // Offset: 0x18
} sM2L31_TRNG;

