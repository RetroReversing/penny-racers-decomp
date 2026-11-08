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
extern M2C_UNK *D_80092BF8;

void func_80029710(void *arg0) {
    M2C_UNK *var_a0;
    M2C_UNK *var_s1;
    s32 temp_a0;

    var_a0 = D_80092BF8;
    var_s1 = &D_80092BF8;
    if (var_a0 != NULL) {
loop_1:
        if (M2C_FIELD(var_a0, s32 *, 4) == M2C_FIELD(arg0, s32 *, 4)) {
            temp_a0 = func_800339C0(1);
            *var_s1 = M2C_FIELD(arg0, M2C_UNK **, 0);
            M2C_FIELD(arg0, M2C_UNK **, 0) = NULL;
            M2C_FIELD(arg0, s32 *, 4) = 0;
            func_800339C0(temp_a0);
        } else {
            var_s1 = var_a0;
            var_a0 = M2C_FIELD(var_a0, M2C_UNK **, 0);
            if (var_a0 == NULL) {

            } else {
                goto loop_1;
            }
        }
    }
}
