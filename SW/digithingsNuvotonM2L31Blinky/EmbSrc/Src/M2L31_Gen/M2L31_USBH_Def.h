// Base Addres of USBH = 0x40009000

#define M2L31_USBH_HcRevision_RESET_VALUE 0x00000110
typedef struct {
    unsigned long REV : 8;
    unsigned long Res0 : 24;
} sM2L31_USBH_HcRevision;

typedef union {
    sM2L31_USBH_HcRevision Bit;
    unsigned long  All;
} uM2L31_USBH_HcRevision;

#define M2L31_USBH_HcControl_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CBSR : 2;
    unsigned long PLE : 1;
    unsigned long IE : 1;
    unsigned long CLE : 1;
    unsigned long BLE : 1;
    unsigned long HCFS : 2;
    unsigned long Res0 : 24;
} sM2L31_USBH_HcControl;

typedef union {
    sM2L31_USBH_HcControl Bit;
    unsigned long  All;
} uM2L31_USBH_HcControl;

#define M2L31_USBH_HcCommandStatus_RESET_VALUE 0x00000000
typedef struct {
    unsigned long HCR : 1;
    unsigned long CLF : 1;
    unsigned long BLF : 1;
    unsigned long Res0 : 13;
    unsigned long SOC : 2;
    unsigned long Res1 : 14;
} sM2L31_USBH_HcCommandStatus;

typedef union {
    sM2L31_USBH_HcCommandStatus Bit;
    unsigned long  All;
} uM2L31_USBH_HcCommandStatus;

#define M2L31_USBH_HcInterruptStatus_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SO : 1;
    unsigned long WDH : 1;
    unsigned long SF : 1;
    unsigned long RD : 1;
    unsigned long Res0 : 1;
    unsigned long FNO : 1;
    unsigned long RHSC : 1;
    unsigned long Res1 : 25;
} sM2L31_USBH_HcInterruptStatus;

typedef union {
    sM2L31_USBH_HcInterruptStatus Bit;
    unsigned long  All;
} uM2L31_USBH_HcInterruptStatus;

#define M2L31_USBH_HcInterruptEnable_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SO : 1;
    unsigned long WDH : 1;
    unsigned long SF : 1;
    unsigned long RD : 1;
    unsigned long Res0 : 1;
    unsigned long FNO : 1;
    unsigned long RHSC : 1;
    unsigned long Res1 : 24;
    unsigned long MIE : 1;
} sM2L31_USBH_HcInterruptEnable;

typedef union {
    sM2L31_USBH_HcInterruptEnable Bit;
    unsigned long  All;
} uM2L31_USBH_HcInterruptEnable;

#define M2L31_USBH_HcInterruptDisable_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SO : 1;
    unsigned long WDH : 1;
    unsigned long SF : 1;
    unsigned long RD : 1;
    unsigned long Res0 : 1;
    unsigned long FNO : 1;
    unsigned long RHSC : 1;
    unsigned long Res1 : 24;
    unsigned long MIE : 1;
} sM2L31_USBH_HcInterruptDisable;

typedef union {
    sM2L31_USBH_HcInterruptDisable Bit;
    unsigned long  All;
} uM2L31_USBH_HcInterruptDisable;

#define M2L31_USBH_HcHCCA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 8;
    unsigned long HCCA : 24;
} sM2L31_USBH_HcHCCA;

typedef union {
    sM2L31_USBH_HcHCCA Bit;
    unsigned long  All;
} uM2L31_USBH_HcHCCA;

#define M2L31_USBH_HcPeriodCurrentED_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long PCED : 28;
} sM2L31_USBH_HcPeriodCurrentED;

typedef union {
    sM2L31_USBH_HcPeriodCurrentED Bit;
    unsigned long  All;
} uM2L31_USBH_HcPeriodCurrentED;

#define M2L31_USBH_HcControlHeadED_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long CHED : 28;
} sM2L31_USBH_HcControlHeadED;

typedef union {
    sM2L31_USBH_HcControlHeadED Bit;
    unsigned long  All;
} uM2L31_USBH_HcControlHeadED;

#define M2L31_USBH_HcControlCurrentED_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long CCED : 28;
} sM2L31_USBH_HcControlCurrentED;

typedef union {
    sM2L31_USBH_HcControlCurrentED Bit;
    unsigned long  All;
} uM2L31_USBH_HcControlCurrentED;

#define M2L31_USBH_HcBulkHeadED_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long BHED : 28;
} sM2L31_USBH_HcBulkHeadED;

typedef union {
    sM2L31_USBH_HcBulkHeadED Bit;
    unsigned long  All;
} uM2L31_USBH_HcBulkHeadED;

#define M2L31_USBH_HcBulkCurrentED_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long BCED : 28;
} sM2L31_USBH_HcBulkCurrentED;

typedef union {
    sM2L31_USBH_HcBulkCurrentED Bit;
    unsigned long  All;
} uM2L31_USBH_HcBulkCurrentED;

#define M2L31_USBH_HcDoneHead_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 4;
    unsigned long DH : 28;
} sM2L31_USBH_HcDoneHead;

typedef union {
    sM2L31_USBH_HcDoneHead Bit;
    unsigned long  All;
} uM2L31_USBH_HcDoneHead;

#define M2L31_USBH_HcFmInterval_RESET_VALUE 0x00002EDF
typedef struct {
    unsigned long FI : 14;
    unsigned long Res0 : 2;
    unsigned long FSMPS : 14;
    unsigned long Res1 : 1;
    unsigned long FIT : 1;
} sM2L31_USBH_HcFmInterval;

typedef union {
    sM2L31_USBH_HcFmInterval Bit;
    unsigned long  All;
} uM2L31_USBH_HcFmInterval;

#define M2L31_USBH_HcFmRemaining_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FR : 14;
    unsigned long Res0 : 17;
    unsigned long FRT : 1;
} sM2L31_USBH_HcFmRemaining;

typedef union {
    sM2L31_USBH_HcFmRemaining Bit;
    unsigned long  All;
} uM2L31_USBH_HcFmRemaining;

#define M2L31_USBH_HcFmNumber_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FN : 16;
    unsigned long Res0 : 16;
} sM2L31_USBH_HcFmNumber;

typedef union {
    sM2L31_USBH_HcFmNumber Bit;
    unsigned long  All;
} uM2L31_USBH_HcFmNumber;

#define M2L31_USBH_HcPeriodicStart_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PS : 14;
    unsigned long Res0 : 18;
} sM2L31_USBH_HcPeriodicStart;

typedef union {
    sM2L31_USBH_HcPeriodicStart Bit;
    unsigned long  All;
} uM2L31_USBH_HcPeriodicStart;

#define M2L31_USBH_HcLSThreshold_RESET_VALUE 0x00000628
typedef struct {
    unsigned long LST : 12;
    unsigned long Res0 : 20;
} sM2L31_USBH_HcLSThreshold;

typedef union {
    sM2L31_USBH_HcLSThreshold Bit;
    unsigned long  All;
} uM2L31_USBH_HcLSThreshold;

#define M2L31_USBH_HcRhDescriptorA_RESET_VALUE 0x01009001
typedef struct {
    unsigned long NDP : 8;
    unsigned long PSM : 1;
    unsigned long Res0 : 2;
    unsigned long OCPM : 1;
    unsigned long NOCP : 1;
    unsigned long Res1 : 19;
} sM2L31_USBH_HcRhDescriptorA;

typedef union {
    sM2L31_USBH_HcRhDescriptorA Bit;
    unsigned long  All;
} uM2L31_USBH_HcRhDescriptorA;

#define M2L31_USBH_HcRhDescriptorB_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 16;
    unsigned long PPCM : 16;
} sM2L31_USBH_HcRhDescriptorB;

typedef union {
    sM2L31_USBH_HcRhDescriptorB Bit;
    unsigned long  All;
} uM2L31_USBH_HcRhDescriptorB;

#define M2L31_USBH_HcRhStatus_RESET_VALUE 0x00000000
typedef struct {
    unsigned long LPS : 1;
    unsigned long OCI : 1;
    unsigned long Res0 : 13;
    unsigned long DRWE : 1;
    unsigned long LPSC : 1;
    unsigned long OCIC : 1;
    unsigned long Res1 : 13;
    unsigned long CRWE : 1;
} sM2L31_USBH_HcRhStatus;

typedef union {
    sM2L31_USBH_HcRhStatus Bit;
    unsigned long  All;
} uM2L31_USBH_HcRhStatus;

#define M2L31_USBH_HcRhPortStatus1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CCS : 1;
    unsigned long PES : 1;
    unsigned long PSS : 1;
    unsigned long POCI : 1;
    unsigned long PRS : 1;
    unsigned long Res0 : 3;
    unsigned long PPS : 1;
    unsigned long LSDA : 1;
    unsigned long Res1 : 6;
    unsigned long CSC : 1;
    unsigned long PESC : 1;
    unsigned long PSSC : 1;
    unsigned long OCIC : 1;
    unsigned long PRSC : 1;
    unsigned long Res2 : 11;
} sM2L31_USBH_HcRhPortStatus1;

typedef union {
    sM2L31_USBH_HcRhPortStatus1 Bit;
    unsigned long  All;
} uM2L31_USBH_HcRhPortStatus1;

#define M2L31_USBH_HcPhyControl_RESET_VALUE 0x080F0000
typedef struct {
    unsigned long Res0 : 27;
    unsigned long STBYEN : 1;
    unsigned long Res1 : 4;
} sM2L31_USBH_HcPhyControl;

typedef union {
    sM2L31_USBH_HcPhyControl Bit;
    unsigned long  All;
} uM2L31_USBH_HcPhyControl;

#define M2L31_USBH_HcMiscControl_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long ABORT : 1;
    unsigned long Res1 : 1;
    unsigned long OCAL : 1;
    unsigned long PPCAL : 1;
    unsigned long Res2 : 11;
    unsigned long DPRT1 : 1;
    unsigned long Res3 : 15;
} sM2L31_USBH_HcMiscControl;

typedef union {
    sM2L31_USBH_HcMiscControl Bit;
    unsigned long  All;
} uM2L31_USBH_HcMiscControl;

typedef struct {
    uM2L31_USBH_HcRevision M2L31_USBH_HcRevision; // Offset: 0x0
    uM2L31_USBH_HcControl M2L31_USBH_HcControl; // Offset: 0x4
    uM2L31_USBH_HcCommandStatus M2L31_USBH_HcCommandStatus; // Offset: 0x8
    uM2L31_USBH_HcInterruptStatus M2L31_USBH_HcInterruptStatus; // Offset: 0xc
    uM2L31_USBH_HcInterruptEnable M2L31_USBH_HcInterruptEnable; // Offset: 0x10
    uM2L31_USBH_HcInterruptDisable M2L31_USBH_HcInterruptDisable; // Offset: 0x14
    uM2L31_USBH_HcHCCA M2L31_USBH_HcHCCA; // Offset: 0x18
    uM2L31_USBH_HcPeriodCurrentED M2L31_USBH_HcPeriodCurrentED; // Offset: 0x1c
    uM2L31_USBH_HcControlHeadED M2L31_USBH_HcControlHeadED; // Offset: 0x20
    uM2L31_USBH_HcControlCurrentED M2L31_USBH_HcControlCurrentED; // Offset: 0x24
    uM2L31_USBH_HcBulkHeadED M2L31_USBH_HcBulkHeadED; // Offset: 0x28
    uM2L31_USBH_HcBulkCurrentED M2L31_USBH_HcBulkCurrentED; // Offset: 0x2c
    uM2L31_USBH_HcDoneHead M2L31_USBH_HcDoneHead; // Offset: 0x30
    uM2L31_USBH_HcFmInterval M2L31_USBH_HcFmInterval; // Offset: 0x34
    uM2L31_USBH_HcFmRemaining M2L31_USBH_HcFmRemaining; // Offset: 0x38
    uM2L31_USBH_HcFmNumber M2L31_USBH_HcFmNumber; // Offset: 0x3c
    uM2L31_USBH_HcPeriodicStart M2L31_USBH_HcPeriodicStart; // Offset: 0x40
    uM2L31_USBH_HcLSThreshold M2L31_USBH_HcLSThreshold; // Offset: 0x44
    uM2L31_USBH_HcRhDescriptorA M2L31_USBH_HcRhDescriptorA; // Offset: 0x48
    uM2L31_USBH_HcRhDescriptorB M2L31_USBH_HcRhDescriptorB; // Offset: 0x4c
    uM2L31_USBH_HcRhStatus M2L31_USBH_HcRhStatus; // Offset: 0x50
    unsigned long Reserved0;
    uM2L31_USBH_HcRhPortStatus1 M2L31_USBH_HcRhPortStatus1; // Offset: 0x58
    unsigned long Reserved1;
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
    uM2L31_USBH_HcPhyControl M2L31_USBH_HcPhyControl; // Offset: 0x200
    uM2L31_USBH_HcMiscControl M2L31_USBH_HcMiscControl; // Offset: 0x204
} sM2L31_USBH;

