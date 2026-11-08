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

M2C_UNK func_800338B0(s32, M2C_UNK);                /* extern */
s32 func_80034640(s32);                             /* extern */
M2C_UNK func_800346B0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_8003EBF0(s32, M2C_UNK);                /* extern */
s32 func_8003F330();                                /* extern */

s32 func_8003F350(s32 arg0, s32 arg1) {
    s32 *var_v1;
    s32 var_v0;

    if (arg1 & 3) {
        func_800346B0("EX", "sirawdma.c", 0x37);
    }
    var_v0 = -1;
    if (func_8003F330() == 0) {
        if (arg0 == 1) {
            func_8003EBF0(arg1, 0x40);
        }
        *(s32 *)0xA4800000 = func_80034640(arg1);
        if (arg0 != 0) {
            var_v1 = (s32 *)0xA4800010;
        } else {
            var_v1 = (s32 *)0xA4800004;
        }
        *var_v1 = 0x1FC007C0;
        var_v0 = 0;
        if (arg0 == 0) {
            func_800338B0(arg1, 0x40);
            var_v0 = 0;
        }
    }
    return var_v0;
}
