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

void *func_8002E120();
extern void *D_80046DF4;

void *func_8002DB60(s32 arg0, void *arg1) {
int __repair_literal;

    char *var_s1;
    s32 temp_a0;
    s32 var_s0;
    void *temp_s2;
    void *var_a2;

    temp_s2 = M2C_FIELD(D_80046DF4, void **, 0x40);
    M2C_FIELD(arg1, s32 *, 0) = 0x020007C0;
    M2C_FIELD(arg1, s32 *, 4) = 0x2E0;
    var_a2 = arg1 + 8;
    var_s0 = 0;
__repair_literal = 0;

    if (M2C_FIELD(temp_s2, s32 *, 0x14) > __repair_literal) {
        var_s1 = M2C_FIELD(temp_s2, s32 **, 0x1C);
        do {
            temp_a0 = *(s32 *)var_s1;
            var_s1 += 4;
            var_s0 += 1;
            var_a2 = func_8002E120(temp_a0, arg0, var_a2);
        } while (var_s0 < M2C_FIELD(temp_s2, s32 *, 0x14));
    }
    return var_a2;
}
