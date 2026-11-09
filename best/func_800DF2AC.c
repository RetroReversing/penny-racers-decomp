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

s32 func_801F9D8C(s32, s32);                        /* extern */

void func_800DF2AC(u8 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 *arg7, f32 *arg8) {
    f32 temp_fv1;
    f32 var_fv0;
    s32 temp_fv1_2;
    s32 var_a0;

    temp_fv1 = (f32) (func_801F9D8C((s32) (arg3 - arg6), (s32) (arg1 - arg4)) & 0xFFFF);
    *arg8 = temp_fv1;
    if (arg0 & 0xFF) {
        temp_fv1_2 = (s32) (temp_fv1 + 45.0f);
        var_a0 = temp_fv1_2;
        if ((s16) temp_fv1_2 >= 0x168) {
            var_a0 = temp_fv1_2 - 0x168;
        }
        if ((u32) (var_a0 & 0xFFFF) < 0x5AU) {
            var_fv0 = arg3 - arg6;
            goto block_11;
        }
        if ((u32) ((var_a0 - 0x5A) & 0xFFFF) < 0x5AU) {
            var_fv0 = arg1 - arg4;
            goto block_11;
        }
        if ((u32) ((var_a0 - 0xB4) & 0xFFFF) < 0x5AU) {
            var_fv0 = arg6 - arg3;
            goto block_11;
        }
        if ((u32) ((var_a0 - 0x10E) & 0xFFFF) < 0x5AU) {
            var_fv0 = arg4 - arg1;
block_11:
            *arg7 = (f32) (func_801F9D8C((s32) var_fv0, (s32) (arg5 - arg2)) & 0xFFFF);
        }
    }
}
