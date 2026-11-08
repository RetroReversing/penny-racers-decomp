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
extern char D_8011F2FD[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F320[];
extern char D_8011F324[];
extern char D_8011F328[];
extern char D_8011F334[];
extern char D_8011F338[];
extern char D_8011F33C[];

void func_8013AF08(s32 arg0) {
    s32 temp_v1;

    temp_v1 = (arg0 & 0xFFFF) * 0x64;
    if ((u8) *(D_8011F2FC + temp_v1) >= 0x33U) {
        *(D_8011F320 + temp_v1) = *(D_8011F320 + temp_v1) + 0.01f;
        *(D_8011F324 + temp_v1) = *(D_8011F324 + temp_v1) + 0.01f;
        *(D_8011F328 + temp_v1) = *(D_8011F328 + temp_v1) + 0.01f;
        *(D_8011F2FC + temp_v1) = *(D_8011F2FC + temp_v1) - 8;
        *(D_8011F308 + temp_v1) = *(D_8011F308 + temp_v1) + *(D_8011F334 + temp_v1);
        *(D_8011F30C + temp_v1) = *(D_8011F30C + temp_v1) + *(D_8011F338 + temp_v1);
        *(D_8011F310 + temp_v1) = *(D_8011F310 + temp_v1) + *(D_8011F33C + temp_v1);
        *(D_8011F334 + temp_v1) = *(D_8011F334 + temp_v1) * 0.95f;
        *(D_8011F338 + temp_v1) = *(D_8011F338 + temp_v1) * 0.6f;
        *(D_8011F33C + temp_v1) = *(D_8011F33C + temp_v1) * 0.95f;
        return;
    }
    *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
}
