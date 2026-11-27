f32 func_80033640(f32);
f32 func_80032320(f32);
void func_80032B80(f32 *, s32);
extern f32 D_801FB2B0;
void buildRotationMatrix(s32 dst, f32 rx, f32 ry, f32 rz)
{
    f32 m[4][4];
    f32 sx, cx, sy, cy, sz, cz;
    f32 t;

    rx *= D_801FB2B0;
    ry *= D_801FB2B0;
    rz *= D_801FB2B0;
    sx = func_80033640(rx);
    cx = func_80032320(rx);
    sy = func_80033640(ry);
    cy = func_80032320(ry);
    sz = func_80033640(rz);
    cz = func_80032320(rz);
    t = sx * sz;
    m[0][0] = cy * cz + sy * t;
    m[0][1] = cx * sz;
    m[0][2] = -cz * sy + cy * t;
    m[0][3] = 0.0f;
    t = cz * sx;
    m[1][0] = sy * t - cy * sz;
    m[1][1] = cx * cz;
    m[1][2] = cy * t + sy * sz;
    m[1][3] = 0.0f;
    m[2][0] = cx * sy;
    m[2][1] = -sx;
    m[2][2] = cx * cy;
    m[2][3] = 0.0f;
    m[3][0] = 0.0f;
    m[3][1] = 0.0f;
    m[3][2] = 0.0f;
    m[3][3] = 1.0f;
    func_80032B80(&m[0][0], dst);
}
