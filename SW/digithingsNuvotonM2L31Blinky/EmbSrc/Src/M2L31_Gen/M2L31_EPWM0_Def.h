// Base Addres of EPWM0 = 0x40058000

#define M2L31_EPWM0_EPWM_CTL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CTRLD0 : 1;
    unsigned long CTRLD1 : 1;
    unsigned long CTRLD2 : 1;
    unsigned long CTRLD3 : 1;
    unsigned long CTRLD4 : 1;
    unsigned long CTRLD5 : 1;
    unsigned long Res0 : 2;
    unsigned long WINLDEN0 : 1;
    unsigned long WINLDEN1 : 1;
    unsigned long WINLDEN2 : 1;
    unsigned long WINLDEN3 : 1;
    unsigned long WINLDEN4 : 1;
    unsigned long WINLDEN5 : 1;
    unsigned long Res1 : 2;
    unsigned long IMMLDEN0 : 1;
    unsigned long IMMLDEN1 : 1;
    unsigned long IMMLDEN2 : 1;
    unsigned long IMMLDEN3 : 1;
    unsigned long IMMLDEN4 : 1;
    unsigned long IMMLDEN5 : 1;
    unsigned long Res2 : 2;
    unsigned long GROUPEN : 1;
    unsigned long Res3 : 5;
    unsigned long DBGHALT : 1;
    unsigned long DBGTRIOFF : 1;
} sM2L31_EPWM0_EPWM_CTL0;

typedef union {
    sM2L31_EPWM0_EPWM_CTL0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CTL0;

#define M2L31_EPWM0_EPWM_CTL1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTTYPE0 : 2;
    unsigned long CNTTYPE1 : 2;
    unsigned long CNTTYPE2 : 2;
    unsigned long CNTTYPE3 : 2;
    unsigned long CNTTYPE4 : 2;
    unsigned long CNTTYPE5 : 2;
    unsigned long Res0 : 4;
    unsigned long CNTMODE0 : 1;
    unsigned long CNTMODE1 : 1;
    unsigned long CNTMODE2 : 1;
    unsigned long CNTMODE3 : 1;
    unsigned long CNTMODE4 : 1;
    unsigned long CNTMODE5 : 1;
    unsigned long Res1 : 2;
    unsigned long OUTMODE0 : 1;
    unsigned long OUTMODE2 : 1;
    unsigned long OUTMODE4 : 1;
    unsigned long Res2 : 5;
} sM2L31_EPWM0_EPWM_CTL1;

typedef union {
    sM2L31_EPWM0_EPWM_CTL1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CTL1;

#define M2L31_EPWM0_EPWM_SYNC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PHSEN0 : 1;
    unsigned long PHSEN2 : 1;
    unsigned long PHSEN4 : 1;
    unsigned long Res0 : 5;
    unsigned long SINSRC0 : 2;
    unsigned long SINSRC2 : 2;
    unsigned long SINSRC4 : 2;
    unsigned long Res1 : 2;
    unsigned long SNFLTEN : 1;
    unsigned long SFLTCSEL : 3;
    unsigned long SFLTCNT : 3;
    unsigned long SINPINV : 1;
    unsigned long PHSDIR0 : 1;
    unsigned long PHSDIR2 : 1;
    unsigned long PHSDIR4 : 1;
    unsigned long Res2 : 5;
} sM2L31_EPWM0_EPWM_SYNC;

typedef union {
    sM2L31_EPWM0_EPWM_SYNC Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_SYNC;

#define M2L31_EPWM0_EPWM_SWSYNC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SWSYNC0 : 1;
    unsigned long SWSYNC2 : 1;
    unsigned long SWSYNC4 : 1;
    unsigned long Res0 : 29;
} sM2L31_EPWM0_EPWM_SWSYNC;

typedef union {
    sM2L31_EPWM0_EPWM_SWSYNC Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_SWSYNC;

#define M2L31_EPWM0_EPWM_CLKSRC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ECLKSRC0 : 3;
    unsigned long Res0 : 5;
    unsigned long ECLKSRC2 : 3;
    unsigned long Res1 : 5;
    unsigned long ECLKSRC4 : 3;
    unsigned long Res2 : 13;
} sM2L31_EPWM0_EPWM_CLKSRC;

typedef union {
    sM2L31_EPWM0_EPWM_CLKSRC Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CLKSRC;

#define M2L31_EPWM0_EPWM_CNTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTEN0 : 1;
    unsigned long CNTEN1 : 1;
    unsigned long CNTEN2 : 1;
    unsigned long CNTEN3 : 1;
    unsigned long CNTEN4 : 1;
    unsigned long CNTEN5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_CNTEN;

typedef union {
    sM2L31_EPWM0_EPWM_CNTEN Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CNTEN;

#define M2L31_EPWM0_EPWM_CNTCLR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTCLR0 : 1;
    unsigned long CNTCLR1 : 1;
    unsigned long CNTCLR2 : 1;
    unsigned long CNTCLR3 : 1;
    unsigned long CNTCLR4 : 1;
    unsigned long CNTCLR5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_CNTCLR;

typedef union {
    sM2L31_EPWM0_EPWM_CNTCLR Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CNTCLR;

#define M2L31_EPWM0_EPWM_LOAD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LOAD0 : 1;
    unsigned long LOAD1 : 1;
    unsigned long LOAD2 : 1;
    unsigned long LOAD3 : 1;
    unsigned long LOAD4 : 1;
    unsigned long LOAD5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_LOAD;

typedef union {
    sM2L31_EPWM0_EPWM_LOAD Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_LOAD;

#define M2L31_EPWM0_EPWM_PERIOD0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PERIOD : 16;
    unsigned long Res0 : 16;
} sM2L31_EPWM0_EPWM_PERIOD0;

typedef union {
    sM2L31_EPWM0_EPWM_PERIOD0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PERIOD0;

#define M2L31_EPWM0_EPWM_PERIOD1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PERIOD1;

typedef union {
    sM2L31_EPWM0_EPWM_PERIOD1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PERIOD1;

#define M2L31_EPWM0_EPWM_PERIOD2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PERIOD2;

typedef union {
    sM2L31_EPWM0_EPWM_PERIOD2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PERIOD2;

#define M2L31_EPWM0_EPWM_PERIOD3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PERIOD3;

typedef union {
    sM2L31_EPWM0_EPWM_PERIOD3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PERIOD3;

#define M2L31_EPWM0_EPWM_PERIOD4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PERIOD4;

typedef union {
    sM2L31_EPWM0_EPWM_PERIOD4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PERIOD4;

#define M2L31_EPWM0_EPWM_PERIOD5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PERIOD5;

typedef union {
    sM2L31_EPWM0_EPWM_PERIOD5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PERIOD5;

#define M2L31_EPWM0_EPWM_CMPDAT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMP : 16;
    unsigned long Res0 : 16;
} sM2L31_EPWM0_EPWM_CMPDAT0;

typedef union {
    sM2L31_EPWM0_EPWM_CMPDAT0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CMPDAT0;

#define M2L31_EPWM0_EPWM_CMPDAT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CMPDAT1;

typedef union {
    sM2L31_EPWM0_EPWM_CMPDAT1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CMPDAT1;

#define M2L31_EPWM0_EPWM_CMPDAT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CMPDAT2;

typedef union {
    sM2L31_EPWM0_EPWM_CMPDAT2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CMPDAT2;

#define M2L31_EPWM0_EPWM_CMPDAT3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CMPDAT3;

typedef union {
    sM2L31_EPWM0_EPWM_CMPDAT3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CMPDAT3;

#define M2L31_EPWM0_EPWM_CMPDAT4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CMPDAT4;

typedef union {
    sM2L31_EPWM0_EPWM_CMPDAT4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CMPDAT4;

#define M2L31_EPWM0_EPWM_CMPDAT5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CMPDAT5;

typedef union {
    sM2L31_EPWM0_EPWM_CMPDAT5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CMPDAT5;

#define M2L31_EPWM0_EPWM_PHS0_1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PHS : 16;
    unsigned long Res0 : 16;
} sM2L31_EPWM0_EPWM_PHS0_1;

typedef union {
    sM2L31_EPWM0_EPWM_PHS0_1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PHS0_1;

#define M2L31_EPWM0_EPWM_PHS2_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PHS2_3;

typedef union {
    sM2L31_EPWM0_EPWM_PHS2_3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PHS2_3;

#define M2L31_EPWM0_EPWM_PHS4_5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PHS4_5;

typedef union {
    sM2L31_EPWM0_EPWM_PHS4_5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PHS4_5;

#define M2L31_EPWM0_EPWM_CNT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 16;
    unsigned long DIRF : 1;
    unsigned long Res0 : 15;
} sM2L31_EPWM0_EPWM_CNT0;

typedef union {
    sM2L31_EPWM0_EPWM_CNT0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CNT0;

#define M2L31_EPWM0_EPWM_CNT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CNT1;

typedef union {
    sM2L31_EPWM0_EPWM_CNT1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CNT1;

#define M2L31_EPWM0_EPWM_CNT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CNT2;

typedef union {
    sM2L31_EPWM0_EPWM_CNT2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CNT2;

#define M2L31_EPWM0_EPWM_CNT3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CNT3;

typedef union {
    sM2L31_EPWM0_EPWM_CNT3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CNT3;

#define M2L31_EPWM0_EPWM_CNT4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CNT4;

typedef union {
    sM2L31_EPWM0_EPWM_CNT4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CNT4;

#define M2L31_EPWM0_EPWM_CNT5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CNT5;

typedef union {
    sM2L31_EPWM0_EPWM_CNT5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CNT5;

#define M2L31_EPWM0_EPWM_WGCTL0_RESET_VALUE 0x00000000
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
} sM2L31_EPWM0_EPWM_WGCTL0;

typedef union {
    sM2L31_EPWM0_EPWM_WGCTL0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_WGCTL0;

#define M2L31_EPWM0_EPWM_WGCTL1_RESET_VALUE 0x00000000
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
} sM2L31_EPWM0_EPWM_WGCTL1;

typedef union {
    sM2L31_EPWM0_EPWM_WGCTL1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_WGCTL1;

#define M2L31_EPWM0_EPWM_MSKEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MSKEN0 : 1;
    unsigned long MSKEN1 : 1;
    unsigned long MSKEN2 : 1;
    unsigned long MSKEN3 : 1;
    unsigned long MSKEN4 : 1;
    unsigned long MSKEN5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_MSKEN;

typedef union {
    sM2L31_EPWM0_EPWM_MSKEN Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_MSKEN;

#define M2L31_EPWM0_EPWM_MSK_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MSKDAT0 : 1;
    unsigned long MSKDAT1 : 1;
    unsigned long MSKDAT2 : 1;
    unsigned long MSKDAT3 : 1;
    unsigned long MSKDAT4 : 1;
    unsigned long MSKDAT5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_MSK;

typedef union {
    sM2L31_EPWM0_EPWM_MSK Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_MSK;

#define M2L31_EPWM0_EPWM_BNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BRK0NFEN : 1;
    unsigned long BRK0NFSEL : 3;
    unsigned long BRK0FCNT : 3;
    unsigned long BRK0PINV : 1;
    unsigned long BRK1NFEN : 1;
    unsigned long BRK1NFSEL : 3;
    unsigned long BRK1FCNT : 3;
    unsigned long BRK1PINV : 1;
    unsigned long BK0SRC : 1;
    unsigned long Res0 : 7;
    unsigned long BK1SRC : 1;
    unsigned long Res1 : 7;
} sM2L31_EPWM0_EPWM_BNF;

typedef union {
    sM2L31_EPWM0_EPWM_BNF Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_BNF;

#define M2L31_EPWM0_EPWM_FAILBRK_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CSSBRKEN : 1;
    unsigned long BODBRKEN : 1;
    unsigned long RAMBRKEN : 1;
    unsigned long CORBRKEN : 1;
    unsigned long Res0 : 28;
} sM2L31_EPWM0_EPWM_FAILBRK;

typedef union {
    sM2L31_EPWM0_EPWM_FAILBRK Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FAILBRK;

#define M2L31_EPWM0_EPWM_BRKCTL0_1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CPO0EBEN : 1;
    unsigned long CPO1EBEN : 1;
    unsigned long CPO2EBEN : 1;
    unsigned long Res0 : 1;
    unsigned long BRKP0EEN : 1;
    unsigned long BRKP1EEN : 1;
    unsigned long VBSNBKEN : 1;
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
} sM2L31_EPWM0_EPWM_BRKCTL0_1;

typedef union {
    sM2L31_EPWM0_EPWM_BRKCTL0_1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_BRKCTL0_1;

#define M2L31_EPWM0_EPWM_BRKCTL2_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_BRKCTL2_3;

typedef union {
    sM2L31_EPWM0_EPWM_BRKCTL2_3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_BRKCTL2_3;

#define M2L31_EPWM0_EPWM_BRKCTL4_5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_BRKCTL4_5;

typedef union {
    sM2L31_EPWM0_EPWM_BRKCTL4_5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_BRKCTL4_5;

#define M2L31_EPWM0_EPWM_POLCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PINV0 : 1;
    unsigned long PINV1 : 1;
    unsigned long PINV2 : 1;
    unsigned long PINV3 : 1;
    unsigned long PINV4 : 1;
    unsigned long PINV5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_POLCTL;

typedef union {
    sM2L31_EPWM0_EPWM_POLCTL Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_POLCTL;

#define M2L31_EPWM0_EPWM_POEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long POEN0 : 1;
    unsigned long POEN1 : 1;
    unsigned long POEN2 : 1;
    unsigned long POEN3 : 1;
    unsigned long POEN4 : 1;
    unsigned long POEN5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_POEN;

typedef union {
    sM2L31_EPWM0_EPWM_POEN Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_POEN;

#define M2L31_EPWM0_EPWM_SWBRK_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BRKETRG0 : 1;
    unsigned long BRKETRG2 : 1;
    unsigned long BRKETRG4 : 1;
    unsigned long Res0 : 5;
    unsigned long BRKLTRG0 : 1;
    unsigned long BRKLTRG2 : 1;
    unsigned long BRKLTRG4 : 1;
    unsigned long Res1 : 21;
} sM2L31_EPWM0_EPWM_SWBRK;

typedef union {
    sM2L31_EPWM0_EPWM_SWBRK Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_SWBRK;

#define M2L31_EPWM0_EPWM_INTEN0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ZIEN0 : 1;
    unsigned long ZIEN1 : 1;
    unsigned long ZIEN2 : 1;
    unsigned long ZIEN3 : 1;
    unsigned long ZIEN4 : 1;
    unsigned long ZIEN5 : 1;
    unsigned long Res0 : 2;
    unsigned long PIEN0 : 1;
    unsigned long PIEN1 : 1;
    unsigned long PIEN2 : 1;
    unsigned long PIEN3 : 1;
    unsigned long PIEN4 : 1;
    unsigned long PIEN5 : 1;
    unsigned long Res1 : 2;
    unsigned long CMPUIEN0 : 1;
    unsigned long CMPUIEN1 : 1;
    unsigned long CMPUIEN2 : 1;
    unsigned long CMPUIEN3 : 1;
    unsigned long CMPUIEN4 : 1;
    unsigned long CMPUIEN5 : 1;
    unsigned long Res2 : 2;
    unsigned long CMPDIEN0 : 1;
    unsigned long CMPDIEN1 : 1;
    unsigned long CMPDIEN2 : 1;
    unsigned long CMPDIEN3 : 1;
    unsigned long CMPDIEN4 : 1;
    unsigned long CMPDIEN5 : 1;
    unsigned long Res3 : 2;
} sM2L31_EPWM0_EPWM_INTEN0;

typedef union {
    sM2L31_EPWM0_EPWM_INTEN0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_INTEN0;

#define M2L31_EPWM0_EPWM_INTEN1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BRKEIEN0_1 : 1;
    unsigned long BRKEIEN2_3 : 1;
    unsigned long BRKEIEN4_5 : 1;
    unsigned long Res0 : 5;
    unsigned long BRKLIEN0_1 : 1;
    unsigned long BRKLIEN2_3 : 1;
    unsigned long BRKLIEN4_5 : 1;
    unsigned long Res1 : 21;
} sM2L31_EPWM0_EPWM_INTEN1;

typedef union {
    sM2L31_EPWM0_EPWM_INTEN1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_INTEN1;

#define M2L31_EPWM0_EPWM_INTSTS0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ZIF0 : 1;
    unsigned long ZIF1 : 1;
    unsigned long ZIF2 : 1;
    unsigned long ZIF3 : 1;
    unsigned long ZIF4 : 1;
    unsigned long ZIF5 : 1;
    unsigned long Res0 : 2;
    unsigned long PIF0 : 1;
    unsigned long PIF1 : 1;
    unsigned long PIF2 : 1;
    unsigned long PIF3 : 1;
    unsigned long PIF4 : 1;
    unsigned long PIF5 : 1;
    unsigned long Res1 : 2;
    unsigned long CMPUIF0 : 1;
    unsigned long CMPUIF1 : 1;
    unsigned long CMPUIF2 : 1;
    unsigned long CMPUIF3 : 1;
    unsigned long CMPUIF4 : 1;
    unsigned long CMPUIF5 : 1;
    unsigned long Res2 : 2;
    unsigned long CMPDIF0 : 1;
    unsigned long CMPDIF1 : 1;
    unsigned long CMPDIF2 : 1;
    unsigned long CMPDIF3 : 1;
    unsigned long CMPDIF4 : 1;
    unsigned long CMPDIF5 : 1;
    unsigned long Res3 : 2;
} sM2L31_EPWM0_EPWM_INTSTS0;

typedef union {
    sM2L31_EPWM0_EPWM_INTSTS0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_INTSTS0;

#define M2L31_EPWM0_EPWM_INTSTS1_RESET_VALUE 0x00000000
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
} sM2L31_EPWM0_EPWM_INTSTS1;

typedef union {
    sM2L31_EPWM0_EPWM_INTSTS1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_INTSTS1;

#define M2L31_EPWM0_EPWM_DACTRGEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ZTE0 : 1;
    unsigned long ZTE1 : 1;
    unsigned long ZTE2 : 1;
    unsigned long ZTE3 : 1;
    unsigned long ZTE4 : 1;
    unsigned long ZTE5 : 1;
    unsigned long Res0 : 2;
    unsigned long PTE0 : 1;
    unsigned long PTE1 : 1;
    unsigned long PTE2 : 1;
    unsigned long PTE3 : 1;
    unsigned long PTE4 : 1;
    unsigned long PTE5 : 1;
    unsigned long Res1 : 2;
    unsigned long CUTRGEN0 : 1;
    unsigned long CUTRGEN1 : 1;
    unsigned long CUTRGEN2 : 1;
    unsigned long CUTRGEN3 : 1;
    unsigned long CUTRGEN4 : 1;
    unsigned long CUTRGEN5 : 1;
    unsigned long Res2 : 2;
    unsigned long CDTRGEN0 : 1;
    unsigned long CDTRGEN1 : 1;
    unsigned long CDTRGEN2 : 1;
    unsigned long CDTRGEN3 : 1;
    unsigned long CDTRGEN4 : 1;
    unsigned long CDTRGEN5 : 1;
    unsigned long Res3 : 2;
} sM2L31_EPWM0_EPWM_DACTRGEN;

typedef union {
    sM2L31_EPWM0_EPWM_DACTRGEN Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_DACTRGEN;

#define M2L31_EPWM0_EPWM_EADCTS0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TRGSEL0 : 5;
    unsigned long Res0 : 2;
    unsigned long TRGEN0 : 1;
    unsigned long TRGSEL1 : 5;
    unsigned long Res1 : 2;
    unsigned long TRGEN1 : 1;
    unsigned long TRGSEL2 : 5;
    unsigned long Res2 : 2;
    unsigned long TRGEN2 : 1;
    unsigned long TRGSEL3 : 5;
    unsigned long Res3 : 2;
    unsigned long TRGEN3 : 1;
} sM2L31_EPWM0_EPWM_EADCTS0;

typedef union {
    sM2L31_EPWM0_EPWM_EADCTS0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EADCTS0;

#define M2L31_EPWM0_EPWM_EADCTS1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TRGSEL4 : 5;
    unsigned long Res0 : 2;
    unsigned long TRGEN4 : 1;
    unsigned long TRGSEL5 : 5;
    unsigned long Res1 : 2;
    unsigned long TRGEN5 : 1;
    unsigned long Res2 : 16;
} sM2L31_EPWM0_EPWM_EADCTS1;

typedef union {
    sM2L31_EPWM0_EPWM_EADCTS1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EADCTS1;

#define M2L31_EPWM0_EPWM_FTCMPDAT0_1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FTCMP : 16;
    unsigned long Res0 : 16;
} sM2L31_EPWM0_EPWM_FTCMPDAT0_1;

typedef union {
    sM2L31_EPWM0_EPWM_FTCMPDAT0_1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FTCMPDAT0_1;

#define M2L31_EPWM0_EPWM_FTCMPDAT2_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FTCMPDAT2_3;

typedef union {
    sM2L31_EPWM0_EPWM_FTCMPDAT2_3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FTCMPDAT2_3;

#define M2L31_EPWM0_EPWM_FTCMPDAT4_5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FTCMPDAT4_5;

typedef union {
    sM2L31_EPWM0_EPWM_FTCMPDAT4_5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FTCMPDAT4_5;

#define M2L31_EPWM0_EPWM_SSCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SSEN0 : 1;
    unsigned long SSEN1 : 1;
    unsigned long SSEN2 : 1;
    unsigned long SSEN3 : 1;
    unsigned long SSEN4 : 1;
    unsigned long SSEN5 : 1;
    unsigned long Res0 : 2;
    unsigned long SSRC : 2;
    unsigned long Res1 : 22;
} sM2L31_EPWM0_EPWM_SSCTL;

typedef union {
    sM2L31_EPWM0_EPWM_SSCTL Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_SSCTL;

#define M2L31_EPWM0_EPWM_SSTRG_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTSEN : 1;
    unsigned long Res0 : 31;
} sM2L31_EPWM0_EPWM_SSTRG;

typedef union {
    sM2L31_EPWM0_EPWM_SSTRG Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_SSTRG;

#define M2L31_EPWM0_EPWM_LEBCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LEBEN : 1;
    unsigned long Res0 : 7;
    unsigned long SRCEN0 : 1;
    unsigned long SRCEN2 : 1;
    unsigned long SRCEN4 : 1;
    unsigned long Res1 : 5;
    unsigned long TRGTYPE : 2;
    unsigned long Res2 : 14;
} sM2L31_EPWM0_EPWM_LEBCTL;

typedef union {
    sM2L31_EPWM0_EPWM_LEBCTL Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_LEBCTL;

#define M2L31_EPWM0_EPWM_LEBCNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LEBCNT : 9;
    unsigned long Res0 : 23;
} sM2L31_EPWM0_EPWM_LEBCNT;

typedef union {
    sM2L31_EPWM0_EPWM_LEBCNT Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_LEBCNT;

#define M2L31_EPWM0_EPWM_STATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTMAXF0 : 1;
    unsigned long CNTMAXF1 : 1;
    unsigned long CNTMAXF2 : 1;
    unsigned long CNTMAXF3 : 1;
    unsigned long CNTMAXF4 : 1;
    unsigned long CNTMAXF5 : 1;
    unsigned long Res0 : 2;
    unsigned long SYNCINF0 : 1;
    unsigned long SYNCINF2 : 1;
    unsigned long SYNCINF4 : 1;
    unsigned long Res1 : 5;
    unsigned long EADCTRGF0 : 1;
    unsigned long EADCTRGF1 : 1;
    unsigned long EADCTRGF2 : 1;
    unsigned long EADCTRGF3 : 1;
    unsigned long EADCTRGF4 : 1;
    unsigned long EADCTRGF5 : 1;
    unsigned long Res2 : 1;
    unsigned long LPADCTRGF : 1;
    unsigned long DACTRGF : 1;
    unsigned long Res3 : 7;
} sM2L31_EPWM0_EPWM_STATUS;

typedef union {
    sM2L31_EPWM0_EPWM_STATUS Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_STATUS;

#define M2L31_EPWM0_EPWM_IFA0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IFACNT : 16;
    unsigned long Res0 : 8;
    unsigned long STPMOD : 1;
    unsigned long Res1 : 3;
    unsigned long IFASEL : 2;
    unsigned long Res2 : 1;
    unsigned long IFAEN : 1;
} sM2L31_EPWM0_EPWM_IFA0;

typedef union {
    sM2L31_EPWM0_EPWM_IFA0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_IFA0;

#define M2L31_EPWM0_EPWM_IFA1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_IFA1;

typedef union {
    sM2L31_EPWM0_EPWM_IFA1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_IFA1;

#define M2L31_EPWM0_EPWM_IFA2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_IFA2;

typedef union {
    sM2L31_EPWM0_EPWM_IFA2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_IFA2;

#define M2L31_EPWM0_EPWM_IFA3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_IFA3;

typedef union {
    sM2L31_EPWM0_EPWM_IFA3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_IFA3;

#define M2L31_EPWM0_EPWM_IFA4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_IFA4;

typedef union {
    sM2L31_EPWM0_EPWM_IFA4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_IFA4;

#define M2L31_EPWM0_EPWM_IFA5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_IFA5;

typedef union {
    sM2L31_EPWM0_EPWM_IFA5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_IFA5;

#define M2L31_EPWM0_EPWM_AINTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IFAIF0 : 1;
    unsigned long IFAIF1 : 1;
    unsigned long IFAIF2 : 1;
    unsigned long IFAIF3 : 1;
    unsigned long IFAIF4 : 1;
    unsigned long IFAIF5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_AINTSTS;

typedef union {
    sM2L31_EPWM0_EPWM_AINTSTS Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_AINTSTS;

#define M2L31_EPWM0_EPWM_AINTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IFAIEN0 : 1;
    unsigned long IFAIEN1 : 1;
    unsigned long IFAIEN2 : 1;
    unsigned long IFAIEN3 : 1;
    unsigned long IFAIEN4 : 1;
    unsigned long IFAIEN5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_AINTEN;

typedef union {
    sM2L31_EPWM0_EPWM_AINTEN Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_AINTEN;

#define M2L31_EPWM0_EPWM_APDMACTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long APDMAEN0 : 1;
    unsigned long APDMAEN1 : 1;
    unsigned long APDMAEN2 : 1;
    unsigned long APDMAEN3 : 1;
    unsigned long APDMAEN4 : 1;
    unsigned long APDMAEN5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_APDMACTL;

typedef union {
    sM2L31_EPWM0_EPWM_APDMACTL Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_APDMACTL;

#define M2L31_EPWM0_EPWM_FDEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FDEN0 : 1;
    unsigned long FDEN1 : 1;
    unsigned long FDEN2 : 1;
    unsigned long FDEN3 : 1;
    unsigned long FDEN4 : 1;
    unsigned long FDEN5 : 1;
    unsigned long Res0 : 2;
    unsigned long FDODIS0 : 1;
    unsigned long FDODIS1 : 1;
    unsigned long FDODIS2 : 1;
    unsigned long FDODIS3 : 1;
    unsigned long FDODIS4 : 1;
    unsigned long FDODIS5 : 1;
    unsigned long Res1 : 2;
    unsigned long FDCKS0 : 1;
    unsigned long FDCKS1 : 1;
    unsigned long FDCKS2 : 1;
    unsigned long FDCKS3 : 1;
    unsigned long FDCKS4 : 1;
    unsigned long FDCKS5 : 1;
    unsigned long Res2 : 10;
} sM2L31_EPWM0_EPWM_FDEN;

typedef union {
    sM2L31_EPWM0_EPWM_FDEN Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FDEN;

#define M2L31_EPWM0_EPWM_FDCTL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TRMSKCNT : 7;
    unsigned long Res0 : 8;
    unsigned long FDMSKEN : 1;
    unsigned long DGSMPCYC : 3;
    unsigned long Res1 : 9;
    unsigned long FDCKSEL : 2;
    unsigned long Res2 : 1;
    unsigned long FDDGEN : 1;
} sM2L31_EPWM0_EPWM_FDCTL0;

typedef union {
    sM2L31_EPWM0_EPWM_FDCTL0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FDCTL0;

#define M2L31_EPWM0_EPWM_FDCTL1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FDCTL1;

typedef union {
    sM2L31_EPWM0_EPWM_FDCTL1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FDCTL1;

#define M2L31_EPWM0_EPWM_FDCTL2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FDCTL2;

typedef union {
    sM2L31_EPWM0_EPWM_FDCTL2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FDCTL2;

#define M2L31_EPWM0_EPWM_FDCTL3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FDCTL3;

typedef union {
    sM2L31_EPWM0_EPWM_FDCTL3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FDCTL3;

#define M2L31_EPWM0_EPWM_FDCTL4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FDCTL4;

typedef union {
    sM2L31_EPWM0_EPWM_FDCTL4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FDCTL4;

#define M2L31_EPWM0_EPWM_FDCTL5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FDCTL5;

typedef union {
    sM2L31_EPWM0_EPWM_FDCTL5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FDCTL5;

#define M2L31_EPWM0_EPWM_FDIEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FDIEN0 : 1;
    unsigned long FDIEN1 : 1;
    unsigned long FDIEN2 : 1;
    unsigned long FDIEN3 : 1;
    unsigned long FDIEN4 : 1;
    unsigned long FDIEN5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_FDIEN;

typedef union {
    sM2L31_EPWM0_EPWM_FDIEN Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FDIEN;

#define M2L31_EPWM0_EPWM_FDSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FDIFn : 6;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_FDSTS;

typedef union {
    sM2L31_EPWM0_EPWM_FDSTS Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FDSTS;

#define M2L31_EPWM0_EPWM_EADCPSCCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PSCEN0 : 1;
    unsigned long PSCEN1 : 1;
    unsigned long PSCEN2 : 1;
    unsigned long PSCEN3 : 1;
    unsigned long PSCEN4 : 1;
    unsigned long PSCEN5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_EADCPSCCTL;

typedef union {
    sM2L31_EPWM0_EPWM_EADCPSCCTL Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EADCPSCCTL;

#define M2L31_EPWM0_EPWM_EADCPSC0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EADCPSC0 : 4;
    unsigned long Res0 : 4;
    unsigned long EADCPSC1 : 4;
    unsigned long Res1 : 4;
    unsigned long EADCPSC2 : 4;
    unsigned long Res2 : 4;
    unsigned long EADCPSC3 : 4;
    unsigned long Res3 : 4;
} sM2L31_EPWM0_EPWM_EADCPSC0;

typedef union {
    sM2L31_EPWM0_EPWM_EADCPSC0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EADCPSC0;

#define M2L31_EPWM0_EPWM_EADCPSC1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EADCPSC4 : 4;
    unsigned long Res0 : 4;
    unsigned long EADCPSC5 : 4;
    unsigned long Res1 : 20;
} sM2L31_EPWM0_EPWM_EADCPSC1;

typedef union {
    sM2L31_EPWM0_EPWM_EADCPSC1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EADCPSC1;

#define M2L31_EPWM0_EPWM_EADCPSCNT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PSCNT0 : 4;
    unsigned long Res0 : 4;
    unsigned long PSCNT1 : 4;
    unsigned long Res1 : 4;
    unsigned long PSCNT2 : 4;
    unsigned long Res2 : 4;
    unsigned long PSCNT3 : 4;
    unsigned long Res3 : 4;
} sM2L31_EPWM0_EPWM_EADCPSCNT0;

typedef union {
    sM2L31_EPWM0_EPWM_EADCPSCNT0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EADCPSCNT0;

#define M2L31_EPWM0_EPWM_EADCPSCNT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PSCNT4 : 4;
    unsigned long Res0 : 4;
    unsigned long PSCNT5 : 4;
    unsigned long Res1 : 20;
} sM2L31_EPWM0_EPWM_EADCPSCNT1;

typedef union {
    sM2L31_EPWM0_EPWM_EADCPSCNT1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EADCPSCNT1;

#define M2L31_EPWM0_EPWM_CAPINEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPINEN0 : 1;
    unsigned long CAPINEN1 : 1;
    unsigned long CAPINEN2 : 1;
    unsigned long CAPINEN3 : 1;
    unsigned long CAPINEN4 : 1;
    unsigned long CAPINEN5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_CAPINEN;

typedef union {
    sM2L31_EPWM0_EPWM_CAPINEN Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CAPINEN;

#define M2L31_EPWM0_EPWM_CAPCTL_RESET_VALUE 0x00000000
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
} sM2L31_EPWM0_EPWM_CAPCTL;

typedef union {
    sM2L31_EPWM0_EPWM_CAPCTL Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CAPCTL;

#define M2L31_EPWM0_EPWM_CAPSTS_RESET_VALUE 0x00000000
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
} sM2L31_EPWM0_EPWM_CAPSTS;

typedef union {
    sM2L31_EPWM0_EPWM_CAPSTS Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CAPSTS;

#define M2L31_EPWM0_EPWM_RCAPDAT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RCAPDAT : 16;
    unsigned long Res0 : 16;
} sM2L31_EPWM0_EPWM_RCAPDAT0;

typedef union {
    sM2L31_EPWM0_EPWM_RCAPDAT0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_RCAPDAT0;

#define M2L31_EPWM0_EPWM_FCAPDAT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FCAPDAT : 16;
    unsigned long Res0 : 16;
} sM2L31_EPWM0_EPWM_FCAPDAT0;

typedef union {
    sM2L31_EPWM0_EPWM_FCAPDAT0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FCAPDAT0;

#define M2L31_EPWM0_EPWM_RCAPDAT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_RCAPDAT1;

typedef union {
    sM2L31_EPWM0_EPWM_RCAPDAT1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_RCAPDAT1;

#define M2L31_EPWM0_EPWM_FCAPDAT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FCAPDAT1;

typedef union {
    sM2L31_EPWM0_EPWM_FCAPDAT1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FCAPDAT1;

#define M2L31_EPWM0_EPWM_RCAPDAT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_RCAPDAT2;

typedef union {
    sM2L31_EPWM0_EPWM_RCAPDAT2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_RCAPDAT2;

#define M2L31_EPWM0_EPWM_FCAPDAT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FCAPDAT2;

typedef union {
    sM2L31_EPWM0_EPWM_FCAPDAT2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FCAPDAT2;

#define M2L31_EPWM0_EPWM_RCAPDAT3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_RCAPDAT3;

typedef union {
    sM2L31_EPWM0_EPWM_RCAPDAT3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_RCAPDAT3;

#define M2L31_EPWM0_EPWM_FCAPDAT3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FCAPDAT3;

typedef union {
    sM2L31_EPWM0_EPWM_FCAPDAT3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FCAPDAT3;

#define M2L31_EPWM0_EPWM_RCAPDAT4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_RCAPDAT4;

typedef union {
    sM2L31_EPWM0_EPWM_RCAPDAT4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_RCAPDAT4;

#define M2L31_EPWM0_EPWM_FCAPDAT4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FCAPDAT4;

typedef union {
    sM2L31_EPWM0_EPWM_FCAPDAT4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FCAPDAT4;

#define M2L31_EPWM0_EPWM_RCAPDAT5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_RCAPDAT5;

typedef union {
    sM2L31_EPWM0_EPWM_RCAPDAT5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_RCAPDAT5;

#define M2L31_EPWM0_EPWM_FCAPDAT5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FCAPDAT5;

typedef union {
    sM2L31_EPWM0_EPWM_FCAPDAT5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FCAPDAT5;

#define M2L31_EPWM0_EPWM_PDMACTL_RESET_VALUE 0x00000000
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
} sM2L31_EPWM0_EPWM_PDMACTL;

typedef union {
    sM2L31_EPWM0_EPWM_PDMACTL Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PDMACTL;

#define M2L31_EPWM0_EPWM_PDMACAP0_1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPBUF : 16;
    unsigned long Res0 : 16;
} sM2L31_EPWM0_EPWM_PDMACAP0_1;

typedef union {
    sM2L31_EPWM0_EPWM_PDMACAP0_1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PDMACAP0_1;

#define M2L31_EPWM0_EPWM_PDMACAP2_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PDMACAP2_3;

typedef union {
    sM2L31_EPWM0_EPWM_PDMACAP2_3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PDMACAP2_3;

#define M2L31_EPWM0_EPWM_PDMACAP4_5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PDMACAP4_5;

typedef union {
    sM2L31_EPWM0_EPWM_PDMACAP4_5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PDMACAP4_5;

#define M2L31_EPWM0_EPWM_CAPIEN_RESET_VALUE 0x00000000
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
} sM2L31_EPWM0_EPWM_CAPIEN;

typedef union {
    sM2L31_EPWM0_EPWM_CAPIEN Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CAPIEN;

#define M2L31_EPWM0_EPWM_CAPIF_RESET_VALUE 0x00000000
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
} sM2L31_EPWM0_EPWM_CAPIF;

typedef union {
    sM2L31_EPWM0_EPWM_CAPIF Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CAPIF;

#define M2L31_EPWM0_EPWM_CAPNF0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPNFEN : 1;
    unsigned long Res0 : 3;
    unsigned long CAPNFSEL : 3;
    unsigned long Res1 : 1;
    unsigned long CAPNFCNT : 3;
    unsigned long Res2 : 21;
} sM2L31_EPWM0_EPWM_CAPNF0;

typedef union {
    sM2L31_EPWM0_EPWM_CAPNF0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CAPNF0;

#define M2L31_EPWM0_EPWM_CAPNF1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CAPNF1;

typedef union {
    sM2L31_EPWM0_EPWM_CAPNF1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CAPNF1;

#define M2L31_EPWM0_EPWM_CAPNF2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CAPNF2;

typedef union {
    sM2L31_EPWM0_EPWM_CAPNF2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CAPNF2;

#define M2L31_EPWM0_EPWM_CAPNF3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CAPNF3;

typedef union {
    sM2L31_EPWM0_EPWM_CAPNF3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CAPNF3;

#define M2L31_EPWM0_EPWM_CAPNF4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CAPNF4;

typedef union {
    sM2L31_EPWM0_EPWM_CAPNF4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CAPNF4;

#define M2L31_EPWM0_EPWM_CAPNF5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CAPNF5;

typedef union {
    sM2L31_EPWM0_EPWM_CAPNF5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CAPNF5;

#define M2L31_EPWM0_EPWM_EXTETCTL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EXTETEN : 1;
    unsigned long Res0 : 3;
    unsigned long CNTACTS : 2;
    unsigned long Res1 : 2;
    unsigned long EXTTRGS : 4;
    unsigned long Res2 : 20;
} sM2L31_EPWM0_EPWM_EXTETCTL0;

typedef union {
    sM2L31_EPWM0_EPWM_EXTETCTL0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EXTETCTL0;

#define M2L31_EPWM0_EPWM_EXTETCTL1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_EXTETCTL1;

typedef union {
    sM2L31_EPWM0_EPWM_EXTETCTL1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EXTETCTL1;

#define M2L31_EPWM0_EPWM_EXTETCTL2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_EXTETCTL2;

typedef union {
    sM2L31_EPWM0_EPWM_EXTETCTL2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EXTETCTL2;

#define M2L31_EPWM0_EPWM_EXTETCTL3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_EXTETCTL3;

typedef union {
    sM2L31_EPWM0_EPWM_EXTETCTL3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EXTETCTL3;

#define M2L31_EPWM0_EPWM_EXTETCTL4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_EXTETCTL4;

typedef union {
    sM2L31_EPWM0_EPWM_EXTETCTL4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EXTETCTL4;

#define M2L31_EPWM0_EPWM_EXTETCTL5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_EXTETCTL5;

typedef union {
    sM2L31_EPWM0_EPWM_EXTETCTL5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_EXTETCTL5;

#define M2L31_EPWM0_EPWM_SWEOFCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OUTACTS0 : 2;
    unsigned long OUTACTS1 : 2;
    unsigned long OUTACTS2 : 2;
    unsigned long OUTACTS3 : 2;
    unsigned long OUTACTS4 : 2;
    unsigned long OUTACTS5 : 2;
    unsigned long Res0 : 20;
} sM2L31_EPWM0_EPWM_SWEOFCTL;

typedef union {
    sM2L31_EPWM0_EPWM_SWEOFCTL Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_SWEOFCTL;

#define M2L31_EPWM0_EPWM_SWEOFTRG_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SWETRG0 : 1;
    unsigned long SWETRG1 : 1;
    unsigned long SWETRG2 : 1;
    unsigned long SWETRG3 : 1;
    unsigned long SWETRG4 : 1;
    unsigned long SWETRG5 : 1;
    unsigned long Res0 : 26;
} sM2L31_EPWM0_EPWM_SWEOFTRG;

typedef union {
    sM2L31_EPWM0_EPWM_SWEOFTRG Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_SWEOFTRG;

#define M2L31_EPWM0_EPWM_CLKPSC0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CLKPSC : 12;
    unsigned long Res0 : 20;
} sM2L31_EPWM0_EPWM_CLKPSC0;

typedef union {
    sM2L31_EPWM0_EPWM_CLKPSC0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CLKPSC0;

#define M2L31_EPWM0_EPWM_CLKPSC1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CLKPSC1;

typedef union {
    sM2L31_EPWM0_EPWM_CLKPSC1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CLKPSC1;

#define M2L31_EPWM0_EPWM_CLKPSC2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CLKPSC2;

typedef union {
    sM2L31_EPWM0_EPWM_CLKPSC2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CLKPSC2;

#define M2L31_EPWM0_EPWM_CLKPSC3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CLKPSC3;

typedef union {
    sM2L31_EPWM0_EPWM_CLKPSC3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CLKPSC3;

#define M2L31_EPWM0_EPWM_CLKPSC4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CLKPSC4;

typedef union {
    sM2L31_EPWM0_EPWM_CLKPSC4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CLKPSC4;

#define M2L31_EPWM0_EPWM_CLKPSC5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CLKPSC5;

typedef union {
    sM2L31_EPWM0_EPWM_CLKPSC5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CLKPSC5;

#define M2L31_EPWM0_EPWM_RDTCNT0_1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RDTCNT : 12;
    unsigned long Res0 : 20;
} sM2L31_EPWM0_EPWM_RDTCNT0_1;

typedef union {
    sM2L31_EPWM0_EPWM_RDTCNT0_1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_RDTCNT0_1;

#define M2L31_EPWM0_EPWM_RDTCNT2_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_RDTCNT2_3;

typedef union {
    sM2L31_EPWM0_EPWM_RDTCNT2_3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_RDTCNT2_3;

#define M2L31_EPWM0_EPWM_RDTCNT4_5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_RDTCNT4_5;

typedef union {
    sM2L31_EPWM0_EPWM_RDTCNT4_5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_RDTCNT4_5;

#define M2L31_EPWM0_EPWM_FDTCNT0_1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FDTCNT : 12;
    unsigned long Res0 : 20;
} sM2L31_EPWM0_EPWM_FDTCNT0_1;

typedef union {
    sM2L31_EPWM0_EPWM_FDTCNT0_1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FDTCNT0_1;

#define M2L31_EPWM0_EPWM_FDTCNT2_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FDTCNT2_3;

typedef union {
    sM2L31_EPWM0_EPWM_FDTCNT2_3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FDTCNT2_3;

#define M2L31_EPWM0_EPWM_FDTCNT4_5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FDTCNT4_5;

typedef union {
    sM2L31_EPWM0_EPWM_FDTCNT4_5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FDTCNT4_5;

#define M2L31_EPWM0_EPWM_DTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RDTEN0 : 1;
    unsigned long RDTEN2 : 1;
    unsigned long RDTEN4 : 1;
    unsigned long Res0 : 5;
    unsigned long FDTEN0 : 1;
    unsigned long FDTEN2 : 1;
    unsigned long FDTEN4 : 1;
    unsigned long Res1 : 5;
    unsigned long DTCKSELn : 1;
    unsigned long Res2 : 15;
} sM2L31_EPWM0_EPWM_DTCTL;

typedef union {
    sM2L31_EPWM0_EPWM_DTCTL Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_DTCTL;

#define M2L31_EPWM0_EPWM_PBUF0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PBUF : 16;
    unsigned long Res0 : 16;
} sM2L31_EPWM0_EPWM_PBUF0;

typedef union {
    sM2L31_EPWM0_EPWM_PBUF0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PBUF0;

#define M2L31_EPWM0_EPWM_PBUF1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PBUF1;

typedef union {
    sM2L31_EPWM0_EPWM_PBUF1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PBUF1;

#define M2L31_EPWM0_EPWM_PBUF2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PBUF2;

typedef union {
    sM2L31_EPWM0_EPWM_PBUF2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PBUF2;

#define M2L31_EPWM0_EPWM_PBUF3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PBUF3;

typedef union {
    sM2L31_EPWM0_EPWM_PBUF3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PBUF3;

#define M2L31_EPWM0_EPWM_PBUF4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PBUF4;

typedef union {
    sM2L31_EPWM0_EPWM_PBUF4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PBUF4;

#define M2L31_EPWM0_EPWM_PBUF5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_PBUF5;

typedef union {
    sM2L31_EPWM0_EPWM_PBUF5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_PBUF5;

#define M2L31_EPWM0_EPWM_CMPBUF0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMPBUF : 16;
    unsigned long Res0 : 16;
} sM2L31_EPWM0_EPWM_CMPBUF0;

typedef union {
    sM2L31_EPWM0_EPWM_CMPBUF0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CMPBUF0;

#define M2L31_EPWM0_EPWM_CMPBUF1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CMPBUF1;

typedef union {
    sM2L31_EPWM0_EPWM_CMPBUF1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CMPBUF1;

#define M2L31_EPWM0_EPWM_CMPBUF2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CMPBUF2;

typedef union {
    sM2L31_EPWM0_EPWM_CMPBUF2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CMPBUF2;

#define M2L31_EPWM0_EPWM_CMPBUF3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CMPBUF3;

typedef union {
    sM2L31_EPWM0_EPWM_CMPBUF3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CMPBUF3;

#define M2L31_EPWM0_EPWM_CMPBUF4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CMPBUF4;

typedef union {
    sM2L31_EPWM0_EPWM_CMPBUF4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CMPBUF4;

#define M2L31_EPWM0_EPWM_CMPBUF5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CMPBUF5;

typedef union {
    sM2L31_EPWM0_EPWM_CMPBUF5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CMPBUF5;

#define M2L31_EPWM0_EPWM_FTCBUF0_1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FTCMPBUF : 16;
    unsigned long Res0 : 16;
} sM2L31_EPWM0_EPWM_FTCBUF0_1;

typedef union {
    sM2L31_EPWM0_EPWM_FTCBUF0_1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FTCBUF0_1;

#define M2L31_EPWM0_EPWM_FTCBUF2_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FTCBUF2_3;

typedef union {
    sM2L31_EPWM0_EPWM_FTCBUF2_3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FTCBUF2_3;

#define M2L31_EPWM0_EPWM_FTCBUF4_5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_FTCBUF4_5;

typedef union {
    sM2L31_EPWM0_EPWM_FTCBUF4_5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FTCBUF4_5;

#define M2L31_EPWM0_EPWM_FTCI_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FTCMU0 : 1;
    unsigned long FTCMU2 : 1;
    unsigned long FTCMU4 : 1;
    unsigned long Res0 : 5;
    unsigned long FTCMD0 : 1;
    unsigned long FTCMD2 : 1;
    unsigned long FTCMD4 : 1;
    unsigned long Res1 : 21;
} sM2L31_EPWM0_EPWM_FTCI;

typedef union {
    sM2L31_EPWM0_EPWM_FTCI Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_FTCI;

#define M2L31_EPWM0_EPWM_CPSCBUF0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CPSCBUF : 12;
    unsigned long Res0 : 20;
} sM2L31_EPWM0_EPWM_CPSCBUF0;

typedef union {
    sM2L31_EPWM0_EPWM_CPSCBUF0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CPSCBUF0;

#define M2L31_EPWM0_EPWM_CPSCBUF1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CPSCBUF1;

typedef union {
    sM2L31_EPWM0_EPWM_CPSCBUF1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CPSCBUF1;

#define M2L31_EPWM0_EPWM_CPSCBUF2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CPSCBUF2;

typedef union {
    sM2L31_EPWM0_EPWM_CPSCBUF2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CPSCBUF2;

#define M2L31_EPWM0_EPWM_CPSCBUF3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CPSCBUF3;

typedef union {
    sM2L31_EPWM0_EPWM_CPSCBUF3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CPSCBUF3;

#define M2L31_EPWM0_EPWM_CPSCBUF4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CPSCBUF4;

typedef union {
    sM2L31_EPWM0_EPWM_CPSCBUF4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CPSCBUF4;

#define M2L31_EPWM0_EPWM_CPSCBUF5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_CPSCBUF5;

typedef union {
    sM2L31_EPWM0_EPWM_CPSCBUF5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_CPSCBUF5;

#define M2L31_EPWM0_EPWM_IFACNT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ACUCNT : 16;
    unsigned long Res0 : 16;
} sM2L31_EPWM0_EPWM_IFACNT0;

typedef union {
    sM2L31_EPWM0_EPWM_IFACNT0 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_IFACNT0;

#define M2L31_EPWM0_EPWM_IFACNT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_IFACNT1;

typedef union {
    sM2L31_EPWM0_EPWM_IFACNT1 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_IFACNT1;

#define M2L31_EPWM0_EPWM_IFACNT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_IFACNT2;

typedef union {
    sM2L31_EPWM0_EPWM_IFACNT2 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_IFACNT2;

#define M2L31_EPWM0_EPWM_IFACNT3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_IFACNT3;

typedef union {
    sM2L31_EPWM0_EPWM_IFACNT3 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_IFACNT3;

#define M2L31_EPWM0_EPWM_IFACNT4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_IFACNT4;

typedef union {
    sM2L31_EPWM0_EPWM_IFACNT4 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_IFACNT4;

#define M2L31_EPWM0_EPWM_IFACNT5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_EPWM0_EPWM_IFACNT5;

typedef union {
    sM2L31_EPWM0_EPWM_IFACNT5 Bit;
    unsigned long  All;
} uM2L31_EPWM0_EPWM_IFACNT5;

typedef struct {
    uM2L31_EPWM0_EPWM_CTL0 M2L31_EPWM0_EPWM_CTL0; // Offset: 0x0
    uM2L31_EPWM0_EPWM_CTL1 M2L31_EPWM0_EPWM_CTL1; // Offset: 0x4
    uM2L31_EPWM0_EPWM_SYNC M2L31_EPWM0_EPWM_SYNC; // Offset: 0x8
    uM2L31_EPWM0_EPWM_SWSYNC M2L31_EPWM0_EPWM_SWSYNC; // Offset: 0xc
    uM2L31_EPWM0_EPWM_CLKSRC M2L31_EPWM0_EPWM_CLKSRC; // Offset: 0x10
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    uM2L31_EPWM0_EPWM_CNTEN M2L31_EPWM0_EPWM_CNTEN; // Offset: 0x20
    uM2L31_EPWM0_EPWM_CNTCLR M2L31_EPWM0_EPWM_CNTCLR; // Offset: 0x24
    uM2L31_EPWM0_EPWM_LOAD M2L31_EPWM0_EPWM_LOAD; // Offset: 0x28
    unsigned long Reserved3;
    uM2L31_EPWM0_EPWM_PERIOD0 M2L31_EPWM0_EPWM_PERIOD0; // Offset: 0x30
    uM2L31_EPWM0_EPWM_PERIOD1 M2L31_EPWM0_EPWM_PERIOD1; // Offset: 0x34
    uM2L31_EPWM0_EPWM_PERIOD2 M2L31_EPWM0_EPWM_PERIOD2; // Offset: 0x38
    uM2L31_EPWM0_EPWM_PERIOD3 M2L31_EPWM0_EPWM_PERIOD3; // Offset: 0x3c
    uM2L31_EPWM0_EPWM_PERIOD4 M2L31_EPWM0_EPWM_PERIOD4; // Offset: 0x40
    uM2L31_EPWM0_EPWM_PERIOD5 M2L31_EPWM0_EPWM_PERIOD5; // Offset: 0x44
    unsigned long Reserved4;
    unsigned long Reserved5;
    uM2L31_EPWM0_EPWM_CMPDAT0 M2L31_EPWM0_EPWM_CMPDAT0; // Offset: 0x50
    uM2L31_EPWM0_EPWM_CMPDAT1 M2L31_EPWM0_EPWM_CMPDAT1; // Offset: 0x54
    uM2L31_EPWM0_EPWM_CMPDAT2 M2L31_EPWM0_EPWM_CMPDAT2; // Offset: 0x58
    uM2L31_EPWM0_EPWM_CMPDAT3 M2L31_EPWM0_EPWM_CMPDAT3; // Offset: 0x5c
    uM2L31_EPWM0_EPWM_CMPDAT4 M2L31_EPWM0_EPWM_CMPDAT4; // Offset: 0x60
    uM2L31_EPWM0_EPWM_CMPDAT5 M2L31_EPWM0_EPWM_CMPDAT5; // Offset: 0x64
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    unsigned long Reserved9;
    unsigned long Reserved10;
    unsigned long Reserved11;
    uM2L31_EPWM0_EPWM_PHS0_1 M2L31_EPWM0_EPWM_PHS0_1; // Offset: 0x80
    uM2L31_EPWM0_EPWM_PHS2_3 M2L31_EPWM0_EPWM_PHS2_3; // Offset: 0x84
    uM2L31_EPWM0_EPWM_PHS4_5 M2L31_EPWM0_EPWM_PHS4_5; // Offset: 0x88
    unsigned long Reserved12;
    uM2L31_EPWM0_EPWM_CNT0 M2L31_EPWM0_EPWM_CNT0; // Offset: 0x90
    uM2L31_EPWM0_EPWM_CNT1 M2L31_EPWM0_EPWM_CNT1; // Offset: 0x94
    uM2L31_EPWM0_EPWM_CNT2 M2L31_EPWM0_EPWM_CNT2; // Offset: 0x98
    uM2L31_EPWM0_EPWM_CNT3 M2L31_EPWM0_EPWM_CNT3; // Offset: 0x9c
    uM2L31_EPWM0_EPWM_CNT4 M2L31_EPWM0_EPWM_CNT4; // Offset: 0xa0
    uM2L31_EPWM0_EPWM_CNT5 M2L31_EPWM0_EPWM_CNT5; // Offset: 0xa4
    unsigned long Reserved13;
    unsigned long Reserved14;
    uM2L31_EPWM0_EPWM_WGCTL0 M2L31_EPWM0_EPWM_WGCTL0; // Offset: 0xb0
    uM2L31_EPWM0_EPWM_WGCTL1 M2L31_EPWM0_EPWM_WGCTL1; // Offset: 0xb4
    uM2L31_EPWM0_EPWM_MSKEN M2L31_EPWM0_EPWM_MSKEN; // Offset: 0xb8
    uM2L31_EPWM0_EPWM_MSK M2L31_EPWM0_EPWM_MSK; // Offset: 0xbc
    uM2L31_EPWM0_EPWM_BNF M2L31_EPWM0_EPWM_BNF; // Offset: 0xc0
    uM2L31_EPWM0_EPWM_FAILBRK M2L31_EPWM0_EPWM_FAILBRK; // Offset: 0xc4
    uM2L31_EPWM0_EPWM_BRKCTL0_1 M2L31_EPWM0_EPWM_BRKCTL0_1; // Offset: 0xc8
    uM2L31_EPWM0_EPWM_BRKCTL2_3 M2L31_EPWM0_EPWM_BRKCTL2_3; // Offset: 0xcc
    uM2L31_EPWM0_EPWM_BRKCTL4_5 M2L31_EPWM0_EPWM_BRKCTL4_5; // Offset: 0xd0
    uM2L31_EPWM0_EPWM_POLCTL M2L31_EPWM0_EPWM_POLCTL; // Offset: 0xd4
    uM2L31_EPWM0_EPWM_POEN M2L31_EPWM0_EPWM_POEN; // Offset: 0xd8
    uM2L31_EPWM0_EPWM_SWBRK M2L31_EPWM0_EPWM_SWBRK; // Offset: 0xdc
    uM2L31_EPWM0_EPWM_INTEN0 M2L31_EPWM0_EPWM_INTEN0; // Offset: 0xe0
    uM2L31_EPWM0_EPWM_INTEN1 M2L31_EPWM0_EPWM_INTEN1; // Offset: 0xe4
    uM2L31_EPWM0_EPWM_INTSTS0 M2L31_EPWM0_EPWM_INTSTS0; // Offset: 0xe8
    uM2L31_EPWM0_EPWM_INTSTS1 M2L31_EPWM0_EPWM_INTSTS1; // Offset: 0xec
    unsigned long Reserved15;
    uM2L31_EPWM0_EPWM_DACTRGEN M2L31_EPWM0_EPWM_DACTRGEN; // Offset: 0xf4
    uM2L31_EPWM0_EPWM_EADCTS0 M2L31_EPWM0_EPWM_EADCTS0; // Offset: 0xf8
    uM2L31_EPWM0_EPWM_EADCTS1 M2L31_EPWM0_EPWM_EADCTS1; // Offset: 0xfc
    uM2L31_EPWM0_EPWM_FTCMPDAT0_1 M2L31_EPWM0_EPWM_FTCMPDAT0_1; // Offset: 0x100
    uM2L31_EPWM0_EPWM_FTCMPDAT2_3 M2L31_EPWM0_EPWM_FTCMPDAT2_3; // Offset: 0x104
    uM2L31_EPWM0_EPWM_FTCMPDAT4_5 M2L31_EPWM0_EPWM_FTCMPDAT4_5; // Offset: 0x108
    unsigned long Reserved16;
    uM2L31_EPWM0_EPWM_SSCTL M2L31_EPWM0_EPWM_SSCTL; // Offset: 0x110
    uM2L31_EPWM0_EPWM_SSTRG M2L31_EPWM0_EPWM_SSTRG; // Offset: 0x114
    uM2L31_EPWM0_EPWM_LEBCTL M2L31_EPWM0_EPWM_LEBCTL; // Offset: 0x118
    uM2L31_EPWM0_EPWM_LEBCNT M2L31_EPWM0_EPWM_LEBCNT; // Offset: 0x11c
    uM2L31_EPWM0_EPWM_STATUS M2L31_EPWM0_EPWM_STATUS; // Offset: 0x120
    unsigned long Reserved17;
    unsigned long Reserved18;
    unsigned long Reserved19;
    uM2L31_EPWM0_EPWM_IFA0 M2L31_EPWM0_EPWM_IFA0; // Offset: 0x130
    uM2L31_EPWM0_EPWM_IFA1 M2L31_EPWM0_EPWM_IFA1; // Offset: 0x134
    uM2L31_EPWM0_EPWM_IFA2 M2L31_EPWM0_EPWM_IFA2; // Offset: 0x138
    uM2L31_EPWM0_EPWM_IFA3 M2L31_EPWM0_EPWM_IFA3; // Offset: 0x13c
    uM2L31_EPWM0_EPWM_IFA4 M2L31_EPWM0_EPWM_IFA4; // Offset: 0x140
    uM2L31_EPWM0_EPWM_IFA5 M2L31_EPWM0_EPWM_IFA5; // Offset: 0x144
    unsigned long Reserved20;
    unsigned long Reserved21;
    uM2L31_EPWM0_EPWM_AINTSTS M2L31_EPWM0_EPWM_AINTSTS; // Offset: 0x150
    uM2L31_EPWM0_EPWM_AINTEN M2L31_EPWM0_EPWM_AINTEN; // Offset: 0x154
    uM2L31_EPWM0_EPWM_APDMACTL M2L31_EPWM0_EPWM_APDMACTL; // Offset: 0x158
    unsigned long Reserved22;
    uM2L31_EPWM0_EPWM_FDEN M2L31_EPWM0_EPWM_FDEN; // Offset: 0x160
    uM2L31_EPWM0_EPWM_FDCTL0 M2L31_EPWM0_EPWM_FDCTL0; // Offset: 0x164
    uM2L31_EPWM0_EPWM_FDCTL1 M2L31_EPWM0_EPWM_FDCTL1; // Offset: 0x168
    uM2L31_EPWM0_EPWM_FDCTL2 M2L31_EPWM0_EPWM_FDCTL2; // Offset: 0x16c
    uM2L31_EPWM0_EPWM_FDCTL3 M2L31_EPWM0_EPWM_FDCTL3; // Offset: 0x170
    uM2L31_EPWM0_EPWM_FDCTL4 M2L31_EPWM0_EPWM_FDCTL4; // Offset: 0x174
    uM2L31_EPWM0_EPWM_FDCTL5 M2L31_EPWM0_EPWM_FDCTL5; // Offset: 0x178
    uM2L31_EPWM0_EPWM_FDIEN M2L31_EPWM0_EPWM_FDIEN; // Offset: 0x17c
    uM2L31_EPWM0_EPWM_FDSTS M2L31_EPWM0_EPWM_FDSTS; // Offset: 0x180
    uM2L31_EPWM0_EPWM_EADCPSCCTL M2L31_EPWM0_EPWM_EADCPSCCTL; // Offset: 0x184
    uM2L31_EPWM0_EPWM_EADCPSC0 M2L31_EPWM0_EPWM_EADCPSC0; // Offset: 0x188
    uM2L31_EPWM0_EPWM_EADCPSC1 M2L31_EPWM0_EPWM_EADCPSC1; // Offset: 0x18c
    uM2L31_EPWM0_EPWM_EADCPSCNT0 M2L31_EPWM0_EPWM_EADCPSCNT0; // Offset: 0x190
    uM2L31_EPWM0_EPWM_EADCPSCNT1 M2L31_EPWM0_EPWM_EADCPSCNT1; // Offset: 0x194
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
    unsigned long Reserved48;
    uM2L31_EPWM0_EPWM_CAPINEN M2L31_EPWM0_EPWM_CAPINEN; // Offset: 0x200
    uM2L31_EPWM0_EPWM_CAPCTL M2L31_EPWM0_EPWM_CAPCTL; // Offset: 0x204
    uM2L31_EPWM0_EPWM_CAPSTS M2L31_EPWM0_EPWM_CAPSTS; // Offset: 0x208
    uM2L31_EPWM0_EPWM_RCAPDAT0 M2L31_EPWM0_EPWM_RCAPDAT0; // Offset: 0x20c
    uM2L31_EPWM0_EPWM_FCAPDAT0 M2L31_EPWM0_EPWM_FCAPDAT0; // Offset: 0x210
    uM2L31_EPWM0_EPWM_RCAPDAT1 M2L31_EPWM0_EPWM_RCAPDAT1; // Offset: 0x214
    uM2L31_EPWM0_EPWM_FCAPDAT1 M2L31_EPWM0_EPWM_FCAPDAT1; // Offset: 0x218
    uM2L31_EPWM0_EPWM_RCAPDAT2 M2L31_EPWM0_EPWM_RCAPDAT2; // Offset: 0x21c
    uM2L31_EPWM0_EPWM_FCAPDAT2 M2L31_EPWM0_EPWM_FCAPDAT2; // Offset: 0x220
    uM2L31_EPWM0_EPWM_RCAPDAT3 M2L31_EPWM0_EPWM_RCAPDAT3; // Offset: 0x224
    uM2L31_EPWM0_EPWM_FCAPDAT3 M2L31_EPWM0_EPWM_FCAPDAT3; // Offset: 0x228
    uM2L31_EPWM0_EPWM_RCAPDAT4 M2L31_EPWM0_EPWM_RCAPDAT4; // Offset: 0x22c
    uM2L31_EPWM0_EPWM_FCAPDAT4 M2L31_EPWM0_EPWM_FCAPDAT4; // Offset: 0x230
    uM2L31_EPWM0_EPWM_RCAPDAT5 M2L31_EPWM0_EPWM_RCAPDAT5; // Offset: 0x234
    uM2L31_EPWM0_EPWM_FCAPDAT5 M2L31_EPWM0_EPWM_FCAPDAT5; // Offset: 0x238
    uM2L31_EPWM0_EPWM_PDMACTL M2L31_EPWM0_EPWM_PDMACTL; // Offset: 0x23c
    uM2L31_EPWM0_EPWM_PDMACAP0_1 M2L31_EPWM0_EPWM_PDMACAP0_1; // Offset: 0x240
    uM2L31_EPWM0_EPWM_PDMACAP2_3 M2L31_EPWM0_EPWM_PDMACAP2_3; // Offset: 0x244
    uM2L31_EPWM0_EPWM_PDMACAP4_5 M2L31_EPWM0_EPWM_PDMACAP4_5; // Offset: 0x248
    unsigned long Reserved49;
    uM2L31_EPWM0_EPWM_CAPIEN M2L31_EPWM0_EPWM_CAPIEN; // Offset: 0x250
    uM2L31_EPWM0_EPWM_CAPIF M2L31_EPWM0_EPWM_CAPIF; // Offset: 0x254
    uM2L31_EPWM0_EPWM_CAPNF0 M2L31_EPWM0_EPWM_CAPNF0; // Offset: 0x258
    uM2L31_EPWM0_EPWM_CAPNF1 M2L31_EPWM0_EPWM_CAPNF1; // Offset: 0x25c
    uM2L31_EPWM0_EPWM_CAPNF2 M2L31_EPWM0_EPWM_CAPNF2; // Offset: 0x260
    uM2L31_EPWM0_EPWM_CAPNF3 M2L31_EPWM0_EPWM_CAPNF3; // Offset: 0x264
    uM2L31_EPWM0_EPWM_CAPNF4 M2L31_EPWM0_EPWM_CAPNF4; // Offset: 0x268
    uM2L31_EPWM0_EPWM_CAPNF5 M2L31_EPWM0_EPWM_CAPNF5; // Offset: 0x26c
    uM2L31_EPWM0_EPWM_EXTETCTL0 M2L31_EPWM0_EPWM_EXTETCTL0; // Offset: 0x270
    uM2L31_EPWM0_EPWM_EXTETCTL1 M2L31_EPWM0_EPWM_EXTETCTL1; // Offset: 0x274
    uM2L31_EPWM0_EPWM_EXTETCTL2 M2L31_EPWM0_EPWM_EXTETCTL2; // Offset: 0x278
    uM2L31_EPWM0_EPWM_EXTETCTL3 M2L31_EPWM0_EPWM_EXTETCTL3; // Offset: 0x27c
    uM2L31_EPWM0_EPWM_EXTETCTL4 M2L31_EPWM0_EPWM_EXTETCTL4; // Offset: 0x280
    uM2L31_EPWM0_EPWM_EXTETCTL5 M2L31_EPWM0_EPWM_EXTETCTL5; // Offset: 0x284
    uM2L31_EPWM0_EPWM_SWEOFCTL M2L31_EPWM0_EPWM_SWEOFCTL; // Offset: 0x288
    uM2L31_EPWM0_EPWM_SWEOFTRG M2L31_EPWM0_EPWM_SWEOFTRG; // Offset: 0x28c
    uM2L31_EPWM0_EPWM_CLKPSC0 M2L31_EPWM0_EPWM_CLKPSC0; // Offset: 0x290
    uM2L31_EPWM0_EPWM_CLKPSC1 M2L31_EPWM0_EPWM_CLKPSC1; // Offset: 0x294
    uM2L31_EPWM0_EPWM_CLKPSC2 M2L31_EPWM0_EPWM_CLKPSC2; // Offset: 0x298
    uM2L31_EPWM0_EPWM_CLKPSC3 M2L31_EPWM0_EPWM_CLKPSC3; // Offset: 0x29c
    uM2L31_EPWM0_EPWM_CLKPSC4 M2L31_EPWM0_EPWM_CLKPSC4; // Offset: 0x2a0
    uM2L31_EPWM0_EPWM_CLKPSC5 M2L31_EPWM0_EPWM_CLKPSC5; // Offset: 0x2a4
    uM2L31_EPWM0_EPWM_RDTCNT0_1 M2L31_EPWM0_EPWM_RDTCNT0_1; // Offset: 0x2a8
    uM2L31_EPWM0_EPWM_RDTCNT2_3 M2L31_EPWM0_EPWM_RDTCNT2_3; // Offset: 0x2ac
    uM2L31_EPWM0_EPWM_RDTCNT4_5 M2L31_EPWM0_EPWM_RDTCNT4_5; // Offset: 0x2b0
    uM2L31_EPWM0_EPWM_FDTCNT0_1 M2L31_EPWM0_EPWM_FDTCNT0_1; // Offset: 0x2b4
    uM2L31_EPWM0_EPWM_FDTCNT2_3 M2L31_EPWM0_EPWM_FDTCNT2_3; // Offset: 0x2b8
    uM2L31_EPWM0_EPWM_FDTCNT4_5 M2L31_EPWM0_EPWM_FDTCNT4_5; // Offset: 0x2bc
    uM2L31_EPWM0_EPWM_DTCTL M2L31_EPWM0_EPWM_DTCTL; // Offset: 0x2c0
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
    uM2L31_EPWM0_EPWM_PBUF0 M2L31_EPWM0_EPWM_PBUF0; // Offset: 0x304
    uM2L31_EPWM0_EPWM_PBUF1 M2L31_EPWM0_EPWM_PBUF1; // Offset: 0x308
    uM2L31_EPWM0_EPWM_PBUF2 M2L31_EPWM0_EPWM_PBUF2; // Offset: 0x30c
    uM2L31_EPWM0_EPWM_PBUF3 M2L31_EPWM0_EPWM_PBUF3; // Offset: 0x310
    uM2L31_EPWM0_EPWM_PBUF4 M2L31_EPWM0_EPWM_PBUF4; // Offset: 0x314
    uM2L31_EPWM0_EPWM_PBUF5 M2L31_EPWM0_EPWM_PBUF5; // Offset: 0x318
    uM2L31_EPWM0_EPWM_CMPBUF0 M2L31_EPWM0_EPWM_CMPBUF0; // Offset: 0x31c
    uM2L31_EPWM0_EPWM_CMPBUF1 M2L31_EPWM0_EPWM_CMPBUF1; // Offset: 0x320
    uM2L31_EPWM0_EPWM_CMPBUF2 M2L31_EPWM0_EPWM_CMPBUF2; // Offset: 0x324
    uM2L31_EPWM0_EPWM_CMPBUF3 M2L31_EPWM0_EPWM_CMPBUF3; // Offset: 0x328
    uM2L31_EPWM0_EPWM_CMPBUF4 M2L31_EPWM0_EPWM_CMPBUF4; // Offset: 0x32c
    uM2L31_EPWM0_EPWM_CMPBUF5 M2L31_EPWM0_EPWM_CMPBUF5; // Offset: 0x330
    unsigned long Reserved66;
    unsigned long Reserved67;
    unsigned long Reserved68;
    uM2L31_EPWM0_EPWM_FTCBUF0_1 M2L31_EPWM0_EPWM_FTCBUF0_1; // Offset: 0x340
    uM2L31_EPWM0_EPWM_FTCBUF2_3 M2L31_EPWM0_EPWM_FTCBUF2_3; // Offset: 0x344
    uM2L31_EPWM0_EPWM_FTCBUF4_5 M2L31_EPWM0_EPWM_FTCBUF4_5; // Offset: 0x348
    uM2L31_EPWM0_EPWM_FTCI M2L31_EPWM0_EPWM_FTCI; // Offset: 0x34c
    uM2L31_EPWM0_EPWM_CPSCBUF0 M2L31_EPWM0_EPWM_CPSCBUF0; // Offset: 0x350
    uM2L31_EPWM0_EPWM_CPSCBUF1 M2L31_EPWM0_EPWM_CPSCBUF1; // Offset: 0x354
    uM2L31_EPWM0_EPWM_CPSCBUF2 M2L31_EPWM0_EPWM_CPSCBUF2; // Offset: 0x358
    uM2L31_EPWM0_EPWM_CPSCBUF3 M2L31_EPWM0_EPWM_CPSCBUF3; // Offset: 0x35c
    uM2L31_EPWM0_EPWM_CPSCBUF4 M2L31_EPWM0_EPWM_CPSCBUF4; // Offset: 0x360
    uM2L31_EPWM0_EPWM_CPSCBUF5 M2L31_EPWM0_EPWM_CPSCBUF5; // Offset: 0x364
    uM2L31_EPWM0_EPWM_IFACNT0 M2L31_EPWM0_EPWM_IFACNT0; // Offset: 0x368
    uM2L31_EPWM0_EPWM_IFACNT1 M2L31_EPWM0_EPWM_IFACNT1; // Offset: 0x36c
    uM2L31_EPWM0_EPWM_IFACNT2 M2L31_EPWM0_EPWM_IFACNT2; // Offset: 0x370
    uM2L31_EPWM0_EPWM_IFACNT3 M2L31_EPWM0_EPWM_IFACNT3; // Offset: 0x374
    uM2L31_EPWM0_EPWM_IFACNT4 M2L31_EPWM0_EPWM_IFACNT4; // Offset: 0x378
    uM2L31_EPWM0_EPWM_IFACNT5 M2L31_EPWM0_EPWM_IFACNT5; // Offset: 0x37c
} sM2L31_EPWM0;

