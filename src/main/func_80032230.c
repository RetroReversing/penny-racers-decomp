#include "common.h"

/* identical to func_800381F8 (matched), with its names changed by decompdecomp */
int func_80032230(void *arg0) {
    u8 *temp_v0;
    u8 *temp_v1_2;
    u8 temp_v1;
    int var_a0;

    temp_v0 = *(u8 **)((s8 *)arg0 + 8);
    *(u8 **)((s8 *)arg0 + 8) = temp_v0 + 1;
    var_a0 = *temp_v0;
    if (var_a0 & 0x80) {
        var_a0 &= 0x7F;
        do {
            temp_v1_2 = *(u8 **)((s8 *)arg0 + 8);
            *(u8 **)((s8 *)arg0 + 8) = temp_v1_2 + 1;
            temp_v1 = *temp_v1_2;
            var_a0 = (var_a0 << 7) + (temp_v1 & 0x7F);
        } while (temp_v1 & 0x80);
    }
    return var_a0;
}
