// Base Addres of NMI = 0x40000300

#define M2L31_NMI_NMIEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BODOUT : 1;
    unsigned long IRC_INT : 1;
    unsigned long PWRWU_INT : 1;
    unsigned long SRAM_PERR : 1;
    unsigned long CLKFAIL : 1;
    unsigned long Res0 : 1;
    unsigned long RTC_INT : 1;
    unsigned long TAMPER_INT : 1;
    unsigned long EINT0 : 1;
    unsigned long EINT1 : 1;
    unsigned long EINT2 : 1;
    unsigned long EINT3 : 1;
    unsigned long EINT4 : 1;
    unsigned long EINT5 : 1;
    unsigned long UART0_INT : 1;
    unsigned long UART1_INT : 1;
    unsigned long Res1 : 16;
} sM2L31_NMI_NMIEN;

typedef union {
    sM2L31_NMI_NMIEN Bit;
    unsigned long  All;
} uM2L31_NMI_NMIEN;

#define M2L31_NMI_NMISTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long BODOUT : 1;
    unsigned long IRC_INT : 1;
    unsigned long PWRWU_INT : 1;
    unsigned long SRAM_PERR : 1;
    unsigned long CLKFAIL : 1;
    unsigned long Res0 : 1;
    unsigned long RTC_INT : 1;
    unsigned long TAMPER_INT : 1;
    unsigned long EINT0 : 1;
    unsigned long EINT1 : 1;
    unsigned long EINT2 : 1;
    unsigned long EINT3 : 1;
    unsigned long EINT4 : 1;
    unsigned long EINT5 : 1;
    unsigned long UART0_INT : 1;
    unsigned long UART1_INT : 1;
    unsigned long Res1 : 16;
} sM2L31_NMI_NMISTS;

typedef union {
    sM2L31_NMI_NMISTS Bit;
    unsigned long  All;
} uM2L31_NMI_NMISTS;

typedef struct {
    uM2L31_NMI_NMIEN M2L31_NMI_NMIEN; // Offset: 0x0
    uM2L31_NMI_NMISTS M2L31_NMI_NMISTS; // Offset: 0x4
} sM2L31_NMI;

