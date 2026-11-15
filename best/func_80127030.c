typedef struct { f32 x, y, z; } Vec3f;

Vec3f *func_80127030(Vec3f *dst, u32 b1, u32 b2, u32 b3, f32 a4, f32 a5, f32 a6) {
    Vec3f tmp;

    tmp.x = *(f32 *)&b2 * a6 - a5 * *(f32 *)&b3;
    tmp.y = *(f32 *)&b3 * a4 - a6 * *(f32 *)&b1;
    tmp.z = *(f32 *)&b1 * a5 - a4 * *(f32 *)&b2;
    *dst = tmp;
    return dst;
}
