void TargetRegisterWriteUsart1Tdr(unsigned char Data);
void TargetRegisterWriteUsart2Tdr(unsigned char Data);

#ifdef WIN_SIM

#define TARGET_PERIPH_MEMORY_SIZE 256

typedef struct {
	unsigned char TargetMemory[TARGET_PERIPH_MEMORY_SIZE];
} tTargetMemoryBlock;

extern tTargetMemoryBlock TargetMemory[];

typedef enum {
	STK, CLK, GPIO, PERIPHERAL_REGISTER_COUNT
} tTargetPeriph;

#define ASM(x)
#define ATTRIBUTE_SECTION(x)
#define RAMFUNC

#define M2L31_CLK_ADR        (unsigned char *)&TargetMemory[CLK]
#define M2L31_GPIO_ADR      (unsigned char *)&TargetMemory[GPIO]
#define SYSTICK_ADR    (unsigned char *)&TargetMemory[STK]

extern tTargetMemoryBlock TargetMemory[PERIPHERAL_REGISTER_COUNT];

	extern unsigned char NvicReg[1024];
	extern unsigned char PwrReg[1024];
	extern unsigned char ScbReg[1024];
	extern unsigned char SysTickReg[1024];
	extern const unsigned char AdcCalibrationValue[4];
	extern unsigned char FlashSeg31[1024];
#else

	#define ASM(x) asm(x)
	#define ATTRIBUTE_SECTION(x) __attribute__ (x)
	#define RAMFUNC __attribute__ ((long_call, section (".ramfunctions")))

	#define SYSTICK_ADR 0xE000E010
	#define M2L31_CLK_ADR 0x40000200
	#define M2L31_GPIO_ADR 0x40004000
	#define EADC0_ADR 0x40043000
	#define SYS_BA_ADR 0x40000000

#endif
