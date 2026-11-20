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

extern char D_801D7DF0[];
extern char D_801D7DF2[];
extern char D_801D7E06[];
extern u8 D_8021F029;

void func_801D651C(s32 arg0, s16 arg1) {
    s32 temp_v0;

    if (D_8021F029 != 0) {
        temp_v0 = arg0 * 0x2C;
        *(u16 *)(D_801D7DF0 + temp_v0) = 1;
        *(u16 *)(D_801D7DF2 + temp_v0) = arg1;
        *(u16 *)(D_801D7E06 + temp_v0) = 0;
    }
}
