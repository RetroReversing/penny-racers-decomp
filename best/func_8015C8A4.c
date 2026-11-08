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

extern M2C_UNK D_8011F2FC;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F338;
extern M2C_UNK D_8011F33C;
extern M2C_UNK D_80182E20;
extern M2C_UNK D_8018B530;

void func_8015C8A4(void **arg0, s32 arg1) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a0;
    void *temp_a1;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    var_v1 = arg1 & 0xFFFF;
    temp_fv1 = *(&D_8011F334 + (var_v1 * 0x64));
    if (!(temp_fv1 >= 2.1474836e9f)) {
        var_a0 = (s32) temp_fv1;
        var_v0 = var_v1 * 2;
    } else {
        var_a0 = (s32) (temp_fv1 - 2.1474836e9f) | 0x80000000;
        var_v1 = arg1 & 0xFFFF;
        var_v0 = var_v1 * 2;
    }
    temp_fv1_2 = *(&D_8011F338 + ((((var_v0 + var_v1) * 8) + var_v1) * 4));
    if (!(temp_fv1_2 >= 2.1474836e9f)) {
        var_a2 = (s32) temp_fv1_2;
        var_v1_2 = arg1 & 0xFFFF;
    } else {
        var_a2 = (s32) (temp_fv1_2 - 2.1474836e9f) | 0x80000000;
        var_v1_2 = arg1 & 0xFFFF;
    }
    temp_v0 = var_v1_2 * 0x64;
    temp_a0 = *arg0;
    *arg0 = temp_a0 + 8;
    M2C_FIELD(temp_a0, s32 *, 0) = 0xFA000000;
    M2C_FIELD(temp_a0, M2C_UNK **, 4) = (M2C_UNK *) *(&D_8011F2FC + temp_v0);
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xFD900000;
    M2C_FIELD(temp_v1, M2C_UNK **, 4) = &D_80182E20;
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xF5900000;
    M2C_FIELD(temp_v1_2, M2C_UNK **, 4) = (M2C_UNK *)0x07080200;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0xE6000000;
    M2C_FIELD(temp_v1_3, M2C_UNK **, 4) = NULL;
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    M2C_FIELD(temp_v1_4, s32 *, 0) = 0xF3000000;
    M2C_FIELD(temp_v1_4, M2C_UNK **, 4) = (M2C_UNK *)0x07007400;
    temp_v1_5 = *arg0;
    *arg0 = temp_v1_5 + 8;
    M2C_FIELD(temp_v1_5, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1_5, M2C_UNK **, 4) = NULL;
    temp_v1_6 = *arg0;
    *arg0 = temp_v1_6 + 8;
    M2C_FIELD(temp_v1_6, s32 *, 0) = 0xF5800400;
    M2C_FIELD(temp_v1_6, M2C_UNK **, 4) = (M2C_UNK *)0x80200;
    temp_v1_7 = *arg0;
    *arg0 = temp_v1_7 + 8;
    M2C_FIELD(temp_v1_7, s32 *, 0) = 0xF2000000;
    M2C_FIELD(temp_v1_7, M2C_UNK **, 4) = (M2C_UNK *)0x7C000;
    temp_a1 = *arg0;
    *arg0 = temp_a1 + 8;
    M2C_FIELD(temp_a1, s32 *, 0) = 0x0400103F;
    M2C_FIELD(temp_a1, M2C_UNK **, 4) = (M2C_UNK *) (((var_a0 & 0xFF) << 8) + (((var_a2 & 0xFF) << 6) + &D_8018B530));
    if (*(&D_8011F33C + temp_v0) >= 0.0f) {
        temp_v1_8 = *arg0;
        *arg0 = temp_v1_8 + 8;
        M2C_FIELD(temp_v1_8, s32 *, 0) = 0xB1000204;
        var_v0_2 = 0x20604;
    } else {
        temp_v1_9 = *arg0;
        *arg0 = temp_v1_9 + 8;
        M2C_FIELD(temp_v1_9, s32 *, 0) = 0xB1000402;
        var_v0_2 = 0x20406;
    }
    M2C_FIELD(*arg0, s32 *, 4) = var_v0_2;
}
