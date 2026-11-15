typedef struct { f32 x, y, z; } Vec3f;

void func_80127030(Vec3f *dst, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6) {
    Vec3f tmp;
    tmp.x = a2 * a6 - a5 * a3;
    tmp.y = a3 * a4 - a6 * a1;
    tmp.z = a1 * a5 - a4 * a2;
    *dst = tmp;
}
