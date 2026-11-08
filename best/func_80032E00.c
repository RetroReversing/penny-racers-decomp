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

M2C_UNK guMtxF2L(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK guMtxL2F(M2C_UNK *, s32);              /* extern */
M2C_UNK func_8003DE90(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */

void func_80032E00(s32 arg0, s32 arg1, M2C_UNK arg2) {
    M2C_UNK sp10;
    M2C_UNK sp50;
    M2C_UNK sp90;

    guMtxL2F(&sp10, arg0);
    guMtxL2F(&sp50, arg1);
    func_8003DE90(&sp10, &sp50, &sp90);
    guMtxF2L(&sp90, arg2);
}
