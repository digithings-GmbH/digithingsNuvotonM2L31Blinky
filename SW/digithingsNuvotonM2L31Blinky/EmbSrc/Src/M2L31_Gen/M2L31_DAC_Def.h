// Base Addres of DAC = 0x40047000

#define M2L31_DAC_DAC0_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DACEN : 1;
    unsigned long DACIEN : 1;
    unsigned long DMAEN : 1;
    unsigned long DMAURIEN : 1;
    unsigned long TRGEN : 1;
    unsigned long TRGSEL : 4;
    unsigned long Res0 : 1;
    unsigned long LALIGN : 1;
    unsigned long Res1 : 1;
    unsigned long ETRGSEL : 2;
    unsigned long BWSEL : 2;
    unsigned long GRPEN : 1;
    unsigned long GPIOEN : 1;
    unsigned long BYPASS : 1;
    unsigned long Res2 : 13;
} sM2L31_DAC_DAC0_CTL;

typedef union {
    sM2L31_DAC_DAC0_CTL Bit;
    unsigned long  All;
} uM2L31_DAC_DAC0_CTL;

#define M2L31_DAC_DAC0_SWTRG_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SWTRG : 1;
    unsigned long Res0 : 31;
} sM2L31_DAC_DAC0_SWTRG;

typedef union {
    sM2L31_DAC_DAC0_SWTRG Bit;
    unsigned long  All;
} uM2L31_DAC_DAC0_SWTRG;

#define M2L31_DAC_DAC0_DAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DACDAT : 16;
    unsigned long Res0 : 16;
} sM2L31_DAC_DAC0_DAT;

typedef union {
    sM2L31_DAC_DAC0_DAT Bit;
    unsigned long  All;
} uM2L31_DAC_DAC0_DAT;

#define M2L31_DAC_DAC0_DATOUT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATOUT : 12;
    unsigned long Res0 : 20;
} sM2L31_DAC_DAC0_DATOUT;

typedef union {
    sM2L31_DAC_DAC0_DATOUT Bit;
    unsigned long  All;
} uM2L31_DAC_DAC0_DATOUT;

#define M2L31_DAC_DAC0_STATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FINISH : 1;
    unsigned long DMAUDR : 1;
    unsigned long Res0 : 6;
    unsigned long BUSY : 1;
    unsigned long Res1 : 23;
} sM2L31_DAC_DAC0_STATUS;

typedef union {
    sM2L31_DAC_DAC0_STATUS Bit;
    unsigned long  All;
} uM2L31_DAC_DAC0_STATUS;

#define M2L31_DAC_DAC0_TCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SETTLET : 10;
    unsigned long Res0 : 22;
} sM2L31_DAC_DAC0_TCTL;

typedef union {
    sM2L31_DAC_DAC0_TCTL Bit;
    unsigned long  All;
} uM2L31_DAC_DAC0_TCTL;

#define M2L31_DAC_DAC_GRPDAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DAC0DAT : 16;
    unsigned long DAC1DAT : 16;
} sM2L31_DAC_DAC_GRPDAT;

typedef union {
    sM2L31_DAC_DAC_GRPDAT Bit;
    unsigned long  All;
} uM2L31_DAC_DAC_GRPDAT;

#define M2L31_DAC_DAC1_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DACEN : 1;
    unsigned long DACIEN : 1;
    unsigned long DMAEN : 1;
    unsigned long DMAURIEN : 1;
    unsigned long TRGEN : 1;
    unsigned long TRGSEL : 4;
    unsigned long Res0 : 1;
    unsigned long LALIGN : 1;
    unsigned long Res1 : 1;
    unsigned long ETRGSEL : 2;
    unsigned long BWSEL : 2;
    unsigned long Res2 : 1;
    unsigned long GPIOEN : 1;
    unsigned long BYPASS : 1;
    unsigned long Res3 : 13;
} sM2L31_DAC_DAC1_CTL;

typedef union {
    sM2L31_DAC_DAC1_CTL Bit;
    unsigned long  All;
} uM2L31_DAC_DAC1_CTL;

#define M2L31_DAC_DAC1_SWTRG_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SWTRG : 1;
    unsigned long Res0 : 31;
} sM2L31_DAC_DAC1_SWTRG;

typedef union {
    sM2L31_DAC_DAC1_SWTRG Bit;
    unsigned long  All;
} uM2L31_DAC_DAC1_SWTRG;

#define M2L31_DAC_DAC1_DAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DACDAT : 16;
    unsigned long Res0 : 16;
} sM2L31_DAC_DAC1_DAT;

typedef union {
    sM2L31_DAC_DAC1_DAT Bit;
    unsigned long  All;
} uM2L31_DAC_DAC1_DAT;

#define M2L31_DAC_DAC1_DATOUT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATOUT : 12;
    unsigned long Res0 : 20;
} sM2L31_DAC_DAC1_DATOUT;

typedef union {
    sM2L31_DAC_DAC1_DATOUT Bit;
    unsigned long  All;
} uM2L31_DAC_DAC1_DATOUT;

#define M2L31_DAC_DAC1_STATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FINISH : 1;
    unsigned long DMAUDR : 1;
    unsigned long Res0 : 6;
    unsigned long BUSY : 1;
    unsigned long Res1 : 23;
} sM2L31_DAC_DAC1_STATUS;

typedef union {
    sM2L31_DAC_DAC1_STATUS Bit;
    unsigned long  All;
} uM2L31_DAC_DAC1_STATUS;

#define M2L31_DAC_DAC1_TCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SETTLET : 10;
    unsigned long Res0 : 22;
} sM2L31_DAC_DAC1_TCTL;

typedef union {
    sM2L31_DAC_DAC1_TCTL Bit;
    unsigned long  All;
} uM2L31_DAC_DAC1_TCTL;

typedef struct {
    uM2L31_DAC_DAC0_CTL M2L31_DAC_DAC0_CTL; // Offset: 0x0
    uM2L31_DAC_DAC0_SWTRG M2L31_DAC_DAC0_SWTRG; // Offset: 0x4
    uM2L31_DAC_DAC0_DAT M2L31_DAC_DAC0_DAT; // Offset: 0x8
    uM2L31_DAC_DAC0_DATOUT M2L31_DAC_DAC0_DATOUT; // Offset: 0xc
    uM2L31_DAC_DAC0_STATUS M2L31_DAC_DAC0_STATUS; // Offset: 0x10
    uM2L31_DAC_DAC0_TCTL M2L31_DAC_DAC0_TCTL; // Offset: 0x14
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    uM2L31_DAC_DAC_GRPDAT M2L31_DAC_DAC_GRPDAT; // Offset: 0x30
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    uM2L31_DAC_DAC1_CTL M2L31_DAC_DAC1_CTL; // Offset: 0x40
    uM2L31_DAC_DAC1_SWTRG M2L31_DAC_DAC1_SWTRG; // Offset: 0x44
    uM2L31_DAC_DAC1_DAT M2L31_DAC_DAC1_DAT; // Offset: 0x48
    uM2L31_DAC_DAC1_DATOUT M2L31_DAC_DAC1_DATOUT; // Offset: 0x4c
    uM2L31_DAC_DAC1_STATUS M2L31_DAC_DAC1_STATUS; // Offset: 0x50
    uM2L31_DAC_DAC1_TCTL M2L31_DAC_DAC1_TCTL; // Offset: 0x54
} sM2L31_DAC;

