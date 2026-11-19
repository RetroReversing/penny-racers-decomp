#include "common.h"

void func_80028B50(void);
s32 func_800339C0(s32);
extern s32 D_80046D80;

void nuGfxFuncSet(s32 arg0) {
    s32 temp_v0;

    func_80028B50();
    temp_v0 = func_800339C0(1);
    D_80046D80 = arg0;
    func_800339C0(temp_v0);
}
