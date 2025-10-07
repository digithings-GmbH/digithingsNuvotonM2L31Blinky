// Base Addres of CANFD0 = 0x40020000

#define M2L31_CANFD0_CANFD_DBTP_RESET_VALUE 0x00000A33
typedef struct {
    unsigned long DSJW : 4;
    unsigned long DTSEG2 : 4;
    unsigned long DTSEG1 : 5;
    unsigned long Res0 : 3;
    unsigned long DBRP : 5;
    unsigned long Res1 : 2;
    unsigned long TDC : 1;
    unsigned long Res2 : 8;
} sM2L31_CANFD0_CANFD_DBTP;

typedef union {
    sM2L31_CANFD0_CANFD_DBTP Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_DBTP;

#define M2L31_CANFD0_CANFD_TEST_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long LBCK : 1;
    unsigned long TX : 2;
    unsigned long RX : 1;
    unsigned long Res1 : 24;
} sM2L31_CANFD0_CANFD_TEST;

typedef union {
    sM2L31_CANFD0_CANFD_TEST Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TEST;

#define M2L31_CANFD0_CANFD_RWD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WDC : 8;
    unsigned long WDV : 8;
    unsigned long Res0 : 16;
} sM2L31_CANFD0_CANFD_RWD;

typedef union {
    sM2L31_CANFD0_CANFD_RWD Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_RWD;

#define M2L31_CANFD0_CANFD_CCCR_RESET_VALUE 0x00000001
typedef struct {
    unsigned long INIT : 1;
    unsigned long CCE : 1;
    unsigned long ASM : 1;
    unsigned long CSA : 1;
    unsigned long CSR : 1;
    unsigned long MON : 1;
    unsigned long DAR : 1;
    unsigned long TEST : 1;
    unsigned long FDOE : 1;
    unsigned long BRSE : 1;
    unsigned long Res0 : 2;
    unsigned long PXHD : 1;
    unsigned long EFBI : 1;
    unsigned long TXP : 1;
    unsigned long NISO : 1;
    unsigned long Res1 : 16;
} sM2L31_CANFD0_CANFD_CCCR;

typedef union {
    sM2L31_CANFD0_CANFD_CCCR Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_CCCR;

#define M2L31_CANFD0_CANFD_NBTP_RESET_VALUE 0x06000A03
typedef struct {
    unsigned long NTSEG2 : 7;
    unsigned long Res0 : 1;
    unsigned long NTSEG1 : 8;
    unsigned long NBRP : 9;
    unsigned long NSJW : 7;
} sM2L31_CANFD0_CANFD_NBTP;

typedef union {
    sM2L31_CANFD0_CANFD_NBTP Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_NBTP;

#define M2L31_CANFD0_CANFD_TSCC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TSS : 2;
    unsigned long Res0 : 14;
    unsigned long TCP : 4;
    unsigned long Res1 : 12;
} sM2L31_CANFD0_CANFD_TSCC;

typedef union {
    sM2L31_CANFD0_CANFD_TSCC Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TSCC;

#define M2L31_CANFD0_CANFD_TSCV_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TSC : 16;
    unsigned long Res0 : 16;
} sM2L31_CANFD0_CANFD_TSCV;

typedef union {
    sM2L31_CANFD0_CANFD_TSCV Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TSCV;

#define M2L31_CANFD0_CANFD_TOCC_RESET_VALUE 0xFFFF0000
typedef struct {
    unsigned long ETOC : 1;
    unsigned long TOS : 2;
    unsigned long Res0 : 13;
    unsigned long TOP : 16;
} sM2L31_CANFD0_CANFD_TOCC;

typedef union {
    sM2L31_CANFD0_CANFD_TOCC Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TOCC;

#define M2L31_CANFD0_CANFD_TOCV_RESET_VALUE 0x0000FFFF
typedef struct {
    unsigned long TOC : 16;
    unsigned long Res0 : 16;
} sM2L31_CANFD0_CANFD_TOCV;

typedef union {
    sM2L31_CANFD0_CANFD_TOCV Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TOCV;

#define M2L31_CANFD0_CANFD_ECR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TEC : 8;
    unsigned long REC : 7;
    unsigned long RP : 1;
    unsigned long CEL : 8;
    unsigned long Res0 : 8;
} sM2L31_CANFD0_CANFD_ECR;

typedef union {
    sM2L31_CANFD0_CANFD_ECR Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_ECR;

#define M2L31_CANFD0_CANFD_PSR_RESET_VALUE 0x00000707
typedef struct {
    unsigned long LEC : 3;
    unsigned long ACT : 2;
    unsigned long EP : 1;
    unsigned long EW : 1;
    unsigned long BO : 1;
    unsigned long DLEC : 3;
    unsigned long RESI : 1;
    unsigned long RBRS : 1;
    unsigned long RFDF : 1;
    unsigned long PXE : 1;
    unsigned long Res0 : 1;
    unsigned long TDCV : 7;
    unsigned long Res1 : 9;
} sM2L31_CANFD0_CANFD_PSR;

typedef union {
    sM2L31_CANFD0_CANFD_PSR Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_PSR;

#define M2L31_CANFD0_CANFD_TDCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TDCF : 7;
    unsigned long Res0 : 1;
    unsigned long TDCO : 7;
    unsigned long Res1 : 17;
} sM2L31_CANFD0_CANFD_TDCR;

typedef union {
    sM2L31_CANFD0_CANFD_TDCR Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TDCR;

#define M2L31_CANFD0_CANFD_IR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RF0N : 1;
    unsigned long RF0W : 1;
    unsigned long RF0F : 1;
    unsigned long RF0L : 1;
    unsigned long RF1N : 1;
    unsigned long RF1W : 1;
    unsigned long RF1F : 1;
    unsigned long RF1L : 1;
    unsigned long HPM : 1;
    unsigned long TC : 1;
    unsigned long TCF : 1;
    unsigned long TFE : 1;
    unsigned long TEFN : 1;
    unsigned long TEFW : 1;
    unsigned long TEFF : 1;
    unsigned long TEFL : 1;
    unsigned long TSW : 1;
    unsigned long MRAF : 1;
    unsigned long TOO : 1;
    unsigned long DRX : 1;
    unsigned long Res0 : 2;
    unsigned long ELO : 1;
    unsigned long EP : 1;
    unsigned long EW : 1;
    unsigned long BO : 1;
    unsigned long WDI : 1;
    unsigned long PEA : 1;
    unsigned long PED : 1;
    unsigned long ARA : 1;
    unsigned long Res1 : 2;
} sM2L31_CANFD0_CANFD_IR;

typedef union {
    sM2L31_CANFD0_CANFD_IR Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_IR;

#define M2L31_CANFD0_CANFD_IE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RF0NE : 1;
    unsigned long RF0WE : 1;
    unsigned long RF0FE : 1;
    unsigned long RF0LE : 1;
    unsigned long RF1NE : 1;
    unsigned long RF1WE : 1;
    unsigned long RF1FE : 1;
    unsigned long RF1LE : 1;
    unsigned long HPME : 1;
    unsigned long TCE : 1;
    unsigned long TCFE : 1;
    unsigned long TFEE : 1;
    unsigned long TEFNE : 1;
    unsigned long TEFWE : 1;
    unsigned long TEFFE : 1;
    unsigned long TEFLE : 1;
    unsigned long TSWE : 1;
    unsigned long MRAFE : 1;
    unsigned long TOOE : 1;
    unsigned long DRXE : 1;
    unsigned long BECE : 1;
    unsigned long BEUE : 1;
    unsigned long ELOE : 1;
    unsigned long EPE : 1;
    unsigned long EWE : 1;
    unsigned long BOE : 1;
    unsigned long WDIE : 1;
    unsigned long PEAE : 1;
    unsigned long PEDE : 1;
    unsigned long ARAE : 1;
    unsigned long Res0 : 2;
} sM2L31_CANFD0_CANFD_IE;

typedef union {
    sM2L31_CANFD0_CANFD_IE Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_IE;

#define M2L31_CANFD0_CANFD_ILS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RF0NL : 1;
    unsigned long RF0WL : 1;
    unsigned long RF0FL : 1;
    unsigned long RF0LL : 1;
    unsigned long RF1NL : 1;
    unsigned long RF1WL : 1;
    unsigned long RF1FL : 1;
    unsigned long RF1LL : 1;
    unsigned long HPML : 1;
    unsigned long TCL : 1;
    unsigned long TCFL : 1;
    unsigned long TFEL : 1;
    unsigned long TEFNL : 1;
    unsigned long TEFWL : 1;
    unsigned long TEFFL : 1;
    unsigned long TEFLL : 1;
    unsigned long TSWL : 1;
    unsigned long MRAFL : 1;
    unsigned long TOOL : 1;
    unsigned long DRXL : 1;
    unsigned long BECL : 1;
    unsigned long BEUL : 1;
    unsigned long ELOL : 1;
    unsigned long EPL : 1;
    unsigned long EWL : 1;
    unsigned long BOL : 1;
    unsigned long WDIL : 1;
    unsigned long PEAL : 1;
    unsigned long PEDL : 1;
    unsigned long ARAL : 1;
    unsigned long Res0 : 2;
} sM2L31_CANFD0_CANFD_ILS;

typedef union {
    sM2L31_CANFD0_CANFD_ILS Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_ILS;

#define M2L31_CANFD0_CANFD_ILE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EINT0 : 1;
    unsigned long EINT1 : 1;
    unsigned long Res0 : 30;
} sM2L31_CANFD0_CANFD_ILE;

typedef union {
    sM2L31_CANFD0_CANFD_ILE Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_ILE;

#define M2L31_CANFD0_CANFD_GFC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RRFE : 1;
    unsigned long RRFS : 1;
    unsigned long ANFE : 2;
    unsigned long ANFS : 2;
    unsigned long Res0 : 26;
} sM2L31_CANFD0_CANFD_GFC;

typedef union {
    sM2L31_CANFD0_CANFD_GFC Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_GFC;

#define M2L31_CANFD0_CANFD_SIDFC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long FLSSA : 14;
    unsigned long LSS : 8;
    unsigned long Res1 : 8;
} sM2L31_CANFD0_CANFD_SIDFC;

typedef union {
    sM2L31_CANFD0_CANFD_SIDFC Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_SIDFC;

#define M2L31_CANFD0_CANFD_XIDFC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long FLESA : 14;
    unsigned long LSE : 7;
    unsigned long Res1 : 9;
} sM2L31_CANFD0_CANFD_XIDFC;

typedef union {
    sM2L31_CANFD0_CANFD_XIDFC Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_XIDFC;

#define M2L31_CANFD0_CANFD_XIDAM_RESET_VALUE 0x1FFFFFFF
typedef struct {
    unsigned long EIDM : 29;
    unsigned long Res0 : 3;
} sM2L31_CANFD0_CANFD_XIDAM;

typedef union {
    sM2L31_CANFD0_CANFD_XIDAM Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_XIDAM;

#define M2L31_CANFD0_CANFD_HPMS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BIDX : 6;
    unsigned long MSI : 2;
    unsigned long FIDX : 7;
    unsigned long FLST : 1;
    unsigned long Res0 : 16;
} sM2L31_CANFD0_CANFD_HPMS;

typedef union {
    sM2L31_CANFD0_CANFD_HPMS Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_HPMS;

#define M2L31_CANFD0_CANFD_NDAT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDn : 32;
} sM2L31_CANFD0_CANFD_NDAT1;

typedef union {
    sM2L31_CANFD0_CANFD_NDAT1 Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_NDAT1;

#define M2L31_CANFD0_CANFD_NDAT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NDn : 32;
} sM2L31_CANFD0_CANFD_NDAT2;

typedef union {
    sM2L31_CANFD0_CANFD_NDAT2 Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_NDAT2;

#define M2L31_CANFD0_CANFD_RXF0C_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long F0SA : 14;
    unsigned long F0S : 7;
    unsigned long Res1 : 1;
    unsigned long F0WM : 7;
    unsigned long F0OM : 1;
} sM2L31_CANFD0_CANFD_RXF0C;

typedef union {
    sM2L31_CANFD0_CANFD_RXF0C Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_RXF0C;

#define M2L31_CANFD0_CANFD_RXF0S_RESET_VALUE 0x00000000
typedef struct {
    unsigned long F0FL : 7;
    unsigned long Res0 : 1;
    unsigned long F0GI : 6;
    unsigned long Res1 : 2;
    unsigned long F0PI : 6;
    unsigned long Res2 : 2;
    unsigned long F0F : 1;
    unsigned long RF0L : 1;
    unsigned long Res3 : 6;
} sM2L31_CANFD0_CANFD_RXF0S;

typedef union {
    sM2L31_CANFD0_CANFD_RXF0S Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_RXF0S;

#define M2L31_CANFD0_CANFD_RXF0A_RESET_VALUE 0x00000000
typedef struct {
    unsigned long F0A : 6;
    unsigned long Res0 : 26;
} sM2L31_CANFD0_CANFD_RXF0A;

typedef union {
    sM2L31_CANFD0_CANFD_RXF0A Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_RXF0A;

#define M2L31_CANFD0_CANFD_RXBC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long RBSA : 14;
    unsigned long Res1 : 16;
} sM2L31_CANFD0_CANFD_RXBC;

typedef union {
    sM2L31_CANFD0_CANFD_RXBC Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_RXBC;

#define M2L31_CANFD0_CANFD_RXF1C_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long F1SA : 14;
    unsigned long F1S : 7;
    unsigned long Res1 : 1;
    unsigned long F1WM : 7;
    unsigned long F1OM : 1;
} sM2L31_CANFD0_CANFD_RXF1C;

typedef union {
    sM2L31_CANFD0_CANFD_RXF1C Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_RXF1C;

#define M2L31_CANFD0_CANFD_RXF1S_RESET_VALUE 0x00000000
typedef struct {
    unsigned long F1FL : 7;
    unsigned long Res0 : 1;
    unsigned long F1GI : 6;
    unsigned long Res1 : 2;
    unsigned long F1PI : 6;
    unsigned long Res2 : 2;
    unsigned long F1F : 1;
    unsigned long RF1L : 1;
    unsigned long Res3 : 6;
} sM2L31_CANFD0_CANFD_RXF1S;

typedef union {
    sM2L31_CANFD0_CANFD_RXF1S Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_RXF1S;

#define M2L31_CANFD0_CANFD_RXF1A_RESET_VALUE 0x00000000
typedef struct {
    unsigned long F1AI : 6;
    unsigned long Res0 : 26;
} sM2L31_CANFD0_CANFD_RXF1A;

typedef union {
    sM2L31_CANFD0_CANFD_RXF1A Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_RXF1A;

#define M2L31_CANFD0_CANFD_RXESC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long F0DS : 3;
    unsigned long Res0 : 1;
    unsigned long F1DS : 3;
    unsigned long Res1 : 1;
    unsigned long RBDS : 3;
    unsigned long Res2 : 21;
} sM2L31_CANFD0_CANFD_RXESC;

typedef union {
    sM2L31_CANFD0_CANFD_RXESC Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_RXESC;

#define M2L31_CANFD0_CANFD_TXBC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long TBSA : 14;
    unsigned long NDTB : 6;
    unsigned long Res1 : 2;
    unsigned long TFQS : 6;
    unsigned long TFQM : 1;
    unsigned long Res2 : 1;
} sM2L31_CANFD0_CANFD_TXBC;

typedef union {
    sM2L31_CANFD0_CANFD_TXBC Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXBC;

#define M2L31_CANFD0_CANFD_TXFQS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TFFL : 6;
    unsigned long Res0 : 2;
    unsigned long TFG : 5;
    unsigned long Res1 : 3;
    unsigned long TFQP : 5;
    unsigned long TFQF : 1;
    unsigned long Res2 : 10;
} sM2L31_CANFD0_CANFD_TXFQS;

typedef union {
    sM2L31_CANFD0_CANFD_TXFQS Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXFQS;

#define M2L31_CANFD0_CANFD_TXESC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TBDS : 3;
    unsigned long Res0 : 29;
} sM2L31_CANFD0_CANFD_TXESC;

typedef union {
    sM2L31_CANFD0_CANFD_TXESC Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXESC;

#define M2L31_CANFD0_CANFD_TXBRP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TRPn : 32;
} sM2L31_CANFD0_CANFD_TXBRP;

typedef union {
    sM2L31_CANFD0_CANFD_TXBRP Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXBRP;

#define M2L31_CANFD0_CANFD_TXBAR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ARn : 32;
} sM2L31_CANFD0_CANFD_TXBAR;

typedef union {
    sM2L31_CANFD0_CANFD_TXBAR Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXBAR;

#define M2L31_CANFD0_CANFD_TXBCR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CRn : 32;
} sM2L31_CANFD0_CANFD_TXBCR;

typedef union {
    sM2L31_CANFD0_CANFD_TXBCR Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXBCR;

#define M2L31_CANFD0_CANFD_TXBTO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TOn : 32;
} sM2L31_CANFD0_CANFD_TXBTO;

typedef union {
    sM2L31_CANFD0_CANFD_TXBTO Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXBTO;

#define M2L31_CANFD0_CANFD_TXBCF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CFn : 32;
} sM2L31_CANFD0_CANFD_TXBCF;

typedef union {
    sM2L31_CANFD0_CANFD_TXBCF Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXBCF;

#define M2L31_CANFD0_CANFD_TXBTIE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TIEn : 32;
} sM2L31_CANFD0_CANFD_TXBTIE;

typedef union {
    sM2L31_CANFD0_CANFD_TXBTIE Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXBTIE;

#define M2L31_CANFD0_CANFD_TXBCIE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CFIEn : 32;
} sM2L31_CANFD0_CANFD_TXBCIE;

typedef union {
    sM2L31_CANFD0_CANFD_TXBCIE Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXBCIE;

#define M2L31_CANFD0_CANFD_TXEFC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long EFSA : 14;
    unsigned long EFS : 6;
    unsigned long Res1 : 2;
    unsigned long EFWM : 6;
    unsigned long Res2 : 2;
} sM2L31_CANFD0_CANFD_TXEFC;

typedef union {
    sM2L31_CANFD0_CANFD_TXEFC Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXEFC;

#define M2L31_CANFD0_CANFD_TXEFS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EFFL : 6;
    unsigned long Res0 : 2;
    unsigned long EFGI : 5;
    unsigned long Res1 : 3;
    unsigned long EFPI : 5;
    unsigned long Res2 : 3;
    unsigned long EFF : 1;
    unsigned long TEFL : 1;
    unsigned long Res3 : 6;
} sM2L31_CANFD0_CANFD_TXEFS;

typedef union {
    sM2L31_CANFD0_CANFD_TXEFS Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXEFS;

#define M2L31_CANFD0_CANFD_TXEFA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EFAI : 5;
    unsigned long Res0 : 27;
} sM2L31_CANFD0_CANFD_TXEFA;

typedef union {
    sM2L31_CANFD0_CANFD_TXEFA Bit;
    unsigned long  All;
} uM2L31_CANFD0_CANFD_TXEFA;

typedef struct {
    unsigned long Reserved0;
    unsigned long Reserved1;
    uM2L31_CANFD0_CANFD_DBTP M2L31_CANFD0_CANFD_DBTP; // Offset: 0xc
    uM2L31_CANFD0_CANFD_TEST M2L31_CANFD0_CANFD_TEST; // Offset: 0x10
    uM2L31_CANFD0_CANFD_RWD M2L31_CANFD0_CANFD_RWD; // Offset: 0x14
    uM2L31_CANFD0_CANFD_CCCR M2L31_CANFD0_CANFD_CCCR; // Offset: 0x18
    uM2L31_CANFD0_CANFD_NBTP M2L31_CANFD0_CANFD_NBTP; // Offset: 0x1c
    uM2L31_CANFD0_CANFD_TSCC M2L31_CANFD0_CANFD_TSCC; // Offset: 0x20
    uM2L31_CANFD0_CANFD_TSCV M2L31_CANFD0_CANFD_TSCV; // Offset: 0x24
    uM2L31_CANFD0_CANFD_TOCC M2L31_CANFD0_CANFD_TOCC; // Offset: 0x28
    uM2L31_CANFD0_CANFD_TOCV M2L31_CANFD0_CANFD_TOCV; // Offset: 0x2c
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    uM2L31_CANFD0_CANFD_ECR M2L31_CANFD0_CANFD_ECR; // Offset: 0x40
    uM2L31_CANFD0_CANFD_PSR M2L31_CANFD0_CANFD_PSR; // Offset: 0x44
    uM2L31_CANFD0_CANFD_TDCR M2L31_CANFD0_CANFD_TDCR; // Offset: 0x48
    unsigned long Reserved6;
    uM2L31_CANFD0_CANFD_IR M2L31_CANFD0_CANFD_IR; // Offset: 0x50
    uM2L31_CANFD0_CANFD_IE M2L31_CANFD0_CANFD_IE; // Offset: 0x54
    uM2L31_CANFD0_CANFD_ILS M2L31_CANFD0_CANFD_ILS; // Offset: 0x58
    uM2L31_CANFD0_CANFD_ILE M2L31_CANFD0_CANFD_ILE; // Offset: 0x5c
    unsigned long Reserved7;
    unsigned long Reserved8;
    unsigned long Reserved9;
    unsigned long Reserved10;
    unsigned long Reserved11;
    unsigned long Reserved12;
    unsigned long Reserved13;
    unsigned long Reserved14;
    uM2L31_CANFD0_CANFD_GFC M2L31_CANFD0_CANFD_GFC; // Offset: 0x80
    uM2L31_CANFD0_CANFD_SIDFC M2L31_CANFD0_CANFD_SIDFC; // Offset: 0x84
    uM2L31_CANFD0_CANFD_XIDFC M2L31_CANFD0_CANFD_XIDFC; // Offset: 0x88
    unsigned long Reserved15;
    uM2L31_CANFD0_CANFD_XIDAM M2L31_CANFD0_CANFD_XIDAM; // Offset: 0x90
    uM2L31_CANFD0_CANFD_HPMS M2L31_CANFD0_CANFD_HPMS; // Offset: 0x94
    uM2L31_CANFD0_CANFD_NDAT1 M2L31_CANFD0_CANFD_NDAT1; // Offset: 0x98
    uM2L31_CANFD0_CANFD_NDAT2 M2L31_CANFD0_CANFD_NDAT2; // Offset: 0x9c
    uM2L31_CANFD0_CANFD_RXF0C M2L31_CANFD0_CANFD_RXF0C; // Offset: 0xa0
    uM2L31_CANFD0_CANFD_RXF0S M2L31_CANFD0_CANFD_RXF0S; // Offset: 0xa4
    uM2L31_CANFD0_CANFD_RXF0A M2L31_CANFD0_CANFD_RXF0A; // Offset: 0xa8
    uM2L31_CANFD0_CANFD_RXBC M2L31_CANFD0_CANFD_RXBC; // Offset: 0xac
    uM2L31_CANFD0_CANFD_RXF1C M2L31_CANFD0_CANFD_RXF1C; // Offset: 0xb0
    uM2L31_CANFD0_CANFD_RXF1S M2L31_CANFD0_CANFD_RXF1S; // Offset: 0xb4
    uM2L31_CANFD0_CANFD_RXF1A M2L31_CANFD0_CANFD_RXF1A; // Offset: 0xb8
    uM2L31_CANFD0_CANFD_RXESC M2L31_CANFD0_CANFD_RXESC; // Offset: 0xbc
    uM2L31_CANFD0_CANFD_TXBC M2L31_CANFD0_CANFD_TXBC; // Offset: 0xc0
    uM2L31_CANFD0_CANFD_TXFQS M2L31_CANFD0_CANFD_TXFQS; // Offset: 0xc4
    uM2L31_CANFD0_CANFD_TXESC M2L31_CANFD0_CANFD_TXESC; // Offset: 0xc8
    uM2L31_CANFD0_CANFD_TXBRP M2L31_CANFD0_CANFD_TXBRP; // Offset: 0xcc
    uM2L31_CANFD0_CANFD_TXBAR M2L31_CANFD0_CANFD_TXBAR; // Offset: 0xd0
    uM2L31_CANFD0_CANFD_TXBCR M2L31_CANFD0_CANFD_TXBCR; // Offset: 0xd4
    uM2L31_CANFD0_CANFD_TXBTO M2L31_CANFD0_CANFD_TXBTO; // Offset: 0xd8
    uM2L31_CANFD0_CANFD_TXBCF M2L31_CANFD0_CANFD_TXBCF; // Offset: 0xdc
    uM2L31_CANFD0_CANFD_TXBTIE M2L31_CANFD0_CANFD_TXBTIE; // Offset: 0xe0
    uM2L31_CANFD0_CANFD_TXBCIE M2L31_CANFD0_CANFD_TXBCIE; // Offset: 0xe4
    unsigned long Reserved16;
    unsigned long Reserved17;
    uM2L31_CANFD0_CANFD_TXEFC M2L31_CANFD0_CANFD_TXEFC; // Offset: 0xf0
    uM2L31_CANFD0_CANFD_TXEFS M2L31_CANFD0_CANFD_TXEFS; // Offset: 0xf4
    uM2L31_CANFD0_CANFD_TXEFA M2L31_CANFD0_CANFD_TXEFA; // Offset: 0xf8
} sM2L31_CANFD0;

