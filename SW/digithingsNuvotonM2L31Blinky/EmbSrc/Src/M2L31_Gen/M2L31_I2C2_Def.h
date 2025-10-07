// Base Addres of I2C2 = 0x40082000

#define M2L31_I2C2_I2C_CTL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long AA : 1;
    unsigned long SI : 1;
    unsigned long STO : 1;
    unsigned long STA : 1;
    unsigned long I2CEN : 1;
    unsigned long INTEN : 1;
    unsigned long DPBITSEL : 2;
    unsigned long Res1 : 2;
    unsigned long DPCINTEN : 1;
    unsigned long SRCINTEN : 1;
    unsigned long DPCIF : 1;
    unsigned long SARCIF : 1;
    unsigned long Res2 : 16;
} sM2L31_I2C2_I2C_CTL0;

typedef union {
    sM2L31_I2C2_I2C_CTL0 Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_CTL0;

#define M2L31_I2C2_I2C_ADDR0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long GC : 1;
    unsigned long ADDR : 10;
    unsigned long Res0 : 21;
} sM2L31_I2C2_I2C_ADDR0;

typedef union {
    sM2L31_I2C2_I2C_ADDR0 Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_ADDR0;

#define M2L31_I2C2_I2C_DAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DAT : 8;
    unsigned long Res0 : 24;
} sM2L31_I2C2_I2C_DAT;

typedef union {
    sM2L31_I2C2_I2C_DAT Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_DAT;

#define M2L31_I2C2_I2C_STATUS0_RESET_VALUE 0x000000F8
typedef struct {
    unsigned long STATUS : 8;
    unsigned long Res0 : 24;
} sM2L31_I2C2_I2C_STATUS0;

typedef union {
    sM2L31_I2C2_I2C_STATUS0 Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_STATUS0;

#define M2L31_I2C2_I2C_CLKDIV_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DIVIDER : 10;
    unsigned long Res0 : 2;
    unsigned long NFCNT : 4;
    unsigned long Res1 : 16;
} sM2L31_I2C2_I2C_CLKDIV;

typedef union {
    sM2L31_I2C2_I2C_CLKDIV Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_CLKDIV;

#define M2L31_I2C2_I2C_TOCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TOIF : 1;
    unsigned long TOCDIV4 : 1;
    unsigned long TOCEN : 1;
    unsigned long Res0 : 29;
} sM2L31_I2C2_I2C_TOCTL;

typedef union {
    sM2L31_I2C2_I2C_TOCTL Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_TOCTL;

#define M2L31_I2C2_I2C_ADDR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_I2C2_I2C_ADDR1;

typedef union {
    sM2L31_I2C2_I2C_ADDR1 Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_ADDR1;

#define M2L31_I2C2_I2C_ADDR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_I2C2_I2C_ADDR2;

typedef union {
    sM2L31_I2C2_I2C_ADDR2 Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_ADDR2;

#define M2L31_I2C2_I2C_ADDR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_I2C2_I2C_ADDR3;

typedef union {
    sM2L31_I2C2_I2C_ADDR3 Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_ADDR3;

#define M2L31_I2C2_I2C_ADDRMSK0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long ADDRMSK : 10;
    unsigned long Res1 : 21;
} sM2L31_I2C2_I2C_ADDRMSK0;

typedef union {
    sM2L31_I2C2_I2C_ADDRMSK0 Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_ADDRMSK0;

#define M2L31_I2C2_I2C_ADDRMSK1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_I2C2_I2C_ADDRMSK1;

typedef union {
    sM2L31_I2C2_I2C_ADDRMSK1 Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_ADDRMSK1;

#define M2L31_I2C2_I2C_ADDRMSK2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_I2C2_I2C_ADDRMSK2;

typedef union {
    sM2L31_I2C2_I2C_ADDRMSK2 Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_ADDRMSK2;

#define M2L31_I2C2_I2C_ADDRMSK3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_I2C2_I2C_ADDRMSK3;

typedef union {
    sM2L31_I2C2_I2C_ADDRMSK3 Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_ADDRMSK3;

#define M2L31_I2C2_I2C_WKCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKEN : 1;
    unsigned long Res0 : 6;
    unsigned long NHDBUSEN : 1;
    unsigned long Res1 : 24;
} sM2L31_I2C2_I2C_WKCTL;

typedef union {
    sM2L31_I2C2_I2C_WKCTL Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_WKCTL;

#define M2L31_I2C2_I2C_WKSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKIF : 1;
    unsigned long WKAKDONE : 1;
    unsigned long WRSTSWK : 1;
    unsigned long Res0 : 29;
} sM2L31_I2C2_I2C_WKSTS;

typedef union {
    sM2L31_I2C2_I2C_WKSTS Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_WKSTS;

#define M2L31_I2C2_I2C_CTL1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXPDMAEN : 1;
    unsigned long RXPDMAEN : 1;
    unsigned long PDMARST : 1;
    unsigned long OVRIEN : 1;
    unsigned long UDRIEN : 1;
    unsigned long TWOBUFEN : 1;
    unsigned long Res0 : 2;
    unsigned long PDMASTR : 1;
    unsigned long ADDR10EN : 1;
    unsigned long SWITCHEN : 1;
    unsigned long Res1 : 21;
} sM2L31_I2C2_I2C_CTL1;

typedef union {
    sM2L31_I2C2_I2C_CTL1 Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_CTL1;

#define M2L31_I2C2_I2C_STATUS1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ADMAT0 : 1;
    unsigned long ADMAT1 : 1;
    unsigned long ADMAT2 : 1;
    unsigned long ADMAT3 : 1;
    unsigned long FULL : 1;
    unsigned long EMPTY : 1;
    unsigned long OVR : 1;
    unsigned long UDR : 1;
    unsigned long ONBUSY : 1;
    unsigned long Res0 : 23;
} sM2L31_I2C2_I2C_STATUS1;

typedef union {
    sM2L31_I2C2_I2C_STATUS1 Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_STATUS1;

#define M2L31_I2C2_I2C_TMCTL_RESET_VALUE 0x00020000
typedef struct {
    unsigned long STCTL : 9;
    unsigned long Res0 : 7;
    unsigned long HTCTL : 9;
    unsigned long Res1 : 7;
} sM2L31_I2C2_I2C_TMCTL;

typedef union {
    sM2L31_I2C2_I2C_TMCTL Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_TMCTL;

#define M2L31_I2C2_I2C_BUSCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ACKMEN : 1;
    unsigned long PECEN : 1;
    unsigned long BMDEN : 1;
    unsigned long BMHEN : 1;
    unsigned long ALERTEN : 1;
    unsigned long SCTLOSTS : 1;
    unsigned long SCTLOEN : 1;
    unsigned long BUSEN : 1;
    unsigned long PECTXEN : 1;
    unsigned long TIDLE : 1;
    unsigned long PECCLR : 1;
    unsigned long ACKM9SI : 1;
    unsigned long BCDIEN : 1;
    unsigned long PECDIEN : 1;
    unsigned long Res0 : 18;
} sM2L31_I2C2_I2C_BUSCTL;

typedef union {
    sM2L31_I2C2_I2C_BUSCTL Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_BUSCTL;

#define M2L31_I2C2_I2C_BUSTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BUSTOEN : 1;
    unsigned long CLKTOEN : 1;
    unsigned long BUSTOIEN : 1;
    unsigned long CLKTOIEN : 1;
    unsigned long TORSTEN : 1;
    unsigned long Res0 : 27;
} sM2L31_I2C2_I2C_BUSTCTL;

typedef union {
    sM2L31_I2C2_I2C_BUSTCTL Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_BUSTCTL;

#define M2L31_I2C2_I2C_BUSSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BUSY : 1;
    unsigned long BCDONE : 1;
    unsigned long PECERR : 1;
    unsigned long ALERT : 1;
    unsigned long SCTLDIN : 1;
    unsigned long BUSTO : 1;
    unsigned long CLKTO : 1;
    unsigned long PECDONE : 1;
    unsigned long Res0 : 24;
} sM2L31_I2C2_I2C_BUSSTS;

typedef union {
    sM2L31_I2C2_I2C_BUSSTS Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_BUSSTS;

#define M2L31_I2C2_I2C_PKTSIZE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PLDSIZE : 9;
    unsigned long Res0 : 23;
} sM2L31_I2C2_I2C_PKTSIZE;

typedef union {
    sM2L31_I2C2_I2C_PKTSIZE Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_PKTSIZE;

#define M2L31_I2C2_I2C_PKTCRC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PECCRC : 8;
    unsigned long Res0 : 24;
} sM2L31_I2C2_I2C_PKTCRC;

typedef union {
    sM2L31_I2C2_I2C_PKTCRC Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_PKTCRC;

#define M2L31_I2C2_I2C_BUSTOUT_RESET_VALUE 0x00000005
typedef struct {
    unsigned long BUSTO : 8;
    unsigned long Res0 : 24;
} sM2L31_I2C2_I2C_BUSTOUT;

typedef union {
    sM2L31_I2C2_I2C_BUSTOUT Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_BUSTOUT;

#define M2L31_I2C2_I2C_CLKTOUT_RESET_VALUE 0x00000005
typedef struct {
    unsigned long CLKTO : 8;
    unsigned long Res0 : 24;
} sM2L31_I2C2_I2C_CLKTOUT;

typedef union {
    sM2L31_I2C2_I2C_CLKTOUT Bit;
    unsigned long  All;
} uM2L31_I2C2_I2C_CLKTOUT;

typedef struct {
    uM2L31_I2C2_I2C_CTL0 M2L31_I2C2_I2C_CTL0; // Offset: 0x0
    uM2L31_I2C2_I2C_ADDR0 M2L31_I2C2_I2C_ADDR0; // Offset: 0x4
    uM2L31_I2C2_I2C_DAT M2L31_I2C2_I2C_DAT; // Offset: 0x8
    uM2L31_I2C2_I2C_STATUS0 M2L31_I2C2_I2C_STATUS0; // Offset: 0xc
    uM2L31_I2C2_I2C_CLKDIV M2L31_I2C2_I2C_CLKDIV; // Offset: 0x10
    uM2L31_I2C2_I2C_TOCTL M2L31_I2C2_I2C_TOCTL; // Offset: 0x14
    uM2L31_I2C2_I2C_ADDR1 M2L31_I2C2_I2C_ADDR1; // Offset: 0x18
    uM2L31_I2C2_I2C_ADDR2 M2L31_I2C2_I2C_ADDR2; // Offset: 0x1c
    uM2L31_I2C2_I2C_ADDR3 M2L31_I2C2_I2C_ADDR3; // Offset: 0x20
    uM2L31_I2C2_I2C_ADDRMSK0 M2L31_I2C2_I2C_ADDRMSK0; // Offset: 0x24
    uM2L31_I2C2_I2C_ADDRMSK1 M2L31_I2C2_I2C_ADDRMSK1; // Offset: 0x28
    uM2L31_I2C2_I2C_ADDRMSK2 M2L31_I2C2_I2C_ADDRMSK2; // Offset: 0x2c
    uM2L31_I2C2_I2C_ADDRMSK3 M2L31_I2C2_I2C_ADDRMSK3; // Offset: 0x30
    unsigned long Reserved0;
    unsigned long Reserved1;
    uM2L31_I2C2_I2C_WKCTL M2L31_I2C2_I2C_WKCTL; // Offset: 0x3c
    uM2L31_I2C2_I2C_WKSTS M2L31_I2C2_I2C_WKSTS; // Offset: 0x40
    uM2L31_I2C2_I2C_CTL1 M2L31_I2C2_I2C_CTL1; // Offset: 0x44
    uM2L31_I2C2_I2C_STATUS1 M2L31_I2C2_I2C_STATUS1; // Offset: 0x48
    uM2L31_I2C2_I2C_TMCTL M2L31_I2C2_I2C_TMCTL; // Offset: 0x4c
    uM2L31_I2C2_I2C_BUSCTL M2L31_I2C2_I2C_BUSCTL; // Offset: 0x50
    uM2L31_I2C2_I2C_BUSTCTL M2L31_I2C2_I2C_BUSTCTL; // Offset: 0x54
    uM2L31_I2C2_I2C_BUSSTS M2L31_I2C2_I2C_BUSSTS; // Offset: 0x58
    uM2L31_I2C2_I2C_PKTSIZE M2L31_I2C2_I2C_PKTSIZE; // Offset: 0x5c
    uM2L31_I2C2_I2C_PKTCRC M2L31_I2C2_I2C_PKTCRC; // Offset: 0x60
    uM2L31_I2C2_I2C_BUSTOUT M2L31_I2C2_I2C_BUSTOUT; // Offset: 0x64
    uM2L31_I2C2_I2C_CLKTOUT M2L31_I2C2_I2C_CLKTOUT; // Offset: 0x68
} sM2L31_I2C2;

