#include "../CortexM23/CortexM23Stk.h"
#include "..\Target\Target.h"
#include "..\System\Timeslice.h"
#include "..\Drv\M2L31Clk.h"
#include "..\Drv\M2L31Gpio.h"
#include "..\App\StatusLed.h"


int main()
{


	M2L31ClkInit();

	StatusLedInit();

	M2L31GpioInit();

	CortexM23SysTickInit();

	TimesliceInit();
	StartTimesliceForever();
	while(1);
	return 0;
}

/*
 After Reset the Microcontroller jumps first to intReset and then to main();
 In the Main there are all initializations and after the initialization we jump to a timeslice.
 The timeslice is a low level operatin system. There are called all functions.
 There are fast and slow timeslots where you can call your functions.

 In G431RccInit we start the peripheral clocks for the GPIO.
 This is needed because when we will use a Port we first have to start the corresponding clock.

 In GpioInit we initialize the Port as Input, Output, Analog Input or Alternate function.

 To use the Timeslice we need a Timer. The STM32G4 has a System Tick Timer. We get an Interrupt if the Timer run to 0.
 And we use this Interrupt for the Timeslice.

 At last we Init the Timeslice and then Jump to the Timeslice Operating system forever.
 */
