/* identical to osEepromProbe in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 func_8003F464();
s32 func_8003F4D0();
s32 __osEepStatus();

s32 osEepromProbe(s32 arg0) {
    u16 sp10;
    s32 s0;
    s32 r;
    u16 v;

    s0 = arg0;
    func_8003F464(s0);
    r = __osEepStatus(s0, &sp10);
    v = sp10 & 0xC000;
    if (r == 0) {
        switch (v) {
        case 0x8000:
            s0 = 1;
            break;
        case 0xC000:
            s0 = 2;
            break;
        default:
            s0 = 0;
            break;
        }
    } else {
        s0 = 0;
    }
    func_8003F4D0();
    return s0;
}
