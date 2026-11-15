f32 __sinf(f32);
s32 func_8013AE60(s32);
extern u8 D_8016D8C0[];
extern u8 D_8016D8C4[];
extern u8 D_8016D8C8[];
extern f64 D_80183840;
extern f64 D_80183848;
extern u8 D_802B2784[];

void func_80157BBC(s32 arg0) {
    s32 i;
    s32 off;
    f32 r;
    f64 k1;
    f64 k2;
    u8 *pa;
    u8 *pb;
    u16 v;

    func_8013AE60(arg0 & 0xFFFF);
    pa = D_8016D8C0;
    pb = D_8016D8C8;
    for (i = 0; i < 2; i++) {
        off = i * 2;
        v = *(u16 *)(pa + off) + *(u16 *)(pb + off);
        *(u16 *)(pa + off) = v;
        i++;
        if (*(u16 *)(pa + off) >= 0x169) {
            *(u16 *)(pa + off) = v - 0x168;
        }
        i--;
    }
    k1 = D_80183840;
    k2 = D_80183848;
    pa = D_8016D8C0;
    pb = D_8016D8C4;
    for (i = 0; i < 2; i++) {
        off = i * 2;
        r = __sinf((f32)(((f64)*(u16 *)(pa + off) * k1) / k2));
        *(s16 *)(D_802B2784 + ((i + 2) * 0x10)) = (s16)(s32)(r * (f32)*(u16 *)(pb + off));
    }
}
