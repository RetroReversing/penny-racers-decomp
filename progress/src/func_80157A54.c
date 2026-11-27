f32 __sinf(f32);
void liftCopyFlags(s32);
extern u16 D_8016D8A8[];
extern u16 D_8016D8B4[];
extern u8 D_8016D898[];
extern u8 D_8016D8A0[];
extern f64 D_80183830;
extern f64 D_80183838;
extern u8 D_802B27C4[];

void func_80157A54(s32 arg0)
{
    s32 i;
    u16 old;
    f64 k1;
    f64 k2;
    u16 *pa;

    liftCopyFlags(arg0 & 0xFFFF);
    for (i = 0; i < 5; i++) {
        old = D_8016D8A8[i];
        D_8016D8A8[i] = old + 0xC;
        if (D_8016D8A8[i] >= 0x169) {
            D_8016D8A8[i] = old - 0x15C;
        }
    }
    i = 0;
    pa = D_8016D8A8;
    k1 = D_80183830;
    k2 = D_80183838;
    for (i = 0; i < 5; i++) {
        s32 dst;
        f32 r;

        dst = D_8016D898[i] << 4;
        r = __sinf((f32)((((f64)pa[i]) * k1) / k2));
        *(s16 *)(D_802B27C4 + dst) = (s16)((s32)(r * (f32)D_8016D8B4[i]));
        *(s16 *)(D_802B27C4 + (D_8016D8A0[i] << 4)) = *(s16 *)(D_802B27C4 + (D_8016D898[i] << 4));
    }
}
