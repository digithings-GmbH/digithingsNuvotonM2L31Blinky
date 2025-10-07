#include "..\Target\Target.h"
#include "CortexM23StkDef.h"

unsigned int StkCounter;

void CortexM23SysTickInit(void) {
	volatile tCORTEX_M23_STK* pStk = (tCORTEX_M23_STK*)(SYSTICK_ADR);
	uSTK_CTRL StkCtrl;
	uSTK_LOAD StkLoad;

	StkCounter = 0;

	StkLoad.All = 0; 	// Reset value: 0x0000 0000
	StkLoad.Bit.RELOAD = ((12000000/2)/200); /* 5 ms */
	pStk->STK_LOAD.All = StkLoad.All;

	StkCtrl.All = 0; 	// Reset value: 0x0000 0000
	StkCtrl.Bit.ENABLE = 1;
	StkCtrl.Bit.TICKINT = 1;	// 1: Counting down to zero to asserts the SysTick exception request.
	StkCtrl.Bit.CLKSOURCE = 1;	// 1: Processor clock (AHB)
	pStk->STK_CTRL.All = StkCtrl.All;
}

void CortexM23StkInt(void) {
	StkCounter++;
}

unsigned int  CortexM23StkGetCounter(void) {
	return StkCounter;
}

