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
M2C_UNK func_800382AC(void *, M2C_UNK *, M2C_UNK *); /* extern */

void func_8002BF4C(s32 arg0, void *arg1) {
    M2C_UNK *temp_a2;
    M2C_UNK *var_a1;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;

    var_a1 = arg0 + 8;
    temp_s0 = func_800339C0(1);
    if (var_a1 != NULL) {
loop_1:
        temp_a2 = *var_a1;
        if (temp_a2 != NULL) {
            temp_a0 = M2C_FIELD(arg1, s32 *, 8);
            temp_v1 = M2C_FIELD(temp_a2, s32 *, 8);
            if (temp_a0 < temp_v1) {
                M2C_FIELD(temp_a2, s32 *, 8) = (s32) (temp_v1 - temp_a0);
                goto block_4;
            }
            M2C_FIELD(arg1, s32 *, 8) = (s32) (temp_a0 - temp_v1);
            var_a1 = *var_a1;
            if (var_a1 != NULL) {
                goto loop_1;
            }
        } else {
block_4:
            func_800382AC(arg1, var_a1, temp_a2);
        }
    }
    func_800339C0(temp_s0);
}
