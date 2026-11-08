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

extern s32 D_80046834;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FC;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_80182E20;
extern f64 D_80183968;
extern M2C_UNK D_80189970;
extern M2C_UNK D_80189DC8;
extern M2C_UNK D_8022AFD4;

void func_8015C560(void **arg0, s32 arg1) {
    f32 temp_ft0;
    s32 temp_a0;
    s32 temp_t2;
    s32 temp_v1_8;
    s32 var_t0;
    s32 var_v0;
    u8 temp_t5;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_9;

    temp_a0 = (arg1 & 0xFFFF) * 0x64;
    if ((*(&D_8011F32E + temp_a0) != 0) && ((temp_t5 = *(&D_8011F2F0 + temp_a0), temp_ft0 = *(&D_8022AFD4 + ((temp_t5 & 0xFF) * 0x8F0)), !(D_80183968 < (f64) temp_ft0)) || ((f64) *(&D_8011F334 + temp_a0) != 0.0))) {
        temp_a0_2 = *arg0;
        *arg0 = temp_a0_2 + 8;
        M2C_FIELD(temp_a0_2, s32 *, 0) = 0xFA000000;
        M2C_FIELD(temp_a0_2, M2C_UNK **, 4) = (M2C_UNK *) *(&D_8011F2FC + ((arg1 & 0xFFFF) * 0x64));
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
        var_t0 = 0;
        temp_t2 = temp_t5 << 6;
        do {
            temp_v1_8 = var_t0 * 0x10;
            temp_v0 = temp_v1_8 + (temp_t2 + ((D_80046834 * 0x1C0) + &D_80189DC8));
            temp_v1_9 = temp_v1_8 + (temp_t2 + &D_80189970);
            M2C_FIELD(temp_v0, s32 *, 0) = (s32) M2C_FIELD(temp_v1_9, s32 *, 0);
            M2C_FIELD(temp_v0, s32 *, 4) = (s32) M2C_FIELD(temp_v1_9, s32 *, 4);
            M2C_FIELD(temp_v0, s32 *, 8) = (s32) M2C_FIELD(temp_v1_9, s32 *, 8);
            M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) M2C_FIELD(temp_v1_9, s32 *, 0xC);
            var_t0 += 1;
        } while (var_t0 < 4);
        temp_a1 = *arg0;
        *arg0 = temp_a1 + 8;
        M2C_FIELD(temp_a1, s32 *, 0) = 0x0400103F;
        M2C_FIELD(temp_a1, M2C_UNK **, 4) = (M2C_UNK *) ((D_80046834 * 0x1C0) + ((temp_t5 << 6) + &D_80189DC8));
        if (temp_ft0 >= 0.0f) {
            temp_v1_10 = *arg0;
            *arg0 = temp_v1_10 + 8;
            M2C_FIELD(temp_v1_10, s32 *, 0) = 0xB1000204;
            var_v0 = 0x20604;
        } else {
            temp_v1_11 = *arg0;
            *arg0 = temp_v1_11 + 8;
            M2C_FIELD(temp_v1_11, s32 *, 0) = 0xB1000402;
            var_v0 = 0x20406;
        }
        M2C_FIELD(*arg0, s32 *, 4) = var_v0;
    }
}
