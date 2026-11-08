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

M2C_UNK func_8003DE60(M2C_UNK *, s32, u16, M2C_UNK); /* extern */
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F340;
extern M2C_UNK D_8012AA38;

s32 func_8012913C(u16 arg0, f32 arg1, f32 arg3) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_a2;
    u16 var_s0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    var_s0 = arg0;
    temp_a2 = var_s0;
    var_a1 = 0;
    var_v1 = var_s0 & 0xFFFF;
loop_1:
    temp_a0 = var_v1 * 0x64;
    temp_v1 = M2C_FIELD(M2C_FIELD(M2C_FIELD(*(&D_8011F340 + temp_a0), void **, 4), void **, 4), void **, 4);
    temp_fv1 = *(&D_8011F308 + temp_a0);
    var_v0 = var_a1 & 0xFFFF;
    if (!(arg1 < ((f32) M2C_FIELD(temp_v1, s16 *, 0x40) + temp_fv1)) || (var_v0 = var_a1 & 0xFFFF, !(((f32) M2C_FIELD(temp_v1, s16 *, 0x50) + temp_fv1) < arg1)) || (temp_fv1_2 = *(&D_8011F310 + temp_a0), var_v0 = var_a1 & 0xFFFF, !(arg3 < ((f32) M2C_FIELD(temp_v1, s16 *, 0x44) + temp_fv1_2))) || (var_v0 = var_a1 & 0xFFFF, !(((f32) M2C_FIELD(temp_v1, s16 *, 0x54) + temp_fv1_2) < arg3))) {
        temp_v0 = var_s0 & 0xFFFF;
        if (var_v0 == 0) {
            temp_v1_2 = *(&D_8011F340 + (temp_v0 * 0x64));
            if (M2C_FIELD(temp_v1_2, u16 *, 0xA) != 0xFFFF) {
                var_s0 = M2C_FIELD(temp_v1_2, u16 *, 0xA);
                var_v1_2 = var_s0 & 0xFFFF;
            } else {
                var_s0 = M2C_FIELD(*(&D_8011F340 + ((var_s0 & 0xFFFF) * 0x64)), u16 *, 0xE);
                var_a1 = 1;
                goto block_12;
            }
        } else {
            temp_v1_3 = *(&D_8011F340 + (temp_v0 * 0x64));
            if (M2C_FIELD(temp_v1_3, u16 *, 0xE) != 0xFFFF) {
                var_s0 = M2C_FIELD(temp_v1_3, u16 *, 0xE);
                var_v1_2 = var_s0 & 0xFFFF;
            } else {
                var_s0 = M2C_FIELD(*(&D_8011F340 + ((var_s0 & 0xFFFF) * 0x64)), u16 *, 0xA);
                var_a1 = 0;
block_12:
                var_v1_2 = var_s0 & 0xFFFF;
            }
        }
        var_v1 = var_s0 & 0xFFFF;
        if (var_v1_2 == (temp_a2 & 0xFFFF)) {
            var_s0 = temp_a2;
            func_8003DE60(&D_8012AA38, var_a1, temp_a2, 0xFFFF);
        } else {
            goto loop_1;
        }
    }
    return var_s0 & 0xFFFF;
}
