#include "../Target/Target.h"
#include "../HalOut/PortOut.h"
#include "..\M2L31_Gen\M2L31_GPIO_Def.h"


void GpioOutMain(void) {
	volatile sM2L31_GPIO* pM2L31_GPIO = (sM2L31_GPIO*)M2L31_GPIO_ADR;
	uM2L31_GPIO_PC_DOUT M2L31_GPIO_PC_DOUT;

	ePortOutState State = PortOutGetState_PA8();

	M2L31_GPIO_PC_DOUT.All = pM2L31_GPIO->M2L31_GPIO_PC_DOUT.All;
	if (PORT_OUT_PORT_HIGH == State) {
		M2L31_GPIO_PC_DOUT.Bit.DOUT14 = 0;
	}
	else {
		M2L31_GPIO_PC_DOUT.Bit.DOUT14 = 1;
	}




	pM2L31_GPIO->M2L31_GPIO_PC_DOUT.All = M2L31_GPIO_PC_DOUT.All;

}


/*
 In this function we set the Voltage of the output pins.
 BS8 means Bit Set and BR8 means Reset of Pin 8 of port B.
 We have to use the .All Union because the STM32 can only write to registers with long (4 Byte) in one step!
 You cant set Bits seperately like in the PIC Microcontrollers.
 */
