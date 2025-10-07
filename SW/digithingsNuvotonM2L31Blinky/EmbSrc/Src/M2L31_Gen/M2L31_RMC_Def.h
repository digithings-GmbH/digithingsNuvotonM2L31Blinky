// Base Addres of RMC = 0x4000C000

#define M2L31_RMC_RMC_ISPCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ISPEN : 1;
    unsigned long BS : 1;
    unsigned long Res0 : 1;
    unsigned long APUEN : 1;
    unsigned long CFGUEN : 1;
    unsigned long LDUEN : 1;
    unsigned long ISPFF : 1;
    unsigned long Res1 : 1;
    unsigned long MPEN : 1;
    unsigned long Res2 : 15;
    unsigned long INTEN : 1;
    unsigned long Res3 : 7;
} sM2L31_RMC_RMC_ISPCTL;

typedef union {
    sM2L31_RMC_RMC_ISPCTL Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_ISPCTL;

#define M2L31_RMC_RMC_ISPADDR_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ISPADDR : 32;
} sM2L31_RMC_RMC_ISPADDR;

typedef union {
    sM2L31_RMC_RMC_ISPADDR Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_ISPADDR;

#define M2L31_RMC_RMC_ISPDAT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ISPDAT : 32;
} sM2L31_RMC_RMC_ISPDAT;

typedef union {
    sM2L31_RMC_RMC_ISPDAT Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_ISPDAT;

#define M2L31_RMC_RMC_ISPCMD_RESET_VALUE 0x00000000
typedef struct {
    unsigned long CMD : 7;
    unsigned long Res0 : 25;
} sM2L31_RMC_RMC_ISPCMD;

typedef union {
    sM2L31_RMC_RMC_ISPCMD Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_ISPCMD;

#define M2L31_RMC_RMC_ISPTRG_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ISPGO : 1;
    unsigned long Res0 : 31;
} sM2L31_RMC_RMC_ISPTRG;

typedef union {
    sM2L31_RMC_RMC_ISPTRG Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_ISPTRG;

#define M2L31_RMC_RMC_DFBA_RESET_VALUE 0x00000000
typedef struct {
    unsigned long DFBA : 32;
} sM2L31_RMC_RMC_DFBA;

typedef union {
    sM2L31_RMC_RMC_DFBA Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_DFBA;

#define M2L31_RMC_RMC_FTCTL_RESET_VALUE 0x00000000
typedef struct {
    unsigned long Res0 : 9;
    unsigned long CACHEINV : 1;
    unsigned long Res1 : 22;
} sM2L31_RMC_RMC_FTCTL;

typedef union {
    sM2L31_RMC_RMC_FTCTL Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_FTCTL;

#define M2L31_RMC_RMC_ISPSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long ISPBUSY : 1;
    unsigned long Res0 : 1;
    unsigned long CBS : 1;
    unsigned long Res1 : 3;
    unsigned long ISPFF : 1;
    unsigned long ALLONE : 1;
    unsigned long Res2 : 1;
    unsigned long VECMAP : 15;
    unsigned long INTFLAG : 1;
    unsigned long SCFF : 1;
    unsigned long Res3 : 4;
    unsigned long FBS : 1;
    unsigned long Res4 : 1;
} sM2L31_RMC_RMC_ISPSTS;

typedef union {
    sM2L31_RMC_RMC_ISPSTS Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_ISPSTS;

#define M2L31_RMC_RMC_CYCCTL_RESET_VALUE 0x00000002
typedef struct {
    unsigned long CYCLE : 4;
    unsigned long Res0 : 28;
} sM2L31_RMC_RMC_CYCCTL;

typedef union {
    sM2L31_RMC_RMC_CYCCTL Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_CYCCTL;

#define M2L31_RMC_RMC_XOMR0STS_RESET_VALUE 0x1FF000FF
typedef struct {
    unsigned long SIZE : 8;
    unsigned long BASE : 24;
} sM2L31_RMC_RMC_XOMR0STS;

typedef union {
    sM2L31_RMC_RMC_XOMR0STS Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_XOMR0STS;

#define M2L31_RMC_RMC_XOMR1STS_RESET_VALUE 0x1FF000FF
typedef struct {
    unsigned long SIZE : 8;
    unsigned long BASE : 24;
} sM2L31_RMC_RMC_XOMR1STS;

typedef union {
    sM2L31_RMC_RMC_XOMR1STS Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_XOMR1STS;

#define M2L31_RMC_RMC_XOMR2STS_RESET_VALUE 0x1FF000FF
typedef struct {
    unsigned long SIZE : 8;
    unsigned long BASE : 24;
} sM2L31_RMC_RMC_XOMR2STS;

typedef union {
    sM2L31_RMC_RMC_XOMR2STS Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_XOMR2STS;

#define M2L31_RMC_RMC_XOMR3STS_RESET_VALUE 0x1FF000FF
typedef struct {
    unsigned long SIZE : 8;
    unsigned long BASE : 24;
} sM2L31_RMC_RMC_XOMR3STS;

typedef union {
    sM2L31_RMC_RMC_XOMR3STS Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_XOMR3STS;

#define M2L31_RMC_RMC_XOMSTS_RESET_VALUE 0x00000000
typedef struct {
    unsigned long XOMR0ON : 1;
    unsigned long XOMR1ON : 1;
    unsigned long XOMR2ON : 1;
    unsigned long XOMR3ON : 1;
    unsigned long XOMPEF : 1;
    unsigned long Res0 : 27;
} sM2L31_RMC_RMC_XOMSTS;

typedef union {
    sM2L31_RMC_RMC_XOMSTS Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_XOMSTS;

#define M2L31_RMC_RMC_APWPROT0_RESET_VALUE 0x00000000
typedef struct {
    unsigned long APPROEN0 : 1;
    unsigned long APPROEN1 : 1;
    unsigned long APPROEN2 : 1;
    unsigned long APPROEN3 : 1;
    unsigned long APPROEN4 : 1;
    unsigned long APPROEN5 : 1;
    unsigned long APPROEN6 : 1;
    unsigned long APPROEN7 : 1;
    unsigned long APPROEN8 : 1;
    unsigned long APPROEN9 : 1;
    unsigned long APPROEN10 : 1;
    unsigned long APPROEN11 : 1;
    unsigned long APPROEN12 : 1;
    unsigned long APPROEN13 : 1;
    unsigned long APPROEN14 : 1;
    unsigned long APPROEN15 : 1;
    unsigned long APPROEN16 : 1;
    unsigned long APPROEN17 : 1;
    unsigned long APPROEN18 : 1;
    unsigned long APPROEN19 : 1;
    unsigned long APPROEN20 : 1;
    unsigned long APPROEN21 : 1;
    unsigned long APPROEN22 : 1;
    unsigned long APPROEN23 : 1;
    unsigned long APPROEN24 : 1;
    unsigned long APPROEN25 : 1;
    unsigned long APPROEN26 : 1;
    unsigned long APPROEN27 : 1;
    unsigned long APPROEN28 : 1;
    unsigned long APPROEN29 : 1;
    unsigned long APPROEN30 : 1;
    unsigned long APPROEN31 : 1;
} sM2L31_RMC_RMC_APWPROT0;

typedef union {
    sM2L31_RMC_RMC_APWPROT0 Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_APWPROT0;

#define M2L31_RMC_RMC_APWPROT1_RESET_VALUE 0x00000000
typedef struct {
    unsigned long APPROEN32 : 1;
    unsigned long APPROEN33 : 1;
    unsigned long APPROEN34 : 1;
    unsigned long APPROEN35 : 1;
    unsigned long APPROEN36 : 1;
    unsigned long APPROEN37 : 1;
    unsigned long APPROEN38 : 1;
    unsigned long APPROEN39 : 1;
    unsigned long APPROEN40 : 1;
    unsigned long APPROEN41 : 1;
    unsigned long APPROEN42 : 1;
    unsigned long APPROEN43 : 1;
    unsigned long APPROEN44 : 1;
    unsigned long APPROEN45 : 1;
    unsigned long APPROEN46 : 1;
    unsigned long APPROEN47 : 1;
    unsigned long APPROEN48 : 1;
    unsigned long APPROEN49 : 1;
    unsigned long APPROEN50 : 1;
    unsigned long APPROEN51 : 1;
    unsigned long APPROEN52 : 1;
    unsigned long APPROEN53 : 1;
    unsigned long APPROEN54 : 1;
    unsigned long APPROEN55 : 1;
    unsigned long APPROEN56 : 1;
    unsigned long APPROEN57 : 1;
    unsigned long APPROEN58 : 1;
    unsigned long APPROEN59 : 1;
    unsigned long APPROEN60 : 1;
    unsigned long APPROEN61 : 1;
    unsigned long APPROEN62 : 1;
    unsigned long APPROEN63 : 1;
} sM2L31_RMC_RMC_APWPROT1;

typedef union {
    sM2L31_RMC_RMC_APWPROT1 Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_APWPROT1;

#define M2L31_RMC_RMC_APWPKEEP_RESET_VALUE 0x00000000
typedef struct {
    unsigned long APWPKEEP0 : 16;
    unsigned long APWPKEEP1 : 16;
} sM2L31_RMC_RMC_APWPKEEP;

typedef union {
    sM2L31_RMC_RMC_APWPKEEP Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_APWPKEEP;

#define M2L31_RMC_RMC_SCACT_RESET_VALUE 0x00000000
typedef struct {
    unsigned long SCACT : 1;
    unsigned long Res0 : 31;
} sM2L31_RMC_RMC_SCACT;

typedef union {
    sM2L31_RMC_RMC_SCACT Bit;
    unsigned long  All;
} uM2L31_RMC_RMC_SCACT;

typedef struct {
    uM2L31_RMC_RMC_ISPCTL M2L31_RMC_RMC_ISPCTL; // Offset: 0x0
    uM2L31_RMC_RMC_ISPADDR M2L31_RMC_RMC_ISPADDR; // Offset: 0x4
    uM2L31_RMC_RMC_ISPDAT M2L31_RMC_RMC_ISPDAT; // Offset: 0x8
    uM2L31_RMC_RMC_ISPCMD M2L31_RMC_RMC_ISPCMD; // Offset: 0xc
    uM2L31_RMC_RMC_ISPTRG M2L31_RMC_RMC_ISPTRG; // Offset: 0x10
    uM2L31_RMC_RMC_DFBA M2L31_RMC_RMC_DFBA; // Offset: 0x14
    uM2L31_RMC_RMC_FTCTL M2L31_RMC_RMC_FTCTL; // Offset: 0x18
    unsigned long Reserved0;
    unsigned long Reserved1;
    unsigned long Reserved2;
    unsigned long Reserved3;
    unsigned long Reserved4;
    unsigned long Reserved5;
    unsigned long Reserved6;
    unsigned long Reserved7;
    unsigned long Reserved8;
    uM2L31_RMC_RMC_ISPSTS M2L31_RMC_RMC_ISPSTS; // Offset: 0x40
    unsigned long Reserved9;
    unsigned long Reserved10;
    uM2L31_RMC_RMC_CYCCTL M2L31_RMC_RMC_CYCCTL; // Offset: 0x4c
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
    uM2L31_RMC_RMC_XOMR0STS M2L31_RMC_RMC_XOMR0STS; // Offset: 0xd0
    uM2L31_RMC_RMC_XOMR1STS M2L31_RMC_RMC_XOMR1STS; // Offset: 0xd4
    uM2L31_RMC_RMC_XOMR2STS M2L31_RMC_RMC_XOMR2STS; // Offset: 0xd8
    uM2L31_RMC_RMC_XOMR3STS M2L31_RMC_RMC_XOMR3STS; // Offset: 0xdc
    uM2L31_RMC_RMC_XOMSTS M2L31_RMC_RMC_XOMSTS; // Offset: 0xe0
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
    uM2L31_RMC_RMC_APWPROT0 M2L31_RMC_RMC_APWPROT0; // Offset: 0x110
    uM2L31_RMC_RMC_APWPROT1 M2L31_RMC_RMC_APWPROT1; // Offset: 0x114
    uM2L31_RMC_RMC_APWPKEEP M2L31_RMC_RMC_APWPKEEP; // Offset: 0x118
    uM2L31_RMC_RMC_SCACT M2L31_RMC_RMC_SCACT; // Offset: 0x11c
} sM2L31_RMC;

