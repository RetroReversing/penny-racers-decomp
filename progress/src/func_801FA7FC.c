f32 __cosf(f32);
f32 __sinf(f32);
s32 guMtxF2L(f32 *, s32);
extern f32 D_801FB2B4;

void func_801FA7FC(s32 arg0, f32 arg1, f32 arg2, f32 arg3)
{
    f32 m[4][4];
    f32 sx, cx, sy, cy, sz, cz;

    arg1 *= D_801FB2B4;
    arg2 *= D_801FB2B4;
    arg3 *= D_801FB2B4;
    sx = __sinf(arg1);
    cx = __cosf(arg1);
    sy = __sinf(arg2);
    cy = __cosf(arg2);
    sz = __sinf(arg3);
    cz = __cosf(arg3);
    m[0][0] = cy * cz - sx * sy * sz;
    m[0][1] = cy * sz + sx * sy * cz;
    m[0][2] = -cx * sy;
    m[0][3] = 0.0f;
    m[1][0] = -cx * sz;
    m[1][1] = cx * cz;
    m[1][2] = sx;
    m[1][3] = 0.0f;
    m[2][0] = sy * cz + sx * cy * sz;
    m[2][1] = sy * sz - sx * cy * cz;
    m[2][2] = cx * cy;
    m[2][3] = 0.0f;
    m[3][0] = 0.0f;
    m[3][1] = 0.0f;
    m[3][2] = 0.0f;
    m[3][3] = 1.0f;
    guMtxF2L(&m[0][0], arg0);
}
