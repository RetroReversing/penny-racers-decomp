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

extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2F2;
extern M2C_UNK D_8011F300;
extern M2C_UNK D_8011F32E;
extern s8 D_80187CF0;
extern M2C_UNK D_801E9994;
extern M2C_UNK D_801E99C0;
extern u16 func_800E1850;

void func_8015A728(s32 arg0) {
    s16 var_v0_2;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 temp_a1;
    u16 temp_v1;
    u16 var_a1;

    temp_v1 = *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0:
        D_80187CF0 = 0;
        var_v0 = arg0 & 0xFFFF;
block_29:
        var_v1 = var_v0 * 0x64;
        var_v0_2 = 1;
block_30:
        *(&D_8011F32E + var_v1) = var_v0_2;
        return;
    case 1:
        if ((M2C_FIELD(&D_801E99C0, s32 *, 0) == 1) || (M2C_FIELD(&D_801E99C0, s32 *, 0x70) == 1) || (M2C_FIELD(&D_801E99C0, s32 *, 0xE0) == 1) || (M2C_FIELD(&D_801E99C0, s32 *, 0x150) == 1)) {
            var_a1 = func_800E1850;
            if ((var_a1 & 0xFFFF) != 0xFFFF) {
                var_v1_2 = var_a1 & 0xFFFF;
                do {
                    if (var_v1_2 != (arg0 & 0xFFFF)) {
                        temp_v1_2 = var_v1_2 * 0x64;
                        var_v0_3 = var_a1 & 0xFFFF;
                        if (*(&D_8011F2F0 + temp_v1_2) != 0x63) {
                            *(&D_8011F2F2 + temp_v1_2) = *(&D_8011F2F2 + temp_v1_2) | 0x10;
                            goto block_18;
                        }
                    } else {
block_18:
                        var_v0_3 = var_a1 & 0xFFFF;
                    }
                    var_a1 = *(&D_8011F300 + (var_v0_3 * 0x64));
                    var_v1_2 = var_a1 & 0xFFFF;
                } while ((var_a1 & 0xFFFF) != 0xFFFF);
            }
            var_v1 = (arg0 & 0xFFFF) * 0x64;
            var_v0_2 = 2;
            goto block_30;
        }
        break;
    case 2:
        if ((M2C_FIELD(&D_801E9994, s32 *, 0) == 1) || (M2C_FIELD(&D_801E9994, s32 *, 0x70) == 1) || (M2C_FIELD(&D_801E9994, s32 *, 0xE0) == 1) || (M2C_FIELD(&D_801E9994, s32 *, 0x150) == 1)) {
            var_v0 = arg0 & 0xFFFF;
            if ((func_800E1850 & 0xFFFF) != 0xFFFF) {
                var_v1_3 = func_800E1850 & 0xFFFF;
                __repair_rows: {
                    temp_v0 = var_v1_3 * 0x64;
                    *(&D_8011F2F2 + temp_v0) = *(&D_8011F2F2 + temp_v0) & 0xFFEF;
                    temp_a1 = *(&D_8011F300 + temp_v0);
                    var_v1_3 = temp_a1 & 0xFFFF;
                }
if ((temp_a1 & 0xFFFF) != 0xFFFF) goto __repair_rows;
                var_v0 = arg0 & 0xFFFF;
            }
            goto block_29;
        }
        break;
    }
}
