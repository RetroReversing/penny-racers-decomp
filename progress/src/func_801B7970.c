typedef struct { u8 unk0; u8 unk1; u8 count; } H;
typedef struct { u8 a; u8 b; s8 c; s8 d; s8 e; } E;
extern u8 D_801C6BAC;
void func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_801680B8[];
extern u8 D_803157A0[];
extern u8 D_803157D4[];
extern u8 D_80315808[];
extern u8 D_8031583C[];
extern u8 D_80315870[];
extern u8 D_803158A4[];
extern u8 D_803158D8[];
extern u8 D_8031590C[];
extern u8 D_80315940[];
extern u8 D_80315974[];
extern u8 D_803159A8[];
extern u8 D_803159DC[];
extern u8 D_80315A10[];
extern u8 D_80315A44[];
void func_8013AE60(void);
void func_801C10FC(void);
void func_801C1424(void);
void func_801C1680(void);
void func_801C19A8(void);
void func_801C1C04(void);

void func_801B7970(H *arg0, E *arg1)
{
    u8 i;
    f32 x, y, z;
    u8 *post;

    D_801C6BAC = 0;
    for (i = 0; i < arg0->count; i++) {
        post = D_80315A44;
        x = arg1[i].c * 400.0f + 400.0f;
        y = arg1[i].b;
        z = arg1[i].d * 400.0f + 400.0f;
        if (arg1[i].e == 0 || arg1[i].e == 0x2E) {
            if (i == arg0->count - 1) {
                if (arg0->unk1 == 0x5) {
                    if (arg1->a == 0x1) {
                        func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + -196.0f, y + 0.0f, z + 116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + -196.0f, y + 0.0f, z + -116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, post, func_8013AE60, 0, x + -196.0f, y + 2.0f, z + 0.0f, 0.0f, 90.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, func_801C1424, func_801C10FC, x + -196.0f, y + 108.0f, z + 112.0f, 0.0f, 90.0f, 0.0f, 1.12f, 1.12f, 1.12f);
                    } else if (arg1->a == 0x3) {
                        func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + 196.0f, y + 0.0f, z + 116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + 196.0f, y + 0.0f, z + -116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, post, func_8013AE60, 0, x + 196.0f, y + 2.0f, z + 0.0f, 0.0f, 90.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, func_801C1424, func_801C10FC, x + 196.0f, y + 108.0f, z + -112.0f, 0.0f, -90.0f, 0.0f, 1.12f, 1.12f, 1.12f);
                    }
                }
            }
        } else if (arg1[i].e == 0x2 || arg1[i].e == 0x30) {
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803158A4, func_8013AE60, func_801C1C04, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x3) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, func_8013AE60, 0, x + 50.0f, y + 1.0f, z + -74.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, func_8013AE60, 0, x + -50.0f, y + 1.0f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, func_8013AE60, 0, x + 150.0f, y + 1.0f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, func_8013AE60, 0, x + -150.0f, y + 1.0f, z + 26.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x4 || arg1[i].e == 0x32) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, func_8013AE60, 0, x + 50.0f, y + 1.0f, z + 20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, func_8013AE60, 0, x + -50.0f, y + 1.0f, z + 73.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, func_8013AE60, 0, x + 150.0f, y + 1.0f, z + 45.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, func_8013AE60, 0, x + -150.0f, y + 1.0f, z + 20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x5 || arg1[i].e == 0x33) {
            if (i == arg0->count - 1) {
                if (arg0->unk1 == 0x5) {
                    if (arg1->a == 0) {
                        func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + 116.0f, y + 0.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + -116.0f, y + 0.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, post, func_8013AE60, 0, x + 0.0f, y + 2.0f, z + -196.0f, 0.0f, 180.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, func_801C1424, func_801C10FC, x + -112.0f, y + 108.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.12f, 1.12f, 1.12f);
                    } else if (arg1->a == 0x2) {
                        func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + 116.0f, y + 0.0f, z + 196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + -116.0f, y + 0.0f, z + 196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, post, func_8013AE60, 0, x + 0.0f, y + 2.0f, z + 196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        func_800DE41C(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, func_801C1424, func_801C10FC, x + 112.0f, y + 108.0f, z + 196.0f, 0.0f, 180.0f, 0.0f, 1.12f, 1.12f, 1.12f);
                    }
                }
            }
        } else if (arg1[i].e == 0x7 || arg1[i].e == 0x35) {
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803158D8, func_8013AE60, func_801C1C04, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x8 || arg1[i].e == 0x36) {
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, func_8013AE60, 0, x + -10.0f, y + 0.0f, z + 50.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, func_8013AE60, 0, x + -45.0f, y + 0.0f, z + -150.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, func_8013AE60, 0, x + -70.0f, y + 0.0f, z + -50.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, func_8013AE60, 0, x + -70.0f, y + 0.0f, z + 150.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x9 || arg1[i].e == 0x37) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, func_8013AE60, 0, x + 20.0f, y + 1.0f, z + -50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, func_8013AE60, 0, x + 20.0f, y + 1.0f, z + 150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, func_8013AE60, 0, x + 47.0f, y + 1.0f, z + 50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, func_8013AE60, 0, x + 74.0f, y + 1.0f, z + -150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0xB || arg1[i].e == 0x39) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157A0, func_8013AE60, 0, x + -28.0f, y + 1.0f, z + 28.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0xE || arg1[i].e == 0x3C) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157A0, func_8013AE60, 0, x + 28.0f, y + 1.0f, z + 28.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x11 || arg1[i].e == 0x3F) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157A0, func_8013AE60, 0, x + -28.0f, y + 1.0f, z + -28.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x14 || arg1[i].e == 0x42) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157A0, func_8013AE60, 0, x + 28.0f, y + 1.0f, z + -28.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x18 || arg1[i].e == 0x46) {
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159A8, func_8013AE60, func_801C1C04, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x19) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, func_8013AE60, 0, x + 50.0f, y + 22.5f, z + 10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, func_8013AE60, 0, x + -50.0f, y + 37.5f, z + 76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, func_8013AE60, 0, x + 150.0f, y + 7.5f, z + 48.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, func_8013AE60, 0, x + -150.0f, y + 52.5f, z + 10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x1A || arg1[i].e == 0x48) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, func_8013AE60, 0, x + 50.0f, y + 22.5f, z + 20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, func_8013AE60, 0, x + -50.0f, y + 37.5f, z + 47.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, func_8013AE60, 0, x + 150.0f, y + 7.5f, z + 74.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, func_8013AE60, 0, x + -150.0f, y + 52.5f, z + 20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x1D || arg1[i].e == 0x4B) {
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_80315940, func_8013AE60, func_801C1C04, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x1E) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, func_8013AE60, 0, x + 50.0f, y + 37.5f, z + -76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, func_8013AE60, 0, x + -50.0f, y + 22.5f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, func_8013AE60, 0, x + 150.0f, y + 52.5f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, func_8013AE60, 0, x + -150.0f, y + 7.5f, z + -48.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x1F || arg1[i].e == 0x4D) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, func_8013AE60, 0, x + 50.0f, y + 37.5f, z + -76.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, func_8013AE60, 0, x + -50.0f, y + 22.5f, z + -20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, func_8013AE60, 0, x + 150.0f, y + 52.5f, z + 14.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, func_8013AE60, 0, x + -150.0f, y + 7.5f, z + 24.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x22 || arg1[i].e == 0x50) {
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_80315974, func_8013AE60, func_801C1C04, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x23 || arg1[i].e == 0x51) {
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, func_8013AE60, 0, x + 24.0f, y + 7.5f, z + 150.0f, 8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, func_8013AE60, 0, x + 24.0f, y + 52.5f, z + -150.0f, 8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, func_8013AE60, 0, x + -10.0f, y + 22.5f, z + 50.0f, 8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, func_8013AE60, 0, x + -71.0f, y + 37.5f, z + -50.0f, 8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x24 || arg1[i].e == 0x52) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, func_8013AE60, 0, x + -20.0f, y + 22.5f, z + 50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, func_8013AE60, 0, x + -20.0f, y + 52.5f, z + -150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, func_8013AE60, 0, x + -48.5f, y + 7.5f, z + 150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, func_8013AE60, 0, x + -76.5f, y + 37.5f, z + -50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x27 || arg1[i].e == 0x55) {
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_8031590C, func_8013AE60, func_801C1C04, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x28 || arg1[i].e == 0x56) {
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, func_8013AE60, 0, x + 10.0f, y + 22.5f, z + -50.0f, -8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, func_8013AE60, 0, x + 10.0f, y + 52.5f, z + 150.0f, -8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, func_8013AE60, 0, x + 47.0f, y + 37.5f, z + 50.0f, -8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, func_8013AE60, 0, x + 69.0f, y + 7.5f, z + -150.0f, -8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x29 || arg1[i].e == 0x57) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, func_8013AE60, 0, x + 20.0f, y + 22.5f, z + -50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, func_8013AE60, 0, x + 20.0f, y + 52.5f, z + 150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, func_8013AE60, 0, x + 48.0f, y + 7.5f, z + -150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, func_8013AE60, 0, x + 76.0f, y + 37.5f, z + 50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x2A || arg1[i].e == 0x58) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + 116.0f, y + 0.0f, z + 196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + -116.0f, y + 0.0f, z + 196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, post, func_8013AE60, 0, x + 0.0f, y + 2.0f, z + 196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            if (i == 0) {
                func_800DE41C(0, 0, 0x2, 0, 0x51, 0xFF, D_801680B8, func_801C1424, func_801C10FC, x + 112.0f, y + 108.0f, z + 196.0f, 0.0f, 180.0f, 0.0f, 1.12f, 1.12f, 1.12f);
            } else {
                func_800DE41C(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, func_801C19A8, func_801C1680, x + -112.0f, y + 108.0f, z + 196.0f, 0, 0, 0, 1.12f, 1.12f, 1.12f);
            }
        } else if (arg1[i].e == 0x2B || arg1[i].e == 0x59) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + 116.0f, y + 0.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + -116.0f, y + 0.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, post, func_8013AE60, 0, x + 0.0f, y + 2.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            if (i == 0) {
                func_800DE41C(0, 0, 0x2, 0, 0x51, 0xFF, D_801680B8, func_801C1424, func_801C10FC, x + -112.0f, y + 108.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.12f, 1.12f, 1.12f);
            } else {
                func_800DE41C(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, func_801C19A8, func_801C1680, x + 112.0f, y + 108.0f, z + -196.0f, 0, 180.0f, 0, 1.12f, 1.12f, 1.12f);
            }
        } else if (arg1[i].e == 0x2C || arg1[i].e == 0x5A) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + 196.0f, y + 0.0f, z + 116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + 196.0f, y + 0.0f, z + -116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, post, func_8013AE60, 0, x + 196.0f, y + 2.0f, z + 0.0f, 0.0f, 90.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            if (i == 0) {
                func_800DE41C(0, 0, 0x2, 0, 0x51, 0xFF, D_801680B8, func_801C1424, func_801C10FC, x + 196.0f, y + 108.0f, z + -112.0f, 0.0f, 270.0f, 0.0f, 1.12f, 1.12f, 1.12f);
            } else {
                func_800DE41C(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, func_801C19A8, func_801C1680, x + 196.0f, y + 108.0f, z + 112.0f, 0, 90.0f, 0, 1.12f, 1.12f, 1.12f);
            }
        } else if (arg1[i].e == 0x2D || arg1[i].e == 0x5B) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + -196.0f, y + 0.0f, z + 116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, func_8013AE60, 0, x + -196.0f, y + 0.0f, z + -116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0, 0x52, 0xFF, post, func_8013AE60, 0, x + -196.0f, y + 2.0f, z + 0.0f, 0.0f, 90.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            if (i == 0) {
                func_800DE41C(0, 0, 0x2, 0, 0x51, 0xFF, D_801680B8, func_801C1424, func_801C10FC, x + -196.0f, y + 108.0f, z + 112.0f, 0.0f, 90.0f, 0.0f, 1.12f, 1.12f, 1.12f);
            } else {
                func_800DE41C(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, func_801C19A8, func_801C1680, x + -196.0f, y + 108.0f, z + -112.0f, 0, 270.0f, 0, 1.12f, 1.12f, 1.12f);
            }
        } else if (arg1[i].e == 0x31) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, func_8013AE60, 0, x + 50.0f, y + 1.0f, z + -74.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, func_8013AE60, 0, x + -50.0f, y + 1.0f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, func_8013AE60, 0, x + 150.0f, y + 1.0f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, func_8013AE60, 0, x + -150.0f, y + 1.0f, z + 26.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x47) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, func_8013AE60, 0, x + 50.0f, y + 22.5f, z + 10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, func_8013AE60, 0, x + -50.0f, y + 37.5f, z + 76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, func_8013AE60, 0, x + 150.0f, y + 7.5f, z + 48.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, func_8013AE60, 0, x + -150.0f, y + 52.5f, z + 10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x4C) {
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, func_8013AE60, 0, x + 50.0f, y + 37.5f, z + -76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, func_8013AE60, 0, x + -50.0f, y + 22.5f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, func_8013AE60, 0, x + 150.0f, y + 52.5f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            func_800DE41C(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, func_8013AE60, 0, x + -150.0f, y + 7.5f, z + -48.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        }
    }
}
