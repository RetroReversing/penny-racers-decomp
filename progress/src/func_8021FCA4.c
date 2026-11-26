extern u8 D_80220FB0[];
extern u8 D_80220FB4[];
extern u8 D_80220FB8[];
extern u8 D_80220FBC[];
extern u8 D_80220FC0[];
extern u8 D_80220FC4[];
extern u8 D_80220FC8[];
extern u8 D_80220FCC[];
extern u8 D_800DB1B8[];
extern f32 D_80220E40;

void func_8021FCA4(void)
{
    s32 i;
    s32 a0;
    s32 a1;
    s32 v1;
    s32 p0;
    s32 p1;
    s32 p2;
    s32 p3;
    s32 p4;
    s32 p5;
    s32 p6;
    s32 p7;

    D_80220E40 = 65.0f;
    i = 0;
    p0 = (s32)D_80220FB0;
    p1 = (s32)D_80220FB4;
    p2 = (s32)D_80220FB8;
    p3 = (s32)D_80220FBC;
    p4 = (s32)D_80220FC0;
    p5 = (s32)D_80220FC4;
    p6 = (s32)D_80220FC8;
    p7 = (s32)D_80220FCC;
    for (; i < 4; i++) {
        a0 = i * 40;
        *(u16 *)(D_800DB1B8 + 0x2108 + a0) = 0;
        a1 = i * 2;
        v1 = a1 + i;
        *(u16 *)(D_800DB1B8 + 0x210A + a0) = v1;
        *(u16 *)(D_800DB1B8 + 0x210C + a0) = v1 + 1;
        *(u16 *)(D_800DB1B8 + 0x210E + a0) = v1 + 2;
        *(u16 *)(D_800DB1B8 + 0x2110 + a0) = *(u16 *)(a1 + p0);
        *(u16 *)(D_800DB1B8 + 0x2112 + a0) = *(u16 *)(a1 + p1);
        *(u16 *)(D_800DB1B8 + 0x2114 + a0) = *(u16 *)(a1 + p2);
        *(u16 *)(D_800DB1B8 + 0x2116 + a0) = *(u16 *)(a1 + p3);
        *(u16 *)(D_800DB1B8 + 0x2128 + a0) = *(u16 *)(a1 + p4);
        *(u16 *)(D_800DB1B8 + 0x212A + a0) = *(u16 *)(a1 + p5);
        *(u16 *)(D_800DB1B8 + 0x212C + a0) = *(u16 *)(a1 + p6);
        *(u16 *)(D_800DB1B8 + 0x212E + a0) = *(u16 *)(a1 + p7);
    }
    *(u16 *)(D_800DB1B8 + 0x2108) = 1;
}
