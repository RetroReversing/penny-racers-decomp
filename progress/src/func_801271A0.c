typedef struct { f32 x; f32 y; f32 z; } Vec3;
extern Vec3 D_8012AB40;
extern Vec3 D_8012AB4C;
extern Vec3 D_8012AB58;
extern Vec3 D_8012AB64;
extern Vec3 D_8012AB7C;
Vec3 func_80127148(Vec3 *a, Vec3 *b);
Vec3 func_80127030(Vec3 a, Vec3 b);
s8 func_801270B0(Vec3 a, Vec3 b);

u8 func_801271A0(void) {
    Vec3 a, b, c, d, e, f, n, p;
    s8 s0;
    s8 s1;
    u8 result;

    result = 0;
    a = func_80127148(&D_8012AB4C, &D_8012AB64);
    b = func_80127148(&D_8012AB7C, &D_8012AB64);
    n = func_80127030(a, b);
    p = func_80127148(&D_8012AB58, &D_8012AB64);
    if (func_801270B0(p, n) == -1) {
        p = func_80127148(&D_8012AB40, &D_8012AB64);
        if (func_801270B0(p, n) == 1) {
            c = func_80127148(&D_8012AB58, &D_8012AB40);
            d = func_80127148(&D_8012AB64, &D_8012AB40);
            e = func_80127148(&D_8012AB4C, &D_8012AB40);
            f = func_80127148(&D_8012AB7C, &D_8012AB40);
            p = func_80127030(e, f);
            s0 = func_801270B0(c, p);
            p = func_80127030(d, e);
            s1 = func_801270B0(c, p);
            if (s1 == s0) {
                p = func_80127030(f, d);
                result = s1 == func_801270B0(c, p);
            }
        }
    }
    return result;
}
