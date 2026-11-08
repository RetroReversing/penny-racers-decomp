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

extern M2C_UNK D_8011F33C;
extern M2C_UNK D_8021CA6C;
extern M2C_UNK D_8021CA6D;
extern M2C_UNK D_8021CA6E;

void func_8021A050(void **arg0, s32 arg1) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    void *temp_v1;

    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xFA000000;
    temp_fv1 = *(&D_8011F33C + ((arg1 & 0xFFFF) * 0x64));
    if (temp_fv1 >= 2.1474836e9f) {
        var_v1 = ((s32) (temp_fv1 - 2.1474836e9f) | 0x80000000) & 0xFF;
    } else {
        var_v1 = (s32) temp_fv1 & 0xFF;
    }
    temp_fv1_2 = *(&D_8011F33C + ((arg1 & 0xFFFF) * 0x64));
    if (temp_fv1_2 >= 2.1474836e9f) {
        var_v1_2 = ((s32) (temp_fv1_2 - 2.1474836e9f) | 0x80000000) & 0xFF;
    } else {
        var_v1_2 = (s32) temp_fv1_2 & 0xFF;
    }
    temp_fv1_3 = *(&D_8011F33C + ((arg1 & 0xFFFF) * 0x64));
    if (temp_fv1_3 >= 2.1474836e9f) {
        var_v1_3 = ((s32) (temp_fv1_3 - 2.1474836e9f) | 0x80000000) & 0xFF;
    } else {
        var_v1_3 = (s32) temp_fv1_3 & 0xFF;
    }
    M2C_FIELD(temp_v1, s32 *, 4) = (s32) ((*(&D_8021CA6C + (var_v1 * 3)) << 0x18) | (*(&D_8021CA6D + (var_v1_2 * 3)) << 0x10) | (*(&D_8021CA6E + (var_v1_3 * 3)) << 8) | 0xFF);
}
