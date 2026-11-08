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

s32 func_801E435C(s32, s32);                        /* extern */
extern u8 D_8021B079;
extern u16 D_8021E1AC;

void func_80207DC8(void) {
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;

    D_8021E1AC = 0;
    var_s2 = 0;
    var_s1 = 0;
    do {
        var_s0 = 0;
        var_a0 = 0 & 0xFF;
loop_2:
        if ((u32) (func_801E435C(var_a0, var_s2 & 0xFF) & 0xFF) < 4U) {
            var_s1 += 1;
        }
        var_s0 += 1;
        var_a0 = var_s0 & 0xFF;
        if ((u32) (var_s0 & 0xFF) < 9U) {
            goto loop_2;
        }
        var_s2 += 1;
        if ((var_s1 & 0xFF) == 9) {
            D_8021E1AC += 1;
        }
        var_s1 = 0;
    } while ((u32) (var_s2 & 0xFF) < 4U);
    if ((s16) D_8021E1AC >= 4) {
        D_8021E1AC = 3;
    }
    if (D_8021B079 == 1) {
        D_8021E1AC = 3;
    }
}
