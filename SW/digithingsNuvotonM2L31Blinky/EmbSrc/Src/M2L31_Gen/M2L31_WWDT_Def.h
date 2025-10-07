// Base Addres of WWDT = 0x40096000

#define M2L31_WWDT_WWDT_RLDCNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RLDCNT : 32;
} sM2L31_WWDT_WWDT_RLDCNT;

typedef union {
    sM2L31_WWDT_WWDT_RLDCNT Bit;
    unsigned long  All;
} uM2L31_WWDT_WWDT_RLDCNT;

#define M2L31_WWDT_WWDT_CTL_RESET_VALUE 0x003F0800
typedef struct {
    unsigned long WWDTEN : 1;
    unsigned long INTEN : 1;
    unsigned long Res0 : 6;
    unsigned long PSCSEL : 4;
    unsigned long Res1 : 4;
    unsigned long CMPDAT : 6;
    unsigned long Res2 : 9;
    unsigned long ICEDEBUG : 1;
} sM2L31_WWDT_WWDT_CTL;

typedef union {
    sM2L31_WWDT_WWDT_CTL Bit;
    unsigned long  All;
} uM2L31_WWDT_WWDT_CTL;

#define M2L31_WWDT_WWDT_STATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WWDTIF : 1;
    unsigned long WWDTRF : 1;
    unsigned long Res0 : 30;
} sM2L31_WWDT_WWDT_STATUS;

typedef union {
    sM2L31_WWDT_WWDT_STATUS Bit;
    unsigned long  All;
} uM2L31_WWDT_WWDT_STATUS;

#define M2L31_WWDT_WWDT_CNT_RESET_VALUE 0x0000003F
typedef struct {
    unsigned long CNTDAT : 6;
    unsigned long Res0 : 26;
} sM2L31_WWDT_WWDT_CNT;

typedef union {
    sM2L31_WWDT_WWDT_CNT Bit;
    unsigned long  All;
} uM2L31_WWDT_WWDT_CNT;

typedef struct {
    uM2L31_WWDT_WWDT_RLDCNT M2L31_WWDT_WWDT_RLDCNT; // Offset: 0x0
    uM2L31_WWDT_WWDT_CTL M2L31_WWDT_WWDT_CTL; // Offset: 0x4
    uM2L31_WWDT_WWDT_STATUS M2L31_WWDT_WWDT_STATUS; // Offset: 0x8
    uM2L31_WWDT_WWDT_CNT M2L31_WWDT_WWDT_CNT; // Offset: 0xc
} sM2L31_WWDT;

