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
extern s8 D_80126FF7;

void func_8014D0A8(void **arg0, s32 arg1) {
    void *temp_a2;
    void *temp_v1;

    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xB6000000;
    M2C_FIELD(temp_v1, s32 *, 4) = 0x2000;
    temp_a2 = *arg0;
    *arg0 = temp_a2 + 8;
    M2C_FIELD(temp_a2, s32 *, 0) = 0xFA000000;
    M2C_FIELD(temp_a2, s32 *, 4) = (s32) (*(D_8011F2FC + ((arg1 & 0xFFFF) * 0x64)) | 0xFFFF6400);
    D_80126FF7 = 0xFF;
}
