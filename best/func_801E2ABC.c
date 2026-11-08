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

s32 func_801CA140();
s32 func_801CAD00();
extern u16 D_80046820;
extern char D_8011F32E[];
extern char D_801CF4C8[];
extern char D_801D4390[];
extern char D_801E86E4[];
extern u16 D_801E975E;
extern u16 D_801E977A;
extern u16 D_801E979E;

void func_801E2ABC(s32 arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg1 & 0xFFFF;
    if ((*(D_8011F32E + (temp_a1 * 0x64)) != 0) && ((u16) D_801E975E < 0x10U)) {
        func_801CA140(arg0, temp_a1);
        func_801CAD00(arg0, D_801E979E, 0x38, D_801E977A, &D_801D4390, M2C_FIELD(*(D_801E86E4 + (D_80046820 * 4)), s32 *, 0x50), 0, &D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1C, 0xE);
    }
}
