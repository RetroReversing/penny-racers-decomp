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

void func_800316EC(void *arg0, s32 arg1) {
    M2C_UNK *var_a2;
    M2C_UNK *var_v1;
    void *var_v0;

    var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0x64);
    var_a2 = NULL;
    if (var_v1 != NULL) {
        var_v0 = (char *)(var_v1); var_v0 += (s32)(4);
loop_2:
        if (var_v0 == arg1) {
            if (var_a2 != NULL) {
                *var_a2 = *var_v1;
            } else {
                M2C_FIELD(arg0, M2C_UNK **, 0x64) = (M2C_UNK *) *var_v1;
            }
            if (var_v1 == M2C_FIELD(arg0, M2C_UNK **, 0x68)) {
                M2C_FIELD(arg0, M2C_UNK **, 0x68) = var_a2;
            }
            *var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0x6C);
            M2C_FIELD(arg0, M2C_UNK **, 0x6C) = var_v1;
        } else {
            var_a2 = var_v1;
            var_v1 = *var_v1;
            var_v0 = (char *)(var_v1); var_v0 += (s32)(4);
            if (var_v1 == NULL) {

            } else {
                goto loop_2;
            }
        }
    }
}
