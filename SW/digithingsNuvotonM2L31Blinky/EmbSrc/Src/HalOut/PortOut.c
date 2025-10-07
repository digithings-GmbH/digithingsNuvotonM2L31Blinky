#include "../HalOut/PortOut.h"
#include "../App/StatusLed.h"

ePortOutState PortOutGetState_PA8(void) {
	eStatusLedState PortOutStateStatusLed = StatusLedGetState();
	if (STATUS_LED_ON == PortOutStateStatusLed) {
		return PORT_OUT_PORT_HIGH;
}
	else {
		return PORT_OUT_PORT_LOW;
	}
}
