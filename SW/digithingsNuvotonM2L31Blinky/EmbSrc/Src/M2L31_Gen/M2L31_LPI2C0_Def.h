// Base Addres of LPI2C0 = 0x400E2000

#define M2L31_LPI2C0_LPI2C_CTL0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long AA : 1;
    unsigned long SI : 1;
    unsigned long STO : 1;
    unsigned long STA : 1;
    unsigned long LPI2CEN : 1;
    unsigned long INTEN : 1;
    unsigned long Res1 : 24;
} sM2L31_LPI2C0_LPI2C_CTL0;

typedef union {
    sM2L31_LPI2C0_LPI2C_CTL0 Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_CTL0;

#define M2L31_LPI2C0_LPI2C_ADDR0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long GC : 1;
    unsigned long ADDR : 7;
    unsigned long Res0 : 24;
} sM2L31_LPI2C0_LPI2C_ADDR0;

typedef union {
    sM2L31_LPI2C0_LPI2C_ADDR0 Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_ADDR0;

#define M2L31_LPI2C0_LPI2C_DAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DAT : 8;
    unsigned long Res0 : 24;
} sM2L31_LPI2C0_LPI2C_DAT;

typedef union {
    sM2L31_LPI2C0_LPI2C_DAT Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_DAT;

#define M2L31_LPI2C0_LPI2C_STATUS0_RESET_VALUE 0x000000F8
typedef struct {
    unsigned long STATUS : 8;
    unsigned long Res0 : 24;
} sM2L31_LPI2C0_LPI2C_STATUS0;

typedef union {
    sM2L31_LPI2C0_LPI2C_STATUS0 Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_STATUS0;

#define M2L31_LPI2C0_LPI2C_CLKDIV_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DIVIDER : 10;
    unsigned long Res0 : 2;
    unsigned long NFCNT : 4;
    unsigned long Res1 : 16;
} sM2L31_LPI2C0_LPI2C_CLKDIV;

typedef union {
    sM2L31_LPI2C0_LPI2C_CLKDIV Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_CLKDIV;

#define M2L31_LPI2C0_LPI2C_TOCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TOIF : 1;
    unsigned long TOCDIV4 : 1;
    unsigned long TOCEN : 1;
    unsigned long Res0 : 29;
} sM2L31_LPI2C0_LPI2C_TOCTL;

typedef union {
    sM2L31_LPI2C0_LPI2C_TOCTL Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_TOCTL;

#define M2L31_LPI2C0_LPI2C_ADDR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPI2C0_LPI2C_ADDR1;

typedef union {
    sM2L31_LPI2C0_LPI2C_ADDR1 Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_ADDR1;

#define M2L31_LPI2C0_LPI2C_ADDR2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPI2C0_LPI2C_ADDR2;

typedef union {
    sM2L31_LPI2C0_LPI2C_ADDR2 Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_ADDR2;

#define M2L31_LPI2C0_LPI2C_ADDR3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPI2C0_LPI2C_ADDR3;

typedef union {
    sM2L31_LPI2C0_LPI2C_ADDR3 Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_ADDR3;

#define M2L31_LPI2C0_LPI2C_ADDRMSK0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long ADDRMSK : 7;
    unsigned long Res1 : 24;
} sM2L31_LPI2C0_LPI2C_ADDRMSK0;

typedef union {
    sM2L31_LPI2C0_LPI2C_ADDRMSK0 Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_ADDRMSK0;

#define M2L31_LPI2C0_LPI2C_ADDRMSK1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPI2C0_LPI2C_ADDRMSK1;

typedef union {
    sM2L31_LPI2C0_LPI2C_ADDRMSK1 Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_ADDRMSK1;

#define M2L31_LPI2C0_LPI2C_ADDRMSK2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPI2C0_LPI2C_ADDRMSK2;

typedef union {
    sM2L31_LPI2C0_LPI2C_ADDRMSK2 Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_ADDRMSK2;

#define M2L31_LPI2C0_LPI2C_ADDRMSK3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_LPI2C0_LPI2C_ADDRMSK3;

typedef union {
    sM2L31_LPI2C0_LPI2C_ADDRMSK3 Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_ADDRMSK3;

#define M2L31_LPI2C0_LPI2C_WKCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKEN : 1;
    unsigned long Res0 : 6;
    unsigned long NHDBUSEN : 1;
    unsigned long Res1 : 24;
} sM2L31_LPI2C0_LPI2C_WKCTL;

typedef union {
    sM2L31_LPI2C0_LPI2C_WKCTL Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_WKCTL;

#define M2L31_LPI2C0_LPI2C_WKSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKIF : 1;
    unsigned long WKAKDONE : 1;
    unsigned long WRSTSWK : 1;
    unsigned long Res0 : 29;
} sM2L31_LPI2C0_LPI2C_WKSTS;

typedef union {
    sM2L31_LPI2C0_LPI2C_WKSTS Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_WKSTS;

#define M2L31_LPI2C0_LPI2C_CTL1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXPDMAEN : 1;
    unsigned long RXPDMAEN : 1;
    unsigned long PDMARST : 1;
    unsigned long Res0 : 5;
    unsigned long PDMASTR : 1;
    unsigned long Res1 : 1;
    unsigned long SWITCHEN : 1;
    unsigned long Res2 : 21;
} sM2L31_LPI2C0_LPI2C_CTL1;

typedef union {
    sM2L31_LPI2C0_LPI2C_CTL1 Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_CTL1;

#define M2L31_LPI2C0_LPI2C_STATUS1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ADMAT0 : 1;
    unsigned long ADMAT1 : 1;
    unsigned long ADMAT2 : 1;
    unsigned long ADMAT3 : 1;
    unsigned long Res0 : 4;
    unsigned long ONBUSY : 1;
    unsigned long Res1 : 23;
} sM2L31_LPI2C0_LPI2C_STATUS1;

typedef union {
    sM2L31_LPI2C0_LPI2C_STATUS1 Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_STATUS1;

#define M2L31_LPI2C0_LPI2C_TMCTL_RESET_VALUE 0x00020000
typedef struct {
    unsigned long STCTL : 9;
    unsigned long Res0 : 7;
    unsigned long HTCTL : 9;
    unsigned long Res1 : 7;
} sM2L31_LPI2C0_LPI2C_TMCTL;

typedef union {
    sM2L31_LPI2C0_LPI2C_TMCTL Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_TMCTL;

#define M2L31_LPI2C0_LPI2C_AUTOCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TGSRCSEL : 4;
    unsigned long TRGEN : 1;
    unsigned long TXWKEN : 1;
    unsigned long RXWKEN : 1;
    unsigned long NACKWKEN : 1;
    unsigned long AUTOMODE : 3;
    unsigned long Res0 : 20;
    unsigned long SWTRG : 1;
} sM2L31_LPI2C0_LPI2C_AUTOCTL;

typedef union {
    sM2L31_LPI2C0_LPI2C_AUTOCTL Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_AUTOCTL;

#define M2L31_LPI2C0_LPI2C_AUTOSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXWKF : 1;
    unsigned long RXWKF : 1;
    unsigned long ERRORWKF : 1;
    unsigned long Res0 : 5;
    unsigned long TXFINISH : 1;
    unsigned long RXFINISH : 1;
    unsigned long ERRORIF : 1;
    unsigned long Res1 : 13;
    unsigned long AOFINISH : 1;
    unsigned long Res2 : 6;
    unsigned long BUSY : 1;
} sM2L31_LPI2C0_LPI2C_AUTOSTS;

typedef union {
    sM2L31_LPI2C0_LPI2C_AUTOSTS Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_AUTOSTS;

#define M2L31_LPI2C0_LPI2C_AUTOCNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXCNT : 8;
    unsigned long Res0 : 8;
    unsigned long RXCNT : 8;
    unsigned long Res1 : 8;
} sM2L31_LPI2C0_LPI2C_AUTOCNT;

typedef union {
    sM2L31_LPI2C0_LPI2C_AUTOCNT Bit;
    unsigned long  All;
} uM2L31_LPI2C0_LPI2C_AUTOCNT;

typedef struct {
    uM2L31_LPI2C0_LPI2C_CTL0 M2L31_LPI2C0_LPI2C_CTL0; // Offset: 0x0
    uM2L31_LPI2C0_LPI2C_ADDR0 M2L31_LPI2C0_LPI2C_ADDR0; // Offset: 0x4
    uM2L31_LPI2C0_LPI2C_DAT M2L31_LPI2C0_LPI2C_DAT; // Offset: 0x8
    uM2L31_LPI2C0_LPI2C_STATUS0 M2L31_LPI2C0_LPI2C_STATUS0; // Offset: 0xc
    uM2L31_LPI2C0_LPI2C_CLKDIV M2L31_LPI2C0_LPI2C_CLKDIV; // Offset: 0x10
    uM2L31_LPI2C0_LPI2C_TOCTL M2L31_LPI2C0_LPI2C_TOCTL; // Offset: 0x14
    uM2L31_LPI2C0_LPI2C_ADDR1 M2L31_LPI2C0_LPI2C_ADDR1; // Offset: 0x18
    uM2L31_LPI2C0_LPI2C_ADDR2 M2L31_LPI2C0_LPI2C_ADDR2; // Offset: 0x1c
    uM2L31_LPI2C0_LPI2C_ADDR3 M2L31_LPI2C0_LPI2C_ADDR3; // Offset: 0x20
    uM2L31_LPI2C0_LPI2C_ADDRMSK0 M2L31_LPI2C0_LPI2C_ADDRMSK0; // Offset: 0x24
    uM2L31_LPI2C0_LPI2C_ADDRMSK1 M2L31_LPI2C0_LPI2C_ADDRMSK1; // Offset: 0x28
    uM2L31_LPI2C0_LPI2C_ADDRMSK2 M2L31_LPI2C0_LPI2C_ADDRMSK2; // Offset: 0x2c
    uM2L31_LPI2C0_LPI2C_ADDRMSK3 M2L31_LPI2C0_LPI2C_ADDRMSK3; // Offset: 0x30
    unsigned long Reserved0;
    unsigned long Reserved1;
    uM2L31_LPI2C0_LPI2C_WKCTL M2L31_LPI2C0_LPI2C_WKCTL; // Offset: 0x3c
    uM2L31_LPI2C0_LPI2C_WKSTS M2L31_LPI2C0_LPI2C_WKSTS; // Offset: 0x40
    uM2L31_LPI2C0_LPI2C_CTL1 M2L31_LPI2C0_LPI2C_CTL1; // Offset: 0x44
    uM2L31_LPI2C0_LPI2C_STATUS1 M2L31_LPI2C0_LPI2C_STATUS1; // Offset: 0x48
    uM2L31_LPI2C0_LPI2C_TMCTL M2L31_LPI2C0_LPI2C_TMCTL; // Offset: 0x4c
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    unsigned long Reserved9;
    uM2L31_LPI2C0_LPI2C_AUTOCTL M2L31_LPI2C0_LPI2C_AUTOCTL; // Offset: 0x70
    uM2L31_LPI2C0_LPI2C_AUTOSTS M2L31_LPI2C0_LPI2C_AUTOSTS; // Offset: 0x74
    uM2L31_LPI2C0_LPI2C_AUTOCNT M2L31_LPI2C0_LPI2C_AUTOCNT; // Offset: 0x78
} sM2L31_LPI2C0;

