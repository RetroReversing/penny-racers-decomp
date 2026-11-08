/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

f32 __sinf(f32);                                    /* extern */
M2C_UNK func_8013AE60(s32, M2C_UNK *);              /* extern */
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_80167FB8;
extern M2C_UNK D_80167FBC;
extern M2C_UNK D_80183308;
extern f64 D_80183328;
extern f64 D_80183330;
extern f64 D_80183338;
extern M2C_UNK D_80183B80;
extern s32 D_80183BA0;

void func_8013CF4C(s32 arg0) {
    f32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    f32 *temp_a0;
    f32 *var_v0_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_fv0;
    f64 temp_fs0;
    f64 temp_fs1;
    s32 temp_fv1;
    s32 temp_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_v0;
    u16 temp_v1;

    sp10 = M2C_FIELD(&D_80183308, f32 *, 0);
    sp14 = M2C_FIELD(&D_80183308, s32 *, 4);
    sp18 = M2C_FIELD(&D_80183308, s32 *, 8);
    sp1C = M2C_FIELD(&D_80183308, s32 *, 0xC);
    sp20 = M2C_FIELD(&D_80183308, s32 *, 0x10);
    sp24 = M2C_FIELD(&D_80183308, s32 *, 0x14);
    sp28 = M2C_FIELD(&D_80183308, s32 *, 0x18);
    sp2C = M2C_FIELD(&D_80183308, s32 *, 0x1C);
    temp_s0 = arg0 & 0xFFFF;
    func_8013AE60(temp_s0, &D_80183308);
    temp_v1 = *(&D_8011F32E + (temp_s0 * 0x64));
    if (temp_v1 != 0) {
        var_s3 = 0;
        if (temp_v1 != 1) {
            return;
        }
        var_v0 = 0 * 4;
        __repair_rows: {
            var_v0_2 = var_v0 + &D_80183B80;
            temp_fv0 = *var_v0_2;
            if (!(temp_fv0 < 360.0f)) {
                var_v0_2 = (var_s3 * 4) + &D_80183B80;
                var_fv0 = *var_v0_2 - 360.0f;
            } else {
                var_fv0 = (f32) ((f64) temp_fv0 + D_80183328);
            }
            *var_v0_2 = var_fv0;
            var_s3 += 1;
            var_v0 = var_s3 * 4;
        }
if (var_s3 < 8) goto __repair_rows;
        var_s3_2 = 0;
        temp_fs1 = D_80183330;
        temp_fs0 = D_80183338;
        var_s2 = 0 * 0x10;
        do {
            temp_fv1 = (s32) (__sinf((f32) (((f64) *((var_s3_2 * 4) + &D_80183B80) * temp_fs1) / temp_fs0)) * (&sp10)[var_s3_2]);
            M2C_FIELD((((var_s3_2 + 8) * 0x10) + &D_80167FB8), s16 *, 4) = (s16) temp_fv1;
            *(&D_80167FBC + var_s2) = (s16) temp_fv1;
            var_s3_2 += 1;
            var_s2 = var_s3_2 * 0x10;
        } while (var_s3_2 < 8);
        return;
    }
    var_s3_3 = 0;
    do {
        temp_a0 = (var_s3_3 * 4) + &D_80183B80;
        temp_fv0_2 = (f32) (var_s3_3 * 0x2D);
        var_s3_3 += 1;
        *temp_a0 = temp_fv0_2;
    } while (var_s3_3 < 8);
    D_80183BA0 = 0;
    *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
}
