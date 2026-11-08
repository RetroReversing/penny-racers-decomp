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
extern u16 D_80233EC0;

void func_8013AE60(s32 arg0) {
    s32 temp_a0;
    s32 temp_a3;
    s32 var_a1;
    u16 *var_v1;
    u16 var_v0;
    void *temp_a2;

    var_a1 = 0;
    temp_a3 = (arg0 & 0xFFFF) * 0x64;
    temp_a2 = (char *)(temp_a3); temp_a2 += (s32)(&D_8011F2F2);
    __repair_rows: {
        temp_a0 = var_a1 * 2;
        var_v1 = temp_a0 + temp_a2;
        if (*(temp_a0 + (((D_80233EC0 + *(&D_8011F2F0 + temp_a3)) * 0x64) + &D_8011F2F2)) & 8) {
            var_v0 = *var_v1 | 8;
        } else {
            var_v1 = (var_a1 * 2) + temp_a2;
            var_v0 = *var_v1 & 0xFFF7;
        }
        *var_v1 = var_v0;
        var_a1 += 1;
    }
if (var_a1 < 4) goto __repair_rows;
}
