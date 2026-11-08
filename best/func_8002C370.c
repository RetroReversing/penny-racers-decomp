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

M2C_UNK func_8002D164(s32, s16 *, M2C_UNK);         /* extern */

void func_8002C370(s32 arg0, s32 arg1, s8 arg2) {
    s16 sp10;
    s32 sp14;
    s8 sp18;
    s8 sp19;
    s8 sp1A;

    sp18 = arg1 | 0xC0;
    sp19 = arg2;
    sp10 = 2;
    sp14 = 0;
    sp1A = 0;
    func_8002D164(arg0 + 0x48, &sp10, 0);
}
