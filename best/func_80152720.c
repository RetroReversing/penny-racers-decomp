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

extern char D_8011F2FC[];
extern char D_8011F32E[];
extern char D_8011F330[];
extern s16 D_802B22D4;

void func_80152720(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;

    temp_v1 = (arg0 & 0xFFFF) * 0x64;
    *(D_8011F32E + temp_v1) = *(D_8011F32E + temp_v1) + 1;
    if ((u16) *(D_8011F32E + temp_v1) >= 0x15U) {
        *(D_8011F32E + temp_v1) = 0;
    }
    temp_v1_2 = (arg0 & 0xFFFF) * 0x64;
    if (*(D_8011F330 + temp_v1_2) == 0) {
        if ((u8) *(D_8011F2FC + temp_v1_2) >= 0x33U) {
            *(D_8011F2FC + temp_v1_2) = *(D_8011F2FC + temp_v1_2) - 0xA;
            var_v0 = arg0 & 0xFFFF;
        } else {
            *(D_8011F330 + ((arg0 & 0xFFFF) * 0x64)) = 1;
            var_v0 = arg0 & 0xFFFF;
        }
    } else {
        temp_v1_3 = (arg0 & 0xFFFF) * 0x64;
        if ((u8) *(D_8011F2FC + temp_v1_3) >= 0xFFU) {
            *(D_8011F330 + ((arg0 & 0xFFFF) * 0x64)) = 0;
            var_v0 = arg0 & 0xFFFF;
        } else {
            *(D_8011F2FC + temp_v1_3) = *(D_8011F2FC + temp_v1_3) + 0xA;
            var_v0 = arg0 & 0xFFFF;
        }
    }
    D_802B22D4 = ((*(D_8011F2FC + (var_v0 * 0x64)) << 8) & 0xF800) | 1;
}
