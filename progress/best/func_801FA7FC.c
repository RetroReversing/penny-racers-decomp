f32 __cosf(f32);
f32 __sinf(f32);
s32 guMtxF2L(f32 *, s32);
extern f32 D_801FB2B4;

void func_801FA7FC(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 m[16];
    f32 x, y, z;
    f32 sx, cx, sy, cy, sz, cz;
    f32 nx;
    f32 t;

    x = arg1 * D_801FB2B4;
    y = arg2 * D_801FB2B4;
    z = arg3 * D_801FB2B4;
    sx = __sinf(x);
    cx = __cosf(x);
    sy = __sinf(y);
    cy = __cosf(y);
    sz = __sinf(z);
    cz = __cosf(z);
    t = sx * sy;
    m[0] = cy * cz - t * sz;
    m[1] = cy * sz + t * cz;
    nx = -cx;
    m[2] = nx * sy;
    m[3] = 0;
    m[4] = nx * sz;
    m[5] = cx * cz;
    m[6] = sx;
    m[7] = 0;
    t = sx * cy;
    m[8] = sy * cz + t * sz;
    m[9] = sy * sz - t * cz;
    m[10] = cx * cy;
    m[11] = 0;
    m[12] = 0;
    m[13] = 0;
    m[14] = 0;
    m[15] = 1.0f;
    do { guMtxF2L(m, arg0); } while (0);
}
