/* identical to osPfsIsPlug in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
typedef struct { u16 type; u8 status; u8 errno; } CS;
extern u8 D_800B60E0;
extern char D_800D555E[];
s32 func_8004105C(s32);
void func_80041100();
void func_8003F464();
void func_8003F4D0();
s32 func_8003F350();
s32 func_80033E30(s32, s32 *, s32);

s32 func_80040EE0(s32 queue, u8 *pattern) {
    s32 ret;
    s32 dummy;
    s32 channel;
    s32 cntrlrs = 0;
    u8 bitpattern;
    CS data[4];
    s32 crap = 3;
    u8 *pif;
    func_8003F464();
    pif = (u8*)(D_800D555E + 0x7E82);
    do {
        func_8004105C(0);
        func_8003F350(1, pif);
        func_80033E30(queue, &dummy, 1);
        ret = func_8003F350(0, pif);
        func_80033E30(queue, &dummy, 1);
        func_80041100(&bitpattern, data);
        for (channel = 0; channel < D_800B60E0; channel++) {
            if (!(data[channel].status & 4)) { crap--; break; }
        }
        if (channel != D_800B60E0) continue;
        crap = 0;
    } while (crap > 0);
    for (channel = 0; channel < D_800B60E0; channel++) {
        if (data[channel].errno == 0 && (data[channel].status & 1)) cntrlrs |= 1 << channel;
    }
    func_8003F4D0();
    *pattern = cntrlrs;
    return ret;
}
