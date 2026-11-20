extern u32 func_8014A79C(u16);
extern u32 func_8014A080(u32, s32, s32, s32);
extern void func_801CABF4(u32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_80203080[];
extern s32 D_802D92A0[];
extern s32 D_802D6898[];
extern s32 D_801D4390[];
extern s32 D_801CF4C8[];

void func_8014A2D0(u32 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5) {
  u16 __repair_call_argument;
    u32 local;
    unsigned s1;
u32 __repair_result_s1;
    u32 mask;
    s32 s0;
s32 __repair_phase_s0;
    s32 n;
    

    local = *arg0;
    __repair_phase_s0 = (u16)((u16)arg3);
    do {
      __repair_result_s1 = func_8014A79C(__repair_phase_s0);
    } while (0);
    mask = 0xF0000000;
    for (s0 = 0; s0 < 7; s0++) {
        if (__repair_result_s1 & mask) {
            break;
        }
        __repair_result_s1 |= (unsigned short)mask;
        mask >>= 4;
    }
    n = arg4;
    __repair_phase_s0 = 0;
    if (n > 0) {
        do {
            s1 = func_8014A080(s1, (n * 4 - 1), 4, 1);
            s0 = s1 & 0xF;
            if (s0 < 10) {
                if (arg5 == 0) {
                    func_801CABF4(&local, (u16)(arg1 + __repair_phase_s0 * 13), (u16)arg2, 0xF,
                                  (s32)D_802D92A0, D_80203080[(unsigned short)s0], 0, (s32)D_802D6898,
                                  0xE, 0x10, 0xE0, 0x60);
                } else {
                    func_801CABF4(&local, (u16)(arg1 + __repair_phase_s0 * 10), (u16)arg2, 0xA,
                                  D_801D4390, D_80203080[(unsigned short)s0], 0, (s32)D_801CF4C8,
                                  0xA, 0xE, 0xA0, 0xFC);
                }
            }
            __repair_phase_s0 += 1;
        } while (__repair_phase_s0 < n);
    }
    *arg0 = local;
}
