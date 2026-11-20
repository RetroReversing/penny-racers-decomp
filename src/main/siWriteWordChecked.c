#include "common.h"

void func_800346B0(char *, char *, s32);
s32 func_8003F330(void);

s32 siWriteWordChecked(s32 arg0, s32 arg1) {
    if (arg0 & 3) {
        func_800346B0("EX", "sirawwrite.c", 0x34);
    }
    if (func_8003F330() != 0) {
        return -1;
    }
    *(vs32 *)(arg0 | 0xA0000000) = arg1;
    return 0;
}
