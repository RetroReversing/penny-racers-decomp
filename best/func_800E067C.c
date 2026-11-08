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

extern f64 D_800E1E70;
extern M2C_UNK D_8011F2F1;
extern M2C_UNK D_8011F300;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F338;
extern M2C_UNK D_8011F33C;
extern M2C_UNK D_8011F340;
extern u16 D_80233EC0;
extern u16 func_800E1850;

void func_800E067C(void) {
    s16 temp_v1_2;
    s16 temp_v1_4;
    s16 temp_v1_6;
    s32 temp_a0;
    s32 temp_v0_3;
    s32 var_v0;
    s32 var_v1;
    u16 var_a1;
    u32 temp_v0_4;
    void *temp_v0;
    void *temp_v0_2;
    
    void *temp_v1_3;
    void *temp_v1_5;

    var_a1 = func_800E1850;
    var_v0 = var_a1 & 0xFFFF;
loop_1:
    temp_a0 = var_v0 * 0x64;
    var_v1 = var_a1 & 0xFFFF;
    if (*(&D_8011F2F1 + temp_a0) == 2) {
        temp_v0 = M2C_FIELD(*(&D_8011F340 + temp_a0), void **, 4);
        if ((temp_v0 != NULL) && (temp_v0_2 = M2C_FIELD(temp_v0, void **, 4), (temp_v0_2 != NULL))) {
            temp_v0 = M2C_FIELD(temp_v0_2, void **, 4);
            temp_v1_2 = M2C_FIELD(temp_v0, s16 *, 0x50);
            *(&D_8011F334 + temp_a0) = (f32) (((f64) (M2C_FIELD(temp_v0, s16 *, 0x40) - temp_v1_2) * D_800E1E70) + (f64) temp_v1_2 + (f64) *(&D_8011F308 + temp_a0));
            temp_v1_3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(*(&D_8011F340 + temp_a0), void **, 4), void **, 4), void **, 4);
            temp_v1_4 = M2C_FIELD(temp_v1_3, s16 *, 0x52);
            *(&D_8011F338 + temp_a0) = (f32) (((f64) (M2C_FIELD(temp_v1_3, s16 *, 0x42) - temp_v1_4) * D_800E1E70) + (f64) temp_v1_4 + (f64) *(&D_8011F30C + temp_a0));
            temp_v1_5 = M2C_FIELD(M2C_FIELD(M2C_FIELD(*(&D_8011F340 + temp_a0), void **, 4), void **, 4), void **, 4);
            temp_v1_6 = M2C_FIELD(temp_v1_5, s16 *, 0x54);
            *(&D_8011F33C + temp_a0) = (f32) (((f64) (M2C_FIELD(temp_v1_5, s16 *, 0x44) - temp_v1_6) * D_800E1E70) + (f64) temp_v1_6 + (f64) *(&D_8011F310 + temp_a0));
            var_v1 = var_a1 & 0xFFFF;
        } else {
            temp_v0_3 = var_v1 * 0x64;
            *(&D_8011F334 + temp_v0_3) = *(&D_8011F308 + temp_v0_3);
            *(&D_8011F338 + temp_v0_3) = *(&D_8011F30C + temp_v0_3);
            *(&D_8011F33C + temp_v0_3) = *(&D_8011F310 + temp_v0_3);
            var_v1 = var_a1 & 0xFFFF;
        }
    }
    var_a1 = *(&D_8011F300 + (var_v1 * 0x64));
    temp_v0_4 = var_a1 & 0xFFFF;
    if (temp_v0_4 != 0xFFFF) {
        var_v0 = var_a1 & 0xFFFF;
        if (temp_v0_4 >= (u16) D_80233EC0) {
            goto loop_1;
        }
    }
}
