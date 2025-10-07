// Base Addres of PWM1 = 0x4005D000

#define M2L31_PWM1_PWM_CTL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CTRLDn : 1;
    unsigned long Res0 : 15;
    unsigned long IMMLDENn : 1;
    unsigned long Res1 : 13;
    unsigned long DBGHALT : 1;
    unsigned long DBGTRIOFF : 1;
} sM2L31_PWM1_PWM_CTL0;

typedef union {
    sM2L31_PWM1_PWM_CTL0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CTL0;

#define M2L31_PWM1_PWM_CTL1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTTYPE0 : 2;
    unsigned long Res0 : 2;
    unsigned long CNTTYPE2 : 2;
    unsigned long Res1 : 2;
    unsigned long CNTTYPE4 : 2;
    unsigned long Res2 : 14;
    unsigned long OUTMODEn : 3;
    unsigned long Res3 : 5;
} sM2L31_PWM1_PWM_CTL1;

typedef union {
    sM2L31_PWM1_PWM_CTL1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CTL1;

#define M2L31_PWM1_PWM_CLKSRC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ECLKSRC0 : 3;
    unsigned long Res0 : 5;
    unsigned long ECLKSRC2 : 3;
    unsigned long Res1 : 5;
    unsigned long ECLKSRC4 : 3;
    unsigned long Res2 : 13;
} sM2L31_PWM1_PWM_CLKSRC;

typedef union {
    sM2L31_PWM1_PWM_CLKSRC Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CLKSRC;

#define M2L31_PWM1_PWM_CLKPSC0_1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CLKPSC : 12;
    unsigned long Res0 : 20;
} sM2L31_PWM1_PWM_CLKPSC0_1;

typedef union {
    sM2L31_PWM1_PWM_CLKPSC0_1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CLKPSC0_1;

#define M2L31_PWM1_PWM_CLKPSC2_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CLKPSC2_3;

typedef union {
    sM2L31_PWM1_PWM_CLKPSC2_3 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CLKPSC2_3;

#define M2L31_PWM1_PWM_CLKPSC4_5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CLKPSC4_5;

typedef union {
    sM2L31_PWM1_PWM_CLKPSC4_5 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CLKPSC4_5;

#define M2L31_PWM1_PWM_CNTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTEN0 : 1;
    unsigned long Res0 : 1;
    unsigned long CNTEN2 : 1;
    unsigned long Res1 : 1;
    unsigned long CNTEN4 : 1;
    unsigned long Res2 : 27;
} sM2L31_PWM1_PWM_CNTEN;

typedef union {
    sM2L31_PWM1_PWM_CNTEN Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CNTEN;

#define M2L31_PWM1_PWM_CNTCLR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTCLR0 : 1;
    unsigned long Res0 : 1;
    unsigned long CNTCLR2 : 1;
    unsigned long Res1 : 1;
    unsigned long CNTCLR4 : 1;
    unsigned long Res2 : 27;
} sM2L31_PWM1_PWM_CNTCLR;

typedef union {
    sM2L31_PWM1_PWM_CNTCLR Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CNTCLR;

#define M2L31_PWM1_PWM_PERIOD0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PERIOD : 16;
    unsigned long Res0 : 16;
} sM2L31_PWM1_PWM_PERIOD0;

typedef union {
    sM2L31_PWM1_PWM_PERIOD0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_PERIOD0;

#define M2L31_PWM1_PWM_PERIOD2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_PERIOD2;

typedef union {
    sM2L31_PWM1_PWM_PERIOD2 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_PERIOD2;

#define M2L31_PWM1_PWM_PERIOD4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_PERIOD4;

typedef union {
    sM2L31_PWM1_PWM_PERIOD4 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_PERIOD4;

#define M2L31_PWM1_PWM_CMPDAT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMP : 16;
    unsigned long Res0 : 16;
} sM2L31_PWM1_PWM_CMPDAT0;

typedef union {
    sM2L31_PWM1_PWM_CMPDAT0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CMPDAT0;

#define M2L31_PWM1_PWM_CMPDAT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CMPDAT1;

typedef union {
    sM2L31_PWM1_PWM_CMPDAT1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CMPDAT1;

#define M2L31_PWM1_PWM_CMPDAT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CMPDAT2;

typedef union {
    sM2L31_PWM1_PWM_CMPDAT2 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CMPDAT2;

#define M2L31_PWM1_PWM_CMPDAT3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CMPDAT3;

typedef union {
    sM2L31_PWM1_PWM_CMPDAT3 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CMPDAT3;

#define M2L31_PWM1_PWM_CMPDAT4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CMPDAT4;

typedef union {
    sM2L31_PWM1_PWM_CMPDAT4 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CMPDAT4;

#define M2L31_PWM1_PWM_CMPDAT5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CMPDAT5;

typedef union {
    sM2L31_PWM1_PWM_CMPDAT5 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CMPDAT5;

#define M2L31_PWM1_PWM_DTCTL0_1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DTCNT : 12;
    unsigned long Res0 : 4;
    unsigned long DTEN : 1;
    unsigned long Res1 : 7;
    unsigned long DTCKSEL : 1;
    unsigned long Res2 : 7;
} sM2L31_PWM1_PWM_DTCTL0_1;

typedef union {
    sM2L31_PWM1_PWM_DTCTL0_1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_DTCTL0_1;

#define M2L31_PWM1_PWM_DTCTL2_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_DTCTL2_3;

typedef union {
    sM2L31_PWM1_PWM_DTCTL2_3 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_DTCTL2_3;

#define M2L31_PWM1_PWM_DTCTL4_5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_DTCTL4_5;

typedef union {
    sM2L31_PWM1_PWM_DTCTL4_5 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_DTCTL4_5;

#define M2L31_PWM1_PWM_CNT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 16;
    unsigned long DIRF : 1;
    unsigned long Res0 : 15;
} sM2L31_PWM1_PWM_CNT0;

typedef union {
    sM2L31_PWM1_PWM_CNT0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CNT0;

#define M2L31_PWM1_PWM_CNT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CNT2;

typedef union {
    sM2L31_PWM1_PWM_CNT2 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CNT2;

#define M2L31_PWM1_PWM_CNT4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CNT4;

typedef union {
    sM2L31_PWM1_PWM_CNT4 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CNT4;

#define M2L31_PWM1_PWM_WGCTL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ZPCTL0 : 2;
    unsigned long ZPCTL1 : 2;
    unsigned long ZPCTL2 : 2;
    unsigned long ZPCTL3 : 2;
    unsigned long ZPCTL4 : 2;
    unsigned long ZPCTL5 : 2;
    unsigned long Res0 : 4;
    unsigned long PRDPCTL0 : 2;
    unsigned long PRDPCTL1 : 2;
    unsigned long PRDPCTL2 : 2;
    unsigned long PRDPCTL3 : 2;
    unsigned long PRDPCTL4 : 2;
    unsigned long PRDPCTL5 : 2;
    unsigned long Res1 : 4;
} sM2L31_PWM1_PWM_WGCTL0;

typedef union {
    sM2L31_PWM1_PWM_WGCTL0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_WGCTL0;

#define M2L31_PWM1_PWM_WGCTL1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMPUCTL0 : 2;
    unsigned long CMPUCTL1 : 2;
    unsigned long CMPUCTL2 : 2;
    unsigned long CMPUCTL3 : 2;
    unsigned long CMPUCTL4 : 2;
    unsigned long CMPUCTL5 : 2;
    unsigned long Res0 : 4;
    unsigned long CMPDCTL0 : 2;
    unsigned long CMPDCTL1 : 2;
    unsigned long CMPDCTL2 : 2;
    unsigned long CMPDCTL3 : 2;
    unsigned long CMPDCTL4 : 2;
    unsigned long CMPDCTL5 : 2;
    unsigned long Res1 : 4;
} sM2L31_PWM1_PWM_WGCTL1;

typedef union {
    sM2L31_PWM1_PWM_WGCTL1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_WGCTL1;

#define M2L31_PWM1_PWM_MSKEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MSKEN0 : 1;
    unsigned long MSKEN1 : 1;
    unsigned long MSKEN2 : 1;
    unsigned long MSKEN3 : 1;
    unsigned long MSKEN4 : 1;
    unsigned long MSKEN5 : 1;
    unsigned long Res0 : 26;
} sM2L31_PWM1_PWM_MSKEN;

typedef union {
    sM2L31_PWM1_PWM_MSKEN Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_MSKEN;

#define M2L31_PWM1_PWM_MSK_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MSKDAT0 : 1;
    unsigned long MSKDAT1 : 1;
    unsigned long MSKDAT2 : 1;
    unsigned long MSKDAT3 : 1;
    unsigned long MSKDAT4 : 1;
    unsigned long MSKDAT5 : 1;
    unsigned long Res0 : 26;
} sM2L31_PWM1_PWM_MSK;

typedef union {
    sM2L31_PWM1_PWM_MSK Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_MSK;

#define M2L31_PWM1_PWM_BNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BRK0NFEN : 1;
    unsigned long BRK0FSEL : 3;
    unsigned long BRK0FCNT : 3;
    unsigned long BRK0PINV : 1;
    unsigned long BRK1NFEN : 1;
    unsigned long BRK1FSEL : 3;
    unsigned long BRK1FCNT : 3;
    unsigned long BRK1PINV : 1;
    unsigned long BK0SRC : 1;
    unsigned long Res0 : 7;
    unsigned long BK1SRC : 1;
    unsigned long Res1 : 7;
} sM2L31_PWM1_PWM_BNF;

typedef union {
    sM2L31_PWM1_PWM_BNF Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_BNF;

#define M2L31_PWM1_PWM_FAILBRK_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CSSBRKEN : 1;
    unsigned long BODBRKEN : 1;
    unsigned long RAMBRKEN : 1;
    unsigned long CORBRKEN : 1;
    unsigned long Res0 : 28;
} sM2L31_PWM1_PWM_FAILBRK;

typedef union {
    sM2L31_PWM1_PWM_FAILBRK Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_FAILBRK;

#define M2L31_PWM1_PWM_BRKCTL0_1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CPO0EBEN : 1;
    unsigned long CPO1EBEN : 1;
    unsigned long CPO2EBEN : 1;
    unsigned long Res0 : 1;
    unsigned long BRKP0EEN : 1;
    unsigned long BRKP1EEN : 1;
    unsigned long VBSNEBEN : 1;
    unsigned long SYSEBEN : 1;
    unsigned long CPO0LBEN : 1;
    unsigned long CPO1LBEN : 1;
    unsigned long CPO2LBEN : 1;
    unsigned long Res1 : 1;
    unsigned long BRKP0LEN : 1;
    unsigned long BRKP1LEN : 1;
    unsigned long VBSNLBEN : 1;
    unsigned long SYSLBEN : 1;
    unsigned long BRKAEVEN : 2;
    unsigned long BRKAODD : 2;
    unsigned long EADC0EBEN : 1;
    unsigned long Res2 : 2;
    unsigned long VBSREBEN : 1;
    unsigned long Res3 : 4;
    unsigned long EADC0LBEN : 1;
    unsigned long Res4 : 2;
    unsigned long VBSRLBEN : 1;
} sM2L31_PWM1_PWM_BRKCTL0_1;

typedef union {
    sM2L31_PWM1_PWM_BRKCTL0_1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_BRKCTL0_1;

#define M2L31_PWM1_PWM_BRKCTL2_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_BRKCTL2_3;

typedef union {
    sM2L31_PWM1_PWM_BRKCTL2_3 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_BRKCTL2_3;

#define M2L31_PWM1_PWM_BRKCTL4_5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_BRKCTL4_5;

typedef union {
    sM2L31_PWM1_PWM_BRKCTL4_5 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_BRKCTL4_5;

#define M2L31_PWM1_PWM_POLCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PINV0 : 1;
    unsigned long PINV1 : 1;
    unsigned long PINV2 : 1;
    unsigned long PINV3 : 1;
    unsigned long PINV4 : 1;
    unsigned long PINV5 : 1;
    unsigned long Res0 : 26;
} sM2L31_PWM1_PWM_POLCTL;

typedef union {
    sM2L31_PWM1_PWM_POLCTL Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_POLCTL;

#define M2L31_PWM1_PWM_POEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long POEN0 : 1;
    unsigned long POEN1 : 1;
    unsigned long POEN2 : 1;
    unsigned long POEN3 : 1;
    unsigned long POEN4 : 1;
    unsigned long POEN5 : 1;
    unsigned long Res0 : 26;
} sM2L31_PWM1_PWM_POEN;

typedef union {
    sM2L31_PWM1_PWM_POEN Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_POEN;

#define M2L31_PWM1_PWM_SWBRK_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BRKETRG0 : 1;
    unsigned long BRKETRG2 : 1;
    unsigned long BRKETRG4 : 1;
    unsigned long Res0 : 5;
    unsigned long BRKLTRG0 : 1;
    unsigned long BRKLTRG2 : 1;
    unsigned long BRKLTRG4 : 1;
    unsigned long Res1 : 21;
} sM2L31_PWM1_PWM_SWBRK;

typedef union {
    sM2L31_PWM1_PWM_SWBRK Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_SWBRK;

#define M2L31_PWM1_PWM_INTEN0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ZIEN0 : 1;
    unsigned long Res0 : 1;
    unsigned long ZIEN2 : 1;
    unsigned long Res1 : 1;
    unsigned long ZIEN4 : 1;
    unsigned long Res2 : 3;
    unsigned long PIEN0 : 1;
    unsigned long Res3 : 1;
    unsigned long PIEN2 : 1;
    unsigned long Res4 : 1;
    unsigned long PIEN4 : 1;
    unsigned long Res5 : 3;
    unsigned long CMPUIEN0 : 1;
    unsigned long CMPUIEN1 : 1;
    unsigned long CMPUIEN2 : 1;
    unsigned long CMPUIEN3 : 1;
    unsigned long CMPUIEN4 : 1;
    unsigned long CMPUIEN5 : 1;
    unsigned long Res6 : 2;
    unsigned long CMPDIEN0 : 1;
    unsigned long CMPDIEN1 : 1;
    unsigned long CMPDIEN2 : 1;
    unsigned long CMPDIEN3 : 1;
    unsigned long CMPDIEN4 : 1;
    unsigned long CMPDIEN5 : 1;
    unsigned long Res7 : 2;
} sM2L31_PWM1_PWM_INTEN0;

typedef union {
    sM2L31_PWM1_PWM_INTEN0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_INTEN0;

#define M2L31_PWM1_PWM_INTEN1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BRKEIEN0_1 : 1;
    unsigned long BRKEIEN2_3 : 1;
    unsigned long BRKEIEN4_5 : 1;
    unsigned long Res0 : 5;
    unsigned long BRKLIEN0_1 : 1;
    unsigned long BRKLIEN2_3 : 1;
    unsigned long BRKLIEN4_5 : 1;
    unsigned long Res1 : 21;
} sM2L31_PWM1_PWM_INTEN1;

typedef union {
    sM2L31_PWM1_PWM_INTEN1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_INTEN1;

#define M2L31_PWM1_PWM_INTSTS0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ZIF0 : 1;
    unsigned long Res0 : 1;
    unsigned long ZIF2 : 1;
    unsigned long Res1 : 1;
    unsigned long ZIF4 : 1;
    unsigned long Res2 : 3;
    unsigned long PIF0 : 1;
    unsigned long Res3 : 1;
    unsigned long PIF2 : 1;
    unsigned long Res4 : 1;
    unsigned long PIF4 : 1;
    unsigned long Res5 : 3;
    unsigned long CMPUIFn : 6;
    unsigned long Res6 : 2;
    unsigned long CMPDIF0 : 1;
    unsigned long CMPDIF1 : 1;
    unsigned long CMPDIF2 : 1;
    unsigned long CMPDIF3 : 1;
    unsigned long CMPDIF4 : 1;
    unsigned long CMPDIF5 : 1;
    unsigned long Res7 : 2;
} sM2L31_PWM1_PWM_INTSTS0;

typedef union {
    sM2L31_PWM1_PWM_INTSTS0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_INTSTS0;

#define M2L31_PWM1_PWM_INTSTS1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BRKEIF0 : 1;
    unsigned long BRKEIF1 : 1;
    unsigned long BRKEIF2 : 1;
    unsigned long BRKEIF3 : 1;
    unsigned long BRKEIF4 : 1;
    unsigned long BRKEIF5 : 1;
    unsigned long Res0 : 2;
    unsigned long BRKLIF0 : 1;
    unsigned long BRKLIF1 : 1;
    unsigned long BRKLIF2 : 1;
    unsigned long BRKLIF3 : 1;
    unsigned long BRKLIF4 : 1;
    unsigned long BRKLIF5 : 1;
    unsigned long Res1 : 2;
    unsigned long BRKESTS0 : 1;
    unsigned long BRKESTS1 : 1;
    unsigned long BRKESTS2 : 1;
    unsigned long BRKESTS3 : 1;
    unsigned long BRKESTS4 : 1;
    unsigned long BRKESTS5 : 1;
    unsigned long Res2 : 2;
    unsigned long BRKLSTS0 : 1;
    unsigned long BRKLSTS1 : 1;
    unsigned long BRKLSTS2 : 1;
    unsigned long BRKLSTS3 : 1;
    unsigned long BRKLSTS4 : 1;
    unsigned long BRKLSTS5 : 1;
    unsigned long Res3 : 2;
} sM2L31_PWM1_PWM_INTSTS1;

typedef union {
    sM2L31_PWM1_PWM_INTSTS1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_INTSTS1;

#define M2L31_PWM1_PWM_DACTRGEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ZTE0 : 1;
    unsigned long Res0 : 1;
    unsigned long ZTE2 : 1;
    unsigned long Res1 : 1;
    unsigned long ZTE4 : 1;
    unsigned long Res2 : 3;
    unsigned long PTE0 : 1;
    unsigned long Res3 : 1;
    unsigned long PTE2 : 1;
    unsigned long Res4 : 1;
    unsigned long PTE4 : 1;
    unsigned long Res5 : 3;
    unsigned long CUTRGEN0 : 1;
    unsigned long CUTRGEN1 : 1;
    unsigned long CUTRGEN2 : 1;
    unsigned long CUTRGEN3 : 1;
    unsigned long CUTRGEN4 : 1;
    unsigned long CUTRGEN5 : 1;
    unsigned long Res6 : 2;
    unsigned long CDTRGEN0 : 1;
    unsigned long CDTRGEN1 : 1;
    unsigned long CDTRGEN2 : 1;
    unsigned long CDTRGEN3 : 1;
    unsigned long CDTRGEN4 : 1;
    unsigned long CDTRGEN5 : 1;
    unsigned long Res7 : 2;
} sM2L31_PWM1_PWM_DACTRGEN;

typedef union {
    sM2L31_PWM1_PWM_DACTRGEN Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_DACTRGEN;

#define M2L31_PWM1_PWM_EADCTS0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TRGSEL0 : 4;
    unsigned long Res0 : 3;
    unsigned long TRGEN0 : 1;
    unsigned long TRGSEL1 : 4;
    unsigned long Res1 : 3;
    unsigned long TRGEN1 : 1;
    unsigned long TRGSEL2 : 4;
    unsigned long Res2 : 3;
    unsigned long TRGEN2 : 1;
    unsigned long TRGSEL3 : 4;
    unsigned long Res3 : 3;
    unsigned long TRGEN3 : 1;
} sM2L31_PWM1_PWM_EADCTS0;

typedef union {
    sM2L31_PWM1_PWM_EADCTS0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_EADCTS0;

#define M2L31_PWM1_PWM_EADCTS1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TRGSEL4 : 4;
    unsigned long Res0 : 3;
    unsigned long TRGEN4 : 1;
    unsigned long TRGSEL5 : 4;
    unsigned long Res1 : 3;
    unsigned long TRGEN5 : 1;
    unsigned long Res2 : 16;
} sM2L31_PWM1_PWM_EADCTS1;

typedef union {
    sM2L31_PWM1_PWM_EADCTS1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_EADCTS1;

#define M2L31_PWM1_PWM_SSCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SSEN0 : 1;
    unsigned long Res0 : 1;
    unsigned long SSEN2 : 1;
    unsigned long Res1 : 1;
    unsigned long SSEN4 : 1;
    unsigned long Res2 : 3;
    unsigned long SSRC : 2;
    unsigned long Res3 : 22;
} sM2L31_PWM1_PWM_SSCTL;

typedef union {
    sM2L31_PWM1_PWM_SSCTL Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_SSCTL;

#define M2L31_PWM1_PWM_SSTRG_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTSEN : 1;
    unsigned long Res0 : 31;
} sM2L31_PWM1_PWM_SSTRG;

typedef union {
    sM2L31_PWM1_PWM_SSTRG Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_SSTRG;

#define M2L31_PWM1_PWM_STATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTMAX0 : 1;
    unsigned long Res0 : 1;
    unsigned long CNTMAX2 : 1;
    unsigned long Res1 : 1;
    unsigned long CNTMAX4 : 1;
    unsigned long Res2 : 11;
    unsigned long EADCTRG0 : 1;
    unsigned long EADCTRG1 : 1;
    unsigned long EADCTRG2 : 1;
    unsigned long EADCTRG3 : 1;
    unsigned long EADCTRG4 : 1;
    unsigned long EADCTRG5 : 1;
    unsigned long Res3 : 1;
    unsigned long LPADCTRG : 1;
    unsigned long DACTRGF : 1;
    unsigned long Res4 : 7;
} sM2L31_PWM1_PWM_STATUS;

typedef union {
    sM2L31_PWM1_PWM_STATUS Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_STATUS;

#define M2L31_PWM1_PWM_IFA0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IFACNT : 8;
    unsigned long Res0 : 16;
    unsigned long STPMOD : 1;
    unsigned long Res1 : 3;
    unsigned long IFASEL : 2;
    unsigned long Res2 : 1;
    unsigned long IFAEN : 1;
} sM2L31_PWM1_PWM_IFA0;

typedef union {
    sM2L31_PWM1_PWM_IFA0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_IFA0;

#define M2L31_PWM1_PWM_IFA2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_IFA2;

typedef union {
    sM2L31_PWM1_PWM_IFA2 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_IFA2;

#define M2L31_PWM1_PWM_IFA4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_IFA4;

typedef union {
    sM2L31_PWM1_PWM_IFA4 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_IFA4;

#define M2L31_PWM1_PWM_AINTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IFAIF0 : 1;
    unsigned long Res0 : 1;
    unsigned long IFAIF2 : 1;
    unsigned long Res1 : 1;
    unsigned long IFAIF4 : 1;
    unsigned long Res2 : 27;
} sM2L31_PWM1_PWM_AINTSTS;

typedef union {
    sM2L31_PWM1_PWM_AINTSTS Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_AINTSTS;

#define M2L31_PWM1_PWM_AINTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IFAIEN0 : 1;
    unsigned long Res0 : 1;
    unsigned long IFAIEN2 : 1;
    unsigned long Res1 : 1;
    unsigned long IFAIEN4 : 1;
    unsigned long Res2 : 27;
} sM2L31_PWM1_PWM_AINTEN;

typedef union {
    sM2L31_PWM1_PWM_AINTEN Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_AINTEN;

#define M2L31_PWM1_PWM_APDMACTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long APDMAEN0 : 1;
    unsigned long APDMAEN1 : 1;
    unsigned long APDMAEN2 : 1;
    unsigned long APDMAEN3 : 1;
    unsigned long APDMAEN4 : 1;
    unsigned long APDMAEN5 : 1;
    unsigned long Res0 : 26;
} sM2L31_PWM1_PWM_APDMACTL;

typedef union {
    sM2L31_PWM1_PWM_APDMACTL Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_APDMACTL;

#define M2L31_PWM1_PWM_CAPINEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPINEN0 : 1;
    unsigned long CAPINEN1 : 1;
    unsigned long CAPINEN2 : 1;
    unsigned long CAPINEN3 : 1;
    unsigned long CAPINEN4 : 1;
    unsigned long CAPINEN5 : 1;
    unsigned long Res0 : 26;
} sM2L31_PWM1_PWM_CAPINEN;

typedef union {
    sM2L31_PWM1_PWM_CAPINEN Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CAPINEN;

#define M2L31_PWM1_PWM_CAPCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPEN0 : 1;
    unsigned long CAPEN1 : 1;
    unsigned long CAPEN2 : 1;
    unsigned long CAPEN3 : 1;
    unsigned long CAPEN4 : 1;
    unsigned long CAPEN5 : 1;
    unsigned long Res0 : 2;
    unsigned long CAPINV0 : 1;
    unsigned long CAPINV1 : 1;
    unsigned long CAPINV2 : 1;
    unsigned long CAPINV3 : 1;
    unsigned long CAPINV4 : 1;
    unsigned long CAPINV5 : 1;
    unsigned long Res1 : 2;
    unsigned long RCRLDEN0 : 1;
    unsigned long RCRLDEN1 : 1;
    unsigned long RCRLDEN2 : 1;
    unsigned long RCRLDEN3 : 1;
    unsigned long RCRLDEN4 : 1;
    unsigned long RCRLDEN5 : 1;
    unsigned long Res2 : 2;
    unsigned long FCRLDEN0 : 1;
    unsigned long FCRLDEN1 : 1;
    unsigned long FCRLDEN2 : 1;
    unsigned long FCRLDEN3 : 1;
    unsigned long FCRLDEN4 : 1;
    unsigned long FCRLDEN5 : 1;
    unsigned long Res3 : 2;
} sM2L31_PWM1_PWM_CAPCTL;

typedef union {
    sM2L31_PWM1_PWM_CAPCTL Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CAPCTL;

#define M2L31_PWM1_PWM_CAPSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CRLIFOV0 : 1;
    unsigned long CRLIFOV1 : 1;
    unsigned long CRLIFOV2 : 1;
    unsigned long CRLIFOV3 : 1;
    unsigned long CRLIFOV4 : 1;
    unsigned long CRLIFOV5 : 1;
    unsigned long Res0 : 2;
    unsigned long CFLIFOV0 : 1;
    unsigned long CFLIFOV1 : 1;
    unsigned long CFLIFOV2 : 1;
    unsigned long CFLIFOV3 : 1;
    unsigned long CFLIFOV4 : 1;
    unsigned long CFLIFOV5 : 1;
    unsigned long Res1 : 18;
} sM2L31_PWM1_PWM_CAPSTS;

typedef union {
    sM2L31_PWM1_PWM_CAPSTS Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CAPSTS;

#define M2L31_PWM1_PWM_RCAPDAT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RCAPDAT : 16;
    unsigned long Res0 : 16;
} sM2L31_PWM1_PWM_RCAPDAT0;

typedef union {
    sM2L31_PWM1_PWM_RCAPDAT0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_RCAPDAT0;

#define M2L31_PWM1_PWM_FCAPDAT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FCAPDAT : 16;
    unsigned long Res0 : 16;
} sM2L31_PWM1_PWM_FCAPDAT0;

typedef union {
    sM2L31_PWM1_PWM_FCAPDAT0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_FCAPDAT0;

#define M2L31_PWM1_PWM_RCAPDAT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_RCAPDAT1;

typedef union {
    sM2L31_PWM1_PWM_RCAPDAT1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_RCAPDAT1;

#define M2L31_PWM1_PWM_FCAPDAT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_FCAPDAT1;

typedef union {
    sM2L31_PWM1_PWM_FCAPDAT1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_FCAPDAT1;

#define M2L31_PWM1_PWM_RCAPDAT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_RCAPDAT2;

typedef union {
    sM2L31_PWM1_PWM_RCAPDAT2 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_RCAPDAT2;

#define M2L31_PWM1_PWM_FCAPDAT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_FCAPDAT2;

typedef union {
    sM2L31_PWM1_PWM_FCAPDAT2 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_FCAPDAT2;

#define M2L31_PWM1_PWM_RCAPDAT3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_RCAPDAT3;

typedef union {
    sM2L31_PWM1_PWM_RCAPDAT3 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_RCAPDAT3;

#define M2L31_PWM1_PWM_FCAPDAT3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_FCAPDAT3;

typedef union {
    sM2L31_PWM1_PWM_FCAPDAT3 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_FCAPDAT3;

#define M2L31_PWM1_PWM_RCAPDAT4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_RCAPDAT4;

typedef union {
    sM2L31_PWM1_PWM_RCAPDAT4 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_RCAPDAT4;

#define M2L31_PWM1_PWM_FCAPDAT4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_FCAPDAT4;

typedef union {
    sM2L31_PWM1_PWM_FCAPDAT4 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_FCAPDAT4;

#define M2L31_PWM1_PWM_RCAPDAT5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_RCAPDAT5;

typedef union {
    sM2L31_PWM1_PWM_RCAPDAT5 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_RCAPDAT5;

#define M2L31_PWM1_PWM_FCAPDAT5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_FCAPDAT5;

typedef union {
    sM2L31_PWM1_PWM_FCAPDAT5 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_FCAPDAT5;

#define M2L31_PWM1_PWM_PDMACTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CHEN0_1 : 1;
    unsigned long CAPMOD0_1 : 2;
    unsigned long CAPORD0_1 : 1;
    unsigned long CHSEL0_1 : 1;
    unsigned long Res0 : 3;
    unsigned long CHEN2_3 : 1;
    unsigned long CAPMOD2_3 : 2;
    unsigned long CAPORD2_3 : 1;
    unsigned long CHSEL2_3 : 1;
    unsigned long Res1 : 3;
    unsigned long CHEN4_5 : 1;
    unsigned long CAPMOD4_5 : 2;
    unsigned long CAPORD4_5 : 1;
    unsigned long CHSEL4_5 : 1;
    unsigned long Res2 : 11;
} sM2L31_PWM1_PWM_PDMACTL;

typedef union {
    sM2L31_PWM1_PWM_PDMACTL Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_PDMACTL;

#define M2L31_PWM1_PWM_PDMACAP0_1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPBUF : 16;
    unsigned long Res0 : 16;
} sM2L31_PWM1_PWM_PDMACAP0_1;

typedef union {
    sM2L31_PWM1_PWM_PDMACAP0_1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_PDMACAP0_1;

#define M2L31_PWM1_PWM_PDMACAP2_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_PDMACAP2_3;

typedef union {
    sM2L31_PWM1_PWM_PDMACAP2_3 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_PDMACAP2_3;

#define M2L31_PWM1_PWM_PDMACAP4_5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_PDMACAP4_5;

typedef union {
    sM2L31_PWM1_PWM_PDMACAP4_5 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_PDMACAP4_5;

#define M2L31_PWM1_PWM_CAPIEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPRIEN0 : 1;
    unsigned long CAPRIEN1 : 1;
    unsigned long CAPRIEN2 : 1;
    unsigned long CAPRIEN3 : 1;
    unsigned long CAPRIEN4 : 1;
    unsigned long CAPRIEN5 : 1;
    unsigned long Res0 : 2;
    unsigned long CAPFIEN0 : 1;
    unsigned long CAPFIEN1 : 1;
    unsigned long CAPFIEN2 : 1;
    unsigned long CAPFIEN3 : 1;
    unsigned long CAPFIEN4 : 1;
    unsigned long CAPFIEN5 : 1;
    unsigned long Res1 : 18;
} sM2L31_PWM1_PWM_CAPIEN;

typedef union {
    sM2L31_PWM1_PWM_CAPIEN Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CAPIEN;

#define M2L31_PWM1_PWM_CAPIF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CRLIF0 : 1;
    unsigned long CRLIF1 : 1;
    unsigned long CRLIF2 : 1;
    unsigned long CRLIF3 : 1;
    unsigned long CRLIF4 : 1;
    unsigned long CRLIF5 : 1;
    unsigned long Res0 : 2;
    unsigned long CFLIF0 : 1;
    unsigned long CFLIF1 : 1;
    unsigned long CFLIF2 : 1;
    unsigned long CFLIF3 : 1;
    unsigned long CFLIF4 : 1;
    unsigned long CFLIF5 : 1;
    unsigned long Res1 : 18;
} sM2L31_PWM1_PWM_CAPIF;

typedef union {
    sM2L31_PWM1_PWM_CAPIF Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CAPIF;

#define M2L31_PWM1_PWM_CAPNF0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPNFEN : 1;
    unsigned long Res0 : 3;
    unsigned long CAPNFSEL : 3;
    unsigned long Res1 : 1;
    unsigned long CAPNFCNT : 3;
    unsigned long Res2 : 21;
} sM2L31_PWM1_PWM_CAPNF0;

typedef union {
    sM2L31_PWM1_PWM_CAPNF0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CAPNF0;

#define M2L31_PWM1_PWM_CAPNF1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CAPNF1;

typedef union {
    sM2L31_PWM1_PWM_CAPNF1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CAPNF1;

#define M2L31_PWM1_PWM_CAPNF2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CAPNF2;

typedef union {
    sM2L31_PWM1_PWM_CAPNF2 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CAPNF2;

#define M2L31_PWM1_PWM_CAPNF3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CAPNF3;

typedef union {
    sM2L31_PWM1_PWM_CAPNF3 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CAPNF3;

#define M2L31_PWM1_PWM_CAPNF4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CAPNF4;

typedef union {
    sM2L31_PWM1_PWM_CAPNF4 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CAPNF4;

#define M2L31_PWM1_PWM_CAPNF5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CAPNF5;

typedef union {
    sM2L31_PWM1_PWM_CAPNF5 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CAPNF5;

#define M2L31_PWM1_PWM_EXTETCTL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EXTETEN : 1;
    unsigned long Res0 : 3;
    unsigned long CNTACTS : 2;
    unsigned long Res1 : 2;
    unsigned long EXTTRGS : 4;
    unsigned long Res2 : 20;
} sM2L31_PWM1_PWM_EXTETCTL0;

typedef union {
    sM2L31_PWM1_PWM_EXTETCTL0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_EXTETCTL0;

#define M2L31_PWM1_PWM_EXTETCTL2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_EXTETCTL2;

typedef union {
    sM2L31_PWM1_PWM_EXTETCTL2 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_EXTETCTL2;

#define M2L31_PWM1_PWM_EXTETCTL4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_EXTETCTL4;

typedef union {
    sM2L31_PWM1_PWM_EXTETCTL4 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_EXTETCTL4;

#define M2L31_PWM1_PWM_SWEOFCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OUTACTS0 : 2;
    unsigned long OUTACTS1 : 2;
    unsigned long OUTACTS2 : 2;
    unsigned long OUTACTS3 : 2;
    unsigned long OUTACTS4 : 2;
    unsigned long OUTACTS5 : 2;
    unsigned long Res0 : 20;
} sM2L31_PWM1_PWM_SWEOFCTL;

typedef union {
    sM2L31_PWM1_PWM_SWEOFCTL Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_SWEOFCTL;

#define M2L31_PWM1_PWM_SWEOFTRG_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SWETRG0 : 1;
    unsigned long SWETRG1 : 1;
    unsigned long SWETRG2 : 1;
    unsigned long SWETRG3 : 1;
    unsigned long SWETRG4 : 1;
    unsigned long SWETRG5 : 1;
    unsigned long Res0 : 26;
} sM2L31_PWM1_PWM_SWEOFTRG;

typedef union {
    sM2L31_PWM1_PWM_SWEOFTRG Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_SWEOFTRG;

#define M2L31_PWM1_PWM_PBUF0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PBUF : 16;
    unsigned long Res0 : 16;
} sM2L31_PWM1_PWM_PBUF0;

typedef union {
    sM2L31_PWM1_PWM_PBUF0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_PBUF0;

#define M2L31_PWM1_PWM_PBUF2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_PBUF2;

typedef union {
    sM2L31_PWM1_PWM_PBUF2 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_PBUF2;

#define M2L31_PWM1_PWM_PBUF4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_PBUF4;

typedef union {
    sM2L31_PWM1_PWM_PBUF4 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_PBUF4;

#define M2L31_PWM1_PWM_CMPBUF0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMPBUF : 16;
    unsigned long Res0 : 16;
} sM2L31_PWM1_PWM_CMPBUF0;

typedef union {
    sM2L31_PWM1_PWM_CMPBUF0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CMPBUF0;

#define M2L31_PWM1_PWM_CMPBUF1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CMPBUF1;

typedef union {
    sM2L31_PWM1_PWM_CMPBUF1 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CMPBUF1;

#define M2L31_PWM1_PWM_CMPBUF2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CMPBUF2;

typedef union {
    sM2L31_PWM1_PWM_CMPBUF2 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CMPBUF2;

#define M2L31_PWM1_PWM_CMPBUF3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CMPBUF3;

typedef union {
    sM2L31_PWM1_PWM_CMPBUF3 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CMPBUF3;

#define M2L31_PWM1_PWM_CMPBUF4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CMPBUF4;

typedef union {
    sM2L31_PWM1_PWM_CMPBUF4 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CMPBUF4;

#define M2L31_PWM1_PWM_CMPBUF5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_CMPBUF5;

typedef union {
    sM2L31_PWM1_PWM_CMPBUF5 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_CMPBUF5;

#define M2L31_PWM1_PWM_IFACNT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ACUCNT : 16;
    unsigned long Res0 : 16;
} sM2L31_PWM1_PWM_IFACNT0;

typedef union {
    sM2L31_PWM1_PWM_IFACNT0 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_IFACNT0;

#define M2L31_PWM1_PWM_IFACNT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_IFACNT2;

typedef union {
    sM2L31_PWM1_PWM_IFACNT2 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_IFACNT2;

#define M2L31_PWM1_PWM_IFACNT4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PWM1_PWM_IFACNT4;

typedef union {
    sM2L31_PWM1_PWM_IFACNT4 Bit;
    unsigned long  All;
} uM2L31_PWM1_PWM_IFACNT4;

typedef struct {
    uM2L31_PWM1_PWM_CTL0 M2L31_PWM1_PWM_CTL0; // Offset: 0x0
    uM2L31_PWM1_PWM_CTL1 M2L31_PWM1_PWM_CTL1; // Offset: 0x4
    unsigned long Reserved0;
    unsigned long Reserved1;
    uM2L31_PWM1_PWM_CLKSRC M2L31_PWM1_PWM_CLKSRC; // Offset: 0x10
    uM2L31_PWM1_PWM_CLKPSC0_1 M2L31_PWM1_PWM_CLKPSC0_1; // Offset: 0x14
    uM2L31_PWM1_PWM_CLKPSC2_3 M2L31_PWM1_PWM_CLKPSC2_3; // Offset: 0x18
    uM2L31_PWM1_PWM_CLKPSC4_5 M2L31_PWM1_PWM_CLKPSC4_5; // Offset: 0x1c
    uM2L31_PWM1_PWM_CNTEN M2L31_PWM1_PWM_CNTEN; // Offset: 0x20
    uM2L31_PWM1_PWM_CNTCLR M2L31_PWM1_PWM_CNTCLR; // Offset: 0x24
    unsigned long Reserved2;
    unsigned long Reserved3;
    uM2L31_PWM1_PWM_PERIOD0 M2L31_PWM1_PWM_PERIOD0; // Offset: 0x30
    unsigned long Reserved4;
    uM2L31_PWM1_PWM_PERIOD2 M2L31_PWM1_PWM_PERIOD2; // Offset: 0x38
    unsigned long Reserved5;
    uM2L31_PWM1_PWM_PERIOD4 M2L31_PWM1_PWM_PERIOD4; // Offset: 0x40
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    uM2L31_PWM1_PWM_CMPDAT0 M2L31_PWM1_PWM_CMPDAT0; // Offset: 0x50
    uM2L31_PWM1_PWM_CMPDAT1 M2L31_PWM1_PWM_CMPDAT1; // Offset: 0x54
    uM2L31_PWM1_PWM_CMPDAT2 M2L31_PWM1_PWM_CMPDAT2; // Offset: 0x58
    uM2L31_PWM1_PWM_CMPDAT3 M2L31_PWM1_PWM_CMPDAT3; // Offset: 0x5c
    uM2L31_PWM1_PWM_CMPDAT4 M2L31_PWM1_PWM_CMPDAT4; // Offset: 0x60
    uM2L31_PWM1_PWM_CMPDAT5 M2L31_PWM1_PWM_CMPDAT5; // Offset: 0x64
    unsigned long Reserved9;
    unsigned long Reserved10;
    uM2L31_PWM1_PWM_DTCTL0_1 M2L31_PWM1_PWM_DTCTL0_1; // Offset: 0x70
    uM2L31_PWM1_PWM_DTCTL2_3 M2L31_PWM1_PWM_DTCTL2_3; // Offset: 0x74
    uM2L31_PWM1_PWM_DTCTL4_5 M2L31_PWM1_PWM_DTCTL4_5; // Offset: 0x78
    unsigned long Reserved11;
    unsigned long Reserved12;
    unsigned long Reserved13;
    unsigned long Reserved14;
    unsigned long Reserved15;
    uM2L31_PWM1_PWM_CNT0 M2L31_PWM1_PWM_CNT0; // Offset: 0x90
    unsigned long Reserved16;
    uM2L31_PWM1_PWM_CNT2 M2L31_PWM1_PWM_CNT2; // Offset: 0x98
    unsigned long Reserved17;
    uM2L31_PWM1_PWM_CNT4 M2L31_PWM1_PWM_CNT4; // Offset: 0xa0
    unsigned long Reserved18;
    unsigned long Reserved19;
    unsigned long Reserved20;
    uM2L31_PWM1_PWM_WGCTL0 M2L31_PWM1_PWM_WGCTL0; // Offset: 0xb0
    uM2L31_PWM1_PWM_WGCTL1 M2L31_PWM1_PWM_WGCTL1; // Offset: 0xb4
    uM2L31_PWM1_PWM_MSKEN M2L31_PWM1_PWM_MSKEN; // Offset: 0xb8
    uM2L31_PWM1_PWM_MSK M2L31_PWM1_PWM_MSK; // Offset: 0xbc
    uM2L31_PWM1_PWM_BNF M2L31_PWM1_PWM_BNF; // Offset: 0xc0
    uM2L31_PWM1_PWM_FAILBRK M2L31_PWM1_PWM_FAILBRK; // Offset: 0xc4
    uM2L31_PWM1_PWM_BRKCTL0_1 M2L31_PWM1_PWM_BRKCTL0_1; // Offset: 0xc8
    uM2L31_PWM1_PWM_BRKCTL2_3 M2L31_PWM1_PWM_BRKCTL2_3; // Offset: 0xcc
    uM2L31_PWM1_PWM_BRKCTL4_5 M2L31_PWM1_PWM_BRKCTL4_5; // Offset: 0xd0
    uM2L31_PWM1_PWM_POLCTL M2L31_PWM1_PWM_POLCTL; // Offset: 0xd4
    uM2L31_PWM1_PWM_POEN M2L31_PWM1_PWM_POEN; // Offset: 0xd8
    uM2L31_PWM1_PWM_SWBRK M2L31_PWM1_PWM_SWBRK; // Offset: 0xdc
    uM2L31_PWM1_PWM_INTEN0 M2L31_PWM1_PWM_INTEN0; // Offset: 0xe0
    uM2L31_PWM1_PWM_INTEN1 M2L31_PWM1_PWM_INTEN1; // Offset: 0xe4
    uM2L31_PWM1_PWM_INTSTS0 M2L31_PWM1_PWM_INTSTS0; // Offset: 0xe8
    uM2L31_PWM1_PWM_INTSTS1 M2L31_PWM1_PWM_INTSTS1; // Offset: 0xec
    unsigned long Reserved21;
    uM2L31_PWM1_PWM_DACTRGEN M2L31_PWM1_PWM_DACTRGEN; // Offset: 0xf4
    uM2L31_PWM1_PWM_EADCTS0 M2L31_PWM1_PWM_EADCTS0; // Offset: 0xf8
    uM2L31_PWM1_PWM_EADCTS1 M2L31_PWM1_PWM_EADCTS1; // Offset: 0xfc
    unsigned long Reserved22;
    unsigned long Reserved23;
    unsigned long Reserved24;
    unsigned long Reserved25;
    uM2L31_PWM1_PWM_SSCTL M2L31_PWM1_PWM_SSCTL; // Offset: 0x110
    uM2L31_PWM1_PWM_SSTRG M2L31_PWM1_PWM_SSTRG; // Offset: 0x114
    unsigned long Reserved26;
    unsigned long Reserved27;
    uM2L31_PWM1_PWM_STATUS M2L31_PWM1_PWM_STATUS; // Offset: 0x120
    unsigned long Reserved28;
    unsigned long Reserved29;
    unsigned long Reserved30;
    uM2L31_PWM1_PWM_IFA0 M2L31_PWM1_PWM_IFA0; // Offset: 0x130
    unsigned long Reserved31;
    uM2L31_PWM1_PWM_IFA2 M2L31_PWM1_PWM_IFA2; // Offset: 0x138
    unsigned long Reserved32;
    uM2L31_PWM1_PWM_IFA4 M2L31_PWM1_PWM_IFA4; // Offset: 0x140
    unsigned long Reserved33;
    unsigned long Reserved34;
    unsigned long Reserved35;
    uM2L31_PWM1_PWM_AINTSTS M2L31_PWM1_PWM_AINTSTS; // Offset: 0x150
    uM2L31_PWM1_PWM_AINTEN M2L31_PWM1_PWM_AINTEN; // Offset: 0x154
    uM2L31_PWM1_PWM_APDMACTL M2L31_PWM1_PWM_APDMACTL; // Offset: 0x158
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
    uM2L31_PWM1_PWM_CAPINEN M2L31_PWM1_PWM_CAPINEN; // Offset: 0x200
    uM2L31_PWM1_PWM_CAPCTL M2L31_PWM1_PWM_CAPCTL; // Offset: 0x204
    uM2L31_PWM1_PWM_CAPSTS M2L31_PWM1_PWM_CAPSTS; // Offset: 0x208
    uM2L31_PWM1_PWM_RCAPDAT0 M2L31_PWM1_PWM_RCAPDAT0; // Offset: 0x20c
    uM2L31_PWM1_PWM_FCAPDAT0 M2L31_PWM1_PWM_FCAPDAT0; // Offset: 0x210
    uM2L31_PWM1_PWM_RCAPDAT1 M2L31_PWM1_PWM_RCAPDAT1; // Offset: 0x214
    uM2L31_PWM1_PWM_FCAPDAT1 M2L31_PWM1_PWM_FCAPDAT1; // Offset: 0x218
    uM2L31_PWM1_PWM_RCAPDAT2 M2L31_PWM1_PWM_RCAPDAT2; // Offset: 0x21c
    uM2L31_PWM1_PWM_FCAPDAT2 M2L31_PWM1_PWM_FCAPDAT2; // Offset: 0x220
    uM2L31_PWM1_PWM_RCAPDAT3 M2L31_PWM1_PWM_RCAPDAT3; // Offset: 0x224
    uM2L31_PWM1_PWM_FCAPDAT3 M2L31_PWM1_PWM_FCAPDAT3; // Offset: 0x228
    uM2L31_PWM1_PWM_RCAPDAT4 M2L31_PWM1_PWM_RCAPDAT4; // Offset: 0x22c
    uM2L31_PWM1_PWM_FCAPDAT4 M2L31_PWM1_PWM_FCAPDAT4; // Offset: 0x230
    uM2L31_PWM1_PWM_RCAPDAT5 M2L31_PWM1_PWM_RCAPDAT5; // Offset: 0x234
    uM2L31_PWM1_PWM_FCAPDAT5 M2L31_PWM1_PWM_FCAPDAT5; // Offset: 0x238
    uM2L31_PWM1_PWM_PDMACTL M2L31_PWM1_PWM_PDMACTL; // Offset: 0x23c
    uM2L31_PWM1_PWM_PDMACAP0_1 M2L31_PWM1_PWM_PDMACAP0_1; // Offset: 0x240
    uM2L31_PWM1_PWM_PDMACAP2_3 M2L31_PWM1_PWM_PDMACAP2_3; // Offset: 0x244
    uM2L31_PWM1_PWM_PDMACAP4_5 M2L31_PWM1_PWM_PDMACAP4_5; // Offset: 0x248
    unsigned long Reserved77;
    uM2L31_PWM1_PWM_CAPIEN M2L31_PWM1_PWM_CAPIEN; // Offset: 0x250
    uM2L31_PWM1_PWM_CAPIF M2L31_PWM1_PWM_CAPIF; // Offset: 0x254
    uM2L31_PWM1_PWM_CAPNF0 M2L31_PWM1_PWM_CAPNF0; // Offset: 0x258
    uM2L31_PWM1_PWM_CAPNF1 M2L31_PWM1_PWM_CAPNF1; // Offset: 0x25c
    uM2L31_PWM1_PWM_CAPNF2 M2L31_PWM1_PWM_CAPNF2; // Offset: 0x260
    uM2L31_PWM1_PWM_CAPNF3 M2L31_PWM1_PWM_CAPNF3; // Offset: 0x264
    uM2L31_PWM1_PWM_CAPNF4 M2L31_PWM1_PWM_CAPNF4; // Offset: 0x268
    uM2L31_PWM1_PWM_CAPNF5 M2L31_PWM1_PWM_CAPNF5; // Offset: 0x26c
    uM2L31_PWM1_PWM_EXTETCTL0 M2L31_PWM1_PWM_EXTETCTL0; // Offset: 0x270
    unsigned long Reserved78;
    uM2L31_PWM1_PWM_EXTETCTL2 M2L31_PWM1_PWM_EXTETCTL2; // Offset: 0x278
    unsigned long Reserved79;
    uM2L31_PWM1_PWM_EXTETCTL4 M2L31_PWM1_PWM_EXTETCTL4; // Offset: 0x280
    unsigned long Reserved80;
    uM2L31_PWM1_PWM_SWEOFCTL M2L31_PWM1_PWM_SWEOFCTL; // Offset: 0x288
    uM2L31_PWM1_PWM_SWEOFTRG M2L31_PWM1_PWM_SWEOFTRG; // Offset: 0x28c
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
    unsigned long Reserved108;
    unsigned long Reserved109;
    uM2L31_PWM1_PWM_PBUF0 M2L31_PWM1_PWM_PBUF0; // Offset: 0x304
    unsigned long Reserved110;
    uM2L31_PWM1_PWM_PBUF2 M2L31_PWM1_PWM_PBUF2; // Offset: 0x30c
    unsigned long Reserved111;
    uM2L31_PWM1_PWM_PBUF4 M2L31_PWM1_PWM_PBUF4; // Offset: 0x314
    unsigned long Reserved112;
    uM2L31_PWM1_PWM_CMPBUF0 M2L31_PWM1_PWM_CMPBUF0; // Offset: 0x31c
    uM2L31_PWM1_PWM_CMPBUF1 M2L31_PWM1_PWM_CMPBUF1; // Offset: 0x320
    uM2L31_PWM1_PWM_CMPBUF2 M2L31_PWM1_PWM_CMPBUF2; // Offset: 0x324
    uM2L31_PWM1_PWM_CMPBUF3 M2L31_PWM1_PWM_CMPBUF3; // Offset: 0x328
    uM2L31_PWM1_PWM_CMPBUF4 M2L31_PWM1_PWM_CMPBUF4; // Offset: 0x32c
    uM2L31_PWM1_PWM_CMPBUF5 M2L31_PWM1_PWM_CMPBUF5; // Offset: 0x330
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
    uM2L31_PWM1_PWM_IFACNT0 M2L31_PWM1_PWM_IFACNT0; // Offset: 0x368
    unsigned long Reserved126;
    uM2L31_PWM1_PWM_IFACNT2 M2L31_PWM1_PWM_IFACNT2; // Offset: 0x370
    unsigned long Reserved127;
    uM2L31_PWM1_PWM_IFACNT4 M2L31_PWM1_PWM_IFACNT4; // Offset: 0x378
} sM2L31_PWM1;

