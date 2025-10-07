// Base Addres of SYS = 0x40000000

#define M2L31_SYS_SYS_PDID_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDID : 32;
} sM2L31_SYS_SYS_PDID;

typedef union {
    sM2L31_SYS_SYS_PDID Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_PDID;

#define M2L31_SYS_SYS_RSTSTS_RESET_VALUE 0x00000043
typedef struct {
    unsigned long PORF : 1;
    unsigned long PINRF : 1;
    unsigned long WDTRF : 1;
    unsigned long LVRF : 1;
    unsigned long BODRF : 1;
    unsigned long SYSRF : 1;
    unsigned long HRESETRF : 1;
    unsigned long CPURF : 1;
    unsigned long CPULKRF : 1;
    unsigned long Res0 : 23;
} sM2L31_SYS_SYS_RSTSTS;

typedef union {
    sM2L31_SYS_SYS_RSTSTS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_RSTSTS;

#define M2L31_SYS_SYS_IPRST0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CHIPRST : 1;
    unsigned long CPURST : 1;
    unsigned long PDMA0RST : 1;
    unsigned long EBIRST : 1;
    unsigned long USBHRST : 1;
    unsigned long Res0 : 2;
    unsigned long CRCRST : 1;
    unsigned long Res1 : 4;
    unsigned long CRPTRST : 1;
    unsigned long Res2 : 7;
    unsigned long CANFD0RST : 1;
    unsigned long CANFD1RST : 1;
    unsigned long Res3 : 10;
} sM2L31_SYS_SYS_IPRST0;

typedef union {
    sM2L31_SYS_SYS_IPRST0 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_IPRST0;

#define M2L31_SYS_SYS_IPRST1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long GPIORST : 1;
    unsigned long TMR0RST : 1;
    unsigned long TMR1RST : 1;
    unsigned long TMR2RST : 1;
    unsigned long TMR3RST : 1;
    unsigned long Res1 : 1;
    unsigned long ACMP01RST : 1;
    unsigned long I2C0RST : 1;
    unsigned long I2C1RST : 1;
    unsigned long I2C2RST : 1;
    unsigned long I2C3RST : 1;
    unsigned long QSPI0RST : 1;
    unsigned long SPI0RST : 1;
    unsigned long SPI1RST : 1;
    unsigned long SPI2RST : 1;
    unsigned long UART0RST : 1;
    unsigned long UART1RST : 1;
    unsigned long UART2RST : 1;
    unsigned long UART3RST : 1;
    unsigned long UART4RST : 1;
    unsigned long UART5RST : 1;
    unsigned long UART6RST : 1;
    unsigned long UART7RST : 1;
    unsigned long Res2 : 2;
    unsigned long OTGRST : 1;
    unsigned long USBDRST : 1;
    unsigned long EADC0RST : 1;
    unsigned long Res3 : 2;
    unsigned long TRNGRST : 1;
} sM2L31_SYS_SYS_IPRST1;

typedef union {
    sM2L31_SYS_SYS_IPRST1 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_IPRST1;

#define M2L31_SYS_SYS_IPRST2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 6;
    unsigned long SPI3RST : 1;
    unsigned long Res1 : 1;
    unsigned long USCI0RST : 1;
    unsigned long USCI1RST : 1;
    unsigned long Res2 : 1;
    unsigned long WWDTRST : 1;
    unsigned long DACRST : 1;
    unsigned long Res3 : 3;
    unsigned long EPWM0RST : 1;
    unsigned long EPWM1RST : 1;
    unsigned long Res4 : 4;
    unsigned long EQEI0RST : 1;
    unsigned long EQEI1RST : 1;
    unsigned long Res5 : 1;
    unsigned long TKRST : 1;
    unsigned long ECAP0RST : 1;
    unsigned long ECAP1RST : 1;
    unsigned long Res6 : 4;
} sM2L31_SYS_SYS_IPRST2;

typedef union {
    sM2L31_SYS_SYS_IPRST2 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_IPRST2;

#define M2L31_SYS_SYS_BODCTL_RESET_VALUE 0x00008380
typedef struct {
    unsigned long BODEN : 1;
    unsigned long Res0 : 2;
    unsigned long BODRSTEN : 1;
    unsigned long BODIF : 1;
    unsigned long BODLPM : 1;
    unsigned long BODOUT : 1;
    unsigned long LVREN : 1;
    unsigned long BODDGSEL : 3;
    unsigned long Res1 : 1;
    unsigned long LVRDGSEL : 3;
    unsigned long LVRRDY : 1;
    unsigned long BODVL : 4;
    unsigned long Res2 : 12;
} sM2L31_SYS_SYS_BODCTL;

typedef union {
    sM2L31_SYS_SYS_BODCTL Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_BODCTL;

#define M2L31_SYS_SYS_IVSCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VTEMPEN : 1;
    unsigned long VBATUGEN : 1;
    unsigned long AVDDDIV4EN : 1;
    unsigned long Res0 : 1;
    unsigned long VTEMPSEL : 1;
    unsigned long Res1 : 2;
    unsigned long ADCCSEL : 1;
    unsigned long Res2 : 24;
} sM2L31_SYS_SYS_IVSCTL;

typedef union {
    sM2L31_SYS_SYS_IVSCTL Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_IVSCTL;

#define M2L31_SYS_SYS_IPRST3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 7;
    unsigned long ACMP2RST : 1;
    unsigned long PWM0RST : 1;
    unsigned long PWM1RST : 1;
    unsigned long Res1 : 5;
    unsigned long UTCPD0RST : 1;
    unsigned long Res2 : 16;
} sM2L31_SYS_SYS_IPRST3;

typedef union {
    sM2L31_SYS_SYS_IPRST3 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_IPRST3;

#define M2L31_SYS_SYS_VREFCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VREFCTL : 5;
    unsigned long Res0 : 1;
    unsigned long PRELOAD_SEL : 2;
    unsigned long Res1 : 16;
    unsigned long VBGFEN : 1;
    unsigned long Res2 : 7;
} sM2L31_SYS_SYS_VREFCTL;

typedef union {
    sM2L31_SYS_SYS_VREFCTL Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_VREFCTL;

#define M2L31_SYS_SYS_USBPHY_RESET_VALUE 0x00030007
typedef struct {
    unsigned long USBROLE : 2;
    unsigned long SBO : 1;
    unsigned long Res0 : 5;
    unsigned long USBEN : 1;
    unsigned long Res1 : 23;
} sM2L31_SYS_SYS_USBPHY;

typedef union {
    sM2L31_SYS_SYS_USBPHY Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_USBPHY;

#define M2L31_SYS_SYS_UTCPDCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long IOMODE : 1;
    unsigned long POREN0 : 1;
    unsigned long Res0 : 6;
    unsigned long PD0VBDSS : 3;
    unsigned long Res1 : 1;
    unsigned long UDVBDETS : 1;
    unsigned long Res2 : 19;
} sM2L31_SYS_SYS_UTCPDCTL;

typedef union {
    sM2L31_SYS_SYS_UTCPDCTL Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_UTCPDCTL;

#define M2L31_SYS_SYS_GPA_MFOS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MFOS0 : 1;
    unsigned long MFOS1 : 1;
    unsigned long MFOS2 : 1;
    unsigned long MFOS3 : 1;
    unsigned long MFOS4 : 1;
    unsigned long MFOS5 : 1;
    unsigned long MFOS6 : 1;
    unsigned long MFOS7 : 1;
    unsigned long MFOS8 : 1;
    unsigned long MFOS9 : 1;
    unsigned long MFOS10 : 1;
    unsigned long MFOS11 : 1;
    unsigned long MFOS12 : 1;
    unsigned long MFOS13 : 1;
    unsigned long MFOS14 : 1;
    unsigned long MFOS15 : 1;
    unsigned long Res0 : 16;
} sM2L31_SYS_SYS_GPA_MFOS;

typedef union {
    sM2L31_SYS_SYS_GPA_MFOS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPA_MFOS;

#define M2L31_SYS_SYS_GPB_MFOS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_SYS_SYS_GPB_MFOS;

typedef union {
    sM2L31_SYS_SYS_GPB_MFOS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPB_MFOS;

#define M2L31_SYS_SYS_GPC_MFOS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_SYS_SYS_GPC_MFOS;

typedef union {
    sM2L31_SYS_SYS_GPC_MFOS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPC_MFOS;

#define M2L31_SYS_SYS_GPD_MFOS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_SYS_SYS_GPD_MFOS;

typedef union {
    sM2L31_SYS_SYS_GPD_MFOS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPD_MFOS;

#define M2L31_SYS_SYS_GPE_MFOS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_SYS_SYS_GPE_MFOS;

typedef union {
    sM2L31_SYS_SYS_GPE_MFOS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPE_MFOS;

#define M2L31_SYS_SYS_GPF_MFOS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_SYS_SYS_GPF_MFOS;

typedef union {
    sM2L31_SYS_SYS_GPF_MFOS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPF_MFOS;

#define M2L31_SYS_SYS_GPG_MFOS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_SYS_SYS_GPG_MFOS;

typedef union {
    sM2L31_SYS_SYS_GPG_MFOS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPG_MFOS;

#define M2L31_SYS_SYS_GPH_MFOS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_SYS_SYS_GPH_MFOS;

typedef union {
    sM2L31_SYS_SYS_GPH_MFOS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPH_MFOS;

#define M2L31_SYS_SYS_MIRCTCTL_RESET_VALUE 0x00080000
typedef struct {
    unsigned long FREQSEL : 2;
    unsigned long ACCURSEL : 2;
    unsigned long LOOPSEL : 2;
    unsigned long RETRYCNT : 2;
    unsigned long CESTOPEN : 1;
    unsigned long BOUNDEN : 1;
    unsigned long REFCKSEL : 1;
    unsigned long Res0 : 5;
    unsigned long BOUNDARY : 5;
    unsigned long Res1 : 11;
} sM2L31_SYS_SYS_MIRCTCTL;

typedef union {
    sM2L31_SYS_SYS_MIRCTCTL Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_MIRCTCTL;

#define M2L31_SYS_SYS_MIRCTIEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long TFAILIEN : 1;
    unsigned long CLKEIEN : 1;
    unsigned long Res1 : 29;
} sM2L31_SYS_SYS_MIRCTIEN;

typedef union {
    sM2L31_SYS_SYS_MIRCTIEN Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_MIRCTIEN;

#define M2L31_SYS_SYS_MIRCTISTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FREQLOCK : 1;
    unsigned long TFAILIF : 1;
    unsigned long CLKERRIF : 1;
    unsigned long OVBDIF : 1;
    unsigned long Res0 : 28;
} sM2L31_SYS_SYS_MIRCTISTS;

typedef union {
    sM2L31_SYS_SYS_MIRCTISTS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_MIRCTISTS;

#define M2L31_SYS_SYS_SRAM_INTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PERRIEN : 1;
    unsigned long Res0 : 31;
} sM2L31_SYS_SYS_SRAM_INTCTL;

typedef union {
    sM2L31_SYS_SYS_SRAM_INTCTL Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_SRAM_INTCTL;

#define M2L31_SYS_SYS_SRAM_STATUS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PERRIF : 1;
    unsigned long Res0 : 31;
} sM2L31_SYS_SYS_SRAM_STATUS;

typedef union {
    sM2L31_SYS_SYS_SRAM_STATUS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_SRAM_STATUS;

#define M2L31_SYS_SYS_SRAM_ERRADDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ERRADDR : 32;
} sM2L31_SYS_SYS_SRAM_ERRADDR;

typedef union {
    sM2L31_SYS_SYS_SRAM_ERRADDR Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_SRAM_ERRADDR;

#define M2L31_SYS_SYS_SRAM_BISTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SRBIST0 : 1;
    unsigned long SRBIST1 : 1;
    unsigned long CRBIST : 1;
    unsigned long CANFDBIST : 1;
    unsigned long USBBIST : 1;
    unsigned long Res0 : 6;
    unsigned long LPSRBIST : 1;
    unsigned long Res1 : 20;
} sM2L31_SYS_SYS_SRAM_BISTCTL;

typedef union {
    sM2L31_SYS_SYS_SRAM_BISTCTL Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_SRAM_BISTCTL;

#define M2L31_SYS_SYS_SRAM_BISTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SRBISTEF0 : 1;
    unsigned long SRBISTEF1 : 1;
    unsigned long CRBISTEF : 1;
    unsigned long CANBEF : 1;
    unsigned long USBBEF : 1;
    unsigned long Res0 : 6;
    unsigned long LPSRBEF : 1;
    unsigned long Res1 : 4;
    unsigned long SRBEND0 : 1;
    unsigned long SRBEND1 : 1;
    unsigned long CRBEND : 1;
    unsigned long CANBEND : 1;
    unsigned long USBBEND : 1;
    unsigned long Res2 : 6;
    unsigned long LPSRBEND : 1;
    unsigned long Res3 : 4;
} sM2L31_SYS_SYS_SRAM_BISTSTS;

typedef union {
    sM2L31_SYS_SYS_SRAM_BISTSTS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_SRAM_BISTSTS;

#define M2L31_SYS_SYS_SRAMPC0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SRAM0PM : 3;
    unsigned long Res0 : 1;
    unsigned long SRAM1PM : 3;
    unsigned long Res1 : 1;
    unsigned long SRAM2PM : 3;
    unsigned long Res2 : 1;
    unsigned long SRAM3PM : 3;
    unsigned long Res3 : 1;
    unsigned long SRAM4PM : 3;
    unsigned long Res4 : 1;
    unsigned long SRAM5PM : 3;
    unsigned long Res5 : 1;
    unsigned long SRAM6PM : 3;
    unsigned long Res6 : 4;
    unsigned long PCBUSY : 1;
} sM2L31_SYS_SYS_SRAMPC0;

typedef union {
    sM2L31_SYS_SYS_SRAMPC0 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_SRAMPC0;

#define M2L31_SYS_SYS_HIRCTCTL_RESET_VALUE 0x00080000
typedef struct {
    unsigned long FREQSEL : 2;
    unsigned long ACCURSEL : 2;
    unsigned long LOOPSEL : 2;
    unsigned long RETRYCNT : 2;
    unsigned long CESTOPEN : 1;
    unsigned long BOUNDEN : 1;
    unsigned long REFCKSEL : 1;
    unsigned long Res0 : 5;
    unsigned long BOUNDARY : 5;
    unsigned long Res1 : 11;
} sM2L31_SYS_SYS_HIRCTCTL;

typedef union {
    sM2L31_SYS_SYS_HIRCTCTL Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_HIRCTCTL;

#define M2L31_SYS_SYS_HIRCTIEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long TFAILIEN : 1;
    unsigned long CLKEIEN : 1;
    unsigned long Res1 : 29;
} sM2L31_SYS_SYS_HIRCTIEN;

typedef union {
    sM2L31_SYS_SYS_HIRCTIEN Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_HIRCTIEN;

#define M2L31_SYS_SYS_HIRCTISTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FREQLOCK : 1;
    unsigned long TFAILIF : 1;
    unsigned long CLKERRIF : 1;
    unsigned long OVBDIF : 1;
    unsigned long Res0 : 28;
} sM2L31_SYS_SYS_HIRCTISTS;

typedef union {
    sM2L31_SYS_SYS_HIRCTISTS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_HIRCTISTS;

#define M2L31_SYS_SYS_IRCTCTL_RESET_VALUE 0x00080000
typedef struct {
    unsigned long FREQSEL : 2;
    unsigned long ACCURSEL : 2;
    unsigned long LOOPSEL : 2;
    unsigned long RETRYCNT : 2;
    unsigned long CESTOPEN : 1;
    unsigned long BOUNDEN : 1;
    unsigned long REFCKSEL : 1;
    unsigned long Res0 : 5;
    unsigned long BOUNDARY : 5;
    unsigned long Res1 : 11;
} sM2L31_SYS_SYS_IRCTCTL;

typedef union {
    sM2L31_SYS_SYS_IRCTCTL Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_IRCTCTL;

#define M2L31_SYS_SYS_IRCTIEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 1;
    unsigned long TFAILIEN : 1;
    unsigned long CLKEIEN : 1;
    unsigned long Res1 : 29;
} sM2L31_SYS_SYS_IRCTIEN;

typedef union {
    sM2L31_SYS_SYS_IRCTIEN Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_IRCTIEN;

#define M2L31_SYS_SYS_IRCTISTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FREQLOCK : 1;
    unsigned long TFAILIF : 1;
    unsigned long CLKERRIF : 1;
    unsigned long OVBDIF : 1;
    unsigned long Res0 : 28;
} sM2L31_SYS_SYS_IRCTISTS;

typedef union {
    sM2L31_SYS_SYS_IRCTISTS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_IRCTISTS;

#define M2L31_SYS_SYS_RAMPGCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long RRAMPGEN0 : 1;
    unsigned long RRAMPGDN0 : 1;
    unsigned long RRAMBUSY0 : 1;
    unsigned long Res0 : 1;
    unsigned long RRAMPGEN1 : 1;
    unsigned long RRAMPGDN1 : 1;
    unsigned long RRAMBUSY1 : 1;
    unsigned long Res1 : 25;
} sM2L31_SYS_SYS_RAMPGCTL;

typedef union {
    sM2L31_SYS_SYS_RAMPGCTL Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_RAMPGCTL;

#define M2L31_SYS_SYS_REGLCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long REGLCTL : 8;
    unsigned long Res0 : 24;
} sM2L31_SYS_SYS_REGLCTL;

typedef union {
    sM2L31_SYS_SYS_REGLCTL Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_REGLCTL;

#define M2L31_SYS_SYS_PORDISAN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long POROFFAN : 16;
    unsigned long Res0 : 16;
} sM2L31_SYS_SYS_PORDISAN;

typedef union {
    sM2L31_SYS_SYS_PORDISAN Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_PORDISAN;

#define M2L31_SYS_SYS_CSERVER_RESET_VALUE 0x00000000
typedef struct {
    unsigned long VERSION : 8;
    unsigned long Res0 : 24;
} sM2L31_SYS_SYS_CSERVER;

typedef union {
    sM2L31_SYS_SYS_CSERVER Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_CSERVER;

#define M2L31_SYS_SYS_PLCTL_RESET_VALUE 0x00000001
typedef struct {
    unsigned long PLSEL : 3;
    unsigned long PLKEEP : 1;
    unsigned long Res0 : 28;
} sM2L31_SYS_SYS_PLCTL;

typedef union {
    sM2L31_SYS_SYS_PLCTL Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_PLCTL;

#define M2L31_SYS_SYS_PLSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PLCBUSY : 1;
    unsigned long Res0 : 7;
    unsigned long PLSTATUS : 3;
    unsigned long Res1 : 21;
} sM2L31_SYS_SYS_PLSTS;

typedef union {
    sM2L31_SYS_SYS_PLSTS Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_PLSTS;

#define M2L31_SYS_SYS_INIVTOR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 10;
    unsigned long INIVTOR : 22;
} sM2L31_SYS_SYS_INIVTOR;

typedef union {
    sM2L31_SYS_SYS_INIVTOR Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_INIVTOR;

#define M2L31_SYS_SYS_GPA_MFP0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA0MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PA1MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PA2MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PA3MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPA_MFP0;

typedef union {
    sM2L31_SYS_SYS_GPA_MFP0 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPA_MFP0;

#define M2L31_SYS_SYS_GPA_MFP1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA4MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PA5MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PA6MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PA7MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPA_MFP1;

typedef union {
    sM2L31_SYS_SYS_GPA_MFP1 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPA_MFP1;

#define M2L31_SYS_SYS_GPA_MFP2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA8MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PA9MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PA10MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PA11MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPA_MFP2;

typedef union {
    sM2L31_SYS_SYS_GPA_MFP2 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPA_MFP2;

#define M2L31_SYS_SYS_GPA_MFP3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PA12MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PA13MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PA14MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PA15MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPA_MFP3;

typedef union {
    sM2L31_SYS_SYS_GPA_MFP3 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPA_MFP3;

#define M2L31_SYS_SYS_GPB_MFP0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PB0MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PB1MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PB2MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PB3MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPB_MFP0;

typedef union {
    sM2L31_SYS_SYS_GPB_MFP0 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPB_MFP0;

#define M2L31_SYS_SYS_GPB_MFP1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PB4MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PB5MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PB6MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PB7MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPB_MFP1;

typedef union {
    sM2L31_SYS_SYS_GPB_MFP1 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPB_MFP1;

#define M2L31_SYS_SYS_GPB_MFP2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PB8MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PB9MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PB10MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PB11MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPB_MFP2;

typedef union {
    sM2L31_SYS_SYS_GPB_MFP2 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPB_MFP2;

#define M2L31_SYS_SYS_GPB_MFP3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PB12MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PB13MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PB14MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PB15MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPB_MFP3;

typedef union {
    sM2L31_SYS_SYS_GPB_MFP3 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPB_MFP3;

#define M2L31_SYS_SYS_GPC_MFP0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PC0MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PC1MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PC2MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PC3MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPC_MFP0;

typedef union {
    sM2L31_SYS_SYS_GPC_MFP0 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPC_MFP0;

#define M2L31_SYS_SYS_GPC_MFP1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PC4MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PC5MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PC6MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PC7MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPC_MFP1;

typedef union {
    sM2L31_SYS_SYS_GPC_MFP1 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPC_MFP1;

#define M2L31_SYS_SYS_GPC_MFP2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PC8MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PC9MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PC10MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PC11MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPC_MFP2;

typedef union {
    sM2L31_SYS_SYS_GPC_MFP2 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPC_MFP2;

#define M2L31_SYS_SYS_GPC_MFP3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PC12MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PC13MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PC14MFP : 5;
    unsigned long Res2 : 11;
} sM2L31_SYS_SYS_GPC_MFP3;

typedef union {
    sM2L31_SYS_SYS_GPC_MFP3 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPC_MFP3;

#define M2L31_SYS_SYS_GPD_MFP0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PD0MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PD1MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PD2MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PD3MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPD_MFP0;

typedef union {
    sM2L31_SYS_SYS_GPD_MFP0 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPD_MFP0;

#define M2L31_SYS_SYS_GPD_MFP1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PD4MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PD5MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PD6MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PD7MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPD_MFP1;

typedef union {
    sM2L31_SYS_SYS_GPD_MFP1 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPD_MFP1;

#define M2L31_SYS_SYS_GPD_MFP2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PD8MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PD9MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PD10MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PD11MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPD_MFP2;

typedef union {
    sM2L31_SYS_SYS_GPD_MFP2 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPD_MFP2;

#define M2L31_SYS_SYS_GPD_MFP3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PD12MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PD13MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PD14MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PD15MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPD_MFP3;

typedef union {
    sM2L31_SYS_SYS_GPD_MFP3 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPD_MFP3;

#define M2L31_SYS_SYS_GPE_MFP0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PE0MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PE1MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PE2MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PE3MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPE_MFP0;

typedef union {
    sM2L31_SYS_SYS_GPE_MFP0 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPE_MFP0;

#define M2L31_SYS_SYS_GPE_MFP1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PE4MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PE5MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PE6MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PE7MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPE_MFP1;

typedef union {
    sM2L31_SYS_SYS_GPE_MFP1 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPE_MFP1;

#define M2L31_SYS_SYS_GPE_MFP2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PE8MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PE9MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PE10MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PE11MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPE_MFP2;

typedef union {
    sM2L31_SYS_SYS_GPE_MFP2 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPE_MFP2;

#define M2L31_SYS_SYS_GPE_MFP3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PE12MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PE13MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PE14MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PE15MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPE_MFP3;

typedef union {
    sM2L31_SYS_SYS_GPE_MFP3 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPE_MFP3;

#define M2L31_SYS_SYS_GPF_MFP0_RESET_VALUE 0x00000E0E
typedef struct {
    unsigned long PF0MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PF1MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PF2MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PF3MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPF_MFP0;

typedef union {
    sM2L31_SYS_SYS_GPF_MFP0 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPF_MFP0;

#define M2L31_SYS_SYS_GPF_MFP1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PF4MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PF5MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PF6MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PF7MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPF_MFP1;

typedef union {
    sM2L31_SYS_SYS_GPF_MFP1 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPF_MFP1;

#define M2L31_SYS_SYS_GPF_MFP2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PF8MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PF9MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PF10MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PF11MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPF_MFP2;

typedef union {
    sM2L31_SYS_SYS_GPF_MFP2 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPF_MFP2;

#define M2L31_SYS_SYS_GPG_MFP0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 16;
    unsigned long PG2MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PG3MFP : 5;
    unsigned long Res2 : 3;
} sM2L31_SYS_SYS_GPG_MFP0;

typedef union {
    sM2L31_SYS_SYS_GPG_MFP0 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPG_MFP0;

#define M2L31_SYS_SYS_GPG_MFP1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PG4MFP : 5;
    unsigned long Res0 : 27;
} sM2L31_SYS_SYS_GPG_MFP1;

typedef union {
    sM2L31_SYS_SYS_GPG_MFP1 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPG_MFP1;

#define M2L31_SYS_SYS_GPG_MFP2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 8;
    unsigned long PG9MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PG10MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PG11MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPG_MFP2;

typedef union {
    sM2L31_SYS_SYS_GPG_MFP2 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPG_MFP2;

#define M2L31_SYS_SYS_GPG_MFP3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PG12MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PG13MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PG14MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PG15MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPG_MFP3;

typedef union {
    sM2L31_SYS_SYS_GPG_MFP3 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPG_MFP3;

#define M2L31_SYS_SYS_GPH_MFP1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PH4MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PH5MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PH6MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PH7MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPH_MFP1;

typedef union {
    sM2L31_SYS_SYS_GPH_MFP1 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPH_MFP1;

#define M2L31_SYS_SYS_GPH_MFP2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PH8MFP : 5;
    unsigned long Res0 : 3;
    unsigned long PH9MFP : 5;
    unsigned long Res1 : 3;
    unsigned long PH10MFP : 5;
    unsigned long Res2 : 3;
    unsigned long PH11MFP : 5;
    unsigned long Res3 : 3;
} sM2L31_SYS_SYS_GPH_MFP2;

typedef union {
    sM2L31_SYS_SYS_GPH_MFP2 Bit;
    unsigned long  All;
} uM2L31_SYS_SYS_GPH_MFP2;

typedef struct {
    uM2L31_SYS_SYS_PDID M2L31_SYS_SYS_PDID; // Offset: 0x0
    uM2L31_SYS_SYS_RSTSTS M2L31_SYS_SYS_RSTSTS; // Offset: 0x4
    uM2L31_SYS_SYS_IPRST0 M2L31_SYS_SYS_IPRST0; // Offset: 0x8
    uM2L31_SYS_SYS_IPRST1 M2L31_SYS_SYS_IPRST1; // Offset: 0xc
    uM2L31_SYS_SYS_IPRST2 M2L31_SYS_SYS_IPRST2; // Offset: 0x10
    unsigned long Reserved0;
    uM2L31_SYS_SYS_BODCTL M2L31_SYS_SYS_BODCTL; // Offset: 0x18
    uM2L31_SYS_SYS_IVSCTL M2L31_SYS_SYS_IVSCTL; // Offset: 0x1c
    uM2L31_SYS_SYS_IPRST3 M2L31_SYS_SYS_IPRST3; // Offset: 0x20
    unsigned long Reserved1;
    uM2L31_SYS_SYS_VREFCTL M2L31_SYS_SYS_VREFCTL; // Offset: 0x28
    uM2L31_SYS_SYS_USBPHY M2L31_SYS_SYS_USBPHY; // Offset: 0x2c
    uM2L31_SYS_SYS_UTCPDCTL M2L31_SYS_SYS_UTCPDCTL; // Offset: 0x30
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
    uM2L31_SYS_SYS_GPA_MFOS M2L31_SYS_SYS_GPA_MFOS; // Offset: 0x80
    uM2L31_SYS_SYS_GPB_MFOS M2L31_SYS_SYS_GPB_MFOS; // Offset: 0x84
    uM2L31_SYS_SYS_GPC_MFOS M2L31_SYS_SYS_GPC_MFOS; // Offset: 0x88
    uM2L31_SYS_SYS_GPD_MFOS M2L31_SYS_SYS_GPD_MFOS; // Offset: 0x8c
    uM2L31_SYS_SYS_GPE_MFOS M2L31_SYS_SYS_GPE_MFOS; // Offset: 0x90
    uM2L31_SYS_SYS_GPF_MFOS M2L31_SYS_SYS_GPF_MFOS; // Offset: 0x94
    uM2L31_SYS_SYS_GPG_MFOS M2L31_SYS_SYS_GPG_MFOS; // Offset: 0x98
    uM2L31_SYS_SYS_GPH_MFOS M2L31_SYS_SYS_GPH_MFOS; // Offset: 0x9c
    unsigned long Reserved21;
    unsigned long Reserved22;
    unsigned long Reserved23;
    unsigned long Reserved24;
    uM2L31_SYS_SYS_MIRCTCTL M2L31_SYS_SYS_MIRCTCTL; // Offset: 0xb0
    uM2L31_SYS_SYS_MIRCTIEN M2L31_SYS_SYS_MIRCTIEN; // Offset: 0xb4
    uM2L31_SYS_SYS_MIRCTISTS M2L31_SYS_SYS_MIRCTISTS; // Offset: 0xb8
    unsigned long Reserved25;
    uM2L31_SYS_SYS_SRAM_INTCTL M2L31_SYS_SYS_SRAM_INTCTL; // Offset: 0xc0
    uM2L31_SYS_SYS_SRAM_STATUS M2L31_SYS_SYS_SRAM_STATUS; // Offset: 0xc4
    uM2L31_SYS_SYS_SRAM_ERRADDR M2L31_SYS_SYS_SRAM_ERRADDR; // Offset: 0xc8
    unsigned long Reserved26;
    uM2L31_SYS_SYS_SRAM_BISTCTL M2L31_SYS_SYS_SRAM_BISTCTL; // Offset: 0xd0
    uM2L31_SYS_SYS_SRAM_BISTSTS M2L31_SYS_SYS_SRAM_BISTSTS; // Offset: 0xd4
    unsigned long Reserved27;
    uM2L31_SYS_SYS_SRAMPC0 M2L31_SYS_SYS_SRAMPC0; // Offset: 0xdc
    unsigned long Reserved28;
    uM2L31_SYS_SYS_HIRCTCTL M2L31_SYS_SYS_HIRCTCTL; // Offset: 0xe4
    uM2L31_SYS_SYS_HIRCTIEN M2L31_SYS_SYS_HIRCTIEN; // Offset: 0xe8
    uM2L31_SYS_SYS_HIRCTISTS M2L31_SYS_SYS_HIRCTISTS; // Offset: 0xec
    uM2L31_SYS_SYS_IRCTCTL M2L31_SYS_SYS_IRCTCTL; // Offset: 0xf0
    uM2L31_SYS_SYS_IRCTIEN M2L31_SYS_SYS_IRCTIEN; // Offset: 0xf4
    uM2L31_SYS_SYS_IRCTISTS M2L31_SYS_SYS_IRCTISTS; // Offset: 0xf8
    uM2L31_SYS_SYS_RAMPGCTL M2L31_SYS_SYS_RAMPGCTL; // Offset: 0xfc
    uM2L31_SYS_SYS_REGLCTL M2L31_SYS_SYS_REGLCTL; // Offset: 0x100
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
    uM2L31_SYS_SYS_PORDISAN M2L31_SYS_SYS_PORDISAN; // Offset: 0x1ec
    unsigned long Reserved87;
    uM2L31_SYS_SYS_CSERVER M2L31_SYS_SYS_CSERVER; // Offset: 0x1f4
    uM2L31_SYS_SYS_PLCTL M2L31_SYS_SYS_PLCTL; // Offset: 0x1f8
    uM2L31_SYS_SYS_PLSTS M2L31_SYS_SYS_PLSTS; // Offset: 0x1fc
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
    uM2L31_SYS_SYS_INIVTOR M2L31_SYS_SYS_INIVTOR; // Offset: 0x310
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
    uM2L31_SYS_SYS_GPA_MFP0 M2L31_SYS_SYS_GPA_MFP0; // Offset: 0x500
    uM2L31_SYS_SYS_GPA_MFP1 M2L31_SYS_SYS_GPA_MFP1; // Offset: 0x504
    uM2L31_SYS_SYS_GPA_MFP2 M2L31_SYS_SYS_GPA_MFP2; // Offset: 0x508
    uM2L31_SYS_SYS_GPA_MFP3 M2L31_SYS_SYS_GPA_MFP3; // Offset: 0x50c
    uM2L31_SYS_SYS_GPB_MFP0 M2L31_SYS_SYS_GPB_MFP0; // Offset: 0x510
    uM2L31_SYS_SYS_GPB_MFP1 M2L31_SYS_SYS_GPB_MFP1; // Offset: 0x514
    uM2L31_SYS_SYS_GPB_MFP2 M2L31_SYS_SYS_GPB_MFP2; // Offset: 0x518
    uM2L31_SYS_SYS_GPB_MFP3 M2L31_SYS_SYS_GPB_MFP3; // Offset: 0x51c
    uM2L31_SYS_SYS_GPC_MFP0 M2L31_SYS_SYS_GPC_MFP0; // Offset: 0x520
    uM2L31_SYS_SYS_GPC_MFP1 M2L31_SYS_SYS_GPC_MFP1; // Offset: 0x524
    uM2L31_SYS_SYS_GPC_MFP2 M2L31_SYS_SYS_GPC_MFP2; // Offset: 0x528
    uM2L31_SYS_SYS_GPC_MFP3 M2L31_SYS_SYS_GPC_MFP3; // Offset: 0x52c
    uM2L31_SYS_SYS_GPD_MFP0 M2L31_SYS_SYS_GPD_MFP0; // Offset: 0x530
    uM2L31_SYS_SYS_GPD_MFP1 M2L31_SYS_SYS_GPD_MFP1; // Offset: 0x534
    uM2L31_SYS_SYS_GPD_MFP2 M2L31_SYS_SYS_GPD_MFP2; // Offset: 0x538
    uM2L31_SYS_SYS_GPD_MFP3 M2L31_SYS_SYS_GPD_MFP3; // Offset: 0x53c
    uM2L31_SYS_SYS_GPE_MFP0 M2L31_SYS_SYS_GPE_MFP0; // Offset: 0x540
    uM2L31_SYS_SYS_GPE_MFP1 M2L31_SYS_SYS_GPE_MFP1; // Offset: 0x544
    uM2L31_SYS_SYS_GPE_MFP2 M2L31_SYS_SYS_GPE_MFP2; // Offset: 0x548
    uM2L31_SYS_SYS_GPE_MFP3 M2L31_SYS_SYS_GPE_MFP3; // Offset: 0x54c
    uM2L31_SYS_SYS_GPF_MFP0 M2L31_SYS_SYS_GPF_MFP0; // Offset: 0x550
    uM2L31_SYS_SYS_GPF_MFP1 M2L31_SYS_SYS_GPF_MFP1; // Offset: 0x554
    uM2L31_SYS_SYS_GPF_MFP2 M2L31_SYS_SYS_GPF_MFP2; // Offset: 0x558
    unsigned long Reserved279;
    uM2L31_SYS_SYS_GPG_MFP0 M2L31_SYS_SYS_GPG_MFP0; // Offset: 0x560
    uM2L31_SYS_SYS_GPG_MFP1 M2L31_SYS_SYS_GPG_MFP1; // Offset: 0x564
    uM2L31_SYS_SYS_GPG_MFP2 M2L31_SYS_SYS_GPG_MFP2; // Offset: 0x568
    uM2L31_SYS_SYS_GPG_MFP3 M2L31_SYS_SYS_GPG_MFP3; // Offset: 0x56c
    unsigned long Reserved280;
    uM2L31_SYS_SYS_GPH_MFP1 M2L31_SYS_SYS_GPH_MFP1; // Offset: 0x574
    uM2L31_SYS_SYS_GPH_MFP2 M2L31_SYS_SYS_GPH_MFP2; // Offset: 0x578
} sM2L31_SYS;

