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

M2C_UNK guMtxF2L(M2C_UNK *, s32);              /* extern */
M2C_UNK guMtxIdentF(M2C_UNK *);                   /* extern */

void guTranslate(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    M2C_UNK sp10;
    f32 sp40;
    f32 sp44;
    f32 sp48;

    guMtxIdentF(&sp10);
    sp40 = arg1;
    sp44 = arg2;
    sp48 = arg3;
    guMtxF2L(&sp10, arg0);
}
