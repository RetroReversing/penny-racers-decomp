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

M2C_UNK func_800E0A00(M2C_UNK, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_8011F068;
extern M2C_UNK D_8011F2F0;
extern u16 func_800E1850;

void func_800E15CC(void) {
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    u16 var_a1;
    void *temp_v1;

    var_a0 = 0;
    var_a1 = func_800E1850;
    var_v0 = var_a1 & 0xFFFF;
    var_v1 = var_v0 * 2;
    do {
        temp_v1 = (char *)(((((var_v1 + var_v0) * 8) + var_v0) * 4)); temp_v1 += (s32)(&D_8011F2F0);
        if ((M2C_FIELD(temp_v1, s32 *, 0x54) != 0) && (M2C_FIELD(temp_v1, u8 *, 0xD) == 0)) {
            *(((var_a0 & 0xFFFF) * 2) + &D_8011F068) = var_a1;
            var_a0 += 1;
        }
        var_a1 = M2C_FIELD(temp_v1, u16 *, 0x10);
        var_v0 = var_a1 & 0xFFFF;
        var_v1 = var_v0 * 2;
    } while (var_v0 != 0xFFFF);
    temp_a0 = var_a0 & 0xFFFF;
    *(&D_8011F068 + (temp_a0 * 2)) = 0xFFFF;
    temp_a1 = temp_a0 - 1;
    if (temp_a1 > 0) {
        func_800E0A00(0, temp_a1, &D_8011F068, &D_8011F068);
    }
}
