extern u8 D_8016D8C0[];
extern u8 D_8016D8C4[];
extern u8 D_8016D8C8[];
extern f64 D_80183840;
extern f64 D_80183848;
extern u8 D_802B2784[];
f32 __sinf(f32);
void func_8013AE60(s32);

void func_80157BBC(s32 arg0) {
    s32 i;
    u16 v;
    u16 *p;
    s32 j;
    f64 a;
    f64 b;

    func_8013AE60(arg0 & 0xFFFF);
    i = 0;
    do {
        p = (u16 *)(D_8016D8C0 + i * 2);
        v = *p + *(u16 *)(D_8016D8C8 + i * 2);
        *p = v;
        i++;
        if (*p >= 0x169) {
            *p = v - 0x168;
        }
    } while (i < 2);
    a = D_80183840;
    b = D_80183848;
    for (j = 0; j < 2; j++) {
        f64 x = ((f64)*(u16 *)(D_8016D8C0 + j * 2) * a) / b;
        *(s16 *)(D_802B2784 + (j + 2) * 16) = (s16)(s32)(__sinf((f32)x) * (f32)*(u16 *)(D_8016D8C4 + j * 2));
    }
}
