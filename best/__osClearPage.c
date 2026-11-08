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

s32 func_8003F980();
s32 func_8004077C();

void __osClearPage(void *arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 var_s0;

    M2C_FIELD(arg0, s8 *, 0x65) = arg3;
    var_s0 = 0;
    if (func_8004077C() == 0) {
loop_2:
        if (func_8003F980(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), ((arg1 * 8) + var_s0) & 0xFFFF, arg2, 0) == 0) {/*__repair_loop_weight*/do {do {do {
            var_s0 += 1;} while (0);} while (0);} while (0);
            if (var_s0 < 8) {
                goto loop_2;
            }
        }
        M2C_FIELD(arg0, s8 *, 0x65) = 0;
        func_8004077C(arg0);
    }
}
