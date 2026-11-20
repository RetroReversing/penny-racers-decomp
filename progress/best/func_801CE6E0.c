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

M2C_UNK func_801CB74C(s32 *, s32, s32, s32, s32, void *); /* extern */
extern M2C_UNK D_801D596C;

void func_801CE6E0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u32 arg6) {
    M2C_UNK sp18;
    M2C_UNK sp1C;
    M2C_UNK sp20;
    M2C_UNK sp24;
    M2C_UNK sp28;
    s8 sp30;
    s32 sp38;
    s32 var_a0;
    u32 var_t1;
    u8 var_t0;

    var_t1 = arg6;
    var_t0 = arg5;
    sp18 = M2C_UNALIGNED32(M2C_FIELD(&D_801D596C, M2C_UNK *, 0));
    sp1C = M2C_UNALIGNED32(M2C_FIELD(&D_801D596C, M2C_UNK *, 4));
    sp20 = M2C_UNALIGNED32(M2C_FIELD(&D_801D596C, M2C_UNK *, 8));
    sp24 = M2C_UNALIGNED32(M2C_FIELD(&D_801D596C, M2C_UNK *, 0xC));
    sp38 = *arg0;
    var_a0 = 8;
    sp30 = 0;
    do {
        var_a0 -= 1;
        *(&sp28 + var_a0) = *(&sp18 + (var_t1 & 0xF));
        var_t0 -= 1;
        var_t1 = var_t1 >> 4;
    } while (var_t0 & 0xFF);
    func_801CB74C(&sp38, arg1 & 0xFFFF, arg2 & 0xFFFF, arg3 & 0xFFFF, arg4, &sp28 + var_a0);
    *arg0 = sp38;
}
