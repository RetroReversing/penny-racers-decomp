typedef struct { f32 x; f32 y; f32 z; } Vec3;
extern Vec3 D_8012AB40;
extern Vec3 D_8012AB4C;
extern Vec3 D_8012AB58;
extern Vec3 D_8012AB64;
extern Vec3 D_8012AB7C;
Vec3 vec3Sub(Vec3 *a, Vec3 *b);
Vec3 vec3Cross(Vec3 a, Vec3 b);
s8 vec3DotSign(Vec3 a, Vec3 b);

u8 func_801271A0(void) {
    Vec3 a, b, c, d, e, f, n, p;
    s8 s0;
    s8 s1;
    u8 result;

    result = 0;
    a = vec3Sub(&D_8012AB4C, &D_8012AB64);
    b = vec3Sub(&D_8012AB7C, &D_8012AB64);
    n = vec3Cross(a, b);
    p = vec3Sub(&D_8012AB58, &D_8012AB64);
    if (vec3DotSign(p, n) == -1) {
        p = vec3Sub(&D_8012AB40, &D_8012AB64);
        if (vec3DotSign(p, n) == 1) {
            c = vec3Sub(&D_8012AB58, &D_8012AB40);
            d = vec3Sub(&D_8012AB64, &D_8012AB40);
            e = vec3Sub(&D_8012AB4C, &D_8012AB40);
            f = vec3Sub(&D_8012AB7C, &D_8012AB40);
            p = vec3Cross(e, f);
            s0 = vec3DotSign(c, p);
            p = vec3Cross(d, e);
            s1 = vec3DotSign(c, p);
            if (s1 == s0) {
                p = vec3Cross(f, d);
                result = s1 == vec3DotSign(c, p);
            }
        }
    }
    return result;
}
