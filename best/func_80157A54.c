extern u8 D_8016D898[];
extern u8 D_8016D8A0[];
extern u8 D_8016D8A8[];
extern u8 D_8016D8B4[];
extern f64 D_80183830;
extern f64 D_80183838;
extern u8 D_802B27C4[];
f32 __sinf(f32);
void func_8013AE60(s32);

void func_80157A54(s32 arg0) {
    s32 i;
    u16 v;
    u16 *p;
    f64 a;
    f64 b;

    func_8013AE60(arg0 & 0xFFFF);
    i = 0;
    do {
        p = (u16 *)(D_8016D8A8 + i * 2);
        v = *p;
        *p = v + 0xC;
        i++;
        if (*p >= 0x169) {
            *p = v - 0x15C;
        }
    } while (i < 5);
    a = D_80183830;
    b = D_80183838;
    for (i = 0; i < 5; i++) {
        *(s16 *)(D_802B27C4 + D_8016D898[i] * 16) =
            (s16)(s32)(__sinf((f32)((((f64)*(u16 *)(D_8016D8A8 + i * 2)) * a) / b)) *
                       (f32)*(u16 *)(D_8016D8B4 + i * 2));
        *(s16 *)(D_802B27C4 + D_8016D8A0[i] * 16) = *(s16 *)(D_802B27C4 + D_8016D898[i] * 16);
    }
}
