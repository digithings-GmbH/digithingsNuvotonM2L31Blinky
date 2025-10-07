// Base Addres of CRYPTO = 0x40032000

#define M2L31_CRYPTO_CRYPTO_INTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long AESIEN : 1;
    unsigned long AESEIEN : 1;
    unsigned long Res0 : 14;
    unsigned long PRNGIEN : 1;
    unsigned long PRNGEIEN : 1;
    unsigned long Res1 : 14;
} sM2L31_CRYPTO_CRYPTO_INTEN;

typedef union {
    sM2L31_CRYPTO_CRYPTO_INTEN Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_INTEN;

#define M2L31_CRYPTO_CRYPTO_INTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long AESIF : 1;
    unsigned long AESEIF : 1;
    unsigned long Res0 : 14;
    unsigned long PRNGIF : 1;
    unsigned long PRNGEIF : 1;
    unsigned long Res1 : 14;
} sM2L31_CRYPTO_CRYPTO_INTSTS;

typedef union {
    sM2L31_CRYPTO_CRYPTO_INTSTS Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_INTSTS;

#define M2L31_CRYPTO_CRYPTO_PRNG_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long START : 1;
    unsigned long SEEDRLD : 1;
    unsigned long KEYSZ : 3;
    unsigned long Res0 : 3;
    unsigned long BUSY : 1;
    unsigned long Res1 : 7;
    unsigned long SEEDSRC : 1;
    unsigned long Res2 : 15;
} sM2L31_CRYPTO_CRYPTO_PRNG_CTL;

typedef union {
    sM2L31_CRYPTO_CRYPTO_PRNG_CTL Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_PRNG_CTL;

#define M2L31_CRYPTO_CRYPTO_PRNG_SEED_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SEED : 32;
} sM2L31_CRYPTO_CRYPTO_PRNG_SEED;

typedef union {
    sM2L31_CRYPTO_CRYPTO_PRNG_SEED Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_PRNG_SEED;

#define M2L31_CRYPTO_CRYPTO_PRNG_KEY0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long KEY : 32;
} sM2L31_CRYPTO_CRYPTO_PRNG_KEY0;

typedef union {
    sM2L31_CRYPTO_CRYPTO_PRNG_KEY0 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_PRNG_KEY0;

#define M2L31_CRYPTO_CRYPTO_PRNG_KEY1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_PRNG_KEY1;

typedef union {
    sM2L31_CRYPTO_CRYPTO_PRNG_KEY1 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_PRNG_KEY1;

#define M2L31_CRYPTO_CRYPTO_PRNG_KEY2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_PRNG_KEY2;

typedef union {
    sM2L31_CRYPTO_CRYPTO_PRNG_KEY2 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_PRNG_KEY2;

#define M2L31_CRYPTO_CRYPTO_PRNG_KEY3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_PRNG_KEY3;

typedef union {
    sM2L31_CRYPTO_CRYPTO_PRNG_KEY3 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_PRNG_KEY3;

#define M2L31_CRYPTO_CRYPTO_PRNG_KEY4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_PRNG_KEY4;

typedef union {
    sM2L31_CRYPTO_CRYPTO_PRNG_KEY4 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_PRNG_KEY4;

#define M2L31_CRYPTO_CRYPTO_PRNG_KEY5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_PRNG_KEY5;

typedef union {
    sM2L31_CRYPTO_CRYPTO_PRNG_KEY5 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_PRNG_KEY5;

#define M2L31_CRYPTO_CRYPTO_PRNG_KEY6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_PRNG_KEY6;

typedef union {
    sM2L31_CRYPTO_CRYPTO_PRNG_KEY6 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_PRNG_KEY6;

#define M2L31_CRYPTO_CRYPTO_PRNG_KEY7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_PRNG_KEY7;

typedef union {
    sM2L31_CRYPTO_CRYPTO_PRNG_KEY7 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_PRNG_KEY7;

#define M2L31_CRYPTO_CRYPTO_PRNG_STS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BUSY : 1;
    unsigned long Res0 : 17;
    unsigned long TRNGERR : 1;
    unsigned long Res1 : 13;
} sM2L31_CRYPTO_CRYPTO_PRNG_STS;

typedef union {
    sM2L31_CRYPTO_CRYPTO_PRNG_STS Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_PRNG_STS;

#define M2L31_CRYPTO_CRYPTO_AES_FDBCK0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FDBCK : 32;
} sM2L31_CRYPTO_CRYPTO_AES_FDBCK0;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_FDBCK0 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_FDBCK0;

#define M2L31_CRYPTO_CRYPTO_AES_FDBCK1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_FDBCK1;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_FDBCK1 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_FDBCK1;

#define M2L31_CRYPTO_CRYPTO_AES_FDBCK2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_FDBCK2;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_FDBCK2 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_FDBCK2;

#define M2L31_CRYPTO_CRYPTO_AES_FDBCK3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_FDBCK3;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_FDBCK3 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_FDBCK3;

#define M2L31_CRYPTO_CRYPTO_AES_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long START : 1;
    unsigned long STOP : 1;
    unsigned long KEYSZ : 2;
    unsigned long Res0 : 1;
    unsigned long DMALAST : 1;
    unsigned long DMACSCAD : 1;
    unsigned long DMAEN : 1;
    unsigned long OPMODE : 8;
    unsigned long ENCRYPTO : 1;
    unsigned long Res1 : 5;
    unsigned long OUTSWAP : 1;
    unsigned long INSWAP : 1;
    unsigned long KOUTSWAP : 1;
    unsigned long KINSWAP : 1;
    unsigned long KEYUNPRT : 5;
    unsigned long KEYPRT : 1;
} sM2L31_CRYPTO_CRYPTO_AES_CTL;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_CTL Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_CTL;

#define M2L31_CRYPTO_CRYPTO_AES_STS_RESET_VALUE 0x00010100
typedef struct {
    unsigned long BUSY : 1;
    unsigned long Res0 : 7;
    unsigned long INBUFEMPTY : 1;
    unsigned long INBUFFULL : 1;
    unsigned long INBUFERR : 1;
    unsigned long Res1 : 1;
    unsigned long CNTERR : 1;
    unsigned long Res2 : 3;
    unsigned long OUTBUFEMPTY : 1;
    unsigned long OUTBUFFULL : 1;
    unsigned long OUTBUFERR : 1;
    unsigned long Res3 : 1;
    unsigned long BUSERR : 1;
    unsigned long Res4 : 11;
} sM2L31_CRYPTO_CRYPTO_AES_STS;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_STS Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_STS;

#define M2L31_CRYPTO_CRYPTO_AES_DATIN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATIN : 32;
} sM2L31_CRYPTO_CRYPTO_AES_DATIN;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_DATIN Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_DATIN;

#define M2L31_CRYPTO_CRYPTO_AES_DATOUT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATOUT : 32;
} sM2L31_CRYPTO_CRYPTO_AES_DATOUT;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_DATOUT Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_DATOUT;

#define M2L31_CRYPTO_CRYPTO_AES_KEY0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long KEY : 32;
} sM2L31_CRYPTO_CRYPTO_AES_KEY0;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_KEY0 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_KEY0;

#define M2L31_CRYPTO_CRYPTO_AES_KEY1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_KEY1;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_KEY1 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_KEY1;

#define M2L31_CRYPTO_CRYPTO_AES_KEY2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_KEY2;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_KEY2 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_KEY2;

#define M2L31_CRYPTO_CRYPTO_AES_KEY3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_KEY3;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_KEY3 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_KEY3;

#define M2L31_CRYPTO_CRYPTO_AES_KEY4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_KEY4;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_KEY4 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_KEY4;

#define M2L31_CRYPTO_CRYPTO_AES_KEY5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_KEY5;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_KEY5 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_KEY5;

#define M2L31_CRYPTO_CRYPTO_AES_KEY6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_KEY6;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_KEY6 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_KEY6;

#define M2L31_CRYPTO_CRYPTO_AES_KEY7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_KEY7;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_KEY7 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_KEY7;

#define M2L31_CRYPTO_CRYPTO_AES_IV0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IV : 32;
} sM2L31_CRYPTO_CRYPTO_AES_IV0;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_IV0 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_IV0;

#define M2L31_CRYPTO_CRYPTO_AES_IV1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_IV1;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_IV1 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_IV1;

#define M2L31_CRYPTO_CRYPTO_AES_IV2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_IV2;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_IV2 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_IV2;

#define M2L31_CRYPTO_CRYPTO_AES_IV3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_CRYPTO_CRYPTO_AES_IV3;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_IV3 Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_IV3;

#define M2L31_CRYPTO_CRYPTO_AES_SADDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SADDR : 32;
} sM2L31_CRYPTO_CRYPTO_AES_SADDR;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_SADDR Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_SADDR;

#define M2L31_CRYPTO_CRYPTO_AES_DADDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DADDR : 32;
} sM2L31_CRYPTO_CRYPTO_AES_DADDR;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_DADDR Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_DADDR;

#define M2L31_CRYPTO_CRYPTO_AES_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 32;
} sM2L31_CRYPTO_CRYPTO_AES_CNT;

typedef union {
    sM2L31_CRYPTO_CRYPTO_AES_CNT Bit;
    unsigned long  All;
} uM2L31_CRYPTO_CRYPTO_AES_CNT;

typedef struct {
    uM2L31_CRYPTO_CRYPTO_INTEN M2L31_CRYPTO_CRYPTO_INTEN; // Offset: 0x0
    uM2L31_CRYPTO_CRYPTO_INTSTS M2L31_CRYPTO_CRYPTO_INTSTS; // Offset: 0x4
    uM2L31_CRYPTO_CRYPTO_PRNG_CTL M2L31_CRYPTO_CRYPTO_PRNG_CTL; // Offset: 0x8
    uM2L31_CRYPTO_CRYPTO_PRNG_SEED M2L31_CRYPTO_CRYPTO_PRNG_SEED; // Offset: 0xc
    uM2L31_CRYPTO_CRYPTO_PRNG_KEY0 M2L31_CRYPTO_CRYPTO_PRNG_KEY0; // Offset: 0x10
    uM2L31_CRYPTO_CRYPTO_PRNG_KEY1 M2L31_CRYPTO_CRYPTO_PRNG_KEY1; // Offset: 0x14
    uM2L31_CRYPTO_CRYPTO_PRNG_KEY2 M2L31_CRYPTO_CRYPTO_PRNG_KEY2; // Offset: 0x18
    uM2L31_CRYPTO_CRYPTO_PRNG_KEY3 M2L31_CRYPTO_CRYPTO_PRNG_KEY3; // Offset: 0x1c
    uM2L31_CRYPTO_CRYPTO_PRNG_KEY4 M2L31_CRYPTO_CRYPTO_PRNG_KEY4; // Offset: 0x20
    uM2L31_CRYPTO_CRYPTO_PRNG_KEY5 M2L31_CRYPTO_CRYPTO_PRNG_KEY5; // Offset: 0x24
    uM2L31_CRYPTO_CRYPTO_PRNG_KEY6 M2L31_CRYPTO_CRYPTO_PRNG_KEY6; // Offset: 0x28
    uM2L31_CRYPTO_CRYPTO_PRNG_KEY7 M2L31_CRYPTO_CRYPTO_PRNG_KEY7; // Offset: 0x2c
    uM2L31_CRYPTO_CRYPTO_PRNG_STS M2L31_CRYPTO_CRYPTO_PRNG_STS; // Offset: 0x30
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    uM2L31_CRYPTO_CRYPTO_AES_FDBCK0 M2L31_CRYPTO_CRYPTO_AES_FDBCK0; // Offset: 0x50
    uM2L31_CRYPTO_CRYPTO_AES_FDBCK1 M2L31_CRYPTO_CRYPTO_AES_FDBCK1; // Offset: 0x54
    uM2L31_CRYPTO_CRYPTO_AES_FDBCK2 M2L31_CRYPTO_CRYPTO_AES_FDBCK2; // Offset: 0x58
    uM2L31_CRYPTO_CRYPTO_AES_FDBCK3 M2L31_CRYPTO_CRYPTO_AES_FDBCK3; // Offset: 0x5c
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
    uM2L31_CRYPTO_CRYPTO_AES_CTL M2L31_CRYPTO_CRYPTO_AES_CTL; // Offset: 0x100
    uM2L31_CRYPTO_CRYPTO_AES_STS M2L31_CRYPTO_CRYPTO_AES_STS; // Offset: 0x104
    uM2L31_CRYPTO_CRYPTO_AES_DATIN M2L31_CRYPTO_CRYPTO_AES_DATIN; // Offset: 0x108
    uM2L31_CRYPTO_CRYPTO_AES_DATOUT M2L31_CRYPTO_CRYPTO_AES_DATOUT; // Offset: 0x10c
    uM2L31_CRYPTO_CRYPTO_AES_KEY0 M2L31_CRYPTO_CRYPTO_AES_KEY0; // Offset: 0x110
    uM2L31_CRYPTO_CRYPTO_AES_KEY1 M2L31_CRYPTO_CRYPTO_AES_KEY1; // Offset: 0x114
    uM2L31_CRYPTO_CRYPTO_AES_KEY2 M2L31_CRYPTO_CRYPTO_AES_KEY2; // Offset: 0x118
    uM2L31_CRYPTO_CRYPTO_AES_KEY3 M2L31_CRYPTO_CRYPTO_AES_KEY3; // Offset: 0x11c
    uM2L31_CRYPTO_CRYPTO_AES_KEY4 M2L31_CRYPTO_CRYPTO_AES_KEY4; // Offset: 0x120
    uM2L31_CRYPTO_CRYPTO_AES_KEY5 M2L31_CRYPTO_CRYPTO_AES_KEY5; // Offset: 0x124
    uM2L31_CRYPTO_CRYPTO_AES_KEY6 M2L31_CRYPTO_CRYPTO_AES_KEY6; // Offset: 0x128
    uM2L31_CRYPTO_CRYPTO_AES_KEY7 M2L31_CRYPTO_CRYPTO_AES_KEY7; // Offset: 0x12c
    uM2L31_CRYPTO_CRYPTO_AES_IV0 M2L31_CRYPTO_CRYPTO_AES_IV0; // Offset: 0x130
    uM2L31_CRYPTO_CRYPTO_AES_IV1 M2L31_CRYPTO_CRYPTO_AES_IV1; // Offset: 0x134
    uM2L31_CRYPTO_CRYPTO_AES_IV2 M2L31_CRYPTO_CRYPTO_AES_IV2; // Offset: 0x138
    uM2L31_CRYPTO_CRYPTO_AES_IV3 M2L31_CRYPTO_CRYPTO_AES_IV3; // Offset: 0x13c
    uM2L31_CRYPTO_CRYPTO_AES_SADDR M2L31_CRYPTO_CRYPTO_AES_SADDR; // Offset: 0x140
    uM2L31_CRYPTO_CRYPTO_AES_DADDR M2L31_CRYPTO_CRYPTO_AES_DADDR; // Offset: 0x144
    uM2L31_CRYPTO_CRYPTO_AES_CNT M2L31_CRYPTO_CRYPTO_AES_CNT; // Offset: 0x148
} sM2L31_CRYPTO;

