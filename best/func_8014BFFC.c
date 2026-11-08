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

extern M2C_UNK D_8018A3B8;
extern M2C_UNK D_8018D3A0;
extern s16 D_8021E1A2;

void func_8014BFFC(void) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;

    var_a1 = D_8021E1A2 + 1;
    if ((var_a1 != 4) && (var_a1 < 4)) {
        do {
            var_a0 = 0;
            temp_v0 = var_a1 << 5;
            var_v0 = 0 * 4;
loop_4:
            *(var_v0 + (temp_v0 + &D_8018D3A0)) = *(var_v0 + (temp_v0 + &D_8018A3B8));
            var_a0 += 1;
            var_v0 = var_a0 * 4;
            if (var_a0 < 8) {
                goto loop_4;
            }
            var_a1 += 1;
        } while (var_a1 < 4);
    }
}
