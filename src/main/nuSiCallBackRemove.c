#include "common.h"

s32 func_800339C0(s32);
extern void *D_80092BF8;

void nuSiCallBackRemove(void *arg0) {
    void *var_a0;
    void **var_s1;
    void **tmp;
    s32 temp_a0;

    tmp = &D_80092BF8;
    var_a0 = *tmp;
    var_s1 = tmp;
    while (var_a0 != NULL) {
        if (((s32 *)var_a0)[1] == ((s32 *)arg0)[1]) {
            temp_a0 = func_800339C0(1);
            *var_s1 = ((void **)arg0)[0];
            ((void **)arg0)[0] = NULL;
            ((s32 *)arg0)[1] = 0;
            func_800339C0(temp_a0);
            return;
        }
        var_s1 = (void **)var_a0;
        var_a0 = ((void **)var_a0)[0];
    }
}
