// Base Addres of WDT = 0x40040000

#define M2L31_WDT_WDT_CTL_RESET_VALUE 0x00000800
typedef struct {
    unsigned long Res0 : 1;
    unsigned long RSTEN : 1;
    unsigned long RSTF : 1;
    unsigned long IF : 1;
    unsigned long WKEN : 1;
    unsigned long WKF : 1;
    unsigned long INTEN : 1;
    unsigned long WDTEN : 1;
    unsigned long TOUTSEL : 4;
    unsigned long Res1 : 17;
    unsigned long PDRSTCNT : 1;
    unsigned long SYNC : 1;
    unsigned long ICEDEBUG : 1;
} sM2L31_WDT_WDT_CTL;

typedef union {
    sM2L31_WDT_WDT_CTL Bit;
    unsigned long  All;
} uM2L31_WDT_WDT_CTL;

#define M2L31_WDT_WDT_ALTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RSTDSEL : 2;
    unsigned long Res0 : 30;
} sM2L31_WDT_WDT_ALTCTL;

typedef union {
    sM2L31_WDT_WDT_ALTCTL Bit;
    unsigned long  All;
} uM2L31_WDT_WDT_ALTCTL;

#define M2L31_WDT_WDT_RSTCNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RSTCNT : 32;
} sM2L31_WDT_WDT_RSTCNT;

typedef union {
    sM2L31_WDT_WDT_RSTCNT Bit;
    unsigned long  All;
} uM2L31_WDT_WDT_RSTCNT;

typedef struct {
    uM2L31_WDT_WDT_CTL M2L31_WDT_WDT_CTL; // Offset: 0x0
    uM2L31_WDT_WDT_ALTCTL M2L31_WDT_WDT_ALTCTL; // Offset: 0x4
    uM2L31_WDT_WDT_RSTCNT M2L31_WDT_WDT_RSTCNT; // Offset: 0x8
} sM2L31_WDT;

