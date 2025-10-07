// Base Addres of UI2C0 = 0x400D0000

#define M2L31_UI2C0_UI2C_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FUNMODE : 3;
    unsigned long Res0 : 29;
} sM2L31_UI2C0_UI2C_CTL;

typedef union {
    sM2L31_UI2C0_UI2C_CTL Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_CTL;

#define M2L31_UI2C0_UI2C_BRGEN_RESET_VALUE 0x00003C00
typedef struct {
    unsigned long RCLKSEL : 1;
    unsigned long PTCLKSEL : 1;
    unsigned long SPCLKSEL : 2;
    unsigned long TMCNTEN : 1;
    unsigned long TMCNTSRC : 1;
    unsigned long Res0 : 2;
    unsigned long PDSCNT : 2;
    unsigned long DSCNT : 5;
    unsigned long Res1 : 1;
    unsigned long CLKDIV : 10;
    unsigned long Res2 : 2;
    unsigned long NFCNT : 4;
} sM2L31_UI2C0_UI2C_BRGEN;

typedef union {
    sM2L31_UI2C0_UI2C_BRGEN Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_BRGEN;

#define M2L31_UI2C0_UI2C_LINECTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LSB : 1;
    unsigned long Res0 : 7;
    unsigned long DWIDTH : 4;
    unsigned long Res1 : 20;
} sM2L31_UI2C0_UI2C_LINECTL;

typedef union {
    sM2L31_UI2C0_UI2C_LINECTL Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_LINECTL;

#define M2L31_UI2C0_UI2C_TXDAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXDAT : 16;
    unsigned long Res0 : 16;
} sM2L31_UI2C0_UI2C_TXDAT;

typedef union {
    sM2L31_UI2C0_UI2C_TXDAT Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_TXDAT;

#define M2L31_UI2C0_UI2C_RXDAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RXDAT : 16;
    unsigned long Res0 : 16;
} sM2L31_UI2C0_UI2C_RXDAT;

typedef union {
    sM2L31_UI2C0_UI2C_RXDAT Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_RXDAT;

#define M2L31_UI2C0_UI2C_DEVADDR0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DEVADDR : 10;
    unsigned long Res0 : 22;
} sM2L31_UI2C0_UI2C_DEVADDR0;

typedef union {
    sM2L31_UI2C0_UI2C_DEVADDR0 Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_DEVADDR0;

#define M2L31_UI2C0_UI2C_DEVADDR1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UI2C0_UI2C_DEVADDR1;

typedef union {
    sM2L31_UI2C0_UI2C_DEVADDR1 Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_DEVADDR1;

#define M2L31_UI2C0_UI2C_ADDRMSK0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ADDRMSK : 10;
    unsigned long Res0 : 22;
} sM2L31_UI2C0_UI2C_ADDRMSK0;

typedef union {
    sM2L31_UI2C0_UI2C_ADDRMSK0 Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_ADDRMSK0;

#define M2L31_UI2C0_UI2C_ADDRMSK1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_UI2C0_UI2C_ADDRMSK1;

typedef union {
    sM2L31_UI2C0_UI2C_ADDRMSK1 Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_ADDRMSK1;

#define M2L31_UI2C0_UI2C_WKCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKEN : 1;
    unsigned long WKADDREN : 1;
    unsigned long Res0 : 30;
} sM2L31_UI2C0_UI2C_WKCTL;

typedef union {
    sM2L31_UI2C0_UI2C_WKCTL Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_WKCTL;

#define M2L31_UI2C0_UI2C_WKSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long WKF : 1;
    unsigned long Res0 : 31;
} sM2L31_UI2C0_UI2C_WKSTS;

typedef union {
    sM2L31_UI2C0_UI2C_WKSTS Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_WKSTS;

#define M2L31_UI2C0_UI2C_PROTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long GCFUNC : 1;
    unsigned long AA : 1;
    unsigned long STO : 1;
    unsigned long STA : 1;
    unsigned long ADDR10EN : 1;
    unsigned long PTRG : 1;
    unsigned long Res0 : 2;
    unsigned long SCLOUTEN : 1;
    unsigned long MONEN : 1;
    unsigned long Res1 : 6;
    unsigned long TOCNT : 10;
    unsigned long Res2 : 5;
    unsigned long PROTEN : 1;
} sM2L31_UI2C0_UI2C_PROTCTL;

typedef union {
    sM2L31_UI2C0_UI2C_PROTCTL Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_PROTCTL;

#define M2L31_UI2C0_UI2C_PROTIEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TOIEN : 1;
    unsigned long STARIEN : 1;
    unsigned long STORIEN : 1;
    unsigned long NACKIEN : 1;
    unsigned long ARBLOIEN : 1;
    unsigned long ERRIEN : 1;
    unsigned long ACKIEN : 1;
    unsigned long Res0 : 25;
} sM2L31_UI2C0_UI2C_PROTIEN;

typedef union {
    sM2L31_UI2C0_UI2C_PROTIEN Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_PROTIEN;

#define M2L31_UI2C0_UI2C_PROTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 5;
    unsigned long TOIF : 1;
    unsigned long ONBUSY : 1;
    unsigned long Res1 : 1;
    unsigned long STARIF : 1;
    unsigned long STORIF : 1;
    unsigned long NACKIF : 1;
    unsigned long ARBLOIF : 1;
    unsigned long ERRIF : 1;
    unsigned long ACKIF : 1;
    unsigned long SLASEL : 1;
    unsigned long SLAREAD : 1;
    unsigned long WKAKDONE : 1;
    unsigned long WRSTSWK : 1;
    unsigned long BUSHANG : 1;
    unsigned long ERRARBLO : 1;
    unsigned long Res2 : 12;
} sM2L31_UI2C0_UI2C_PROTSTS;

typedef union {
    sM2L31_UI2C0_UI2C_PROTSTS Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_PROTSTS;

#define M2L31_UI2C0_UI2C_TMCTL_RESET_VALUE 0x00020000
typedef struct {
    unsigned long STCTL : 9;
    unsigned long Res0 : 7;
    unsigned long HTCTL : 9;
    unsigned long Res1 : 7;
} sM2L31_UI2C0_UI2C_TMCTL;

typedef union {
    sM2L31_UI2C0_UI2C_TMCTL Bit;
    unsigned long  All;
} uM2L31_UI2C0_UI2C_TMCTL;

typedef struct {
    uM2L31_UI2C0_UI2C_CTL M2L31_UI2C0_UI2C_CTL; // Offset: 0x0
    unsigned long Reserved0;
    uM2L31_UI2C0_UI2C_BRGEN M2L31_UI2C0_UI2C_BRGEN; // Offset: 0x8
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    uM2L31_UI2C0_UI2C_LINECTL M2L31_UI2C0_UI2C_LINECTL; // Offset: 0x2c
    uM2L31_UI2C0_UI2C_TXDAT M2L31_UI2C0_UI2C_TXDAT; // Offset: 0x30
    uM2L31_UI2C0_UI2C_RXDAT M2L31_UI2C0_UI2C_RXDAT; // Offset: 0x34
    unsigned long Reserved9;
    unsigned long Reserved10;
    unsigned long Reserved11;
    uM2L31_UI2C0_UI2C_DEVADDR0 M2L31_UI2C0_UI2C_DEVADDR0; // Offset: 0x44
    uM2L31_UI2C0_UI2C_DEVADDR1 M2L31_UI2C0_UI2C_DEVADDR1; // Offset: 0x48
    uM2L31_UI2C0_UI2C_ADDRMSK0 M2L31_UI2C0_UI2C_ADDRMSK0; // Offset: 0x4c
    uM2L31_UI2C0_UI2C_ADDRMSK1 M2L31_UI2C0_UI2C_ADDRMSK1; // Offset: 0x50
    uM2L31_UI2C0_UI2C_WKCTL M2L31_UI2C0_UI2C_WKCTL; // Offset: 0x54
    uM2L31_UI2C0_UI2C_WKSTS M2L31_UI2C0_UI2C_WKSTS; // Offset: 0x58
    uM2L31_UI2C0_UI2C_PROTCTL M2L31_UI2C0_UI2C_PROTCTL; // Offset: 0x5c
    uM2L31_UI2C0_UI2C_PROTIEN M2L31_UI2C0_UI2C_PROTIEN; // Offset: 0x60
    uM2L31_UI2C0_UI2C_PROTSTS M2L31_UI2C0_UI2C_PROTSTS; // Offset: 0x64
    unsigned long Reserved12;
    unsigned long Reserved13;
    unsigned long Reserved14;
    unsigned long Reserved15;
    unsigned long Reserved16;
    unsigned long Reserved17;
    unsigned long Reserved18;
    unsigned long Reserved19;
    unsigned long Reserved20;
    uM2L31_UI2C0_UI2C_TMCTL M2L31_UI2C0_UI2C_TMCTL; // Offset: 0x8c
} sM2L31_UI2C0;

