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
extern s8 D_80126FF7;
extern char D_8021CA30[];
extern char D_8021CA31[];
extern char D_8021CA32[];

void func_80219B58(void **arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a2;
    void *temp_a3;
    void *temp_v1;

    temp_a2 = (arg1 & 0xFFFF) * 0x64;
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xB6000000;
    M2C_FIELD(temp_v1, s32 *, 4) = 0x2000;
    temp_a3 = *arg0;
    *arg0 = temp_a3 + 8;
    M2C_FIELD(temp_a3, s32 *, 0) = 0xFA000000;
    temp_a0 = ((u8) *(D_8011F2F0 + temp_a2) >> 6) * 3;
    M2C_FIELD(temp_a3, s32 *, 4) = (s32) ((*(D_8021CA30 + temp_a0) << 0x18) | (*(D_8021CA31 + temp_a0) << 0x10) | (*(D_8021CA32 + temp_a0) << 8) | *(D_8011F2FC + temp_a2));
    D_80126FF7 = 0xFF;
}
