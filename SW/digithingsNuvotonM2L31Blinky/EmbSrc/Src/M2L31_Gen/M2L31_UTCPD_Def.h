// Base Addres of UTCPD = 0x400C6000

#define M2L31_UTCPD_UTCPD_VID_RESET_VALUE 0x00000416
typedef struct {
    unsigned long VID : 16;
    unsigned long Res0 : 16;
} sM2L31_UTCPD_UTCPD_VID;

typedef union {
    sM2L31_UTCPD_UTCPD_VID Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VID;

#define M2L31_UTCPD_UTCPD_PID_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PID : 16;
    unsigned long Res0 : 16;
} sM2L31_UTCPD_UTCPD_PID;

typedef union {
    sM2L31_UTCPD_UTCPD_PID Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_PID;

#define M2L31_UTCPD_UTCPD_DID_RESET_VALUE 0x00000001
typedef struct {
    unsigned long DID : 16;
    unsigned long Res0 : 16;
} sM2L31_UTCPD_UTCPD_DID;

typedef union {
    sM2L31_UTCPD_UTCPD_DID Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_DID;

#define M2L31_UTCPD_UTCPD_TCREV_RESET_VALUE 0x00000013
typedef struct {
    unsigned long TCREV : 8;
    unsigned long Res0 : 24;
} sM2L31_UTCPD_UTCPD_TCREV;

typedef union {
    sM2L31_UTCPD_UTCPD_TCREV Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_TCREV;

#define M2L31_UTCPD_UTCPD_PDREV_RESET_VALUE 0x00003111
typedef struct {
    unsigned long PDVER : 8;
    unsigned long PDREV : 8;
    unsigned long Res0 : 16;
} sM2L31_UTCPD_UTCPD_PDREV;

typedef union {
    sM2L31_UTCPD_UTCPD_PDREV Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_PDREV;

#define M2L31_UTCPD_UTCPD_IS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCSCHIS : 1;
    unsigned long PWRSCHIS : 1;
    unsigned long RXSOPIS : 1;
    unsigned long RXHRSTIS : 1;
    unsigned long TXFALIS : 1;
    unsigned long TXDCUDIS : 1;
    unsigned long TXOKIS : 1;
    unsigned long VBAMHIS : 1;
    unsigned long VBAMLIS : 1;
    unsigned long FUTIS : 1;
    unsigned long RXOFIS : 1;
    unsigned long SKDCDTIS : 1;
    unsigned long Res0 : 3;
    unsigned long VNDIS : 1;
    unsigned long Res1 : 16;
} sM2L31_UTCPD_UTCPD_IS;

typedef union {
    sM2L31_UTCPD_UTCPD_IS Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_IS;

#define M2L31_UTCPD_UTCPD_IE_RESET_VALUE 0x00000FFF
typedef struct {
    unsigned long CCSCHIE : 1;
    unsigned long PWRSCHIE : 1;
    unsigned long RXSOPIE : 1;
    unsigned long RXHRSTIE : 1;
    unsigned long TXFAILIE : 1;
    unsigned long TXDCUDIE : 1;
    unsigned long TXOKIE : 1;
    unsigned long VBAMHIE : 1;
    unsigned long VBAMLIE : 1;
    unsigned long FUTIE : 1;
    unsigned long RXOFIE : 1;
    unsigned long SKDCDTIE : 1;
    unsigned long Res0 : 3;
    unsigned long VNDIE : 1;
    unsigned long Res1 : 16;
} sM2L31_UTCPD_UTCPD_IE;

typedef union {
    sM2L31_UTCPD_UTCPD_IE Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_IE;

#define M2L31_UTCPD_UTCPD_PWRSTSIE_RESET_VALUE 0x000000BF
typedef struct {
    unsigned long SKVBIE : 1;
    unsigned long VCPSIE : 1;
    unsigned long VBPSIE : 1;
    unsigned long VBDTDGIE : 1;
    unsigned long SRVBIE : 1;
    unsigned long SRHVIE : 1;
    unsigned long Res0 : 1;
    unsigned long DACONIE : 1;
    unsigned long Res1 : 24;
} sM2L31_UTCPD_UTCPD_PWRSTSIE;

typedef union {
    sM2L31_UTCPD_UTCPD_PWRSTSIE Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_PWRSTSIE;

#define M2L31_UTCPD_UTCPD_FUTSTSIE_RESET_VALUE 0x0000007E
typedef struct {
    unsigned long Res0 : 1;
    unsigned long VCOCIE : 1;
    unsigned long VBOVIE : 1;
    unsigned long VBOCIE : 1;
    unsigned long FDGFALIE : 1;
    unsigned long ADGFALIE : 1;
    unsigned long FOFFVBIE : 1;
    unsigned long Res1 : 25;
} sM2L31_UTCPD_UTCPD_FUTSTSIE;

typedef union {
    sM2L31_UTCPD_UTCPD_FUTSTSIE Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_FUTSTSIE;

#define M2L31_UTCPD_UTCPD_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ORIENT : 1;
    unsigned long BISTEN : 1;
    unsigned long Res0 : 30;
} sM2L31_UTCPD_UTCPD_CTL;

typedef union {
    sM2L31_UTCPD_UTCPD_CTL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_CTL;

#define M2L31_UTCPD_UTCPD_PINPL_RESET_VALUE 0x00000430
typedef struct {
    unsigned long VBSRENPL : 1;
    unsigned long VBSKENPL : 1;
    unsigned long VBDGENPL : 1;
    unsigned long TXFRSPL : 1;
    unsigned long FOFFVBPL : 1;
    unsigned long VBOCPL : 1;
    unsigned long Res0 : 2;
    unsigned long VCENPL : 1;
    unsigned long VCDGENPL : 1;
    unsigned long VCOCPL : 1;
    unsigned long Res1 : 21;
} sM2L31_UTCPD_UTCPD_PINPL;

typedef union {
    sM2L31_UTCPD_UTCPD_PINPL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_PINPL;

#define M2L31_UTCPD_UTCPD_ROLCTL_RESET_VALUE 0x0000000A
typedef struct {
    unsigned long CC1 : 2;
    unsigned long CC2 : 2;
    unsigned long RPVALUE : 2;
    unsigned long DRP : 1;
    unsigned long Res0 : 25;
} sM2L31_UTCPD_UTCPD_ROLCTL;

typedef union {
    sM2L31_UTCPD_UTCPD_ROLCTL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_ROLCTL;

#define M2L31_UTCPD_UTCPD_FUTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VCOCDTDS : 1;
    unsigned long VBOVDTDS : 1;
    unsigned long VBOCDTDS : 1;
    unsigned long VBDGTMDS : 1;
    unsigned long FOFFVBDS : 1;
    unsigned long Res0 : 27;
} sM2L31_UTCPD_UTCPD_FUTCTL;

typedef union {
    sM2L31_UTCPD_UTCPD_FUTCTL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_FUTCTL;

#define M2L31_UTCPD_UTCPD_PWRCTL_RESET_VALUE 0x00000060
typedef struct {
    unsigned long VCEN : 1;
    unsigned long VCPWR : 1;
    unsigned long FDGEN : 1;
    unsigned long BDGEN : 1;
    unsigned long ADGDC : 1;
    unsigned long DSVBAM : 1;
    unsigned long VBMONI : 1;
    unsigned long Res0 : 25;
} sM2L31_UTCPD_UTCPD_PWRCTL;

typedef union {
    sM2L31_UTCPD_UTCPD_PWRCTL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_PWRCTL;

#define M2L31_UTCPD_UTCPD_CCSTS_RESET_VALUE 0x00000010
typedef struct {
    unsigned long CC1STATE : 2;
    unsigned long CC2STATE : 2;
    unsigned long CONRLT : 1;
    unsigned long LK4CONN : 1;
    unsigned long Res0 : 26;
} sM2L31_UTCPD_UTCPD_CCSTS;

typedef union {
    sM2L31_UTCPD_UTCPD_CCSTS Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_CCSTS;

#define M2L31_UTCPD_UTCPD_PWRSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SKVB : 1;
    unsigned long VCPS : 1;
    unsigned long VBPS : 1;
    unsigned long VBPSDTEN : 1;
    unsigned long SRVB : 1;
    unsigned long SRHV : 1;
    unsigned long Res0 : 1;
    unsigned long DACON : 1;
    unsigned long Res1 : 24;
} sM2L31_UTCPD_UTCPD_PWRSTS;

typedef union {
    sM2L31_UTCPD_UTCPD_PWRSTS Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_PWRSTS;

#define M2L31_UTCPD_UTCPD_FUTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long VCOCFUT : 1;
    unsigned long VBOVFUT : 1;
    unsigned long VBOCFUT : 1;
    unsigned long FDGFAL : 1;
    unsigned long ADGFAL : 1;
    unsigned long FOFFVB : 1;
    unsigned long Res1 : 25;
} sM2L31_UTCPD_UTCPD_FUTSTS;

typedef union {
    sM2L31_UTCPD_UTCPD_FUTSTS Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_FUTSTS;

#define M2L31_UTCPD_UTCPD_CMD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMD : 8;
    unsigned long Res0 : 24;
} sM2L31_UTCPD_UTCPD_CMD;

typedef union {
    sM2L31_UTCPD_UTCPD_CMD Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_CMD;

#define M2L31_UTCPD_UTCPD_DVCAP1_RESET_VALUE 0x00007EDF
typedef struct {
    unsigned long CPSRVB : 1;
    unsigned long CPSRHV : 1;
    unsigned long CPSKVB : 1;
    unsigned long CPSRVC : 1;
    unsigned long CPSDBG : 1;
    unsigned long CPROL : 3;
    unsigned long CPSRRE : 2;
    unsigned long CPVBAM : 1;
    unsigned long CPFDG : 1;
    unsigned long CPBDG : 1;
    unsigned long CPVBOVP : 1;
    unsigned long CPVBOCP : 1;
    unsigned long Res0 : 17;
} sM2L31_UTCPD_UTCPD_DVCAP1;

typedef union {
    sM2L31_UTCPD_UTCPD_DVCAP1 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_DVCAP1;

#define M2L31_UTCPD_UTCPD_DVCAP2_RESET_VALUE 0x000000C3
typedef struct {
    unsigned long CPVCOC : 1;
    unsigned long CPVCPWR : 3;
    unsigned long CPVBAMLS : 2;
    unsigned long CPSPDGTH : 1;
    unsigned long CPSKDCDT : 1;
    unsigned long Res0 : 24;
} sM2L31_UTCPD_UTCPD_DVCAP2;

typedef union {
    sM2L31_UTCPD_UTCPD_DVCAP2 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_DVCAP2;

#define M2L31_UTCPD_UTCPD_MSHEAD_RESET_VALUE 0x00000004
typedef struct {
    unsigned long PWRROL : 1;
    unsigned long PDREV : 2;
    unsigned long DAROL : 1;
    unsigned long CABPLG : 1;
    unsigned long Res0 : 27;
} sM2L31_UTCPD_UTCPD_MSHEAD;

typedef union {
    sM2L31_UTCPD_UTCPD_MSHEAD Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_MSHEAD;

#define M2L31_UTCPD_UTCPD_DTRXEVNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SOPEN : 1;
    unsigned long SOPPEN : 1;
    unsigned long SOPPPEN : 1;
    unsigned long SDBGPEN : 1;
    unsigned long SDBGPPEN : 1;
    unsigned long HRSTEN : 1;
    unsigned long CABRSTEN : 1;
    unsigned long Res0 : 25;
} sM2L31_UTCPD_UTCPD_DTRXEVNT;

typedef union {
    sM2L31_UTCPD_UTCPD_DTRXEVNT Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_DTRXEVNT;

#define M2L31_UTCPD_UTCPD_RXBCNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RXBCNT : 8;
    unsigned long Res0 : 24;
} sM2L31_UTCPD_UTCPD_RXBCNT;

typedef union {
    sM2L31_UTCPD_UTCPD_RXBCNT Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_RXBCNT;

#define M2L31_UTCPD_UTCPD_RXFTYPE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RXFTYPE : 3;
    unsigned long Res0 : 29;
} sM2L31_UTCPD_UTCPD_RXFTYPE;

typedef union {
    sM2L31_UTCPD_UTCPD_RXFTYPE Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_RXFTYPE;

#define M2L31_UTCPD_UTCPD_RXHEAD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RXHEAD0 : 8;
    unsigned long RXHEAD1 : 8;
    unsigned long Res0 : 16;
} sM2L31_UTCPD_UTCPD_RXHEAD;

typedef union {
    sM2L31_UTCPD_UTCPD_RXHEAD Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_RXHEAD;

#define M2L31_UTCPD_UTCPD_RXDA0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RXDAB0 : 8;
    unsigned long RXDAB1 : 8;
    unsigned long RXDAB2 : 8;
    unsigned long RXDAB3 : 8;
} sM2L31_UTCPD_UTCPD_RXDA0;

typedef union {
    sM2L31_UTCPD_UTCPD_RXDA0 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_RXDA0;

#define M2L31_UTCPD_UTCPD_RXDA1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UTCPD_UTCPD_RXDA1;

typedef union {
    sM2L31_UTCPD_UTCPD_RXDA1 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_RXDA1;

#define M2L31_UTCPD_UTCPD_RXDA2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UTCPD_UTCPD_RXDA2;

typedef union {
    sM2L31_UTCPD_UTCPD_RXDA2 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_RXDA2;

#define M2L31_UTCPD_UTCPD_RXDA3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UTCPD_UTCPD_RXDA3;

typedef union {
    sM2L31_UTCPD_UTCPD_RXDA3 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_RXDA3;

#define M2L31_UTCPD_UTCPD_RXDA4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UTCPD_UTCPD_RXDA4;

typedef union {
    sM2L31_UTCPD_UTCPD_RXDA4 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_RXDA4;

#define M2L31_UTCPD_UTCPD_RXDA5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UTCPD_UTCPD_RXDA5;

typedef union {
    sM2L31_UTCPD_UTCPD_RXDA5 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_RXDA5;

#define M2L31_UTCPD_UTCPD_RXDA6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UTCPD_UTCPD_RXDA6;

typedef union {
    sM2L31_UTCPD_UTCPD_RXDA6 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_RXDA6;

#define M2L31_UTCPD_UTCPD_TXCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXSTYPE : 3;
    unsigned long Res0 : 1;
    unsigned long RETRYCNT : 2;
    unsigned long Res1 : 26;
} sM2L31_UTCPD_UTCPD_TXCTL;

typedef union {
    sM2L31_UTCPD_UTCPD_TXCTL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_TXCTL;

#define M2L31_UTCPD_UTCPD_TXBCNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXBCNT : 8;
    unsigned long Res0 : 24;
} sM2L31_UTCPD_UTCPD_TXBCNT;

typedef union {
    sM2L31_UTCPD_UTCPD_TXBCNT Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_TXBCNT;

#define M2L31_UTCPD_UTCPD_TXHEAD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXHEAD0 : 8;
    unsigned long TXHEAD1 : 8;
    unsigned long Res0 : 16;
} sM2L31_UTCPD_UTCPD_TXHEAD;

typedef union {
    sM2L31_UTCPD_UTCPD_TXHEAD Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_TXHEAD;

#define M2L31_UTCPD_UTCPD_TXDA0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXDAB0 : 8;
    unsigned long TXDAB1 : 8;
    unsigned long TXDAB2 : 8;
    unsigned long TXDAB3 : 8;
} sM2L31_UTCPD_UTCPD_TXDA0;

typedef union {
    sM2L31_UTCPD_UTCPD_TXDA0 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_TXDA0;

#define M2L31_UTCPD_UTCPD_TXDA1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UTCPD_UTCPD_TXDA1;

typedef union {
    sM2L31_UTCPD_UTCPD_TXDA1 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_TXDA1;

#define M2L31_UTCPD_UTCPD_TXDA2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UTCPD_UTCPD_TXDA2;

typedef union {
    sM2L31_UTCPD_UTCPD_TXDA2 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_TXDA2;

#define M2L31_UTCPD_UTCPD_TXDA3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UTCPD_UTCPD_TXDA3;

typedef union {
    sM2L31_UTCPD_UTCPD_TXDA3 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_TXDA3;

#define M2L31_UTCPD_UTCPD_TXDA4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UTCPD_UTCPD_TXDA4;

typedef union {
    sM2L31_UTCPD_UTCPD_TXDA4 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_TXDA4;

#define M2L31_UTCPD_UTCPD_TXDA5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UTCPD_UTCPD_TXDA5;

typedef union {
    sM2L31_UTCPD_UTCPD_TXDA5 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_TXDA5;

#define M2L31_UTCPD_UTCPD_TXDA6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UTCPD_UTCPD_TXDA6;

typedef union {
    sM2L31_UTCPD_UTCPD_TXDA6 Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_TXDA6;

#define M2L31_UTCPD_UTCPD_VBVOL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VBVOL : 10;
    unsigned long VBSCALE : 2;
    unsigned long Res0 : 20;
} sM2L31_UTCPD_UTCPD_VBVOL;

typedef union {
    sM2L31_UTCPD_UTCPD_VBVOL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VBVOL;

#define M2L31_UTCPD_UTCPD_SKVBDCTH_RESET_VALUE 0x0000008C
typedef struct {
    unsigned long SKVBDCTH : 10;
    unsigned long Res0 : 22;
} sM2L31_UTCPD_UTCPD_SKVBDCTH;

typedef union {
    sM2L31_UTCPD_UTCPD_SKVBDCTH Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_SKVBDCTH;

#define M2L31_UTCPD_UTCPD_SPDGTH_RESET_VALUE 0x00000020
typedef struct {
    unsigned long SPDGTH : 10;
    unsigned long Res0 : 22;
} sM2L31_UTCPD_UTCPD_SPDGTH;

typedef union {
    sM2L31_UTCPD_UTCPD_SPDGTH Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_SPDGTH;

#define M2L31_UTCPD_UTCPD_VBAMH_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VBAMH : 10;
    unsigned long Res0 : 22;
} sM2L31_UTCPD_UTCPD_VBAMH;

typedef union {
    sM2L31_UTCPD_UTCPD_VBAMH Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VBAMH;

#define M2L31_UTCPD_UTCPD_VBAML_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VBAML : 10;
    unsigned long Res0 : 22;
} sM2L31_UTCPD_UTCPD_VBAML;

typedef union {
    sM2L31_UTCPD_UTCPD_VBAML Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VBAML;

#define M2L31_UTCPD_UTCPD_VNDIS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RXFRSIS : 1;
    unsigned long TXFRSIS : 1;
    unsigned long Res0 : 1;
    unsigned long CRCERRIS : 1;
    unsigned long Res1 : 1;
    unsigned long VCDGIS : 1;
    unsigned long Res2 : 26;
} sM2L31_UTCPD_UTCPD_VNDIS;

typedef union {
    sM2L31_UTCPD_UTCPD_VNDIS Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VNDIS;

#define M2L31_UTCPD_UTCPD_VNDIE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RXFRSIE : 1;
    unsigned long TXFRSIE : 1;
    unsigned long Res0 : 1;
    unsigned long CRCERRIE : 1;
    unsigned long Res1 : 1;
    unsigned long VCDGIE : 1;
    unsigned long Res2 : 26;
} sM2L31_UTCPD_UTCPD_VNDIE;

typedef union {
    sM2L31_UTCPD_UTCPD_VNDIE Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VNDIE;

#define M2L31_UTCPD_UTCPD_MUXSEL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VBOCS : 3;
    unsigned long Res0 : 1;
    unsigned long VCOCS : 3;
    unsigned long Res1 : 1;
    unsigned long FVBS : 3;
    unsigned long Res2 : 1;
    unsigned long ADCSELVB : 5;
    unsigned long ADCSELVC : 5;
    unsigned long Res3 : 2;
    unsigned long CC1VCENS : 1;
    unsigned long CC1FRSS : 1;
    unsigned long Res4 : 2;
    unsigned long CC2VCENS : 1;
    unsigned long CC2FRSS : 1;
    unsigned long Res5 : 2;
} sM2L31_UTCPD_UTCPD_MUXSEL;

typedef union {
    sM2L31_UTCPD_UTCPD_MUXSEL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_MUXSEL;

#define M2L31_UTCPD_UTCPD_VCDGCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VCUVDTEN : 1;
    unsigned long VCDGEN : 1;
    unsigned long Res0 : 30;
} sM2L31_UTCPD_UTCPD_VCDGCTL;

typedef union {
    sM2L31_UTCPD_UTCPD_VCDGCTL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VCDGCTL;

#define M2L31_UTCPD_UTCPD_PHYSLEW_RESET_VALUE 0x00000044
typedef struct {
    unsigned long TXRTRIM : 3;
    unsigned long Res0 : 1;
    unsigned long TXFTRIM : 3;
    unsigned long Res1 : 25;
} sM2L31_UTCPD_UTCPD_PHYSLEW;

typedef union {
    sM2L31_UTCPD_UTCPD_PHYSLEW Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_PHYSLEW;

#define M2L31_UTCPD_UTCPD_ADGTM_RESET_VALUE 0x00000064
typedef struct {
    unsigned long ADGTM : 8;
    unsigned long Res0 : 24;
} sM2L31_UTCPD_UTCPD_ADGTM;

typedef union {
    sM2L31_UTCPD_UTCPD_ADGTM Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_ADGTM;

#define M2L31_UTCPD_UTCPD_VSAFE0V_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VSAFE0V : 10;
    unsigned long Res0 : 22;
} sM2L31_UTCPD_UTCPD_VSAFE0V;

typedef union {
    sM2L31_UTCPD_UTCPD_VSAFE0V Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VSAFE0V;

#define M2L31_UTCPD_UTCPD_VSAFE5V_RESET_VALUE 0x000000C8
typedef struct {
    unsigned long VSAFE5V : 10;
    unsigned long Res0 : 22;
} sM2L31_UTCPD_UTCPD_VSAFE5V;

typedef union {
    sM2L31_UTCPD_UTCPD_VSAFE5V Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VSAFE5V;

#define M2L31_UTCPD_UTCPD_RATIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DRPRATIO : 3;
    unsigned long VBSEL : 1;
    unsigned long Res0 : 2;
    unsigned long ADCAVG : 1;
    unsigned long Res1 : 25;
} sM2L31_UTCPD_UTCPD_RATIO;

typedef union {
    sM2L31_UTCPD_UTCPD_RATIO Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_RATIO;

#define M2L31_UTCPD_UTCPD_INTFRAME_RESET_VALUE 0x00000019
typedef struct {
    unsigned long INTFRAME : 8;
    unsigned long Res0 : 24;
} sM2L31_UTCPD_UTCPD_INTFRAME;

typedef union {
    sM2L31_UTCPD_UTCPD_INTFRAME Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_INTFRAME;

#define M2L31_UTCPD_UTCPD_VBOVTH_RESET_VALUE 0x000003FF
typedef struct {
    unsigned long VBOVTH : 10;
    unsigned long Res0 : 22;
} sM2L31_UTCPD_UTCPD_VBOVTH;

typedef union {
    sM2L31_UTCPD_UTCPD_VBOVTH Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VBOVTH;

#define M2L31_UTCPD_UTCPD_VNDINIT_RESET_VALUE 0x00000064
typedef struct {
    unsigned long Res0 : 4;
    unsigned long DVCAPDEF : 3;
    unsigned long Res1 : 25;
} sM2L31_UTCPD_UTCPD_VNDINIT;

typedef union {
    sM2L31_UTCPD_UTCPD_VNDINIT Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VNDINIT;

#define M2L31_UTCPD_UTCPD_BMCTXBP_RESET_VALUE 0x00000027
typedef struct {
    unsigned long BMCTXBP : 8;
    unsigned long Res0 : 24;
} sM2L31_UTCPD_UTCPD_BMCTXBP;

typedef union {
    sM2L31_UTCPD_UTCPD_BMCTXBP Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_BMCTXBP;

#define M2L31_UTCPD_UTCPD_BMCTXDU_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DUOFFS2 : 7;
    unsigned long DUOFFS1 : 1;
    unsigned long Res0 : 24;
} sM2L31_UTCPD_UTCPD_BMCTXDU;

typedef union {
    sM2L31_UTCPD_UTCPD_BMCTXDU Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_BMCTXDU;

#define M2L31_UTCPD_UTCPD_VCPSVOL_RESET_VALUE 0x00000060
typedef struct {
    unsigned long VCPSVOL : 10;
    unsigned long Res0 : 22;
} sM2L31_UTCPD_UTCPD_VCPSVOL;

typedef union {
    sM2L31_UTCPD_UTCPD_VCPSVOL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VCPSVOL;

#define M2L31_UTCPD_UTCPD_VCUV_RESET_VALUE 0x00000020
typedef struct {
    unsigned long VCUV : 10;
    unsigned long Res0 : 22;
} sM2L31_UTCPD_UTCPD_VCUV;

typedef union {
    sM2L31_UTCPD_UTCPD_VCUV Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VCUV;

#define M2L31_UTCPD_UTCPD_BMCSLICE_RESET_VALUE 0x82648423
typedef struct {
    unsigned long SLICEL : 2;
    unsigned long SLICEH : 2;
    unsigned long SLICEM : 3;
    unsigned long Res0 : 1;
    unsigned long TRIMRD : 3;
    unsigned long Res1 : 1;
    unsigned long TRIMRP : 4;
    unsigned long TRIMV1P1 : 3;
    unsigned long Res2 : 1;
    unsigned long TRIMVB10 : 3;
    unsigned long Res3 : 1;
    unsigned long TRIMVB20 : 3;
    unsigned long Res4 : 1;
    unsigned long VTRIM : 4;
} sM2L31_UTCPD_UTCPD_BMCSLICE;

typedef union {
    sM2L31_UTCPD_UTCPD_BMCSLICE Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_BMCSLICE;

#define M2L31_UTCPD_UTCPD_PHYCTL_RESET_VALUE 0x00000001
typedef struct {
    unsigned long PHYPWR : 1;
    unsigned long DBCTL : 1;
    unsigned long Res0 : 30;
} sM2L31_UTCPD_UTCPD_PHYCTL;

typedef union {
    sM2L31_UTCPD_UTCPD_PHYCTL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_PHYCTL;

#define M2L31_UTCPD_UTCPD_FRSRXCTL_RESET_VALUE 0x00000080
typedef struct {
    unsigned long FRSTX : 1;
    unsigned long Res0 : 1;
    unsigned long FRSDVVB : 1;
    unsigned long FRSRXEN : 1;
    unsigned long Res1 : 28;
} sM2L31_UTCPD_UTCPD_FRSRXCTL;

typedef union {
    sM2L31_UTCPD_UTCPD_FRSRXCTL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_FRSRXCTL;

#define M2L31_UTCPD_UTCPD_VCVOL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VCVOL : 10;
    unsigned long Res0 : 22;
} sM2L31_UTCPD_UTCPD_VCVOL;

typedef union {
    sM2L31_UTCPD_UTCPD_VCVOL Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_VCVOL;

#define M2L31_UTCPD_UTCPD_CLKINFO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ReadyFlag : 1;
    unsigned long Res0 : 3;
    unsigned long WKEN : 1;
    unsigned long Res1 : 27;
} sM2L31_UTCPD_UTCPD_CLKINFO;

typedef union {
    sM2L31_UTCPD_UTCPD_CLKINFO Bit;
    unsigned long  All;
} uM2L31_UTCPD_UTCPD_CLKINFO;

typedef struct {
    uM2L31_UTCPD_UTCPD_VID M2L31_UTCPD_UTCPD_VID; // Offset: 0x0
    uM2L31_UTCPD_UTCPD_PID M2L31_UTCPD_UTCPD_PID; // Offset: 0x4
    uM2L31_UTCPD_UTCPD_DID M2L31_UTCPD_UTCPD_DID; // Offset: 0x8
    uM2L31_UTCPD_UTCPD_TCREV M2L31_UTCPD_UTCPD_TCREV; // Offset: 0xc
    uM2L31_UTCPD_UTCPD_PDREV M2L31_UTCPD_UTCPD_PDREV; // Offset: 0x10
    uM2L31_UTCPD_UTCPD_IS M2L31_UTCPD_UTCPD_IS; // Offset: 0x14
    uM2L31_UTCPD_UTCPD_IE M2L31_UTCPD_UTCPD_IE; // Offset: 0x18
    uM2L31_UTCPD_UTCPD_PWRSTSIE M2L31_UTCPD_UTCPD_PWRSTSIE; // Offset: 0x1c
    uM2L31_UTCPD_UTCPD_FUTSTSIE M2L31_UTCPD_UTCPD_FUTSTSIE; // Offset: 0x20
    uM2L31_UTCPD_UTCPD_CTL M2L31_UTCPD_UTCPD_CTL; // Offset: 0x24
    uM2L31_UTCPD_UTCPD_PINPL M2L31_UTCPD_UTCPD_PINPL; // Offset: 0x28
    uM2L31_UTCPD_UTCPD_ROLCTL M2L31_UTCPD_UTCPD_ROLCTL; // Offset: 0x2c
    uM2L31_UTCPD_UTCPD_FUTCTL M2L31_UTCPD_UTCPD_FUTCTL; // Offset: 0x30
    uM2L31_UTCPD_UTCPD_PWRCTL M2L31_UTCPD_UTCPD_PWRCTL; // Offset: 0x34
    uM2L31_UTCPD_UTCPD_CCSTS M2L31_UTCPD_UTCPD_CCSTS; // Offset: 0x38
    uM2L31_UTCPD_UTCPD_PWRSTS M2L31_UTCPD_UTCPD_PWRSTS; // Offset: 0x3c
    uM2L31_UTCPD_UTCPD_FUTSTS M2L31_UTCPD_UTCPD_FUTSTS; // Offset: 0x40
    uM2L31_UTCPD_UTCPD_CMD M2L31_UTCPD_UTCPD_CMD; // Offset: 0x44
    uM2L31_UTCPD_UTCPD_DVCAP1 M2L31_UTCPD_UTCPD_DVCAP1; // Offset: 0x48
    uM2L31_UTCPD_UTCPD_DVCAP2 M2L31_UTCPD_UTCPD_DVCAP2; // Offset: 0x4c
    uM2L31_UTCPD_UTCPD_MSHEAD M2L31_UTCPD_UTCPD_MSHEAD; // Offset: 0x50
    uM2L31_UTCPD_UTCPD_DTRXEVNT M2L31_UTCPD_UTCPD_DTRXEVNT; // Offset: 0x54
    uM2L31_UTCPD_UTCPD_RXBCNT M2L31_UTCPD_UTCPD_RXBCNT; // Offset: 0x58
    uM2L31_UTCPD_UTCPD_RXFTYPE M2L31_UTCPD_UTCPD_RXFTYPE; // Offset: 0x5c
    uM2L31_UTCPD_UTCPD_RXHEAD M2L31_UTCPD_UTCPD_RXHEAD; // Offset: 0x60
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    uM2L31_UTCPD_UTCPD_RXDA0 M2L31_UTCPD_UTCPD_RXDA0; // Offset: 0x70
    uM2L31_UTCPD_UTCPD_RXDA1 M2L31_UTCPD_UTCPD_RXDA1; // Offset: 0x74
    uM2L31_UTCPD_UTCPD_RXDA2 M2L31_UTCPD_UTCPD_RXDA2; // Offset: 0x78
    uM2L31_UTCPD_UTCPD_RXDA3 M2L31_UTCPD_UTCPD_RXDA3; // Offset: 0x7c
    uM2L31_UTCPD_UTCPD_RXDA4 M2L31_UTCPD_UTCPD_RXDA4; // Offset: 0x80
    uM2L31_UTCPD_UTCPD_RXDA5 M2L31_UTCPD_UTCPD_RXDA5; // Offset: 0x84
    uM2L31_UTCPD_UTCPD_RXDA6 M2L31_UTCPD_UTCPD_RXDA6; // Offset: 0x88
    unsigned long Reserved3;
    uM2L31_UTCPD_UTCPD_TXCTL M2L31_UTCPD_UTCPD_TXCTL; // Offset: 0x90
    uM2L31_UTCPD_UTCPD_TXBCNT M2L31_UTCPD_UTCPD_TXBCNT; // Offset: 0x94
    uM2L31_UTCPD_UTCPD_TXHEAD M2L31_UTCPD_UTCPD_TXHEAD; // Offset: 0x98
    unsigned long Reserved4;
    uM2L31_UTCPD_UTCPD_TXDA0 M2L31_UTCPD_UTCPD_TXDA0; // Offset: 0xa0
    uM2L31_UTCPD_UTCPD_TXDA1 M2L31_UTCPD_UTCPD_TXDA1; // Offset: 0xa4
    uM2L31_UTCPD_UTCPD_TXDA2 M2L31_UTCPD_UTCPD_TXDA2; // Offset: 0xa8
    uM2L31_UTCPD_UTCPD_TXDA3 M2L31_UTCPD_UTCPD_TXDA3; // Offset: 0xac
    uM2L31_UTCPD_UTCPD_TXDA4 M2L31_UTCPD_UTCPD_TXDA4; // Offset: 0xb0
    uM2L31_UTCPD_UTCPD_TXDA5 M2L31_UTCPD_UTCPD_TXDA5; // Offset: 0xb4
    uM2L31_UTCPD_UTCPD_TXDA6 M2L31_UTCPD_UTCPD_TXDA6; // Offset: 0xb8
    unsigned long Reserved5;
    uM2L31_UTCPD_UTCPD_VBVOL M2L31_UTCPD_UTCPD_VBVOL; // Offset: 0xc0
    uM2L31_UTCPD_UTCPD_SKVBDCTH M2L31_UTCPD_UTCPD_SKVBDCTH; // Offset: 0xc4
    uM2L31_UTCPD_UTCPD_SPDGTH M2L31_UTCPD_UTCPD_SPDGTH; // Offset: 0xc8
    uM2L31_UTCPD_UTCPD_VBAMH M2L31_UTCPD_UTCPD_VBAMH; // Offset: 0xcc
    uM2L31_UTCPD_UTCPD_VBAML M2L31_UTCPD_UTCPD_VBAML; // Offset: 0xd0
    uM2L31_UTCPD_UTCPD_VNDIS M2L31_UTCPD_UTCPD_VNDIS; // Offset: 0xd4
    uM2L31_UTCPD_UTCPD_VNDIE M2L31_UTCPD_UTCPD_VNDIE; // Offset: 0xd8
    uM2L31_UTCPD_UTCPD_MUXSEL M2L31_UTCPD_UTCPD_MUXSEL; // Offset: 0xdc
    uM2L31_UTCPD_UTCPD_VCDGCTL M2L31_UTCPD_UTCPD_VCDGCTL; // Offset: 0xe0
    uM2L31_UTCPD_UTCPD_PHYSLEW M2L31_UTCPD_UTCPD_PHYSLEW; // Offset: 0xe4
    uM2L31_UTCPD_UTCPD_ADGTM M2L31_UTCPD_UTCPD_ADGTM; // Offset: 0xe8
    uM2L31_UTCPD_UTCPD_VSAFE0V M2L31_UTCPD_UTCPD_VSAFE0V; // Offset: 0xec
    uM2L31_UTCPD_UTCPD_VSAFE5V M2L31_UTCPD_UTCPD_VSAFE5V; // Offset: 0xf0
    uM2L31_UTCPD_UTCPD_RATIO M2L31_UTCPD_UTCPD_RATIO; // Offset: 0xf4
    uM2L31_UTCPD_UTCPD_INTFRAME M2L31_UTCPD_UTCPD_INTFRAME; // Offset: 0xf8
    uM2L31_UTCPD_UTCPD_VBOVTH M2L31_UTCPD_UTCPD_VBOVTH; // Offset: 0xfc
    uM2L31_UTCPD_UTCPD_VNDINIT M2L31_UTCPD_UTCPD_VNDINIT; // Offset: 0x100
    uM2L31_UTCPD_UTCPD_BMCTXBP M2L31_UTCPD_UTCPD_BMCTXBP; // Offset: 0x104
    uM2L31_UTCPD_UTCPD_BMCTXDU M2L31_UTCPD_UTCPD_BMCTXDU; // Offset: 0x108
    uM2L31_UTCPD_UTCPD_VCPSVOL M2L31_UTCPD_UTCPD_VCPSVOL; // Offset: 0x10c
    uM2L31_UTCPD_UTCPD_VCUV M2L31_UTCPD_UTCPD_VCUV; // Offset: 0x110
    unsigned long Reserved6;
    uM2L31_UTCPD_UTCPD_BMCSLICE M2L31_UTCPD_UTCPD_BMCSLICE; // Offset: 0x118
    uM2L31_UTCPD_UTCPD_PHYCTL M2L31_UTCPD_UTCPD_PHYCTL; // Offset: 0x11c
    uM2L31_UTCPD_UTCPD_FRSRXCTL M2L31_UTCPD_UTCPD_FRSRXCTL; // Offset: 0x120
    uM2L31_UTCPD_UTCPD_VCVOL M2L31_UTCPD_UTCPD_VCVOL; // Offset: 0x124
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
    unsigned long Reserved77;
    unsigned long Reserved78;
    unsigned long Reserved79;
    unsigned long Reserved80;
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
    uM2L31_UTCPD_UTCPD_CLKINFO M2L31_UTCPD_UTCPD_CLKINFO; // Offset: 0x300
} sM2L31_UTCPD;

