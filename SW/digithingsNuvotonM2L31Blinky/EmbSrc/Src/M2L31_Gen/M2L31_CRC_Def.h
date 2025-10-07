// Base Addres of CRC = 0x40031000

#define M2L31_CRC_CRC_CTL_RESET_VALUE 0x60000000
typedef struct {
    unsigned long CRCEN : 1;
    unsigned long CHKSINIT : 1;
    unsigned long Res0 : 22;
    unsigned long DATREV : 1;
    unsigned long CHKSREV : 1;
    unsigned long DATFMT : 1;
    unsigned long CHKSFMT : 1;
    unsigned long DATLEN : 2;
    unsigned long CRCMODE : 2;
} sM2L31_CRC_CRC_CTL;

typedef union {
    sM2L31_CRC_CRC_CTL Bit;
    unsigned long  All;
} uM2L31_CRC_CRC_CTL;

#define M2L31_CRC_CRC_DAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DATA : 32;
} sM2L31_CRC_CRC_DAT;

typedef union {
    sM2L31_CRC_CRC_DAT Bit;
    unsigned long  All;
} uM2L31_CRC_CRC_DAT;

#define M2L31_CRC_CRC_SEED_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long SEED : 32;
} sM2L31_CRC_CRC_SEED;

typedef union {
    sM2L31_CRC_CRC_SEED Bit;
    unsigned long  All;
} uM2L31_CRC_CRC_SEED;

#define M2L31_CRC_CRC_CHECKSUM_RESET_VALUE 0xFFFFFFFF
typedef struct {
    unsigned long CHECKSUM : 32;
} sM2L31_CRC_CRC_CHECKSUM;

typedef union {
    sM2L31_CRC_CRC_CHECKSUM Bit;
    unsigned long  All;
} uM2L31_CRC_CRC_CHECKSUM;

#define M2L31_CRC_CRC_POLYNOMIAL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long POLYNOMIAL : 32;
} sM2L31_CRC_CRC_POLYNOMIAL;

typedef union {
    sM2L31_CRC_CRC_POLYNOMIAL Bit;
    unsigned long  All;
} uM2L31_CRC_CRC_POLYNOMIAL;

#define M2L31_CRC_CRC_DMACTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long START : 1;
    unsigned long PAUSE : 1;
    unsigned long Res0 : 2;
    unsigned long ABORT : 1;
    unsigned long Res1 : 3;
    unsigned long INTEN : 1;
    unsigned long Res2 : 23;
} sM2L31_CRC_CRC_DMACTL;

typedef union {
    sM2L31_CRC_CRC_DMACTL Bit;
    unsigned long  All;
} uM2L31_CRC_CRC_DMACTL;

#define M2L31_CRC_CRC_DMASTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long FINISH : 1;
    unsigned long ABORTED : 1;
    unsigned long CFGERR : 1;
    unsigned long ACCERR : 1;
    unsigned long Res0 : 28;
} sM2L31_CRC_CRC_DMASTS;

typedef union {
    sM2L31_CRC_CRC_DMASTS Bit;
    unsigned long  All;
} uM2L31_CRC_CRC_DMASTS;

#define M2L31_CRC_CRC_SADDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long SADDR : 30;
} sM2L31_CRC_CRC_SADDR;

typedef union {
    sM2L31_CRC_CRC_SADDR Bit;
    unsigned long  All;
} uM2L31_CRC_CRC_SADDR;

#define M2L31_CRC_CRC_DMACNT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 2;
    unsigned long DMACNT : 26;
    unsigned long Res1 : 4;
} sM2L31_CRC_CRC_DMACNT;

typedef union {
    sM2L31_CRC_CRC_DMACNT Bit;
    unsigned long  All;
} uM2L31_CRC_CRC_DMACNT;

typedef struct {
    uM2L31_CRC_CRC_CTL M2L31_CRC_CRC_CTL; // Offset: 0x0
    uM2L31_CRC_CRC_DAT M2L31_CRC_CRC_DAT; // Offset: 0x4
    uM2L31_CRC_CRC_SEED M2L31_CRC_CRC_SEED; // Offset: 0x8
    uM2L31_CRC_CRC_CHECKSUM M2L31_CRC_CRC_CHECKSUM; // Offset: 0xc
    uM2L31_CRC_CRC_POLYNOMIAL M2L31_CRC_CRC_POLYNOMIAL; // Offset: 0x10
    unsigned long Reserved0;
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
    uM2L31_CRC_CRC_DMACTL M2L31_CRC_CRC_DMACTL; // Offset: 0x40
    uM2L31_CRC_CRC_DMASTS M2L31_CRC_CRC_DMASTS; // Offset: 0x44
    uM2L31_CRC_CRC_SADDR M2L31_CRC_CRC_SADDR; // Offset: 0x48
    uM2L31_CRC_CRC_DMACNT M2L31_CRC_CRC_DMACNT; // Offset: 0x4c
} sM2L31_CRC;

