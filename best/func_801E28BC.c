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

extern char D_8011F2FD[];
extern char D_8011F32E[];
extern char D_8011F350[];
extern u16 D_801E87E6;
extern u16 D_801E975E;
extern u16 D_801E9778;
extern s16 D_801E977A;
extern s16 D_801E979E;

void func_801E28BC(s32 arg0) {
    s32 temp_v0;
    u16 temp_v1;

    temp_v1 = *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0:
        D_801E979E = 0x19;
        D_801E975E = 0;
        D_801E9778 = 0;
        D_801E977A = 0xA;
        temp_v0 = D_801E87E6 * 0x64;
        M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 0xA) = 0x15;
        M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 0xC) = 0x34;
        M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 0xE) = 0x116;
        M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 0x10) = 0x16;
        M2C_FIELD(*(D_8011F350 + temp_v0), s8 *, 9) = 0x78;
        *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0xA;
        break;
    case 10:
        D_801E9778 += 1;
        if ((u16) D_801E9778 >= 0x259U) {
            *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0x14;
        }
        break;
    case 20:
        *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 4;
        *(D_8011F2FD + (D_801E87E6 * 0x64)) = 4;
        break;
    }
    if ((u16) D_801E975E < 0x20U) {
        D_801E975E += 1;
        return;
    }
    D_801E975E = 0;
}
