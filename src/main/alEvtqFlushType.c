#include "common_local_source_339302416681.h"

s32 func_800339C0(s32);
void func_800382AC(void *, void *);
void func_800382CC(void *);

void alEvtqFlushType(void *arg0, s16 arg1) {
    s32 temp_s4;
    void *temp_s1;
    void *var_s0;

    temp_s4 = func_800339C0(1);
    var_s0 = *(void **)((s8 *)arg0 + 8);
    while (var_s0 != NULL) {
        temp_s1 = *(void **)var_s0;
        if (*(s16 *)((s8 *)var_s0 + 0xC) == arg1) {
            if (temp_s1 != NULL) {
                *(s32 *)((s8 *)temp_s1 + 8) += *(s32 *)((s8 *)var_s0 + 8);
            }
            func_800382CC(var_s0);
            func_800382AC(var_s0, arg0);
        }
        var_s0 = temp_s1;
    }
    func_800339C0(temp_s4);
}
