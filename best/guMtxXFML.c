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

M2C_UNK guMtxL2F(M2C_UNK *, s32);              /* extern */
M2C_UNK func_8003DF6C(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void guMtxXFML(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6) {
    M2C_UNK sp20;

    guMtxL2F(&sp20, arg0);
    func_8003DF6C(&sp20, arg1, arg2, arg3, arg4, arg5, arg6);
}
