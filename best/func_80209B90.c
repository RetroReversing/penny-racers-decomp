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
extern char D_8011F2F2[];
extern char D_8011F2F4[];
extern char D_8011F2F8[];

void func_80209B90(s32 arg0) {
    s32 temp_v1_2;
    s32 var_v1;
    u8 temp_v1;

    temp_v1 = *(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0:
        var_v1 = (arg0 & 0xFFFF) * 0x64;
        *(D_8011F2F4 + var_v1) = *(D_8011F2F4 + var_v1) | 0x20;
        *(D_8011F2F4 + 2 + var_v1) = *(D_8011F2F4 + 2 + var_v1) | 0x20;
block_12:
        *(D_8011F2F8 + var_v1) = *(D_8011F2F8 + var_v1) | 0x20;
        return;
    case 1:
        var_v1 = (arg0 & 0xFFFF) * 0x64;
        *(D_8011F2F2 + var_v1) = *(D_8011F2F2 + var_v1) | 0x20;
        *(D_8011F2F4 + 2 + var_v1) = *(D_8011F2F4 + 2 + var_v1) | 0x20;
        goto block_12;
    case 2:
        var_v1 = (arg0 & 0xFFFF) * 0x64;
        *(D_8011F2F2 + var_v1) = *(D_8011F2F2 + var_v1) | 0x20;
        *(D_8011F2F4 + var_v1) = *(D_8011F2F4 + var_v1) | 0x20;
        goto block_12;
    case 3:
        temp_v1_2 = (arg0 & 0xFFFF) * 0x64;
        *(D_8011F2F2 + temp_v1_2) = *(D_8011F2F2 + temp_v1_2) | 0x20;
        *(D_8011F2F4 + temp_v1_2) = *(D_8011F2F4 + temp_v1_2) | 0x20;
        *(D_8011F2F4 + 2 + temp_v1_2) = *(D_8011F2F4 + 2 + temp_v1_2) | 0x20;
        return;
    }
}
