typedef struct { u8 pad0[2]; u16 unk2; u8 pad4[0x60]; } R931;
extern R931 D_8011F2F0[];
extern u16 D_801C7D1A[];
extern s8 D_801C7AB4;
u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, s32, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
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
void func_801B7678(void);
void func_801C1C28(void);

void func_801BD7E8(void)
{
    u16 ids[4];
    u8 n;
    u8 alpha;
    f32 x, y, z;
    s8 type;
    u8 i;

    for (i = 0; i < 4; i++) {
        ids[i] = 0xFFFF;
    }
    n = 0xC8;
    alpha = 0x7B;
    z = x = y = 0.0f;
    type = D_801C7AB4;
    if (type == 0x2 || type == 0x30) {
        ids[0] = func_800DE41C(0, 0xC8, 0x1, 0, 0x7B, 0xFF, D_803158A4, 0, func_801C1C28, y, y, y, y, y, y, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x3) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, func_801B7678, x + 50.0f, y + 1.0f, z + -74.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, func_801B7678, x + -50.0f, y + 1.0f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, func_801B7678, x + 150.0f, y + 1.0f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, func_801B7678, x + -150.0f, y + 1.0f, z + 26.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x4 || type == 0x32) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, func_801B7678, x + 50.0f, y + 1.0f, z + 20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, func_801B7678, x + -50.0f, y + 1.0f, z + 73.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, func_801B7678, x + 150.0f, y + 1.0f, z + 45.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, func_801B7678, x + -150.0f, y + 1.0f, z + 20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x7 || type == 0x35) {
        ids[0] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803158D8, 0, func_801C1C28, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x8 || type == 0x36) {
        ids[0] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159DC, 0, func_801B7678, x + -10.0f, y + 0.0f, z + 50.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159DC, 0, func_801B7678, x + -45.0f, y + 0.0f, z + -150.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159DC, 0, func_801B7678, x + -70.0f, y + 0.0f, z + -50.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159DC, 0, func_801B7678, x + -70.0f, y + 0.0f, z + 150.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x9 || type == 0x37) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, func_801B7678, x + 20.0f, y + 1.0f, z + -50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, func_801B7678, x + 20.0f, y + 1.0f, z + 150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, func_801B7678, x + 47.0f, y + 1.0f, z + 50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, func_801B7678, x + 74.0f, y + 1.0f, z + -150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0xB || type == 0x39) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157A0, 0, func_801B7678, x + -28.0f, y + 1.0f, z + 28.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0xE || type == 0x3C) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157A0, 0, func_801B7678, x + 28.0f, y + 1.0f, z + 28.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x11 || type == 0x3F) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157A0, 0, func_801B7678, x + -28.0f, y + 1.0f, z + -28.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x14 || type == 0x42) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157A0, 0, func_801B7678, x + 28.0f, y + 1.0f, z + -28.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x18 || type == 0x46) {
        ids[0] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159A8, 0, func_801C1C28, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x19) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, func_801B7678, x + 50.0f, y + 22.5f, z + 10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, func_801B7678, x + -50.0f, y + 37.5f, z + 76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, func_801B7678, x + 150.0f, y + 7.5f, z + 48.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, func_801B7678, x + -150.0f, y + 52.5f, z + 10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x1A || type == 0x48) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, func_801B7678, x + 50.0f, y + 22.5f, z + 20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, func_801B7678, x + -50.0f, y + 37.5f, z + 47.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, func_801B7678, x + 150.0f, y + 7.5f, z + 74.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, func_801B7678, x + -150.0f, y + 52.5f, z + 20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x1D || type == 0x4B) {
        ids[0] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_80315940, 0, func_801C1C28, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x1E) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, func_801B7678, x + 50.0f, y + 37.5f, z + -76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, func_801B7678, x + -50.0f, y + 22.5f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, func_801B7678, x + 150.0f, y + 52.5f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, func_801B7678, x + -150.0f, y + 7.5f, z + -48.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x1F || type == 0x4D) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, func_801B7678, x + 50.0f, y + 37.5f, z + -76.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, func_801B7678, x + -50.0f, y + 22.5f, z + -20.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, func_801B7678, x + 150.0f, y + 52.5f, z + 14.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, func_801B7678, x + -150.0f, y + 7.5f, z + 24.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x22 || type == 0x50) {
        ids[0] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_80315974, 0, func_801C1C28, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x23 || type == 0x51) {
        ids[0] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159DC, 0, func_801B7678, x + 24.0f, y + 7.5f, z + 150.0f, 8.529999732971191f, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159DC, 0, func_801B7678, x + 24.0f, y + 52.5f, z + -150.0f, 8.529999732971191f, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159DC, 0, func_801B7678, x + -10.0f, y + 22.5f, z + 50.0f, 8.529999732971191f, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159DC, 0, func_801B7678, x + -71.0f, y + 37.5f, z + -50.0f, 8.529999732971191f, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x24 || type == 0x52) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, func_801B7678, x + -20.0f, y + 22.5f, z + 50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, func_801B7678, x + -20.0f, y + 52.5f, z + -150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, func_801B7678, x + -48.5f, y + 7.5f, z + 150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, func_801B7678, x + -76.5f, y + 37.5f, z + -50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x27 || type == 0x55) {
        ids[0] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_8031590C, 0, func_801C1C28, x + 0.0f, y + 0.0f, z + 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x28 || type == 0x56) {
        ids[0] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159DC, 0, func_801B7678, x + 10.0f, y + 22.5f, z + -50.0f, -8.529999732971191f, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159DC, 0, func_801B7678, x + 10.0f, y + 52.5f, z + 150.0f, -8.529999732971191f, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159DC, 0, func_801B7678, x + 47.0f, y + 37.5f, z + 50.0f, -8.529999732971191f, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0, alpha, 0xFF, D_803159DC, 0, func_801B7678, x + 69.0f, y + 7.5f, z + -150.0f, -8.529999732971191f, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x29 || type == 0x57) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, func_801B7678, x + 20.0f, y + 22.5f, z + -50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, func_801B7678, x + 20.0f, y + 52.5f, z + 150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, func_801B7678, x + 48.0f, y + 7.5f, z + -150.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, func_801B7678, x + 76.0f, y + 37.5f, z + 50.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x31) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, func_801B7678, x + 50.0f, y + 1.0f, z + -74.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, func_801B7678, x + -50.0f, y + 1.0f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, func_801B7678, x + 150.0f, y + 1.0f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, func_801B7678, x + -150.0f, y + 1.0f, z + 26.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x47) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, func_801B7678, x + 50.0f, y + 22.5f, z + 10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, func_801B7678, x + -50.0f, y + 37.5f, z + 76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, func_801B7678, x + 150.0f, y + 7.5f, z + 48.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, func_801B7678, x + -150.0f, y + 52.5f, z + 10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    } else if (type == 0x4C) {
        ids[0] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, func_801B7678, x + 50.0f, y + 37.5f, z + -76.5f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[1] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, func_801B7678, x + -50.0f, y + 22.5f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[2] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, func_801B7678, x + 150.0f, y + 52.5f, z + -10.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
        ids[3] = func_800DE41C(0, n, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, func_801B7678, x + -150.0f, y + 7.5f, z + -48.0f, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    }
    for (i = 0; i < 4; i++) {
        if (ids[i] != 0xFFFF) {
            D_801C7D1A[i] = ids[i];
            D_8011F2F0[ids[i]].unk2 |= 0x28;
        }
    }
}
