#include "common.h"

s32 func_80205518(u16 *arg0) {
    volatile u16 tmp;
    s32 var_a1;

    var_a1 = 0;
    if ((u16) *arg0 <= 0xFFFEU) {
        do {
            var_a1 += 1;
        } while ((u16) arg0[var_a1 & 0xFF] <= 0xFFFEU);
    }
    return (s32) (0x140 - (((var_a1 & 0xFF) + 1) * 0xC)) >> 1;
}
