#include "WrapperDef.h"

extern void CortexM23StkInt();
DLL_EXPORT void WrapperSysTickInt() { CortexM23StkInt(); }