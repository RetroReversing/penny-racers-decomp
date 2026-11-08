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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 __cosf(f32);                             /* extern */
s32 func_80032CC0();
f32 __sinf(f32);                             /* extern */
extern f64 D_8004A5B0;
extern f64 D_8004A5B8;
extern f64 D_8004A5C0;
extern f64 D_8004A5C8;

void guPerspectiveF(f32 *arg0, s16 *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    char *var_s0;
    char *var_v1;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs1;
    f32 temp_fv1;
    f64 temp_fv1_2;
    f64 temp_fv1_3;
    unsigned int var_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0_2;

    var_s0 = arg0;
    func_80032CC0(arg0);
    temp_fs0 = (f32) ((f64) arg2 * D_8004A5B0) / 2.0f;
    temp_fs0_2 = __cosf(temp_fs0);
    temp_fs0_3 = temp_fs0_2 / __sinf(temp_fs0);
    temp_fv1 = arg4 - arg5;
    temp_fs1 = temp_fs0_3 / arg3;
    var_a1 = 0;
    M2C_FIELD(var_s0, s32 *, 0x3C) = 0;
    M2C_FIELD(var_s0, f32 *, 0x2C) = -1.0f;
    M2C_FIELD(var_s0, f32 *, 0x14) = temp_fs0_3;
    M2C_FIELD(var_s0, f32 *, 0x28) = (f32) ((arg4 + arg5) / temp_fv1);
    M2C_FIELD(var_s0, f32 *, 0x38) = (f32) ((2.0f * arg4 * arg5) / temp_fv1);
    M2C_FIELD(var_s0, f32 *, 0) = temp_fs1;
    do {
        var_a0 = 0;
        var_v1 = var_s0;
loop_2:
        var_a0 += 1;
        *(f32 *)var_v1 *= arg6;
        var_v1 += 4;
        if (var_a0 < 4) {
            goto loop_2;
        }
        var_a1 += 1;
        var_s0 += 0x10;
    } while (var_a1 < 4);
    if (arg1 != NULL) {
        temp_fv1_2 = (f64) (arg4 + arg5);
        var_v0 = 0xFFFF;
        if (!(temp_fv1_2 <= D_8004A5B8)) {
            temp_fv1_3 = D_8004A5C0 / temp_fv1_2;
            if (D_8004A5C8 <= temp_fv1_3) {
                var_v0_2 = (s32) (temp_fv1_3 - D_8004A5C8) | 0x80000000;
            } else {
                var_v0_2 = (s32) temp_fv1_3;
            }
            *arg1 = (s16) var_v0_2;
            var_v0 = 1;
            if (!(var_v0_2 & 0xFFFF)) {
                goto block_12;
            }
        } else {
block_12:
            *arg1 = var_v0;
        }
    }
}
