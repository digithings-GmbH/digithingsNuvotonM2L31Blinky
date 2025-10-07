// Base Addres of KS = 0x40035000

#define M2L31_KS_KS_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long START : 1;
    unsigned long OPMODE : 3;
    unsigned long Res0 : 4;
    unsigned long INIT : 1;
    unsigned long Res1 : 5;
    unsigned long TCLREN : 1;
    unsigned long IEN : 1;
    unsigned long Res2 : 16;
} sM2L31_KS_KS_CTL;

typedef union {
    sM2L31_KS_KS_CTL Bit;
    unsigned long  All;
} uM2L31_KS_KS_CTL;

#define M2L31_KS_KS_METADATA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long READABLE : 1;
    unsigned long Res1 : 1;
    unsigned long BS : 1;
    unsigned long Res2 : 3;
    unsigned long SIZE : 5;
    unsigned long Res3 : 3;
    unsigned long OWNER : 3;
    unsigned long Res4 : 1;
    unsigned long NUMBER : 6;
    unsigned long Res5 : 4;
    unsigned long DST : 2;
} sM2L31_KS_KS_METADATA;

typedef union {
    sM2L31_KS_KS_METADATA Bit;
    unsigned long  All;
} uM2L31_KS_KS_METADATA;

#define M2L31_KS_KS_STS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IF : 1;
    unsigned long EIF : 1;
    unsigned long BUSY : 1;
    unsigned long Res0 : 3;
    unsigned long TCLRSF : 1;
    unsigned long INITDONE : 1;
    unsigned long Res1 : 1;
    unsigned long KRVKF : 1;
    unsigned long Res2 : 6;
    unsigned long RSTEF : 1;
    unsigned long Res3 : 15;
} sM2L31_KS_KS_STS;

typedef union {
    sM2L31_KS_KS_STS Bit;
    unsigned long  All;
} uM2L31_KS_KS_STS;

#define M2L31_KS_KS_KEY0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long KEY : 32;
} sM2L31_KS_KS_KEY0;

typedef union {
    sM2L31_KS_KS_KEY0 Bit;
    unsigned long  All;
} uM2L31_KS_KS_KEY0;

#define M2L31_KS_KS_KEY1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_KS_KS_KEY1;

typedef union {
    sM2L31_KS_KS_KEY1 Bit;
    unsigned long  All;
} uM2L31_KS_KS_KEY1;

#define M2L31_KS_KS_KEY2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_KS_KS_KEY2;

typedef union {
    sM2L31_KS_KS_KEY2 Bit;
    unsigned long  All;
} uM2L31_KS_KS_KEY2;

#define M2L31_KS_KS_KEY3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_KS_KS_KEY3;

typedef union {
    sM2L31_KS_KS_KEY3 Bit;
    unsigned long  All;
} uM2L31_KS_KS_KEY3;

#define M2L31_KS_KS_KEY4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_KS_KS_KEY4;

typedef union {
    sM2L31_KS_KS_KEY4 Bit;
    unsigned long  All;
} uM2L31_KS_KS_KEY4;

#define M2L31_KS_KS_KEY5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_KS_KS_KEY5;

typedef union {
    sM2L31_KS_KS_KEY5 Bit;
    unsigned long  All;
} uM2L31_KS_KS_KEY5;

#define M2L31_KS_KS_KEY6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_KS_KS_KEY6;

typedef union {
    sM2L31_KS_KS_KEY6 Bit;
    unsigned long  All;
} uM2L31_KS_KS_KEY6;

#define M2L31_KS_KS_KEY7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_KS_KS_KEY7;

typedef union {
    sM2L31_KS_KS_KEY7 Bit;
    unsigned long  All;
} uM2L31_KS_KS_KEY7;

#define M2L31_KS_KS_OTPSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long KEY0 : 1;
    unsigned long KEY1 : 1;
    unsigned long Res0 : 30;
} sM2L31_KS_KS_OTPSTS;

typedef union {
    sM2L31_KS_KS_OTPSTS Bit;
    unsigned long  All;
} uM2L31_KS_KS_OTPSTS;

#define M2L31_KS_KS_RSTERR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long OPMODE : 3;
    unsigned long Res1 : 12;
    unsigned long OWNER : 3;
    unsigned long Res2 : 1;
    unsigned long NUMBER : 6;
    unsigned long Res3 : 4;
    unsigned long DST : 2;
} sM2L31_KS_KS_RSTERR;

typedef union {
    sM2L31_KS_KS_RSTERR Bit;
    unsigned long  All;
} uM2L31_KS_KS_RSTERR;

typedef struct {
    uM2L31_KS_KS_CTL M2L31_KS_KS_CTL; // Offset: 0x0
    uM2L31_KS_KS_METADATA M2L31_KS_KS_METADATA; // Offset: 0x4
    uM2L31_KS_KS_STS M2L31_KS_KS_STS; // Offset: 0x8
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    uM2L31_KS_KS_KEY0 M2L31_KS_KS_KEY0; // Offset: 0x20
    uM2L31_KS_KS_KEY1 M2L31_KS_KS_KEY1; // Offset: 0x24
    uM2L31_KS_KS_KEY2 M2L31_KS_KS_KEY2; // Offset: 0x28
    uM2L31_KS_KS_KEY3 M2L31_KS_KS_KEY3; // Offset: 0x2c
    uM2L31_KS_KS_KEY4 M2L31_KS_KS_KEY4; // Offset: 0x30
    uM2L31_KS_KS_KEY5 M2L31_KS_KS_KEY5; // Offset: 0x34
    uM2L31_KS_KS_KEY6 M2L31_KS_KS_KEY6; // Offset: 0x38
    uM2L31_KS_KS_KEY7 M2L31_KS_KS_KEY7; // Offset: 0x3c
    uM2L31_KS_KS_OTPSTS M2L31_KS_KS_OTPSTS; // Offset: 0x40
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
    unsigned long Reserved44;
    unsigned long Reserved45;
    unsigned long Reserved46;
    unsigned long Reserved47;
    uM2L31_KS_KS_RSTERR M2L31_KS_KS_RSTERR; // Offset: 0xf0
} sM2L31_KS;

