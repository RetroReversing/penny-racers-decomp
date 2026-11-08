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

s32 func_80035C90();

void func_80035BE4(void *arg0, s32 arg1, s32 arg2) {
int __repair_literal;

    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_s1;
    void *var_s0;

    if (M2C_FIELD(arg0, u8 *, 2) == 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(arg0, u8 *, 2) = 1U;
        if (temp_a0 != 0) {
            temp_a0_2 = temp_a0 + arg1;
            M2C_FIELD(arg0, s32 *, 8) = temp_a0_2;
            func_80035C90(temp_a0_2);
        }
        var_s1 = 0;
__repair_literal = 0;

        if (M2C_FIELD(arg0, s16 *, 0) > __repair_literal) {
            var_s0 = arg0;
            __repair_rows: {
                temp_a0_3 = M2C_FIELD(var_s0, s32 *, 0xC) + arg1;
                M2C_FIELD(var_s0, s32 *, 0xC) = temp_a0_3;
                if (temp_a0_3 != 0) {
                    func_80035C90(temp_a0_3, arg1, arg2);
                }
                var_s1 += 1;
                var_s0 += 4;
            }
if (var_s1 < M2C_FIELD(arg0, s16 *, 0)) goto __repair_rows;
        }
    }
}
