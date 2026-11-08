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

M2C_UNK func_8013AE60(s32);                         /* extern */
extern M2C_UNK D_80000000;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F338;

void func_8014C264(s32 arg0) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_3;
    u32 var_v0_2;
    u32 var_v0_4;

    temp_s0 = arg0 & 0xFFFF;
    func_8013AE60(temp_s0);
    temp_a1 = temp_s0 * 0x64;
    temp_fv1 = *(&D_8011F334 + temp_a1);
    if (temp_fv1 >= 2.1474836e9f) {
        var_v0 = (s32) (temp_fv1 - 2.1474836e9f) | (s32) (&D_80000000 + 1);
    } else {
        var_v0 = (s32) temp_fv1 + 1;
    }
    *(&D_8011F334 + temp_a1) = (f32) (var_v0 & 0xFFFF);
    temp_fv1_2 = *(&D_8011F334 + ((arg0 & 0xFFFF) * 0x64));
    if (temp_fv1_2 >= 2.1474836e9f) {
        var_v0_2 = ((s32) (temp_fv1_2 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
    } else {
        var_v0_2 = (s32) temp_fv1_2 & 0xFFFF;
    }
    if (var_v0_2 >= 0xBU) {
        temp_v0 = (arg0 & 0xFFFF) * 0x64;
        *(&D_8011F334 + temp_v0) = 0;
        temp_fv1_3 = *(&D_8011F338 + temp_v0);
        if (temp_fv1_3 >= 2.1474836e9f) {
            var_v0_3 = (s32) (temp_fv1_3 - 2.1474836e9f) | (s32) (&D_80000000 + 1);
        } else {
            var_v0_3 = (s32) temp_fv1_3 + 1;
        }
        *(&D_8011F338 + temp_v0) = (f32) (var_v0_3 & 0xFFFF);
        temp_fv1_4 = *(&D_8011F338 + ((arg0 & 0xFFFF) * 0x64));
        if (temp_fv1_4 >= 2.1474836e9f) {
            var_v0_4 = ((s32) (temp_fv1_4 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
        } else {
            var_v0_4 = (s32) temp_fv1_4 & 0xFFFF;
        }
        if (var_v0_4 >= 9U) {
            *(&D_8011F338 + ((arg0 & 0xFFFF) * 0x64)) = 0;
        }
    }
}
