// Base Addres of TMR23 = 0x40051000

#define M2L31_TMR23_TIMER2_CTL_RESET_VALUE 0x00000005
typedef struct {
    unsigned long PSC : 8;
    unsigned long Res0 : 7;
    unsigned long FUNCSEL : 1;
    unsigned long Res1 : 3;
    unsigned long INTRGEN : 1;
    unsigned long PERIOSEL : 1;
    unsigned long TGLPINSEL : 1;
    unsigned long CAPSRC : 1;
    unsigned long WKEN : 1;
    unsigned long EXTCNTEN : 1;
    unsigned long ACTSTS : 1;
    unsigned long Res2 : 1;
    unsigned long OPMODE : 2;
    unsigned long INTEN : 1;
    unsigned long CNTEN : 1;
    unsigned long ICEDEBUG : 1;
} sM2L31_TMR23_TIMER2_CTL;

typedef union {
    sM2L31_TMR23_TIMER2_CTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_CTL;

#define M2L31_TMR23_TIMER2_CMP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMPDAT : 24;
    unsigned long Res0 : 8;
} sM2L31_TMR23_TIMER2_CMP;

typedef union {
    sM2L31_TMR23_TIMER2_CMP Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_CMP;

#define M2L31_TMR23_TIMER2_INTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TIF : 1;
    unsigned long TWKF : 1;
    unsigned long Res0 : 30;
} sM2L31_TMR23_TIMER2_INTSTS;

typedef union {
    sM2L31_TMR23_TIMER2_INTSTS Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_INTSTS;

#define M2L31_TMR23_TIMER2_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 24;
    unsigned long Res0 : 7;
    unsigned long RSTACT : 1;
} sM2L31_TMR23_TIMER2_CNT;

typedef union {
    sM2L31_TMR23_TIMER2_CNT Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_CNT;

#define M2L31_TMR23_TIMER2_CAP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPDAT : 24;
    unsigned long Res0 : 8;
} sM2L31_TMR23_TIMER2_CAP;

typedef union {
    sM2L31_TMR23_TIMER2_CAP Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_CAP;

#define M2L31_TMR23_TIMER2_EXTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTPHASE : 1;
    unsigned long Res0 : 2;
    unsigned long CAPEN : 1;
    unsigned long CAPFUNCS : 1;
    unsigned long CAPIEN : 1;
    unsigned long CAPDBEN : 1;
    unsigned long CNTDBEN : 1;
    unsigned long INTERCAPSEL : 3;
    unsigned long Res1 : 1;
    unsigned long CAPEDGE : 3;
    unsigned long Res2 : 1;
    unsigned long ECNTSSEL : 3;
    unsigned long Res3 : 9;
    unsigned long CAPDIVSCL : 4;
} sM2L31_TMR23_TIMER2_EXTCTL;

typedef union {
    sM2L31_TMR23_TIMER2_EXTCTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_EXTCTL;

#define M2L31_TMR23_TIMER2_EINTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPIF : 1;
    unsigned long CAPIFOV : 1;
    unsigned long Res0 : 30;
} sM2L31_TMR23_TIMER2_EINTSTS;

typedef union {
    sM2L31_TMR23_TIMER2_EINTSTS Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_EINTSTS;

#define M2L31_TMR23_TIMER2_TRGCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TRGSSEL : 1;
    unsigned long TRGPWM : 1;
    unsigned long TRGEADC : 1;
    unsigned long TRGDAC : 1;
    unsigned long TRGPDMA : 1;
    unsigned long TRGLPADC : 1;
    unsigned long Res0 : 2;
    unsigned long TRGTK : 1;
    unsigned long Res1 : 23;
} sM2L31_TMR23_TIMER2_TRGCTL;

typedef union {
    sM2L31_TMR23_TIMER2_TRGCTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_TRGCTL;

#define M2L31_TMR23_TIMER2_CAPNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPNFEN : 1;
    unsigned long Res0 : 3;
    unsigned long CAPNFSEL : 3;
    unsigned long Res1 : 1;
    unsigned long CAPNFCNT : 3;
    unsigned long Res2 : 21;
} sM2L31_TMR23_TIMER2_CAPNF;

typedef union {
    sM2L31_TMR23_TIMER2_CAPNF Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_CAPNF;

#define M2L31_TMR23_TIMER2_PWMCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTEN : 1;
    unsigned long Res0 : 2;
    unsigned long CNTMODE : 1;
    unsigned long Res1 : 8;
    unsigned long PWMINTWKEN : 1;
    unsigned long Res2 : 17;
    unsigned long DBGHALT : 1;
    unsigned long DBGTRIOFF : 1;
} sM2L31_TMR23_TIMER2_PWMCTL;

typedef union {
    sM2L31_TMR23_TIMER2_PWMCTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMCTL;

#define M2L31_TMR23_TIMER2_PWMCLKPSC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CLKPSC : 8;
    unsigned long Res0 : 24;
} sM2L31_TMR23_TIMER2_PWMCLKPSC;

typedef union {
    sM2L31_TMR23_TIMER2_PWMCLKPSC Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMCLKPSC;

#define M2L31_TMR23_TIMER2_PWMCNTCLR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTCLR : 1;
    unsigned long Res0 : 31;
} sM2L31_TMR23_TIMER2_PWMCNTCLR;

typedef union {
    sM2L31_TMR23_TIMER2_PWMCNTCLR Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMCNTCLR;

#define M2L31_TMR23_TIMER2_PWMPERIOD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PERIOD : 16;
    unsigned long Res0 : 16;
} sM2L31_TMR23_TIMER2_PWMPERIOD;

typedef union {
    sM2L31_TMR23_TIMER2_PWMPERIOD Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMPERIOD;

#define M2L31_TMR23_TIMER2_PWMCMPDAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMP : 16;
    unsigned long Res0 : 16;
} sM2L31_TMR23_TIMER2_PWMCMPDAT;

typedef union {
    sM2L31_TMR23_TIMER2_PWMCMPDAT Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMCMPDAT;

#define M2L31_TMR23_TIMER2_PWMCNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 16;
    unsigned long Res0 : 16;
} sM2L31_TMR23_TIMER2_PWMCNT;

typedef union {
    sM2L31_TMR23_TIMER2_PWMCNT Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMCNT;

#define M2L31_TMR23_TIMER2_PWMPOLCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PINV : 1;
    unsigned long Res0 : 31;
} sM2L31_TMR23_TIMER2_PWMPOLCTL;

typedef union {
    sM2L31_TMR23_TIMER2_PWMPOLCTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMPOLCTL;

#define M2L31_TMR23_TIMER2_PWMPOCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long POEN : 1;
    unsigned long Res0 : 7;
    unsigned long POSEL : 1;
    unsigned long Res1 : 23;
} sM2L31_TMR23_TIMER2_PWMPOCTL;

typedef union {
    sM2L31_TMR23_TIMER2_PWMPOCTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMPOCTL;

#define M2L31_TMR23_TIMER2_PWMINTEN0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long PIEN : 1;
    unsigned long CMPUIEN : 1;
    unsigned long Res1 : 29;
} sM2L31_TMR23_TIMER2_PWMINTEN0;

typedef union {
    sM2L31_TMR23_TIMER2_PWMINTEN0 Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMINTEN0;

#define M2L31_TMR23_TIMER2_PWMINTSTS0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long PIF : 1;
    unsigned long CMPUIF : 1;
    unsigned long Res1 : 29;
} sM2L31_TMR23_TIMER2_PWMINTSTS0;

typedef union {
    sM2L31_TMR23_TIMER2_PWMINTSTS0 Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMINTSTS0;

#define M2L31_TMR23_TIMER2_PWMTRGCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TRGSEL : 2;
    unsigned long Res0 : 5;
    unsigned long PWMTRGEADC : 1;
    unsigned long PWMTRGDAC : 1;
    unsigned long PWMTRGPDMA : 1;
    unsigned long PWMTRGLPADC : 1;
    unsigned long Res1 : 21;
} sM2L31_TMR23_TIMER2_PWMTRGCTL;

typedef union {
    sM2L31_TMR23_TIMER2_PWMTRGCTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMTRGCTL;

#define M2L31_TMR23_TIMER2_PWMSTATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTMAXF : 1;
    unsigned long Res0 : 7;
    unsigned long PWMINTWKF : 1;
    unsigned long Res1 : 7;
    unsigned long EADCTRGF : 1;
    unsigned long DACTRGF : 1;
    unsigned long PDMATRGF : 1;
    unsigned long LPADCTRGF : 1;
    unsigned long Res2 : 12;
} sM2L31_TMR23_TIMER2_PWMSTATUS;

typedef union {
    sM2L31_TMR23_TIMER2_PWMSTATUS Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMSTATUS;

#define M2L31_TMR23_TIMER2_PWMPBUF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PBUF : 16;
    unsigned long Res0 : 16;
} sM2L31_TMR23_TIMER2_PWMPBUF;

typedef union {
    sM2L31_TMR23_TIMER2_PWMPBUF Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMPBUF;

#define M2L31_TMR23_TIMER2_PWMCMPBUF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMPBUF : 16;
    unsigned long Res0 : 16;
} sM2L31_TMR23_TIMER2_PWMCMPBUF;

typedef union {
    sM2L31_TMR23_TIMER2_PWMCMPBUF Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMCMPBUF;

#define M2L31_TMR23_TIMER2_PWMIFA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IFACNT : 16;
    unsigned long Res0 : 8;
    unsigned long STPMOD : 1;
    unsigned long Res1 : 3;
    unsigned long IFASEL : 2;
    unsigned long Res2 : 1;
    unsigned long IFAEN : 1;
} sM2L31_TMR23_TIMER2_PWMIFA;

typedef union {
    sM2L31_TMR23_TIMER2_PWMIFA Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMIFA;

#define M2L31_TMR23_TIMER2_PWMAINTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IFAIF : 1;
    unsigned long Res0 : 31;
} sM2L31_TMR23_TIMER2_PWMAINTSTS;

typedef union {
    sM2L31_TMR23_TIMER2_PWMAINTSTS Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMAINTSTS;

#define M2L31_TMR23_TIMER2_PWMAINTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IFAIEN : 1;
    unsigned long Res0 : 31;
} sM2L31_TMR23_TIMER2_PWMAINTEN;

typedef union {
    sM2L31_TMR23_TIMER2_PWMAINTEN Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMAINTEN;

#define M2L31_TMR23_TIMER2_PWMAPDMACTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long APDMAEN : 1;
    unsigned long Res0 : 31;
} sM2L31_TMR23_TIMER2_PWMAPDMACTL;

typedef union {
    sM2L31_TMR23_TIMER2_PWMAPDMACTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER2_PWMAPDMACTL;

#define M2L31_TMR23_TIMER3_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_CTL;

typedef union {
    sM2L31_TMR23_TIMER3_CTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_CTL;

#define M2L31_TMR23_TIMER3_CMP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_CMP;

typedef union {
    sM2L31_TMR23_TIMER3_CMP Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_CMP;

#define M2L31_TMR23_TIMER3_INTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_INTSTS;

typedef union {
    sM2L31_TMR23_TIMER3_INTSTS Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_INTSTS;

#define M2L31_TMR23_TIMER3_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_CNT;

typedef union {
    sM2L31_TMR23_TIMER3_CNT Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_CNT;

#define M2L31_TMR23_TIMER3_CAP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_CAP;

typedef union {
    sM2L31_TMR23_TIMER3_CAP Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_CAP;

#define M2L31_TMR23_TIMER3_EXTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_EXTCTL;

typedef union {
    sM2L31_TMR23_TIMER3_EXTCTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_EXTCTL;

#define M2L31_TMR23_TIMER3_EINTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_EINTSTS;

typedef union {
    sM2L31_TMR23_TIMER3_EINTSTS Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_EINTSTS;

#define M2L31_TMR23_TIMER3_TRGCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_TRGCTL;

typedef union {
    sM2L31_TMR23_TIMER3_TRGCTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_TRGCTL;

#define M2L31_TMR23_TIMER3_CAPNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_CAPNF;

typedef union {
    sM2L31_TMR23_TIMER3_CAPNF Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_CAPNF;

#define M2L31_TMR23_TIMER3_PWMCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMCTL;

typedef union {
    sM2L31_TMR23_TIMER3_PWMCTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMCTL;

#define M2L31_TMR23_TIMER3_PWMCLKPSC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMCLKPSC;

typedef union {
    sM2L31_TMR23_TIMER3_PWMCLKPSC Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMCLKPSC;

#define M2L31_TMR23_TIMER3_PWMCNTCLR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMCNTCLR;

typedef union {
    sM2L31_TMR23_TIMER3_PWMCNTCLR Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMCNTCLR;

#define M2L31_TMR23_TIMER3_PWMPERIOD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMPERIOD;

typedef union {
    sM2L31_TMR23_TIMER3_PWMPERIOD Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMPERIOD;

#define M2L31_TMR23_TIMER3_PWMCMPDAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMCMPDAT;

typedef union {
    sM2L31_TMR23_TIMER3_PWMCMPDAT Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMCMPDAT;

#define M2L31_TMR23_TIMER3_PWMCNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMCNT;

typedef union {
    sM2L31_TMR23_TIMER3_PWMCNT Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMCNT;

#define M2L31_TMR23_TIMER3_PWMPOLCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMPOLCTL;

typedef union {
    sM2L31_TMR23_TIMER3_PWMPOLCTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMPOLCTL;

#define M2L31_TMR23_TIMER3_PWMPOCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMPOCTL;

typedef union {
    sM2L31_TMR23_TIMER3_PWMPOCTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMPOCTL;

#define M2L31_TMR23_TIMER3_PWMINTEN0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMINTEN0;

typedef union {
    sM2L31_TMR23_TIMER3_PWMINTEN0 Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMINTEN0;

#define M2L31_TMR23_TIMER3_PWMINTSTS0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMINTSTS0;

typedef union {
    sM2L31_TMR23_TIMER3_PWMINTSTS0 Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMINTSTS0;

#define M2L31_TMR23_TIMER3_PWMTRGCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMTRGCTL;

typedef union {
    sM2L31_TMR23_TIMER3_PWMTRGCTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMTRGCTL;

#define M2L31_TMR23_TIMER3_PWMSTATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMSTATUS;

typedef union {
    sM2L31_TMR23_TIMER3_PWMSTATUS Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMSTATUS;

#define M2L31_TMR23_TIMER3_PWMPBUF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMPBUF;

typedef union {
    sM2L31_TMR23_TIMER3_PWMPBUF Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMPBUF;

#define M2L31_TMR23_TIMER3_PWMCMPBUF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMCMPBUF;

typedef union {
    sM2L31_TMR23_TIMER3_PWMCMPBUF Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMCMPBUF;

#define M2L31_TMR23_TIMER3_PWMIFA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMIFA;

typedef union {
    sM2L31_TMR23_TIMER3_PWMIFA Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMIFA;

#define M2L31_TMR23_TIMER3_PWMAINTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMAINTSTS;

typedef union {
    sM2L31_TMR23_TIMER3_PWMAINTSTS Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMAINTSTS;

#define M2L31_TMR23_TIMER3_PWMAINTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMAINTEN;

typedef union {
    sM2L31_TMR23_TIMER3_PWMAINTEN Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMAINTEN;

#define M2L31_TMR23_TIMER3_PWMAPDMACTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_TMR23_TIMER3_PWMAPDMACTL;

typedef union {
    sM2L31_TMR23_TIMER3_PWMAPDMACTL Bit;
    unsigned long  All;
} uM2L31_TMR23_TIMER3_PWMAPDMACTL;

typedef struct {
    uM2L31_TMR23_TIMER2_CTL M2L31_TMR23_TIMER2_CTL; // Offset: 0x0
    uM2L31_TMR23_TIMER2_CMP M2L31_TMR23_TIMER2_CMP; // Offset: 0x4
    uM2L31_TMR23_TIMER2_INTSTS M2L31_TMR23_TIMER2_INTSTS; // Offset: 0x8
    uM2L31_TMR23_TIMER2_CNT M2L31_TMR23_TIMER2_CNT; // Offset: 0xc
    uM2L31_TMR23_TIMER2_CAP M2L31_TMR23_TIMER2_CAP; // Offset: 0x10
    uM2L31_TMR23_TIMER2_EXTCTL M2L31_TMR23_TIMER2_EXTCTL; // Offset: 0x14
    uM2L31_TMR23_TIMER2_EINTSTS M2L31_TMR23_TIMER2_EINTSTS; // Offset: 0x18
    uM2L31_TMR23_TIMER2_TRGCTL M2L31_TMR23_TIMER2_TRGCTL; // Offset: 0x1c
    unsigned long Reserved0;
    uM2L31_TMR23_TIMER2_CAPNF M2L31_TMR23_TIMER2_CAPNF; // Offset: 0x24
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    uM2L31_TMR23_TIMER2_PWMCTL M2L31_TMR23_TIMER2_PWMCTL; // Offset: 0x40
    uM2L31_TMR23_TIMER2_PWMCLKPSC M2L31_TMR23_TIMER2_PWMCLKPSC; // Offset: 0x44
    uM2L31_TMR23_TIMER2_PWMCNTCLR M2L31_TMR23_TIMER2_PWMCNTCLR; // Offset: 0x48
    uM2L31_TMR23_TIMER2_PWMPERIOD M2L31_TMR23_TIMER2_PWMPERIOD; // Offset: 0x4c
    uM2L31_TMR23_TIMER2_PWMCMPDAT M2L31_TMR23_TIMER2_PWMCMPDAT; // Offset: 0x50
    uM2L31_TMR23_TIMER2_PWMCNT M2L31_TMR23_TIMER2_PWMCNT; // Offset: 0x54
    uM2L31_TMR23_TIMER2_PWMPOLCTL M2L31_TMR23_TIMER2_PWMPOLCTL; // Offset: 0x58
    uM2L31_TMR23_TIMER2_PWMPOCTL M2L31_TMR23_TIMER2_PWMPOCTL; // Offset: 0x5c
    uM2L31_TMR23_TIMER2_PWMINTEN0 M2L31_TMR23_TIMER2_PWMINTEN0; // Offset: 0x60
    uM2L31_TMR23_TIMER2_PWMINTSTS0 M2L31_TMR23_TIMER2_PWMINTSTS0; // Offset: 0x64
    uM2L31_TMR23_TIMER2_PWMTRGCTL M2L31_TMR23_TIMER2_PWMTRGCTL; // Offset: 0x68
    uM2L31_TMR23_TIMER2_PWMSTATUS M2L31_TMR23_TIMER2_PWMSTATUS; // Offset: 0x6c
    uM2L31_TMR23_TIMER2_PWMPBUF M2L31_TMR23_TIMER2_PWMPBUF; // Offset: 0x70
    uM2L31_TMR23_TIMER2_PWMCMPBUF M2L31_TMR23_TIMER2_PWMCMPBUF; // Offset: 0x74
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
    uM2L31_TMR23_TIMER2_PWMIFA M2L31_TMR23_TIMER2_PWMIFA; // Offset: 0xa8
    uM2L31_TMR23_TIMER2_PWMAINTSTS M2L31_TMR23_TIMER2_PWMAINTSTS; // Offset: 0xac
    uM2L31_TMR23_TIMER2_PWMAINTEN M2L31_TMR23_TIMER2_PWMAINTEN; // Offset: 0xb0
    uM2L31_TMR23_TIMER2_PWMAPDMACTL M2L31_TMR23_TIMER2_PWMAPDMACTL; // Offset: 0xb4
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
    uM2L31_TMR23_TIMER3_CTL M2L31_TMR23_TIMER3_CTL; // Offset: 0x100
    uM2L31_TMR23_TIMER3_CMP M2L31_TMR23_TIMER3_CMP; // Offset: 0x104
    uM2L31_TMR23_TIMER3_INTSTS M2L31_TMR23_TIMER3_INTSTS; // Offset: 0x108
    uM2L31_TMR23_TIMER3_CNT M2L31_TMR23_TIMER3_CNT; // Offset: 0x10c
    uM2L31_TMR23_TIMER3_CAP M2L31_TMR23_TIMER3_CAP; // Offset: 0x110
    uM2L31_TMR23_TIMER3_EXTCTL M2L31_TMR23_TIMER3_EXTCTL; // Offset: 0x114
    uM2L31_TMR23_TIMER3_EINTSTS M2L31_TMR23_TIMER3_EINTSTS; // Offset: 0x118
    uM2L31_TMR23_TIMER3_TRGCTL M2L31_TMR23_TIMER3_TRGCTL; // Offset: 0x11c
    unsigned long Reserved37;
    uM2L31_TMR23_TIMER3_CAPNF M2L31_TMR23_TIMER3_CAPNF; // Offset: 0x124
    unsigned long Reserved38;
    unsigned long Reserved39;
    unsigned long Reserved40;
    unsigned long Reserved41;
    unsigned long Reserved42;
    unsigned long Reserved43;
    uM2L31_TMR23_TIMER3_PWMCTL M2L31_TMR23_TIMER3_PWMCTL; // Offset: 0x140
    uM2L31_TMR23_TIMER3_PWMCLKPSC M2L31_TMR23_TIMER3_PWMCLKPSC; // Offset: 0x144
    uM2L31_TMR23_TIMER3_PWMCNTCLR M2L31_TMR23_TIMER3_PWMCNTCLR; // Offset: 0x148
    uM2L31_TMR23_TIMER3_PWMPERIOD M2L31_TMR23_TIMER3_PWMPERIOD; // Offset: 0x14c
    uM2L31_TMR23_TIMER3_PWMCMPDAT M2L31_TMR23_TIMER3_PWMCMPDAT; // Offset: 0x150
    uM2L31_TMR23_TIMER3_PWMCNT M2L31_TMR23_TIMER3_PWMCNT; // Offset: 0x154
    uM2L31_TMR23_TIMER3_PWMPOLCTL M2L31_TMR23_TIMER3_PWMPOLCTL; // Offset: 0x158
    uM2L31_TMR23_TIMER3_PWMPOCTL M2L31_TMR23_TIMER3_PWMPOCTL; // Offset: 0x15c
    uM2L31_TMR23_TIMER3_PWMINTEN0 M2L31_TMR23_TIMER3_PWMINTEN0; // Offset: 0x160
    uM2L31_TMR23_TIMER3_PWMINTSTS0 M2L31_TMR23_TIMER3_PWMINTSTS0; // Offset: 0x164
    uM2L31_TMR23_TIMER3_PWMTRGCTL M2L31_TMR23_TIMER3_PWMTRGCTL; // Offset: 0x168
    uM2L31_TMR23_TIMER3_PWMSTATUS M2L31_TMR23_TIMER3_PWMSTATUS; // Offset: 0x16c
    uM2L31_TMR23_TIMER3_PWMPBUF M2L31_TMR23_TIMER3_PWMPBUF; // Offset: 0x170
    uM2L31_TMR23_TIMER3_PWMCMPBUF M2L31_TMR23_TIMER3_PWMCMPBUF; // Offset: 0x174
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
    uM2L31_TMR23_TIMER3_PWMIFA M2L31_TMR23_TIMER3_PWMIFA; // Offset: 0x1a8
    uM2L31_TMR23_TIMER3_PWMAINTSTS M2L31_TMR23_TIMER3_PWMAINTSTS; // Offset: 0x1ac
    uM2L31_TMR23_TIMER3_PWMAINTEN M2L31_TMR23_TIMER3_PWMAINTEN; // Offset: 0x1b0
    uM2L31_TMR23_TIMER3_PWMAPDMACTL M2L31_TMR23_TIMER3_PWMAPDMACTL; // Offset: 0x1b4
} sM2L31_TMR23;

