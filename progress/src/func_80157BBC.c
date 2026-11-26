f32 __sinf(f32);
s32 func_8013AE60(s32);
extern u8 D_8016D8C0[];
extern u8 D_8016D8C4[];
extern u8 D_8016D8C8[];
extern f64 D_80183840;
extern f64 D_80183848;
extern u8 D_802B2784[];

void func_80157BBC(s32 arg0)
{
    s32 i;
    f32 r;
    f64 k1;
    f64 k2;
    u16 *pa;
    u16 *pb;

    func_8013AE60(arg0 & 0xFFFF);
    for (i = 0; i < 2; i++) {
        u16 *a = (u16 *)(D_8016D8C0 + i * 2);
        u16 *b = (u16 *)(D_8016D8C8 + i * 2);
        s32 v = *a + *b;
        *a = v;
        if (*a >= 0x169) {
            *a = v - 0x168;
        }
    }
    i = 0;
    pa = (u16 *)D_8016D8C0;
    k1 = D_80183840;
    k2 = D_80183848;
    pb = (u16 *)D_8016D8C4;
    for (i = 0; i < 2; i++) {
        s32 idx = (i + 2) * 16;
        r = __sinf((f32)((((f64)pa[i]) * k1) / k2));
        *(s16 *)(D_802B2784 + idx) = (s16)((s32)(r * (f32)pb[i]));
    }
}
