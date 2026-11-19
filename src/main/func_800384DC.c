#include "common.h"

/* identical to func_8002D42C (matched), with its names changed by decompdecomp */
s32 func_80038E1C(void *, u32);
void func_80038650(void *, u32, void *);

void func_800384DC(u8 *arg0, u8 *arg1) {
    s32 temp_a2;
    u32 temp_v1;
    u32 var_a1;
    u32 var_s1;
    u32 var_s2;

    var_s1 = -1U;
    temp_a2 = *(s32 *)(arg0 + 0x10);
    var_a1 = 0;
    do {
        if ((*(u32 *)(arg0 + 4) >> var_a1) & 1) {
            if (*(s32 *)(arg0 + 0x14) != 0) {
                ((s32 *)arg0)[var_a1 + 0x2E] = ((s32 *)arg0)[var_a1 + 0x2E] - temp_a2;
            }
            temp_v1 = ((u32 *)arg0)[var_a1 + 0x2E];
            if (temp_v1 < var_s1) {
                var_s1 = temp_v1;
                var_s2 = var_a1;
            }
        }
        var_a1 += 1;
    } while (var_a1 < 0x10U);
    func_80038650(arg0, var_s2, arg1);
    *(u32 *)(arg1 + 4) = var_s1;
    *(u32 *)(arg0 + 0x10) = var_s1;
    *(s32 *)(arg0 + 0xC) = *(s32 *)(arg0 + 0xC) + var_s1;
    if (*(s16 *)arg1 != 0x12) {
        *(s32 *)(arg0 + 0xB8 + var_s2 * 4) += func_80038E1C(arg0, var_s2);
    }
    *(s32 *)(arg0 + 0x14) = 1;
}
