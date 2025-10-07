// Base Addres of OTG = 0x4004D000

#define M2L31_OTG_OTG_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VBUSDROP : 1;
    unsigned long BUSREQ : 1;
    unsigned long HNPREQEN : 1;
    unsigned long Res0 : 1;
    unsigned long OTGEN : 1;
    unsigned long WKEN : 1;
    unsigned long Res1 : 26;
} sM2L31_OTG_OTG_CTL;

typedef union {
    sM2L31_OTG_OTG_CTL Bit;
    unsigned long  All;
} uM2L31_OTG_OTG_CTL;

#define M2L31_OTG_OTG_PHYCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OTGPHYEN : 1;
    unsigned long IDDETEN : 1;
    unsigned long Res0 : 2;
    unsigned long VBENPOL : 1;
    unsigned long VBSTSPOL : 1;
    unsigned long Res1 : 26;
} sM2L31_OTG_OTG_PHYCTL;

typedef union {
    sM2L31_OTG_OTG_PHYCTL Bit;
    unsigned long  All;
} uM2L31_OTG_OTG_PHYCTL;

#define M2L31_OTG_OTG_INTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ROLECHGIEN : 1;
    unsigned long VBEIEN : 1;
    unsigned long SRPFIEN : 1;
    unsigned long HNPFIEN : 1;
    unsigned long GOIDLEIEN : 1;
    unsigned long IDCHGIEN : 1;
    unsigned long PDEVIEN : 1;
    unsigned long HOSTIEN : 1;
    unsigned long BVLDCHGIEN : 1;
    unsigned long AVLDCHGIEN : 1;
    unsigned long VBCHGIEN : 1;
    unsigned long SECHGIEN : 1;
    unsigned long Res0 : 1;
    unsigned long SRPDETIEN : 1;
    unsigned long Res1 : 18;
} sM2L31_OTG_OTG_INTEN;

typedef union {
    sM2L31_OTG_OTG_INTEN Bit;
    unsigned long  All;
} uM2L31_OTG_OTG_INTEN;

#define M2L31_OTG_OTG_INTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ROLECHGIF : 1;
    unsigned long VBEIF : 1;
    unsigned long SRPFIF : 1;
    unsigned long HNPFIF : 1;
    unsigned long GOIDLEIF : 1;
    unsigned long IDCHGIF : 1;
    unsigned long PDEVIF : 1;
    unsigned long HOSTIF : 1;
    unsigned long BVLDCHGIF : 1;
    unsigned long AVLDCHGIF : 1;
    unsigned long VBCHGIF : 1;
    unsigned long SECHGIF : 1;
    unsigned long Res0 : 1;
    unsigned long SRPDETIF : 1;
    unsigned long Res1 : 18;
} sM2L31_OTG_OTG_INTSTS;

typedef union {
    sM2L31_OTG_OTG_INTSTS Bit;
    unsigned long  All;
} uM2L31_OTG_OTG_INTSTS;

#define M2L31_OTG_OTG_STATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OVERCUR : 1;
    unsigned long IDSTS : 1;
    unsigned long SESSEND : 1;
    unsigned long BVLD : 1;
    unsigned long AVLD : 1;
    unsigned long VBUSVLD : 1;
    unsigned long ASPERI : 1;
    unsigned long ASHOST : 1;
    unsigned long Res0 : 24;
} sM2L31_OTG_OTG_STATUS;

typedef union {
    sM2L31_OTG_OTG_STATUS Bit;
    unsigned long  All;
} uM2L31_OTG_OTG_STATUS;

typedef struct {
    uM2L31_OTG_OTG_CTL M2L31_OTG_OTG_CTL; // Offset: 0x0
    uM2L31_OTG_OTG_PHYCTL M2L31_OTG_OTG_PHYCTL; // Offset: 0x4
    uM2L31_OTG_OTG_INTEN M2L31_OTG_OTG_INTEN; // Offset: 0x8
    uM2L31_OTG_OTG_INTSTS M2L31_OTG_OTG_INTSTS; // Offset: 0xc
    uM2L31_OTG_OTG_STATUS M2L31_OTG_OTG_STATUS; // Offset: 0x10
} sM2L31_OTG;

