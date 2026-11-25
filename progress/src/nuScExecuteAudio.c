s32 func_80033A60();
s32 osRecvMesg();
s32 osSendMesg();
s32 osSpTaskLoad();
s32 func_80039A2C();
s32 func_80039A60();
s32 func_80039A80();
extern char D_800DD824[];
extern u8 *D_800DDE8C;

void nuScExecuteAudio(void) {
    u8 *sp10;
    void *sp14;
    u8 *temp_s1;
    s32 var_s0;

    while (1) {
        osRecvMesg(D_800DD824, &sp10, 1);
        var_s0 = 0;
        func_80033A60();
        temp_s1 = D_800DDE8C;
        if (temp_s1 != 0) {
            var_s0 = 2;
            func_80039A60();
            osRecvMesg(D_800DD824 + 0xA8, &sp14, 1);
            if (func_80039A80(temp_s1 + 0x10) != 0) {
                var_s0 = 1;
            }
        }
        *(void **)(D_800DD824 + 0x66C) = sp10;
        osSpTaskLoad(sp10 + 0x10);
        func_80039A2C(sp10 + 0x10);
        osRecvMesg(D_800DD824 + 0xA8, &sp14, 1);
        *(void **)(D_800DD824 + 0x66C) = 0;
        if (*(s32 *)(D_800DD824 + 0x670) != 0) {
            osSendMesg(D_800DD824 + 0x118, &sp14, 1);
        }
        if (var_s0 == 1) {
            osSpTaskLoad(temp_s1 + 0x10);
            func_80039A2C(temp_s1 + 0x10);
        } else if (var_s0 == 2) {
            osSendMesg(D_800DD824 + 0xA8, &sp14, 1);
        }
        osSendMesg(*(void **)(sp10 + 0x50), *(void **)(sp10 + 0x54), 1);
    }
}
