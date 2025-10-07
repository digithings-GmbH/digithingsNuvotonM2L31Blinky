// Base Addres of RTC = 0x40041000

#define M2L31_RTC_RTC_INIT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ACTIVE : 1;
    unsigned long INIT : 31;
} sM2L31_RTC_RTC_INIT;

typedef union {
    sM2L31_RTC_RTC_INIT Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_INIT;

#define M2L31_RTC_RTC_FREQADJ_RESET_VALUE 0x00001000
typedef struct {
    unsigned long FRACTION : 6;
    unsigned long Res0 : 2;
    unsigned long INTEGER : 5;
    unsigned long Res1 : 18;
    unsigned long FCRBUSY : 1;
} sM2L31_RTC_RTC_FREQADJ;

typedef union {
    sM2L31_RTC_RTC_FREQADJ Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_FREQADJ;

#define M2L31_RTC_RTC_TIME_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SEC : 4;
    unsigned long TENSEC : 3;
    unsigned long Res0 : 1;
    unsigned long MIN : 4;
    unsigned long TENMIN : 3;
    unsigned long Res1 : 1;
    unsigned long HR : 4;
    unsigned long TENHR : 2;
    unsigned long Res2 : 2;
    unsigned long HZCNT : 7;
    unsigned long Res3 : 1;
} sM2L31_RTC_RTC_TIME;

typedef union {
    sM2L31_RTC_RTC_TIME Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_TIME;

#define M2L31_RTC_RTC_CAL_RESET_VALUE 0x00150808
typedef struct {
    unsigned long DAY : 4;
    unsigned long TENDAY : 2;
    unsigned long Res0 : 2;
    unsigned long MON : 4;
    unsigned long TENMON : 1;
    unsigned long Res1 : 3;
    unsigned long YEAR : 4;
    unsigned long TENYEAR : 4;
    unsigned long Res2 : 8;
} sM2L31_RTC_RTC_CAL;

typedef union {
    sM2L31_RTC_RTC_CAL Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_CAL;

#define M2L31_RTC_RTC_CLKFMT_RESET_VALUE 0x00000001
typedef struct {
    unsigned long _24HEN : 1;
    unsigned long Res0 : 7;
    unsigned long HZCNTEN : 1;
    unsigned long Res1 : 7;
    unsigned long DCOMPEN : 1;
    unsigned long Res2 : 15;
} sM2L31_RTC_RTC_CLKFMT;

typedef union {
    sM2L31_RTC_RTC_CLKFMT Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_CLKFMT;

#define M2L31_RTC_RTC_WEEKDAY_RESET_VALUE 0x00000006
typedef struct {
    unsigned long WEEKDAY : 3;
    unsigned long Res0 : 29;
} sM2L31_RTC_RTC_WEEKDAY;

typedef union {
    sM2L31_RTC_RTC_WEEKDAY Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_WEEKDAY;

#define M2L31_RTC_RTC_TALM_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SEC : 4;
    unsigned long TENSEC : 3;
    unsigned long Res0 : 1;
    unsigned long MIN : 4;
    unsigned long TENMIN : 3;
    unsigned long Res1 : 1;
    unsigned long HR : 4;
    unsigned long TENHR : 2;
    unsigned long Res2 : 2;
    unsigned long HZCNT : 7;
    unsigned long Res3 : 1;
} sM2L31_RTC_RTC_TALM;

typedef union {
    sM2L31_RTC_RTC_TALM Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_TALM;

#define M2L31_RTC_RTC_CALM_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DAY : 4;
    unsigned long TENDAY : 2;
    unsigned long Res0 : 2;
    unsigned long MON : 4;
    unsigned long TENMON : 1;
    unsigned long Res1 : 3;
    unsigned long YEAR : 4;
    unsigned long TENYEAR : 4;
    unsigned long Res2 : 8;
} sM2L31_RTC_RTC_CALM;

typedef union {
    sM2L31_RTC_RTC_CALM Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_CALM;

#define M2L31_RTC_RTC_LEAPYEAR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LEAPYEAR : 1;
    unsigned long Res0 : 31;
} sM2L31_RTC_RTC_LEAPYEAR;

typedef union {
    sM2L31_RTC_RTC_LEAPYEAR Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_LEAPYEAR;

#define M2L31_RTC_RTC_INTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ALMIEN : 1;
    unsigned long TICKIEN : 1;
    unsigned long Res0 : 6;
    unsigned long TAMP0IEN : 1;
    unsigned long TAMP1IEN : 1;
    unsigned long TAMP2IEN : 1;
    unsigned long Res1 : 21;
} sM2L31_RTC_RTC_INTEN;

typedef union {
    sM2L31_RTC_RTC_INTEN Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_INTEN;

#define M2L31_RTC_RTC_INTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ALMIF : 1;
    unsigned long TICKIF : 1;
    unsigned long Res0 : 6;
    unsigned long TAMP0IF : 1;
    unsigned long TAMP1IF : 1;
    unsigned long TAMP2IF : 1;
    unsigned long Res1 : 21;
} sM2L31_RTC_RTC_INTSTS;

typedef union {
    sM2L31_RTC_RTC_INTSTS Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_INTSTS;

#define M2L31_RTC_RTC_TICK_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TICK : 3;
    unsigned long Res0 : 29;
} sM2L31_RTC_RTC_TICK;

typedef union {
    sM2L31_RTC_RTC_TICK Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_TICK;

#define M2L31_RTC_RTC_TAMSK_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MSEC : 1;
    unsigned long MTENSEC : 1;
    unsigned long MMIN : 1;
    unsigned long MTENMIN : 1;
    unsigned long MHR : 1;
    unsigned long MTENHR : 1;
    unsigned long Res0 : 26;
} sM2L31_RTC_RTC_TAMSK;

typedef union {
    sM2L31_RTC_RTC_TAMSK Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_TAMSK;

#define M2L31_RTC_RTC_CAMSK_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MDAY : 1;
    unsigned long MTENDAY : 1;
    unsigned long MMON : 1;
    unsigned long MTENMON : 1;
    unsigned long MYEAR : 1;
    unsigned long MTENYEAR : 1;
    unsigned long Res0 : 26;
} sM2L31_RTC_RTC_CAMSK;

typedef union {
    sM2L31_RTC_RTC_CAMSK Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_CAMSK;

#define M2L31_RTC_RTC_SPRCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long SPRRWEN : 1;
    unsigned long Res1 : 2;
    unsigned long SPRCSTS : 1;
    unsigned long Res2 : 26;
} sM2L31_RTC_RTC_SPRCTL;

typedef union {
    sM2L31_RTC_RTC_SPRCTL Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_SPRCTL;

#define M2L31_RTC_RTC_SPR0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SPARE : 32;
} sM2L31_RTC_RTC_SPR0;

typedef union {
    sM2L31_RTC_RTC_SPR0 Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_SPR0;

#define M2L31_RTC_RTC_SPR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_RTC_RTC_SPR1;

typedef union {
    sM2L31_RTC_RTC_SPR1 Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_SPR1;

#define M2L31_RTC_RTC_SPR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_RTC_RTC_SPR2;

typedef union {
    sM2L31_RTC_RTC_SPR2 Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_SPR2;

#define M2L31_RTC_RTC_SPR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_RTC_RTC_SPR3;

typedef union {
    sM2L31_RTC_RTC_SPR3 Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_SPR3;

#define M2L31_RTC_RTC_SPR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_RTC_RTC_SPR4;

typedef union {
    sM2L31_RTC_RTC_SPR4 Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_SPR4;

#define M2L31_RTC_RTC_LXTCTL_RESET_VALUE 0x00000006
typedef struct {
    unsigned long Res0 : 1;
    unsigned long GAIN : 4;
    unsigned long Res1 : 2;
    unsigned long RTCCKSEL : 1;
    unsigned long IOCTLSEL : 1;
    unsigned long Res2 : 23;
} sM2L31_RTC_RTC_LXTCTL;

typedef union {
    sM2L31_RTC_RTC_LXTCTL Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_LXTCTL;

#define M2L31_RTC_RTC_GPIOCTL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OPMODE0 : 2;
    unsigned long DOUT0 : 1;
    unsigned long DINOFF0 : 1;
    unsigned long PUSEL0 : 2;
    unsigned long Res0 : 2;
    unsigned long OPMODE1 : 2;
    unsigned long DOUT1 : 1;
    unsigned long DINOFF1 : 1;
    unsigned long PUSEL1 : 2;
    unsigned long Res1 : 2;
    unsigned long OPMODE2 : 2;
    unsigned long DOUT2 : 1;
    unsigned long DINOFF2 : 1;
    unsigned long PUSEL2 : 2;
    unsigned long Res2 : 2;
    unsigned long OPMODE3 : 2;
    unsigned long DOUT3 : 1;
    unsigned long DINOFF3 : 1;
    unsigned long PUSEL3 : 2;
    unsigned long Res3 : 2;
} sM2L31_RTC_RTC_GPIOCTL0;

typedef union {
    sM2L31_RTC_RTC_GPIOCTL0 Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_GPIOCTL0;

#define M2L31_RTC_RTC_GPIOCTL1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OPMODE4 : 2;
    unsigned long DOUT4 : 1;
    unsigned long DINOFF4 : 1;
    unsigned long PUSEL4 : 2;
    unsigned long Res0 : 2;
    unsigned long OPMODE5 : 2;
    unsigned long DOUT5 : 1;
    unsigned long DINOFF5 : 1;
    unsigned long PUSEL5 : 2;
    unsigned long Res1 : 2;
    unsigned long OPMODE6 : 2;
    unsigned long DOUT6 : 1;
    unsigned long DINOFF6 : 1;
    unsigned long PUSEL6 : 2;
    unsigned long Res2 : 2;
    unsigned long OPMODE7 : 2;
    unsigned long DOUT7 : 1;
    unsigned long DINOFF7 : 1;
    unsigned long PUSEL7 : 2;
    unsigned long Res3 : 2;
} sM2L31_RTC_RTC_GPIOCTL1;

typedef union {
    sM2L31_RTC_RTC_GPIOCTL1 Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_GPIOCTL1;

#define M2L31_RTC_RTC_DSTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ADDHR : 1;
    unsigned long SUBHR : 1;
    unsigned long DSBAK : 1;
    unsigned long Res0 : 29;
} sM2L31_RTC_RTC_DSTCTL;

typedef union {
    sM2L31_RTC_RTC_DSTCTL Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_DSTCTL;

#define M2L31_RTC_RTC_TAMPCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 8;
    unsigned long TAMP0EN : 1;
    unsigned long TAMP0LV : 1;
    unsigned long TAMP0DEN : 1;
    unsigned long Res1 : 1;
    unsigned long TAMP1EN : 1;
    unsigned long TAMP1LV : 1;
    unsigned long TAMP1DEN : 1;
    unsigned long Res2 : 1;
    unsigned long TAMP2EN : 1;
    unsigned long TAMP2LV : 1;
    unsigned long TAMP2DEN : 1;
    unsigned long Res3 : 13;
} sM2L31_RTC_RTC_TAMPCTL;

typedef union {
    sM2L31_RTC_RTC_TAMPCTL Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_TAMPCTL;

#define M2L31_RTC_RTC_TAMPTIME_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SEC : 4;
    unsigned long TENSEC : 3;
    unsigned long Res0 : 1;
    unsigned long MIN : 4;
    unsigned long TENMIN : 3;
    unsigned long Res1 : 1;
    unsigned long HR : 4;
    unsigned long TENHR : 2;
    unsigned long Res2 : 2;
    unsigned long HZCNT : 7;
    unsigned long Res3 : 1;
} sM2L31_RTC_RTC_TAMPTIME;

typedef union {
    sM2L31_RTC_RTC_TAMPTIME Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_TAMPTIME;

#define M2L31_RTC_RTC_TAMPCAL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DAY : 4;
    unsigned long TENDAY : 2;
    unsigned long Res0 : 2;
    unsigned long MON : 4;
    unsigned long TENMON : 1;
    unsigned long Res1 : 3;
    unsigned long YEAR : 4;
    unsigned long TENYEAR : 4;
    unsigned long Res2 : 8;
} sM2L31_RTC_RTC_TAMPCAL;

typedef union {
    sM2L31_RTC_RTC_TAMPCAL Bit;
    unsigned long  All;
} uM2L31_RTC_RTC_TAMPCAL;

typedef struct {
    uM2L31_RTC_RTC_INIT M2L31_RTC_RTC_INIT; // Offset: 0x0
    unsigned long Reserved0;
    uM2L31_RTC_RTC_FREQADJ M2L31_RTC_RTC_FREQADJ; // Offset: 0x8
    uM2L31_RTC_RTC_TIME M2L31_RTC_RTC_TIME; // Offset: 0xc
    uM2L31_RTC_RTC_CAL M2L31_RTC_RTC_CAL; // Offset: 0x10
    uM2L31_RTC_RTC_CLKFMT M2L31_RTC_RTC_CLKFMT; // Offset: 0x14
    uM2L31_RTC_RTC_WEEKDAY M2L31_RTC_RTC_WEEKDAY; // Offset: 0x18
    uM2L31_RTC_RTC_TALM M2L31_RTC_RTC_TALM; // Offset: 0x1c
    uM2L31_RTC_RTC_CALM M2L31_RTC_RTC_CALM; // Offset: 0x20
    uM2L31_RTC_RTC_LEAPYEAR M2L31_RTC_RTC_LEAPYEAR; // Offset: 0x24
    uM2L31_RTC_RTC_INTEN M2L31_RTC_RTC_INTEN; // Offset: 0x28
    uM2L31_RTC_RTC_INTSTS M2L31_RTC_RTC_INTSTS; // Offset: 0x2c
    uM2L31_RTC_RTC_TICK M2L31_RTC_RTC_TICK; // Offset: 0x30
    uM2L31_RTC_RTC_TAMSK M2L31_RTC_RTC_TAMSK; // Offset: 0x34
    uM2L31_RTC_RTC_CAMSK M2L31_RTC_RTC_CAMSK; // Offset: 0x38
    uM2L31_RTC_RTC_SPRCTL M2L31_RTC_RTC_SPRCTL; // Offset: 0x3c
    uM2L31_RTC_RTC_SPR0 M2L31_RTC_RTC_SPR0; // Offset: 0x40
    uM2L31_RTC_RTC_SPR1 M2L31_RTC_RTC_SPR1; // Offset: 0x44
    uM2L31_RTC_RTC_SPR2 M2L31_RTC_RTC_SPR2; // Offset: 0x48
    uM2L31_RTC_RTC_SPR3 M2L31_RTC_RTC_SPR3; // Offset: 0x4c
    uM2L31_RTC_RTC_SPR4 M2L31_RTC_RTC_SPR4; // Offset: 0x50
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    unsigned long Reserved9;
    unsigned long Reserved10;
    unsigned long Reserved11;
    unsigned long Reserved12;
    unsigned long Reserved13;
    unsigned long Reserved14;
    unsigned long Reserved15;
    unsigned long Reserved16;
    unsigned long Reserved17;
    unsigned long Reserved18;
    unsigned long Reserved19;
    unsigned long Reserved20;
    unsigned long Reserved21;
    unsigned long Reserved22;
    unsigned long Reserved23;
    unsigned long Reserved24;
    unsigned long Reserved25;
    unsigned long Reserved26;
    unsigned long Reserved27;
    unsigned long Reserved28;
    unsigned long Reserved29;
    unsigned long Reserved30;
    unsigned long Reserved31;
    unsigned long Reserved32;
    unsigned long Reserved33;
    unsigned long Reserved34;
    unsigned long Reserved35;
    unsigned long Reserved36;
    unsigned long Reserved37;
    unsigned long Reserved38;
    unsigned long Reserved39;
    unsigned long Reserved40;
    unsigned long Reserved41;
    unsigned long Reserved42;
    unsigned long Reserved43;
    uM2L31_RTC_RTC_LXTCTL M2L31_RTC_RTC_LXTCTL; // Offset: 0x100
    uM2L31_RTC_RTC_GPIOCTL0 M2L31_RTC_RTC_GPIOCTL0; // Offset: 0x104
    uM2L31_RTC_RTC_GPIOCTL1 M2L31_RTC_RTC_GPIOCTL1; // Offset: 0x108
    unsigned long Reserved44;
    uM2L31_RTC_RTC_DSTCTL M2L31_RTC_RTC_DSTCTL; // Offset: 0x110
    unsigned long Reserved45;
    unsigned long Reserved46;
    unsigned long Reserved47;
    uM2L31_RTC_RTC_TAMPCTL M2L31_RTC_RTC_TAMPCTL; // Offset: 0x120
    unsigned long Reserved48;
    unsigned long Reserved49;
    unsigned long Reserved50;
    uM2L31_RTC_RTC_TAMPTIME M2L31_RTC_RTC_TAMPTIME; // Offset: 0x130
    uM2L31_RTC_RTC_TAMPCAL M2L31_RTC_RTC_TAMPCAL; // Offset: 0x134
} sM2L31_RTC;

