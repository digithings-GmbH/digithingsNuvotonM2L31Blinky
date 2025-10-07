// Base Addres of PDMA0 = 0x40008000

#define M2L31_PDMA0_PDMAx_DSCT0_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long OPMODE : 2;
    unsigned long TXTYPE : 1;
    unsigned long Res0 : 1;
    unsigned long BURSIZE : 3;
    unsigned long TBINTDIS : 1;
    unsigned long SAINC : 2;
    unsigned long DAINC : 2;
    unsigned long TXWIDTH : 2;
    unsigned long Res1 : 2;
    unsigned long TXCNT : 16;
} sM2L31_PDMA0_PDMAx_DSCT0_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT0_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT0_CTL;

#define M2L31_PDMA0_PDMAx_DSCT1_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT1_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT1_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT1_CTL;

#define M2L31_PDMA0_PDMAx_DSCT2_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT2_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT2_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT2_CTL;

#define M2L31_PDMA0_PDMAx_DSCT3_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT3_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT3_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT3_CTL;

#define M2L31_PDMA0_PDMAx_DSCT4_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT4_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT4_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT4_CTL;

#define M2L31_PDMA0_PDMAx_DSCT5_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT5_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT5_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT5_CTL;

#define M2L31_PDMA0_PDMAx_DSCT6_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT6_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT6_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT6_CTL;

#define M2L31_PDMA0_PDMAx_DSCT7_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT7_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT7_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT7_CTL;

#define M2L31_PDMA0_PDMAx_DSCT8_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT8_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT8_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT8_CTL;

#define M2L31_PDMA0_PDMAx_DSCT9_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT9_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT9_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT9_CTL;

#define M2L31_PDMA0_PDMAx_DSCT10_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT10_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT10_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT10_CTL;

#define M2L31_PDMA0_PDMAx_DSCT11_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT11_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT11_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT11_CTL;

#define M2L31_PDMA0_PDMAx_DSCT12_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT12_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT12_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT12_CTL;

#define M2L31_PDMA0_PDMAx_DSCT13_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT13_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT13_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT13_CTL;

#define M2L31_PDMA0_PDMAx_DSCT14_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT14_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT14_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT14_CTL;

#define M2L31_PDMA0_PDMAx_DSCT15_CTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT15_CTL;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT15_CTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT15_CTL;

#define M2L31_PDMA0_PDMAx_DSCT0_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SA : 32;
} sM2L31_PDMA0_PDMAx_DSCT0_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT0_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT0_SA;

#define M2L31_PDMA0_PDMAx_DSCT1_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT1_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT1_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT1_SA;

#define M2L31_PDMA0_PDMAx_DSCT2_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT2_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT2_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT2_SA;

#define M2L31_PDMA0_PDMAx_DSCT3_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT3_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT3_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT3_SA;

#define M2L31_PDMA0_PDMAx_DSCT4_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT4_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT4_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT4_SA;

#define M2L31_PDMA0_PDMAx_DSCT5_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT5_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT5_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT5_SA;

#define M2L31_PDMA0_PDMAx_DSCT6_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT6_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT6_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT6_SA;

#define M2L31_PDMA0_PDMAx_DSCT7_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT7_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT7_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT7_SA;

#define M2L31_PDMA0_PDMAx_DSCT8_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT8_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT8_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT8_SA;

#define M2L31_PDMA0_PDMAx_DSCT9_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT9_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT9_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT9_SA;

#define M2L31_PDMA0_PDMAx_DSCT10_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT10_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT10_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT10_SA;

#define M2L31_PDMA0_PDMAx_DSCT11_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT11_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT11_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT11_SA;

#define M2L31_PDMA0_PDMAx_DSCT12_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT12_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT12_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT12_SA;

#define M2L31_PDMA0_PDMAx_DSCT13_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT13_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT13_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT13_SA;

#define M2L31_PDMA0_PDMAx_DSCT14_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT14_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT14_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT14_SA;

#define M2L31_PDMA0_PDMAx_DSCT15_SA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT15_SA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT15_SA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT15_SA;

#define M2L31_PDMA0_PDMAx_DSCT0_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DA : 32;
} sM2L31_PDMA0_PDMAx_DSCT0_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT0_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT0_DA;

#define M2L31_PDMA0_PDMAx_DSCT1_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT1_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT1_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT1_DA;

#define M2L31_PDMA0_PDMAx_DSCT2_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT2_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT2_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT2_DA;

#define M2L31_PDMA0_PDMAx_DSCT3_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT3_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT3_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT3_DA;

#define M2L31_PDMA0_PDMAx_DSCT4_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT4_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT4_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT4_DA;

#define M2L31_PDMA0_PDMAx_DSCT5_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT5_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT5_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT5_DA;

#define M2L31_PDMA0_PDMAx_DSCT6_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT6_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT6_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT6_DA;

#define M2L31_PDMA0_PDMAx_DSCT7_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT7_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT7_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT7_DA;

#define M2L31_PDMA0_PDMAx_DSCT8_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT8_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT8_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT8_DA;

#define M2L31_PDMA0_PDMAx_DSCT9_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT9_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT9_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT9_DA;

#define M2L31_PDMA0_PDMAx_DSCT10_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT10_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT10_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT10_DA;

#define M2L31_PDMA0_PDMAx_DSCT11_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT11_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT11_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT11_DA;

#define M2L31_PDMA0_PDMAx_DSCT12_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT12_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT12_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT12_DA;

#define M2L31_PDMA0_PDMAx_DSCT13_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT13_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT13_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT13_DA;

#define M2L31_PDMA0_PDMAx_DSCT14_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT14_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT14_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT14_DA;

#define M2L31_PDMA0_PDMAx_DSCT15_DA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT15_DA;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT15_DA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT15_DA;

#define M2L31_PDMA0_PDMAx_DSCT0_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long NEXT : 16;
    unsigned long EXENEXT : 16;
} sM2L31_PDMA0_PDMAx_DSCT0_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT0_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT0_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT1_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT1_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT1_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT1_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT2_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT2_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT2_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT2_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT3_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT3_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT3_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT3_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT4_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT4_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT4_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT4_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT5_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT5_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT5_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT5_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT6_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT6_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT6_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT6_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT7_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT7_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT7_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT7_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT8_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT8_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT8_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT8_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT9_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT9_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT9_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT9_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT10_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT10_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT10_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT10_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT11_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT11_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT11_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT11_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT12_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT12_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT12_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT12_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT13_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT13_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT13_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT13_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT14_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT14_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT14_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT14_NEXT;

#define M2L31_PDMA0_PDMAx_DSCT15_NEXT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_DSCT15_NEXT;

typedef union {
    sM2L31_PDMA0_PDMAx_DSCT15_NEXT Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_DSCT15_NEXT;

#define M2L31_PDMA0_PDMAx_CURSCAT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CURADDR : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT0;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT0 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT0;

#define M2L31_PDMA0_PDMAx_CURSCAT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT1;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT1 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT1;

#define M2L31_PDMA0_PDMAx_CURSCAT2_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT2;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT2 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT2;

#define M2L31_PDMA0_PDMAx_CURSCAT3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT3;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT3 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT3;

#define M2L31_PDMA0_PDMAx_CURSCAT4_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT4;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT4 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT4;

#define M2L31_PDMA0_PDMAx_CURSCAT5_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT5;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT5 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT5;

#define M2L31_PDMA0_PDMAx_CURSCAT6_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT6;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT6 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT6;

#define M2L31_PDMA0_PDMAx_CURSCAT7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT7;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT7 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT7;

#define M2L31_PDMA0_PDMAx_CURSCAT8_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT8;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT8 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT8;

#define M2L31_PDMA0_PDMAx_CURSCAT9_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT9;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT9 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT9;

#define M2L31_PDMA0_PDMAx_CURSCAT10_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT10;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT10 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT10;

#define M2L31_PDMA0_PDMAx_CURSCAT11_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT11;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT11 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT11;

#define M2L31_PDMA0_PDMAx_CURSCAT12_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT12;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT12 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT12;

#define M2L31_PDMA0_PDMAx_CURSCAT13_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT13;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT13 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT13;

#define M2L31_PDMA0_PDMAx_CURSCAT14_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT14;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT14 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT14;

#define M2L31_PDMA0_PDMAx_CURSCAT15_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 32;
} sM2L31_PDMA0_PDMAx_CURSCAT15;

typedef union {
    sM2L31_PDMA0_PDMAx_CURSCAT15 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CURSCAT15;

#define M2L31_PDMA0_PDMAx_CHCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CHEN0 : 1;
    unsigned long CHEN1 : 1;
    unsigned long CHEN2 : 1;
    unsigned long CHEN3 : 1;
    unsigned long CHEN4 : 1;
    unsigned long CHEN5 : 1;
    unsigned long CHEN6 : 1;
    unsigned long CHEN7 : 1;
    unsigned long CHEN8 : 1;
    unsigned long CHEN9 : 1;
    unsigned long CHEN10 : 1;
    unsigned long CHEN11 : 1;
    unsigned long CHEN12 : 1;
    unsigned long CHEN13 : 1;
    unsigned long CHEN14 : 1;
    unsigned long CHEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_PDMA0_PDMAx_CHCTL;

typedef union {
    sM2L31_PDMA0_PDMAx_CHCTL Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CHCTL;

#define M2L31_PDMA0_PDMAx_PAUSE_RESET_VALUE 0x00000000
typedef struct {
    unsigned long PAUSE0 : 1;
    unsigned long PAUSE1 : 1;
    unsigned long PAUSE2 : 1;
    unsigned long PAUSE3 : 1;
    unsigned long PAUSE4 : 1;
    unsigned long PAUSE5 : 1;
    unsigned long PAUSE6 : 1;
    unsigned long PAUSE7 : 1;
    unsigned long PAUSE8 : 1;
    unsigned long PAUSE9 : 1;
    unsigned long PAUSE10 : 1;
    unsigned long PAUSE11 : 1;
    unsigned long PAUSE12 : 1;
    unsigned long PAUSE13 : 1;
    unsigned long PAUSE14 : 1;
    unsigned long PAUSE15 : 1;
    unsigned long Res0 : 16;
} sM2L31_PDMA0_PDMAx_PAUSE;

typedef union {
    sM2L31_PDMA0_PDMAx_PAUSE Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_PAUSE;

#define M2L31_PDMA0_PDMAx_SWREQ_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SWREQ0 : 1;
    unsigned long SWREQ1 : 1;
    unsigned long SWREQ2 : 1;
    unsigned long SWREQ3 : 1;
    unsigned long SWREQ4 : 1;
    unsigned long SWREQ5 : 1;
    unsigned long SWREQ6 : 1;
    unsigned long SWREQ7 : 1;
    unsigned long SWREQ8 : 1;
    unsigned long SWREQ9 : 1;
    unsigned long SWREQ10 : 1;
    unsigned long SWREQ11 : 1;
    unsigned long SWREQ12 : 1;
    unsigned long SWREQ13 : 1;
    unsigned long SWREQ14 : 1;
    unsigned long SWREQ15 : 1;
    unsigned long Res0 : 16;
} sM2L31_PDMA0_PDMAx_SWREQ;

typedef union {
    sM2L31_PDMA0_PDMAx_SWREQ Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_SWREQ;

#define M2L31_PDMA0_PDMAx_TRGSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long REQSTS0 : 1;
    unsigned long REQSTS1 : 1;
    unsigned long REQSTS2 : 1;
    unsigned long REQSTS3 : 1;
    unsigned long REQSTS4 : 1;
    unsigned long REQSTS5 : 1;
    unsigned long REQSTS6 : 1;
    unsigned long REQSTS7 : 1;
    unsigned long REQSTS8 : 1;
    unsigned long REQSTS9 : 1;
    unsigned long REQSTS10 : 1;
    unsigned long REQSTS11 : 1;
    unsigned long REQSTS12 : 1;
    unsigned long REQSTS13 : 1;
    unsigned long REQSTS14 : 1;
    unsigned long REQSTS15 : 1;
    unsigned long Res0 : 16;
} sM2L31_PDMA0_PDMAx_TRGSTS;

typedef union {
    sM2L31_PDMA0_PDMAx_TRGSTS Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_TRGSTS;

#define M2L31_PDMA0_PDMAx_PRISET_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FPRISET0 : 1;
    unsigned long FPRISET1 : 1;
    unsigned long FPRISET2 : 1;
    unsigned long FPRISET3 : 1;
    unsigned long FPRISET4 : 1;
    unsigned long FPRISET5 : 1;
    unsigned long FPRISET6 : 1;
    unsigned long FPRISET7 : 1;
    unsigned long FPRISET8 : 1;
    unsigned long FPRISET9 : 1;
    unsigned long FPRISET10 : 1;
    unsigned long FPRISET11 : 1;
    unsigned long FPRISET12 : 1;
    unsigned long FPRISET13 : 1;
    unsigned long FPRISET14 : 1;
    unsigned long FPRISET15 : 1;
    unsigned long Res0 : 16;
} sM2L31_PDMA0_PDMAx_PRISET;

typedef union {
    sM2L31_PDMA0_PDMAx_PRISET Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_PRISET;

#define M2L31_PDMA0_PDMAx_PRICLR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FPRICLR0 : 1;
    unsigned long FPRICLR1 : 1;
    unsigned long FPRICLR2 : 1;
    unsigned long FPRICLR3 : 1;
    unsigned long FPRICLR4 : 1;
    unsigned long FPRICLR5 : 1;
    unsigned long FPRICLR6 : 1;
    unsigned long FPRICLR7 : 1;
    unsigned long FPRICLR8 : 1;
    unsigned long FPRICLR9 : 1;
    unsigned long FPRICLR10 : 1;
    unsigned long FPRICLR11 : 1;
    unsigned long FPRICLR12 : 1;
    unsigned long FPRICLR13 : 1;
    unsigned long FPRICLR14 : 1;
    unsigned long FPRICLR15 : 1;
    unsigned long Res0 : 16;
} sM2L31_PDMA0_PDMAx_PRICLR;

typedef union {
    sM2L31_PDMA0_PDMAx_PRICLR Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_PRICLR;

#define M2L31_PDMA0_PDMAx_INTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long INTEN0 : 1;
    unsigned long INTEN1 : 1;
    unsigned long INTEN2 : 1;
    unsigned long INTEN3 : 1;
    unsigned long INTEN4 : 1;
    unsigned long INTEN5 : 1;
    unsigned long INTEN6 : 1;
    unsigned long INTEN7 : 1;
    unsigned long INTEN8 : 1;
    unsigned long INTEN9 : 1;
    unsigned long INTEN10 : 1;
    unsigned long INTEN11 : 1;
    unsigned long INTEN12 : 1;
    unsigned long INTEN13 : 1;
    unsigned long INTEN14 : 1;
    unsigned long INTEN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_PDMA0_PDMAx_INTEN;

typedef union {
    sM2L31_PDMA0_PDMAx_INTEN Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_INTEN;

#define M2L31_PDMA0_PDMAx_INTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ABTIF : 1;
    unsigned long TDIF : 1;
    unsigned long ALIGNF : 1;
    unsigned long Res0 : 5;
    unsigned long REQTOF0 : 1;
    unsigned long REQTOF1 : 1;
    unsigned long Res1 : 22;
} sM2L31_PDMA0_PDMAx_INTSTS;

typedef union {
    sM2L31_PDMA0_PDMAx_INTSTS Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_INTSTS;

#define M2L31_PDMA0_PDMAx_ABTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ABTIF0 : 1;
    unsigned long ABTIF1 : 1;
    unsigned long ABTIF2 : 1;
    unsigned long ABTIF3 : 1;
    unsigned long ABTIF4 : 1;
    unsigned long ABTIF5 : 1;
    unsigned long ABTIF6 : 1;
    unsigned long ABTIF7 : 1;
    unsigned long ABTIF8 : 1;
    unsigned long ABTIF9 : 1;
    unsigned long ABTIF10 : 1;
    unsigned long ABTIF11 : 1;
    unsigned long ABTIF12 : 1;
    unsigned long ABTIF13 : 1;
    unsigned long ABTIF14 : 1;
    unsigned long ABTIF15 : 1;
    unsigned long Res0 : 16;
} sM2L31_PDMA0_PDMAx_ABTSTS;

typedef union {
    sM2L31_PDMA0_PDMAx_ABTSTS Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_ABTSTS;

#define M2L31_PDMA0_PDMAx_TDSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TDIF0 : 1;
    unsigned long TDIF1 : 1;
    unsigned long TDIF2 : 1;
    unsigned long TDIF3 : 1;
    unsigned long TDIF4 : 1;
    unsigned long TDIF5 : 1;
    unsigned long TDIF6 : 1;
    unsigned long TDIF7 : 1;
    unsigned long TDIF8 : 1;
    unsigned long TDIF9 : 1;
    unsigned long TDIF10 : 1;
    unsigned long TDIF11 : 1;
    unsigned long TDIF12 : 1;
    unsigned long TDIF13 : 1;
    unsigned long TDIF14 : 1;
    unsigned long TDIF15 : 1;
    unsigned long Res0 : 16;
} sM2L31_PDMA0_PDMAx_TDSTS;

typedef union {
    sM2L31_PDMA0_PDMAx_TDSTS Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_TDSTS;

#define M2L31_PDMA0_PDMAx_ALIGN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ALIGN0 : 1;
    unsigned long ALIGN1 : 1;
    unsigned long ALIGN2 : 1;
    unsigned long ALIGN3 : 1;
    unsigned long ALIGN4 : 1;
    unsigned long ALIGN5 : 1;
    unsigned long ALIGN6 : 1;
    unsigned long ALIGN7 : 1;
    unsigned long ALIGN8 : 1;
    unsigned long ALIGN9 : 1;
    unsigned long ALIGN10 : 1;
    unsigned long ALIGN11 : 1;
    unsigned long ALIGN12 : 1;
    unsigned long ALIGN13 : 1;
    unsigned long ALIGN14 : 1;
    unsigned long ALIGN15 : 1;
    unsigned long Res0 : 16;
} sM2L31_PDMA0_PDMAx_ALIGN;

typedef union {
    sM2L31_PDMA0_PDMAx_ALIGN Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_ALIGN;

#define M2L31_PDMA0_PDMAx_TACTSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TXACTF0 : 1;
    unsigned long TXACTF1 : 1;
    unsigned long TXACTF2 : 1;
    unsigned long TXACTF3 : 1;
    unsigned long TXACTF4 : 1;
    unsigned long TXACTF5 : 1;
    unsigned long TXACTF6 : 1;
    unsigned long TXACTF7 : 1;
    unsigned long TXACTF8 : 1;
    unsigned long TXACTF9 : 1;
    unsigned long TXACTF10 : 1;
    unsigned long TXACTF11 : 1;
    unsigned long TXACTF12 : 1;
    unsigned long TXACTF13 : 1;
    unsigned long TXACTF14 : 1;
    unsigned long TXACTF15 : 1;
    unsigned long Res0 : 16;
} sM2L31_PDMA0_PDMAx_TACTSTS;

typedef union {
    sM2L31_PDMA0_PDMAx_TACTSTS Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_TACTSTS;

#define M2L31_PDMA0_PDMAx_TOUTPSC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TOUTPSC0 : 3;
    unsigned long Res0 : 1;
    unsigned long TOUTPSC1 : 3;
    unsigned long Res1 : 25;
} sM2L31_PDMA0_PDMAx_TOUTPSC;

typedef union {
    sM2L31_PDMA0_PDMAx_TOUTPSC Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_TOUTPSC;

#define M2L31_PDMA0_PDMAx_TOUTEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TOUTEN0 : 1;
    unsigned long TOUTEN1 : 1;
    unsigned long Res0 : 30;
} sM2L31_PDMA0_PDMAx_TOUTEN;

typedef union {
    sM2L31_PDMA0_PDMAx_TOUTEN Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_TOUTEN;

#define M2L31_PDMA0_PDMAx_TOUTIEN_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TOUTIEN0 : 1;
    unsigned long TOUTIEN1 : 1;
    unsigned long Res0 : 30;
} sM2L31_PDMA0_PDMAx_TOUTIEN;

typedef union {
    sM2L31_PDMA0_PDMAx_TOUTIEN Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_TOUTIEN;

#define M2L31_PDMA0_PDMAx_SCATBA_RESET_VALUE 0x20000000
typedef struct {
    unsigned long Res0 : 16;
    unsigned long SCATBA : 16;
} sM2L31_PDMA0_PDMAx_SCATBA;

typedef union {
    sM2L31_PDMA0_PDMAx_SCATBA Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_SCATBA;

#define M2L31_PDMA0_PDMAx_TOC_RESET_VALUE 0x00000000
typedef struct {
    unsigned long TOC0 : 16;
    unsigned long TOC1 : 16;
} sM2L31_PDMA0_PDMAx_TOC;

typedef union {
    sM2L31_PDMA0_PDMAx_TOC Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_TOC;

#define M2L31_PDMA0_PDMAx_CHRST_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CH0RST : 1;
    unsigned long CH1RST : 1;
    unsigned long CH2RST : 1;
    unsigned long CH3RST : 1;
    unsigned long CH4RST : 1;
    unsigned long CH5RST : 1;
    unsigned long CH6RST : 1;
    unsigned long CH7RST : 1;
    unsigned long CH8RST : 1;
    unsigned long CH9RST : 1;
    unsigned long CH10RST : 1;
    unsigned long CH11RST : 1;
    unsigned long CH12RST : 1;
    unsigned long CH13RST : 1;
    unsigned long CH14RST : 1;
    unsigned long CH15RST : 1;
    unsigned long Res0 : 16;
} sM2L31_PDMA0_PDMAx_CHRST;

typedef union {
    sM2L31_PDMA0_PDMAx_CHRST Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_CHRST;

#define M2L31_PDMA0_PDMAx_REQSEL0_3_RESET_VALUE 0x00000000
typedef struct {
    unsigned long REQSRC0 : 7;
    unsigned long Res0 : 1;
    unsigned long REQSRC1 : 7;
    unsigned long Res1 : 1;
    unsigned long REQSRC2 : 7;
    unsigned long Res2 : 1;
    unsigned long REQSRC3 : 7;
    unsigned long Res3 : 1;
} sM2L31_PDMA0_PDMAx_REQSEL0_3;

typedef union {
    sM2L31_PDMA0_PDMAx_REQSEL0_3 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_REQSEL0_3;

#define M2L31_PDMA0_PDMAx_REQSEL4_7_RESET_VALUE 0x00000000
typedef struct {
    unsigned long REQSRC4 : 7;
    unsigned long Res0 : 1;
    unsigned long REQSRC5 : 7;
    unsigned long Res1 : 1;
    unsigned long REQSRC6 : 7;
    unsigned long Res2 : 1;
    unsigned long REQSRC7 : 7;
    unsigned long Res3 : 1;
} sM2L31_PDMA0_PDMAx_REQSEL4_7;

typedef union {
    sM2L31_PDMA0_PDMAx_REQSEL4_7 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_REQSEL4_7;

#define M2L31_PDMA0_PDMAx_REQSEL8_11_RESET_VALUE 0x00000000
typedef struct {
    unsigned long REQSRC8 : 7;
    unsigned long Res0 : 1;
    unsigned long REQSRC9 : 7;
    unsigned long Res1 : 1;
    unsigned long REQSRC10 : 7;
    unsigned long Res2 : 1;
    unsigned long REQSRC11 : 7;
    unsigned long Res3 : 1;
} sM2L31_PDMA0_PDMAx_REQSEL8_11;

typedef union {
    sM2L31_PDMA0_PDMAx_REQSEL8_11 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_REQSEL8_11;

#define M2L31_PDMA0_PDMAx_REQSEL12_15_RESET_VALUE 0x00000000
typedef struct {
    unsigned long REQSRC12 : 7;
    unsigned long Res0 : 1;
    unsigned long REQSRC13 : 7;
    unsigned long Res1 : 1;
    unsigned long REQSRC14 : 7;
    unsigned long Res2 : 1;
    unsigned long REQSRC15 : 7;
    unsigned long Res3 : 1;
} sM2L31_PDMA0_PDMAx_REQSEL12_15;

typedef union {
    sM2L31_PDMA0_PDMAx_REQSEL12_15 Bit;
    unsigned long  All;
} uM2L31_PDMA0_PDMAx_REQSEL12_15;

typedef struct {
    uM2L31_PDMA0_PDMAx_DSCT0_CTL M2L31_PDMA0_PDMAx_DSCT0_CTL; // Offset: 0x0
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    uM2L31_PDMA0_PDMAx_DSCT1_CTL M2L31_PDMA0_PDMAx_DSCT1_CTL; // Offset: 0x10
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    uM2L31_PDMA0_PDMAx_DSCT2_CTL M2L31_PDMA0_PDMAx_DSCT2_CTL; // Offset: 0x20
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    uM2L31_PDMA0_PDMAx_DSCT3_CTL M2L31_PDMA0_PDMAx_DSCT3_CTL; // Offset: 0x30
    unsigned long Reserved9;
    unsigned long Reserved10;
    unsigned long Reserved11;
    uM2L31_PDMA0_PDMAx_DSCT4_CTL M2L31_PDMA0_PDMAx_DSCT4_CTL; // Offset: 0x40
    unsigned long Reserved12;
    unsigned long Reserved13;
    unsigned long Reserved14;
    uM2L31_PDMA0_PDMAx_DSCT5_CTL M2L31_PDMA0_PDMAx_DSCT5_CTL; // Offset: 0x50
    unsigned long Reserved15;
    unsigned long Reserved16;
    unsigned long Reserved17;
    uM2L31_PDMA0_PDMAx_DSCT6_CTL M2L31_PDMA0_PDMAx_DSCT6_CTL; // Offset: 0x60
    unsigned long Reserved18;
    unsigned long Reserved19;
    unsigned long Reserved20;
    uM2L31_PDMA0_PDMAx_DSCT7_CTL M2L31_PDMA0_PDMAx_DSCT7_CTL; // Offset: 0x70
    unsigned long Reserved21;
    unsigned long Reserved22;
    unsigned long Reserved23;
    uM2L31_PDMA0_PDMAx_DSCT8_CTL M2L31_PDMA0_PDMAx_DSCT8_CTL; // Offset: 0x80
    unsigned long Reserved24;
    unsigned long Reserved25;
    unsigned long Reserved26;
    uM2L31_PDMA0_PDMAx_DSCT9_CTL M2L31_PDMA0_PDMAx_DSCT9_CTL; // Offset: 0x90
    unsigned long Reserved27;
    unsigned long Reserved28;
    unsigned long Reserved29;
    uM2L31_PDMA0_PDMAx_DSCT10_CTL M2L31_PDMA0_PDMAx_DSCT10_CTL; // Offset: 0xa0
    unsigned long Reserved30;
    unsigned long Reserved31;
    unsigned long Reserved32;
    uM2L31_PDMA0_PDMAx_DSCT11_CTL M2L31_PDMA0_PDMAx_DSCT11_CTL; // Offset: 0xb0
    unsigned long Reserved33;
    unsigned long Reserved34;
    unsigned long Reserved35;
    uM2L31_PDMA0_PDMAx_DSCT12_CTL M2L31_PDMA0_PDMAx_DSCT12_CTL; // Offset: 0xc0
    unsigned long Reserved36;
    unsigned long Reserved37;
    unsigned long Reserved38;
    uM2L31_PDMA0_PDMAx_DSCT13_CTL M2L31_PDMA0_PDMAx_DSCT13_CTL; // Offset: 0xd0
    unsigned long Reserved39;
    unsigned long Reserved40;
    unsigned long Reserved41;
    uM2L31_PDMA0_PDMAx_DSCT14_CTL M2L31_PDMA0_PDMAx_DSCT14_CTL; // Offset: 0xe0
    unsigned long Reserved42;
    unsigned long Reserved43;
    unsigned long Reserved44;
    uM2L31_PDMA0_PDMAx_DSCT15_CTL M2L31_PDMA0_PDMAx_DSCT15_CTL; // Offset: 0xf0
    uM2L31_PDMA0_PDMAx_DSCT0_SA M2L31_PDMA0_PDMAx_DSCT0_SA; // Offset: 0x4
    unsigned long Reserved45;
    unsigned long Reserved46;
    unsigned long Reserved47;
    uM2L31_PDMA0_PDMAx_DSCT1_SA M2L31_PDMA0_PDMAx_DSCT1_SA; // Offset: 0x14
    unsigned long Reserved48;
    unsigned long Reserved49;
    unsigned long Reserved50;
    uM2L31_PDMA0_PDMAx_DSCT2_SA M2L31_PDMA0_PDMAx_DSCT2_SA; // Offset: 0x24
    unsigned long Reserved51;
    unsigned long Reserved52;
    unsigned long Reserved53;
    uM2L31_PDMA0_PDMAx_DSCT3_SA M2L31_PDMA0_PDMAx_DSCT3_SA; // Offset: 0x34
    unsigned long Reserved54;
    unsigned long Reserved55;
    unsigned long Reserved56;
    uM2L31_PDMA0_PDMAx_DSCT4_SA M2L31_PDMA0_PDMAx_DSCT4_SA; // Offset: 0x44
    unsigned long Reserved57;
    unsigned long Reserved58;
    unsigned long Reserved59;
    uM2L31_PDMA0_PDMAx_DSCT5_SA M2L31_PDMA0_PDMAx_DSCT5_SA; // Offset: 0x54
    unsigned long Reserved60;
    unsigned long Reserved61;
    unsigned long Reserved62;
    uM2L31_PDMA0_PDMAx_DSCT6_SA M2L31_PDMA0_PDMAx_DSCT6_SA; // Offset: 0x64
    unsigned long Reserved63;
    unsigned long Reserved64;
    unsigned long Reserved65;
    uM2L31_PDMA0_PDMAx_DSCT7_SA M2L31_PDMA0_PDMAx_DSCT7_SA; // Offset: 0x74
    unsigned long Reserved66;
    unsigned long Reserved67;
    unsigned long Reserved68;
    uM2L31_PDMA0_PDMAx_DSCT8_SA M2L31_PDMA0_PDMAx_DSCT8_SA; // Offset: 0x84
    unsigned long Reserved69;
    unsigned long Reserved70;
    unsigned long Reserved71;
    uM2L31_PDMA0_PDMAx_DSCT9_SA M2L31_PDMA0_PDMAx_DSCT9_SA; // Offset: 0x94
    unsigned long Reserved72;
    unsigned long Reserved73;
    unsigned long Reserved74;
    uM2L31_PDMA0_PDMAx_DSCT10_SA M2L31_PDMA0_PDMAx_DSCT10_SA; // Offset: 0xa4
    unsigned long Reserved75;
    unsigned long Reserved76;
    unsigned long Reserved77;
    uM2L31_PDMA0_PDMAx_DSCT11_SA M2L31_PDMA0_PDMAx_DSCT11_SA; // Offset: 0xb4
    unsigned long Reserved78;
    unsigned long Reserved79;
    unsigned long Reserved80;
    uM2L31_PDMA0_PDMAx_DSCT12_SA M2L31_PDMA0_PDMAx_DSCT12_SA; // Offset: 0xc4
    unsigned long Reserved81;
    unsigned long Reserved82;
    unsigned long Reserved83;
    uM2L31_PDMA0_PDMAx_DSCT13_SA M2L31_PDMA0_PDMAx_DSCT13_SA; // Offset: 0xd4
    unsigned long Reserved84;
    unsigned long Reserved85;
    unsigned long Reserved86;
    uM2L31_PDMA0_PDMAx_DSCT14_SA M2L31_PDMA0_PDMAx_DSCT14_SA; // Offset: 0xe4
    unsigned long Reserved87;
    unsigned long Reserved88;
    unsigned long Reserved89;
    uM2L31_PDMA0_PDMAx_DSCT15_SA M2L31_PDMA0_PDMAx_DSCT15_SA; // Offset: 0xf4
    uM2L31_PDMA0_PDMAx_DSCT0_DA M2L31_PDMA0_PDMAx_DSCT0_DA; // Offset: 0x8
    unsigned long Reserved90;
    unsigned long Reserved91;
    unsigned long Reserved92;
    uM2L31_PDMA0_PDMAx_DSCT1_DA M2L31_PDMA0_PDMAx_DSCT1_DA; // Offset: 0x18
    unsigned long Reserved93;
    unsigned long Reserved94;
    unsigned long Reserved95;
    uM2L31_PDMA0_PDMAx_DSCT2_DA M2L31_PDMA0_PDMAx_DSCT2_DA; // Offset: 0x28
    unsigned long Reserved96;
    unsigned long Reserved97;
    unsigned long Reserved98;
    uM2L31_PDMA0_PDMAx_DSCT3_DA M2L31_PDMA0_PDMAx_DSCT3_DA; // Offset: 0x38
    unsigned long Reserved99;
    unsigned long Reserved100;
    unsigned long Reserved101;
    uM2L31_PDMA0_PDMAx_DSCT4_DA M2L31_PDMA0_PDMAx_DSCT4_DA; // Offset: 0x48
    unsigned long Reserved102;
    unsigned long Reserved103;
    unsigned long Reserved104;
    uM2L31_PDMA0_PDMAx_DSCT5_DA M2L31_PDMA0_PDMAx_DSCT5_DA; // Offset: 0x58
    unsigned long Reserved105;
    unsigned long Reserved106;
    unsigned long Reserved107;
    uM2L31_PDMA0_PDMAx_DSCT6_DA M2L31_PDMA0_PDMAx_DSCT6_DA; // Offset: 0x68
    unsigned long Reserved108;
    unsigned long Reserved109;
    unsigned long Reserved110;
    uM2L31_PDMA0_PDMAx_DSCT7_DA M2L31_PDMA0_PDMAx_DSCT7_DA; // Offset: 0x78
    unsigned long Reserved111;
    unsigned long Reserved112;
    unsigned long Reserved113;
    uM2L31_PDMA0_PDMAx_DSCT8_DA M2L31_PDMA0_PDMAx_DSCT8_DA; // Offset: 0x88
    unsigned long Reserved114;
    unsigned long Reserved115;
    unsigned long Reserved116;
    uM2L31_PDMA0_PDMAx_DSCT9_DA M2L31_PDMA0_PDMAx_DSCT9_DA; // Offset: 0x98
    unsigned long Reserved117;
    unsigned long Reserved118;
    unsigned long Reserved119;
    uM2L31_PDMA0_PDMAx_DSCT10_DA M2L31_PDMA0_PDMAx_DSCT10_DA; // Offset: 0xa8
    unsigned long Reserved120;
    unsigned long Reserved121;
    unsigned long Reserved122;
    uM2L31_PDMA0_PDMAx_DSCT11_DA M2L31_PDMA0_PDMAx_DSCT11_DA; // Offset: 0xb8
    unsigned long Reserved123;
    unsigned long Reserved124;
    unsigned long Reserved125;
    uM2L31_PDMA0_PDMAx_DSCT12_DA M2L31_PDMA0_PDMAx_DSCT12_DA; // Offset: 0xc8
    unsigned long Reserved126;
    unsigned long Reserved127;
    unsigned long Reserved128;
    uM2L31_PDMA0_PDMAx_DSCT13_DA M2L31_PDMA0_PDMAx_DSCT13_DA; // Offset: 0xd8
    unsigned long Reserved129;
    unsigned long Reserved130;
    unsigned long Reserved131;
    uM2L31_PDMA0_PDMAx_DSCT14_DA M2L31_PDMA0_PDMAx_DSCT14_DA; // Offset: 0xe8
    unsigned long Reserved132;
    unsigned long Reserved133;
    unsigned long Reserved134;
    uM2L31_PDMA0_PDMAx_DSCT15_DA M2L31_PDMA0_PDMAx_DSCT15_DA; // Offset: 0xf8
    uM2L31_PDMA0_PDMAx_DSCT0_NEXT M2L31_PDMA0_PDMAx_DSCT0_NEXT; // Offset: 0xc
    unsigned long Reserved135;
    unsigned long Reserved136;
    unsigned long Reserved137;
    uM2L31_PDMA0_PDMAx_DSCT1_NEXT M2L31_PDMA0_PDMAx_DSCT1_NEXT; // Offset: 0x1c
    unsigned long Reserved138;
    unsigned long Reserved139;
    unsigned long Reserved140;
    uM2L31_PDMA0_PDMAx_DSCT2_NEXT M2L31_PDMA0_PDMAx_DSCT2_NEXT; // Offset: 0x2c
    unsigned long Reserved141;
    unsigned long Reserved142;
    unsigned long Reserved143;
    uM2L31_PDMA0_PDMAx_DSCT3_NEXT M2L31_PDMA0_PDMAx_DSCT3_NEXT; // Offset: 0x3c
    unsigned long Reserved144;
    unsigned long Reserved145;
    unsigned long Reserved146;
    uM2L31_PDMA0_PDMAx_DSCT4_NEXT M2L31_PDMA0_PDMAx_DSCT4_NEXT; // Offset: 0x4c
    unsigned long Reserved147;
    unsigned long Reserved148;
    unsigned long Reserved149;
    uM2L31_PDMA0_PDMAx_DSCT5_NEXT M2L31_PDMA0_PDMAx_DSCT5_NEXT; // Offset: 0x5c
    unsigned long Reserved150;
    unsigned long Reserved151;
    unsigned long Reserved152;
    uM2L31_PDMA0_PDMAx_DSCT6_NEXT M2L31_PDMA0_PDMAx_DSCT6_NEXT; // Offset: 0x6c
    unsigned long Reserved153;
    unsigned long Reserved154;
    unsigned long Reserved155;
    uM2L31_PDMA0_PDMAx_DSCT7_NEXT M2L31_PDMA0_PDMAx_DSCT7_NEXT; // Offset: 0x7c
    unsigned long Reserved156;
    unsigned long Reserved157;
    unsigned long Reserved158;
    uM2L31_PDMA0_PDMAx_DSCT8_NEXT M2L31_PDMA0_PDMAx_DSCT8_NEXT; // Offset: 0x8c
    unsigned long Reserved159;
    unsigned long Reserved160;
    unsigned long Reserved161;
    uM2L31_PDMA0_PDMAx_DSCT9_NEXT M2L31_PDMA0_PDMAx_DSCT9_NEXT; // Offset: 0x9c
    unsigned long Reserved162;
    unsigned long Reserved163;
    unsigned long Reserved164;
    uM2L31_PDMA0_PDMAx_DSCT10_NEXT M2L31_PDMA0_PDMAx_DSCT10_NEXT; // Offset: 0xac
    unsigned long Reserved165;
    unsigned long Reserved166;
    unsigned long Reserved167;
    uM2L31_PDMA0_PDMAx_DSCT11_NEXT M2L31_PDMA0_PDMAx_DSCT11_NEXT; // Offset: 0xbc
    unsigned long Reserved168;
    unsigned long Reserved169;
    unsigned long Reserved170;
    uM2L31_PDMA0_PDMAx_DSCT12_NEXT M2L31_PDMA0_PDMAx_DSCT12_NEXT; // Offset: 0xcc
    unsigned long Reserved171;
    unsigned long Reserved172;
    unsigned long Reserved173;
    uM2L31_PDMA0_PDMAx_DSCT13_NEXT M2L31_PDMA0_PDMAx_DSCT13_NEXT; // Offset: 0xdc
    unsigned long Reserved174;
    unsigned long Reserved175;
    unsigned long Reserved176;
    uM2L31_PDMA0_PDMAx_DSCT14_NEXT M2L31_PDMA0_PDMAx_DSCT14_NEXT; // Offset: 0xec
    unsigned long Reserved177;
    unsigned long Reserved178;
    unsigned long Reserved179;
    uM2L31_PDMA0_PDMAx_DSCT15_NEXT M2L31_PDMA0_PDMAx_DSCT15_NEXT; // Offset: 0xfc
    uM2L31_PDMA0_PDMAx_CURSCAT0 M2L31_PDMA0_PDMAx_CURSCAT0; // Offset: 0x100
    uM2L31_PDMA0_PDMAx_CURSCAT1 M2L31_PDMA0_PDMAx_CURSCAT1; // Offset: 0x104
    uM2L31_PDMA0_PDMAx_CURSCAT2 M2L31_PDMA0_PDMAx_CURSCAT2; // Offset: 0x108
    uM2L31_PDMA0_PDMAx_CURSCAT3 M2L31_PDMA0_PDMAx_CURSCAT3; // Offset: 0x10c
    uM2L31_PDMA0_PDMAx_CURSCAT4 M2L31_PDMA0_PDMAx_CURSCAT4; // Offset: 0x110
    uM2L31_PDMA0_PDMAx_CURSCAT5 M2L31_PDMA0_PDMAx_CURSCAT5; // Offset: 0x114
    uM2L31_PDMA0_PDMAx_CURSCAT6 M2L31_PDMA0_PDMAx_CURSCAT6; // Offset: 0x118
    uM2L31_PDMA0_PDMAx_CURSCAT7 M2L31_PDMA0_PDMAx_CURSCAT7; // Offset: 0x11c
    uM2L31_PDMA0_PDMAx_CURSCAT8 M2L31_PDMA0_PDMAx_CURSCAT8; // Offset: 0x120
    uM2L31_PDMA0_PDMAx_CURSCAT9 M2L31_PDMA0_PDMAx_CURSCAT9; // Offset: 0x124
    uM2L31_PDMA0_PDMAx_CURSCAT10 M2L31_PDMA0_PDMAx_CURSCAT10; // Offset: 0x128
    uM2L31_PDMA0_PDMAx_CURSCAT11 M2L31_PDMA0_PDMAx_CURSCAT11; // Offset: 0x12c
    uM2L31_PDMA0_PDMAx_CURSCAT12 M2L31_PDMA0_PDMAx_CURSCAT12; // Offset: 0x130
    uM2L31_PDMA0_PDMAx_CURSCAT13 M2L31_PDMA0_PDMAx_CURSCAT13; // Offset: 0x134
    uM2L31_PDMA0_PDMAx_CURSCAT14 M2L31_PDMA0_PDMAx_CURSCAT14; // Offset: 0x138
    uM2L31_PDMA0_PDMAx_CURSCAT15 M2L31_PDMA0_PDMAx_CURSCAT15; // Offset: 0x13c
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
    uM2L31_PDMA0_PDMAx_CHCTL M2L31_PDMA0_PDMAx_CHCTL; // Offset: 0x400
    uM2L31_PDMA0_PDMAx_PAUSE M2L31_PDMA0_PDMAx_PAUSE; // Offset: 0x404
    uM2L31_PDMA0_PDMAx_SWREQ M2L31_PDMA0_PDMAx_SWREQ; // Offset: 0x408
    uM2L31_PDMA0_PDMAx_TRGSTS M2L31_PDMA0_PDMAx_TRGSTS; // Offset: 0x40c
    uM2L31_PDMA0_PDMAx_PRISET M2L31_PDMA0_PDMAx_PRISET; // Offset: 0x410
    uM2L31_PDMA0_PDMAx_PRICLR M2L31_PDMA0_PDMAx_PRICLR; // Offset: 0x414
    uM2L31_PDMA0_PDMAx_INTEN M2L31_PDMA0_PDMAx_INTEN; // Offset: 0x418
    uM2L31_PDMA0_PDMAx_INTSTS M2L31_PDMA0_PDMAx_INTSTS; // Offset: 0x41c
    uM2L31_PDMA0_PDMAx_ABTSTS M2L31_PDMA0_PDMAx_ABTSTS; // Offset: 0x420
    uM2L31_PDMA0_PDMAx_TDSTS M2L31_PDMA0_PDMAx_TDSTS; // Offset: 0x424
    uM2L31_PDMA0_PDMAx_ALIGN M2L31_PDMA0_PDMAx_ALIGN; // Offset: 0x428
    uM2L31_PDMA0_PDMAx_TACTSTS M2L31_PDMA0_PDMAx_TACTSTS; // Offset: 0x42c
    uM2L31_PDMA0_PDMAx_TOUTPSC M2L31_PDMA0_PDMAx_TOUTPSC; // Offset: 0x430
    uM2L31_PDMA0_PDMAx_TOUTEN M2L31_PDMA0_PDMAx_TOUTEN; // Offset: 0x434
    uM2L31_PDMA0_PDMAx_TOUTIEN M2L31_PDMA0_PDMAx_TOUTIEN; // Offset: 0x438
    uM2L31_PDMA0_PDMAx_SCATBA M2L31_PDMA0_PDMAx_SCATBA; // Offset: 0x43c
    uM2L31_PDMA0_PDMAx_TOC M2L31_PDMA0_PDMAx_TOC; // Offset: 0x440
    unsigned long Reserved356;
    unsigned long Reserved357;
    unsigned long Reserved358;
    unsigned long Reserved359;
    unsigned long Reserved360;
    unsigned long Reserved361;
    unsigned long Reserved362;
    uM2L31_PDMA0_PDMAx_CHRST M2L31_PDMA0_PDMAx_CHRST; // Offset: 0x460
    unsigned long Reserved363;
    unsigned long Reserved364;
    unsigned long Reserved365;
    unsigned long Reserved366;
    unsigned long Reserved367;
    unsigned long Reserved368;
    unsigned long Reserved369;
    uM2L31_PDMA0_PDMAx_REQSEL0_3 M2L31_PDMA0_PDMAx_REQSEL0_3; // Offset: 0x480
    uM2L31_PDMA0_PDMAx_REQSEL4_7 M2L31_PDMA0_PDMAx_REQSEL4_7; // Offset: 0x484
    uM2L31_PDMA0_PDMAx_REQSEL8_11 M2L31_PDMA0_PDMAx_REQSEL8_11; // Offset: 0x488
    uM2L31_PDMA0_PDMAx_REQSEL12_15 M2L31_PDMA0_PDMAx_REQSEL12_15; // Offset: 0x48c
} sM2L31_PDMA0;

