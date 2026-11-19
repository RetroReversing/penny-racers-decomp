f32 __cosf(f32);
f32 __sinf(f32);
s32 guMtxF2L(f32 *, s32);
extern f32 D_801FB2B0;

void func_801FA678(s32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
    f32 m[4][4];
    f32 sx, cx, sy, cy, sz, cz;

    sx = __sinf(arg1 * D_801FB2B0);
    cx = __cosf(arg1 * D_801FB2B0);
    sy = __sinf(arg2 * D_801FB2B0);
    cy = __cosf(arg2 * D_801FB2B0);
    sz = __sinf(arg3 * D_801FB2B0);
    cz = __cosf(arg3 * D_801FB2B0);

    m[0][0] = cy * cz + sy * sx * sz;
    m[0][1] = cx * sz;
    m[0][2] = -sy * cz + cy * sx * sz;
    m[0][3] = 0.0f;
    m[1][0] = -cy * sz + sy * sx * cz;
    m[1][1] = cx * cz;
    m[1][2] = sy * sz + cy * sx * cz;
    m[1][3] = 0.0f;
    m[2][0] = sy * cx;
    m[2][1] = -sx;
    m[2][2] = cy * cx;
    m[2][3] = 0.0f;
    m[3][0] = 0.0f;
    m[3][1] = 0.0f;
    m[3][2] = 0.0f;
    m[3][3] = 1.0f;

    guMtxF2L((f32 *) m, arg0);
}
