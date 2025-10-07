using System;
using static WinSim.MainWindow;


namespace WinSim {


    public class Gpio {
        public static UInt32 M2L31_GPIO_PC_DOUT;
        public static void GpioMain() {
            M2L31_GPIO_PC_DOUT = WrapperEmbRegister.WrapperRegisterRead(WrapperEmbRegister.PeriperalRegister.GPIO, 0x88);
        }
    }
}