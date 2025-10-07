// Base Addres of LPTMR01 = 0x400E4000

#define M2L31_LPTMR01_LPTMR0_CTL_RESET_VALUE 0x00000005
typedef struct {
    unsigned long PSC : 8;
    unsigned long Res0 : 7;
    unsigned long FUNCSEL : 1;
    unsigned long PDCLKEN : 1;
    unsigned long Res1 : 3;
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
} sM2L31_LPTMR01_LPTMR0_CTL;

typedef union {
    sM2L31_LPTMR01_LPTMR0_CTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_CTL;

#define M2L31_LPTMR01_LPTMR0_CMP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMPDAT : 24;
    unsigned long Res0 : 8;
} sM2L31_LPTMR01_LPTMR0_CMP;

typedef union {
    sM2L31_LPTMR01_LPTMR0_CMP Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_CMP;

#define M2L31_LPTMR01_LPTMR0_INTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TIF : 1;
    unsigned long TWKF : 1;
    unsigned long Res0 : 30;
} sM2L31_LPTMR01_LPTMR0_INTSTS;

typedef union {
    sM2L31_LPTMR01_LPTMR0_INTSTS Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_INTSTS;

#define M2L31_LPTMR01_LPTMR0_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 24;
    unsigned long Res0 : 7;
    unsigned long RSTACT : 1;
} sM2L31_LPTMR01_LPTMR0_CNT;

typedef union {
    sM2L31_LPTMR01_LPTMR0_CNT Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_CNT;

#define M2L31_LPTMR01_LPTMR0_CAP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPDAT : 24;
    unsigned long Res0 : 8;
} sM2L31_LPTMR01_LPTMR0_CAP;

typedef union {
    sM2L31_LPTMR01_LPTMR0_CAP Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_CAP;

#define M2L31_LPTMR01_LPTMR0_EXTCTL_RESET_VALUE 0x00000000
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
} sM2L31_LPTMR01_LPTMR0_EXTCTL;

typedef union {
    sM2L31_LPTMR01_LPTMR0_EXTCTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_EXTCTL;

#define M2L31_LPTMR01_LPTMR0_EINTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPIF : 1;
    unsigned long CAPIFOV : 1;
    unsigned long Res0 : 30;
} sM2L31_LPTMR01_LPTMR0_EINTSTS;

typedef union {
    sM2L31_LPTMR01_LPTMR0_EINTSTS Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_EINTSTS;

#define M2L31_LPTMR01_LPTMR0_TRGCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TRGSSEL : 1;
    unsigned long TRGEN : 1;
    unsigned long Res0 : 2;
    unsigned long TRGLPPDMA : 1;
    unsigned long Res1 : 27;
} sM2L31_LPTMR01_LPTMR0_TRGCTL;

typedef union {
    sM2L31_LPTMR01_LPTMR0_TRGCTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_TRGCTL;

#define M2L31_LPTMR01_LPTMR0_CAPNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CAPNFEN : 1;
    unsigned long Res0 : 3;
    unsigned long CAPNFSEL : 3;
    unsigned long Res1 : 1;
    unsigned long CAPNFCNT : 3;
    unsigned long Res2 : 21;
} sM2L31_LPTMR01_LPTMR0_CAPNF;

typedef union {
    sM2L31_LPTMR01_LPTMR0_CAPNF Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_CAPNF;

#define M2L31_LPTMR01_LPTMR0_PWMCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTEN : 1;
    unsigned long Res0 : 2;
    unsigned long CNTMODE : 1;
    unsigned long Res1 : 8;
    unsigned long PWMINTWKEN : 1;
    unsigned long Res2 : 17;
    unsigned long DBGHALT : 1;
    unsigned long DBGTRIOFF : 1;
} sM2L31_LPTMR01_LPTMR0_PWMCTL;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMCTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMCTL;

#define M2L31_LPTMR01_LPTMR0_PWMCLKPSC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CLKPSC : 8;
    unsigned long Res0 : 24;
} sM2L31_LPTMR01_LPTMR0_PWMCLKPSC;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMCLKPSC Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMCLKPSC;

#define M2L31_LPTMR01_LPTMR0_PWMCNTCLR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTCLR : 1;
    unsigned long Res0 : 31;
} sM2L31_LPTMR01_LPTMR0_PWMCNTCLR;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMCNTCLR Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMCNTCLR;

#define M2L31_LPTMR01_LPTMR0_PWMPERIOD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PERIOD : 16;
    unsigned long Res0 : 16;
} sM2L31_LPTMR01_LPTMR0_PWMPERIOD;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMPERIOD Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMPERIOD;

#define M2L31_LPTMR01_LPTMR0_PWMCMPDAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMP : 16;
    unsigned long Res0 : 16;
} sM2L31_LPTMR01_LPTMR0_PWMCMPDAT;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMCMPDAT Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMCMPDAT;

#define M2L31_LPTMR01_LPTMR0_PWMCNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNT : 16;
    unsigned long Res0 : 16;
} sM2L31_LPTMR01_LPTMR0_PWMCNT;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMCNT Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMCNT;

#define M2L31_LPTMR01_LPTMR0_PWMPOLCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PINV : 1;
    unsigned long Res0 : 31;
} sM2L31_LPTMR01_LPTMR0_PWMPOLCTL;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMPOLCTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMPOLCTL;

#define M2L31_LPTMR01_LPTMR0_PWMPOCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long POEN : 1;
    unsigned long Res0 : 7;
    unsigned long POSEL : 1;
    unsigned long Res1 : 23;
} sM2L31_LPTMR01_LPTMR0_PWMPOCTL;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMPOCTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMPOCTL;

#define M2L31_LPTMR01_LPTMR0_PWMINTEN0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long PIEN : 1;
    unsigned long CMPUIEN : 1;
    unsigned long Res1 : 29;
} sM2L31_LPTMR01_LPTMR0_PWMINTEN0;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMINTEN0 Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMINTEN0;

#define M2L31_LPTMR01_LPTMR0_PWMINTSTS0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long PIF : 1;
    unsigned long CMPUIF : 1;
    unsigned long Res1 : 29;
} sM2L31_LPTMR01_LPTMR0_PWMINTSTS0;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMINTSTS0 Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMINTSTS0;

#define M2L31_LPTMR01_LPTMR0_PWMTRGCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TRGSEL : 2;
    unsigned long TRGEN : 1;
    unsigned long Res0 : 6;
    unsigned long PWMTRGLPPDMA : 1;
    unsigned long Res1 : 22;
} sM2L31_LPTMR01_LPTMR0_PWMTRGCTL;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMTRGCTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMTRGCTL;

#define M2L31_LPTMR01_LPTMR0_PWMSTATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CNTMAXF : 1;
    unsigned long Res0 : 7;
    unsigned long PWMINTWKF : 1;
    unsigned long Res1 : 23;
} sM2L31_LPTMR01_LPTMR0_PWMSTATUS;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMSTATUS Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMSTATUS;

#define M2L31_LPTMR01_LPTMR0_PWMPBUF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PBUF : 16;
    unsigned long Res0 : 16;
} sM2L31_LPTMR01_LPTMR0_PWMPBUF;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMPBUF Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMPBUF;

#define M2L31_LPTMR01_LPTMR0_PWMCMPBUF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMPBUF : 16;
    unsigned long Res0 : 16;
} sM2L31_LPTMR01_LPTMR0_PWMCMPBUF;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMCMPBUF Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMCMPBUF;

#define M2L31_LPTMR01_LPTMR0_PWMIFA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IFACNT : 16;
    unsigned long Res0 : 8;
    unsigned long STPMOD : 1;
    unsigned long Res1 : 3;
    unsigned long IFASEL : 2;
    unsigned long Res2 : 1;
    unsigned long IFAEN : 1;
} sM2L31_LPTMR01_LPTMR0_PWMIFA;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMIFA Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMIFA;

#define M2L31_LPTMR01_LPTMR0_PWMAINTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IFAIF : 1;
    unsigned long Res0 : 31;
} sM2L31_LPTMR01_LPTMR0_PWMAINTSTS;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMAINTSTS Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMAINTSTS;

#define M2L31_LPTMR01_LPTMR0_PWMAINTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IFAIEN : 1;
    unsigned long Res0 : 31;
} sM2L31_LPTMR01_LPTMR0_PWMAINTEN;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMAINTEN Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMAINTEN;

#define M2L31_LPTMR01_LPTMR0_PWMAPDMACTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long APDMAEN : 1;
    unsigned long Res0 : 31;
} sM2L31_LPTMR01_LPTMR0_PWMAPDMACTL;

typedef union {
    sM2L31_LPTMR01_LPTMR0_PWMAPDMACTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR0_PWMAPDMACTL;

#define M2L31_LPTMR01_LPTMR1_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_CTL;

typedef union {
    sM2L31_LPTMR01_LPTMR1_CTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_CTL;

#define M2L31_LPTMR01_LPTMR1_CMP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_CMP;

typedef union {
    sM2L31_LPTMR01_LPTMR1_CMP Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_CMP;

#define M2L31_LPTMR01_LPTMR1_INTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_INTSTS;

typedef union {
    sM2L31_LPTMR01_LPTMR1_INTSTS Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_INTSTS;

#define M2L31_LPTMR01_LPTMR1_CNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_CNT;

typedef union {
    sM2L31_LPTMR01_LPTMR1_CNT Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_CNT;

#define M2L31_LPTMR01_LPTMR1_CAP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_CAP;

typedef union {
    sM2L31_LPTMR01_LPTMR1_CAP Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_CAP;

#define M2L31_LPTMR01_LPTMR1_EXTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_EXTCTL;

typedef union {
    sM2L31_LPTMR01_LPTMR1_EXTCTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_EXTCTL;

#define M2L31_LPTMR01_LPTMR1_EINTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_EINTSTS;

typedef union {
    sM2L31_LPTMR01_LPTMR1_EINTSTS Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_EINTSTS;

#define M2L31_LPTMR01_LPTMR1_TRGCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_TRGCTL;

typedef union {
    sM2L31_LPTMR01_LPTMR1_TRGCTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_TRGCTL;

#define M2L31_LPTMR01_LPTMR1_CAPNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_CAPNF;

typedef union {
    sM2L31_LPTMR01_LPTMR1_CAPNF Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_CAPNF;

#define M2L31_LPTMR01_LPTMR1_PWMCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMCTL;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMCTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMCTL;

#define M2L31_LPTMR01_LPTMR1_PWMCLKPSC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMCLKPSC;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMCLKPSC Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMCLKPSC;

#define M2L31_LPTMR01_LPTMR1_PWMCNTCLR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMCNTCLR;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMCNTCLR Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMCNTCLR;

#define M2L31_LPTMR01_LPTMR1_PWMPERIOD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMPERIOD;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMPERIOD Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMPERIOD;

#define M2L31_LPTMR01_LPTMR1_PWMCMPDAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMCMPDAT;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMCMPDAT Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMCMPDAT;

#define M2L31_LPTMR01_LPTMR1_PWMCNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMCNT;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMCNT Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMCNT;

#define M2L31_LPTMR01_LPTMR1_PWMPOLCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMPOLCTL;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMPOLCTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMPOLCTL;

#define M2L31_LPTMR01_LPTMR1_PWMPOCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMPOCTL;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMPOCTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMPOCTL;

#define M2L31_LPTMR01_LPTMR1_PWMINTEN0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMINTEN0;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMINTEN0 Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMINTEN0;

#define M2L31_LPTMR01_LPTMR1_PWMINTSTS0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMINTSTS0;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMINTSTS0 Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMINTSTS0;

#define M2L31_LPTMR01_LPTMR1_PWMTRGCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMTRGCTL;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMTRGCTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMTRGCTL;

#define M2L31_LPTMR01_LPTMR1_PWMSTATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMSTATUS;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMSTATUS Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMSTATUS;

#define M2L31_LPTMR01_LPTMR1_PWMPBUF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMPBUF;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMPBUF Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMPBUF;

#define M2L31_LPTMR01_LPTMR1_PWMCMPBUF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMCMPBUF;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMCMPBUF Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMCMPBUF;

#define M2L31_LPTMR01_LPTMR1_PWMIFA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMIFA;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMIFA Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMIFA;

#define M2L31_LPTMR01_LPTMR1_PWMAINTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMAINTSTS;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMAINTSTS Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMAINTSTS;

#define M2L31_LPTMR01_LPTMR1_PWMAINTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMAINTEN;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMAINTEN Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMAINTEN;

#define M2L31_LPTMR01_LPTMR1_PWMAPDMACTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPTMR01_LPTMR1_PWMAPDMACTL;

typedef union {
    sM2L31_LPTMR01_LPTMR1_PWMAPDMACTL Bit;
    unsigned long  All;
} uM2L31_LPTMR01_LPTMR1_PWMAPDMACTL;

typedef struct {
    uM2L31_LPTMR01_LPTMR0_CTL M2L31_LPTMR01_LPTMR0_CTL; // Offset: 0x0
    uM2L31_LPTMR01_LPTMR0_CMP M2L31_LPTMR01_LPTMR0_CMP; // Offset: 0x4
    uM2L31_LPTMR01_LPTMR0_INTSTS M2L31_LPTMR01_LPTMR0_INTSTS; // Offset: 0x8
    uM2L31_LPTMR01_LPTMR0_CNT M2L31_LPTMR01_LPTMR0_CNT; // Offset: 0xc
    uM2L31_LPTMR01_LPTMR0_CAP M2L31_LPTMR01_LPTMR0_CAP; // Offset: 0x10
    uM2L31_LPTMR01_LPTMR0_EXTCTL M2L31_LPTMR01_LPTMR0_EXTCTL; // Offset: 0x14
    uM2L31_LPTMR01_LPTMR0_EINTSTS M2L31_LPTMR01_LPTMR0_EINTSTS; // Offset: 0x18
    uM2L31_LPTMR01_LPTMR0_TRGCTL M2L31_LPTMR01_LPTMR0_TRGCTL; // Offset: 0x1c
    unsigned long Reserved0;
    uM2L31_LPTMR01_LPTMR0_CAPNF M2L31_LPTMR01_LPTMR0_CAPNF; // Offset: 0x24
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    uM2L31_LPTMR01_LPTMR0_PWMCTL M2L31_LPTMR01_LPTMR0_PWMCTL; // Offset: 0x40
    uM2L31_LPTMR01_LPTMR0_PWMCLKPSC M2L31_LPTMR01_LPTMR0_PWMCLKPSC; // Offset: 0x44
    uM2L31_LPTMR01_LPTMR0_PWMCNTCLR M2L31_LPTMR01_LPTMR0_PWMCNTCLR; // Offset: 0x48
    uM2L31_LPTMR01_LPTMR0_PWMPERIOD M2L31_LPTMR01_LPTMR0_PWMPERIOD; // Offset: 0x4c
    uM2L31_LPTMR01_LPTMR0_PWMCMPDAT M2L31_LPTMR01_LPTMR0_PWMCMPDAT; // Offset: 0x50
    uM2L31_LPTMR01_LPTMR0_PWMCNT M2L31_LPTMR01_LPTMR0_PWMCNT; // Offset: 0x54
    uM2L31_LPTMR01_LPTMR0_PWMPOLCTL M2L31_LPTMR01_LPTMR0_PWMPOLCTL; // Offset: 0x58
    uM2L31_LPTMR01_LPTMR0_PWMPOCTL M2L31_LPTMR01_LPTMR0_PWMPOCTL; // Offset: 0x5c
    uM2L31_LPTMR01_LPTMR0_PWMINTEN0 M2L31_LPTMR01_LPTMR0_PWMINTEN0; // Offset: 0x60
    uM2L31_LPTMR01_LPTMR0_PWMINTSTS0 M2L31_LPTMR01_LPTMR0_PWMINTSTS0; // Offset: 0x64
    uM2L31_LPTMR01_LPTMR0_PWMTRGCTL M2L31_LPTMR01_LPTMR0_PWMTRGCTL; // Offset: 0x68
    uM2L31_LPTMR01_LPTMR0_PWMSTATUS M2L31_LPTMR01_LPTMR0_PWMSTATUS; // Offset: 0x6c
    uM2L31_LPTMR01_LPTMR0_PWMPBUF M2L31_LPTMR01_LPTMR0_PWMPBUF; // Offset: 0x70
    uM2L31_LPTMR01_LPTMR0_PWMCMPBUF M2L31_LPTMR01_LPTMR0_PWMCMPBUF; // Offset: 0x74
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
    uM2L31_LPTMR01_LPTMR0_PWMIFA M2L31_LPTMR01_LPTMR0_PWMIFA; // Offset: 0xa8
    uM2L31_LPTMR01_LPTMR0_PWMAINTSTS M2L31_LPTMR01_LPTMR0_PWMAINTSTS; // Offset: 0xac
    uM2L31_LPTMR01_LPTMR0_PWMAINTEN M2L31_LPTMR01_LPTMR0_PWMAINTEN; // Offset: 0xb0
    uM2L31_LPTMR01_LPTMR0_PWMAPDMACTL M2L31_LPTMR01_LPTMR0_PWMAPDMACTL; // Offset: 0xb4
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
    uM2L31_LPTMR01_LPTMR1_CTL M2L31_LPTMR01_LPTMR1_CTL; // Offset: 0x100
    uM2L31_LPTMR01_LPTMR1_CMP M2L31_LPTMR01_LPTMR1_CMP; // Offset: 0x104
    uM2L31_LPTMR01_LPTMR1_INTSTS M2L31_LPTMR01_LPTMR1_INTSTS; // Offset: 0x108
    uM2L31_LPTMR01_LPTMR1_CNT M2L31_LPTMR01_LPTMR1_CNT; // Offset: 0x10c
    uM2L31_LPTMR01_LPTMR1_CAP M2L31_LPTMR01_LPTMR1_CAP; // Offset: 0x110
    uM2L31_LPTMR01_LPTMR1_EXTCTL M2L31_LPTMR01_LPTMR1_EXTCTL; // Offset: 0x114
    uM2L31_LPTMR01_LPTMR1_EINTSTS M2L31_LPTMR01_LPTMR1_EINTSTS; // Offset: 0x118
    uM2L31_LPTMR01_LPTMR1_TRGCTL M2L31_LPTMR01_LPTMR1_TRGCTL; // Offset: 0x11c
    unsigned long Reserved37;
    uM2L31_LPTMR01_LPTMR1_CAPNF M2L31_LPTMR01_LPTMR1_CAPNF; // Offset: 0x124
    unsigned long Reserved38;
    unsigned long Reserved39;
    unsigned long Reserved40;
    unsigned long Reserved41;
    unsigned long Reserved42;
    unsigned long Reserved43;
    uM2L31_LPTMR01_LPTMR1_PWMCTL M2L31_LPTMR01_LPTMR1_PWMCTL; // Offset: 0x140
    uM2L31_LPTMR01_LPTMR1_PWMCLKPSC M2L31_LPTMR01_LPTMR1_PWMCLKPSC; // Offset: 0x144
    uM2L31_LPTMR01_LPTMR1_PWMCNTCLR M2L31_LPTMR01_LPTMR1_PWMCNTCLR; // Offset: 0x148
    uM2L31_LPTMR01_LPTMR1_PWMPERIOD M2L31_LPTMR01_LPTMR1_PWMPERIOD; // Offset: 0x14c
    uM2L31_LPTMR01_LPTMR1_PWMCMPDAT M2L31_LPTMR01_LPTMR1_PWMCMPDAT; // Offset: 0x150
    uM2L31_LPTMR01_LPTMR1_PWMCNT M2L31_LPTMR01_LPTMR1_PWMCNT; // Offset: 0x154
    uM2L31_LPTMR01_LPTMR1_PWMPOLCTL M2L31_LPTMR01_LPTMR1_PWMPOLCTL; // Offset: 0x158
    uM2L31_LPTMR01_LPTMR1_PWMPOCTL M2L31_LPTMR01_LPTMR1_PWMPOCTL; // Offset: 0x15c
    uM2L31_LPTMR01_LPTMR1_PWMINTEN0 M2L31_LPTMR01_LPTMR1_PWMINTEN0; // Offset: 0x160
    uM2L31_LPTMR01_LPTMR1_PWMINTSTS0 M2L31_LPTMR01_LPTMR1_PWMINTSTS0; // Offset: 0x164
    uM2L31_LPTMR01_LPTMR1_PWMTRGCTL M2L31_LPTMR01_LPTMR1_PWMTRGCTL; // Offset: 0x168
    uM2L31_LPTMR01_LPTMR1_PWMSTATUS M2L31_LPTMR01_LPTMR1_PWMSTATUS; // Offset: 0x16c
    uM2L31_LPTMR01_LPTMR1_PWMPBUF M2L31_LPTMR01_LPTMR1_PWMPBUF; // Offset: 0x170
    uM2L31_LPTMR01_LPTMR1_PWMCMPBUF M2L31_LPTMR01_LPTMR1_PWMCMPBUF; // Offset: 0x174
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
    uM2L31_LPTMR01_LPTMR1_PWMIFA M2L31_LPTMR01_LPTMR1_PWMIFA; // Offset: 0x1a8
    uM2L31_LPTMR01_LPTMR1_PWMAINTSTS M2L31_LPTMR01_LPTMR1_PWMAINTSTS; // Offset: 0x1ac
    uM2L31_LPTMR01_LPTMR1_PWMAINTEN M2L31_LPTMR01_LPTMR1_PWMAINTEN; // Offset: 0x1b0
    uM2L31_LPTMR01_LPTMR1_PWMAPDMACTL M2L31_LPTMR01_LPTMR1_PWMAPDMACTL; // Offset: 0x1b4
} sM2L31_LPTMR01;

