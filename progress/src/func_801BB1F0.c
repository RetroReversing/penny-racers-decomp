typedef struct { u8 pad0[4]; u16 unk4; u8 pad6[0x5E]; } R931;
typedef struct { u8 a; u8 b; s8 c; s8 d; s8 e; } E931;
extern R931 D_8011F2F0[];
extern E931 D_801C7080[];
extern u16 D_801C7470[][4];
extern u8 D_801C7AB6;
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
void func_801C1C04(void);

void func_801BB1F0(u8 arg0)
{
    u16 ids[4];
    u8 alpha;
    f32 x, y, z;
    f32 sx, sy, sz;
    s8 type;
    u8 i;
    s32 n;

    for (i = 0; i < 4; i++) {
        ids[i] = 0xFFFF;
    }
    n = (u16) (arg0 * 5);
    alpha = 0x5B;
    x = ((E931 *) ((u8 *) D_801C7080 + n))->c * 400.0f;
    y = ((E931 *) ((u8 *) D_801C7080 + n))->b;
    z = ((E931 *) ((u8 *) D_801C7080 + n))->d * 400.0f;
    sx = sy = sz = 0.5f;
    type = ((E931 *) ((u8 *) D_801C7080 + n))->e;
    if (type == 0x2 || type == 0x30) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0, 0x5B, 0xFF, D_803158A4, 0, func_801C1C04, (x + 0.0f) * sz, (y + 0.0f) * sz, (z + 0.0f) * sz, 0.0f, 0.0f, 0.0f, sz, sz, sz);
    } else if (type == 0x3) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, 0, (x + 50.0f) * sx, (y + 1.0f) * sy, (z + -74.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, 0, (x + -50.0f) * sx, (y + 1.0f) * sy, (z + -10.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, 0, (x + 150.0f) * sx, (y + 1.0f) * sy, (z + -10.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, 0, (x + -150.0f) * sx, (y + 1.0f) * sy, (z + 26.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x4 || type == 0x32) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, 0, (x + 50.0f) * sx, (y + 1.0f) * sy, (z + 20.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, 0, (x + -50.0f) * sx, (y + 1.0f) * sy, (z + 73.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, 0, (x + 150.0f) * sx, (y + 1.0f) * sy, (z + 45.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, 0, (x + -150.0f) * sx, (y + 1.0f) * sy, (z + 20.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x7 || type == 0x35) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803158D8, 0, func_801C1C04, (x + 0.0f) * sx, (y + 0.0f) * sy, (z + 0.0f) * sz, 0.0f, 0.0f, 0.0f, sx, sy, sz);
    } else if (type == 0x8 || type == 0x36) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159DC, 0, 0, (x + -10.0f) * sx, (y + 0.0f) * sy, (z + 50.0f) * sz, 0.0f, 0.0f, 0.0f, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159DC, 0, 0, (x + -45.0f) * sx, (y + 0.0f) * sy, (z + -150.0f) * sz, 0.0f, 0.0f, 0.0f, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159DC, 0, 0, (x + -70.0f) * sx, (y + 0.0f) * sy, (z + -50.0f) * sz, 0.0f, 0.0f, 0.0f, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159DC, 0, 0, (x + -70.0f) * sx, (y + 0.0f) * sy, (z + 150.0f) * sz, 0.0f, 0.0f, 0.0f, sx, sy, sz);
    } else if (type == 0x9 || type == 0x37) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, 0, (x + 20.0f) * sx, (y + 1.0f) * sy, (z + -50.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, 0, (x + 20.0f) * sx, (y + 1.0f) * sy, (z + 150.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, 0, (x + 47.0f) * sx, (y + 1.0f) * sy, (z + 50.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, 0, (x + 74.0f) * sx, (y + 1.0f) * sy, (z + -150.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0xB || type == 0x39) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157A0, 0, 0, (x + -28.0f) * sx, (y + 1.0f) * sy, (z + 28.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0xE || type == 0x3C) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157A0, 0, 0, (x + 28.0f) * sx, (y + 1.0f) * sy, (z + 28.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x11 || type == 0x3F) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157A0, 0, 0, (x + -28.0f) * sx, (y + 1.0f) * sy, (z + -28.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x14 || type == 0x42) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157A0, 0, 0, (x + 28.0f) * sx, (y + 1.0f) * sy, (z + -28.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x18 || type == 0x46) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159A8, 0, func_801C1C04, (x + 0.0f) * sx, (y + 0.0f) * sy, (z + 0.0f) * sz, 0.0f, 0.0f, 0.0f, sx, sy, sz);
    } else if (type == 0x19) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, 0, (x + 50.0f) * sx, (y + 22.5f) * sy, (z + 10.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, 0, (x + -50.0f) * sx, (y + 37.5f) * sy, (z + 76.5f) * sz, 0, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, 0, (x + 150.0f) * sx, (y + 7.5f) * sy, (z + 48.5f) * sz, 0, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, 0, (x + -150.0f) * sx, (y + 52.5f) * sy, (z + 10.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x1A || type == 0x48) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, 0, (x + 50.0f) * sx, (y + 22.5f) * sy, (z + 20.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, 0, (x + -50.0f) * sx, (y + 37.5f) * sy, (z + 47.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, 0, (x + 150.0f) * sx, (y + 7.5f) * sy, (z + 74.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, 0, (x + -150.0f) * sx, (y + 52.5f) * sy, (z + 20.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x1D || type == 0x4B) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_80315940, 0, func_801C1C04, (x + 0.0f) * sx, (y + 0.0f) * sy, (z + 0.0f) * sz, 0.0f, 0.0f, 0.0f, sx, sy, sz);
    } else if (type == 0x1E) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, 0, (x + 50.0f) * sx, (y + 37.5f) * sy, (z + -76.5f) * sz, 0, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, 0, (x + -50.0f) * sx, (y + 22.5f) * sy, (z + -10.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, 0, (x + 150.0f) * sx, (y + 52.5f) * sy, (z + -10.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315870, 0, 0, (x + -150.0f) * sx, (y + 7.5f) * sy, (z + -48.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x1F || type == 0x4D) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, 0, (x + 50.0f) * sx, (y + 37.5f) * sy, (z + -76.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, 0, (x + -50.0f) * sx, (y + 22.5f) * sy, (z + -20.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, 0, (x + 150.0f) * sx, (y + 52.5f) * sy, (z + 14.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_80315808, 0, 0, (x + -150.0f) * sx, (y + 7.5f) * sy, (z + 24.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x22 || type == 0x50) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_80315974, 0, func_801C1C04, (x + 0.0f) * sx, (y + 0.0f) * sy, (z + 0.0f) * sz, 0.0f, 0.0f, 0.0f, sx, sy, sz);
    } else if (type == 0x23 || type == 0x51) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159DC, 0, 0, (x + 24.0f) * sx, (y + 7.5f) * sy, (z + 150.0f) * sz, 8.529999732971191f, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159DC, 0, 0, (x + 24.0f) * sx, (y + 52.5f) * sy, (z + -150.0f) * sz, 8.529999732971191f, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159DC, 0, 0, (x + -10.0f) * sx, (y + 22.5f) * sy, (z + 50.0f) * sz, 8.529999732971191f, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159DC, 0, 0, (x + -71.0f) * sx, (y + 37.5f) * sy, (z + -50.0f) * sz, 8.529999732971191f, 0, 0, sx, sy, sz);
    } else if (type == 0x24 || type == 0x52) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, 0, (x + -20.0f) * sx, (y + 22.5f) * sy, (z + 50.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, 0, (x + -20.0f) * sx, (y + 52.5f) * sy, (z + -150.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, 0, (x + -48.5f) * sx, (y + 7.5f) * sy, (z + 150.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, 0, (x + -76.5f) * sx, (y + 37.5f) * sy, (z + -50.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x27 || type == 0x55) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_8031590C, 0, func_801C1C04, (x + 0.0f) * sx, (y + 0.0f) * sy, (z + 0.0f) * sz, 0.0f, 0.0f, 0.0f, sx, sy, sz);
    } else if (type == 0x28 || type == 0x56) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159DC, 0, 0, (x + 10.0f) * sx, (y + 22.5f) * sy, (z + -50.0f) * sz, -8.529999732971191f, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159DC, 0, 0, (x + 10.0f) * sx, (y + 52.5f) * sy, (z + 150.0f) * sz, -8.529999732971191f, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159DC, 0, 0, (x + 47.0f) * sx, (y + 37.5f) * sy, (z + 50.0f) * sz, -8.529999732971191f, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0, alpha, 0xFF, D_803159DC, 0, 0, (x + 69.0f) * sx, (y + 7.5f) * sy, (z + -150.0f) * sz, -8.529999732971191f, 0, 0, sx, sy, sz);
    } else if (type == 0x29 || type == 0x57) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, 0, (x + 20.0f) * sx, (y + 22.5f) * sy, (z + -50.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, 0, (x + 20.0f) * sx, (y + 52.5f) * sy, (z + 150.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, 0, (x + 48.0f) * sx, (y + 7.5f) * sy, (z + -150.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_8031583C, 0, 0, (x + 76.0f) * sx, (y + 37.5f) * sy, (z + 50.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x31) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, 0, (x + 50.0f) * sx, (y + 1.0f) * sy, (z + -74.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, 0, (x + -50.0f) * sx, (y + 1.0f) * sy, (z + -10.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, 0, (x + 150.0f) * sx, (y + 1.0f) * sy, (z + -10.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, 0, (x + -150.0f) * sx, (y + 1.0f) * sy, (z + 26.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x47) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, 0, (x + 50.0f) * sx, (y + 22.5f) * sy, (z + 10.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, 0, (x + -50.0f) * sx, (y + 37.5f) * sy, (z + 76.5f) * sz, 0, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, 0, (x + 150.0f) * sx, (y + 7.5f) * sy, (z + 48.5f) * sz, 0, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, 0, (x + -150.0f) * sx, (y + 52.5f) * sy, (z + 10.0f) * sz, 0, 0, 0, sx, sy, sz);
    } else if (type == 0x4C) {
        ids[0] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, 0, (x + 50.0f) * sx, (y + 37.5f) * sy, (z + -76.5f) * sz, 0, 0, 0, sx, sy, sz);
        ids[1] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, 0, (x + -50.0f) * sx, (y + 22.5f) * sy, (z + -10.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[2] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, 0, (x + 150.0f) * sx, (y + 52.5f) * sy, (z + -10.0f) * sz, 0, 0, 0, sx, sy, sz);
        ids[3] = func_800DE41C(0, arg0, 0x1, 0x80, alpha, 0xFF, D_803157D4, 0, 0, (x + -150.0f) * sx, (y + 7.5f) * sy, (z + -48.0f) * sz, 0, 0, 0, sx, sy, sz);
    }
    for (i = 0; i < 4; i++) {
        if (ids[i] != 0xFFFF) {
            D_801C7470[arg0][i] = ids[i];
            D_8011F2F0[ids[i]].unk4 |= 0x28;
            D_801C7AB6++;
        }
    }
}
