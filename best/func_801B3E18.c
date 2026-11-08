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

extern char D_8011F2F0[];
extern char D_8011F2FC[];

void func_801B3E18(s32 arg0) {
    s32 temp_a0;
    s32 var_v1;
    s8 var_v0;

    var_v1 = (arg0 & 0xFFFF) * 0x64;
    if ((u8) *(D_8011F2F0 + var_v1) >= 0x1EU) {
        var_v1 = (arg0 & 0xFFFF) * 0x64;
        if ((u32) (*(D_8011F2F0 + var_v1) - 0x1E) < 0x1EU) {
            var_v0 = *(D_8011F2FC + var_v1) + 7;
            goto block_6;
        }
    } else {
        var_v0 = *(D_8011F2FC + var_v1) - 7;
block_6:
        *(D_8011F2FC + var_v1) = var_v0;
    }
    temp_a0 = (arg0 & 0xFFFF) * 0x64;
    *(D_8011F2F0 + temp_a0) = *(D_8011F2F0 + temp_a0) + 1;
    if (*(D_8011F2F0 + temp_a0) == 0x3C) {
        *(D_8011F2F0 + temp_a0) = 0;
    }
}
