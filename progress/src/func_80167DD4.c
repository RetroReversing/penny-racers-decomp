extern u8 racerTimerFlags[];

void func_80167DD4(u32 **arg0, s32 arg1) {
    u32 *temp_a0;
    s32 idx;

    idx = (arg1 & 0xFFFF) * 0x64;
    if (racerTimerFlags[idx] != 0xFA) {
        temp_a0 = *arg0;
        *arg0 = temp_a0 + 2;
        temp_a0[0] = 0xFA000000;
        temp_a0[1] = racerTimerFlags[idx] | ~0xFF;
    }
}
