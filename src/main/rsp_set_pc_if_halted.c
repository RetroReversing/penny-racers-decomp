#include "common.h"

extern s32 D_A4080000;

s32 rsp_set_pc_if_halted(s32 arg0) {
    if (!(*(volatile u32 *)0xA4040010 & 1)) {
        return -1;
    }
    *(volatile s32 *)0xA4080000 = arg0;
    return 0;
}
