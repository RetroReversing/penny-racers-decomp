extern u32 func_8014A79C(u16);
extern u32 func_8014A080(u32, u8, int, int);
extern void func_801CABF4(u32 *, u16, u16, int, u32, u32, u32, u32, u32, u32, u32, u32);
extern u32 D_80203080[];
extern u8 D_802D92A0[];
extern u8 D_802D6898[];
extern u8 D_801D4390[];
extern u8 D_801CF4C8[];

void func_8014A2D0(u32 *arg0, int arg1, int arg2, u16 arg3, int arg4, int arg5) {
    u32 buf = *arg0;
    u32 s1 = func_8014A79C(arg3);
    u32 mask = 0xF0000000;
    int i;
    int s0;
    int n;

    for (i = 0; i < 7; i++) {
        if (s1 & mask) {
            break;
        }
        s1 |= mask;
        mask >>= 4;
    }

    n = (u8)arg4;
    s0 = 0;
    if (n > 0) {
        do {
            s1 = func_8014A080(s1, (u8)(n * 4 - 1), 4, 1);
            if ((s1 & 0xF) < 10) {
                if ((u8)arg5 == 0) {
                    func_801CABF4(&buf, (u16)(arg1 + 13 * s0), (u16)arg2, 15,
                                  (u32)D_802D92A0, D_80203080[s1 & 0xF], 0,
                                  (u32)D_802D6898, 14, 16, 0xE0, 0x60);
                } else {
                    func_801CABF4(&buf, (u16)(arg1 + 10 * s0), (u16)arg2, 10,
                                  (u32)D_801D4390, D_80203080[s1 & 0xF], 0,
                                  (u32)D_801CF4C8, 10, 14, 0xA0, 0xFC);
                }
            }
            s0++;
        } while (s0 < n);
    }

    *arg0 = buf;
}
