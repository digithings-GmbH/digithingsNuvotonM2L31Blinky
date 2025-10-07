// Base Addres of TK = 0x400C4000

#define M2L31_TK_TK_SCANC_RESET_VALUE 0x00700000
typedef struct {
    unsigned long TK0SEN : 1;
    unsigned long TK1SEN : 1;
    unsigned long TK2SEN : 1;
    unsigned long TK3SEN : 1;
    unsigned long TK4SEN : 1;
    unsigned long TK5SEN : 1;
    unsigned long TK6SEN : 1;
    unsigned long TK7SEN : 1;
    unsigned long TK8SEN : 1;
    unsigned long TK9SEN : 1;
    unsigned long TK10SEN : 1;
    unsigned long TK11SEN : 1;
    unsigned long TK12SEN : 1;
    unsigned long TK13SEN : 1;
    unsigned long TK14SEN : 1;
    unsigned long TK15SEN : 1;
    unsigned long TK16SEN : 1;
    unsigned long Res0 : 3;
    unsigned long AVDDH_S : 4;
    unsigned long SCAN : 1;
    unsigned long TRG_EN : 4;
    unsigned long Res1 : 2;
    unsigned long TK_EN : 1;
} sM2L31_TK_TK_SCANC;

typedef union {
    sM2L31_TK_TK_SCANC Bit;
    unsigned long  All;
} uM2L31_TK_TK_SCANC;

#define M2L31_TK_TK_REFC_RESET_VALUE 0x11010000
typedef struct {
    unsigned long TK0REN : 1;
    unsigned long TK1REN : 1;
    unsigned long TK2REN : 1;
    unsigned long TK3REN : 1;
    unsigned long TK4REN : 1;
    unsigned long TK5REN : 1;
    unsigned long TK6REN : 1;
    unsigned long TK7REN : 1;
    unsigned long TK8REN : 1;
    unsigned long TK9REN : 1;
    unsigned long TK10REN : 1;
    unsigned long TK11REN : 1;
    unsigned long TK12REN : 1;
    unsigned long TK13REN : 1;
    unsigned long TK14REN : 1;
    unsigned long TK15REN : 1;
    unsigned long TK16REN : 1;
    unsigned long Res0 : 6;
    unsigned long SCAN_ALL : 1;
    unsigned long SENSET : 3;
    unsigned long Res1 : 1;
    unsigned long PULSET : 3;
    unsigned long Res2 : 1;
} sM2L31_TK_TK_REFC;

typedef union {
    sM2L31_TK_TK_REFC Bit;
    unsigned long  All;
} uM2L31_TK_TK_REFC;

#define M2L31_TK_TK_CCBD0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCBD0 : 8;
    unsigned long CCBD1 : 8;
    unsigned long CCBD2 : 8;
    unsigned long CCBD3 : 8;
} sM2L31_TK_TK_CCBD0;

typedef union {
    sM2L31_TK_TK_CCBD0 Bit;
    unsigned long  All;
} uM2L31_TK_TK_CCBD0;

#define M2L31_TK_TK_CCBD1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCBD4 : 8;
    unsigned long CCBD5 : 8;
    unsigned long CCBD6 : 8;
    unsigned long CCBD7 : 8;
} sM2L31_TK_TK_CCBD1;

typedef union {
    sM2L31_TK_TK_CCBD1 Bit;
    unsigned long  All;
} uM2L31_TK_TK_CCBD1;

#define M2L31_TK_TK_CCBD2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCBD8 : 8;
    unsigned long CCBD9 : 8;
    unsigned long CCBD10 : 8;
    unsigned long CCBD11 : 8;
} sM2L31_TK_TK_CCBD2;

typedef union {
    sM2L31_TK_TK_CCBD2 Bit;
    unsigned long  All;
} uM2L31_TK_TK_CCBD2;

#define M2L31_TK_TK_CCBD3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCBD12 : 8;
    unsigned long CCBD13 : 8;
    unsigned long CCBD14 : 8;
    unsigned long CCBD15 : 8;
} sM2L31_TK_TK_CCBD3;

typedef union {
    sM2L31_TK_TK_CCBD3 Bit;
    unsigned long  All;
} uM2L31_TK_TK_CCBD3;

#define M2L31_TK_TK_CCBD4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCBD16 : 8;
    unsigned long CCBD_ALL : 8;
    unsigned long Res0 : 16;
} sM2L31_TK_TK_CCBD4;

typedef union {
    sM2L31_TK_TK_CCBD4 Bit;
    unsigned long  All;
} uM2L31_TK_TK_CCBD4;

#define M2L31_TK_TK_IDLSC_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long IDLS0 : 2;
    unsigned long IDLS1 : 2;
    unsigned long IDLS2 : 2;
    unsigned long IDLS3 : 2;
    unsigned long IDLS4 : 2;
    unsigned long IDLS5 : 2;
    unsigned long IDLS6 : 2;
    unsigned long IDLS7 : 2;
    unsigned long IDLS8 : 2;
    unsigned long IDLS9 : 2;
    unsigned long IDLS10 : 2;
    unsigned long IDLS11 : 2;
    unsigned long IDLS12 : 2;
    unsigned long IDLS13 : 2;
    unsigned long IDLS14 : 2;
    unsigned long IDLS15 : 2;
} sM2L31_TK_TK_IDLSC;

typedef union {
    sM2L31_TK_TK_IDLSC Bit;
    unsigned long  All;
} uM2L31_TK_TK_IDLSC;

#define M2L31_TK_TK_POLSEL_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long POL0 : 2;
    unsigned long POL1 : 2;
    unsigned long POL2 : 2;
    unsigned long POL3 : 2;
    unsigned long POL4 : 2;
    unsigned long POL5 : 2;
    unsigned long POL6 : 2;
    unsigned long POL7 : 2;
    unsigned long POL8 : 2;
    unsigned long POL9 : 2;
    unsigned long POL10 : 2;
    unsigned long POL11 : 2;
    unsigned long POL12 : 2;
    unsigned long POL13 : 2;
    unsigned long POL14 : 2;
    unsigned long POL15 : 2;
} sM2L31_TK_TK_POLSEL;

typedef union {
    sM2L31_TK_TK_POLSEL Bit;
    unsigned long  All;
} uM2L31_TK_TK_POLSEL;

#define M2L31_TK_TK_POLC_RESET_VALUE 0x0000001F
typedef struct {
    unsigned long IDLS16 : 2;
    unsigned long POL16 : 2;
    unsigned long POL_CAP : 2;
    unsigned long Res0 : 2;
    unsigned long POLEN0 : 1;
    unsigned long POLEN1 : 1;
    unsigned long POLEN2 : 1;
    unsigned long POLEN3 : 1;
    unsigned long POLEN4 : 1;
    unsigned long POLEN5 : 1;
    unsigned long POLEN6 : 1;
    unsigned long POLEN7 : 1;
    unsigned long POLEN8 : 1;
    unsigned long POLEN9 : 1;
    unsigned long POLEN10 : 1;
    unsigned long POLEN11 : 1;
    unsigned long POLEN12 : 1;
    unsigned long POLEN13 : 1;
    unsigned long POLEN14 : 1;
    unsigned long POLEN15 : 1;
    unsigned long POLEN16 : 1;
    unsigned long Res1 : 6;
    unsigned long POL_INIT : 1;
} sM2L31_TK_TK_POLC;

typedef union {
    sM2L31_TK_TK_POLC Bit;
    unsigned long  All;
} uM2L31_TK_TK_POLC;

#define M2L31_TK_TK_STA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BUSY : 1;
    unsigned long SCIF : 1;
    unsigned long Res0 : 4;
    unsigned long TKIF : 1;
    unsigned long TKIF_ALL : 1;
    unsigned long TKIF0 : 1;
    unsigned long TKIF1 : 1;
    unsigned long TKIF2 : 1;
    unsigned long TKIF3 : 1;
    unsigned long TKIF4 : 1;
    unsigned long TKIF5 : 1;
    unsigned long TKIF6 : 1;
    unsigned long TKIF7 : 1;
    unsigned long TKIF8 : 1;
    unsigned long TKIF9 : 1;
    unsigned long TKIF10 : 1;
    unsigned long TKIF11 : 1;
    unsigned long TKIF12 : 1;
    unsigned long TKIF13 : 1;
    unsigned long TKIF14 : 1;
    unsigned long TKIF15 : 1;
    unsigned long TKIF16 : 1;
    unsigned long Res1 : 7;
} sM2L31_TK_TK_STA;

typedef union {
    sM2L31_TK_TK_STA Bit;
    unsigned long  All;
} uM2L31_TK_TK_STA;

#define M2L31_TK_TK_DAT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TKDAT0 : 8;
    unsigned long TKDAT1 : 8;
    unsigned long TKDAT2 : 8;
    unsigned long TKDAT3 : 8;
} sM2L31_TK_TK_DAT0;

typedef union {
    sM2L31_TK_TK_DAT0 Bit;
    unsigned long  All;
} uM2L31_TK_TK_DAT0;

#define M2L31_TK_TK_DAT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TKDAT4 : 8;
    unsigned long TKDAT5 : 8;
    unsigned long TKDAT6 : 8;
    unsigned long TKDAT7 : 8;
} sM2L31_TK_TK_DAT1;

typedef union {
    sM2L31_TK_TK_DAT1 Bit;
    unsigned long  All;
} uM2L31_TK_TK_DAT1;

#define M2L31_TK_TK_DAT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TKDAT8 : 8;
    unsigned long TKDAT9 : 8;
    unsigned long TKDAT10 : 8;
    unsigned long TKDAT11 : 8;
} sM2L31_TK_TK_DAT2;

typedef union {
    sM2L31_TK_TK_DAT2 Bit;
    unsigned long  All;
} uM2L31_TK_TK_DAT2;

#define M2L31_TK_TK_DAT3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TKDAT12 : 8;
    unsigned long TKDAT13 : 8;
    unsigned long TKDAT14 : 8;
    unsigned long TKDAT15 : 8;
} sM2L31_TK_TK_DAT3;

typedef union {
    sM2L31_TK_TK_DAT3 Bit;
    unsigned long  All;
} uM2L31_TK_TK_DAT3;

#define M2L31_TK_TK_DAT4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TKDAT16 : 8;
    unsigned long TKDAT_ALL : 8;
    unsigned long Res0 : 16;
} sM2L31_TK_TK_DAT4;

typedef union {
    sM2L31_TK_TK_DAT4 Bit;
    unsigned long  All;
} uM2L31_TK_TK_DAT4;

#define M2L31_TK_TK_INTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SCTHIE : 1;
    unsigned long SCIE : 1;
    unsigned long Res0 : 30;
} sM2L31_TK_TK_INTEN;

typedef union {
    sM2L31_TK_TK_INTEN Bit;
    unsigned long  All;
} uM2L31_TK_TK_INTEN;

#define M2L31_TK_TK_THC01_RESET_VALUE 0xFF00FF00
typedef struct {
    unsigned long Res0 : 8;
    unsigned long HTH0 : 8;
    unsigned long Res1 : 8;
    unsigned long HTH1 : 8;
} sM2L31_TK_TK_THC01;

typedef union {
    sM2L31_TK_TK_THC01 Bit;
    unsigned long  All;
} uM2L31_TK_TK_THC01;

#define M2L31_TK_TK_THC23_RESET_VALUE 0xFF00FF00
typedef struct {
    unsigned long Res0 : 8;
    unsigned long HTH2 : 8;
    unsigned long Res1 : 8;
    unsigned long HTH3 : 8;
} sM2L31_TK_TK_THC23;

typedef union {
    sM2L31_TK_TK_THC23 Bit;
    unsigned long  All;
} uM2L31_TK_TK_THC23;

#define M2L31_TK_TK_THC45_RESET_VALUE 0xFF00FF00
typedef struct {
    unsigned long Res0 : 8;
    unsigned long HTH4 : 8;
    unsigned long Res1 : 8;
    unsigned long HTH5 : 8;
} sM2L31_TK_TK_THC45;

typedef union {
    sM2L31_TK_TK_THC45 Bit;
    unsigned long  All;
} uM2L31_TK_TK_THC45;

#define M2L31_TK_TK_THC67_RESET_VALUE 0xFF00FF00
typedef struct {
    unsigned long Res0 : 8;
    unsigned long HTH6 : 8;
    unsigned long Res1 : 8;
    unsigned long HTH7 : 8;
} sM2L31_TK_TK_THC67;

typedef union {
    sM2L31_TK_TK_THC67 Bit;
    unsigned long  All;
} uM2L31_TK_TK_THC67;

#define M2L31_TK_TK_THC89_RESET_VALUE 0xFF00FF00
typedef struct {
    unsigned long Res0 : 8;
    unsigned long HTH8 : 8;
    unsigned long Res1 : 8;
    unsigned long HTH9 : 8;
} sM2L31_TK_TK_THC89;

typedef union {
    sM2L31_TK_TK_THC89 Bit;
    unsigned long  All;
} uM2L31_TK_TK_THC89;

#define M2L31_TK_TK_THC1011_RESET_VALUE 0xFF00FF00
typedef struct {
    unsigned long Res0 : 8;
    unsigned long HTH10 : 8;
    unsigned long Res1 : 8;
    unsigned long HTH11 : 8;
} sM2L31_TK_TK_THC1011;

typedef union {
    sM2L31_TK_TK_THC1011 Bit;
    unsigned long  All;
} uM2L31_TK_TK_THC1011;

#define M2L31_TK_TK_THC1213_RESET_VALUE 0xFF00FF00
typedef struct {
    unsigned long Res0 : 8;
    unsigned long HTH12 : 8;
    unsigned long Res1 : 8;
    unsigned long HTH13 : 8;
} sM2L31_TK_TK_THC1213;

typedef union {
    sM2L31_TK_TK_THC1213 Bit;
    unsigned long  All;
} uM2L31_TK_TK_THC1213;

#define M2L31_TK_TK_THC1415_RESET_VALUE 0xFF00FF00
typedef struct {
    unsigned long Res0 : 8;
    unsigned long HTH14 : 8;
    unsigned long Res1 : 8;
    unsigned long HTH15 : 8;
} sM2L31_TK_TK_THC1415;

typedef union {
    sM2L31_TK_TK_THC1415 Bit;
    unsigned long  All;
} uM2L31_TK_TK_THC1415;

#define M2L31_TK_TK_THC16_RESET_VALUE 0xFF00FF00
typedef struct {
    unsigned long Res0 : 8;
    unsigned long HTH16 : 8;
    unsigned long Res1 : 8;
    unsigned long HTH_ALL : 8;
} sM2L31_TK_TK_THC16;

typedef union {
    sM2L31_TK_TK_THC16 Bit;
    unsigned long  All;
} uM2L31_TK_TK_THC16;

#define M2L31_TK_TK_REFCBD0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CBD0 : 8;
    unsigned long CBD1 : 8;
    unsigned long CBD2 : 8;
    unsigned long CBD3 : 8;
} sM2L31_TK_TK_REFCBD0;

typedef union {
    sM2L31_TK_TK_REFCBD0 Bit;
    unsigned long  All;
} uM2L31_TK_TK_REFCBD0;

#define M2L31_TK_TK_REFCBD1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CBD4 : 8;
    unsigned long CBD5 : 8;
    unsigned long CBD6 : 8;
    unsigned long CBD7 : 8;
} sM2L31_TK_TK_REFCBD1;

typedef union {
    sM2L31_TK_TK_REFCBD1 Bit;
    unsigned long  All;
} uM2L31_TK_TK_REFCBD1;

#define M2L31_TK_TK_REFCBD2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CBD8 : 8;
    unsigned long CBD9 : 8;
    unsigned long CBD10 : 8;
    unsigned long CBD11 : 8;
} sM2L31_TK_TK_REFCBD2;

typedef union {
    sM2L31_TK_TK_REFCBD2 Bit;
    unsigned long  All;
} uM2L31_TK_TK_REFCBD2;

#define M2L31_TK_TK_REFCBD3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CBD12 : 8;
    unsigned long CBD13 : 8;
    unsigned long CBD14 : 8;
    unsigned long CBD15 : 8;
} sM2L31_TK_TK_REFCBD3;

typedef union {
    sM2L31_TK_TK_REFCBD3 Bit;
    unsigned long  All;
} uM2L31_TK_TK_REFCBD3;

#define M2L31_TK_TK_REFCBD4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CBD16 : 8;
    unsigned long CBD_ALL : 8;
    unsigned long Res0 : 16;
} sM2L31_TK_TK_REFCBD4;

typedef union {
    sM2L31_TK_TK_REFCBD4 Bit;
    unsigned long  All;
} uM2L31_TK_TK_REFCBD4;

#define M2L31_TK_TK_SCANC1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TK17SEN : 1;
    unsigned long Res0 : 31;
} sM2L31_TK_TK_SCANC1;

typedef union {
    sM2L31_TK_TK_SCANC1 Bit;
    unsigned long  All;
} uM2L31_TK_TK_SCANC1;

#define M2L31_TK_TK_REFC1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TK17REN : 1;
    unsigned long Res0 : 31;
} sM2L31_TK_TK_REFC1;

typedef union {
    sM2L31_TK_TK_REFC1 Bit;
    unsigned long  All;
} uM2L31_TK_TK_REFC1;

#define M2L31_TK_TK_CCBD5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCBD17 : 8;
    unsigned long Res0 : 24;
} sM2L31_TK_TK_CCBD5;

typedef union {
    sM2L31_TK_TK_CCBD5 Bit;
    unsigned long  All;
} uM2L31_TK_TK_CCBD5;

#define M2L31_TK_TK_IDLSC1_RESET_VALUE 0x00000003
typedef struct {
    unsigned long IDLS17 : 2;
    unsigned long Res0 : 30;
} sM2L31_TK_TK_IDLSC1;

typedef union {
    sM2L31_TK_TK_IDLSC1 Bit;
    unsigned long  All;
} uM2L31_TK_TK_IDLSC1;

#define M2L31_TK_TK_POLSEL1_RESET_VALUE 0x00000003
typedef struct {
    unsigned long POL17 : 2;
    unsigned long Res0 : 30;
} sM2L31_TK_TK_POLSEL1;

typedef union {
    sM2L31_TK_TK_POLSEL1 Bit;
    unsigned long  All;
} uM2L31_TK_TK_POLSEL1;

#define M2L31_TK_TK_POLC1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long POLEN17 : 1;
    unsigned long Res0 : 31;
} sM2L31_TK_TK_POLC1;

typedef union {
    sM2L31_TK_TK_POLC1 Bit;
    unsigned long  All;
} uM2L31_TK_TK_POLC1;

#define M2L31_TK_TK_STA1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TKIF17 : 1;
    unsigned long Res0 : 31;
} sM2L31_TK_TK_STA1;

typedef union {
    sM2L31_TK_TK_STA1 Bit;
    unsigned long  All;
} uM2L31_TK_TK_STA1;

#define M2L31_TK_TK_DAT5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TKDAT17 : 8;
    unsigned long Res0 : 24;
} sM2L31_TK_TK_DAT5;

typedef union {
    sM2L31_TK_TK_DAT5 Bit;
    unsigned long  All;
} uM2L31_TK_TK_DAT5;

#define M2L31_TK_TK_THC17_RESET_VALUE 0x0000FF00
typedef struct {
    unsigned long Res0 : 8;
    unsigned long HTH17 : 8;
    unsigned long Res1 : 16;
} sM2L31_TK_TK_THC17;

typedef union {
    sM2L31_TK_TK_THC17 Bit;
    unsigned long  All;
} uM2L31_TK_TK_THC17;

#define M2L31_TK_TK_REFCBD5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CBD17 : 8;
    unsigned long Res0 : 24;
} sM2L31_TK_TK_REFCBD5;

typedef union {
    sM2L31_TK_TK_REFCBD5 Bit;
    unsigned long  All;
} uM2L31_TK_TK_REFCBD5;

#define M2L31_TK_TK_EXTCBC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EXT_CBSEL : 2;
    unsigned long Res0 : 30;
} sM2L31_TK_TK_EXTCBC;

typedef union {
    sM2L31_TK_TK_EXTCBC Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTCBC;

#define M2L31_TK_TK_EXTCCBD0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCBD0 : 1;
    unsigned long Res0 : 7;
    unsigned long CCBD1 : 1;
    unsigned long Res1 : 7;
    unsigned long CCBD2 : 1;
    unsigned long Res2 : 7;
    unsigned long CCBD3 : 1;
    unsigned long Res3 : 7;
} sM2L31_TK_TK_EXTCCBD0;

typedef union {
    sM2L31_TK_TK_EXTCCBD0 Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTCCBD0;

#define M2L31_TK_TK_EXTCCBD1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCBD4 : 1;
    unsigned long Res0 : 7;
    unsigned long CCBD5 : 1;
    unsigned long Res1 : 7;
    unsigned long CCBD6 : 1;
    unsigned long Res2 : 7;
    unsigned long CCBD7 : 1;
    unsigned long Res3 : 7;
} sM2L31_TK_TK_EXTCCBD1;

typedef union {
    sM2L31_TK_TK_EXTCCBD1 Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTCCBD1;

#define M2L31_TK_TK_EXTCCBD2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCBD8 : 1;
    unsigned long Res0 : 7;
    unsigned long CCBD9 : 1;
    unsigned long Res1 : 7;
    unsigned long CCBD10 : 1;
    unsigned long Res2 : 7;
    unsigned long CCBD11 : 1;
    unsigned long Res3 : 7;
} sM2L31_TK_TK_EXTCCBD2;

typedef union {
    sM2L31_TK_TK_EXTCCBD2 Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTCCBD2;

#define M2L31_TK_TK_EXTCCBD3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCBD12 : 1;
    unsigned long Res0 : 7;
    unsigned long CCBD13 : 1;
    unsigned long Res1 : 7;
    unsigned long CCBD14 : 1;
    unsigned long Res2 : 7;
    unsigned long CCBD15 : 1;
    unsigned long Res3 : 7;
} sM2L31_TK_TK_EXTCCBD3;

typedef union {
    sM2L31_TK_TK_EXTCCBD3 Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTCCBD3;

#define M2L31_TK_TK_EXTCCBD4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCBD16 : 1;
    unsigned long Res0 : 7;
    unsigned long CCBDALL : 1;
    unsigned long Res1 : 23;
} sM2L31_TK_TK_EXTCCBD4;

typedef union {
    sM2L31_TK_TK_EXTCCBD4 Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTCCBD4;

#define M2L31_TK_TK_EXTCCBD5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCBD17 : 1;
    unsigned long Res0 : 31;
} sM2L31_TK_TK_EXTCCBD5;

typedef union {
    sM2L31_TK_TK_EXTCCBD5 Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTCCBD5;

#define M2L31_TK_TK_EXTREFCBD0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EXT_CBD0 : 1;
    unsigned long Res0 : 7;
    unsigned long EXT_CBD1 : 1;
    unsigned long Res1 : 7;
    unsigned long EXT_CBD2 : 1;
    unsigned long Res2 : 7;
    unsigned long EXT_CBD3 : 1;
    unsigned long Res3 : 7;
} sM2L31_TK_TK_EXTREFCBD0;

typedef union {
    sM2L31_TK_TK_EXTREFCBD0 Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTREFCBD0;

#define M2L31_TK_TK_EXTREFCBD1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EXT_CBD4 : 1;
    unsigned long Res0 : 7;
    unsigned long EXT_CBD5 : 1;
    unsigned long Res1 : 7;
    unsigned long EXT_CBD6 : 1;
    unsigned long Res2 : 7;
    unsigned long EXT_CBD7 : 1;
    unsigned long Res3 : 7;
} sM2L31_TK_TK_EXTREFCBD1;

typedef union {
    sM2L31_TK_TK_EXTREFCBD1 Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTREFCBD1;

#define M2L31_TK_TK_EXTREFCBD2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EXT_CBD8 : 1;
    unsigned long Res0 : 7;
    unsigned long EXT_CBD9 : 1;
    unsigned long Res1 : 7;
    unsigned long EXT_CBD10 : 1;
    unsigned long Res2 : 7;
    unsigned long EXT_CBD11 : 1;
    unsigned long Res3 : 7;
} sM2L31_TK_TK_EXTREFCBD2;

typedef union {
    sM2L31_TK_TK_EXTREFCBD2 Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTREFCBD2;

#define M2L31_TK_TK_EXTREFCBD3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EXT_CBD12 : 1;
    unsigned long Res0 : 7;
    unsigned long EXT_CBD13 : 1;
    unsigned long Res1 : 7;
    unsigned long EXT_CBD14 : 1;
    unsigned long Res2 : 7;
    unsigned long EXT_CBD15 : 1;
    unsigned long Res3 : 7;
} sM2L31_TK_TK_EXTREFCBD3;

typedef union {
    sM2L31_TK_TK_EXTREFCBD3 Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTREFCBD3;

#define M2L31_TK_TK_EXTREFCBD4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EXT_CBD16 : 1;
    unsigned long Res0 : 7;
    unsigned long EXT_CBDALL : 1;
    unsigned long Res1 : 23;
} sM2L31_TK_TK_EXTREFCBD4;

typedef union {
    sM2L31_TK_TK_EXTREFCBD4 Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTREFCBD4;

#define M2L31_TK_TK_EXTREFCBD5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EXT_CBD17 : 1;
    unsigned long Res0 : 31;
} sM2L31_TK_TK_EXTREFCBD5;

typedef union {
    sM2L31_TK_TK_EXTREFCBD5 Bit;
    unsigned long  All;
} uM2L31_TK_TK_EXTREFCBD5;

typedef struct {
    uM2L31_TK_TK_SCANC M2L31_TK_TK_SCANC; // Offset: 0x0
    uM2L31_TK_TK_REFC M2L31_TK_TK_REFC; // Offset: 0x4
    uM2L31_TK_TK_CCBD0 M2L31_TK_TK_CCBD0; // Offset: 0x8
    uM2L31_TK_TK_CCBD1 M2L31_TK_TK_CCBD1; // Offset: 0xc
    uM2L31_TK_TK_CCBD2 M2L31_TK_TK_CCBD2; // Offset: 0x10
    uM2L31_TK_TK_CCBD3 M2L31_TK_TK_CCBD3; // Offset: 0x14
    uM2L31_TK_TK_CCBD4 M2L31_TK_TK_CCBD4; // Offset: 0x18
    uM2L31_TK_TK_IDLSC M2L31_TK_TK_IDLSC; // Offset: 0x1c
    uM2L31_TK_TK_POLSEL M2L31_TK_TK_POLSEL; // Offset: 0x20
    uM2L31_TK_TK_POLC M2L31_TK_TK_POLC; // Offset: 0x24
    uM2L31_TK_TK_STA M2L31_TK_TK_STA; // Offset: 0x28
    uM2L31_TK_TK_DAT0 M2L31_TK_TK_DAT0; // Offset: 0x2c
    uM2L31_TK_TK_DAT1 M2L31_TK_TK_DAT1; // Offset: 0x30
    uM2L31_TK_TK_DAT2 M2L31_TK_TK_DAT2; // Offset: 0x34
    uM2L31_TK_TK_DAT3 M2L31_TK_TK_DAT3; // Offset: 0x38
    uM2L31_TK_TK_DAT4 M2L31_TK_TK_DAT4; // Offset: 0x3c
    uM2L31_TK_TK_INTEN M2L31_TK_TK_INTEN; // Offset: 0x40
    uM2L31_TK_TK_THC01 M2L31_TK_TK_THC01; // Offset: 0x44
    uM2L31_TK_TK_THC23 M2L31_TK_TK_THC23; // Offset: 0x48
    uM2L31_TK_TK_THC45 M2L31_TK_TK_THC45; // Offset: 0x4c
    uM2L31_TK_TK_THC67 M2L31_TK_TK_THC67; // Offset: 0x50
    uM2L31_TK_TK_THC89 M2L31_TK_TK_THC89; // Offset: 0x54
    uM2L31_TK_TK_THC1011 M2L31_TK_TK_THC1011; // Offset: 0x58
    uM2L31_TK_TK_THC1213 M2L31_TK_TK_THC1213; // Offset: 0x5c
    uM2L31_TK_TK_THC1415 M2L31_TK_TK_THC1415; // Offset: 0x60
    uM2L31_TK_TK_THC16 M2L31_TK_TK_THC16; // Offset: 0x64
    uM2L31_TK_TK_REFCBD0 M2L31_TK_TK_REFCBD0; // Offset: 0x68
    uM2L31_TK_TK_REFCBD1 M2L31_TK_TK_REFCBD1; // Offset: 0x6c
    uM2L31_TK_TK_REFCBD2 M2L31_TK_TK_REFCBD2; // Offset: 0x70
    uM2L31_TK_TK_REFCBD3 M2L31_TK_TK_REFCBD3; // Offset: 0x74
    uM2L31_TK_TK_REFCBD4 M2L31_TK_TK_REFCBD4; // Offset: 0x78
    unsigned long Reserved0;
    uM2L31_TK_TK_SCANC1 M2L31_TK_TK_SCANC1; // Offset: 0x80
    uM2L31_TK_TK_REFC1 M2L31_TK_TK_REFC1; // Offset: 0x84
    uM2L31_TK_TK_CCBD5 M2L31_TK_TK_CCBD5; // Offset: 0x88
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    uM2L31_TK_TK_IDLSC1 M2L31_TK_TK_IDLSC1; // Offset: 0x9c
    uM2L31_TK_TK_POLSEL1 M2L31_TK_TK_POLSEL1; // Offset: 0xa0
    uM2L31_TK_TK_POLC1 M2L31_TK_TK_POLC1; // Offset: 0xa4
    uM2L31_TK_TK_STA1 M2L31_TK_TK_STA1; // Offset: 0xa8
    uM2L31_TK_TK_DAT5 M2L31_TK_TK_DAT5; // Offset: 0xac
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    unsigned long Reserved9;
    uM2L31_TK_TK_THC17 M2L31_TK_TK_THC17; // Offset: 0xc4
    unsigned long Reserved10;
    unsigned long Reserved11;
    unsigned long Reserved12;
    unsigned long Reserved13;
    unsigned long Reserved14;
    unsigned long Reserved15;
    unsigned long Reserved16;
    unsigned long Reserved17;
    uM2L31_TK_TK_REFCBD5 M2L31_TK_TK_REFCBD5; // Offset: 0xe8
    unsigned long Reserved18;
    unsigned long Reserved19;
    unsigned long Reserved20;
    unsigned long Reserved21;
    unsigned long Reserved22;
    uM2L31_TK_TK_EXTCBC M2L31_TK_TK_EXTCBC; // Offset: 0x100
    uM2L31_TK_TK_EXTCCBD0 M2L31_TK_TK_EXTCCBD0; // Offset: 0x104
    uM2L31_TK_TK_EXTCCBD1 M2L31_TK_TK_EXTCCBD1; // Offset: 0x108
    uM2L31_TK_TK_EXTCCBD2 M2L31_TK_TK_EXTCCBD2; // Offset: 0x10c
    uM2L31_TK_TK_EXTCCBD3 M2L31_TK_TK_EXTCCBD3; // Offset: 0x110
    uM2L31_TK_TK_EXTCCBD4 M2L31_TK_TK_EXTCCBD4; // Offset: 0x114
    uM2L31_TK_TK_EXTCCBD5 M2L31_TK_TK_EXTCCBD5; // Offset: 0x118
    unsigned long Reserved23;
    unsigned long Reserved24;
    unsigned long Reserved25;
    unsigned long Reserved26;
    unsigned long Reserved27;
    uM2L31_TK_TK_EXTREFCBD0 M2L31_TK_TK_EXTREFCBD0; // Offset: 0x130
    uM2L31_TK_TK_EXTREFCBD1 M2L31_TK_TK_EXTREFCBD1; // Offset: 0x134
    uM2L31_TK_TK_EXTREFCBD2 M2L31_TK_TK_EXTREFCBD2; // Offset: 0x138
    uM2L31_TK_TK_EXTREFCBD3 M2L31_TK_TK_EXTREFCBD3; // Offset: 0x13c
    uM2L31_TK_TK_EXTREFCBD4 M2L31_TK_TK_EXTREFCBD4; // Offset: 0x140
    uM2L31_TK_TK_EXTREFCBD5 M2L31_TK_TK_EXTREFCBD5; // Offset: 0x144
} sM2L31_TK;

