// Base Addres of LPGPIO = 0x4003A000

#define M2L31_LPGPIO_LPGPIO_MODE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long MODE0 : 1;
    unsigned long MODE1 : 1;
    unsigned long MODE2 : 1;
    unsigned long MODE3 : 1;
    unsigned long MODE4 : 1;
    unsigned long MODE5 : 1;
    unsigned long MODE6 : 1;
    unsigned long MODE7 : 1;
    unsigned long Res0 : 23;
    unsigned long LPPDMA_EN : 1;
} sM2L31_LPGPIO_LPGPIO_MODE;

typedef union {
    sM2L31_LPGPIO_LPGPIO_MODE Bit;
    unsigned long  All;
} uM2L31_LPGPIO_LPGPIO_MODE;

#define M2L31_LPGPIO_LPGPIO_DOUT_RESET_VALUE 0x000000FF
typedef struct {
    unsigned long DOUT0 : 1;
    unsigned long DOUT1 : 1;
    unsigned long DOUT2 : 1;
    unsigned long DOUT3 : 1;
    unsigned long DOUT4 : 1;
    unsigned long DOUT5 : 1;
    unsigned long DOUT6 : 1;
    unsigned long DOUT7 : 1;
    unsigned long Res0 : 24;
} sM2L31_LPGPIO_LPGPIO_DOUT;

typedef union {
    sM2L31_LPGPIO_LPGPIO_DOUT Bit;
    unsigned long  All;
} uM2L31_LPGPIO_LPGPIO_DOUT;

#define M2L31_LPGPIO_LPGPIO_PIN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PIN0 : 1;
    unsigned long PIN1 : 1;
    unsigned long PIN2 : 1;
    unsigned long PIN3 : 1;
    unsigned long PIN4 : 1;
    unsigned long PIN5 : 1;
    unsigned long PIN6 : 1;
    unsigned long PIN7 : 1;
    unsigned long Res0 : 24;
} sM2L31_LPGPIO_LPGPIO_PIN;

typedef union {
    sM2L31_LPGPIO_LPGPIO_PIN Bit;
    unsigned long  All;
} uM2L31_LPGPIO_LPGPIO_PIN;

#define M2L31_LPGPIO_LPGPIO_DSRST_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DSET0 : 1;
    unsigned long DSET1 : 1;
    unsigned long DSET2 : 1;
    unsigned long DSET3 : 1;
    unsigned long DSET4 : 1;
    unsigned long DSET5 : 1;
    unsigned long DSET6 : 1;
    unsigned long DSET7 : 1;
    unsigned long Res0 : 8;
    unsigned long DRESET0 : 1;
    unsigned long DRESET1 : 1;
    unsigned long DRESET2 : 1;
    unsigned long DRESET3 : 1;
    unsigned long DRESET4 : 1;
    unsigned long DRESET5 : 1;
    unsigned long DRESET6 : 1;
    unsigned long DRESET7 : 1;
    unsigned long Res1 : 8;
} sM2L31_LPGPIO_LPGPIO_DSRST;

typedef union {
    sM2L31_LPGPIO_LPGPIO_DSRST Bit;
    unsigned long  All;
} uM2L31_LPGPIO_LPGPIO_DSRST;

#define M2L31_LPGPIO_LPGPIO_DRST_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DRESET0 : 1;
    unsigned long DRESET1 : 1;
    unsigned long DRESET2 : 1;
    unsigned long DRESET3 : 1;
    unsigned long DRESET4 : 1;
    unsigned long DRESET5 : 1;
    unsigned long DRESET6 : 1;
    unsigned long DRESET7 : 1;
    unsigned long Res0 : 24;
} sM2L31_LPGPIO_LPGPIO_DRST;

typedef union {
    sM2L31_LPGPIO_LPGPIO_DRST Bit;
    unsigned long  All;
} uM2L31_LPGPIO_LPGPIO_DRST;

typedef struct {
    uM2L31_LPGPIO_LPGPIO_MODE M2L31_LPGPIO_LPGPIO_MODE; // Offset: 0x0
    uM2L31_LPGPIO_LPGPIO_DOUT M2L31_LPGPIO_LPGPIO_DOUT; // Offset: 0x4
    uM2L31_LPGPIO_LPGPIO_PIN M2L31_LPGPIO_LPGPIO_PIN; // Offset: 0x8
    uM2L31_LPGPIO_LPGPIO_DSRST M2L31_LPGPIO_LPGPIO_DSRST; // Offset: 0xc
    uM2L31_LPGPIO_LPGPIO_DRST M2L31_LPGPIO_LPGPIO_DRST; // Offset: 0x10
} sM2L31_LPGPIO;

