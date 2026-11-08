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

f32 __cosf(f32);                                    /* extern */
f32 __sinf(f32);                                    /* extern */
s32 func_80032B80();
s32 func_80032CC0();
extern f64 D_8004A5D0;
extern f64 D_8004A5D8;
extern f64 D_8004A5E0;
extern f64 D_8004A5E8;

void func_800330B0(s32 arg0, s16 *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 sp10;
    f32 sp24;
    f32 sp38;
    f32 sp3C;
    f32 sp48;
    s32 sp4C;
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

    var_s0 = &sp10;
    func_80032CC0(var_s0);
    temp_fs0 = (f32) ((f64) arg2 * D_8004A5D0) / 2.0f;
    temp_fs0_2 = __cosf(temp_fs0);
    temp_fs0_3 = temp_fs0_2 / __sinf(temp_fs0);
    temp_fv1 = arg4 - arg5;
    temp_fs1 = temp_fs0_3 / arg3;
    var_a1 = 0;
    sp4C = 0;
    sp3C = -1.0f;
    sp24 = temp_fs0_3;
    sp38 = (arg4 + arg5) / temp_fv1;
    sp48 = (2.0f * arg4 * arg5) / temp_fv1;
    sp10 = temp_fs1;
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
        if (!(temp_fv1_2 <= D_8004A5D8)) {
            temp_fv1_3 = D_8004A5E0 / temp_fv1_2;
            if (D_8004A5E8 <= temp_fv1_3) {
                var_v0_2 = (s32) (temp_fv1_3 - D_8004A5E8) | 0x80000000;
            } else {
                var_v0_2 = (s32) temp_fv1_3;
            }
            *arg1 = (s16) var_v0_2;
            if (!(var_v0_2 & 0xFFFF)) {
                var_v0 = 1;
                goto block_13;
            }
        } else {
block_13:
            *arg1 = var_v0;
        }
    }
    func_80032B80(&sp10, arg0);
}
