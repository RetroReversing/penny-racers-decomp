f32 __cosf(f32);
f32 __sinf(f32);
s32 guMtxF2L(f32 *, s32);
extern f32 D_801FB2B4;

void func_801FA7FC(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 *__base_D_801FB2B4;
    f32 m[16];
    f32 x, y, z;
    f32 sx, cx, sy, cy, sz, cz;
    register f32 nx;
    register f32 t;

    __base_D_801FB2B4 = &D_801FB2B4;
    x = arg1 * (*__base_D_801FB2B4);
    z = arg3 * (*__base_D_801FB2B4);
    y = arg2 * (*__base_D_801FB2B4);
    sx = __sinf(x);
    cx = __cosf(x);
    sy = __sinf(y);
    cy = __cosf(y);
    cz = __cosf(z);
    sz = __sinf(z);
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
    /*__repair_pointer_balance*/if ((unsigned long)__base_D_801FB2B4 & 0x100) {
guMtxF2L(m, arg0);
} else {
guMtxF2L(m, arg0);
}
}
