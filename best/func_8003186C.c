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

M2C_UNK func_800382AC(void *, void *);              /* extern */
M2C_UNK func_800382CC(void *, s32);                 /* extern */

s32 func_8003186C(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a3;
    s32 var_a0;
    s32 var_s2;
    void *temp_v1;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 0x50);
    var_a0 = 0;
    var_s2 = 1;
    if (var_s0 != NULL) {
loop_2:
        temp_a3 = M2C_FIELD(var_s0, s32 *, 8);
        temp_v1 = M2C_FIELD(var_s0, void **, 0);
        var_a0 += temp_a3;
        if ((M2C_FIELD(var_s0, s16 *, 0xC) == 5) && (M2C_FIELD(var_s0, s32 *, 0x10) == arg1)) {
            if (arg2 >= var_a0) {
                var_s2 = 0;
                goto block_11;
            }
            if (temp_v1 != NULL) {
                M2C_FIELD(temp_v1, s32 *, 8) = (s32) (M2C_FIELD(temp_v1, s32 *, 8) + temp_a3);
            }
            func_800382CC(var_s0, temp_a3);
            func_800382AC(var_s0, arg0 + 0x48);
            return 1;
        }
        var_s0 = temp_v1;
        if (var_s0 == NULL) {
            goto block_11;
        }
        goto loop_2;
    }
block_11:
    return var_s2;
}
