#include "common.h"

s32 func_800339C0(s32);
extern s32 D_800DDE88;

void nuScRemoveClient(s32 *arg0) {
    u32 *var_s0;
    s32 *var_s1;
    s32 *var_v1;
    s32 temp_a0;
    s32 *client=arg0;
#define arg0 client

    var_v1 = &D_800DDE88;
    var_s0 = *(s32 **)var_v1;
    var_s1 = NULL;
    do { temp_a0 = func_800339C0(1); } while (0);
    if (var_s0 != NULL) do {
        if (var_s0 == arg0) {
            if (var_s1 != NULL) {
                *var_s1 = *var_s0;
            } else {
                *(s32 **)&D_800DDE88 = (s32 *)*var_s0;
            }
            break;
        }
        var_s1 = var_s0;
        var_s0 = (s32 *)*var_s0;
    } while (var_s0 != NULL);
    func_800339C0(temp_a0);
}
