extern u32 func_8014A79C(s32);
extern s32 func_8014A080(s32, s32, s32, s32);
extern void func_801CABF4(u32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_80203080[];
extern s32 D_802D92A0[];
extern s32 D_802D6898[];
extern s32 D_801D4390[];
extern s32 D_801CF4C8[];

void func_8014A2D0(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5)
{
    u32 local = *arg0;
    u32 s1;
    s32 i;
    u32 v;

    s1 = func_8014A79C((u16)arg3);
    {
        u32 mask = 0xF0000000;
        for (i = 0; i < 7; i++) {
            if (s1 & mask) {
                break;
            }
            s1 |= mask;
            mask >>= 4;
        }
    }

    for (i = 0; i < (arg4 & 0xFF); i++) {
        s1 = func_8014A080(s1, (((arg4 & 0xFF) * 4) - 1) & 0xFF, 4, 1);
        v = s1 & 0xF;
        if (v < 10) {
            if (arg5 == 0) {
                func_801CABF4(&local, (u16)(arg1 + i * 13), (u16)arg2, 0xF,
                              (s32)D_802D92A0, D_80203080[v], 0, (s32)D_802D6898,
                              0xE, 0x10, 0xE0, 0x60);
            } else {
                func_801CABF4(&local, (u16)(arg1 + i * 10), (u16)arg2, 0xA,
                              (s32)D_801D4390, D_80203080[s1 & 0xF], 0, (s32)D_801CF4C8,
                              0xA, 0xE, 0xA0, 0xFC);
            }
        }
    }

    *arg0 = local;
}
