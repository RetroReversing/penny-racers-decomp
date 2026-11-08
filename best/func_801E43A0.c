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

extern char D_801E91D4[];
extern char D_801E97CA[];

void func_801E43A0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a3;

    temp_a3 = (arg0 & 0xFF) * 0x30;
    temp_a1 = arg1 & 0xFF;
    *(D_801E97CA + temp_a3) = (*(D_801E97CA + temp_a3) & ~*(D_801E91D4 + (temp_a1 * 2))) | ((arg2 & 0xFF) << (temp_a1 * 4));
}
