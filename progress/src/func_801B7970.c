typedef struct { u8 unk0; u8 unk1; u8 count; } H;
typedef struct { u8 a; u8 b; s8 c; s8 d; s8 e; } E;
extern u8 D_801C6BAC;
void objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
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
void liftCopyFlags(void);
void drawWaveObject(void);
void animateWaveVertices(void);
void drawWaveObjectB(void);
void updateWaveVertices(void);
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
                        objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + -196.0f, y + 0.0f, z + 116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + -196.0f, y + 0.0f, z + -116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        objCreate(0, i, 0x1, 0, 0x52, 0xFF, post, liftCopyFlags, 0, x + -196.0f, y + 2.0f, z + 0.0f, 0.0f, 90.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        objCreate(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, animateWaveVertices, drawWaveObject, x + -196.0f, y + 108.0f, z + 112.0f, 0.0f, 90.0f, 0.0f, 1.12f, 1.12f, 1.12f);
                    } else if (arg1->a == 0x3) {
                        objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + 196.0f, y + 0.0f, z + 116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + 196.0f, y + 0.0f, z + -116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        objCreate(0, i, 0x1, 0, 0x52, 0xFF, post, liftCopyFlags, 0, x + 196.0f, y + 2.0f, z + 0.0f, 0.0f, 90.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        objCreate(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, animateWaveVertices, drawWaveObject, x + 196.0f, y + 108.0f, z + -112.0f, 0.0f, -90.0f, 0.0f, 1.12f, 1.12f, 1.12f);
                    }
                }
            }
        } else if (arg1[i].e == 0x2 || arg1[i].e == 0x30) {
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803158A4, liftCopyFlags, func_801C1C04, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x3) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, liftCopyFlags, 0, x + 50.0f, y + 1.0f, z + -74.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, liftCopyFlags, 0, x + -50.0f, y + 1.0f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, liftCopyFlags, 0, x + 150.0f, y + 1.0f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, liftCopyFlags, 0, x + -150.0f, y + 1.0f, z + 26.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x4 || arg1[i].e == 0x32) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, liftCopyFlags, 0, x + 50.0f, y + 1.0f, z + 20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, liftCopyFlags, 0, x + -50.0f, y + 1.0f, z + 73.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, liftCopyFlags, 0, x + 150.0f, y + 1.0f, z + 45.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, liftCopyFlags, 0, x + -150.0f, y + 1.0f, z + 20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x5 || arg1[i].e == 0x33) {
            if (i == arg0->count - 1) {
                if (arg0->unk1 == 0x5) {
                    if (arg1->a == 0) {
                        objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + 116.0f, y + 0.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + -116.0f, y + 0.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        objCreate(0, i, 0x1, 0, 0x52, 0xFF, post, liftCopyFlags, 0, x + 0.0f, y + 2.0f, z + -196.0f, 0.0f, 180.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        objCreate(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, animateWaveVertices, drawWaveObject, x + -112.0f, y + 108.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.12f, 1.12f, 1.12f);
                    } else if (arg1->a == 0x2) {
                        objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + 116.0f, y + 0.0f, z + 196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + -116.0f, y + 0.0f, z + 196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        objCreate(0, i, 0x1, 0, 0x52, 0xFF, post, liftCopyFlags, 0, x + 0.0f, y + 2.0f, z + 196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                        objCreate(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, animateWaveVertices, drawWaveObject, x + 112.0f, y + 108.0f, z + 196.0f, 0.0f, 180.0f, 0.0f, 1.12f, 1.12f, 1.12f);
                    }
                }
            }
        } else if (arg1[i].e == 0x7 || arg1[i].e == 0x35) {
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803158D8, liftCopyFlags, func_801C1C04, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x8 || arg1[i].e == 0x36) {
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, liftCopyFlags, 0, x + -10.0f, y + 0.0f, z + 50.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, liftCopyFlags, 0, x + -45.0f, y + 0.0f, z + -150.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, liftCopyFlags, 0, x + -70.0f, y + 0.0f, z + -50.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, liftCopyFlags, 0, x + -70.0f, y + 0.0f, z + 150.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x9 || arg1[i].e == 0x37) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, liftCopyFlags, 0, x + 20.0f, y + 1.0f, z + -50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, liftCopyFlags, 0, x + 20.0f, y + 1.0f, z + 150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, liftCopyFlags, 0, x + 47.0f, y + 1.0f, z + 50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, liftCopyFlags, 0, x + 74.0f, y + 1.0f, z + -150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0xB || arg1[i].e == 0x39) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157A0, liftCopyFlags, 0, x + -28.0f, y + 1.0f, z + 28.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0xE || arg1[i].e == 0x3C) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157A0, liftCopyFlags, 0, x + 28.0f, y + 1.0f, z + 28.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x11 || arg1[i].e == 0x3F) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157A0, liftCopyFlags, 0, x + -28.0f, y + 1.0f, z + -28.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x14 || arg1[i].e == 0x42) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157A0, liftCopyFlags, 0, x + 28.0f, y + 1.0f, z + -28.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x18 || arg1[i].e == 0x46) {
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159A8, liftCopyFlags, func_801C1C04, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x19) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, liftCopyFlags, 0, x + 50.0f, y + 22.5f, z + 10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, liftCopyFlags, 0, x + -50.0f, y + 37.5f, z + 76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, liftCopyFlags, 0, x + 150.0f, y + 7.5f, z + 48.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, liftCopyFlags, 0, x + -150.0f, y + 52.5f, z + 10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x1A || arg1[i].e == 0x48) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, liftCopyFlags, 0, x + 50.0f, y + 22.5f, z + 20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, liftCopyFlags, 0, x + -50.0f, y + 37.5f, z + 47.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, liftCopyFlags, 0, x + 150.0f, y + 7.5f, z + 74.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, liftCopyFlags, 0, x + -150.0f, y + 52.5f, z + 20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x1D || arg1[i].e == 0x4B) {
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_80315940, liftCopyFlags, func_801C1C04, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x1E) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, liftCopyFlags, 0, x + 50.0f, y + 37.5f, z + -76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, liftCopyFlags, 0, x + -50.0f, y + 22.5f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, liftCopyFlags, 0, x + 150.0f, y + 52.5f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315870, liftCopyFlags, 0, x + -150.0f, y + 7.5f, z + -48.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x1F || arg1[i].e == 0x4D) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, liftCopyFlags, 0, x + 50.0f, y + 37.5f, z + -76.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, liftCopyFlags, 0, x + -50.0f, y + 22.5f, z + -20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, liftCopyFlags, 0, x + 150.0f, y + 52.5f, z + 14.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315808, liftCopyFlags, 0, x + -150.0f, y + 7.5f, z + 24.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x22 || arg1[i].e == 0x50) {
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_80315974, liftCopyFlags, func_801C1C04, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x23 || arg1[i].e == 0x51) {
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, liftCopyFlags, 0, x + 24.0f, y + 7.5f, z + 150.0f, 8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, liftCopyFlags, 0, x + 24.0f, y + 52.5f, z + -150.0f, 8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, liftCopyFlags, 0, x + -10.0f, y + 22.5f, z + 50.0f, 8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, liftCopyFlags, 0, x + -71.0f, y + 37.5f, z + -50.0f, 8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x24 || arg1[i].e == 0x52) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, liftCopyFlags, 0, x + -20.0f, y + 22.5f, z + 50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, liftCopyFlags, 0, x + -20.0f, y + 52.5f, z + -150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, liftCopyFlags, 0, x + -48.5f, y + 7.5f, z + 150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, liftCopyFlags, 0, x + -76.5f, y + 37.5f, z + -50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x27 || arg1[i].e == 0x55) {
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_8031590C, liftCopyFlags, func_801C1C04, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x28 || arg1[i].e == 0x56) {
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, liftCopyFlags, 0, x + 10.0f, y + 22.5f, z + -50.0f, -8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, liftCopyFlags, 0, x + 10.0f, y + 52.5f, z + 150.0f, -8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, liftCopyFlags, 0, x + 47.0f, y + 37.5f, z + 50.0f, -8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, D_803159DC, liftCopyFlags, 0, x + 69.0f, y + 7.5f, z + -150.0f, -8.53f, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x29 || arg1[i].e == 0x57) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, liftCopyFlags, 0, x + 20.0f, y + 22.5f, z + -50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, liftCopyFlags, 0, x + 20.0f, y + 52.5f, z + 150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, liftCopyFlags, 0, x + 48.0f, y + 7.5f, z + -150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_8031583C, liftCopyFlags, 0, x + 76.0f, y + 37.5f, z + 50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x2A || arg1[i].e == 0x58) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + 116.0f, y + 0.0f, z + 196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + -116.0f, y + 0.0f, z + 196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, post, liftCopyFlags, 0, x + 0.0f, y + 2.0f, z + 196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            if (i == 0) {
                objCreate(0, 0, 0x2, 0, 0x51, 0xFF, D_801680B8, animateWaveVertices, drawWaveObject, x + 112.0f, y + 108.0f, z + 196.0f, 0.0f, 180.0f, 0.0f, 1.12f, 1.12f, 1.12f);
            } else {
                objCreate(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, updateWaveVertices, drawWaveObjectB, x + -112.0f, y + 108.0f, z + 196.0f, 0, 0, 0, 1.12f, 1.12f, 1.12f);
            }
        } else if (arg1[i].e == 0x2B || arg1[i].e == 0x59) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + 116.0f, y + 0.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + -116.0f, y + 0.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, post, liftCopyFlags, 0, x + 0.0f, y + 2.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            if (i == 0) {
                objCreate(0, 0, 0x2, 0, 0x51, 0xFF, D_801680B8, animateWaveVertices, drawWaveObject, x + -112.0f, y + 108.0f, z + -196.0f, 0.0f, 0.0f, 0.0f, 1.12f, 1.12f, 1.12f);
            } else {
                objCreate(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, updateWaveVertices, drawWaveObjectB, x + 112.0f, y + 108.0f, z + -196.0f, 0, 180.0f, 0, 1.12f, 1.12f, 1.12f);
            }
        } else if (arg1[i].e == 0x2C || arg1[i].e == 0x5A) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + 196.0f, y + 0.0f, z + 116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + 196.0f, y + 0.0f, z + -116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, post, liftCopyFlags, 0, x + 196.0f, y + 2.0f, z + 0.0f, 0.0f, 90.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            if (i == 0) {
                objCreate(0, 0, 0x2, 0, 0x51, 0xFF, D_801680B8, animateWaveVertices, drawWaveObject, x + 196.0f, y + 108.0f, z + -112.0f, 0.0f, 270.0f, 0.0f, 1.12f, 1.12f, 1.12f);
            } else {
                objCreate(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, updateWaveVertices, drawWaveObjectB, x + 196.0f, y + 108.0f, z + 112.0f, 0, 90.0f, 0, 1.12f, 1.12f, 1.12f);
            }
        } else if (arg1[i].e == 0x2D || arg1[i].e == 0x5B) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + -196.0f, y + 0.0f, z + 116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_80315A10, liftCopyFlags, 0, x + -196.0f, y + 0.0f, z + -116.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0, 0x52, 0xFF, post, liftCopyFlags, 0, x + -196.0f, y + 2.0f, z + 0.0f, 0.0f, 90.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            if (i == 0) {
                objCreate(0, 0, 0x2, 0, 0x51, 0xFF, D_801680B8, animateWaveVertices, drawWaveObject, x + -196.0f, y + 108.0f, z + 112.0f, 0.0f, 90.0f, 0.0f, 1.12f, 1.12f, 1.12f);
            } else {
                objCreate(0, i, 0x2, 0, 0x51, 0xFF, D_801680B8, updateWaveVertices, drawWaveObjectB, x + -196.0f, y + 108.0f, z + -112.0f, 0, 270.0f, 0, 1.12f, 1.12f, 1.12f);
            }
        } else if (arg1[i].e == 0x31) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, liftCopyFlags, 0, x + 50.0f, y + 1.0f, z + -74.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, liftCopyFlags, 0, x + -50.0f, y + 1.0f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, liftCopyFlags, 0, x + 150.0f, y + 1.0f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, liftCopyFlags, 0, x + -150.0f, y + 1.0f, z + 26.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x47) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, liftCopyFlags, 0, x + 50.0f, y + 22.5f, z + 10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, liftCopyFlags, 0, x + -50.0f, y + 37.5f, z + 76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, liftCopyFlags, 0, x + 150.0f, y + 7.5f, z + 48.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, liftCopyFlags, 0, x + -150.0f, y + 52.5f, z + 10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        } else if (arg1[i].e == 0x4C) {
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, liftCopyFlags, 0, x + 50.0f, y + 37.5f, z + -76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, liftCopyFlags, 0, x + -50.0f, y + 22.5f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, liftCopyFlags, 0, x + 150.0f, y + 52.5f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            objCreate(0, i, 0x1, 0x80, 0x52, 0xFF, D_803157D4, liftCopyFlags, 0, x + -150.0f, y + 7.5f, z + -48.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        }
    }
}
