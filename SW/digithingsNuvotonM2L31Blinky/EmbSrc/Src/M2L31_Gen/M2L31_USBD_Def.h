// Base Addres of USBD = 0x400C0000

#define M2L31_USBD_USBD_INTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BUSIEN : 1;
    unsigned long USBIEN : 1;
    unsigned long VBDETIEN : 1;
    unsigned long NEVWKIEN : 1;
    unsigned long SOFIEN : 1;
    unsigned long Res0 : 3;
    unsigned long WKEN : 1;
    unsigned long Res1 : 6;
    unsigned long INNAKEN : 1;
    unsigned long Res2 : 16;
} sM2L31_USBD_USBD_INTEN;

typedef union {
    sM2L31_USBD_USBD_INTEN Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_INTEN;

#define M2L31_USBD_USBD_INTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BUSIF : 1;
    unsigned long USBIF : 1;
    unsigned long VBDETIF : 1;
    unsigned long NEVWKIF : 1;
    unsigned long SOFIF : 1;
    unsigned long Res0 : 11;
    unsigned long EPEVT0 : 1;
    unsigned long EPEVT1 : 1;
    unsigned long EPEVT2 : 1;
    unsigned long EPEVT3 : 1;
    unsigned long EPEVT4 : 1;
    unsigned long EPEVT5 : 1;
    unsigned long EPEVT6 : 1;
    unsigned long EPEVT7 : 1;
    unsigned long EPEVT8 : 1;
    unsigned long EPEVT9 : 1;
    unsigned long EPEVT10 : 1;
    unsigned long EPEVT11 : 1;
    unsigned long Res1 : 3;
    unsigned long SETUP : 1;
} sM2L31_USBD_USBD_INTSTS;

typedef union {
    sM2L31_USBD_USBD_INTSTS Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_INTSTS;

#define M2L31_USBD_USBD_FADDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FADDR : 7;
    unsigned long Res0 : 25;
} sM2L31_USBD_USBD_FADDR;

typedef union {
    sM2L31_USBD_USBD_FADDR Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_FADDR;

#define M2L31_USBD_USBD_EPSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 7;
    unsigned long OV : 1;
    unsigned long Res1 : 24;
} sM2L31_USBD_USBD_EPSTS;

typedef union {
    sM2L31_USBD_USBD_EPSTS Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_EPSTS;

#define M2L31_USBD_USBD_ATTR_RESET_VALUE 0x00000040
typedef struct {
    unsigned long USBRST : 1;
    unsigned long SUSPEND : 1;
    unsigned long RESUME : 1;
    unsigned long TOUT : 1;
    unsigned long PHYEN : 1;
    unsigned long RWAKEUP : 1;
    unsigned long Res0 : 1;
    unsigned long USBEN : 1;
    unsigned long DPPUEN : 1;
    unsigned long PWRDN : 1;
    unsigned long BYTEM : 1;
    unsigned long LPMACK : 1;
    unsigned long L1SUSPEND : 1;
    unsigned long L1RESUME : 1;
    unsigned long Res1 : 18;
} sM2L31_USBD_USBD_ATTR;

typedef union {
    sM2L31_USBD_USBD_ATTR Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_ATTR;

#define M2L31_USBD_USBD_VBUSDET_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VBUSDET : 1;
    unsigned long Res0 : 31;
} sM2L31_USBD_USBD_VBUSDET;

typedef union {
    sM2L31_USBD_USBD_VBUSDET Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_VBUSDET;

#define M2L31_USBD_USBD_STBUFSEG_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 3;
    unsigned long STBUFSEG : 8;
    unsigned long Res1 : 21;
} sM2L31_USBD_USBD_STBUFSEG;

typedef union {
    sM2L31_USBD_USBD_STBUFSEG Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_STBUFSEG;

#define M2L31_USBD_USBD_EPSTS0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 20;
    unsigned long EPSTS5 : 4;
    unsigned long EPSTS6 : 4;
    unsigned long EPSTS7 : 4;
} sM2L31_USBD_USBD_EPSTS0;

typedef union {
    sM2L31_USBD_USBD_EPSTS0 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_EPSTS0;

#define M2L31_USBD_USBD_EPSTS1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EPSTS8 : 4;
    unsigned long EPSTS9 : 4;
    unsigned long EPSTS10 : 4;
    unsigned long EPSTS11 : 4;
    unsigned long EPSTS12 : 4;
    unsigned long EPSTS13 : 4;
    unsigned long EPSTS14 : 4;
    unsigned long EPSTS15 : 4;
} sM2L31_USBD_USBD_EPSTS1;

typedef union {
    sM2L31_USBD_USBD_EPSTS1 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_EPSTS1;

#define M2L31_USBD_USBD_EPSTS2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EPSTS16 : 4;
    unsigned long EPSTS17 : 4;
    unsigned long EPSTS18 : 4;
    unsigned long Res0 : 20;
} sM2L31_USBD_USBD_EPSTS2;

typedef union {
    sM2L31_USBD_USBD_EPSTS2 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_EPSTS2;

#define M2L31_USBD_USBD_EPINTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EPEVT0 : 1;
    unsigned long EPEVT1 : 1;
    unsigned long EPEVT2 : 1;
    unsigned long EPEVT3 : 1;
    unsigned long EPEVT4 : 1;
    unsigned long EPEVT5 : 1;
    unsigned long EPEVT6 : 1;
    unsigned long EPEVT7 : 1;
    unsigned long EPEVT8 : 1;
    unsigned long EPEVT9 : 1;
    unsigned long EPEVT10 : 1;
    unsigned long EPEVT11 : 1;
    unsigned long EPEVT12 : 1;
    unsigned long EPEVT13 : 1;
    unsigned long EPEVT14 : 1;
    unsigned long EPEVT15 : 1;
    unsigned long EPEVT16 : 1;
    unsigned long EPEVT17 : 1;
    unsigned long EPEVT18 : 1;
    unsigned long Res0 : 13;
} sM2L31_USBD_USBD_EPINTSTS;

typedef union {
    sM2L31_USBD_USBD_EPINTSTS Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_EPINTSTS;

#define M2L31_USBD_USBD_LPMATTR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LPMLINKSTS : 4;
    unsigned long LPMBESL : 4;
    unsigned long LPMRWAKUP : 1;
    unsigned long Res0 : 23;
} sM2L31_USBD_USBD_LPMATTR;

typedef union {
    sM2L31_USBD_USBD_LPMATTR Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_LPMATTR;

#define M2L31_USBD_USBD_FN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FN : 11;
    unsigned long Res0 : 21;
} sM2L31_USBD_USBD_FN;

typedef union {
    sM2L31_USBD_USBD_FN Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_FN;

#define M2L31_USBD_USBD_SE0_RESET_VALUE 0x00000001
typedef struct {
    unsigned long SE0 : 1;
    unsigned long Res0 : 31;
} sM2L31_USBD_USBD_SE0;

typedef union {
    sM2L31_USBD_USBD_SE0 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_SE0;

#define M2L31_USBD_USBD_BUFSEG0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 3;
    unsigned long BUFSEG : 8;
    unsigned long Res1 : 21;
} sM2L31_USBD_USBD_BUFSEG0;

typedef union {
    sM2L31_USBD_USBD_BUFSEG0 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG0;

#define M2L31_USBD_USBD_MXPLD0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MXPLD : 11;
    unsigned long Res0 : 21;
} sM2L31_USBD_USBD_MXPLD0;

typedef union {
    sM2L31_USBD_USBD_MXPLD0 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD0;

#define M2L31_USBD_USBD_CFG0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EPNUM : 4;
    unsigned long ISOCH : 1;
    unsigned long STATE : 2;
    unsigned long DSQSYNC : 1;
    unsigned long Res0 : 1;
    unsigned long CSTALL : 1;
    unsigned long DBTGACTIVE : 1;
    unsigned long DBEN : 1;
    unsigned long Res1 : 20;
} sM2L31_USBD_USBD_CFG0;

typedef union {
    sM2L31_USBD_USBD_CFG0 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG0;

#define M2L31_USBD_USBD_CFGP0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CLRRDY : 1;
    unsigned long SSTALL : 1;
    unsigned long Res0 : 30;
} sM2L31_USBD_USBD_CFGP0;

typedef union {
    sM2L31_USBD_USBD_CFGP0 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP0;

#define M2L31_USBD_USBD_BUFSEG1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG1;

typedef union {
    sM2L31_USBD_USBD_BUFSEG1 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG1;

#define M2L31_USBD_USBD_MXPLD1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD1;

typedef union {
    sM2L31_USBD_USBD_MXPLD1 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD1;

#define M2L31_USBD_USBD_CFG1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG1;

typedef union {
    sM2L31_USBD_USBD_CFG1 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG1;

#define M2L31_USBD_USBD_CFGP1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP1;

typedef union {
    sM2L31_USBD_USBD_CFGP1 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP1;

#define M2L31_USBD_USBD_BUFSEG2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG2;

typedef union {
    sM2L31_USBD_USBD_BUFSEG2 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG2;

#define M2L31_USBD_USBD_MXPLD2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD2;

typedef union {
    sM2L31_USBD_USBD_MXPLD2 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD2;

#define M2L31_USBD_USBD_CFG2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG2;

typedef union {
    sM2L31_USBD_USBD_CFG2 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG2;

#define M2L31_USBD_USBD_CFGP2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP2;

typedef union {
    sM2L31_USBD_USBD_CFGP2 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP2;

#define M2L31_USBD_USBD_BUFSEG3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG3;

typedef union {
    sM2L31_USBD_USBD_BUFSEG3 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG3;

#define M2L31_USBD_USBD_MXPLD3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD3;

typedef union {
    sM2L31_USBD_USBD_MXPLD3 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD3;

#define M2L31_USBD_USBD_CFG3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG3;

typedef union {
    sM2L31_USBD_USBD_CFG3 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG3;

#define M2L31_USBD_USBD_CFGP3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP3;

typedef union {
    sM2L31_USBD_USBD_CFGP3 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP3;

#define M2L31_USBD_USBD_BUFSEG4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG4;

typedef union {
    sM2L31_USBD_USBD_BUFSEG4 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG4;

#define M2L31_USBD_USBD_MXPLD4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD4;

typedef union {
    sM2L31_USBD_USBD_MXPLD4 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD4;

#define M2L31_USBD_USBD_CFG4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG4;

typedef union {
    sM2L31_USBD_USBD_CFG4 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG4;

#define M2L31_USBD_USBD_CFGP4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP4;

typedef union {
    sM2L31_USBD_USBD_CFGP4 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP4;

#define M2L31_USBD_USBD_BUFSEG5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG5;

typedef union {
    sM2L31_USBD_USBD_BUFSEG5 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG5;

#define M2L31_USBD_USBD_MXPLD5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD5;

typedef union {
    sM2L31_USBD_USBD_MXPLD5 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD5;

#define M2L31_USBD_USBD_CFG5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG5;

typedef union {
    sM2L31_USBD_USBD_CFG5 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG5;

#define M2L31_USBD_USBD_CFGP5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP5;

typedef union {
    sM2L31_USBD_USBD_CFGP5 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP5;

#define M2L31_USBD_USBD_BUFSEG6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG6;

typedef union {
    sM2L31_USBD_USBD_BUFSEG6 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG6;

#define M2L31_USBD_USBD_MXPLD6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD6;

typedef union {
    sM2L31_USBD_USBD_MXPLD6 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD6;

#define M2L31_USBD_USBD_CFG6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG6;

typedef union {
    sM2L31_USBD_USBD_CFG6 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG6;

#define M2L31_USBD_USBD_CFGP6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP6;

typedef union {
    sM2L31_USBD_USBD_CFGP6 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP6;

#define M2L31_USBD_USBD_BUFSEG7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG7;

typedef union {
    sM2L31_USBD_USBD_BUFSEG7 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG7;

#define M2L31_USBD_USBD_MXPLD7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD7;

typedef union {
    sM2L31_USBD_USBD_MXPLD7 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD7;

#define M2L31_USBD_USBD_CFG7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG7;

typedef union {
    sM2L31_USBD_USBD_CFG7 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG7;

#define M2L31_USBD_USBD_CFGP7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP7;

typedef union {
    sM2L31_USBD_USBD_CFGP7 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP7;

#define M2L31_USBD_USBD_BUFSEG8_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG8;

typedef union {
    sM2L31_USBD_USBD_BUFSEG8 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG8;

#define M2L31_USBD_USBD_MXPLD8_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD8;

typedef union {
    sM2L31_USBD_USBD_MXPLD8 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD8;

#define M2L31_USBD_USBD_CFG8_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG8;

typedef union {
    sM2L31_USBD_USBD_CFG8 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG8;

#define M2L31_USBD_USBD_CFGP8_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP8;

typedef union {
    sM2L31_USBD_USBD_CFGP8 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP8;

#define M2L31_USBD_USBD_BUFSEG9_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG9;

typedef union {
    sM2L31_USBD_USBD_BUFSEG9 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG9;

#define M2L31_USBD_USBD_MXPLD9_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD9;

typedef union {
    sM2L31_USBD_USBD_MXPLD9 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD9;

#define M2L31_USBD_USBD_CFG9_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG9;

typedef union {
    sM2L31_USBD_USBD_CFG9 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG9;

#define M2L31_USBD_USBD_CFGP9_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP9;

typedef union {
    sM2L31_USBD_USBD_CFGP9 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP9;

#define M2L31_USBD_USBD_BUFSEG10_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG10;

typedef union {
    sM2L31_USBD_USBD_BUFSEG10 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG10;

#define M2L31_USBD_USBD_MXPLD10_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD10;

typedef union {
    sM2L31_USBD_USBD_MXPLD10 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD10;

#define M2L31_USBD_USBD_CFG10_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG10;

typedef union {
    sM2L31_USBD_USBD_CFG10 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG10;

#define M2L31_USBD_USBD_CFGP10_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP10;

typedef union {
    sM2L31_USBD_USBD_CFGP10 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP10;

#define M2L31_USBD_USBD_BUFSEG11_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG11;

typedef union {
    sM2L31_USBD_USBD_BUFSEG11 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG11;

#define M2L31_USBD_USBD_MXPLD11_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD11;

typedef union {
    sM2L31_USBD_USBD_MXPLD11 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD11;

#define M2L31_USBD_USBD_CFG11_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG11;

typedef union {
    sM2L31_USBD_USBD_CFG11 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG11;

#define M2L31_USBD_USBD_CFGP11_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP11;

typedef union {
    sM2L31_USBD_USBD_CFGP11 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP11;

#define M2L31_USBD_USBD_BUFSEG12_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG12;

typedef union {
    sM2L31_USBD_USBD_BUFSEG12 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG12;

#define M2L31_USBD_USBD_MXPLD12_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD12;

typedef union {
    sM2L31_USBD_USBD_MXPLD12 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD12;

#define M2L31_USBD_USBD_CFG12_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG12;

typedef union {
    sM2L31_USBD_USBD_CFG12 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG12;

#define M2L31_USBD_USBD_CFGP12_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP12;

typedef union {
    sM2L31_USBD_USBD_CFGP12 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP12;

#define M2L31_USBD_USBD_BUFSEG13_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG13;

typedef union {
    sM2L31_USBD_USBD_BUFSEG13 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG13;

#define M2L31_USBD_USBD_MXPLD13_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD13;

typedef union {
    sM2L31_USBD_USBD_MXPLD13 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD13;

#define M2L31_USBD_USBD_CFG13_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG13;

typedef union {
    sM2L31_USBD_USBD_CFG13 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG13;

#define M2L31_USBD_USBD_CFGP13_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP13;

typedef union {
    sM2L31_USBD_USBD_CFGP13 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP13;

#define M2L31_USBD_USBD_BUFSEG14_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG14;

typedef union {
    sM2L31_USBD_USBD_BUFSEG14 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG14;

#define M2L31_USBD_USBD_MXPLD14_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD14;

typedef union {
    sM2L31_USBD_USBD_MXPLD14 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD14;

#define M2L31_USBD_USBD_CFG14_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG14;

typedef union {
    sM2L31_USBD_USBD_CFG14 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG14;

#define M2L31_USBD_USBD_CFGP14_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP14;

typedef union {
    sM2L31_USBD_USBD_CFGP14 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP14;

#define M2L31_USBD_USBD_BUFSEG15_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG15;

typedef union {
    sM2L31_USBD_USBD_BUFSEG15 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG15;

#define M2L31_USBD_USBD_MXPLD15_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD15;

typedef union {
    sM2L31_USBD_USBD_MXPLD15 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD15;

#define M2L31_USBD_USBD_CFG15_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG15;

typedef union {
    sM2L31_USBD_USBD_CFG15 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG15;

#define M2L31_USBD_USBD_CFGP15_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP15;

typedef union {
    sM2L31_USBD_USBD_CFGP15 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP15;

#define M2L31_USBD_USBD_BUFSEG16_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG16;

typedef union {
    sM2L31_USBD_USBD_BUFSEG16 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG16;

#define M2L31_USBD_USBD_MXPLD16_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD16;

typedef union {
    sM2L31_USBD_USBD_MXPLD16 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD16;

#define M2L31_USBD_USBD_CFG16_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG16;

typedef union {
    sM2L31_USBD_USBD_CFG16 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG16;

#define M2L31_USBD_USBD_CFGP16_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP16;

typedef union {
    sM2L31_USBD_USBD_CFGP16 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP16;

#define M2L31_USBD_USBD_BUFSEG17_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG17;

typedef union {
    sM2L31_USBD_USBD_BUFSEG17 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG17;

#define M2L31_USBD_USBD_MXPLD17_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD17;

typedef union {
    sM2L31_USBD_USBD_MXPLD17 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD17;

#define M2L31_USBD_USBD_CFG17_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG17;

typedef union {
    sM2L31_USBD_USBD_CFG17 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG17;

#define M2L31_USBD_USBD_CFGP17_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP17;

typedef union {
    sM2L31_USBD_USBD_CFGP17 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP17;

#define M2L31_USBD_USBD_BUFSEG18_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_BUFSEG18;

typedef union {
    sM2L31_USBD_USBD_BUFSEG18 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_BUFSEG18;

#define M2L31_USBD_USBD_MXPLD18_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_MXPLD18;

typedef union {
    sM2L31_USBD_USBD_MXPLD18 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_MXPLD18;

#define M2L31_USBD_USBD_CFG18_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFG18;

typedef union {
    sM2L31_USBD_USBD_CFG18 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFG18;

#define M2L31_USBD_USBD_CFGP18_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_USBD_USBD_CFGP18;

typedef union {
    sM2L31_USBD_USBD_CFGP18 Bit;
    unsigned long  All;
} uM2L31_USBD_USBD_CFGP18;

typedef struct {
    uM2L31_USBD_USBD_INTEN M2L31_USBD_USBD_INTEN; // Offset: 0x0
    uM2L31_USBD_USBD_INTSTS M2L31_USBD_USBD_INTSTS; // Offset: 0x4
    uM2L31_USBD_USBD_FADDR M2L31_USBD_USBD_FADDR; // Offset: 0x8
    uM2L31_USBD_USBD_EPSTS M2L31_USBD_USBD_EPSTS; // Offset: 0xc
    uM2L31_USBD_USBD_ATTR M2L31_USBD_USBD_ATTR; // Offset: 0x10
    uM2L31_USBD_USBD_VBUSDET M2L31_USBD_USBD_VBUSDET; // Offset: 0x14
    uM2L31_USBD_USBD_STBUFSEG M2L31_USBD_USBD_STBUFSEG; // Offset: 0x18
    unsigned long Reserved0;
    uM2L31_USBD_USBD_EPSTS0 M2L31_USBD_USBD_EPSTS0; // Offset: 0x20
    uM2L31_USBD_USBD_EPSTS1 M2L31_USBD_USBD_EPSTS1; // Offset: 0x24
    uM2L31_USBD_USBD_EPSTS2 M2L31_USBD_USBD_EPSTS2; // Offset: 0x28
    unsigned long Reserved1;
    uM2L31_USBD_USBD_EPINTSTS M2L31_USBD_USBD_EPINTSTS; // Offset: 0x30
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
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
    uM2L31_USBD_USBD_LPMATTR M2L31_USBD_USBD_LPMATTR; // Offset: 0x88
    uM2L31_USBD_USBD_FN M2L31_USBD_USBD_FN; // Offset: 0x8c
    uM2L31_USBD_USBD_SE0 M2L31_USBD_USBD_SE0; // Offset: 0x90
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
    unsigned long Reserved125;
    unsigned long Reserved126;
    unsigned long Reserved127;
    unsigned long Reserved128;
    unsigned long Reserved129;
    unsigned long Reserved130;
    unsigned long Reserved131;
    unsigned long Reserved132;
    unsigned long Reserved133;
    unsigned long Reserved134;
    unsigned long Reserved135;
    unsigned long Reserved136;
    unsigned long Reserved137;
    unsigned long Reserved138;
    unsigned long Reserved139;
    unsigned long Reserved140;
    unsigned long Reserved141;
    unsigned long Reserved142;
    unsigned long Reserved143;
    unsigned long Reserved144;
    unsigned long Reserved145;
    unsigned long Reserved146;
    unsigned long Reserved147;
    unsigned long Reserved148;
    unsigned long Reserved149;
    unsigned long Reserved150;
    unsigned long Reserved151;
    unsigned long Reserved152;
    unsigned long Reserved153;
    unsigned long Reserved154;
    unsigned long Reserved155;
    unsigned long Reserved156;
    unsigned long Reserved157;
    unsigned long Reserved158;
    unsigned long Reserved159;
    unsigned long Reserved160;
    unsigned long Reserved161;
    unsigned long Reserved162;
    unsigned long Reserved163;
    unsigned long Reserved164;
    unsigned long Reserved165;
    unsigned long Reserved166;
    unsigned long Reserved167;
    unsigned long Reserved168;
    unsigned long Reserved169;
    unsigned long Reserved170;
    unsigned long Reserved171;
    unsigned long Reserved172;
    unsigned long Reserved173;
    unsigned long Reserved174;
    unsigned long Reserved175;
    unsigned long Reserved176;
    unsigned long Reserved177;
    unsigned long Reserved178;
    unsigned long Reserved179;
    unsigned long Reserved180;
    unsigned long Reserved181;
    unsigned long Reserved182;
    unsigned long Reserved183;
    unsigned long Reserved184;
    unsigned long Reserved185;
    unsigned long Reserved186;
    unsigned long Reserved187;
    unsigned long Reserved188;
    unsigned long Reserved189;
    unsigned long Reserved190;
    unsigned long Reserved191;
    unsigned long Reserved192;
    unsigned long Reserved193;
    unsigned long Reserved194;
    unsigned long Reserved195;
    unsigned long Reserved196;
    unsigned long Reserved197;
    unsigned long Reserved198;
    unsigned long Reserved199;
    unsigned long Reserved200;
    unsigned long Reserved201;
    unsigned long Reserved202;
    unsigned long Reserved203;
    unsigned long Reserved204;
    unsigned long Reserved205;
    unsigned long Reserved206;
    unsigned long Reserved207;
    unsigned long Reserved208;
    unsigned long Reserved209;
    unsigned long Reserved210;
    unsigned long Reserved211;
    unsigned long Reserved212;
    unsigned long Reserved213;
    unsigned long Reserved214;
    unsigned long Reserved215;
    unsigned long Reserved216;
    unsigned long Reserved217;
    unsigned long Reserved218;
    unsigned long Reserved219;
    unsigned long Reserved220;
    unsigned long Reserved221;
    unsigned long Reserved222;
    unsigned long Reserved223;
    unsigned long Reserved224;
    unsigned long Reserved225;
    unsigned long Reserved226;
    unsigned long Reserved227;
    unsigned long Reserved228;
    unsigned long Reserved229;
    unsigned long Reserved230;
    unsigned long Reserved231;
    unsigned long Reserved232;
    unsigned long Reserved233;
    unsigned long Reserved234;
    unsigned long Reserved235;
    unsigned long Reserved236;
    unsigned long Reserved237;
    unsigned long Reserved238;
    unsigned long Reserved239;
    unsigned long Reserved240;
    unsigned long Reserved241;
    unsigned long Reserved242;
    unsigned long Reserved243;
    unsigned long Reserved244;
    unsigned long Reserved245;
    unsigned long Reserved246;
    unsigned long Reserved247;
    unsigned long Reserved248;
    unsigned long Reserved249;
    unsigned long Reserved250;
    unsigned long Reserved251;
    unsigned long Reserved252;
    unsigned long Reserved253;
    unsigned long Reserved254;
    unsigned long Reserved255;
    unsigned long Reserved256;
    unsigned long Reserved257;
    unsigned long Reserved258;
    unsigned long Reserved259;
    unsigned long Reserved260;
    unsigned long Reserved261;
    unsigned long Reserved262;
    unsigned long Reserved263;
    unsigned long Reserved264;
    unsigned long Reserved265;
    unsigned long Reserved266;
    unsigned long Reserved267;
    unsigned long Reserved268;
    unsigned long Reserved269;
    unsigned long Reserved270;
    unsigned long Reserved271;
    unsigned long Reserved272;
    unsigned long Reserved273;
    unsigned long Reserved274;
    unsigned long Reserved275;
    unsigned long Reserved276;
    unsigned long Reserved277;
    unsigned long Reserved278;
    unsigned long Reserved279;
    unsigned long Reserved280;
    unsigned long Reserved281;
    unsigned long Reserved282;
    unsigned long Reserved283;
    unsigned long Reserved284;
    unsigned long Reserved285;
    unsigned long Reserved286;
    unsigned long Reserved287;
    unsigned long Reserved288;
    unsigned long Reserved289;
    unsigned long Reserved290;
    unsigned long Reserved291;
    unsigned long Reserved292;
    unsigned long Reserved293;
    unsigned long Reserved294;
    unsigned long Reserved295;
    unsigned long Reserved296;
    unsigned long Reserved297;
    unsigned long Reserved298;
    unsigned long Reserved299;
    unsigned long Reserved300;
    unsigned long Reserved301;
    unsigned long Reserved302;
    unsigned long Reserved303;
    unsigned long Reserved304;
    unsigned long Reserved305;
    uM2L31_USBD_USBD_BUFSEG0 M2L31_USBD_USBD_BUFSEG0; // Offset: 0x500
    uM2L31_USBD_USBD_MXPLD0 M2L31_USBD_USBD_MXPLD0; // Offset: 0x504
    uM2L31_USBD_USBD_CFG0 M2L31_USBD_USBD_CFG0; // Offset: 0x508
    uM2L31_USBD_USBD_CFGP0 M2L31_USBD_USBD_CFGP0; // Offset: 0x50c
    uM2L31_USBD_USBD_BUFSEG1 M2L31_USBD_USBD_BUFSEG1; // Offset: 0x510
    uM2L31_USBD_USBD_MXPLD1 M2L31_USBD_USBD_MXPLD1; // Offset: 0x514
    uM2L31_USBD_USBD_CFG1 M2L31_USBD_USBD_CFG1; // Offset: 0x518
    uM2L31_USBD_USBD_CFGP1 M2L31_USBD_USBD_CFGP1; // Offset: 0x51c
    uM2L31_USBD_USBD_BUFSEG2 M2L31_USBD_USBD_BUFSEG2; // Offset: 0x520
    uM2L31_USBD_USBD_MXPLD2 M2L31_USBD_USBD_MXPLD2; // Offset: 0x524
    uM2L31_USBD_USBD_CFG2 M2L31_USBD_USBD_CFG2; // Offset: 0x528
    uM2L31_USBD_USBD_CFGP2 M2L31_USBD_USBD_CFGP2; // Offset: 0x52c
    uM2L31_USBD_USBD_BUFSEG3 M2L31_USBD_USBD_BUFSEG3; // Offset: 0x530
    uM2L31_USBD_USBD_MXPLD3 M2L31_USBD_USBD_MXPLD3; // Offset: 0x534
    uM2L31_USBD_USBD_CFG3 M2L31_USBD_USBD_CFG3; // Offset: 0x538
    uM2L31_USBD_USBD_CFGP3 M2L31_USBD_USBD_CFGP3; // Offset: 0x53c
    uM2L31_USBD_USBD_BUFSEG4 M2L31_USBD_USBD_BUFSEG4; // Offset: 0x540
    uM2L31_USBD_USBD_MXPLD4 M2L31_USBD_USBD_MXPLD4; // Offset: 0x544
    uM2L31_USBD_USBD_CFG4 M2L31_USBD_USBD_CFG4; // Offset: 0x548
    uM2L31_USBD_USBD_CFGP4 M2L31_USBD_USBD_CFGP4; // Offset: 0x54c
    uM2L31_USBD_USBD_BUFSEG5 M2L31_USBD_USBD_BUFSEG5; // Offset: 0x550
    uM2L31_USBD_USBD_MXPLD5 M2L31_USBD_USBD_MXPLD5; // Offset: 0x554
    uM2L31_USBD_USBD_CFG5 M2L31_USBD_USBD_CFG5; // Offset: 0x558
    uM2L31_USBD_USBD_CFGP5 M2L31_USBD_USBD_CFGP5; // Offset: 0x55c
    uM2L31_USBD_USBD_BUFSEG6 M2L31_USBD_USBD_BUFSEG6; // Offset: 0x560
    uM2L31_USBD_USBD_MXPLD6 M2L31_USBD_USBD_MXPLD6; // Offset: 0x564
    uM2L31_USBD_USBD_CFG6 M2L31_USBD_USBD_CFG6; // Offset: 0x568
    uM2L31_USBD_USBD_CFGP6 M2L31_USBD_USBD_CFGP6; // Offset: 0x56c
    uM2L31_USBD_USBD_BUFSEG7 M2L31_USBD_USBD_BUFSEG7; // Offset: 0x570
    uM2L31_USBD_USBD_MXPLD7 M2L31_USBD_USBD_MXPLD7; // Offset: 0x574
    uM2L31_USBD_USBD_CFG7 M2L31_USBD_USBD_CFG7; // Offset: 0x578
    uM2L31_USBD_USBD_CFGP7 M2L31_USBD_USBD_CFGP7; // Offset: 0x57c
    uM2L31_USBD_USBD_BUFSEG8 M2L31_USBD_USBD_BUFSEG8; // Offset: 0x580
    uM2L31_USBD_USBD_MXPLD8 M2L31_USBD_USBD_MXPLD8; // Offset: 0x584
    uM2L31_USBD_USBD_CFG8 M2L31_USBD_USBD_CFG8; // Offset: 0x588
    uM2L31_USBD_USBD_CFGP8 M2L31_USBD_USBD_CFGP8; // Offset: 0x58c
    uM2L31_USBD_USBD_BUFSEG9 M2L31_USBD_USBD_BUFSEG9; // Offset: 0x590
    uM2L31_USBD_USBD_MXPLD9 M2L31_USBD_USBD_MXPLD9; // Offset: 0x594
    uM2L31_USBD_USBD_CFG9 M2L31_USBD_USBD_CFG9; // Offset: 0x598
    uM2L31_USBD_USBD_CFGP9 M2L31_USBD_USBD_CFGP9; // Offset: 0x59c
    uM2L31_USBD_USBD_BUFSEG10 M2L31_USBD_USBD_BUFSEG10; // Offset: 0x5a0
    uM2L31_USBD_USBD_MXPLD10 M2L31_USBD_USBD_MXPLD10; // Offset: 0x5a4
    uM2L31_USBD_USBD_CFG10 M2L31_USBD_USBD_CFG10; // Offset: 0x5a8
    uM2L31_USBD_USBD_CFGP10 M2L31_USBD_USBD_CFGP10; // Offset: 0x5ac
    uM2L31_USBD_USBD_BUFSEG11 M2L31_USBD_USBD_BUFSEG11; // Offset: 0x5b0
    uM2L31_USBD_USBD_MXPLD11 M2L31_USBD_USBD_MXPLD11; // Offset: 0x5b4
    uM2L31_USBD_USBD_CFG11 M2L31_USBD_USBD_CFG11; // Offset: 0x5b8
    uM2L31_USBD_USBD_CFGP11 M2L31_USBD_USBD_CFGP11; // Offset: 0x5bc
    uM2L31_USBD_USBD_BUFSEG12 M2L31_USBD_USBD_BUFSEG12; // Offset: 0x5c0
    uM2L31_USBD_USBD_MXPLD12 M2L31_USBD_USBD_MXPLD12; // Offset: 0x5c4
    uM2L31_USBD_USBD_CFG12 M2L31_USBD_USBD_CFG12; // Offset: 0x5c8
    uM2L31_USBD_USBD_CFGP12 M2L31_USBD_USBD_CFGP12; // Offset: 0x5cc
    uM2L31_USBD_USBD_BUFSEG13 M2L31_USBD_USBD_BUFSEG13; // Offset: 0x5d0
    uM2L31_USBD_USBD_MXPLD13 M2L31_USBD_USBD_MXPLD13; // Offset: 0x5d4
    uM2L31_USBD_USBD_CFG13 M2L31_USBD_USBD_CFG13; // Offset: 0x5d8
    uM2L31_USBD_USBD_CFGP13 M2L31_USBD_USBD_CFGP13; // Offset: 0x5dc
    uM2L31_USBD_USBD_BUFSEG14 M2L31_USBD_USBD_BUFSEG14; // Offset: 0x5e0
    uM2L31_USBD_USBD_MXPLD14 M2L31_USBD_USBD_MXPLD14; // Offset: 0x5e4
    uM2L31_USBD_USBD_CFG14 M2L31_USBD_USBD_CFG14; // Offset: 0x5e8
    uM2L31_USBD_USBD_CFGP14 M2L31_USBD_USBD_CFGP14; // Offset: 0x5ec
    uM2L31_USBD_USBD_BUFSEG15 M2L31_USBD_USBD_BUFSEG15; // Offset: 0x5f0
    uM2L31_USBD_USBD_MXPLD15 M2L31_USBD_USBD_MXPLD15; // Offset: 0x5f4
    uM2L31_USBD_USBD_CFG15 M2L31_USBD_USBD_CFG15; // Offset: 0x5f8
    uM2L31_USBD_USBD_CFGP15 M2L31_USBD_USBD_CFGP15; // Offset: 0x5fc
    uM2L31_USBD_USBD_BUFSEG16 M2L31_USBD_USBD_BUFSEG16; // Offset: 0x600
    uM2L31_USBD_USBD_MXPLD16 M2L31_USBD_USBD_MXPLD16; // Offset: 0x604
    uM2L31_USBD_USBD_CFG16 M2L31_USBD_USBD_CFG16; // Offset: 0x608
    uM2L31_USBD_USBD_CFGP16 M2L31_USBD_USBD_CFGP16; // Offset: 0x60c
    uM2L31_USBD_USBD_BUFSEG17 M2L31_USBD_USBD_BUFSEG17; // Offset: 0x610
    uM2L31_USBD_USBD_MXPLD17 M2L31_USBD_USBD_MXPLD17; // Offset: 0x614
    uM2L31_USBD_USBD_CFG17 M2L31_USBD_USBD_CFG17; // Offset: 0x618
    uM2L31_USBD_USBD_CFGP17 M2L31_USBD_USBD_CFGP17; // Offset: 0x61c
    uM2L31_USBD_USBD_BUFSEG18 M2L31_USBD_USBD_BUFSEG18; // Offset: 0x620
    uM2L31_USBD_USBD_MXPLD18 M2L31_USBD_USBD_MXPLD18; // Offset: 0x624
    uM2L31_USBD_USBD_CFG18 M2L31_USBD_USBD_CFG18; // Offset: 0x628
    uM2L31_USBD_USBD_CFGP18 M2L31_USBD_USBD_CFGP18; // Offset: 0x62c
} sM2L31_USBD;

