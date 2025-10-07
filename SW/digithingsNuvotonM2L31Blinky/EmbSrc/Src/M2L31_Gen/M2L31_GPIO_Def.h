// Base Addres of GPIO = 0x40004000

#define M2L31_GPIO_PA_MODE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MODE0 : 2;
    unsigned long MODE1 : 2;
    unsigned long MODE2 : 2;
    unsigned long MODE3 : 2;
    unsigned long MODE4 : 2;
    unsigned long MODE5 : 2;
    unsigned long MODE6 : 2;
    unsigned long MODE7 : 2;
    unsigned long MODE8 : 2;
    unsigned long MODE9 : 2;
    unsigned long MODE10 : 2;
    unsigned long MODE11 : 2;
    unsigned long MODE12 : 2;
    unsigned long MODE13 : 2;
    unsigned long MODE14 : 2;
    unsigned long MODE15 : 2;
} sM2L31_GPIO_PA_MODE;

typedef union {
    sM2L31_GPIO_PA_MODE Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_MODE;

#define M2L31_GPIO_PA_DINOFF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 16;
    unsigned long DINOFF0 : 1;
    unsigned long DINOFF1 : 1;
    unsigned long DINOFF2 : 1;
    unsigned long DINOFF3 : 1;
    unsigned long DINOFF4 : 1;
    unsigned long DINOFF5 : 1;
    unsigned long DINOFF6 : 1;
    unsigned long DINOFF7 : 1;
    unsigned long DINOFF8 : 1;
    unsigned long DINOFF9 : 1;
    unsigned long DINOFF10 : 1;
    unsigned long DINOFF11 : 1;
    unsigned long DINOFF12 : 1;
    unsigned long DINOFF13 : 1;
    unsigned long DINOFF14 : 1;
    unsigned long DINOFF15 : 1;
} sM2L31_GPIO_PA_DINOFF;

typedef union {
    sM2L31_GPIO_PA_DINOFF Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_DINOFF;

#define M2L31_GPIO_PA_DOUT_RESET_VALUE 0x0000FFFF
typedef struct {
    unsigned long DOUT0 : 1;
    unsigned long DOUT1 : 1;
    unsigned long DOUT2 : 1;
    unsigned long DOUT3 : 1;
    unsigned long DOUT4 : 1;
    unsigned long DOUT5 : 1;
    unsigned long DOUT6 : 1;
    unsigned long DOUT7 : 1;
    unsigned long DOUT8 : 1;
    unsigned long DOUT9 : 1;
    unsigned long DOUT10 : 1;
    unsigned long DOUT11 : 1;
    unsigned long DOUT12 : 1;
    unsigned long DOUT13 : 1;
    unsigned long DOUT14 : 1;
    unsigned long DOUT15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PA_DOUT;

typedef union {
    sM2L31_GPIO_PA_DOUT Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_DOUT;

#define M2L31_GPIO_PA_DATMSK_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATMSK0 : 1;
    unsigned long DATMSK1 : 1;
    unsigned long DATMSK2 : 1;
    unsigned long DATMSK3 : 1;
    unsigned long DATMSK4 : 1;
    unsigned long DATMSK5 : 1;
    unsigned long DATMSK6 : 1;
    unsigned long DATMSK7 : 1;
    unsigned long DATMSK8 : 1;
    unsigned long DATMSK9 : 1;
    unsigned long DATMSK10 : 1;
    unsigned long DATMSK11 : 1;
    unsigned long DATMSK12 : 1;
    unsigned long DATMSK13 : 1;
    unsigned long DATMSK14 : 1;
    unsigned long DATMSK15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PA_DATMSK;

typedef union {
    sM2L31_GPIO_PA_DATMSK Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_DATMSK;

#define M2L31_GPIO_PA_PIN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PIN0 : 1;
    unsigned long PIN1 : 1;
    unsigned long PIN2 : 1;
    unsigned long PIN3 : 1;
    unsigned long PIN4 : 1;
    unsigned long PIN5 : 1;
    unsigned long PIN6 : 1;
    unsigned long PIN7 : 1;
    unsigned long PIN8 : 1;
    unsigned long PIN9 : 1;
    unsigned long PIN10 : 1;
    unsigned long PIN11 : 1;
    unsigned long PIN12 : 1;
    unsigned long PIN13 : 1;
    unsigned long PIN14 : 1;
    unsigned long PIN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PA_PIN;

typedef union {
    sM2L31_GPIO_PA_PIN Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_PIN;

#define M2L31_GPIO_PA_DBEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DBEN0 : 1;
    unsigned long DBEN1 : 1;
    unsigned long DBEN2 : 1;
    unsigned long DBEN3 : 1;
    unsigned long DBEN4 : 1;
    unsigned long DBEN5 : 1;
    unsigned long DBEN6 : 1;
    unsigned long DBEN7 : 1;
    unsigned long DBEN8 : 1;
    unsigned long DBEN9 : 1;
    unsigned long DBEN10 : 1;
    unsigned long DBEN11 : 1;
    unsigned long DBEN12 : 1;
    unsigned long DBEN13 : 1;
    unsigned long DBEN14 : 1;
    unsigned long DBEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PA_DBEN;

typedef union {
    sM2L31_GPIO_PA_DBEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_DBEN;

#define M2L31_GPIO_PA_INTTYPE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TYPE0 : 1;
    unsigned long TYPE1 : 1;
    unsigned long TYPE2 : 1;
    unsigned long TYPE3 : 1;
    unsigned long TYPE4 : 1;
    unsigned long TYPE5 : 1;
    unsigned long TYPE6 : 1;
    unsigned long TYPE7 : 1;
    unsigned long TYPE8 : 1;
    unsigned long TYPE9 : 1;
    unsigned long TYPE10 : 1;
    unsigned long TYPE11 : 1;
    unsigned long TYPE12 : 1;
    unsigned long TYPE13 : 1;
    unsigned long TYPE14 : 1;
    unsigned long TYPE15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PA_INTTYPE;

typedef union {
    sM2L31_GPIO_PA_INTTYPE Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_INTTYPE;

#define M2L31_GPIO_PA_INTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FLIEN0 : 1;
    unsigned long FLIEN1 : 1;
    unsigned long FLIEN2 : 1;
    unsigned long FLIEN3 : 1;
    unsigned long FLIEN4 : 1;
    unsigned long FLIEN5 : 1;
    unsigned long FLIEN6 : 1;
    unsigned long FLIEN7 : 1;
    unsigned long FLIEN8 : 1;
    unsigned long FLIEN9 : 1;
    unsigned long FLIEN10 : 1;
    unsigned long FLIEN11 : 1;
    unsigned long FLIEN12 : 1;
    unsigned long FLIEN13 : 1;
    unsigned long FLIEN14 : 1;
    unsigned long FLIEN15 : 1;
    unsigned long RHIEN0 : 1;
    unsigned long RHIEN1 : 1;
    unsigned long RHIEN2 : 1;
    unsigned long RHIEN3 : 1;
    unsigned long RHIEN4 : 1;
    unsigned long RHIEN5 : 1;
    unsigned long RHIEN6 : 1;
    unsigned long RHIEN7 : 1;
    unsigned long RHIEN8 : 1;
    unsigned long RHIEN9 : 1;
    unsigned long RHIEN10 : 1;
    unsigned long RHIEN11 : 1;
    unsigned long RHIEN12 : 1;
    unsigned long RHIEN13 : 1;
    unsigned long RHIEN14 : 1;
    unsigned long RHIEN15 : 1;
} sM2L31_GPIO_PA_INTEN;

typedef union {
    sM2L31_GPIO_PA_INTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_INTEN;

#define M2L31_GPIO_PA_INTSRC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long INTSRC0 : 1;
    unsigned long INTSRC1 : 1;
    unsigned long INTSRC2 : 1;
    unsigned long INTSRC3 : 1;
    unsigned long INTSRC4 : 1;
    unsigned long INTSRC5 : 1;
    unsigned long INTSRC6 : 1;
    unsigned long INTSRC7 : 1;
    unsigned long INTSRC8 : 1;
    unsigned long INTSRC9 : 1;
    unsigned long INTSRC10 : 1;
    unsigned long INTSRC11 : 1;
    unsigned long INTSRC12 : 1;
    unsigned long INTSRC13 : 1;
    unsigned long INTSRC14 : 1;
    unsigned long INTSRC15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PA_INTSRC;

typedef union {
    sM2L31_GPIO_PA_INTSRC Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_INTSRC;

#define M2L31_GPIO_PA_SMTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SMTEN0 : 1;
    unsigned long SMTEN1 : 1;
    unsigned long SMTEN2 : 1;
    unsigned long SMTEN3 : 1;
    unsigned long SMTEN4 : 1;
    unsigned long SMTEN5 : 1;
    unsigned long SMTEN6 : 1;
    unsigned long SMTEN7 : 1;
    unsigned long SMTEN8 : 1;
    unsigned long SMTEN9 : 1;
    unsigned long SMTEN10 : 1;
    unsigned long SMTEN11 : 1;
    unsigned long SMTEN12 : 1;
    unsigned long SMTEN13 : 1;
    unsigned long SMTEN14 : 1;
    unsigned long SMTEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PA_SMTEN;

typedef union {
    sM2L31_GPIO_PA_SMTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_SMTEN;

#define M2L31_GPIO_PA_SLEWCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long HSREN0 : 2;
    unsigned long HSREN1 : 2;
    unsigned long HSREN2 : 2;
    unsigned long HSREN3 : 2;
    unsigned long HSREN4 : 2;
    unsigned long HSREN5 : 2;
    unsigned long HSREN6 : 2;
    unsigned long HSREN7 : 2;
    unsigned long HSREN8 : 2;
    unsigned long HSREN9 : 2;
    unsigned long HSREN10 : 2;
    unsigned long HSREN11 : 2;
    unsigned long HSREN12 : 2;
    unsigned long HSREN13 : 2;
    unsigned long HSREN14 : 2;
    unsigned long HSREN15 : 2;
} sM2L31_GPIO_PA_SLEWCTL;

typedef union {
    sM2L31_GPIO_PA_SLEWCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_SLEWCTL;

#define M2L31_GPIO_PA_PUSEL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PUSEL0 : 2;
    unsigned long PUSEL1 : 2;
    unsigned long PUSEL2 : 2;
    unsigned long PUSEL3 : 2;
    unsigned long PUSEL4 : 2;
    unsigned long PUSEL5 : 2;
    unsigned long PUSEL6 : 2;
    unsigned long PUSEL7 : 2;
    unsigned long PUSEL8 : 2;
    unsigned long PUSEL9 : 2;
    unsigned long PUSEL10 : 2;
    unsigned long PUSEL11 : 2;
    unsigned long PUSEL12 : 2;
    unsigned long PUSEL13 : 2;
    unsigned long PUSEL14 : 2;
    unsigned long PUSEL15 : 2;
} sM2L31_GPIO_PA_PUSEL;

typedef union {
    sM2L31_GPIO_PA_PUSEL Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_PUSEL;

#define M2L31_GPIO_PA_DBCTL_RESET_VALUE 0x00000020
typedef struct {
    unsigned long DBCLKSEL : 4;
    unsigned long DBCLKSRC : 1;
    unsigned long ICLKON : 1;
    unsigned long Res0 : 25;
    unsigned long DBCLKBUSY : 1;
} sM2L31_GPIO_PA_DBCTL;

typedef union {
    sM2L31_GPIO_PA_DBCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PA_DBCTL;

#define M2L31_GPIO_PB_MODE_RESET_VALUE 0x00000020
typedef struct {
    unsigned long MODE0 : 2;
    unsigned long MODE1 : 2;
    unsigned long MODE2 : 2;
    unsigned long MODE3 : 2;
    unsigned long MODE4 : 2;
    unsigned long MODE5 : 2;
    unsigned long MODE6 : 2;
    unsigned long MODE7 : 2;
    unsigned long MODE8 : 2;
    unsigned long MODE9 : 2;
    unsigned long MODE10 : 2;
    unsigned long MODE11 : 2;
    unsigned long MODE12 : 2;
    unsigned long MODE13 : 2;
    unsigned long MODE14 : 2;
    unsigned long MODE15 : 2;
} sM2L31_GPIO_PB_MODE;

typedef union {
    sM2L31_GPIO_PB_MODE Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_MODE;

#define M2L31_GPIO_PB_DINOFF_RESET_VALUE 0x00000020
typedef struct {
    unsigned long Res0 : 16;
    unsigned long DINOFF0 : 1;
    unsigned long DINOFF1 : 1;
    unsigned long DINOFF2 : 1;
    unsigned long DINOFF3 : 1;
    unsigned long DINOFF4 : 1;
    unsigned long DINOFF5 : 1;
    unsigned long DINOFF6 : 1;
    unsigned long DINOFF7 : 1;
    unsigned long DINOFF8 : 1;
    unsigned long DINOFF9 : 1;
    unsigned long DINOFF10 : 1;
    unsigned long DINOFF11 : 1;
    unsigned long DINOFF12 : 1;
    unsigned long DINOFF13 : 1;
    unsigned long DINOFF14 : 1;
    unsigned long DINOFF15 : 1;
} sM2L31_GPIO_PB_DINOFF;

typedef union {
    sM2L31_GPIO_PB_DINOFF Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_DINOFF;

#define M2L31_GPIO_PB_DOUT_RESET_VALUE 0x00000020
typedef struct {
    unsigned long DOUT0 : 1;
    unsigned long DOUT1 : 1;
    unsigned long DOUT2 : 1;
    unsigned long DOUT3 : 1;
    unsigned long DOUT4 : 1;
    unsigned long DOUT5 : 1;
    unsigned long DOUT6 : 1;
    unsigned long DOUT7 : 1;
    unsigned long DOUT8 : 1;
    unsigned long DOUT9 : 1;
    unsigned long DOUT10 : 1;
    unsigned long DOUT11 : 1;
    unsigned long DOUT12 : 1;
    unsigned long DOUT13 : 1;
    unsigned long DOUT14 : 1;
    unsigned long DOUT15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PB_DOUT;

typedef union {
    sM2L31_GPIO_PB_DOUT Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_DOUT;

#define M2L31_GPIO_PB_DATMSK_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DATMSK0 : 1;
	unsigned long DATMSK1 : 1;
	unsigned long DATMSK2 : 1;
	unsigned long DATMSK3 : 1;
	unsigned long DATMSK4 : 1;
	unsigned long DATMSK5 : 1;
	unsigned long DATMSK6 : 1;
	unsigned long DATMSK7 : 1;
	unsigned long DATMSK8 : 1;
	unsigned long DATMSK9 : 1;
	unsigned long DATMSK10 : 1;
	unsigned long DATMSK11 : 1;
	unsigned long DATMSK12 : 1;
	unsigned long DATMSK13 : 1;
	unsigned long DATMSK14 : 1;
	unsigned long DATMSK15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PB_DATMSK;

typedef union {
    sM2L31_GPIO_PB_DATMSK Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_DATMSK;

#define M2L31_GPIO_PB_PIN_RESET_VALUE 0x00000020
typedef struct {
    unsigned long Pin0 : 1;
    unsigned long Pin1 : 1;
    unsigned long Pin2 : 1;
    unsigned long Pin3 : 1;
    unsigned long Pin4 : 1;
    unsigned long Pin5 : 1;
    unsigned long Pin6 : 1;
    unsigned long Pin7 : 1;
    unsigned long Pin8 : 1;
    unsigned long Pin9 : 1;
    unsigned long Pin10 : 1;
    unsigned long Pin11 : 1;
    unsigned long Pin12 : 1;
    unsigned long Pin13 : 1;
    unsigned long Pin14 : 1;
    unsigned long Pin15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PB_PIN;

typedef union {
    sM2L31_GPIO_PB_PIN Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_PIN;

#define M2L31_GPIO_PB_DBEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBEN0 : 1;
	unsigned long DBEN1 : 1;
	unsigned long DBEN2 : 1;
	unsigned long DBEN3 : 1;
	unsigned long DBEN4 : 1;
	unsigned long DBEN5 : 1;
	unsigned long DBEN6 : 1;
	unsigned long DBEN7 : 1;
	unsigned long DBEN8 : 1;
	unsigned long DBEN9 : 1;
	unsigned long DBEN10 : 1;
	unsigned long DBEN11 : 1;
	unsigned long DBEN12 : 1;
	unsigned long DBEN13 : 1;
	unsigned long DBEN14 : 1;
	unsigned long DBEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PB_DBEN;

typedef union {
    sM2L31_GPIO_PB_DBEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_DBEN;

#define M2L31_GPIO_PB_INTTYPE_RESET_VALUE 0x00000020
typedef struct {
	unsigned long TYPE0 : 1;
	unsigned long TYPE1 : 1;
	unsigned long TYPE2 : 1;
	unsigned long TYPE3 : 1;
	unsigned long TYPE4 : 1;
	unsigned long TYPE5 : 1;
	unsigned long TYPE6 : 1;
	unsigned long TYPE7 : 1;
	unsigned long TYPE8 : 1;
	unsigned long TYPE9 : 1;
	unsigned long TYPE10 : 1;
	unsigned long TYPE11 : 1;
	unsigned long TYPE12 : 1;
	unsigned long TYPE13 : 1;
	unsigned long TYPE14 : 1;
	unsigned long TYPE15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PB_INTTYPE;

typedef union {
    sM2L31_GPIO_PB_INTTYPE Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_INTTYPE;

#define M2L31_GPIO_PB_INTEN_RESET_VALUE 0x00000020
typedef struct {
    unsigned long FLIEN0 : 1;
    unsigned long FLIEN1 : 1;
    unsigned long FLIEN2 : 1;
    unsigned long FLIEN3 : 1;
    unsigned long FLIEN4 : 1;
    unsigned long FLIEN5 : 1;
    unsigned long FLIEN6 : 1;
    unsigned long FLIEN7 : 1;
    unsigned long FLIEN8 : 1;
    unsigned long FLIEN9 : 1;
    unsigned long FLIEN10 : 1;
    unsigned long FLIEN11 : 1;
    unsigned long FLIEN12 : 1;
    unsigned long FLIEN13 : 1;
    unsigned long FLIEN14 : 1;
    unsigned long FLIEN15 : 1;
    unsigned long RHIEN0 : 1;
    unsigned long RHIEN1 : 1;
    unsigned long RHIEN2 : 1;
    unsigned long RHIEN3 : 1;
    unsigned long RHIEN4 : 1;
    unsigned long RHIEN5 : 1;
    unsigned long RHIEN6 : 1;
    unsigned long RHIEN7 : 1;
    unsigned long RHIEN8 : 1;
    unsigned long RHIEN9 : 1;
    unsigned long RHIEN10 : 1;
    unsigned long RHIEN11 : 1;
    unsigned long RHIEN12 : 1;
    unsigned long RHIEN13 : 1;
    unsigned long RHIEN14 : 1;
    unsigned long RHIEN15 : 1;
} sM2L31_GPIO_PB_INTEN;

typedef union {
    sM2L31_GPIO_PB_INTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_INTEN;

#define M2L31_GPIO_PB_INTSRC_RESET_VALUE 0x00000020
typedef struct {
	unsigned long INTSRC0 : 1;
	unsigned long INTSRC1 : 1;
	unsigned long INTSRC2 : 1;
	unsigned long INTSRC3 : 1;
	unsigned long INTSRC4 : 1;
	unsigned long INTSRC5 : 1;
	unsigned long INTSRC6 : 1;
	unsigned long INTSRC7 : 1;
	unsigned long INTSRC8 : 1;
	unsigned long INTSRC9 : 1;
	unsigned long INTSRC10 : 1;
	unsigned long INTSRC11 : 1;
	unsigned long INTSRC12 : 1;
	unsigned long INTSRC13 : 1;
	unsigned long INTSRC14 : 1;
	unsigned long INTSRC15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PB_INTSRC;

typedef union {
    sM2L31_GPIO_PB_INTSRC Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_INTSRC;

#define M2L31_GPIO_PB_SMTEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long SMTEN0 : 1;
	unsigned long SMTEN1 : 1;
	unsigned long SMTEN2 : 1;
	unsigned long SMTEN3 : 1;
	unsigned long SMTEN4 : 1;
	unsigned long SMTEN5 : 1;
	unsigned long SMTEN6 : 1;
	unsigned long SMTEN7 : 1;
	unsigned long SMTEN8 : 1;
	unsigned long SMTEN9 : 1;
	unsigned long SMTEN10 : 1;
	unsigned long SMTEN11 : 1;
	unsigned long SMTEN12 : 1;
	unsigned long SMTEN13 : 1;
	unsigned long SMTEN14 : 1;
	unsigned long SMTEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PB_SMTEN;

typedef union {
    sM2L31_GPIO_PB_SMTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_SMTEN;

#define M2L31_GPIO_PB_SLEWCTL_RESET_VALUE 0x00000020
typedef struct {
    unsigned long HSREN0 : 2;
    unsigned long HSREN1 : 2;
    unsigned long HSREN2 : 2;
    unsigned long HSREN3 : 2;
    unsigned long HSREN4 : 2;
    unsigned long HSREN5 : 2;
    unsigned long HSREN6 : 2;
    unsigned long HSREN7 : 2;
    unsigned long HSREN8 : 2;
    unsigned long HSREN9 : 2;
    unsigned long HSREN10 : 2;
    unsigned long HSREN11 : 2;
    unsigned long HSREN12 : 2;
    unsigned long HSREN13 : 2;
    unsigned long HSREN14 : 2;
    unsigned long HSREN15 : 2;
} sM2L31_GPIO_PB_SLEWCTL;

typedef union {
    sM2L31_GPIO_PB_SLEWCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_SLEWCTL;

#define M2L31_GPIO_PB_PUSEL_RESET_VALUE 0x00000020
typedef struct {
    unsigned long PUSEL0 : 2;
    unsigned long PUSEL1 : 2;
    unsigned long PUSEL2 : 2;
    unsigned long PUSEL3 : 2;
    unsigned long PUSEL4 : 2;
    unsigned long PUSEL5 : 2;
    unsigned long PUSEL6 : 2;
    unsigned long PUSEL7 : 2;
    unsigned long PUSEL8 : 2;
    unsigned long PUSEL9 : 2;
    unsigned long PUSEL10 : 2;
    unsigned long PUSEL11 : 2;
    unsigned long PUSEL12 : 2;
    unsigned long PUSEL13 : 2;
    unsigned long PUSEL14 : 2;
    unsigned long PUSEL15 : 2;
} sM2L31_GPIO_PB_PUSEL;

typedef union {
    sM2L31_GPIO_PB_PUSEL Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_PUSEL;

#define M2L31_GPIO_PB_DBCTL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBCLKSEL : 4;
	unsigned long DBCLKSRC : 1;
	unsigned long ICLKON : 1;
	unsigned long Res0 : 25;
	unsigned long DBCLKBUSY : 1;
} sM2L31_GPIO_PB_DBCTL;

typedef union {
    sM2L31_GPIO_PB_DBCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PB_DBCTL;

#define M2L31_GPIO_PC_MODE_RESET_VALUE 0x00000020
typedef struct {
    unsigned long MODE0 : 2;
    unsigned long MODE1 : 2;
    unsigned long MODE2 : 2;
    unsigned long MODE3 : 2;
    unsigned long MODE4 : 2;
    unsigned long MODE5 : 2;
    unsigned long MODE6 : 2;
    unsigned long MODE7 : 2;
    unsigned long MODE8 : 2;
    unsigned long MODE9 : 2;
    unsigned long MODE10 : 2;
    unsigned long MODE11 : 2;
    unsigned long MODE12 : 2;
    unsigned long MODE13 : 2;
    unsigned long MODE14 : 2;
    unsigned long MODE15 : 2;
} sM2L31_GPIO_PC_MODE;

typedef union {
    sM2L31_GPIO_PC_MODE Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_MODE;

#define M2L31_GPIO_PC_DINOFF_RESET_VALUE 0x00000020
typedef struct {
    unsigned long Res0 : 16;
    unsigned long DINOFF0 : 1;
    unsigned long DINOFF1 : 1;
    unsigned long DINOFF2 : 1;
    unsigned long DINOFF3 : 1;
    unsigned long DINOFF4 : 1;
    unsigned long DINOFF5 : 1;
    unsigned long DINOFF6 : 1;
    unsigned long DINOFF7 : 1;
    unsigned long DINOFF8 : 1;
    unsigned long DINOFF9 : 1;
    unsigned long DINOFF10 : 1;
    unsigned long DINOFF11 : 1;
    unsigned long DINOFF12 : 1;
    unsigned long DINOFF13 : 1;
    unsigned long DINOFF14 : 1;
    unsigned long DINOFF15 : 1;
} sM2L31_GPIO_PC_DINOFF;

typedef union {
    sM2L31_GPIO_PC_DINOFF Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_DINOFF;

#define M2L31_GPIO_PC_DOUT_RESET_VALUE 0x00000020
typedef struct {
    unsigned long DOUT0 : 1;
    unsigned long DOUT1 : 1;
    unsigned long DOUT2 : 1;
    unsigned long DOUT3 : 1;
    unsigned long DOUT4 : 1;
    unsigned long DOUT5 : 1;
    unsigned long DOUT6 : 1;
    unsigned long DOUT7 : 1;
    unsigned long DOUT8 : 1;
    unsigned long DOUT9 : 1;
    unsigned long DOUT10 : 1;
    unsigned long DOUT11 : 1;
    unsigned long DOUT12 : 1;
    unsigned long DOUT13 : 1;
    unsigned long DOUT14 : 1;
    unsigned long DOUT15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PC_DOUT;

typedef union {
    sM2L31_GPIO_PC_DOUT Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_DOUT;

#define M2L31_GPIO_PC_DATMSK_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DATMSK0 : 1;
	unsigned long DATMSK1 : 1;
	unsigned long DATMSK2 : 1;
	unsigned long DATMSK3 : 1;
	unsigned long DATMSK4 : 1;
	unsigned long DATMSK5 : 1;
	unsigned long DATMSK6 : 1;
	unsigned long DATMSK7 : 1;
	unsigned long DATMSK8 : 1;
	unsigned long DATMSK9 : 1;
	unsigned long DATMSK10 : 1;
	unsigned long DATMSK11 : 1;
	unsigned long DATMSK12 : 1;
	unsigned long DATMSK13 : 1;
	unsigned long DATMSK14 : 1;
	unsigned long DATMSK15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PC_DATMSK;

typedef union {
    sM2L31_GPIO_PC_DATMSK Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_DATMSK;

#define M2L31_GPIO_PC_PIN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long PIN0 : 1;
	unsigned long PIN1 : 1;
	unsigned long PIN2 : 1;
	unsigned long PIN3 : 1;
	unsigned long PIN4 : 1;
	unsigned long PIN5 : 1;
	unsigned long PIN6 : 1;
	unsigned long PIN7 : 1;
	unsigned long PIN8 : 1;
	unsigned long PIN9 : 1;
	unsigned long PIN10 : 1;
	unsigned long PIN11 : 1;
	unsigned long PIN12 : 1;
	unsigned long PIN13 : 1;
	unsigned long PIN14 : 1;
	unsigned long PIN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PC_PIN;

typedef union {
    sM2L31_GPIO_PC_PIN Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_PIN;

#define M2L31_GPIO_PC_DBEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBEN0 : 1;
	unsigned long DBEN1 : 1;
	unsigned long DBEN2 : 1;
	unsigned long DBEN3 : 1;
	unsigned long DBEN4 : 1;
	unsigned long DBEN5 : 1;
	unsigned long DBEN6 : 1;
	unsigned long DBEN7 : 1;
	unsigned long DBEN8 : 1;
	unsigned long DBEN9 : 1;
	unsigned long DBEN10 : 1;
	unsigned long DBEN11 : 1;
	unsigned long DBEN12 : 1;
	unsigned long DBEN13 : 1;
	unsigned long DBEN14 : 1;
	unsigned long DBEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PC_DBEN;

typedef union {
    sM2L31_GPIO_PC_DBEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_DBEN;

#define M2L31_GPIO_PC_INTTYPE_RESET_VALUE 0x00000020
typedef struct {
	unsigned long TYPE0 : 1;
	unsigned long TYPE1 : 1;
	unsigned long TYPE2 : 1;
	unsigned long TYPE3 : 1;
	unsigned long TYPE4 : 1;
	unsigned long TYPE5 : 1;
	unsigned long TYPE6 : 1;
	unsigned long TYPE7 : 1;
	unsigned long TYPE8 : 1;
	unsigned long TYPE9 : 1;
	unsigned long TYPE10 : 1;
	unsigned long TYPE11 : 1;
	unsigned long TYPE12 : 1;
	unsigned long TYPE13 : 1;
	unsigned long TYPE14 : 1;
	unsigned long TYPE15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PC_INTTYPE;

typedef union {
    sM2L31_GPIO_PC_INTTYPE Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_INTTYPE;

#define M2L31_GPIO_PC_INTEN_RESET_VALUE 0x00000020
typedef struct {
    unsigned long FLIEN0 : 1;
    unsigned long FLIEN1 : 1;
    unsigned long FLIEN2 : 1;
    unsigned long FLIEN3 : 1;
    unsigned long FLIEN4 : 1;
    unsigned long FLIEN5 : 1;
    unsigned long FLIEN6 : 1;
    unsigned long FLIEN7 : 1;
    unsigned long FLIEN8 : 1;
    unsigned long FLIEN9 : 1;
    unsigned long FLIEN10 : 1;
    unsigned long FLIEN11 : 1;
    unsigned long FLIEN12 : 1;
    unsigned long FLIEN13 : 1;
    unsigned long FLIEN14 : 1;
    unsigned long FLIEN15 : 1;
    unsigned long RHIEN0 : 1;
    unsigned long RHIEN1 : 1;
    unsigned long RHIEN2 : 1;
    unsigned long RHIEN3 : 1;
    unsigned long RHIEN4 : 1;
    unsigned long RHIEN5 : 1;
    unsigned long RHIEN6 : 1;
    unsigned long RHIEN7 : 1;
    unsigned long RHIEN8 : 1;
    unsigned long RHIEN9 : 1;
    unsigned long RHIEN10 : 1;
    unsigned long RHIEN11 : 1;
    unsigned long RHIEN12 : 1;
    unsigned long RHIEN13 : 1;
    unsigned long RHIEN14 : 1;
    unsigned long RHIEN15 : 1;
} sM2L31_GPIO_PC_INTEN;

typedef union {
    sM2L31_GPIO_PC_INTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_INTEN;

#define M2L31_GPIO_PC_INTSRC_RESET_VALUE 0x00000020
typedef struct {
	unsigned long INTSRC0 : 1;
	unsigned long INTSRC1 : 1;
	unsigned long INTSRC2 : 1;
	unsigned long INTSRC3 : 1;
	unsigned long INTSRC4 : 1;
	unsigned long INTSRC5 : 1;
	unsigned long INTSRC6 : 1;
	unsigned long INTSRC7 : 1;
	unsigned long INTSRC8 : 1;
	unsigned long INTSRC9 : 1;
	unsigned long INTSRC10 : 1;
	unsigned long INTSRC11 : 1;
	unsigned long INTSRC12 : 1;
	unsigned long INTSRC13 : 1;
	unsigned long INTSRC14 : 1;
	unsigned long INTSRC15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PC_INTSRC;

typedef union {
    sM2L31_GPIO_PC_INTSRC Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_INTSRC;

#define M2L31_GPIO_PC_SMTEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long SMTEN0 : 1;
	unsigned long SMTEN1 : 1;
	unsigned long SMTEN2 : 1;
	unsigned long SMTEN3 : 1;
	unsigned long SMTEN4 : 1;
	unsigned long SMTEN5 : 1;
	unsigned long SMTEN6 : 1;
	unsigned long SMTEN7 : 1;
	unsigned long SMTEN8 : 1;
	unsigned long SMTEN9 : 1;
	unsigned long SMTEN10 : 1;
	unsigned long SMTEN11 : 1;
	unsigned long SMTEN12 : 1;
	unsigned long SMTEN13 : 1;
	unsigned long SMTEN14 : 1;
	unsigned long SMTEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PC_SMTEN;

typedef union {
    sM2L31_GPIO_PC_SMTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_SMTEN;

#define M2L31_GPIO_PC_SLEWCTL_RESET_VALUE 0x00000020
typedef struct {
    unsigned long HSREN0 : 2;
    unsigned long HSREN1 : 2;
    unsigned long HSREN2 : 2;
    unsigned long HSREN3 : 2;
    unsigned long HSREN4 : 2;
    unsigned long HSREN5 : 2;
    unsigned long HSREN6 : 2;
    unsigned long HSREN7 : 2;
    unsigned long HSREN8 : 2;
    unsigned long HSREN9 : 2;
    unsigned long HSREN10 : 2;
    unsigned long HSREN11 : 2;
    unsigned long HSREN12 : 2;
    unsigned long HSREN13 : 2;
    unsigned long HSREN14 : 2;
    unsigned long HSREN15 : 2;
} sM2L31_GPIO_PC_SLEWCTL;

typedef union {
    sM2L31_GPIO_PC_SLEWCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_SLEWCTL;

#define M2L31_GPIO_PC_PUSEL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long PUSEL0 : 2;
	unsigned long PUSEL1 : 2;
	unsigned long PUSEL2 : 2;
	unsigned long PUSEL3 : 2;
	unsigned long PUSEL4 : 2;
	unsigned long PUSEL5 : 2;
	unsigned long PUSEL6 : 2;
	unsigned long PUSEL7 : 2;
	unsigned long PUSEL8 : 2;
	unsigned long PUSEL9 : 2;
	unsigned long PUSEL10 : 2;
	unsigned long PUSEL11 : 2;
	unsigned long PUSEL12 : 2;
	unsigned long PUSEL13 : 2;
	unsigned long PUSEL14 : 2;
	unsigned long PUSEL15 : 2;
} sM2L31_GPIO_PC_PUSEL;

typedef union {
    sM2L31_GPIO_PC_PUSEL Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_PUSEL;

#define M2L31_GPIO_PC_DBCTL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBCLKSEL : 4;
	unsigned long DBCLKSRC : 1;
	unsigned long ICLKON : 1;
	unsigned long Res0 : 25;
	unsigned long DBCLKBUSY : 1;
} sM2L31_GPIO_PC_DBCTL;

typedef union {
    sM2L31_GPIO_PC_DBCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PC_DBCTL;

#define M2L31_GPIO_PD_MODE_RESET_VALUE 0x00000020
typedef struct {
    unsigned long MODE0 : 2;
    unsigned long MODE1 : 2;
    unsigned long MODE2 : 2;
    unsigned long MODE3 : 2;
    unsigned long MODE4 : 2;
    unsigned long MODE5 : 2;
    unsigned long MODE6 : 2;
    unsigned long MODE7 : 2;
    unsigned long MODE8 : 2;
    unsigned long MODE9 : 2;
    unsigned long MODE10 : 2;
    unsigned long MODE11 : 2;
    unsigned long MODE12 : 2;
    unsigned long MODE13 : 2;
    unsigned long MODE14 : 2;
    unsigned long MODE15 : 2;
} sM2L31_GPIO_PD_MODE;

typedef union {
    sM2L31_GPIO_PD_MODE Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_MODE;

#define M2L31_GPIO_PD_DINOFF_RESET_VALUE 0x00000020
typedef struct {
    unsigned long Res0 : 16;
    unsigned long DINOFF0 : 1;
    unsigned long DINOFF1 : 1;
    unsigned long DINOFF2 : 1;
    unsigned long DINOFF3 : 1;
    unsigned long DINOFF4 : 1;
    unsigned long DINOFF5 : 1;
    unsigned long DINOFF6 : 1;
    unsigned long DINOFF7 : 1;
    unsigned long DINOFF8 : 1;
    unsigned long DINOFF9 : 1;
    unsigned long DINOFF10 : 1;
    unsigned long DINOFF11 : 1;
    unsigned long DINOFF12 : 1;
    unsigned long DINOFF13 : 1;
    unsigned long DINOFF14 : 1;
    unsigned long DINOFF15 : 1;
} sM2L31_GPIO_PD_DINOFF;

typedef union {
    sM2L31_GPIO_PD_DINOFF Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_DINOFF;

#define M2L31_GPIO_PD_DOUT_RESET_VALUE 0x00000020
typedef struct {
    unsigned long DOUT0 : 1;
    unsigned long DOUT1 : 1;
    unsigned long DOUT2 : 1;
    unsigned long DOUT3 : 1;
    unsigned long DOUT4 : 1;
    unsigned long DOUT5 : 1;
    unsigned long DOUT6 : 1;
    unsigned long DOUT7 : 1;
    unsigned long DOUT8 : 1;
    unsigned long DOUT9 : 1;
    unsigned long DOUT10 : 1;
    unsigned long DOUT11 : 1;
    unsigned long DOUT12 : 1;
    unsigned long DOUT13 : 1;
    unsigned long DOUT14 : 1;
    unsigned long DOUT15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PD_DOUT;

typedef union {
    sM2L31_GPIO_PD_DOUT Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_DOUT;

#define M2L31_GPIO_PD_DATMSK_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DATMSK0 : 1;
	unsigned long DATMSK1 : 1;
	unsigned long DATMSK2 : 1;
	unsigned long DATMSK3 : 1;
	unsigned long DATMSK4 : 1;
	unsigned long DATMSK5 : 1;
	unsigned long DATMSK6 : 1;
	unsigned long DATMSK7 : 1;
	unsigned long DATMSK8 : 1;
	unsigned long DATMSK9 : 1;
	unsigned long DATMSK10 : 1;
	unsigned long DATMSK11 : 1;
	unsigned long DATMSK12 : 1;
	unsigned long DATMSK13 : 1;
	unsigned long DATMSK14 : 1;
	unsigned long DATMSK15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PD_DATMSK;

typedef union {
    sM2L31_GPIO_PD_DATMSK Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_DATMSK;

#define M2L31_GPIO_PD_PIN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long PIN0 : 1;
	unsigned long PIN1 : 1;
	unsigned long PIN2 : 1;
	unsigned long PIN3 : 1;
	unsigned long PIN4 : 1;
	unsigned long PIN5 : 1;
	unsigned long PIN6 : 1;
	unsigned long PIN7 : 1;
	unsigned long PIN8 : 1;
	unsigned long PIN9 : 1;
	unsigned long PIN10 : 1;
	unsigned long PIN11 : 1;
	unsigned long PIN12 : 1;
	unsigned long PIN13 : 1;
	unsigned long PIN14 : 1;
	unsigned long PIN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PD_PIN;

typedef union {
    sM2L31_GPIO_PD_PIN Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_PIN;

#define M2L31_GPIO_PD_DBEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBEN0 : 1;
	unsigned long DBEN1 : 1;
	unsigned long DBEN2 : 1;
	unsigned long DBEN3 : 1;
	unsigned long DBEN4 : 1;
	unsigned long DBEN5 : 1;
	unsigned long DBEN6 : 1;
	unsigned long DBEN7 : 1;
	unsigned long DBEN8 : 1;
	unsigned long DBEN9 : 1;
	unsigned long DBEN10 : 1;
	unsigned long DBEN11 : 1;
	unsigned long DBEN12 : 1;
	unsigned long DBEN13 : 1;
	unsigned long DBEN14 : 1;
	unsigned long DBEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PD_DBEN;

typedef union {
    sM2L31_GPIO_PD_DBEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_DBEN;

#define M2L31_GPIO_PD_INTTYPE_RESET_VALUE 0x00000020
typedef struct {
	unsigned long TYPE0 : 1;
	unsigned long TYPE1 : 1;
	unsigned long TYPE2 : 1;
	unsigned long TYPE3 : 1;
	unsigned long TYPE4 : 1;
	unsigned long TYPE5 : 1;
	unsigned long TYPE6 : 1;
	unsigned long TYPE7 : 1;
	unsigned long TYPE8 : 1;
	unsigned long TYPE9 : 1;
	unsigned long TYPE10 : 1;
	unsigned long TYPE11 : 1;
	unsigned long TYPE12 : 1;
	unsigned long TYPE13 : 1;
	unsigned long TYPE14 : 1;
	unsigned long TYPE15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PD_INTTYPE;

typedef union {
    sM2L31_GPIO_PD_INTTYPE Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_INTTYPE;

#define M2L31_GPIO_PD_INTEN_RESET_VALUE 0x00000020
typedef struct {
    unsigned long FLIEN0 : 1;
    unsigned long FLIEN1 : 1;
    unsigned long FLIEN2 : 1;
    unsigned long FLIEN3 : 1;
    unsigned long FLIEN4 : 1;
    unsigned long FLIEN5 : 1;
    unsigned long FLIEN6 : 1;
    unsigned long FLIEN7 : 1;
    unsigned long FLIEN8 : 1;
    unsigned long FLIEN9 : 1;
    unsigned long FLIEN10 : 1;
    unsigned long FLIEN11 : 1;
    unsigned long FLIEN12 : 1;
    unsigned long FLIEN13 : 1;
    unsigned long FLIEN14 : 1;
    unsigned long FLIEN15 : 1;
    unsigned long RHIEN0 : 1;
    unsigned long RHIEN1 : 1;
    unsigned long RHIEN2 : 1;
    unsigned long RHIEN3 : 1;
    unsigned long RHIEN4 : 1;
    unsigned long RHIEN5 : 1;
    unsigned long RHIEN6 : 1;
    unsigned long RHIEN7 : 1;
    unsigned long RHIEN8 : 1;
    unsigned long RHIEN9 : 1;
    unsigned long RHIEN10 : 1;
    unsigned long RHIEN11 : 1;
    unsigned long RHIEN12 : 1;
    unsigned long RHIEN13 : 1;
    unsigned long RHIEN14 : 1;
    unsigned long RHIEN15 : 1;
} sM2L31_GPIO_PD_INTEN;

typedef union {
    sM2L31_GPIO_PD_INTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_INTEN;

#define M2L31_GPIO_PD_INTSRC_RESET_VALUE 0x00000020
typedef struct {
	unsigned long INTSRC0 : 1;
	unsigned long INTSRC1 : 1;
	unsigned long INTSRC2 : 1;
	unsigned long INTSRC3 : 1;
	unsigned long INTSRC4 : 1;
	unsigned long INTSRC5 : 1;
	unsigned long INTSRC6 : 1;
	unsigned long INTSRC7 : 1;
	unsigned long INTSRC8 : 1;
	unsigned long INTSRC9 : 1;
	unsigned long INTSRC10 : 1;
	unsigned long INTSRC11 : 1;
	unsigned long INTSRC12 : 1;
	unsigned long INTSRC13 : 1;
	unsigned long INTSRC14 : 1;
	unsigned long INTSRC15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PD_INTSRC;

typedef union {
    sM2L31_GPIO_PD_INTSRC Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_INTSRC;

#define M2L31_GPIO_PD_SMTEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long SMTEN0 : 1;
	unsigned long SMTEN1 : 1;
	unsigned long SMTEN2 : 1;
	unsigned long SMTEN3 : 1;
	unsigned long SMTEN4 : 1;
	unsigned long SMTEN5 : 1;
	unsigned long SMTEN6 : 1;
	unsigned long SMTEN7 : 1;
	unsigned long SMTEN8 : 1;
	unsigned long SMTEN9 : 1;
	unsigned long SMTEN10 : 1;
	unsigned long SMTEN11 : 1;
	unsigned long SMTEN12 : 1;
	unsigned long SMTEN13 : 1;
	unsigned long SMTEN14 : 1;
	unsigned long SMTEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PD_SMTEN;

typedef union {
    sM2L31_GPIO_PD_SMTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_SMTEN;

#define M2L31_GPIO_PD_SLEWCTL_RESET_VALUE 0x00000020
typedef struct {
    unsigned long HSREN0 : 2;
    unsigned long HSREN1 : 2;
    unsigned long HSREN2 : 2;
    unsigned long HSREN3 : 2;
    unsigned long HSREN4 : 2;
    unsigned long HSREN5 : 2;
    unsigned long HSREN6 : 2;
    unsigned long HSREN7 : 2;
    unsigned long HSREN8 : 2;
    unsigned long HSREN9 : 2;
    unsigned long HSREN10 : 2;
    unsigned long HSREN11 : 2;
    unsigned long HSREN12 : 2;
    unsigned long HSREN13 : 2;
    unsigned long HSREN14 : 2;
    unsigned long HSREN15 : 2;
} sM2L31_GPIO_PD_SLEWCTL;

typedef union {
    sM2L31_GPIO_PD_SLEWCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_SLEWCTL;

#define M2L31_GPIO_PD_PUSEL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long PUSEL0 : 2;
	unsigned long PUSEL1 : 2;
	unsigned long PUSEL2 : 2;
	unsigned long PUSEL3 : 2;
	unsigned long PUSEL4 : 2;
	unsigned long PUSEL5 : 2;
	unsigned long PUSEL6 : 2;
	unsigned long PUSEL7 : 2;
	unsigned long PUSEL8 : 2;
	unsigned long PUSEL9 : 2;
	unsigned long PUSEL10 : 2;
	unsigned long PUSEL11 : 2;
	unsigned long PUSEL12 : 2;
	unsigned long PUSEL13 : 2;
	unsigned long PUSEL14 : 2;
	unsigned long PUSEL15 : 2;
} sM2L31_GPIO_PD_PUSEL;

typedef union {
    sM2L31_GPIO_PD_PUSEL Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_PUSEL;

#define M2L31_GPIO_PD_DBCTL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBCLKSEL : 4;
	unsigned long DBCLKSRC : 1;
	unsigned long ICLKON : 1;
	unsigned long Res0 : 25;
	unsigned long DBCLKBUSY : 1;
} sM2L31_GPIO_PD_DBCTL;

typedef union {
    sM2L31_GPIO_PD_DBCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PD_DBCTL;

#define M2L31_GPIO_PE_MODE_RESET_VALUE 0x00000020
typedef struct {
    unsigned long MODE0 : 2;
    unsigned long MODE1 : 2;
    unsigned long MODE2 : 2;
    unsigned long MODE3 : 2;
    unsigned long MODE4 : 2;
    unsigned long MODE5 : 2;
    unsigned long MODE6 : 2;
    unsigned long MODE7 : 2;
    unsigned long MODE8 : 2;
    unsigned long MODE9 : 2;
    unsigned long MODE10 : 2;
    unsigned long MODE11 : 2;
    unsigned long MODE12 : 2;
    unsigned long MODE13 : 2;
    unsigned long MODE14 : 2;
    unsigned long MODE15 : 2;
} sM2L31_GPIO_PE_MODE;

typedef union {
    sM2L31_GPIO_PE_MODE Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_MODE;

#define M2L31_GPIO_PE_DINOFF_RESET_VALUE 0x00000020
typedef struct {
    unsigned long Res0 : 16;
    unsigned long DINOFF0 : 1;
    unsigned long DINOFF1 : 1;
    unsigned long DINOFF2 : 1;
    unsigned long DINOFF3 : 1;
    unsigned long DINOFF4 : 1;
    unsigned long DINOFF5 : 1;
    unsigned long DINOFF6 : 1;
    unsigned long DINOFF7 : 1;
    unsigned long DINOFF8 : 1;
    unsigned long DINOFF9 : 1;
    unsigned long DINOFF10 : 1;
    unsigned long DINOFF11 : 1;
    unsigned long DINOFF12 : 1;
    unsigned long DINOFF13 : 1;
    unsigned long DINOFF14 : 1;
    unsigned long DINOFF15 : 1;
} sM2L31_GPIO_PE_DINOFF;

typedef union {
    sM2L31_GPIO_PE_DINOFF Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_DINOFF;

#define M2L31_GPIO_PE_DOUT_RESET_VALUE 0x00000020
typedef struct {
    unsigned long DOUT0 : 1;
    unsigned long DOUT1 : 1;
    unsigned long DOUT2 : 1;
    unsigned long DOUT3 : 1;
    unsigned long DOUT4 : 1;
    unsigned long DOUT5 : 1;
    unsigned long DOUT6 : 1;
    unsigned long DOUT7 : 1;
    unsigned long DOUT8 : 1;
    unsigned long DOUT9 : 1;
    unsigned long DOUT10 : 1;
    unsigned long DOUT11 : 1;
    unsigned long DOUT12 : 1;
    unsigned long DOUT13 : 1;
    unsigned long DOUT14 : 1;
    unsigned long DOUT15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PE_DOUT;

typedef union {
    sM2L31_GPIO_PE_DOUT Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_DOUT;

#define M2L31_GPIO_PE_DATMSK_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DATMSK0 : 1;
	unsigned long DATMSK1 : 1;
	unsigned long DATMSK2 : 1;
	unsigned long DATMSK3 : 1;
	unsigned long DATMSK4 : 1;
	unsigned long DATMSK5 : 1;
	unsigned long DATMSK6 : 1;
	unsigned long DATMSK7 : 1;
	unsigned long DATMSK8 : 1;
	unsigned long DATMSK9 : 1;
	unsigned long DATMSK10 : 1;
	unsigned long DATMSK11 : 1;
	unsigned long DATMSK12 : 1;
	unsigned long DATMSK13 : 1;
	unsigned long DATMSK14 : 1;
	unsigned long DATMSK15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PE_DATMSK;

typedef union {
    sM2L31_GPIO_PE_DATMSK Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_DATMSK;

#define M2L31_GPIO_PE_PIN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long PIN0 : 1;
	unsigned long PIN1 : 1;
	unsigned long PIN2 : 1;
	unsigned long PIN3 : 1;
	unsigned long PIN4 : 1;
	unsigned long PIN5 : 1;
	unsigned long PIN6 : 1;
	unsigned long PIN7 : 1;
	unsigned long PIN8 : 1;
	unsigned long PIN9 : 1;
	unsigned long PIN10 : 1;
	unsigned long PIN11 : 1;
	unsigned long PIN12 : 1;
	unsigned long PIN13 : 1;
	unsigned long PIN14 : 1;
	unsigned long PIN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PE_PIN;

typedef union {
    sM2L31_GPIO_PE_PIN Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_PIN;

#define M2L31_GPIO_PE_DBEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBEN0 : 1;
	unsigned long DBEN1 : 1;
	unsigned long DBEN2 : 1;
	unsigned long DBEN3 : 1;
	unsigned long DBEN4 : 1;
	unsigned long DBEN5 : 1;
	unsigned long DBEN6 : 1;
	unsigned long DBEN7 : 1;
	unsigned long DBEN8 : 1;
	unsigned long DBEN9 : 1;
	unsigned long DBEN10 : 1;
	unsigned long DBEN11 : 1;
	unsigned long DBEN12 : 1;
	unsigned long DBEN13 : 1;
	unsigned long DBEN14 : 1;
	unsigned long DBEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PE_DBEN;

typedef union {
    sM2L31_GPIO_PE_DBEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_DBEN;

#define M2L31_GPIO_PE_INTTYPE_RESET_VALUE 0x00000020
typedef struct {
	unsigned long TYPE0 : 1;
	unsigned long TYPE1 : 1;
	unsigned long TYPE2 : 1;
	unsigned long TYPE3 : 1;
	unsigned long TYPE4 : 1;
	unsigned long TYPE5 : 1;
	unsigned long TYPE6 : 1;
	unsigned long TYPE7 : 1;
	unsigned long TYPE8 : 1;
	unsigned long TYPE9 : 1;
	unsigned long TYPE10 : 1;
	unsigned long TYPE11 : 1;
	unsigned long TYPE12 : 1;
	unsigned long TYPE13 : 1;
	unsigned long TYPE14 : 1;
	unsigned long TYPE15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PE_INTTYPE;

typedef union {
    sM2L31_GPIO_PE_INTTYPE Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_INTTYPE;

#define M2L31_GPIO_PE_INTEN_RESET_VALUE 0x00000020
typedef struct {
    unsigned long FLIEN0 : 1;
    unsigned long FLIEN1 : 1;
    unsigned long FLIEN2 : 1;
    unsigned long FLIEN3 : 1;
    unsigned long FLIEN4 : 1;
    unsigned long FLIEN5 : 1;
    unsigned long FLIEN6 : 1;
    unsigned long FLIEN7 : 1;
    unsigned long FLIEN8 : 1;
    unsigned long FLIEN9 : 1;
    unsigned long FLIEN10 : 1;
    unsigned long FLIEN11 : 1;
    unsigned long FLIEN12 : 1;
    unsigned long FLIEN13 : 1;
    unsigned long FLIEN14 : 1;
    unsigned long FLIEN15 : 1;
    unsigned long RHIEN0 : 1;
    unsigned long RHIEN1 : 1;
    unsigned long RHIEN2 : 1;
    unsigned long RHIEN3 : 1;
    unsigned long RHIEN4 : 1;
    unsigned long RHIEN5 : 1;
    unsigned long RHIEN6 : 1;
    unsigned long RHIEN7 : 1;
    unsigned long RHIEN8 : 1;
    unsigned long RHIEN9 : 1;
    unsigned long RHIEN10 : 1;
    unsigned long RHIEN11 : 1;
    unsigned long RHIEN12 : 1;
    unsigned long RHIEN13 : 1;
    unsigned long RHIEN14 : 1;
    unsigned long RHIEN15 : 1;
} sM2L31_GPIO_PE_INTEN;

typedef union {
    sM2L31_GPIO_PE_INTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_INTEN;

#define M2L31_GPIO_PE_INTSRC_RESET_VALUE 0x00000020
typedef struct {
	unsigned long INTSRC0 : 1;
	unsigned long INTSRC1 : 1;
	unsigned long INTSRC2 : 1;
	unsigned long INTSRC3 : 1;
	unsigned long INTSRC4 : 1;
	unsigned long INTSRC5 : 1;
	unsigned long INTSRC6 : 1;
	unsigned long INTSRC7 : 1;
	unsigned long INTSRC8 : 1;
	unsigned long INTSRC9 : 1;
	unsigned long INTSRC10 : 1;
	unsigned long INTSRC11 : 1;
	unsigned long INTSRC12 : 1;
	unsigned long INTSRC13 : 1;
	unsigned long INTSRC14 : 1;
	unsigned long INTSRC15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PE_INTSRC;

typedef union {
    sM2L31_GPIO_PE_INTSRC Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_INTSRC;

#define M2L31_GPIO_PE_SMTEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long SMTEN0 : 1;
	unsigned long SMTEN1 : 1;
	unsigned long SMTEN2 : 1;
	unsigned long SMTEN3 : 1;
	unsigned long SMTEN4 : 1;
	unsigned long SMTEN5 : 1;
	unsigned long SMTEN6 : 1;
	unsigned long SMTEN7 : 1;
	unsigned long SMTEN8 : 1;
	unsigned long SMTEN9 : 1;
	unsigned long SMTEN10 : 1;
	unsigned long SMTEN11 : 1;
	unsigned long SMTEN12 : 1;
	unsigned long SMTEN13 : 1;
	unsigned long SMTEN14 : 1;
	unsigned long SMTEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PE_SMTEN;

typedef union {
    sM2L31_GPIO_PE_SMTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_SMTEN;

#define M2L31_GPIO_PE_SLEWCTL_RESET_VALUE 0x00000020
typedef struct {
    unsigned long HSREN0 : 2;
    unsigned long HSREN1 : 2;
    unsigned long HSREN2 : 2;
    unsigned long HSREN3 : 2;
    unsigned long HSREN4 : 2;
    unsigned long HSREN5 : 2;
    unsigned long HSREN6 : 2;
    unsigned long HSREN7 : 2;
    unsigned long HSREN8 : 2;
    unsigned long HSREN9 : 2;
    unsigned long HSREN10 : 2;
    unsigned long HSREN11 : 2;
    unsigned long HSREN12 : 2;
    unsigned long HSREN13 : 2;
    unsigned long HSREN14 : 2;
    unsigned long HSREN15 : 2;
} sM2L31_GPIO_PE_SLEWCTL;

typedef union {
    sM2L31_GPIO_PE_SLEWCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_SLEWCTL;

#define M2L31_GPIO_PE_PUSEL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long PUSEL0 : 2;
	unsigned long PUSEL1 : 2;
	unsigned long PUSEL2 : 2;
	unsigned long PUSEL3 : 2;
	unsigned long PUSEL4 : 2;
	unsigned long PUSEL5 : 2;
	unsigned long PUSEL6 : 2;
	unsigned long PUSEL7 : 2;
	unsigned long PUSEL8 : 2;
	unsigned long PUSEL9 : 2;
	unsigned long PUSEL10 : 2;
	unsigned long PUSEL11 : 2;
	unsigned long PUSEL12 : 2;
	unsigned long PUSEL13 : 2;
	unsigned long PUSEL14 : 2;
	unsigned long PUSEL15 : 2;
} sM2L31_GPIO_PE_PUSEL;

typedef union {
    sM2L31_GPIO_PE_PUSEL Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_PUSEL;

#define M2L31_GPIO_PE_DBCTL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBCLKSEL : 4;
	unsigned long DBCLKSRC : 1;
	unsigned long ICLKON : 1;
	unsigned long Res0 : 25;
	unsigned long DBCLKBUSY : 1;
} sM2L31_GPIO_PE_DBCTL;

typedef union {
    sM2L31_GPIO_PE_DBCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PE_DBCTL;

#define M2L31_GPIO_PF_MODE_RESET_VALUE 0x00000020
typedef struct {
    unsigned long MODE0 : 2;
    unsigned long MODE1 : 2;
    unsigned long MODE2 : 2;
    unsigned long MODE3 : 2;
    unsigned long MODE4 : 2;
    unsigned long MODE5 : 2;
    unsigned long MODE6 : 2;
    unsigned long MODE7 : 2;
    unsigned long MODE8 : 2;
    unsigned long MODE9 : 2;
    unsigned long MODE10 : 2;
    unsigned long MODE11 : 2;
    unsigned long MODE12 : 2;
    unsigned long MODE13 : 2;
    unsigned long MODE14 : 2;
    unsigned long MODE15 : 2;
} sM2L31_GPIO_PF_MODE;

typedef union {
    sM2L31_GPIO_PF_MODE Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_MODE;

#define M2L31_GPIO_PF_DINOFF_RESET_VALUE 0x00000020
typedef struct {
    unsigned long Res0 : 16;
    unsigned long DINOFF0 : 1;
    unsigned long DINOFF1 : 1;
    unsigned long DINOFF2 : 1;
    unsigned long DINOFF3 : 1;
    unsigned long DINOFF4 : 1;
    unsigned long DINOFF5 : 1;
    unsigned long DINOFF6 : 1;
    unsigned long DINOFF7 : 1;
    unsigned long DINOFF8 : 1;
    unsigned long DINOFF9 : 1;
    unsigned long DINOFF10 : 1;
    unsigned long DINOFF11 : 1;
    unsigned long DINOFF12 : 1;
    unsigned long DINOFF13 : 1;
    unsigned long DINOFF14 : 1;
    unsigned long DINOFF15 : 1;
} sM2L31_GPIO_PF_DINOFF;

typedef union {
    sM2L31_GPIO_PF_DINOFF Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_DINOFF;

#define M2L31_GPIO_PF_DOUT_RESET_VALUE 0x00000020
typedef struct {
    unsigned long DOUT0 : 1;
    unsigned long DOUT1 : 1;
    unsigned long DOUT2 : 1;
    unsigned long DOUT3 : 1;
    unsigned long DOUT4 : 1;
    unsigned long DOUT5 : 1;
    unsigned long DOUT6 : 1;
    unsigned long DOUT7 : 1;
    unsigned long DOUT8 : 1;
    unsigned long DOUT9 : 1;
    unsigned long DOUT10 : 1;
    unsigned long DOUT11 : 1;
    unsigned long DOUT12 : 1;
    unsigned long DOUT13 : 1;
    unsigned long DOUT14 : 1;
    unsigned long DOUT15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PF_DOUT;

typedef union {
    sM2L31_GPIO_PF_DOUT Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_DOUT;

#define M2L31_GPIO_PF_DATMSK_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DATMSK0 : 1;
	unsigned long DATMSK1 : 1;
	unsigned long DATMSK2 : 1;
	unsigned long DATMSK3 : 1;
	unsigned long DATMSK4 : 1;
	unsigned long DATMSK5 : 1;
	unsigned long DATMSK6 : 1;
	unsigned long DATMSK7 : 1;
	unsigned long DATMSK8 : 1;
	unsigned long DATMSK9 : 1;
	unsigned long DATMSK10 : 1;
	unsigned long DATMSK11 : 1;
	unsigned long DATMSK12 : 1;
	unsigned long DATMSK13 : 1;
	unsigned long DATMSK14 : 1;
	unsigned long DATMSK15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PF_DATMSK;

typedef union {
    sM2L31_GPIO_PF_DATMSK Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_DATMSK;

#define M2L31_GPIO_PF_PIN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long PIN0 : 1;
	unsigned long PIN1 : 1;
	unsigned long PIN2 : 1;
	unsigned long PIN3 : 1;
	unsigned long PIN4 : 1;
	unsigned long PIN5 : 1;
	unsigned long PIN6 : 1;
	unsigned long PIN7 : 1;
	unsigned long PIN8 : 1;
	unsigned long PIN9 : 1;
	unsigned long PIN10 : 1;
	unsigned long PIN11 : 1;
	unsigned long PIN12 : 1;
	unsigned long PIN13 : 1;
	unsigned long PIN14 : 1;
	unsigned long PIN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PF_PIN;

typedef union {
    sM2L31_GPIO_PF_PIN Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_PIN;

#define M2L31_GPIO_PF_DBEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBEN0 : 1;
	unsigned long DBEN1 : 1;
	unsigned long DBEN2 : 1;
	unsigned long DBEN3 : 1;
	unsigned long DBEN4 : 1;
	unsigned long DBEN5 : 1;
	unsigned long DBEN6 : 1;
	unsigned long DBEN7 : 1;
	unsigned long DBEN8 : 1;
	unsigned long DBEN9 : 1;
	unsigned long DBEN10 : 1;
	unsigned long DBEN11 : 1;
	unsigned long DBEN12 : 1;
	unsigned long DBEN13 : 1;
	unsigned long DBEN14 : 1;
	unsigned long DBEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PF_DBEN;

typedef union {
    sM2L31_GPIO_PF_DBEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_DBEN;

#define M2L31_GPIO_PF_INTTYPE_RESET_VALUE 0x00000020
typedef struct {
	unsigned long TYPE0 : 1;
	unsigned long TYPE1 : 1;
	unsigned long TYPE2 : 1;
	unsigned long TYPE3 : 1;
	unsigned long TYPE4 : 1;
	unsigned long TYPE5 : 1;
	unsigned long TYPE6 : 1;
	unsigned long TYPE7 : 1;
	unsigned long TYPE8 : 1;
	unsigned long TYPE9 : 1;
	unsigned long TYPE10 : 1;
	unsigned long TYPE11 : 1;
	unsigned long TYPE12 : 1;
	unsigned long TYPE13 : 1;
	unsigned long TYPE14 : 1;
	unsigned long TYPE15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PF_INTTYPE;

typedef union {
    sM2L31_GPIO_PF_INTTYPE Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_INTTYPE;

#define M2L31_GPIO_PF_INTEN_RESET_VALUE 0x00000020
typedef struct {
    unsigned long FLIEN0 : 1;
    unsigned long FLIEN1 : 1;
    unsigned long FLIEN2 : 1;
    unsigned long FLIEN3 : 1;
    unsigned long FLIEN4 : 1;
    unsigned long FLIEN5 : 1;
    unsigned long FLIEN6 : 1;
    unsigned long FLIEN7 : 1;
    unsigned long FLIEN8 : 1;
    unsigned long FLIEN9 : 1;
    unsigned long FLIEN10 : 1;
    unsigned long FLIEN11 : 1;
    unsigned long FLIEN12 : 1;
    unsigned long FLIEN13 : 1;
    unsigned long FLIEN14 : 1;
    unsigned long FLIEN15 : 1;
    unsigned long RHIEN0 : 1;
    unsigned long RHIEN1 : 1;
    unsigned long RHIEN2 : 1;
    unsigned long RHIEN3 : 1;
    unsigned long RHIEN4 : 1;
    unsigned long RHIEN5 : 1;
    unsigned long RHIEN6 : 1;
    unsigned long RHIEN7 : 1;
    unsigned long RHIEN8 : 1;
    unsigned long RHIEN9 : 1;
    unsigned long RHIEN10 : 1;
    unsigned long RHIEN11 : 1;
    unsigned long RHIEN12 : 1;
    unsigned long RHIEN13 : 1;
    unsigned long RHIEN14 : 1;
    unsigned long RHIEN15 : 1;
} sM2L31_GPIO_PF_INTEN;

typedef union {
    sM2L31_GPIO_PF_INTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_INTEN;

#define M2L31_GPIO_PF_INTSRC_RESET_VALUE 0x00000020
typedef struct {
	unsigned long INTSRC0 : 1;
	unsigned long INTSRC1 : 1;
	unsigned long INTSRC2 : 1;
	unsigned long INTSRC3 : 1;
	unsigned long INTSRC4 : 1;
	unsigned long INTSRC5 : 1;
	unsigned long INTSRC6 : 1;
	unsigned long INTSRC7 : 1;
	unsigned long INTSRC8 : 1;
	unsigned long INTSRC9 : 1;
	unsigned long INTSRC10 : 1;
	unsigned long INTSRC11 : 1;
	unsigned long INTSRC12 : 1;
	unsigned long INTSRC13 : 1;
	unsigned long INTSRC14 : 1;
	unsigned long INTSRC15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PF_INTSRC;

typedef union {
    sM2L31_GPIO_PF_INTSRC Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_INTSRC;

#define M2L31_GPIO_PF_SMTEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long SMTEN0 : 1;
	unsigned long SMTEN1 : 1;
	unsigned long SMTEN2 : 1;
	unsigned long SMTEN3 : 1;
	unsigned long SMTEN4 : 1;
	unsigned long SMTEN5 : 1;
	unsigned long SMTEN6 : 1;
	unsigned long SMTEN7 : 1;
	unsigned long SMTEN8 : 1;
	unsigned long SMTEN9 : 1;
	unsigned long SMTEN10 : 1;
	unsigned long SMTEN11 : 1;
	unsigned long SMTEN12 : 1;
	unsigned long SMTEN13 : 1;
	unsigned long SMTEN14 : 1;
	unsigned long SMTEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PF_SMTEN;

typedef union {
    sM2L31_GPIO_PF_SMTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_SMTEN;

#define M2L31_GPIO_PF_SLEWCTL_RESET_VALUE 0x00000020
typedef struct {
    unsigned long HSREN0 : 2;
    unsigned long HSREN1 : 2;
    unsigned long HSREN2 : 2;
    unsigned long HSREN3 : 2;
    unsigned long HSREN4 : 2;
    unsigned long HSREN5 : 2;
    unsigned long HSREN6 : 2;
    unsigned long HSREN7 : 2;
    unsigned long HSREN8 : 2;
    unsigned long HSREN9 : 2;
    unsigned long HSREN10 : 2;
    unsigned long HSREN11 : 2;
    unsigned long HSREN12 : 2;
    unsigned long HSREN13 : 2;
    unsigned long HSREN14 : 2;
    unsigned long HSREN15 : 2;
} sM2L31_GPIO_PF_SLEWCTL;

typedef union {
    sM2L31_GPIO_PF_SLEWCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_SLEWCTL;

#define M2L31_GPIO_PF_PUSEL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long PUSEL0 : 2;
	unsigned long PUSEL1 : 2;
	unsigned long PUSEL2 : 2;
	unsigned long PUSEL3 : 2;
	unsigned long PUSEL4 : 2;
	unsigned long PUSEL5 : 2;
	unsigned long PUSEL6 : 2;
	unsigned long PUSEL7 : 2;
	unsigned long PUSEL8 : 2;
	unsigned long PUSEL9 : 2;
	unsigned long PUSEL10 : 2;
	unsigned long PUSEL11 : 2;
	unsigned long PUSEL12 : 2;
	unsigned long PUSEL13 : 2;
	unsigned long PUSEL14 : 2;
	unsigned long PUSEL15 : 2;
} sM2L31_GPIO_PF_PUSEL;

typedef union {
    sM2L31_GPIO_PF_PUSEL Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_PUSEL;

#define M2L31_GPIO_PF_DBCTL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBCLKSEL : 4;
	unsigned long DBCLKSRC : 1;
	unsigned long ICLKON : 1;
	unsigned long Res0 : 25;
	unsigned long DBCLKBUSY : 1;
} sM2L31_GPIO_PF_DBCTL;

typedef union {
    sM2L31_GPIO_PF_DBCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PF_DBCTL;

#define M2L31_GPIO_PG_MODE_RESET_VALUE 0x00000020
typedef struct {
    unsigned long MODE0 : 2;
    unsigned long MODE1 : 2;
    unsigned long MODE2 : 2;
    unsigned long MODE3 : 2;
    unsigned long MODE4 : 2;
    unsigned long MODE5 : 2;
    unsigned long MODE6 : 2;
    unsigned long MODE7 : 2;
    unsigned long MODE8 : 2;
    unsigned long MODE9 : 2;
    unsigned long MODE10 : 2;
    unsigned long MODE11 : 2;
    unsigned long MODE12 : 2;
    unsigned long MODE13 : 2;
    unsigned long MODE14 : 2;
    unsigned long MODE15 : 2;
} sM2L31_GPIO_PG_MODE;

typedef union {
    sM2L31_GPIO_PG_MODE Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_MODE;

#define M2L31_GPIO_PG_DINOFF_RESET_VALUE 0x00000020
typedef struct {
    unsigned long Res0 : 16;
    unsigned long DINOFF0 : 1;
    unsigned long DINOFF1 : 1;
    unsigned long DINOFF2 : 1;
    unsigned long DINOFF3 : 1;
    unsigned long DINOFF4 : 1;
    unsigned long DINOFF5 : 1;
    unsigned long DINOFF6 : 1;
    unsigned long DINOFF7 : 1;
    unsigned long DINOFF8 : 1;
    unsigned long DINOFF9 : 1;
    unsigned long DINOFF10 : 1;
    unsigned long DINOFF11 : 1;
    unsigned long DINOFF12 : 1;
    unsigned long DINOFF13 : 1;
    unsigned long DINOFF14 : 1;
    unsigned long DINOFF15 : 1;
} sM2L31_GPIO_PG_DINOFF;

typedef union {
    sM2L31_GPIO_PG_DINOFF Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_DINOFF;

#define M2L31_GPIO_PG_DOUT_RESET_VALUE 0x00000020
typedef struct {
    unsigned long DOUT0 : 1;
    unsigned long DOUT1 : 1;
    unsigned long DOUT2 : 1;
    unsigned long DOUT3 : 1;
    unsigned long DOUT4 : 1;
    unsigned long DOUT5 : 1;
    unsigned long DOUT6 : 1;
    unsigned long DOUT7 : 1;
    unsigned long DOUT8 : 1;
    unsigned long DOUT9 : 1;
    unsigned long DOUT10 : 1;
    unsigned long DOUT11 : 1;
    unsigned long DOUT12 : 1;
    unsigned long DOUT13 : 1;
    unsigned long DOUT14 : 1;
    unsigned long DOUT15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PG_DOUT;

typedef union {
    sM2L31_GPIO_PG_DOUT Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_DOUT;

#define M2L31_GPIO_PG_DATMSK_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DATMSK0 : 1;
	unsigned long DATMSK1 : 1;
	unsigned long DATMSK2 : 1;
	unsigned long DATMSK3 : 1;
	unsigned long DATMSK4 : 1;
	unsigned long DATMSK5 : 1;
	unsigned long DATMSK6 : 1;
	unsigned long DATMSK7 : 1;
	unsigned long DATMSK8 : 1;
	unsigned long DATMSK9 : 1;
	unsigned long DATMSK10 : 1;
	unsigned long DATMSK11 : 1;
	unsigned long DATMSK12 : 1;
	unsigned long DATMSK13 : 1;
	unsigned long DATMSK14 : 1;
	unsigned long DATMSK15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PG_DATMSK;

typedef union {
    sM2L31_GPIO_PG_DATMSK Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_DATMSK;

#define M2L31_GPIO_PG_PIN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long PIN0 : 1;
	unsigned long PIN1 : 1;
	unsigned long PIN2 : 1;
	unsigned long PIN3 : 1;
	unsigned long PIN4 : 1;
	unsigned long PIN5 : 1;
	unsigned long PIN6 : 1;
	unsigned long PIN7 : 1;
	unsigned long PIN8 : 1;
	unsigned long PIN9 : 1;
	unsigned long PIN10 : 1;
	unsigned long PIN11 : 1;
	unsigned long PIN12 : 1;
	unsigned long PIN13 : 1;
	unsigned long PIN14 : 1;
	unsigned long PIN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PG_PIN;

typedef union {
    sM2L31_GPIO_PG_PIN Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_PIN;

#define M2L31_GPIO_PG_DBEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBEN0 : 1;
	unsigned long DBEN1 : 1;
	unsigned long DBEN2 : 1;
	unsigned long DBEN3 : 1;
	unsigned long DBEN4 : 1;
	unsigned long DBEN5 : 1;
	unsigned long DBEN6 : 1;
	unsigned long DBEN7 : 1;
	unsigned long DBEN8 : 1;
	unsigned long DBEN9 : 1;
	unsigned long DBEN10 : 1;
	unsigned long DBEN11 : 1;
	unsigned long DBEN12 : 1;
	unsigned long DBEN13 : 1;
	unsigned long DBEN14 : 1;
	unsigned long DBEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PG_DBEN;

typedef union {
    sM2L31_GPIO_PG_DBEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_DBEN;

#define M2L31_GPIO_PG_INTTYPE_RESET_VALUE 0x00000020
typedef struct {
	unsigned long TYPE0 : 1;
	unsigned long TYPE1 : 1;
	unsigned long TYPE2 : 1;
	unsigned long TYPE3 : 1;
	unsigned long TYPE4 : 1;
	unsigned long TYPE5 : 1;
	unsigned long TYPE6 : 1;
	unsigned long TYPE7 : 1;
	unsigned long TYPE8 : 1;
	unsigned long TYPE9 : 1;
	unsigned long TYPE10 : 1;
	unsigned long TYPE11 : 1;
	unsigned long TYPE12 : 1;
	unsigned long TYPE13 : 1;
	unsigned long TYPE14 : 1;
	unsigned long TYPE15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PG_INTTYPE;

typedef union {
    sM2L31_GPIO_PG_INTTYPE Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_INTTYPE;

#define M2L31_GPIO_PG_INTEN_RESET_VALUE 0x00000020
typedef struct {
    unsigned long FLIEN0 : 1;
    unsigned long FLIEN1 : 1;
    unsigned long FLIEN2 : 1;
    unsigned long FLIEN3 : 1;
    unsigned long FLIEN4 : 1;
    unsigned long FLIEN5 : 1;
    unsigned long FLIEN6 : 1;
    unsigned long FLIEN7 : 1;
    unsigned long FLIEN8 : 1;
    unsigned long FLIEN9 : 1;
    unsigned long FLIEN10 : 1;
    unsigned long FLIEN11 : 1;
    unsigned long FLIEN12 : 1;
    unsigned long FLIEN13 : 1;
    unsigned long FLIEN14 : 1;
    unsigned long FLIEN15 : 1;
    unsigned long RHIEN0 : 1;
    unsigned long RHIEN1 : 1;
    unsigned long RHIEN2 : 1;
    unsigned long RHIEN3 : 1;
    unsigned long RHIEN4 : 1;
    unsigned long RHIEN5 : 1;
    unsigned long RHIEN6 : 1;
    unsigned long RHIEN7 : 1;
    unsigned long RHIEN8 : 1;
    unsigned long RHIEN9 : 1;
    unsigned long RHIEN10 : 1;
    unsigned long RHIEN11 : 1;
    unsigned long RHIEN12 : 1;
    unsigned long RHIEN13 : 1;
    unsigned long RHIEN14 : 1;
    unsigned long RHIEN15 : 1;
} sM2L31_GPIO_PG_INTEN;

typedef union {
    sM2L31_GPIO_PG_INTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_INTEN;

#define M2L31_GPIO_PG_INTSRC_RESET_VALUE 0x00000020
typedef struct {
	unsigned long INTSRC0 : 1;
	unsigned long INTSRC1 : 1;
	unsigned long INTSRC2 : 1;
	unsigned long INTSRC3 : 1;
	unsigned long INTSRC4 : 1;
	unsigned long INTSRC5 : 1;
	unsigned long INTSRC6 : 1;
	unsigned long INTSRC7 : 1;
	unsigned long INTSRC8 : 1;
	unsigned long INTSRC9 : 1;
	unsigned long INTSRC10 : 1;
	unsigned long INTSRC11 : 1;
	unsigned long INTSRC12 : 1;
	unsigned long INTSRC13 : 1;
	unsigned long INTSRC14 : 1;
	unsigned long INTSRC15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PG_INTSRC;

typedef union {
    sM2L31_GPIO_PG_INTSRC Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_INTSRC;

#define M2L31_GPIO_PG_SMTEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long SMTEN0 : 1;
	unsigned long SMTEN1 : 1;
	unsigned long SMTEN2 : 1;
	unsigned long SMTEN3 : 1;
	unsigned long SMTEN4 : 1;
	unsigned long SMTEN5 : 1;
	unsigned long SMTEN6 : 1;
	unsigned long SMTEN7 : 1;
	unsigned long SMTEN8 : 1;
	unsigned long SMTEN9 : 1;
	unsigned long SMTEN10 : 1;
	unsigned long SMTEN11 : 1;
	unsigned long SMTEN12 : 1;
	unsigned long SMTEN13 : 1;
	unsigned long SMTEN14 : 1;
	unsigned long SMTEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PG_SMTEN;

typedef union {
    sM2L31_GPIO_PG_SMTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_SMTEN;

#define M2L31_GPIO_PG_SLEWCTL_RESET_VALUE 0x00000020
typedef struct {
    unsigned long HSREN0 : 2;
    unsigned long HSREN1 : 2;
    unsigned long HSREN2 : 2;
    unsigned long HSREN3 : 2;
    unsigned long HSREN4 : 2;
    unsigned long HSREN5 : 2;
    unsigned long HSREN6 : 2;
    unsigned long HSREN7 : 2;
    unsigned long HSREN8 : 2;
    unsigned long HSREN9 : 2;
    unsigned long HSREN10 : 2;
    unsigned long HSREN11 : 2;
    unsigned long HSREN12 : 2;
    unsigned long HSREN13 : 2;
    unsigned long HSREN14 : 2;
    unsigned long HSREN15 : 2;
} sM2L31_GPIO_PG_SLEWCTL;

typedef union {
    sM2L31_GPIO_PG_SLEWCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_SLEWCTL;

#define M2L31_GPIO_PG_PUSEL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long PUSEL0 : 2;
	unsigned long PUSEL1 : 2;
	unsigned long PUSEL2 : 2;
	unsigned long PUSEL3 : 2;
	unsigned long PUSEL4 : 2;
	unsigned long PUSEL5 : 2;
	unsigned long PUSEL6 : 2;
	unsigned long PUSEL7 : 2;
	unsigned long PUSEL8 : 2;
	unsigned long PUSEL9 : 2;
	unsigned long PUSEL10 : 2;
	unsigned long PUSEL11 : 2;
	unsigned long PUSEL12 : 2;
	unsigned long PUSEL13 : 2;
	unsigned long PUSEL14 : 2;
	unsigned long PUSEL15 : 2;
} sM2L31_GPIO_PG_PUSEL;

typedef union {
    sM2L31_GPIO_PG_PUSEL Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_PUSEL;

#define M2L31_GPIO_PG_DBCTL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBCLKSEL : 4;
	unsigned long DBCLKSRC : 1;
	unsigned long ICLKON : 1;
	unsigned long Res0 : 25;
	unsigned long DBCLKBUSY : 1;
} sM2L31_GPIO_PG_DBCTL;

typedef union {
    sM2L31_GPIO_PG_DBCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PG_DBCTL;

#define M2L31_GPIO_PH_MODE_RESET_VALUE 0x00000020
typedef struct {
    unsigned long MODE0 : 2;
    unsigned long MODE1 : 2;
    unsigned long MODE2 : 2;
    unsigned long MODE3 : 2;
    unsigned long MODE4 : 2;
    unsigned long MODE5 : 2;
    unsigned long MODE6 : 2;
    unsigned long MODE7 : 2;
    unsigned long MODE8 : 2;
    unsigned long MODE9 : 2;
    unsigned long MODE10 : 2;
    unsigned long MODE11 : 2;
    unsigned long MODE12 : 2;
    unsigned long MODE13 : 2;
    unsigned long MODE14 : 2;
    unsigned long MODE15 : 2;
} sM2L31_GPIO_PH_MODE;

typedef union {
    sM2L31_GPIO_PH_MODE Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_MODE;

#define M2L31_GPIO_PH_DINOFF_RESET_VALUE 0x00000020
typedef struct {
    unsigned long Res0 : 16;
    unsigned long DINOFF0 : 1;
    unsigned long DINOFF1 : 1;
    unsigned long DINOFF2 : 1;
    unsigned long DINOFF3 : 1;
    unsigned long DINOFF4 : 1;
    unsigned long DINOFF5 : 1;
    unsigned long DINOFF6 : 1;
    unsigned long DINOFF7 : 1;
    unsigned long DINOFF8 : 1;
    unsigned long DINOFF9 : 1;
    unsigned long DINOFF10 : 1;
    unsigned long DINOFF11 : 1;
    unsigned long DINOFF12 : 1;
    unsigned long DINOFF13 : 1;
    unsigned long DINOFF14 : 1;
    unsigned long DINOFF15 : 1;
} sM2L31_GPIO_PH_DINOFF;

typedef union {
    sM2L31_GPIO_PH_DINOFF Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_DINOFF;

#define M2L31_GPIO_PH_DOUT_RESET_VALUE 0x00000020
typedef struct {
    unsigned long DOUT0 : 1;
    unsigned long DOUT1 : 1;
    unsigned long DOUT2 : 1;
    unsigned long DOUT3 : 1;
    unsigned long DOUT4 : 1;
    unsigned long DOUT5 : 1;
    unsigned long DOUT6 : 1;
    unsigned long DOUT7 : 1;
    unsigned long DOUT8 : 1;
    unsigned long DOUT9 : 1;
    unsigned long DOUT10 : 1;
    unsigned long DOUT11 : 1;
    unsigned long DOUT12 : 1;
    unsigned long DOUT13 : 1;
    unsigned long DOUT14 : 1;
    unsigned long DOUT15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PH_DOUT;

typedef union {
    sM2L31_GPIO_PH_DOUT Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_DOUT;

#define M2L31_GPIO_PH_DATMSK_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DATMSK0 : 1;
	unsigned long DATMSK1 : 1;
	unsigned long DATMSK2 : 1;
	unsigned long DATMSK3 : 1;
	unsigned long DATMSK4 : 1;
	unsigned long DATMSK5 : 1;
	unsigned long DATMSK6 : 1;
	unsigned long DATMSK7 : 1;
	unsigned long DATMSK8 : 1;
	unsigned long DATMSK9 : 1;
	unsigned long DATMSK10 : 1;
	unsigned long DATMSK11 : 1;
	unsigned long DATMSK12 : 1;
	unsigned long DATMSK13 : 1;
	unsigned long DATMSK14 : 1;
	unsigned long DATMSK15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PH_DATMSK;

typedef union {
    sM2L31_GPIO_PH_DATMSK Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_DATMSK;

#define M2L31_GPIO_PH_PIN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long PIN0 : 1;
	unsigned long PIN1 : 1;
	unsigned long PIN2 : 1;
	unsigned long PIN3 : 1;
	unsigned long PIN4 : 1;
	unsigned long PIN5 : 1;
	unsigned long PIN6 : 1;
	unsigned long PIN7 : 1;
	unsigned long PIN8 : 1;
	unsigned long PIN9 : 1;
	unsigned long PIN10 : 1;
	unsigned long PIN11 : 1;
	unsigned long PIN12 : 1;
	unsigned long PIN13 : 1;
	unsigned long PIN14 : 1;
	unsigned long PIN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PH_PIN;

typedef union {
    sM2L31_GPIO_PH_PIN Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_PIN;

#define M2L31_GPIO_PH_DBEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBEN0 : 1;
	unsigned long DBEN1 : 1;
	unsigned long DBEN2 : 1;
	unsigned long DBEN3 : 1;
	unsigned long DBEN4 : 1;
	unsigned long DBEN5 : 1;
	unsigned long DBEN6 : 1;
	unsigned long DBEN7 : 1;
	unsigned long DBEN8 : 1;
	unsigned long DBEN9 : 1;
	unsigned long DBEN10 : 1;
	unsigned long DBEN11 : 1;
	unsigned long DBEN12 : 1;
	unsigned long DBEN13 : 1;
	unsigned long DBEN14 : 1;
	unsigned long DBEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PH_DBEN;

typedef union {
    sM2L31_GPIO_PH_DBEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_DBEN;

#define M2L31_GPIO_PH_INTTYPE_RESET_VALUE 0x00000020
typedef struct {
	unsigned long TYPE0 : 1;
	unsigned long TYPE1 : 1;
	unsigned long TYPE2 : 1;
	unsigned long TYPE3 : 1;
	unsigned long TYPE4 : 1;
	unsigned long TYPE5 : 1;
	unsigned long TYPE6 : 1;
	unsigned long TYPE7 : 1;
	unsigned long TYPE8 : 1;
	unsigned long TYPE9 : 1;
	unsigned long TYPE10 : 1;
	unsigned long TYPE11 : 1;
	unsigned long TYPE12 : 1;
	unsigned long TYPE13 : 1;
	unsigned long TYPE14 : 1;
	unsigned long TYPE15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PH_INTTYPE;

typedef union {
    sM2L31_GPIO_PH_INTTYPE Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_INTTYPE;

#define M2L31_GPIO_PH_INTEN_RESET_VALUE 0x00000020
typedef struct {
    unsigned long FLIEN0 : 1;
    unsigned long FLIEN1 : 1;
    unsigned long FLIEN2 : 1;
    unsigned long FLIEN3 : 1;
    unsigned long FLIEN4 : 1;
    unsigned long FLIEN5 : 1;
    unsigned long FLIEN6 : 1;
    unsigned long FLIEN7 : 1;
    unsigned long FLIEN8 : 1;
    unsigned long FLIEN9 : 1;
    unsigned long FLIEN10 : 1;
    unsigned long FLIEN11 : 1;
    unsigned long FLIEN12 : 1;
    unsigned long FLIEN13 : 1;
    unsigned long FLIEN14 : 1;
    unsigned long FLIEN15 : 1;
    unsigned long RHIEN0 : 1;
    unsigned long RHIEN1 : 1;
    unsigned long RHIEN2 : 1;
    unsigned long RHIEN3 : 1;
    unsigned long RHIEN4 : 1;
    unsigned long RHIEN5 : 1;
    unsigned long RHIEN6 : 1;
    unsigned long RHIEN7 : 1;
    unsigned long RHIEN8 : 1;
    unsigned long RHIEN9 : 1;
    unsigned long RHIEN10 : 1;
    unsigned long RHIEN11 : 1;
    unsigned long RHIEN12 : 1;
    unsigned long RHIEN13 : 1;
    unsigned long RHIEN14 : 1;
    unsigned long RHIEN15 : 1;
} sM2L31_GPIO_PH_INTEN;

typedef union {
    sM2L31_GPIO_PH_INTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_INTEN;

#define M2L31_GPIO_PH_INTSRC_RESET_VALUE 0x00000020
typedef struct {
	unsigned long INTSRC0 : 1;
	unsigned long INTSRC1 : 1;
	unsigned long INTSRC2 : 1;
	unsigned long INTSRC3 : 1;
	unsigned long INTSRC4 : 1;
	unsigned long INTSRC5 : 1;
	unsigned long INTSRC6 : 1;
	unsigned long INTSRC7 : 1;
	unsigned long INTSRC8 : 1;
	unsigned long INTSRC9 : 1;
	unsigned long INTSRC10 : 1;
	unsigned long INTSRC11 : 1;
	unsigned long INTSRC12 : 1;
	unsigned long INTSRC13 : 1;
	unsigned long INTSRC14 : 1;
	unsigned long INTSRC15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PH_INTSRC;

typedef union {
    sM2L31_GPIO_PH_INTSRC Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_INTSRC;

#define M2L31_GPIO_PH_SMTEN_RESET_VALUE 0x00000020
typedef struct {
	unsigned long SMTEN0 : 1;
	unsigned long SMTEN1 : 1;
	unsigned long SMTEN2 : 1;
	unsigned long SMTEN3 : 1;
	unsigned long SMTEN4 : 1;
	unsigned long SMTEN5 : 1;
	unsigned long SMTEN6 : 1;
	unsigned long SMTEN7 : 1;
	unsigned long SMTEN8 : 1;
	unsigned long SMTEN9 : 1;
	unsigned long SMTEN10 : 1;
	unsigned long SMTEN11 : 1;
	unsigned long SMTEN12 : 1;
	unsigned long SMTEN13 : 1;
	unsigned long SMTEN14 : 1;
	unsigned long SMTEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_GPIO_PH_SMTEN;

typedef union {
    sM2L31_GPIO_PH_SMTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_SMTEN;

#define M2L31_GPIO_PH_SLEWCTL_RESET_VALUE 0x00000020
typedef struct {
    unsigned long HSREN0 : 2;
    unsigned long HSREN1 : 2;
    unsigned long HSREN2 : 2;
    unsigned long HSREN3 : 2;
    unsigned long HSREN4 : 2;
    unsigned long HSREN5 : 2;
    unsigned long HSREN6 : 2;
    unsigned long HSREN7 : 2;
    unsigned long HSREN8 : 2;
    unsigned long HSREN9 : 2;
    unsigned long HSREN10 : 2;
    unsigned long HSREN11 : 2;
    unsigned long HSREN12 : 2;
    unsigned long HSREN13 : 2;
    unsigned long HSREN14 : 2;
    unsigned long HSREN15 : 2;
} sM2L31_GPIO_PH_SLEWCTL;

typedef union {
    sM2L31_GPIO_PH_SLEWCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_SLEWCTL;

#define M2L31_GPIO_PH_PUSEL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long PUSEL0 : 2;
	unsigned long PUSEL1 : 2;
	unsigned long PUSEL2 : 2;
	unsigned long PUSEL3 : 2;
	unsigned long PUSEL4 : 2;
	unsigned long PUSEL5 : 2;
	unsigned long PUSEL6 : 2;
	unsigned long PUSEL7 : 2;
	unsigned long PUSEL8 : 2;
	unsigned long PUSEL9 : 2;
	unsigned long PUSEL10 : 2;
	unsigned long PUSEL11 : 2;
	unsigned long PUSEL12 : 2;
	unsigned long PUSEL13 : 2;
	unsigned long PUSEL14 : 2;
	unsigned long PUSEL15 : 2;
} sM2L31_GPIO_PH_PUSEL;

typedef union {
    sM2L31_GPIO_PH_PUSEL Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_PUSEL;

#define M2L31_GPIO_PH_DBCTL_RESET_VALUE 0x00000020
typedef struct {
	unsigned long DBCLKSEL : 4;
	unsigned long DBCLKSRC : 1;
	unsigned long ICLKON : 1;
	unsigned long Res0 : 25;
	unsigned long DBCLKBUSY : 1;
} sM2L31_GPIO_PH_DBCTL;

typedef union {
    sM2L31_GPIO_PH_DBCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_PH_DBCTL;

#define M2L31_GPIO_INT0_INNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NFEN : 1;
    unsigned long Res0 : 3;
    unsigned long NFSEL : 3;
    unsigned long Res1 : 1;
    unsigned long NFCNT : 3;
    unsigned long Res2 : 21;
} sM2L31_GPIO_INT0_INNF;

typedef union {
    sM2L31_GPIO_INT0_INNF Bit;
    unsigned long  All;
} uM2L31_GPIO_INT0_INNF;

#define M2L31_GPIO_INT1_INNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NFEN : 1;
    unsigned long Res0 : 3;
    unsigned long NFSEL : 3;
    unsigned long Res1 : 1;
    unsigned long NFCNT : 3;
    unsigned long Res2 : 21;
} sM2L31_GPIO_INT1_INNF;

typedef union {
    sM2L31_GPIO_INT1_INNF Bit;
    unsigned long  All;
} uM2L31_GPIO_INT1_INNF;

#define M2L31_GPIO_INT2_INNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NFEN : 1;
    unsigned long Res0 : 3;
    unsigned long NFSEL : 3;
    unsigned long Res1 : 1;
    unsigned long NFCNT : 3;
    unsigned long Res2 : 21;
} sM2L31_GPIO_INT2_INNF;

typedef union {
    sM2L31_GPIO_INT2_INNF Bit;
    unsigned long  All;
} uM2L31_GPIO_INT2_INNF;

#define M2L31_GPIO_INT3_INNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NFEN : 1;
    unsigned long Res0 : 3;
    unsigned long NFSEL : 3;
    unsigned long Res1 : 1;
    unsigned long NFCNT : 3;
    unsigned long Res2 : 21;
} sM2L31_GPIO_INT3_INNF;

typedef union {
    sM2L31_GPIO_INT3_INNF Bit;
    unsigned long  All;
} uM2L31_GPIO_INT3_INNF;

#define M2L31_GPIO_INT4_INNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NFEN : 1;
    unsigned long Res0 : 3;
    unsigned long NFSEL : 3;
    unsigned long Res1 : 1;
    unsigned long NFCNT : 3;
    unsigned long Res2 : 21;
} sM2L31_GPIO_INT4_INNF;

typedef union {
    sM2L31_GPIO_INT4_INNF Bit;
    unsigned long  All;
} uM2L31_GPIO_INT4_INNF;

#define M2L31_GPIO_INT5_INNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NFEN : 1;
    unsigned long Res0 : 3;
    unsigned long NFSEL : 3;
    unsigned long Res1 : 1;
    unsigned long NFCNT : 3;
    unsigned long Res2 : 21;
} sM2L31_GPIO_INT5_INNF;

typedef union {
    sM2L31_GPIO_INT5_INNF Bit;
    unsigned long  All;
} uM2L31_GPIO_INT5_INNF;

#define M2L31_GPIO_INT6_INNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NFEN : 1;
    unsigned long Res0 : 3;
    unsigned long NFSEL : 3;
    unsigned long Res1 : 1;
    unsigned long NFCNT : 3;
    unsigned long Res2 : 21;
} sM2L31_GPIO_INT6_INNF;

typedef union {
    sM2L31_GPIO_INT6_INNF Bit;
    unsigned long  All;
} uM2L31_GPIO_INT6_INNF;

#define M2L31_GPIO_INT7_INNF_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NFEN : 1;
    unsigned long Res0 : 3;
    unsigned long NFSEL : 3;
    unsigned long Res1 : 1;
    unsigned long NFCNT : 3;
    unsigned long Res2 : 21;
} sM2L31_GPIO_INT7_INNF;

typedef union {
    sM2L31_GPIO_INT7_INNF Bit;
    unsigned long  All;
} uM2L31_GPIO_INT7_INNF;

#define M2L31_GPIO_INT_EDETCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EDETCTL0 : 2;
    unsigned long EDETCTL1 : 2;
    unsigned long EDETCTL2 : 2;
    unsigned long EDETCTL3 : 2;
    unsigned long EDETCTL4 : 2;
    unsigned long EDETCTL5 : 2;
    unsigned long EDETCTL6 : 2;
    unsigned long EDETCTL7 : 2;
    unsigned long Res0 : 16;
} sM2L31_GPIO_INT_EDETCTL;

typedef union {
    sM2L31_GPIO_INT_EDETCTL Bit;
    unsigned long  All;
} uM2L31_GPIO_INT_EDETCTL;

#define M2L31_GPIO_INT_EDINTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EDIEN0 : 1;
    unsigned long EDIEN1 : 1;
    unsigned long EDIEN2 : 1;
    unsigned long EDIEN3 : 1;
    unsigned long EDIEN4 : 1;
    unsigned long EDIEN5 : 1;
    unsigned long EDIEN6 : 1;
    unsigned long EDIEN7 : 1;
    unsigned long Res0 : 24;
} sM2L31_GPIO_INT_EDINTEN;

typedef union {
    sM2L31_GPIO_INT_EDINTEN Bit;
    unsigned long  All;
} uM2L31_GPIO_INT_EDINTEN;

#define M2L31_GPIO_INT_EDSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long EDIF0 : 1;
    unsigned long EDIF1 : 1;
    unsigned long EDIF2 : 1;
    unsigned long EDIF3 : 1;
    unsigned long EDIF4 : 1;
    unsigned long EDIF5 : 1;
    unsigned long EDIF6 : 1;
    unsigned long EDIF7 : 1;
    unsigned long Res0 : 24;
} sM2L31_GPIO_INT_EDSTS;

typedef union {
    sM2L31_GPIO_INT_EDSTS Bit;
    unsigned long  All;
} uM2L31_GPIO_INT_EDSTS;

#define M2L31_GPIO_PA0_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA0_PDIO;

typedef union {
    sM2L31_GPIO_PA0_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA0_PDIO;

#define M2L31_GPIO_PA1_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA1_PDIO;

typedef union {
    sM2L31_GPIO_PA1_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA1_PDIO;

#define M2L31_GPIO_PA2_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA2_PDIO;

typedef union {
    sM2L31_GPIO_PA2_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA2_PDIO;

#define M2L31_GPIO_PA3_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA3_PDIO;

typedef union {
    sM2L31_GPIO_PA3_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA3_PDIO;

#define M2L31_GPIO_PA4_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA4_PDIO;

typedef union {
    sM2L31_GPIO_PA4_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA4_PDIO;

#define M2L31_GPIO_PA5_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA5_PDIO;

typedef union {
    sM2L31_GPIO_PA5_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA5_PDIO;

#define M2L31_GPIO_PA6_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA6_PDIO;

typedef union {
    sM2L31_GPIO_PA6_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA6_PDIO;

#define M2L31_GPIO_PA7_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA7_PDIO;

typedef union {
    sM2L31_GPIO_PA7_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA7_PDIO;

#define M2L31_GPIO_PA8_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA8_PDIO;

typedef union {
    sM2L31_GPIO_PA8_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA8_PDIO;

#define M2L31_GPIO_PA9_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA9_PDIO;

typedef union {
    sM2L31_GPIO_PA9_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA9_PDIO;

#define M2L31_GPIO_PA10_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA10_PDIO;

typedef union {
    sM2L31_GPIO_PA10_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA10_PDIO;

#define M2L31_GPIO_PA11_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA11_PDIO;

typedef union {
    sM2L31_GPIO_PA11_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA11_PDIO;

#define M2L31_GPIO_PA12_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA12_PDIO;

typedef union {
    sM2L31_GPIO_PA12_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA12_PDIO;

#define M2L31_GPIO_PA13_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA13_PDIO;

typedef union {
    sM2L31_GPIO_PA13_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA13_PDIO;

#define M2L31_GPIO_PA14_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA14_PDIO;

typedef union {
    sM2L31_GPIO_PA14_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA14_PDIO;

#define M2L31_GPIO_PA15_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PA15_PDIO;

typedef union {
    sM2L31_GPIO_PA15_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PA15_PDIO;

#define M2L31_GPIO_PB0_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB0_PDIO;

typedef union {
    sM2L31_GPIO_PB0_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB0_PDIO;

#define M2L31_GPIO_PB1_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB1_PDIO;

typedef union {
    sM2L31_GPIO_PB1_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB1_PDIO;

#define M2L31_GPIO_PB2_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB2_PDIO;

typedef union {
    sM2L31_GPIO_PB2_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB2_PDIO;

#define M2L31_GPIO_PB3_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB3_PDIO;

typedef union {
    sM2L31_GPIO_PB3_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB3_PDIO;

#define M2L31_GPIO_PB4_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB4_PDIO;

typedef union {
    sM2L31_GPIO_PB4_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB4_PDIO;

#define M2L31_GPIO_PB5_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB5_PDIO;

typedef union {
    sM2L31_GPIO_PB5_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB5_PDIO;

#define M2L31_GPIO_PB6_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB6_PDIO;

typedef union {
    sM2L31_GPIO_PB6_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB6_PDIO;

#define M2L31_GPIO_PB7_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB7_PDIO;

typedef union {
    sM2L31_GPIO_PB7_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB7_PDIO;

#define M2L31_GPIO_PB8_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB8_PDIO;

typedef union {
    sM2L31_GPIO_PB8_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB8_PDIO;

#define M2L31_GPIO_PB9_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB9_PDIO;

typedef union {
    sM2L31_GPIO_PB9_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB9_PDIO;

#define M2L31_GPIO_PB10_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB10_PDIO;

typedef union {
    sM2L31_GPIO_PB10_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB10_PDIO;

#define M2L31_GPIO_PB11_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB11_PDIO;

typedef union {
    sM2L31_GPIO_PB11_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB11_PDIO;

#define M2L31_GPIO_PB12_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB12_PDIO;

typedef union {
    sM2L31_GPIO_PB12_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB12_PDIO;

#define M2L31_GPIO_PB13_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB13_PDIO;

typedef union {
    sM2L31_GPIO_PB13_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB13_PDIO;

#define M2L31_GPIO_PB14_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB14_PDIO;

typedef union {
    sM2L31_GPIO_PB14_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB14_PDIO;

#define M2L31_GPIO_PB15_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PB15_PDIO;

typedef union {
    sM2L31_GPIO_PB15_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PB15_PDIO;

#define M2L31_GPIO_PC0_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC0_PDIO;

typedef union {
    sM2L31_GPIO_PC0_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC0_PDIO;

#define M2L31_GPIO_PC1_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC1_PDIO;

typedef union {
    sM2L31_GPIO_PC1_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC1_PDIO;

#define M2L31_GPIO_PC2_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC2_PDIO;

typedef union {
    sM2L31_GPIO_PC2_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC2_PDIO;

#define M2L31_GPIO_PC3_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC3_PDIO;

typedef union {
    sM2L31_GPIO_PC3_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC3_PDIO;

#define M2L31_GPIO_PC4_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC4_PDIO;

typedef union {
    sM2L31_GPIO_PC4_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC4_PDIO;

#define M2L31_GPIO_PC5_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC5_PDIO;

typedef union {
    sM2L31_GPIO_PC5_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC5_PDIO;

#define M2L31_GPIO_PC6_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC6_PDIO;

typedef union {
    sM2L31_GPIO_PC6_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC6_PDIO;

#define M2L31_GPIO_PC7_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC7_PDIO;

typedef union {
    sM2L31_GPIO_PC7_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC7_PDIO;

#define M2L31_GPIO_PC8_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC8_PDIO;

typedef union {
    sM2L31_GPIO_PC8_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC8_PDIO;

#define M2L31_GPIO_PC9_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC9_PDIO;

typedef union {
    sM2L31_GPIO_PC9_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC9_PDIO;

#define M2L31_GPIO_PC10_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC10_PDIO;

typedef union {
    sM2L31_GPIO_PC10_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC10_PDIO;

#define M2L31_GPIO_PC11_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC11_PDIO;

typedef union {
    sM2L31_GPIO_PC11_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC11_PDIO;

#define M2L31_GPIO_PC12_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC12_PDIO;

typedef union {
    sM2L31_GPIO_PC12_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC12_PDIO;

#define M2L31_GPIO_PC13_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC13_PDIO;

typedef union {
    sM2L31_GPIO_PC13_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC13_PDIO;

#define M2L31_GPIO_PC14_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PC14_PDIO;

typedef union {
    sM2L31_GPIO_PC14_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PC14_PDIO;

#define M2L31_GPIO_PD0_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD0_PDIO;

typedef union {
    sM2L31_GPIO_PD0_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD0_PDIO;

#define M2L31_GPIO_PD1_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD1_PDIO;

typedef union {
    sM2L31_GPIO_PD1_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD1_PDIO;

#define M2L31_GPIO_PD2_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD2_PDIO;

typedef union {
    sM2L31_GPIO_PD2_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD2_PDIO;

#define M2L31_GPIO_PD3_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD3_PDIO;

typedef union {
    sM2L31_GPIO_PD3_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD3_PDIO;

#define M2L31_GPIO_PD4_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD4_PDIO;

typedef union {
    sM2L31_GPIO_PD4_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD4_PDIO;

#define M2L31_GPIO_PD5_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD5_PDIO;

typedef union {
    sM2L31_GPIO_PD5_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD5_PDIO;

#define M2L31_GPIO_PD6_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD6_PDIO;

typedef union {
    sM2L31_GPIO_PD6_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD6_PDIO;

#define M2L31_GPIO_PD7_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD7_PDIO;

typedef union {
    sM2L31_GPIO_PD7_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD7_PDIO;

#define M2L31_GPIO_PD8_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD8_PDIO;

typedef union {
    sM2L31_GPIO_PD8_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD8_PDIO;

#define M2L31_GPIO_PD9_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD9_PDIO;

typedef union {
    sM2L31_GPIO_PD9_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD9_PDIO;

#define M2L31_GPIO_PD10_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD10_PDIO;

typedef union {
    sM2L31_GPIO_PD10_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD10_PDIO;

#define M2L31_GPIO_PD11_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD11_PDIO;

typedef union {
    sM2L31_GPIO_PD11_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD11_PDIO;

#define M2L31_GPIO_PD12_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD12_PDIO;

typedef union {
    sM2L31_GPIO_PD12_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD12_PDIO;

#define M2L31_GPIO_PD13_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD13_PDIO;

typedef union {
    sM2L31_GPIO_PD13_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD13_PDIO;

#define M2L31_GPIO_PD14_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD14_PDIO;

typedef union {
    sM2L31_GPIO_PD14_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD14_PDIO;

#define M2L31_GPIO_PD15_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PD15_PDIO;

typedef union {
    sM2L31_GPIO_PD15_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PD15_PDIO;

#define M2L31_GPIO_PE0_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE0_PDIO;

typedef union {
    sM2L31_GPIO_PE0_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE0_PDIO;

#define M2L31_GPIO_PE1_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE1_PDIO;

typedef union {
    sM2L31_GPIO_PE1_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE1_PDIO;

#define M2L31_GPIO_PE2_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE2_PDIO;

typedef union {
    sM2L31_GPIO_PE2_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE2_PDIO;

#define M2L31_GPIO_PE3_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE3_PDIO;

typedef union {
    sM2L31_GPIO_PE3_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE3_PDIO;

#define M2L31_GPIO_PE4_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE4_PDIO;

typedef union {
    sM2L31_GPIO_PE4_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE4_PDIO;

#define M2L31_GPIO_PE5_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE5_PDIO;

typedef union {
    sM2L31_GPIO_PE5_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE5_PDIO;

#define M2L31_GPIO_PE6_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE6_PDIO;

typedef union {
    sM2L31_GPIO_PE6_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE6_PDIO;

#define M2L31_GPIO_PE7_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE7_PDIO;

typedef union {
    sM2L31_GPIO_PE7_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE7_PDIO;

#define M2L31_GPIO_PE8_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE8_PDIO;

typedef union {
    sM2L31_GPIO_PE8_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE8_PDIO;

#define M2L31_GPIO_PE9_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE9_PDIO;

typedef union {
    sM2L31_GPIO_PE9_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE9_PDIO;

#define M2L31_GPIO_PE10_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE10_PDIO;

typedef union {
    sM2L31_GPIO_PE10_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE10_PDIO;

#define M2L31_GPIO_PE11_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE11_PDIO;

typedef union {
    sM2L31_GPIO_PE11_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE11_PDIO;

#define M2L31_GPIO_PE12_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE12_PDIO;

typedef union {
    sM2L31_GPIO_PE12_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE12_PDIO;

#define M2L31_GPIO_PE13_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE13_PDIO;

typedef union {
    sM2L31_GPIO_PE13_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE13_PDIO;

#define M2L31_GPIO_PE14_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE14_PDIO;

typedef union {
    sM2L31_GPIO_PE14_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE14_PDIO;

#define M2L31_GPIO_PE15_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PE15_PDIO;

typedef union {
    sM2L31_GPIO_PE15_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PE15_PDIO;

#define M2L31_GPIO_PF0_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PF0_PDIO;

typedef union {
    sM2L31_GPIO_PF0_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PF0_PDIO;

#define M2L31_GPIO_PF1_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PF1_PDIO;

typedef union {
    sM2L31_GPIO_PF1_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PF1_PDIO;

#define M2L31_GPIO_PF2_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PF2_PDIO;

typedef union {
    sM2L31_GPIO_PF2_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PF2_PDIO;

#define M2L31_GPIO_PF3_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PF3_PDIO;

typedef union {
    sM2L31_GPIO_PF3_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PF3_PDIO;

#define M2L31_GPIO_PF4_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PF4_PDIO;

typedef union {
    sM2L31_GPIO_PF4_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PF4_PDIO;

#define M2L31_GPIO_PF5_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PF5_PDIO;

typedef union {
    sM2L31_GPIO_PF5_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PF5_PDIO;

#define M2L31_GPIO_PF6_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PF6_PDIO;

typedef union {
    sM2L31_GPIO_PF6_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PF6_PDIO;

#define M2L31_GPIO_PF7_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PF7_PDIO;

typedef union {
    sM2L31_GPIO_PF7_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PF7_PDIO;

#define M2L31_GPIO_PF8_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PF8_PDIO;

typedef union {
    sM2L31_GPIO_PF8_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PF8_PDIO;

#define M2L31_GPIO_PF9_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PF9_PDIO;

typedef union {
    sM2L31_GPIO_PF9_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PF9_PDIO;

#define M2L31_GPIO_PF10_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PF10_PDIO;

typedef union {
    sM2L31_GPIO_PF10_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PF10_PDIO;

#define M2L31_GPIO_PF11_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PF11_PDIO;

typedef union {
    sM2L31_GPIO_PF11_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PF11_PDIO;

#define M2L31_GPIO_PG2_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PG2_PDIO;

typedef union {
    sM2L31_GPIO_PG2_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PG2_PDIO;

#define M2L31_GPIO_PG3_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PG3_PDIO;

typedef union {
    sM2L31_GPIO_PG3_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PG3_PDIO;

#define M2L31_GPIO_PG4_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PG4_PDIO;

typedef union {
    sM2L31_GPIO_PG4_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PG4_PDIO;

#define M2L31_GPIO_PG9_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PG9_PDIO;

typedef union {
    sM2L31_GPIO_PG9_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PG9_PDIO;

#define M2L31_GPIO_PG10_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PG10_PDIO;

typedef union {
    sM2L31_GPIO_PG10_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PG10_PDIO;

#define M2L31_GPIO_PG11_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PG11_PDIO;

typedef union {
    sM2L31_GPIO_PG11_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PG11_PDIO;

#define M2L31_GPIO_PG12_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PG12_PDIO;

typedef union {
    sM2L31_GPIO_PG12_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PG12_PDIO;

#define M2L31_GPIO_PG13_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PG13_PDIO;

typedef union {
    sM2L31_GPIO_PG13_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PG13_PDIO;

#define M2L31_GPIO_PG14_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PG14_PDIO;

typedef union {
    sM2L31_GPIO_PG14_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PG14_PDIO;

#define M2L31_GPIO_PG15_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PG15_PDIO;

typedef union {
    sM2L31_GPIO_PG15_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PG15_PDIO;

#define M2L31_GPIO_PH4_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PH4_PDIO;

typedef union {
    sM2L31_GPIO_PH4_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PH4_PDIO;

#define M2L31_GPIO_PH5_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PH5_PDIO;

typedef union {
    sM2L31_GPIO_PH5_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PH5_PDIO;

#define M2L31_GPIO_PH6_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PH6_PDIO;

typedef union {
    sM2L31_GPIO_PH6_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PH6_PDIO;

#define M2L31_GPIO_PH7_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PH7_PDIO;

typedef union {
    sM2L31_GPIO_PH7_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PH7_PDIO;

#define M2L31_GPIO_PH8_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PH8_PDIO;

typedef union {
    sM2L31_GPIO_PH8_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PH8_PDIO;

#define M2L31_GPIO_PH9_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PH9_PDIO;

typedef union {
    sM2L31_GPIO_PH9_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PH9_PDIO;

#define M2L31_GPIO_PH10_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PH10_PDIO;

typedef union {
    sM2L31_GPIO_PH10_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PH10_PDIO;

#define M2L31_GPIO_PH11_PDIO_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PDIO : 1;
    unsigned long Res0 : 31;
} sM2L31_GPIO_PH11_PDIO;

typedef union {
    sM2L31_GPIO_PH11_PDIO Bit;
    unsigned long  All;
} uM2L31_GPIO_PH11_PDIO;

typedef struct {
    uM2L31_GPIO_PA_MODE M2L31_GPIO_PA_MODE; // Offset: 0x0
    uM2L31_GPIO_PA_DINOFF M2L31_GPIO_PA_DINOFF; // Offset: 0x4
    uM2L31_GPIO_PA_DOUT M2L31_GPIO_PA_DOUT; // Offset: 0x8
    uM2L31_GPIO_PA_DATMSK M2L31_GPIO_PA_DATMSK; // Offset: 0xc
    uM2L31_GPIO_PA_PIN M2L31_GPIO_PA_PIN; // Offset: 0x10
    uM2L31_GPIO_PA_DBEN M2L31_GPIO_PA_DBEN; // Offset: 0x14
    uM2L31_GPIO_PA_INTTYPE M2L31_GPIO_PA_INTTYPE; // Offset: 0x18
    uM2L31_GPIO_PA_INTEN M2L31_GPIO_PA_INTEN; // Offset: 0x1c
    uM2L31_GPIO_PA_INTSRC M2L31_GPIO_PA_INTSRC; // Offset: 0x20
    uM2L31_GPIO_PA_SMTEN M2L31_GPIO_PA_SMTEN; // Offset: 0x24
    uM2L31_GPIO_PA_SLEWCTL M2L31_GPIO_PA_SLEWCTL; // Offset: 0x28
    unsigned long Reserved0;
    uM2L31_GPIO_PA_PUSEL M2L31_GPIO_PA_PUSEL; // Offset: 0x30
    uM2L31_GPIO_PA_DBCTL M2L31_GPIO_PA_DBCTL; // Offset: 0x34
    unsigned long Reserved1;
    unsigned long Reserved2;
    uM2L31_GPIO_PB_MODE M2L31_GPIO_PB_MODE; // Offset: 0x40
    uM2L31_GPIO_PB_DINOFF M2L31_GPIO_PB_DINOFF; // Offset: 0x44
    uM2L31_GPIO_PB_DOUT M2L31_GPIO_PB_DOUT; // Offset: 0x48
    uM2L31_GPIO_PB_DATMSK M2L31_GPIO_PB_DATMSK; // Offset: 0x4c
    uM2L31_GPIO_PB_PIN M2L31_GPIO_PB_PIN; // Offset: 0x50
    uM2L31_GPIO_PB_DBEN M2L31_GPIO_PB_DBEN; // Offset: 0x54
    uM2L31_GPIO_PB_INTTYPE M2L31_GPIO_PB_INTTYPE; // Offset: 0x58
    uM2L31_GPIO_PB_INTEN M2L31_GPIO_PB_INTEN; // Offset: 0x5c
    uM2L31_GPIO_PB_INTSRC M2L31_GPIO_PB_INTSRC; // Offset: 0x60
    uM2L31_GPIO_PB_SMTEN M2L31_GPIO_PB_SMTEN; // Offset: 0x64
    uM2L31_GPIO_PB_SLEWCTL M2L31_GPIO_PB_SLEWCTL; // Offset: 0x68
    unsigned long Reserved3;
    uM2L31_GPIO_PB_PUSEL M2L31_GPIO_PB_PUSEL; // Offset: 0x70
    uM2L31_GPIO_PB_DBCTL M2L31_GPIO_PB_DBCTL; // Offset: 0x74
    unsigned long Reserved4;
    unsigned long Reserved5;
    uM2L31_GPIO_PC_MODE M2L31_GPIO_PC_MODE; // Offset: 0x80
    uM2L31_GPIO_PC_DINOFF M2L31_GPIO_PC_DINOFF; // Offset: 0x84
    uM2L31_GPIO_PC_DOUT M2L31_GPIO_PC_DOUT; // Offset: 0x88
    uM2L31_GPIO_PC_DATMSK M2L31_GPIO_PC_DATMSK; // Offset: 0x8c
    uM2L31_GPIO_PC_PIN M2L31_GPIO_PC_PIN; // Offset: 0x90
    uM2L31_GPIO_PC_DBEN M2L31_GPIO_PC_DBEN; // Offset: 0x94
    uM2L31_GPIO_PC_INTTYPE M2L31_GPIO_PC_INTTYPE; // Offset: 0x98
    uM2L31_GPIO_PC_INTEN M2L31_GPIO_PC_INTEN; // Offset: 0x9c
    uM2L31_GPIO_PC_INTSRC M2L31_GPIO_PC_INTSRC; // Offset: 0xa0
    uM2L31_GPIO_PC_SMTEN M2L31_GPIO_PC_SMTEN; // Offset: 0xa4
    uM2L31_GPIO_PC_SLEWCTL M2L31_GPIO_PC_SLEWCTL; // Offset: 0xa8
    unsigned long Reserved6;
    uM2L31_GPIO_PC_PUSEL M2L31_GPIO_PC_PUSEL; // Offset: 0xb0
    uM2L31_GPIO_PC_DBCTL M2L31_GPIO_PC_DBCTL; // Offset: 0xb4
    unsigned long Reserved7;
    unsigned long Reserved8;
    uM2L31_GPIO_PD_MODE M2L31_GPIO_PD_MODE; // Offset: 0xc0
    uM2L31_GPIO_PD_DINOFF M2L31_GPIO_PD_DINOFF; // Offset: 0xc4
    uM2L31_GPIO_PD_DOUT M2L31_GPIO_PD_DOUT; // Offset: 0xc8
    uM2L31_GPIO_PD_DATMSK M2L31_GPIO_PD_DATMSK; // Offset: 0xcc
    uM2L31_GPIO_PD_PIN M2L31_GPIO_PD_PIN; // Offset: 0xd0
    uM2L31_GPIO_PD_DBEN M2L31_GPIO_PD_DBEN; // Offset: 0xd4
    uM2L31_GPIO_PD_INTTYPE M2L31_GPIO_PD_INTTYPE; // Offset: 0xd8
    uM2L31_GPIO_PD_INTEN M2L31_GPIO_PD_INTEN; // Offset: 0xdc
    uM2L31_GPIO_PD_INTSRC M2L31_GPIO_PD_INTSRC; // Offset: 0xe0
    uM2L31_GPIO_PD_SMTEN M2L31_GPIO_PD_SMTEN; // Offset: 0xe4
    uM2L31_GPIO_PD_SLEWCTL M2L31_GPIO_PD_SLEWCTL; // Offset: 0xe8
    unsigned long Reserved9;
    uM2L31_GPIO_PD_PUSEL M2L31_GPIO_PD_PUSEL; // Offset: 0xf0
    uM2L31_GPIO_PD_DBCTL M2L31_GPIO_PD_DBCTL; // Offset: 0xf4
    unsigned long Reserved10;
    unsigned long Reserved11;
    uM2L31_GPIO_PE_MODE M2L31_GPIO_PE_MODE; // Offset: 0x100
    uM2L31_GPIO_PE_DINOFF M2L31_GPIO_PE_DINOFF; // Offset: 0x104
    uM2L31_GPIO_PE_DOUT M2L31_GPIO_PE_DOUT; // Offset: 0x108
    uM2L31_GPIO_PE_DATMSK M2L31_GPIO_PE_DATMSK; // Offset: 0x10c
    uM2L31_GPIO_PE_PIN M2L31_GPIO_PE_PIN; // Offset: 0x110
    uM2L31_GPIO_PE_DBEN M2L31_GPIO_PE_DBEN; // Offset: 0x114
    uM2L31_GPIO_PE_INTTYPE M2L31_GPIO_PE_INTTYPE; // Offset: 0x118
    uM2L31_GPIO_PE_INTEN M2L31_GPIO_PE_INTEN; // Offset: 0x11c
    uM2L31_GPIO_PE_INTSRC M2L31_GPIO_PE_INTSRC; // Offset: 0x120
    uM2L31_GPIO_PE_SMTEN M2L31_GPIO_PE_SMTEN; // Offset: 0x124
    uM2L31_GPIO_PE_SLEWCTL M2L31_GPIO_PE_SLEWCTL; // Offset: 0x128
    unsigned long Reserved12;
    uM2L31_GPIO_PE_PUSEL M2L31_GPIO_PE_PUSEL; // Offset: 0x130
    uM2L31_GPIO_PE_DBCTL M2L31_GPIO_PE_DBCTL; // Offset: 0x134
    unsigned long Reserved13;
    unsigned long Reserved14;
    uM2L31_GPIO_PF_MODE M2L31_GPIO_PF_MODE; // Offset: 0x140
    uM2L31_GPIO_PF_DINOFF M2L31_GPIO_PF_DINOFF; // Offset: 0x144
    uM2L31_GPIO_PF_DOUT M2L31_GPIO_PF_DOUT; // Offset: 0x148
    uM2L31_GPIO_PF_DATMSK M2L31_GPIO_PF_DATMSK; // Offset: 0x14c
    uM2L31_GPIO_PF_PIN M2L31_GPIO_PF_PIN; // Offset: 0x150
    uM2L31_GPIO_PF_DBEN M2L31_GPIO_PF_DBEN; // Offset: 0x154
    uM2L31_GPIO_PF_INTTYPE M2L31_GPIO_PF_INTTYPE; // Offset: 0x158
    uM2L31_GPIO_PF_INTEN M2L31_GPIO_PF_INTEN; // Offset: 0x15c
    uM2L31_GPIO_PF_INTSRC M2L31_GPIO_PF_INTSRC; // Offset: 0x160
    uM2L31_GPIO_PF_SMTEN M2L31_GPIO_PF_SMTEN; // Offset: 0x164
    uM2L31_GPIO_PF_SLEWCTL M2L31_GPIO_PF_SLEWCTL; // Offset: 0x168
    unsigned long Reserved15;
    uM2L31_GPIO_PF_PUSEL M2L31_GPIO_PF_PUSEL; // Offset: 0x170
    uM2L31_GPIO_PF_DBCTL M2L31_GPIO_PF_DBCTL; // Offset: 0x174
    unsigned long Reserved16;
    unsigned long Reserved17;
    uM2L31_GPIO_PG_MODE M2L31_GPIO_PG_MODE; // Offset: 0x180
    uM2L31_GPIO_PG_DINOFF M2L31_GPIO_PG_DINOFF; // Offset: 0x184
    uM2L31_GPIO_PG_DOUT M2L31_GPIO_PG_DOUT; // Offset: 0x188
    uM2L31_GPIO_PG_DATMSK M2L31_GPIO_PG_DATMSK; // Offset: 0x18c
    uM2L31_GPIO_PG_PIN M2L31_GPIO_PG_PIN; // Offset: 0x190
    uM2L31_GPIO_PG_DBEN M2L31_GPIO_PG_DBEN; // Offset: 0x194
    uM2L31_GPIO_PG_INTTYPE M2L31_GPIO_PG_INTTYPE; // Offset: 0x198
    uM2L31_GPIO_PG_INTEN M2L31_GPIO_PG_INTEN; // Offset: 0x19c
    uM2L31_GPIO_PG_INTSRC M2L31_GPIO_PG_INTSRC; // Offset: 0x1a0
    uM2L31_GPIO_PG_SMTEN M2L31_GPIO_PG_SMTEN; // Offset: 0x1a4
    uM2L31_GPIO_PG_SLEWCTL M2L31_GPIO_PG_SLEWCTL; // Offset: 0x1a8
    unsigned long Reserved18;
    uM2L31_GPIO_PG_PUSEL M2L31_GPIO_PG_PUSEL; // Offset: 0x1b0
    uM2L31_GPIO_PG_DBCTL M2L31_GPIO_PG_DBCTL; // Offset: 0x1b4
    unsigned long Reserved19;
    unsigned long Reserved20;
    uM2L31_GPIO_PH_MODE M2L31_GPIO_PH_MODE; // Offset: 0x1c0
    uM2L31_GPIO_PH_DINOFF M2L31_GPIO_PH_DINOFF; // Offset: 0x1c4
    uM2L31_GPIO_PH_DOUT M2L31_GPIO_PH_DOUT; // Offset: 0x1c8
    uM2L31_GPIO_PH_DATMSK M2L31_GPIO_PH_DATMSK; // Offset: 0x1cc
    uM2L31_GPIO_PH_PIN M2L31_GPIO_PH_PIN; // Offset: 0x1d0
    uM2L31_GPIO_PH_DBEN M2L31_GPIO_PH_DBEN; // Offset: 0x1d4
    uM2L31_GPIO_PH_INTTYPE M2L31_GPIO_PH_INTTYPE; // Offset: 0x1d8
    uM2L31_GPIO_PH_INTEN M2L31_GPIO_PH_INTEN; // Offset: 0x1dc
    uM2L31_GPIO_PH_INTSRC M2L31_GPIO_PH_INTSRC; // Offset: 0x1e0
    uM2L31_GPIO_PH_SMTEN M2L31_GPIO_PH_SMTEN; // Offset: 0x1e4
    uM2L31_GPIO_PH_SLEWCTL M2L31_GPIO_PH_SLEWCTL; // Offset: 0x1e8
    unsigned long Reserved21;
    uM2L31_GPIO_PH_PUSEL M2L31_GPIO_PH_PUSEL; // Offset: 0x1f0
    uM2L31_GPIO_PH_DBCTL M2L31_GPIO_PH_DBCTL; // Offset: 0x1f4
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
    uM2L31_GPIO_INT0_INNF M2L31_GPIO_INT0_INNF; // Offset: 0x450
    uM2L31_GPIO_INT1_INNF M2L31_GPIO_INT1_INNF; // Offset: 0x454
    uM2L31_GPIO_INT2_INNF M2L31_GPIO_INT2_INNF; // Offset: 0x458
    uM2L31_GPIO_INT3_INNF M2L31_GPIO_INT3_INNF; // Offset: 0x45c
    uM2L31_GPIO_INT4_INNF M2L31_GPIO_INT4_INNF; // Offset: 0x460
    uM2L31_GPIO_INT5_INNF M2L31_GPIO_INT5_INNF; // Offset: 0x464
    uM2L31_GPIO_INT6_INNF M2L31_GPIO_INT6_INNF; // Offset: 0x468
    uM2L31_GPIO_INT7_INNF M2L31_GPIO_INT7_INNF; // Offset: 0x46c
    unsigned long Reserved172;
    unsigned long Reserved173;
    unsigned long Reserved174;
    unsigned long Reserved175;
    unsigned long Reserved176;
    unsigned long Reserved177;
    unsigned long Reserved178;
    unsigned long Reserved179;
    uM2L31_GPIO_INT_EDETCTL M2L31_GPIO_INT_EDETCTL; // Offset: 0x490
    unsigned long Reserved180;
    uM2L31_GPIO_INT_EDINTEN M2L31_GPIO_INT_EDINTEN; // Offset: 0x498
    uM2L31_GPIO_INT_EDSTS M2L31_GPIO_INT_EDSTS; // Offset: 0x49c
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
    unsigned long Reserved306;
    unsigned long Reserved307;
    unsigned long Reserved308;
    unsigned long Reserved309;
    unsigned long Reserved310;
    unsigned long Reserved311;
    unsigned long Reserved312;
    unsigned long Reserved313;
    unsigned long Reserved314;
    unsigned long Reserved315;
    unsigned long Reserved316;
    unsigned long Reserved317;
    unsigned long Reserved318;
    unsigned long Reserved319;
    unsigned long Reserved320;
    unsigned long Reserved321;
    unsigned long Reserved322;
    unsigned long Reserved323;
    unsigned long Reserved324;
    unsigned long Reserved325;
    unsigned long Reserved326;
    unsigned long Reserved327;
    unsigned long Reserved328;
    unsigned long Reserved329;
    unsigned long Reserved330;
    unsigned long Reserved331;
    unsigned long Reserved332;
    unsigned long Reserved333;
    unsigned long Reserved334;
    unsigned long Reserved335;
    unsigned long Reserved336;
    unsigned long Reserved337;
    unsigned long Reserved338;
    unsigned long Reserved339;
    unsigned long Reserved340;
    unsigned long Reserved341;
    unsigned long Reserved342;
    unsigned long Reserved343;
    unsigned long Reserved344;
    unsigned long Reserved345;
    unsigned long Reserved346;
    unsigned long Reserved347;
    unsigned long Reserved348;
    unsigned long Reserved349;
    unsigned long Reserved350;
    unsigned long Reserved351;
    unsigned long Reserved352;
    unsigned long Reserved353;
    unsigned long Reserved354;
    unsigned long Reserved355;
    unsigned long Reserved356;
    unsigned long Reserved357;
    unsigned long Reserved358;
    unsigned long Reserved359;
    unsigned long Reserved360;
    unsigned long Reserved361;
    unsigned long Reserved362;
    unsigned long Reserved363;
    unsigned long Reserved364;
    unsigned long Reserved365;
    unsigned long Reserved366;
    unsigned long Reserved367;
    unsigned long Reserved368;
    unsigned long Reserved369;
    unsigned long Reserved370;
    unsigned long Reserved371;
    unsigned long Reserved372;
    unsigned long Reserved373;
    unsigned long Reserved374;
    unsigned long Reserved375;
    unsigned long Reserved376;
    unsigned long Reserved377;
    unsigned long Reserved378;
    unsigned long Reserved379;
    unsigned long Reserved380;
    unsigned long Reserved381;
    unsigned long Reserved382;
    unsigned long Reserved383;
    unsigned long Reserved384;
    unsigned long Reserved385;
    unsigned long Reserved386;
    unsigned long Reserved387;
    unsigned long Reserved388;
    unsigned long Reserved389;
    unsigned long Reserved390;
    unsigned long Reserved391;
    unsigned long Reserved392;
    unsigned long Reserved393;
    unsigned long Reserved394;
    unsigned long Reserved395;
    unsigned long Reserved396;
    uM2L31_GPIO_PA0_PDIO M2L31_GPIO_PA0_PDIO; // Offset: 0x800
    uM2L31_GPIO_PA1_PDIO M2L31_GPIO_PA1_PDIO; // Offset: 0x804
    uM2L31_GPIO_PA2_PDIO M2L31_GPIO_PA2_PDIO; // Offset: 0x808
    uM2L31_GPIO_PA3_PDIO M2L31_GPIO_PA3_PDIO; // Offset: 0x80c
    uM2L31_GPIO_PA4_PDIO M2L31_GPIO_PA4_PDIO; // Offset: 0x810
    uM2L31_GPIO_PA5_PDIO M2L31_GPIO_PA5_PDIO; // Offset: 0x814
    uM2L31_GPIO_PA6_PDIO M2L31_GPIO_PA6_PDIO; // Offset: 0x818
    uM2L31_GPIO_PA7_PDIO M2L31_GPIO_PA7_PDIO; // Offset: 0x81c
    uM2L31_GPIO_PA8_PDIO M2L31_GPIO_PA8_PDIO; // Offset: 0x820
    uM2L31_GPIO_PA9_PDIO M2L31_GPIO_PA9_PDIO; // Offset: 0x824
    uM2L31_GPIO_PA10_PDIO M2L31_GPIO_PA10_PDIO; // Offset: 0x828
    uM2L31_GPIO_PA11_PDIO M2L31_GPIO_PA11_PDIO; // Offset: 0x82c
    uM2L31_GPIO_PA12_PDIO M2L31_GPIO_PA12_PDIO; // Offset: 0x830
    uM2L31_GPIO_PA13_PDIO M2L31_GPIO_PA13_PDIO; // Offset: 0x834
    uM2L31_GPIO_PA14_PDIO M2L31_GPIO_PA14_PDIO; // Offset: 0x838
    uM2L31_GPIO_PA15_PDIO M2L31_GPIO_PA15_PDIO; // Offset: 0x83c
    uM2L31_GPIO_PB0_PDIO M2L31_GPIO_PB0_PDIO; // Offset: 0x840
    uM2L31_GPIO_PB1_PDIO M2L31_GPIO_PB1_PDIO; // Offset: 0x844
    uM2L31_GPIO_PB2_PDIO M2L31_GPIO_PB2_PDIO; // Offset: 0x848
    uM2L31_GPIO_PB3_PDIO M2L31_GPIO_PB3_PDIO; // Offset: 0x84c
    uM2L31_GPIO_PB4_PDIO M2L31_GPIO_PB4_PDIO; // Offset: 0x850
    uM2L31_GPIO_PB5_PDIO M2L31_GPIO_PB5_PDIO; // Offset: 0x854
    uM2L31_GPIO_PB6_PDIO M2L31_GPIO_PB6_PDIO; // Offset: 0x858
    uM2L31_GPIO_PB7_PDIO M2L31_GPIO_PB7_PDIO; // Offset: 0x85c
    uM2L31_GPIO_PB8_PDIO M2L31_GPIO_PB8_PDIO; // Offset: 0x860
    uM2L31_GPIO_PB9_PDIO M2L31_GPIO_PB9_PDIO; // Offset: 0x864
    uM2L31_GPIO_PB10_PDIO M2L31_GPIO_PB10_PDIO; // Offset: 0x868
    uM2L31_GPIO_PB11_PDIO M2L31_GPIO_PB11_PDIO; // Offset: 0x86c
    uM2L31_GPIO_PB12_PDIO M2L31_GPIO_PB12_PDIO; // Offset: 0x870
    uM2L31_GPIO_PB13_PDIO M2L31_GPIO_PB13_PDIO; // Offset: 0x874
    uM2L31_GPIO_PB14_PDIO M2L31_GPIO_PB14_PDIO; // Offset: 0x878
    uM2L31_GPIO_PB15_PDIO M2L31_GPIO_PB15_PDIO; // Offset: 0x87c
    uM2L31_GPIO_PC0_PDIO M2L31_GPIO_PC0_PDIO; // Offset: 0x880
    uM2L31_GPIO_PC1_PDIO M2L31_GPIO_PC1_PDIO; // Offset: 0x884
    uM2L31_GPIO_PC2_PDIO M2L31_GPIO_PC2_PDIO; // Offset: 0x888
    uM2L31_GPIO_PC3_PDIO M2L31_GPIO_PC3_PDIO; // Offset: 0x88c
    uM2L31_GPIO_PC4_PDIO M2L31_GPIO_PC4_PDIO; // Offset: 0x890
    uM2L31_GPIO_PC5_PDIO M2L31_GPIO_PC5_PDIO; // Offset: 0x894
    uM2L31_GPIO_PC6_PDIO M2L31_GPIO_PC6_PDIO; // Offset: 0x898
    uM2L31_GPIO_PC7_PDIO M2L31_GPIO_PC7_PDIO; // Offset: 0x89c
    uM2L31_GPIO_PC8_PDIO M2L31_GPIO_PC8_PDIO; // Offset: 0x8a0
    uM2L31_GPIO_PC9_PDIO M2L31_GPIO_PC9_PDIO; // Offset: 0x8a4
    uM2L31_GPIO_PC10_PDIO M2L31_GPIO_PC10_PDIO; // Offset: 0x8a8
    uM2L31_GPIO_PC11_PDIO M2L31_GPIO_PC11_PDIO; // Offset: 0x8ac
    uM2L31_GPIO_PC12_PDIO M2L31_GPIO_PC12_PDIO; // Offset: 0x8b0
    uM2L31_GPIO_PC13_PDIO M2L31_GPIO_PC13_PDIO; // Offset: 0x8b4
    uM2L31_GPIO_PC14_PDIO M2L31_GPIO_PC14_PDIO; // Offset: 0x8b8
    unsigned long Reserved397;
    uM2L31_GPIO_PD0_PDIO M2L31_GPIO_PD0_PDIO; // Offset: 0x8c0
    uM2L31_GPIO_PD1_PDIO M2L31_GPIO_PD1_PDIO; // Offset: 0x8c4
    uM2L31_GPIO_PD2_PDIO M2L31_GPIO_PD2_PDIO; // Offset: 0x8c8
    uM2L31_GPIO_PD3_PDIO M2L31_GPIO_PD3_PDIO; // Offset: 0x8cc
    uM2L31_GPIO_PD4_PDIO M2L31_GPIO_PD4_PDIO; // Offset: 0x8d0
    uM2L31_GPIO_PD5_PDIO M2L31_GPIO_PD5_PDIO; // Offset: 0x8d4
    uM2L31_GPIO_PD6_PDIO M2L31_GPIO_PD6_PDIO; // Offset: 0x8d8
    uM2L31_GPIO_PD7_PDIO M2L31_GPIO_PD7_PDIO; // Offset: 0x8dc
    uM2L31_GPIO_PD8_PDIO M2L31_GPIO_PD8_PDIO; // Offset: 0x8e0
    uM2L31_GPIO_PD9_PDIO M2L31_GPIO_PD9_PDIO; // Offset: 0x8e4
    uM2L31_GPIO_PD10_PDIO M2L31_GPIO_PD10_PDIO; // Offset: 0x8e8
    uM2L31_GPIO_PD11_PDIO M2L31_GPIO_PD11_PDIO; // Offset: 0x8ec
    uM2L31_GPIO_PD12_PDIO M2L31_GPIO_PD12_PDIO; // Offset: 0x8f0
    uM2L31_GPIO_PD13_PDIO M2L31_GPIO_PD13_PDIO; // Offset: 0x8f4
    uM2L31_GPIO_PD14_PDIO M2L31_GPIO_PD14_PDIO; // Offset: 0x8f8
    uM2L31_GPIO_PD15_PDIO M2L31_GPIO_PD15_PDIO; // Offset: 0x8fc
    uM2L31_GPIO_PE0_PDIO M2L31_GPIO_PE0_PDIO; // Offset: 0x900
    uM2L31_GPIO_PE1_PDIO M2L31_GPIO_PE1_PDIO; // Offset: 0x904
    uM2L31_GPIO_PE2_PDIO M2L31_GPIO_PE2_PDIO; // Offset: 0x908
    uM2L31_GPIO_PE3_PDIO M2L31_GPIO_PE3_PDIO; // Offset: 0x90c
    uM2L31_GPIO_PE4_PDIO M2L31_GPIO_PE4_PDIO; // Offset: 0x910
    uM2L31_GPIO_PE5_PDIO M2L31_GPIO_PE5_PDIO; // Offset: 0x914
    uM2L31_GPIO_PE6_PDIO M2L31_GPIO_PE6_PDIO; // Offset: 0x918
    uM2L31_GPIO_PE7_PDIO M2L31_GPIO_PE7_PDIO; // Offset: 0x91c
    uM2L31_GPIO_PE8_PDIO M2L31_GPIO_PE8_PDIO; // Offset: 0x920
    uM2L31_GPIO_PE9_PDIO M2L31_GPIO_PE9_PDIO; // Offset: 0x924
    uM2L31_GPIO_PE10_PDIO M2L31_GPIO_PE10_PDIO; // Offset: 0x928
    uM2L31_GPIO_PE11_PDIO M2L31_GPIO_PE11_PDIO; // Offset: 0x92c
    uM2L31_GPIO_PE12_PDIO M2L31_GPIO_PE12_PDIO; // Offset: 0x930
    uM2L31_GPIO_PE13_PDIO M2L31_GPIO_PE13_PDIO; // Offset: 0x934
    uM2L31_GPIO_PE14_PDIO M2L31_GPIO_PE14_PDIO; // Offset: 0x938
    uM2L31_GPIO_PE15_PDIO M2L31_GPIO_PE15_PDIO; // Offset: 0x93c
    uM2L31_GPIO_PF0_PDIO M2L31_GPIO_PF0_PDIO; // Offset: 0x940
    uM2L31_GPIO_PF1_PDIO M2L31_GPIO_PF1_PDIO; // Offset: 0x944
    uM2L31_GPIO_PF2_PDIO M2L31_GPIO_PF2_PDIO; // Offset: 0x948
    uM2L31_GPIO_PF3_PDIO M2L31_GPIO_PF3_PDIO; // Offset: 0x94c
    uM2L31_GPIO_PF4_PDIO M2L31_GPIO_PF4_PDIO; // Offset: 0x950
    uM2L31_GPIO_PF5_PDIO M2L31_GPIO_PF5_PDIO; // Offset: 0x954
    uM2L31_GPIO_PF6_PDIO M2L31_GPIO_PF6_PDIO; // Offset: 0x958
    uM2L31_GPIO_PF7_PDIO M2L31_GPIO_PF7_PDIO; // Offset: 0x95c
    uM2L31_GPIO_PF8_PDIO M2L31_GPIO_PF8_PDIO; // Offset: 0x960
    uM2L31_GPIO_PF9_PDIO M2L31_GPIO_PF9_PDIO; // Offset: 0x964
    uM2L31_GPIO_PF10_PDIO M2L31_GPIO_PF10_PDIO; // Offset: 0x968
    uM2L31_GPIO_PF11_PDIO M2L31_GPIO_PF11_PDIO; // Offset: 0x96c
    unsigned long Reserved398;
    unsigned long Reserved399;
    unsigned long Reserved400;
    unsigned long Reserved401;
    unsigned long Reserved402;
    unsigned long Reserved403;
    uM2L31_GPIO_PG2_PDIO M2L31_GPIO_PG2_PDIO; // Offset: 0x988
    uM2L31_GPIO_PG3_PDIO M2L31_GPIO_PG3_PDIO; // Offset: 0x98c
    uM2L31_GPIO_PG4_PDIO M2L31_GPIO_PG4_PDIO; // Offset: 0x990
    unsigned long Reserved404;
    unsigned long Reserved405;
    unsigned long Reserved406;
    unsigned long Reserved407;
    uM2L31_GPIO_PG9_PDIO M2L31_GPIO_PG9_PDIO; // Offset: 0x9a4
    uM2L31_GPIO_PG10_PDIO M2L31_GPIO_PG10_PDIO; // Offset: 0x9a8
    uM2L31_GPIO_PG11_PDIO M2L31_GPIO_PG11_PDIO; // Offset: 0x9ac
    uM2L31_GPIO_PG12_PDIO M2L31_GPIO_PG12_PDIO; // Offset: 0x9b0
    uM2L31_GPIO_PG13_PDIO M2L31_GPIO_PG13_PDIO; // Offset: 0x9b4
    uM2L31_GPIO_PG14_PDIO M2L31_GPIO_PG14_PDIO; // Offset: 0x9b8
    uM2L31_GPIO_PG15_PDIO M2L31_GPIO_PG15_PDIO; // Offset: 0x9bc
    unsigned long Reserved408;
    unsigned long Reserved409;
    unsigned long Reserved410;
    unsigned long Reserved411;
    uM2L31_GPIO_PH4_PDIO M2L31_GPIO_PH4_PDIO; // Offset: 0x9d0
    uM2L31_GPIO_PH5_PDIO M2L31_GPIO_PH5_PDIO; // Offset: 0x9d4
    uM2L31_GPIO_PH6_PDIO M2L31_GPIO_PH6_PDIO; // Offset: 0x9d8
    uM2L31_GPIO_PH7_PDIO M2L31_GPIO_PH7_PDIO; // Offset: 0x9dc
    uM2L31_GPIO_PH8_PDIO M2L31_GPIO_PH8_PDIO; // Offset: 0x9e0
    uM2L31_GPIO_PH9_PDIO M2L31_GPIO_PH9_PDIO; // Offset: 0x9e4
    uM2L31_GPIO_PH10_PDIO M2L31_GPIO_PH10_PDIO; // Offset: 0x9e8
    uM2L31_GPIO_PH11_PDIO M2L31_GPIO_PH11_PDIO; // Offset: 0x9ec
} sM2L31_GPIO;

