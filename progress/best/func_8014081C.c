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

s32 func_80129918();
s32 func_8013F44C();
s32 func_801D7028();
extern char D_8011F2F0[];
extern char D_8011F2FD[];
extern char D_8011F340[];
extern char D_8011F350[];

void func_8014081C(s32 arg0) {
    f32 temp_fv1;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    void *temp_s0;
    void *temp_s1;

    temp_s2 = arg0 & 0xFFFF;
    temp_v1 = temp_s2 * 0x64;
    if (*(s32 *)*(D_8011F340 + temp_v1) == 0) {
        temp_s1 = *(D_8011F350 + temp_v1);
        temp_s0 = temp_v1 + D_8011F2F0;
        M2C_FIELD(temp_s1, f32 *, 0xC) -= 0.2f;
        M2C_FIELD(temp_s0, f32 *, 0x18) += M2C_FIELD(temp_s1, f32 *, 8);
        M2C_FIELD(temp_s0, f32 *, 0x20) += M2C_FIELD(temp_s1, f32 *, 0x10);
        func_80129918(temp_s1 + 0x1C, M2C_FIELD(temp_s0, f32 *, 0x18), M2C_FIELD(temp_s0, f32 *, 0x1C), M2C_FIELD(temp_s0, f32 *, 0x20), 0, M2C_FIELD(temp_s1, f32 *, 0xC), 0);
        M2C_FIELD(temp_s0, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s1, f32 *, 0x28);
        if (M2C_FIELD(temp_s1, u8 *, 0x1E) != 0) {
            func_801D7028(temp_s2, 0x19);
            M2C_FIELD(temp_s1, f32 *, 0xC) = (f32) (M2C_FIELD(temp_s1, f32 *, 0xC) * -0.7f);
        }
        var_a0 = arg0 & 0xFFFF;
        if (M2C_FIELD(temp_s0, f32 *, 0x1C) < -200.0f) {
            func_8013E49C(M2C_FIELD(temp_s1, u16 *, 0x76));
            *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
            temp_fv1 = M2C_FIELD(temp_s0, f32 *, 0x44);
            if (temp_fv1 >= 2.1474836e9f) {
                var_v0 = ((s32) (temp_fv1 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
            } else {
                var_v0 = (s32) temp_fv1 & 0xFFFF;
            }
            *(D_8011F2FD + (var_v0 * 0x64)) = 2;
            var_a0 = arg0 & 0xFFFF;
        }
        func_8013F44C(var_a0, temp_s1);
    }
}
