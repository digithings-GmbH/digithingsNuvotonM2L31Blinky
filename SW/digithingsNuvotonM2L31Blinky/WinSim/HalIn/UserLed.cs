using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WinSim {
    public class UserLed {
        const UInt32 USER_LED_BIT_MASK = (1 << 14);
        public enum eUserLedState { USER_LED_OFF, USER_LED_ON };

        public static eUserLedState UserLedGetState() {
            eUserLedState ret;
            if ((Gpio.M2L31_GPIO_PC_DOUT & USER_LED_BIT_MASK) == USER_LED_BIT_MASK) {
                ret = eUserLedState.USER_LED_OFF;
            }
            else {
                ret = eUserLedState.USER_LED_ON;
            }
            return ret;
        }
    }
}
