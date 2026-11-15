void *__lookupVoice(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *v;

    v = *(u8 **)(arg0 + 0x64);
    if (v == 0) {
        return 0;
    }
    arg1 &= 0xFF;
    arg2 &= 0xFF;
    while (1) {
        if (v[0x32] == arg1 && v[0x31] == arg2) {
            if (!((u32)(v[0x35] - 3) < 2)) {
                return v;
            }
        }
        v = *(u8 **)v;
        if (v == 0) {
            return 0;
        }
    }
}
