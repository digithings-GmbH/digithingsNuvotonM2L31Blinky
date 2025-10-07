// Base Addres of NVIC = 0xE000E100

#define M2L31_NVIC_NVIC_ISER0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SETENA : 32;
} sM2L31_NVIC_NVIC_ISER0;

typedef union {
    sM2L31_NVIC_NVIC_ISER0 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ISER0;

#define M2L31_NVIC_NVIC_ISER1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SETENA : 32;
} sM2L31_NVIC_NVIC_ISER1;

typedef union {
    sM2L31_NVIC_NVIC_ISER1 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ISER1;

#define M2L31_NVIC_NVIC_ISER2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SETENA : 32;
} sM2L31_NVIC_NVIC_ISER2;

typedef union {
    sM2L31_NVIC_NVIC_ISER2 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ISER2;

#define M2L31_NVIC_NVIC_ISER3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SETENA : 32;
} sM2L31_NVIC_NVIC_ISER3;

typedef union {
    sM2L31_NVIC_NVIC_ISER3 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ISER3;

#define M2L31_NVIC_NVIC_ISER4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SETENA : 32;
} sM2L31_NVIC_NVIC_ISER4;

typedef union {
    sM2L31_NVIC_NVIC_ISER4 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ISER4;

#define M2L31_NVIC_NVIC_ICER0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CALENA : 32;
} sM2L31_NVIC_NVIC_ICER0;

typedef union {
    sM2L31_NVIC_NVIC_ICER0 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ICER0;

#define M2L31_NVIC_NVIC_ICER1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CALENA : 32;
} sM2L31_NVIC_NVIC_ICER1;

typedef union {
    sM2L31_NVIC_NVIC_ICER1 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ICER1;

#define M2L31_NVIC_NVIC_ICER2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CALENA : 32;
} sM2L31_NVIC_NVIC_ICER2;

typedef union {
    sM2L31_NVIC_NVIC_ICER2 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ICER2;

#define M2L31_NVIC_NVIC_ICER3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CALENA : 32;
} sM2L31_NVIC_NVIC_ICER3;

typedef union {
    sM2L31_NVIC_NVIC_ICER3 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ICER3;

#define M2L31_NVIC_NVIC_ICER4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CALENA : 32;
} sM2L31_NVIC_NVIC_ICER4;

typedef union {
    sM2L31_NVIC_NVIC_ICER4 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ICER4;

#define M2L31_NVIC_NVIC_ISPR0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SETPEND : 32;
} sM2L31_NVIC_NVIC_ISPR0;

typedef union {
    sM2L31_NVIC_NVIC_ISPR0 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ISPR0;

#define M2L31_NVIC_NVIC_ISPR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SETPEND : 32;
} sM2L31_NVIC_NVIC_ISPR1;

typedef union {
    sM2L31_NVIC_NVIC_ISPR1 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ISPR1;

#define M2L31_NVIC_NVIC_ISPR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SETPEND : 32;
} sM2L31_NVIC_NVIC_ISPR2;

typedef union {
    sM2L31_NVIC_NVIC_ISPR2 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ISPR2;

#define M2L31_NVIC_NVIC_ISPR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SETPEND : 32;
} sM2L31_NVIC_NVIC_ISPR3;

typedef union {
    sM2L31_NVIC_NVIC_ISPR3 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ISPR3;

#define M2L31_NVIC_NVIC_ISPR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SETPEND : 32;
} sM2L31_NVIC_NVIC_ISPR4;

typedef union {
    sM2L31_NVIC_NVIC_ISPR4 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ISPR4;

#define M2L31_NVIC_NVIC_ICPR0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CALPEND : 32;
} sM2L31_NVIC_NVIC_ICPR0;

typedef union {
    sM2L31_NVIC_NVIC_ICPR0 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ICPR0;

#define M2L31_NVIC_NVIC_ICPR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CALPEND : 32;
} sM2L31_NVIC_NVIC_ICPR1;

typedef union {
    sM2L31_NVIC_NVIC_ICPR1 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ICPR1;

#define M2L31_NVIC_NVIC_ICPR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CALPEND : 32;
} sM2L31_NVIC_NVIC_ICPR2;

typedef union {
    sM2L31_NVIC_NVIC_ICPR2 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ICPR2;

#define M2L31_NVIC_NVIC_ICPR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CALPEND : 32;
} sM2L31_NVIC_NVIC_ICPR3;

typedef union {
    sM2L31_NVIC_NVIC_ICPR3 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ICPR3;

#define M2L31_NVIC_NVIC_ICPR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CALPEND : 32;
} sM2L31_NVIC_NVIC_ICPR4;

typedef union {
    sM2L31_NVIC_NVIC_ICPR4 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_ICPR4;

#define M2L31_NVIC_NVIC_IABR0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ACTIVE : 32;
} sM2L31_NVIC_NVIC_IABR0;

typedef union {
    sM2L31_NVIC_NVIC_IABR0 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IABR0;

#define M2L31_NVIC_NVIC_IABR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ACTIVE : 32;
} sM2L31_NVIC_NVIC_IABR1;

typedef union {
    sM2L31_NVIC_NVIC_IABR1 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IABR1;

#define M2L31_NVIC_NVIC_IABR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ACTIVE : 32;
} sM2L31_NVIC_NVIC_IABR2;

typedef union {
    sM2L31_NVIC_NVIC_IABR2 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IABR2;

#define M2L31_NVIC_NVIC_IABR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ACTIVE : 32;
} sM2L31_NVIC_NVIC_IABR3;

typedef union {
    sM2L31_NVIC_NVIC_IABR3 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IABR3;

#define M2L31_NVIC_NVIC_IABR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ACTIVE : 32;
} sM2L31_NVIC_NVIC_IABR4;

typedef union {
    sM2L31_NVIC_NVIC_IABR4 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IABR4;

#define M2L31_NVIC_NVIC_IPR0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 6;
    unsigned long PRI_4n_0 : 2;
    unsigned long Res1 : 6;
    unsigned long PRI_4n_1 : 2;
    unsigned long Res2 : 6;
    unsigned long PRI_4n_2 : 2;
    unsigned long Res3 : 6;
    unsigned long PRI_4n_3 : 2;
} sM2L31_NVIC_NVIC_IPR0;

typedef union {
    sM2L31_NVIC_NVIC_IPR0 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR0;

#define M2L31_NVIC_NVIC_IPR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR1;

typedef union {
    sM2L31_NVIC_NVIC_IPR1 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR1;

#define M2L31_NVIC_NVIC_IPR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR2;

typedef union {
    sM2L31_NVIC_NVIC_IPR2 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR2;

#define M2L31_NVIC_NVIC_IPR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR3;

typedef union {
    sM2L31_NVIC_NVIC_IPR3 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR3;

#define M2L31_NVIC_NVIC_IPR4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR4;

typedef union {
    sM2L31_NVIC_NVIC_IPR4 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR4;

#define M2L31_NVIC_NVIC_IPR5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR5;

typedef union {
    sM2L31_NVIC_NVIC_IPR5 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR5;

#define M2L31_NVIC_NVIC_IPR6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR6;

typedef union {
    sM2L31_NVIC_NVIC_IPR6 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR6;

#define M2L31_NVIC_NVIC_IPR7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR7;

typedef union {
    sM2L31_NVIC_NVIC_IPR7 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR7;

#define M2L31_NVIC_NVIC_IPR8_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR8;

typedef union {
    sM2L31_NVIC_NVIC_IPR8 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR8;

#define M2L31_NVIC_NVIC_IPR9_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR9;

typedef union {
    sM2L31_NVIC_NVIC_IPR9 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR9;

#define M2L31_NVIC_NVIC_IPR10_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR10;

typedef union {
    sM2L31_NVIC_NVIC_IPR10 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR10;

#define M2L31_NVIC_NVIC_IPR11_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR11;

typedef union {
    sM2L31_NVIC_NVIC_IPR11 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR11;

#define M2L31_NVIC_NVIC_IPR12_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR12;

typedef union {
    sM2L31_NVIC_NVIC_IPR12 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR12;

#define M2L31_NVIC_NVIC_IPR13_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR13;

typedef union {
    sM2L31_NVIC_NVIC_IPR13 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR13;

#define M2L31_NVIC_NVIC_IPR14_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR14;

typedef union {
    sM2L31_NVIC_NVIC_IPR14 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR14;

#define M2L31_NVIC_NVIC_IPR15_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR15;

typedef union {
    sM2L31_NVIC_NVIC_IPR15 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR15;

#define M2L31_NVIC_NVIC_IPR16_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR16;

typedef union {
    sM2L31_NVIC_NVIC_IPR16 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR16;

#define M2L31_NVIC_NVIC_IPR17_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR17;

typedef union {
    sM2L31_NVIC_NVIC_IPR17 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR17;

#define M2L31_NVIC_NVIC_IPR18_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR18;

typedef union {
    sM2L31_NVIC_NVIC_IPR18 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR18;

#define M2L31_NVIC_NVIC_IPR19_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR19;

typedef union {
    sM2L31_NVIC_NVIC_IPR19 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR19;

#define M2L31_NVIC_NVIC_IPR20_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR20;

typedef union {
    sM2L31_NVIC_NVIC_IPR20 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR20;

#define M2L31_NVIC_NVIC_IPR21_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR21;

typedef union {
    sM2L31_NVIC_NVIC_IPR21 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR21;

#define M2L31_NVIC_NVIC_IPR22_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR22;

typedef union {
    sM2L31_NVIC_NVIC_IPR22 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR22;

#define M2L31_NVIC_NVIC_IPR23_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR23;

typedef union {
    sM2L31_NVIC_NVIC_IPR23 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR23;

#define M2L31_NVIC_NVIC_IPR24_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR24;

typedef union {
    sM2L31_NVIC_NVIC_IPR24 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR24;

#define M2L31_NVIC_NVIC_IPR25_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR25;

typedef union {
    sM2L31_NVIC_NVIC_IPR25 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR25;

#define M2L31_NVIC_NVIC_IPR26_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR26;

typedef union {
    sM2L31_NVIC_NVIC_IPR26 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR26;

#define M2L31_NVIC_NVIC_IPR27_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR27;

typedef union {
    sM2L31_NVIC_NVIC_IPR27 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR27;

#define M2L31_NVIC_NVIC_IPR28_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR28;

typedef union {
    sM2L31_NVIC_NVIC_IPR28 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR28;

#define M2L31_NVIC_NVIC_IPR29_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR29;

typedef union {
    sM2L31_NVIC_NVIC_IPR29 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR29;

#define M2L31_NVIC_NVIC_IPR30_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR30;

typedef union {
    sM2L31_NVIC_NVIC_IPR30 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR30;

#define M2L31_NVIC_NVIC_IPR31_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR31;

typedef union {
    sM2L31_NVIC_NVIC_IPR31 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR31;

#define M2L31_NVIC_NVIC_IPR32_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR32;

typedef union {
    sM2L31_NVIC_NVIC_IPR32 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR32;

#define M2L31_NVIC_NVIC_IPR33_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR33;

typedef union {
    sM2L31_NVIC_NVIC_IPR33 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR33;

#define M2L31_NVIC_NVIC_IPR34_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR34;

typedef union {
    sM2L31_NVIC_NVIC_IPR34 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR34;

#define M2L31_NVIC_NVIC_IPR35_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_NVIC_NVIC_IPR35;

typedef union {
    sM2L31_NVIC_NVIC_IPR35 Bit;
    unsigned long  All;
} uM2L31_NVIC_NVIC_IPR35;

#define M2L31_NVIC_STIR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long INTID : 9;
    unsigned long Res0 : 23;
} sM2L31_NVIC_STIR;

typedef union {
    sM2L31_NVIC_STIR Bit;
    unsigned long  All;
} uM2L31_NVIC_STIR;

typedef struct {
    uM2L31_NVIC_NVIC_ISER0 M2L31_NVIC_NVIC_ISER0; // Offset: 0x0
    uM2L31_NVIC_NVIC_ISER1 M2L31_NVIC_NVIC_ISER1; // Offset: 0x4
    uM2L31_NVIC_NVIC_ISER2 M2L31_NVIC_NVIC_ISER2; // Offset: 0x8
    uM2L31_NVIC_NVIC_ISER3 M2L31_NVIC_NVIC_ISER3; // Offset: 0xc
    uM2L31_NVIC_NVIC_ISER4 M2L31_NVIC_NVIC_ISER4; // Offset: 0x10
    unsigned long Reserved0;
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
    uM2L31_NVIC_NVIC_ICER0 M2L31_NVIC_NVIC_ICER0; // Offset: 0x80
    uM2L31_NVIC_NVIC_ICER1 M2L31_NVIC_NVIC_ICER1; // Offset: 0x84
    uM2L31_NVIC_NVIC_ICER2 M2L31_NVIC_NVIC_ICER2; // Offset: 0x88
    uM2L31_NVIC_NVIC_ICER3 M2L31_NVIC_NVIC_ICER3; // Offset: 0x8c
    uM2L31_NVIC_NVIC_ICER4 M2L31_NVIC_NVIC_ICER4; // Offset: 0x90
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
    unsigned long Reserved48;
    unsigned long Reserved49;
    unsigned long Reserved50;
    unsigned long Reserved51;
    unsigned long Reserved52;
    unsigned long Reserved53;
    uM2L31_NVIC_NVIC_ISPR0 M2L31_NVIC_NVIC_ISPR0; // Offset: 0x100
    uM2L31_NVIC_NVIC_ISPR1 M2L31_NVIC_NVIC_ISPR1; // Offset: 0x104
    uM2L31_NVIC_NVIC_ISPR2 M2L31_NVIC_NVIC_ISPR2; // Offset: 0x108
    uM2L31_NVIC_NVIC_ISPR3 M2L31_NVIC_NVIC_ISPR3; // Offset: 0x10c
    uM2L31_NVIC_NVIC_ISPR4 M2L31_NVIC_NVIC_ISPR4; // Offset: 0x110
    unsigned long Reserved54;
    unsigned long Reserved55;
    unsigned long Reserved56;
    unsigned long Reserved57;
    unsigned long Reserved58;
    unsigned long Reserved59;
    unsigned long Reserved60;
    unsigned long Reserved61;
    unsigned long Reserved62;
    unsigned long Reserved63;
    unsigned long Reserved64;
    unsigned long Reserved65;
    unsigned long Reserved66;
    unsigned long Reserved67;
    unsigned long Reserved68;
    unsigned long Reserved69;
    unsigned long Reserved70;
    unsigned long Reserved71;
    unsigned long Reserved72;
    unsigned long Reserved73;
    unsigned long Reserved74;
    unsigned long Reserved75;
    unsigned long Reserved76;
    unsigned long Reserved77;
    unsigned long Reserved78;
    unsigned long Reserved79;
    unsigned long Reserved80;
    uM2L31_NVIC_NVIC_ICPR0 M2L31_NVIC_NVIC_ICPR0; // Offset: 0x180
    uM2L31_NVIC_NVIC_ICPR1 M2L31_NVIC_NVIC_ICPR1; // Offset: 0x184
    uM2L31_NVIC_NVIC_ICPR2 M2L31_NVIC_NVIC_ICPR2; // Offset: 0x188
    uM2L31_NVIC_NVIC_ICPR3 M2L31_NVIC_NVIC_ICPR3; // Offset: 0x18c
    uM2L31_NVIC_NVIC_ICPR4 M2L31_NVIC_NVIC_ICPR4; // Offset: 0x190
    unsigned long Reserved81;
    unsigned long Reserved82;
    unsigned long Reserved83;
    unsigned long Reserved84;
    unsigned long Reserved85;
    unsigned long Reserved86;
    unsigned long Reserved87;
    unsigned long Reserved88;
    unsigned long Reserved89;
    unsigned long Reserved90;
    unsigned long Reserved91;
    unsigned long Reserved92;
    unsigned long Reserved93;
    unsigned long Reserved94;
    unsigned long Reserved95;
    unsigned long Reserved96;
    unsigned long Reserved97;
    unsigned long Reserved98;
    unsigned long Reserved99;
    unsigned long Reserved100;
    unsigned long Reserved101;
    unsigned long Reserved102;
    unsigned long Reserved103;
    unsigned long Reserved104;
    unsigned long Reserved105;
    unsigned long Reserved106;
    unsigned long Reserved107;
    uM2L31_NVIC_NVIC_IABR0 M2L31_NVIC_NVIC_IABR0; // Offset: 0x200
    uM2L31_NVIC_NVIC_IABR1 M2L31_NVIC_NVIC_IABR1; // Offset: 0x204
    uM2L31_NVIC_NVIC_IABR2 M2L31_NVIC_NVIC_IABR2; // Offset: 0x208
    uM2L31_NVIC_NVIC_IABR3 M2L31_NVIC_NVIC_IABR3; // Offset: 0x20c
    uM2L31_NVIC_NVIC_IABR4 M2L31_NVIC_NVIC_IABR4; // Offset: 0x210
    unsigned long Reserved108;
    unsigned long Reserved109;
    unsigned long Reserved110;
    unsigned long Reserved111;
    unsigned long Reserved112;
    unsigned long Reserved113;
    unsigned long Reserved114;
    unsigned long Reserved115;
    unsigned long Reserved116;
    unsigned long Reserved117;
    unsigned long Reserved118;
    unsigned long Reserved119;
    unsigned long Reserved120;
    unsigned long Reserved121;
    unsigned long Reserved122;
    unsigned long Reserved123;
    unsigned long Reserved124;
    unsigned long Reserved125;
    unsigned long Reserved126;
    unsigned long Reserved127;
    unsigned long Reserved128;
    unsigned long Reserved129;
    unsigned long Reserved130;
    unsigned long Reserved131;
    unsigned long Reserved132;
    unsigned long Reserved133;
    unsigned long Reserved134;
    unsigned long Reserved135;
    unsigned long Reserved136;
    unsigned long Reserved137;
    unsigned long Reserved138;
    unsigned long Reserved139;
    unsigned long Reserved140;
    unsigned long Reserved141;
    unsigned long Reserved142;
    unsigned long Reserved143;
    unsigned long Reserved144;
    unsigned long Reserved145;
    unsigned long Reserved146;
    unsigned long Reserved147;
    unsigned long Reserved148;
    unsigned long Reserved149;
    unsigned long Reserved150;
    unsigned long Reserved151;
    unsigned long Reserved152;
    unsigned long Reserved153;
    unsigned long Reserved154;
    unsigned long Reserved155;
    unsigned long Reserved156;
    unsigned long Reserved157;
    unsigned long Reserved158;
    unsigned long Reserved159;
    unsigned long Reserved160;
    unsigned long Reserved161;
    unsigned long Reserved162;
    unsigned long Reserved163;
    unsigned long Reserved164;
    unsigned long Reserved165;
    unsigned long Reserved166;
    uM2L31_NVIC_NVIC_IPR0 M2L31_NVIC_NVIC_IPR0; // Offset: 0x300
    uM2L31_NVIC_NVIC_IPR1 M2L31_NVIC_NVIC_IPR1; // Offset: 0x304
    uM2L31_NVIC_NVIC_IPR2 M2L31_NVIC_NVIC_IPR2; // Offset: 0x308
    uM2L31_NVIC_NVIC_IPR3 M2L31_NVIC_NVIC_IPR3; // Offset: 0x30c
    uM2L31_NVIC_NVIC_IPR4 M2L31_NVIC_NVIC_IPR4; // Offset: 0x310
    uM2L31_NVIC_NVIC_IPR5 M2L31_NVIC_NVIC_IPR5; // Offset: 0x314
    uM2L31_NVIC_NVIC_IPR6 M2L31_NVIC_NVIC_IPR6; // Offset: 0x318
    uM2L31_NVIC_NVIC_IPR7 M2L31_NVIC_NVIC_IPR7; // Offset: 0x31c
    uM2L31_NVIC_NVIC_IPR8 M2L31_NVIC_NVIC_IPR8; // Offset: 0x320
    uM2L31_NVIC_NVIC_IPR9 M2L31_NVIC_NVIC_IPR9; // Offset: 0x324
    uM2L31_NVIC_NVIC_IPR10 M2L31_NVIC_NVIC_IPR10; // Offset: 0x328
    uM2L31_NVIC_NVIC_IPR11 M2L31_NVIC_NVIC_IPR11; // Offset: 0x32c
    uM2L31_NVIC_NVIC_IPR12 M2L31_NVIC_NVIC_IPR12; // Offset: 0x330
    uM2L31_NVIC_NVIC_IPR13 M2L31_NVIC_NVIC_IPR13; // Offset: 0x334
    uM2L31_NVIC_NVIC_IPR14 M2L31_NVIC_NVIC_IPR14; // Offset: 0x338
    uM2L31_NVIC_NVIC_IPR15 M2L31_NVIC_NVIC_IPR15; // Offset: 0x33c
    uM2L31_NVIC_NVIC_IPR16 M2L31_NVIC_NVIC_IPR16; // Offset: 0x340
    uM2L31_NVIC_NVIC_IPR17 M2L31_NVIC_NVIC_IPR17; // Offset: 0x344
    uM2L31_NVIC_NVIC_IPR18 M2L31_NVIC_NVIC_IPR18; // Offset: 0x348
    uM2L31_NVIC_NVIC_IPR19 M2L31_NVIC_NVIC_IPR19; // Offset: 0x34c
    uM2L31_NVIC_NVIC_IPR20 M2L31_NVIC_NVIC_IPR20; // Offset: 0x350
    uM2L31_NVIC_NVIC_IPR21 M2L31_NVIC_NVIC_IPR21; // Offset: 0x354
    uM2L31_NVIC_NVIC_IPR22 M2L31_NVIC_NVIC_IPR22; // Offset: 0x358
    uM2L31_NVIC_NVIC_IPR23 M2L31_NVIC_NVIC_IPR23; // Offset: 0x35c
    uM2L31_NVIC_NVIC_IPR24 M2L31_NVIC_NVIC_IPR24; // Offset: 0x360
    uM2L31_NVIC_NVIC_IPR25 M2L31_NVIC_NVIC_IPR25; // Offset: 0x364
    uM2L31_NVIC_NVIC_IPR26 M2L31_NVIC_NVIC_IPR26; // Offset: 0x368
    uM2L31_NVIC_NVIC_IPR27 M2L31_NVIC_NVIC_IPR27; // Offset: 0x36c
    uM2L31_NVIC_NVIC_IPR28 M2L31_NVIC_NVIC_IPR28; // Offset: 0x370
    uM2L31_NVIC_NVIC_IPR29 M2L31_NVIC_NVIC_IPR29; // Offset: 0x374
    uM2L31_NVIC_NVIC_IPR30 M2L31_NVIC_NVIC_IPR30; // Offset: 0x378
    uM2L31_NVIC_NVIC_IPR31 M2L31_NVIC_NVIC_IPR31; // Offset: 0x37c
    uM2L31_NVIC_NVIC_IPR32 M2L31_NVIC_NVIC_IPR32; // Offset: 0x380
    uM2L31_NVIC_NVIC_IPR33 M2L31_NVIC_NVIC_IPR33; // Offset: 0x384
    uM2L31_NVIC_NVIC_IPR34 M2L31_NVIC_NVIC_IPR34; // Offset: 0x388
    uM2L31_NVIC_NVIC_IPR35 M2L31_NVIC_NVIC_IPR35; // Offset: 0x38c
    unsigned long Reserved167;
    unsigned long Reserved168;
    unsigned long Reserved169;
    unsigned long Reserved170;
    unsigned long Reserved171;
    unsigned long Reserved172;
    unsigned long Reserved173;
    unsigned long Reserved174;
    unsigned long Reserved175;
    unsigned long Reserved176;
    unsigned long Reserved177;
    unsigned long Reserved178;
    unsigned long Reserved179;
    unsigned long Reserved180;
    unsigned long Reserved181;
    unsigned long Reserved182;
    unsigned long Reserved183;
    unsigned long Reserved184;
    unsigned long Reserved185;
    unsigned long Reserved186;
    unsigned long Reserved187;
    unsigned long Reserved188;
    unsigned long Reserved189;
    unsigned long Reserved190;
    unsigned long Reserved191;
    unsigned long Reserved192;
    unsigned long Reserved193;
    unsigned long Reserved194;
    unsigned long Reserved195;
    unsigned long Reserved196;
    unsigned long Reserved197;
    unsigned long Reserved198;
    unsigned long Reserved199;
    unsigned long Reserved200;
    unsigned long Reserved201;
    unsigned long Reserved202;
    unsigned long Reserved203;
    unsigned long Reserved204;
    unsigned long Reserved205;
    unsigned long Reserved206;
    unsigned long Reserved207;
    unsigned long Reserved208;
    unsigned long Reserved209;
    unsigned long Reserved210;
    unsigned long Reserved211;
    unsigned long Reserved212;
    unsigned long Reserved213;
    unsigned long Reserved214;
    unsigned long Reserved215;
    unsigned long Reserved216;
    unsigned long Reserved217;
    unsigned long Reserved218;
    unsigned long Reserved219;
    unsigned long Reserved220;
    unsigned long Reserved221;
    unsigned long Reserved222;
    unsigned long Reserved223;
    unsigned long Reserved224;
    unsigned long Reserved225;
    unsigned long Reserved226;
    unsigned long Reserved227;
    unsigned long Reserved228;
    unsigned long Reserved229;
    unsigned long Reserved230;
    unsigned long Reserved231;
    unsigned long Reserved232;
    unsigned long Reserved233;
    unsigned long Reserved234;
    unsigned long Reserved235;
    unsigned long Reserved236;
    unsigned long Reserved237;
    unsigned long Reserved238;
    unsigned long Reserved239;
    unsigned long Reserved240;
    unsigned long Reserved241;
    unsigned long Reserved242;
    unsigned long Reserved243;
    unsigned long Reserved244;
    unsigned long Reserved245;
    unsigned long Reserved246;
    unsigned long Reserved247;
    unsigned long Reserved248;
    unsigned long Reserved249;
    unsigned long Reserved250;
    unsigned long Reserved251;
    unsigned long Reserved252;
    unsigned long Reserved253;
    unsigned long Reserved254;
    unsigned long Reserved255;
    unsigned long Reserved256;
    unsigned long Reserved257;
    unsigned long Reserved258;
    unsigned long Reserved259;
    unsigned long Reserved260;
    unsigned long Reserved261;
    unsigned long Reserved262;
    unsigned long Reserved263;
    unsigned long Reserved264;
    unsigned long Reserved265;
    unsigned long Reserved266;
    unsigned long Reserved267;
    unsigned long Reserved268;
    unsigned long Reserved269;
    unsigned long Reserved270;
    unsigned long Reserved271;
    unsigned long Reserved272;
    unsigned long Reserved273;
    unsigned long Reserved274;
    unsigned long Reserved275;
    unsigned long Reserved276;
    unsigned long Reserved277;
    unsigned long Reserved278;
    unsigned long Reserved279;
    unsigned long Reserved280;
    unsigned long Reserved281;
    unsigned long Reserved282;
    unsigned long Reserved283;
    unsigned long Reserved284;
    unsigned long Reserved285;
    unsigned long Reserved286;
    unsigned long Reserved287;
    unsigned long Reserved288;
    unsigned long Reserved289;
    unsigned long Reserved290;
    unsigned long Reserved291;
    unsigned long Reserved292;
    unsigned long Reserved293;
    unsigned long Reserved294;
    unsigned long Reserved295;
    unsigned long Reserved296;
    unsigned long Reserved297;
    unsigned long Reserved298;
    unsigned long Reserved299;
    unsigned long Reserved300;
    unsigned long Reserved301;
    unsigned long Reserved302;
    unsigned long Reserved303;
    unsigned long Reserved304;
    unsigned long Reserved305;
    unsigned long Reserved306;
    unsigned long Reserved307;
    unsigned long Reserved308;
    unsigned long Reserved309;
    unsigned long Reserved310;
    unsigned long Reserved311;
    unsigned long Reserved312;
    unsigned long Reserved313;
    unsigned long Reserved314;
    unsigned long Reserved315;
    unsigned long Reserved316;
    unsigned long Reserved317;
    unsigned long Reserved318;
    unsigned long Reserved319;
    unsigned long Reserved320;
    unsigned long Reserved321;
    unsigned long Reserved322;
    unsigned long Reserved323;
    unsigned long Reserved324;
    unsigned long Reserved325;
    unsigned long Reserved326;
    unsigned long Reserved327;
    unsigned long Reserved328;
    unsigned long Reserved329;
    unsigned long Reserved330;
    unsigned long Reserved331;
    unsigned long Reserved332;
    unsigned long Reserved333;
    unsigned long Reserved334;
    unsigned long Reserved335;
    unsigned long Reserved336;
    unsigned long Reserved337;
    unsigned long Reserved338;
    unsigned long Reserved339;
    unsigned long Reserved340;
    unsigned long Reserved341;
    unsigned long Reserved342;
    unsigned long Reserved343;
    unsigned long Reserved344;
    unsigned long Reserved345;
    unsigned long Reserved346;
    unsigned long Reserved347;
    unsigned long Reserved348;
    unsigned long Reserved349;
    unsigned long Reserved350;
    unsigned long Reserved351;
    unsigned long Reserved352;
    unsigned long Reserved353;
    unsigned long Reserved354;
    unsigned long Reserved355;
    unsigned long Reserved356;
    unsigned long Reserved357;
    unsigned long Reserved358;
    unsigned long Reserved359;
    unsigned long Reserved360;
    unsigned long Reserved361;
    unsigned long Reserved362;
    unsigned long Reserved363;
    unsigned long Reserved364;
    unsigned long Reserved365;
    unsigned long Reserved366;
    unsigned long Reserved367;
    unsigned long Reserved368;
    unsigned long Reserved369;
    unsigned long Reserved370;
    unsigned long Reserved371;
    unsigned long Reserved372;
    unsigned long Reserved373;
    unsigned long Reserved374;
    unsigned long Reserved375;
    unsigned long Reserved376;
    unsigned long Reserved377;
    unsigned long Reserved378;
    unsigned long Reserved379;
    unsigned long Reserved380;
    unsigned long Reserved381;
    unsigned long Reserved382;
    unsigned long Reserved383;
    unsigned long Reserved384;
    unsigned long Reserved385;
    unsigned long Reserved386;
    unsigned long Reserved387;
    unsigned long Reserved388;
    unsigned long Reserved389;
    unsigned long Reserved390;
    unsigned long Reserved391;
    unsigned long Reserved392;
    unsigned long Reserved393;
    unsigned long Reserved394;
    unsigned long Reserved395;
    unsigned long Reserved396;
    unsigned long Reserved397;
    unsigned long Reserved398;
    unsigned long Reserved399;
    unsigned long Reserved400;
    unsigned long Reserved401;
    unsigned long Reserved402;
    unsigned long Reserved403;
    unsigned long Reserved404;
    unsigned long Reserved405;
    unsigned long Reserved406;
    unsigned long Reserved407;
    unsigned long Reserved408;
    unsigned long Reserved409;
    unsigned long Reserved410;
    unsigned long Reserved411;
    unsigned long Reserved412;
    unsigned long Reserved413;
    unsigned long Reserved414;
    unsigned long Reserved415;
    unsigned long Reserved416;
    unsigned long Reserved417;
    unsigned long Reserved418;
    unsigned long Reserved419;
    unsigned long Reserved420;
    unsigned long Reserved421;
    unsigned long Reserved422;
    unsigned long Reserved423;
    unsigned long Reserved424;
    unsigned long Reserved425;
    unsigned long Reserved426;
    unsigned long Reserved427;
    unsigned long Reserved428;
    unsigned long Reserved429;
    unsigned long Reserved430;
    unsigned long Reserved431;
    unsigned long Reserved432;
    unsigned long Reserved433;
    unsigned long Reserved434;
    unsigned long Reserved435;
    unsigned long Reserved436;
    unsigned long Reserved437;
    unsigned long Reserved438;
    unsigned long Reserved439;
    unsigned long Reserved440;
    unsigned long Reserved441;
    unsigned long Reserved442;
    unsigned long Reserved443;
    unsigned long Reserved444;
    unsigned long Reserved445;
    unsigned long Reserved446;
    unsigned long Reserved447;
    unsigned long Reserved448;
    unsigned long Reserved449;
    unsigned long Reserved450;
    unsigned long Reserved451;
    unsigned long Reserved452;
    unsigned long Reserved453;
    unsigned long Reserved454;
    unsigned long Reserved455;
    unsigned long Reserved456;
    unsigned long Reserved457;
    unsigned long Reserved458;
    unsigned long Reserved459;
    unsigned long Reserved460;
    unsigned long Reserved461;
    unsigned long Reserved462;
    unsigned long Reserved463;
    unsigned long Reserved464;
    unsigned long Reserved465;
    unsigned long Reserved466;
    unsigned long Reserved467;
    unsigned long Reserved468;
    unsigned long Reserved469;
    unsigned long Reserved470;
    unsigned long Reserved471;
    unsigned long Reserved472;
    unsigned long Reserved473;
    unsigned long Reserved474;
    unsigned long Reserved475;
    unsigned long Reserved476;
    unsigned long Reserved477;
    unsigned long Reserved478;
    unsigned long Reserved479;
    unsigned long Reserved480;
    unsigned long Reserved481;
    unsigned long Reserved482;
    unsigned long Reserved483;
    unsigned long Reserved484;
    unsigned long Reserved485;
    unsigned long Reserved486;
    unsigned long Reserved487;
    unsigned long Reserved488;
    unsigned long Reserved489;
    unsigned long Reserved490;
    unsigned long Reserved491;
    unsigned long Reserved492;
    unsigned long Reserved493;
    unsigned long Reserved494;
    unsigned long Reserved495;
    unsigned long Reserved496;
    unsigned long Reserved497;
    unsigned long Reserved498;
    unsigned long Reserved499;
    unsigned long Reserved500;
    unsigned long Reserved501;
    unsigned long Reserved502;
    unsigned long Reserved503;
    unsigned long Reserved504;
    unsigned long Reserved505;
    unsigned long Reserved506;
    unsigned long Reserved507;
    unsigned long Reserved508;
    unsigned long Reserved509;
    unsigned long Reserved510;
    unsigned long Reserved511;
    unsigned long Reserved512;
    unsigned long Reserved513;
    unsigned long Reserved514;
    unsigned long Reserved515;
    unsigned long Reserved516;
    unsigned long Reserved517;
    unsigned long Reserved518;
    unsigned long Reserved519;
    unsigned long Reserved520;
    unsigned long Reserved521;
    unsigned long Reserved522;
    unsigned long Reserved523;
    unsigned long Reserved524;
    unsigned long Reserved525;
    unsigned long Reserved526;
    unsigned long Reserved527;
    unsigned long Reserved528;
    unsigned long Reserved529;
    unsigned long Reserved530;
    unsigned long Reserved531;
    unsigned long Reserved532;
    unsigned long Reserved533;
    unsigned long Reserved534;
    unsigned long Reserved535;
    unsigned long Reserved536;
    unsigned long Reserved537;
    unsigned long Reserved538;
    unsigned long Reserved539;
    unsigned long Reserved540;
    unsigned long Reserved541;
    unsigned long Reserved542;
    unsigned long Reserved543;
    unsigned long Reserved544;
    unsigned long Reserved545;
    unsigned long Reserved546;
    unsigned long Reserved547;
    unsigned long Reserved548;
    unsigned long Reserved549;
    unsigned long Reserved550;
    unsigned long Reserved551;
    unsigned long Reserved552;
    unsigned long Reserved553;
    unsigned long Reserved554;
    unsigned long Reserved555;
    unsigned long Reserved556;
    unsigned long Reserved557;
    unsigned long Reserved558;
    unsigned long Reserved559;
    unsigned long Reserved560;
    unsigned long Reserved561;
    unsigned long Reserved562;
    unsigned long Reserved563;
    unsigned long Reserved564;
    unsigned long Reserved565;
    unsigned long Reserved566;
    unsigned long Reserved567;
    unsigned long Reserved568;
    unsigned long Reserved569;
    unsigned long Reserved570;
    unsigned long Reserved571;
    unsigned long Reserved572;
    unsigned long Reserved573;
    unsigned long Reserved574;
    unsigned long Reserved575;
    unsigned long Reserved576;
    unsigned long Reserved577;
    unsigned long Reserved578;
    unsigned long Reserved579;
    unsigned long Reserved580;
    unsigned long Reserved581;
    unsigned long Reserved582;
    unsigned long Reserved583;
    unsigned long Reserved584;
    unsigned long Reserved585;
    unsigned long Reserved586;
    unsigned long Reserved587;
    unsigned long Reserved588;
    unsigned long Reserved589;
    unsigned long Reserved590;
    unsigned long Reserved591;
    unsigned long Reserved592;
    unsigned long Reserved593;
    unsigned long Reserved594;
    unsigned long Reserved595;
    unsigned long Reserved596;
    unsigned long Reserved597;
    unsigned long Reserved598;
    unsigned long Reserved599;
    unsigned long Reserved600;
    unsigned long Reserved601;
    unsigned long Reserved602;
    unsigned long Reserved603;
    unsigned long Reserved604;
    unsigned long Reserved605;
    unsigned long Reserved606;
    unsigned long Reserved607;
    unsigned long Reserved608;
    unsigned long Reserved609;
    unsigned long Reserved610;
    unsigned long Reserved611;
    unsigned long Reserved612;
    unsigned long Reserved613;
    unsigned long Reserved614;
    unsigned long Reserved615;
    unsigned long Reserved616;
    unsigned long Reserved617;
    unsigned long Reserved618;
    unsigned long Reserved619;
    unsigned long Reserved620;
    unsigned long Reserved621;
    unsigned long Reserved622;
    unsigned long Reserved623;
    unsigned long Reserved624;
    unsigned long Reserved625;
    unsigned long Reserved626;
    unsigned long Reserved627;
    unsigned long Reserved628;
    unsigned long Reserved629;
    unsigned long Reserved630;
    unsigned long Reserved631;
    unsigned long Reserved632;
    unsigned long Reserved633;
    unsigned long Reserved634;
    unsigned long Reserved635;
    unsigned long Reserved636;
    unsigned long Reserved637;
    unsigned long Reserved638;
    unsigned long Reserved639;
    unsigned long Reserved640;
    unsigned long Reserved641;
    unsigned long Reserved642;
    unsigned long Reserved643;
    unsigned long Reserved644;
    unsigned long Reserved645;
    unsigned long Reserved646;
    unsigned long Reserved647;
    unsigned long Reserved648;
    unsigned long Reserved649;
    unsigned long Reserved650;
    unsigned long Reserved651;
    unsigned long Reserved652;
    unsigned long Reserved653;
    unsigned long Reserved654;
    unsigned long Reserved655;
    unsigned long Reserved656;
    unsigned long Reserved657;
    unsigned long Reserved658;
    unsigned long Reserved659;
    unsigned long Reserved660;
    unsigned long Reserved661;
    unsigned long Reserved662;
    unsigned long Reserved663;
    unsigned long Reserved664;
    unsigned long Reserved665;
    unsigned long Reserved666;
    unsigned long Reserved667;
    unsigned long Reserved668;
    unsigned long Reserved669;
    unsigned long Reserved670;
    unsigned long Reserved671;
    unsigned long Reserved672;
    unsigned long Reserved673;
    unsigned long Reserved674;
    unsigned long Reserved675;
    unsigned long Reserved676;
    unsigned long Reserved677;
    unsigned long Reserved678;
    unsigned long Reserved679;
    unsigned long Reserved680;
    unsigned long Reserved681;
    unsigned long Reserved682;
    unsigned long Reserved683;
    unsigned long Reserved684;
    unsigned long Reserved685;
    unsigned long Reserved686;
    unsigned long Reserved687;
    unsigned long Reserved688;
    unsigned long Reserved689;
    unsigned long Reserved690;
    unsigned long Reserved691;
    unsigned long Reserved692;
    unsigned long Reserved693;
    unsigned long Reserved694;
    unsigned long Reserved695;
    unsigned long Reserved696;
    unsigned long Reserved697;
    unsigned long Reserved698;
    unsigned long Reserved699;
    unsigned long Reserved700;
    unsigned long Reserved701;
    unsigned long Reserved702;
    unsigned long Reserved703;
    unsigned long Reserved704;
    unsigned long Reserved705;
    unsigned long Reserved706;
    unsigned long Reserved707;
    unsigned long Reserved708;
    unsigned long Reserved709;
    unsigned long Reserved710;
    unsigned long Reserved711;
    unsigned long Reserved712;
    unsigned long Reserved713;
    unsigned long Reserved714;
    unsigned long Reserved715;
    unsigned long Reserved716;
    unsigned long Reserved717;
    unsigned long Reserved718;
    unsigned long Reserved719;
    unsigned long Reserved720;
    unsigned long Reserved721;
    unsigned long Reserved722;
    unsigned long Reserved723;
    unsigned long Reserved724;
    unsigned long Reserved725;
    unsigned long Reserved726;
    unsigned long Reserved727;
    unsigned long Reserved728;
    unsigned long Reserved729;
    unsigned long Reserved730;
    unsigned long Reserved731;
    unsigned long Reserved732;
    unsigned long Reserved733;
    unsigned long Reserved734;
    unsigned long Reserved735;
    unsigned long Reserved736;
    unsigned long Reserved737;
    unsigned long Reserved738;
    unsigned long Reserved739;
    unsigned long Reserved740;
    unsigned long Reserved741;
    unsigned long Reserved742;
    unsigned long Reserved743;
    unsigned long Reserved744;
    unsigned long Reserved745;
    unsigned long Reserved746;
    unsigned long Reserved747;
    unsigned long Reserved748;
    unsigned long Reserved749;
    unsigned long Reserved750;
    unsigned long Reserved751;
    unsigned long Reserved752;
    unsigned long Reserved753;
    unsigned long Reserved754;
    unsigned long Reserved755;
    unsigned long Reserved756;
    unsigned long Reserved757;
    unsigned long Reserved758;
    unsigned long Reserved759;
    unsigned long Reserved760;
    unsigned long Reserved761;
    unsigned long Reserved762;
    unsigned long Reserved763;
    unsigned long Reserved764;
    unsigned long Reserved765;
    unsigned long Reserved766;
    unsigned long Reserved767;
    unsigned long Reserved768;
    unsigned long Reserved769;
    unsigned long Reserved770;
    unsigned long Reserved771;
    unsigned long Reserved772;
    unsigned long Reserved773;
    unsigned long Reserved774;
    unsigned long Reserved775;
    unsigned long Reserved776;
    unsigned long Reserved777;
    unsigned long Reserved778;
    unsigned long Reserved779;
    unsigned long Reserved780;
    unsigned long Reserved781;
    unsigned long Reserved782;
    unsigned long Reserved783;
    unsigned long Reserved784;
    unsigned long Reserved785;
    unsigned long Reserved786;
    unsigned long Reserved787;
    unsigned long Reserved788;
    unsigned long Reserved789;
    unsigned long Reserved790;
    unsigned long Reserved791;
    unsigned long Reserved792;
    unsigned long Reserved793;
    unsigned long Reserved794;
    unsigned long Reserved795;
    unsigned long Reserved796;
    unsigned long Reserved797;
    unsigned long Reserved798;
    unsigned long Reserved799;
    unsigned long Reserved800;
    unsigned long Reserved801;
    unsigned long Reserved802;
    unsigned long Reserved803;
    unsigned long Reserved804;
    unsigned long Reserved805;
    unsigned long Reserved806;
    unsigned long Reserved807;
    unsigned long Reserved808;
    unsigned long Reserved809;
    unsigned long Reserved810;
    unsigned long Reserved811;
    unsigned long Reserved812;
    unsigned long Reserved813;
    unsigned long Reserved814;
    unsigned long Reserved815;
    unsigned long Reserved816;
    unsigned long Reserved817;
    unsigned long Reserved818;
    unsigned long Reserved819;
    unsigned long Reserved820;
    unsigned long Reserved821;
    unsigned long Reserved822;
    unsigned long Reserved823;
    unsigned long Reserved824;
    unsigned long Reserved825;
    unsigned long Reserved826;
    unsigned long Reserved827;
    unsigned long Reserved828;
    unsigned long Reserved829;
    unsigned long Reserved830;
    unsigned long Reserved831;
    unsigned long Reserved832;
    unsigned long Reserved833;
    unsigned long Reserved834;
    uM2L31_NVIC_STIR M2L31_NVIC_STIR; // Offset: 0xe00
} sM2L31_NVIC;

