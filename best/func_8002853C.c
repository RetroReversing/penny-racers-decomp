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

s32 func_800339C0(s32);                             /* extern */
extern M2C_UNK *D_800DDE88;

void func_8002853C(s32 arg0) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    s32 temp_a0;

    var_s0 = D_800DDE88;
    var_s1 = NULL;
    temp_a0 = func_800339C0(1);
    if (var_s0 != NULL) {
loop_2:
        if (var_s0 != arg0) {
            var_s1 = var_s0;
            var_s0 = *var_s0;
            if (var_s0 != NULL) {
                goto loop_2;
            }
        } else if (var_s1 != NULL) {
            *var_s1 = *var_s0;
        } else {
            D_800DDE88 = *var_s0;
        }
    }
    func_800339C0(temp_a0);
}
