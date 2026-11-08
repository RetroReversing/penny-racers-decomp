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

M2C_UNK func_80127AB0(void *, void *, M2C_UNK, f32, f32, f32, f32, f32, f32, s32); /* extern */
s32 func_80129348(void *, void *, f32, f32, f32);   /* extern */
extern M2C_UNK D_8011F2F0;

void func_80129918(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fs0;
    f32 var_fs1;
    f32 var_fs2;
    s32 temp_v0;
    s32 temp_v1;
    u8 temp_s3;
    u8 temp_s4;
    u8 var_s1;
    u8 var_s2;
    void *temp_s5;
    void *temp_s6;

    var_s2 = 0;
    var_s1 = 0;
    var_fs0 = arg4;
    var_fs1 = arg5;
    var_fs2 = arg6;
    temp_v0 = func_80129348(arg0 + 4, arg0 + 6, arg1, arg2, arg3) & 0xFF;
    if (((temp_v0 == 0) | (temp_v0 == 2)) != 0) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) (var_fs0 + M2C_FIELD(arg0, f32 *, 8));
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) (var_fs1 + M2C_FIELD(arg0, f32 *, 0xC));
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) (var_fs2 + M2C_FIELD(arg0, f32 *, 0x10));
        M2C_FIELD(arg0, u8 *, 1) = 0U;
        M2C_FIELD(arg0, u8 *, 2) = 0U;
        return;
    }
    temp_s6 = arg0 + 4;
    temp_s5 = arg0 + 6;
loop_3:
    func_80127AB0(arg0, (M2C_FIELD(arg0, u16 *, 4) * 0x64) + &D_8011F2F0, 0x41400000, arg1, arg2, arg3, var_fs0, var_fs1, var_fs2, 1);
    temp_fv1 = M2C_FIELD(arg0, f32 *, 8);
    temp_ft0 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x10);
    var_fs0 = temp_fv1 - arg1;
    var_fs1 = temp_ft0 - arg2;
    var_fs2 = temp_fv0 - arg3;
    temp_s3 = var_s2 | M2C_FIELD(arg0, u8 *, 1);
    var_s2 = temp_s3;
    temp_s4 = var_s1 + M2C_FIELD(arg0, u8 *, 2);
    var_s1 = temp_s4;
    if ((u16) M2C_FIELD(arg0, u8 *, 2) != 1) {
        if (M2C_FIELD(arg0, u8 *, 3) == 0) {
            temp_v1 = func_80129348(temp_s6, temp_s5, temp_fv1, temp_ft0, temp_fv0) & 0xFF;
            if (temp_v1 != 0) {
                if (temp_v1 == 2) {
                    func_80127AB0(arg0, (M2C_FIELD(arg0, u16 *, 4) * 0x64) + &D_8011F2F0, 0x41400000, arg1, arg2, arg3, var_fs0, var_fs1, var_fs2, 1);
                    temp_fv1_2 = M2C_FIELD(arg0, f32 *, 8);
                    temp_ft0_2 = M2C_FIELD(arg0, f32 *, 0xC);
                    temp_fv0_2 = M2C_FIELD(arg0, f32 *, 0x10);
                    var_fs0 = temp_fv1_2 - arg1;
                    var_fs1 = temp_ft0_2 - arg2;
                    var_s2 = M2C_FIELD(arg0, u8 *, 1) | temp_s3;
                    var_s1 = M2C_FIELD(arg0, u8 *, 2) + temp_s4;
                    var_fs2 = temp_fv0_2 - arg3;
                    if (M2C_FIELD(arg0, u8 *, 2) != 0) {
                        if (M2C_FIELD(arg0, u8 *, 3) == 0) {
                            func_80129348(temp_s6, temp_s5, temp_fv1_2, temp_ft0_2, temp_fv0_2);
                        }
                        goto loop_3;
                    }
                } else {
                    goto loop_3;
                }
            }
        } else {
            goto loop_3;
        }
    }
    M2C_FIELD(arg0, u8 *, 1) = var_s2;
    M2C_FIELD(arg0, u8 *, 2) = var_s1;
}
