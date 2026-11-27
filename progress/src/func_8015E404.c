extern u8 racerTimerFlags[];

void func_8015E404(s32 **arg0, s32 arg1) {
    s32 *p;
    s32 *q;
    s32 idx;

    idx = (arg1 & 0xFFFF) * 0x64;
    if (*(racerTimerFlags + idx) != 0xFF) {
        p = *arg0;
        *arg0 = p + 2;
        p[0] = 0xB6000000;
        p[1] = 0x3000;
        q = *arg0;
        *arg0 = q + 2;
        q[0] = 0xFA000000;
        q[1] = *(racerTimerFlags + idx) | ~0xFF;
    }
}
