#include "common_local_source_339302416603.h"

extern s32 D_80046D74;
extern void func_800299BC(void);
extern void nuSiCallBackAdd(s32 *arg0, void (*arg1)(void));

void func_80029790(void)
{
    s32 *temp_a0;

    temp_a0 = &D_80046D74;
    if (*temp_a0 == 0) {
        nuSiCallBackAdd(temp_a0 - 1, func_800299BC);
    }
}
