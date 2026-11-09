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

f32 func_80032310(f32, s32, s32, s32, M2C_UNK *);   /* extern */
M2C_UNK func_80129C1C(M2C_UNK *, s32, s32, s32, s32, f32, s32); /* extern */
f32 func_801F9AC0(f32);                             /* extern */
f32 func_801F9C8C(f32, f32);                        /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2F2;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F314;
extern M2C_UNK D_8011F318;
extern M2C_UNK D_8011F31C;
extern M2C_UNK D_8011F320;
extern M2C_UNK D_8011F328;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F338;
extern M2C_UNK D_8011F33C;
extern M2C_UNK D_8022AF40;

void func_8013835C(s32 arg0) {
    union {
        unsigned char bytes[136];
        struct { unsigned char pad[32]; M2C_UNK value; } view_sp20;
        struct { unsigned char pad[33]; u8 value; } view_sp21;
        struct { unsigned char pad[36]; u16 value; } view_sp24;
        struct { unsigned char pad[44]; f32 value; } view_sp2C;
        struct { unsigned char pad[52]; f32 value; } view_sp34;
        struct { unsigned char pad[56]; f32 value; } view_sp38;
        struct { unsigned char pad[60]; f32 value; } view_sp3C;
    } m2c_initial_frame;

                 
             
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    f32 temp_fv1_6;
    f32 temp_fv1_7;
    f32 temp_fv1_8;
    f32 temp_fv1_9;
    f32 var_fv0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    u16 *temp_v0;

    temp_v1 = (arg0 & 0xFFFF) * 0x64;
    m2c_initial_frame.view_sp24.value = *(&D_8022AF40 + ((s32) *(&D_8011F338 + temp_v1) * 0x8F0));
    temp_fv1 = *(&D_8011F334 + temp_v1);
    if (temp_fv1 >= 2.1474836e9f) {
        var_v1 = ((s32) (temp_fv1 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
    } else {
        var_v1 = (s32) temp_fv1 & 0xFFFF;
    }
    temp_fv1_2 = *(&D_8011F334 + ((arg0 & 0xFFFF) * 0x64));
    if (temp_fv1_2 >= 2.1474836e9f) {
        var_v1_2 = ((s32) (temp_fv1_2 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
    } else {
        var_v1_2 = (s32) temp_fv1_2 & 0xFFFF;
    }
    temp_fv1_3 = *(&D_8011F334 + ((arg0 & 0xFFFF) * 0x64));
    if (temp_fv1_3 >= 2.1474836e9f) {
        var_v1_3 = ((s32) (temp_fv1_3 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
    } else {
        var_v1_3 = (s32) temp_fv1_3 & 0xFFFF;
    }
    func_80129C1C(&m2c_initial_frame.view_sp20.value, *(&D_8011F308 + (var_v1 * 0x64)), *(&D_8011F30C + (var_v1_2 * 0x64)), *(&D_8011F310 + (var_v1_3 * 0x64)), 0, -40.0f, 0);
    temp_a1 = (arg0 & 0xFFFF) * 0x64;
    temp_fv1_4 = *(&D_8011F334 + temp_a1);
    if (temp_fv1_4 >= 2.1474836e9f) {
        var_v1_4 = ((s32) (temp_fv1_4 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
    } else {
        var_v1_4 = (s32) temp_fv1_4 & 0xFFFF;
    }
    *(&D_8011F308 + temp_a1) = *(&D_8011F308 + (var_v1_4 * 0x64)) + 0.5f;
    temp_a1_2 = (arg0 & 0xFFFF) * 0x64;
    temp_fv1_5 = *(&D_8011F334 + temp_a1_2);
    if (temp_fv1_5 >= 2.1474836e9f) {
        var_v1_5 = ((s32) (temp_fv1_5 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
    } else {
        var_v1_5 = (s32) temp_fv1_5 & 0xFFFF;
    }
    *(&D_8011F310 + temp_a1_2) = *(&D_8011F310 + (var_v1_5 * 0x64)) - 0.5f;
    var_a0 = 0;
    if (m2c_initial_frame.view_sp21.value != 0) {
        temp_a2 = (arg0 & 0xFFFF) * 0x64;
        var_v0 = 0 * 2;
        do {
            temp_fv1_6 = *(&D_8011F334 + temp_a2);
            if (!(temp_fv1_6 >= 2.1474836e9f)) {
                var_v1_6 = (s32) temp_fv1_6 & 0xFFFF;
            } else {
                var_v1_6 = ((s32) (temp_fv1_6 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
            }
            *(var_v0 + (temp_a2 + &D_8011F2F2)) = *((var_a0 * 2) + ((var_v1_6 * 0x64) + &D_8011F2F2));
            var_a0 += 1;
            var_v0 = var_a0 * 2;
        } while (var_a0 < 4);
        temp_v1_2 = (arg0 & 0xFFFF) * 0x64;
        *(&D_8011F30C + temp_v1_2) = m2c_initial_frame.view_sp2C.value;
        temp_fv1_7 = *(&D_8011F334 + temp_v1_2);
        if (temp_fv1_7 >= 2.1474836e9f) {
            var_a0_2 = (s32) (temp_fv1_7 - 2.1474836e9f) | 0x80000000;
            var_v1_7 = var_a0_2 & 0xFFFF;
        } else {
            var_a0_2 = (s32) temp_fv1_7;
            var_v1_7 = var_a0_2 & 0xFFFF;
        }
        *(&D_8011F318 + temp_v1_2) = *(&D_8011F318 + (var_v1_7 * 0x64));
        temp_fs0 = -m2c_initial_frame.view_sp34.value;
        temp_fa0 = 1.0f - (temp_fs0 * temp_fs0);
        var_fv0 = sqrtf(temp_fa0);
        if (var_fv0 != var_fv0) {
            var_fv0 = func_80032310(temp_fa0, var_a0_2, temp_v1_2, temp_a2, &D_8011F2F2);
        }
        temp_s0 = (arg0 & 0xFFFF) * 0x64;
        *(&D_8011F31C + temp_s0) = (func_801F9AC0(temp_fs0 / var_fv0) * 360.0f) / 6.28f;
        *(&D_8011F314 + temp_s0) = (func_801F9C8C(m2c_initial_frame.view_sp3C.value, m2c_initial_frame.view_sp38.value) * 360.0f) / 6.28f;
        temp_fv1_8 = *(&D_8011F334 + temp_s0);
        if (!(temp_fv1_8 >= 2.1474836e9f)) {
            var_v0_2 = (s32) temp_fv1_8 & 0xFFFF;
        } else {
            var_v0_2 = ((s32) (temp_fv1_8 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
        }
        temp_fv0 = ((40.0f - (*(&D_8011F30C + (var_v0_2 * 0x64)) - *(&D_8011F30C + ((arg0 & 0xFFFF) * 0x64)))) / 40.0f) * *(&D_8011F33C + temp_s0);
        M2C_FIELD((temp_s0 + &D_8011F2F0), f32 *, 0x38) = temp_fv0;
        *(&D_8011F320 + temp_s0) = temp_fv0;
        return;
    }
    var_v0_3 = 0 * 2;
    do {
        temp_v0 = var_v0_3 + (((arg0 & 0xFFFF) * 0x64) + &D_8011F2F2);
        *temp_v0 |= 0x20;
        var_a0 += 1;
        var_v0_3 = var_a0 * 2;
    } while (var_a0 < 4);
    temp_a1_3 = (arg0 & 0xFFFF) * 0x64;
    temp_fv1_9 = *(&D_8011F334 + temp_a1_3);
    if (temp_fv1_9 >= 2.1474836e9f) {
        var_v1_8 = ((s32) (temp_fv1_9 - 2.1474836e9f) | 0x80000000) & 0xFFFF;
    } else {
        var_v1_8 = (s32) temp_fv1_9 & 0xFFFF;
    }
    *(&D_8011F30C + temp_a1_3) = *(&D_8011F30C + (var_v1_8 * 0x64));
    temp_v0_2 = (arg0 & 0xFFFF) * 0x64;
    temp_fv0_2 = *(&D_8011F33C + temp_v0_2);
    *(&D_8011F328 + temp_v0_2) = temp_fv0_2;
    *(&D_8011F320 + temp_v0_2) = temp_fv0_2;
}
