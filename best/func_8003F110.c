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

s32 func_80034640(s32);                             /* extern */
M2C_UNK func_800346B0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_8003F0A0();                                /* extern */
extern s32 D_A4040000;

s32 func_8003F110(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_v1;
    s32 var_v0;
    s32 var_v0_2;

    if (arg1 & 7) {
        func_800346B0("EX", "sprawdma.c", 0x3A);
    }
    var_v0_2 = arg3 & 7;
    if (arg2 & 7) {
        func_800346B0("EX", "sprawdma.c", 0x3B);
        var_v0_2 = arg3 & 7;
    }
    if (var_v0_2 != 0) {
        func_800346B0("EX", "sprawdma.c", 0x3C);
    }
    var_v0 = -1;
    if (func_8003F0A0() == 0) {
        D_A4040000 = arg1;
        *(s32 *)0xA4040004 = func_80034640(arg2);
        if (arg0 == 0) {
            var_v1 = (s32 *)0xA404000C;
        } else {
            var_v1 = (s32 *)0xA4040008;
        }
        *var_v1 = arg3 - 1;
        var_v0 = 0;
    }
    return var_v0;
}
