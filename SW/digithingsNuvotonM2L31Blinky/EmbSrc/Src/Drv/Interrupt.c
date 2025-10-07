#include "../CortexM23/CortexM23Stk.h"
#include "..\Target\Target.h"
#include "..\System\Main.h"

void intReset(void) {
	main();
}

void IntUnused(void) {
	//while (1) {}
	ASM("NOP");
}

void intNmi(void) {}
void intHardFault(void) {
	while (1) {
		ASM("NOP");
	}
}

void intMemManage(void)        {
	ASM("NOP");
}

void intBusFault(void)         { IntUnused(); }
void intUsageFault(void)       { IntUnused(); }
void intReserved2(void)        { IntUnused(); }
void intSvCall(void)           { IntUnused(); }
void intDebMonitor(void)       { IntUnused(); }
void intReserved3(void)        { IntUnused(); }
void intPendSv(void)           { IntUnused(); }
void intSysTick(void)          { CortexM23StkInt(); }

void int00(void)         { IntUnused(); }
void int01(void)         { IntUnused(); }
void int02(void)         { IntUnused(); }
void int03(void)         { IntUnused(); }
void int04(void)         { IntUnused(); }
void int05(void)         { IntUnused(); }
void int06(void)         { IntUnused(); }
void int07(void)         { IntUnused(); }
void int08(void)         { IntUnused(); }
void int09(void)         { IntUnused(); }
void int10(void)         { IntUnused(); }
void int11(void)         { IntUnused(); }
void int12(void)         { IntUnused(); }
void int13(void)         { IntUnused(); }
void int14(void)         { IntUnused(); }
void int15(void)         { IntUnused(); }
void int16(void)         { IntUnused(); }
void int17(void)         { IntUnused(); }
void int18(void)         { IntUnused(); }
void int19(void)         { IntUnused(); }
void int20(void)         { IntUnused(); }
void int21(void)         { IntUnused(); }
void int22(void)         { IntUnused(); }
void int23(void)         { IntUnused(); }
void int24(void)         { IntUnused(); }
void int25(void)         { IntUnused(); }
void int26(void)         { IntUnused(); }
void int27(void)         { IntUnused(); }
void int28(void)         { IntUnused(); }
void int29(void)         { IntUnused(); }
void int30(void)         { IntUnused(); }
void int31(void)         { IntUnused(); }
void int32(void)         { IntUnused(); }
void int33(void)         { IntUnused(); }
void int34(void)         { IntUnused(); }
void int35(void)         { IntUnused(); }
void int36(void)         { IntUnused(); }
void int37(void)         { IntUnused(); }
void int38(void)         { IntUnused(); }
void int39(void)         { IntUnused(); }
void int40(void)         { IntUnused(); }
void int41(void)         { IntUnused(); }
void int42(void)         { IntUnused(); } // M2L31AdcIn_Init
void int43(void)         { IntUnused(); }
void int44(void)         { IntUnused(); }
void int45(void)         { IntUnused(); }
void int46(void)         { IntUnused(); }
void int47(void)         { IntUnused(); }
void int48(void)         { IntUnused(); }
void int49(void)         { IntUnused(); }
void int50(void)         { IntUnused(); }
void int51(void)         { IntUnused(); }
void int52(void)         { IntUnused(); }
void int53(void)         { IntUnused(); }
void int54(void)         { IntUnused(); }
void int55(void)         { IntUnused(); }
void int56(void)         { IntUnused(); }
void int57(void)         { IntUnused(); }
void int58(void)         { IntUnused(); }
void int59(void)         { IntUnused(); }
void int60(void)         { IntUnused(); }
void int61(void)         { IntUnused(); }
void int62(void)         { IntUnused(); }
void int63(void)         { IntUnused(); }
void int64(void)         { IntUnused(); }
void int65(void)         { IntUnused(); }
void int66(void)         { IntUnused(); }
void int67(void)         { IntUnused(); }
void int68(void)         { IntUnused(); }
void int69(void)         { IntUnused(); }
void int70(void)         { IntUnused(); }
void int71(void)         { IntUnused(); }
void int72(void)         { IntUnused(); }
void int73(void)         { IntUnused(); }
void int74(void)         { IntUnused(); }
void int75(void)         { IntUnused(); }
void int76(void)         { IntUnused(); }
void int77(void)         { IntUnused(); }
void int78(void)         { IntUnused(); }
void int79(void)         { IntUnused(); }
void int80(void)         { IntUnused(); }
void int81(void)         { IntUnused(); }
void int82(void)         { IntUnused(); }
void int83(void)         { IntUnused(); }
void int84(void)         { IntUnused(); }
void int85(void)         { IntUnused(); }
void int86(void)         { IntUnused(); }
void int87(void)         { IntUnused(); }
void int88(void)         { IntUnused(); }
void int89(void)         { IntUnused(); }
void int90(void)         { IntUnused(); }
void int91(void)         { IntUnused(); }
void int92(void)         { IntUnused(); }
void int93(void)         { IntUnused(); }
void int94(void)         { IntUnused(); }
void int95(void)         { IntUnused(); }
void int96(void)         { IntUnused(); }
void int97(void)         { IntUnused(); }
void int98(void)         { IntUnused(); }
void int99(void)         { IntUnused(); }
void int100(void)        { IntUnused(); }
void int101(void)        { IntUnused(); }
void int102(void)         { IntUnused(); }
void int103(void)         { IntUnused(); }
void int104(void)         { IntUnused(); }
void int105(void)         { IntUnused(); }
void int106(void)         { IntUnused(); }
void int107(void)         { IntUnused(); }
void int108(void)         { IntUnused(); }
void int109(void)         { IntUnused(); }
void int110(void)         { IntUnused(); }
void int111(void)         { IntUnused(); }
void int112(void)         { IntUnused(); }
void int113(void)         { IntUnused(); }
void int114(void)         { IntUnused(); }
void int115(void)         { IntUnused(); }
void int116(void)         { IntUnused(); }
void int117(void)         { IntUnused(); }
void int118(void)         { IntUnused(); }
void int119(void)         { IntUnused(); }
void int120(void)         { IntUnused(); }
void int121(void)         { IntUnused(); }
void int122(void)         { IntUnused(); }
void int123(void)         { IntUnused(); }
void int124(void)         { IntUnused(); }
void int125(void)         { IntUnused(); }
void int126(void)         { IntUnused(); }
void int127(void)         { IntUnused(); }
void int128(void)         { IntUnused(); }
void int129(void)         { IntUnused(); }
void int130(void)         { IntUnused(); }
void int131(void)         { IntUnused(); }
void int132(void)         { IntUnused(); }
void int133(void)         { IntUnused(); }
void int134(void)         { IntUnused(); }
void int135(void)         { IntUnused(); }
void int136(void)         { IntUnused(); }
void int137(void)         { IntUnused(); }
void int138(void)         { IntUnused(); }
void int139(void)         { IntUnused(); }
void int140(void)         { IntUnused(); }
void int141(void)         { IntUnused(); }
void int142(void)         { IntUnused(); }
void int143(void)         { IntUnused(); }



