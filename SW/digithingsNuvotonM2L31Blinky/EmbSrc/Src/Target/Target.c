#include "Target.h"

#ifdef WIN_SIM

tTargetMemoryBlock TargetMemory[PERIPHERAL_REGISTER_COUNT];

	unsigned char NvicReg[1024];
	unsigned char PwrReg[1024];
	unsigned char ScbReg[1024];
	unsigned char SysTickReg[1024];
	
	const unsigned char AdcCalibrationValue[4] = { 0x6D,0x06,0x0,0x0 };
	unsigned char FlashSeg31[1024];
#if 0
void TargetRegisterWriteUsart1Tdr(unsigned char Data) {
		volatile unsigned long* pUSART_TDR = (unsigned long*)(USART1_ADR + 0x28);
		volatile uUSART_ISR* pUsartIsr = (uUSART_ISR*)(USART1_ADR + 0x1C);
		*pUSART_TDR = Data;
		pUsartIsr->Bit.TC = 0;
	}

void TargetRegisterWriteUsart2Tdr(unsigned char Data) {
		volatile unsigned long* pUSART_TDR = (unsigned long*)(USART2_ADR + 0x28);
		volatile uUSART_ISR* pUsartIsr = (uUSART_ISR*)(USART2_ADR + 0x1C);
		*pUSART_TDR = Data;
		pUsartIsr->Bit.TC = 0;
	} 
#endif
#else

#include "../Drv/Interrupt.h"


typedef void
(* const pHandler)(void);

__attribute__ ((section(".isr_vector"),used))
const pHandler CoreHandler[16] = {
		(pHandler)0x20007FFF, // Stack Pointer after Reset // 0x00
		intReset,            //  The Microcontroller jumps to this function after Reset // 0x04
		intNmi,              // 0x08
		intHardFault,        // 0x0C
		0,                   // 0x10
		0,                   // 0x14
		0,                   // 0x18
		0,                   // 0x1c
		0,                   // 0x20
		0,                   // 0x24
		0,                   // 0x28
		intSvCall,           // 0x2c
		0,                   // 0x30
		0,                   // 0x34
		intPendSv,           // 0x38
		intSysTick           // 0x3C
};

__attribute__ ((section(".isr_vector"),used))
const pHandler InterruptHandler[144] = {
		IntUnused, /* 0 */
		IntUnused, /* 1 */
		IntUnused, /* 2 */
		IntUnused, /* 3 */
		IntUnused, /* 4 */
		IntUnused, /* 5 */
		IntUnused, /* 6 */
		IntUnused, /* 7 */
		IntUnused, /* 8 */
		IntUnused, /* 9 */
		IntUnused, /* 10 */
		IntUnused, /* 11 */
		IntUnused, /* 12 */
		IntUnused, /* 13 */
		IntUnused, /* 14 */
		IntUnused, /* 15 */
		IntUnused, /* 16 */
		IntUnused, /* 17 */
		IntUnused, /* 18 */
		IntUnused, /* 19 */
		IntUnused, /* 20 */
		IntUnused, /* 21 */
		IntUnused, /* 22 */
		IntUnused, /* 23 */
		IntUnused, /* 24 */
		IntUnused, /* 25 */
		IntUnused, /* 26 */
		IntUnused, /* 27 */
		IntUnused, /* 28 */
		IntUnused, /* 29 */
		IntUnused, /* 30 */
		IntUnused, /* 31 */
		IntUnused, /* 32 */
		IntUnused, /* 33 */
		IntUnused, /* 34 */
		IntUnused, /* 35 */
		IntUnused, /* 36 */
		IntUnused, /* 37 */
		IntUnused, /* 38 */
		IntUnused, /* 39 */
		IntUnused, /* 40 */
		IntUnused, /* 41 */
		IntUnused, /* 42 */
		IntUnused, /* 43 */
		IntUnused, /* 44 */
		IntUnused, /* 45 */
		IntUnused, /* 46 */
		IntUnused, /* 47 */
		IntUnused, /* 48 */
		IntUnused, /* 49 */
		IntUnused, /* 50 */
		IntUnused, /* 51 */
		IntUnused, /* 52 */
		IntUnused, /* 53 */
		IntUnused, /* 54 */
		IntUnused, /* 55 */
		IntUnused, /* 56 */
		IntUnused, /* 57 */
		IntUnused, /* 58 */
		IntUnused, /* 59 */
		IntUnused, /* 60 */
		IntUnused, /* 61 */
		IntUnused, /* 62 */
		IntUnused, /* 63 */
		IntUnused, /* 64 */
		IntUnused, /* 65 */
		IntUnused, /* 66 */
		IntUnused, /* 67 */
		IntUnused, /* 68 */
		IntUnused, /* 69 */
		IntUnused, /* 70 */
		IntUnused, /* 71 */
		IntUnused, /* 72 */
		IntUnused, /* 73 */
		IntUnused, /* 74 */
		IntUnused, /* 75 */
		IntUnused, /* 76 */
		IntUnused, /* 77 */
		IntUnused, /* 78 */
		IntUnused, /* 79 */
		IntUnused, /* 80 */
		IntUnused, /* 81 */
		IntUnused, /* 82 */
		IntUnused, /* 83 */
		IntUnused, /* 84 */
		IntUnused, /* 85 */
		IntUnused, /* 86 */
		IntUnused, /* 87 */
		IntUnused, /* 88 */
		IntUnused, /* 89 */
		IntUnused, /* 90 */
		IntUnused, /* 91 */
		IntUnused, /* 92 */
		IntUnused, /* 93 */
		IntUnused, /* 94 */
		IntUnused, /* 95 */
		IntUnused, /* 96 */
		IntUnused, /* 97 */
		IntUnused, /* 98 */
		IntUnused, /* 99 */
		IntUnused, /* 100 */
		IntUnused, /* 101 */
		IntUnused, /* 102 */
		IntUnused, /* 103 */
		IntUnused, /* 104 */
		IntUnused, /* 105 */
		IntUnused, /* 106 */
		IntUnused, /* 107 */
		IntUnused, /* 108 */
		IntUnused, /* 109 */
		IntUnused, /* 110 */
		IntUnused, /* 111 */
		IntUnused, /* 112 */
		IntUnused, /* 113 */
		IntUnused, /* 114 */
		IntUnused, /* 115 */
		IntUnused, /* 116 */
		IntUnused, /* 117 */
		IntUnused, /* 118 */
		IntUnused, /* 119 */
		IntUnused, /* 120 */
		IntUnused, /* 121 */
		IntUnused, /* 122 */
		IntUnused, /* 123 */
		IntUnused, /* 124 */
		IntUnused, /* 125 */
		IntUnused, /* 126 */
		IntUnused, /* 127 */
		IntUnused, /* 128 */
		IntUnused, /* 129 */
		IntUnused, /* 130 */
		IntUnused, /* 131 */
		IntUnused, /* 132 */
		IntUnused, /* 133 */
		IntUnused, /* 134 */
		IntUnused, /* 135 */
		IntUnused, /* 136 */
		IntUnused, /* 137 */
		IntUnused, /* 138 */
		IntUnused, /* 139 */
		IntUnused, /* 140 */
		IntUnused, /* 141 */
		IntUnused, /* 142 */
		IntUnused  /* 143 */
};


void TargetRegisterWriteUsart1Tdr(unsigned char Data) {
#if 0 // TODO
	volatile unsigned long* pUSART_TDR = (unsigned long*)(USART1_ADR + 0x28);
	*pUSART_TDR = Data;
#endif
}

void TargetRegisterWriteUsart2Tdr(unsigned char Data) {
#if 0 // TODO
	volatile unsigned long* pUSART_TDR = (unsigned long*)(USART2_ADR + 0x28);
	*pUSART_TDR = Data;
#endif
}
#endif

/*
  Target.c is needed for Simulation with Visual Studio and C#. (#ifdef WIN_SIM)
  If using the Target STM32G431 you use the second part of this file (Start at line 29 #else)
  #ifdef and #else are preprocessor definitions. if WIN_SIM is defined the compiler uses the #if or the #else path.
  You can set the #define in code or in the compiler call from the development environment.
 */
