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

s32 func_800294A0();
s32 func_80035B50();
s16 *func_80038340();
extern s16 *D_80046C34;
extern s16 *D_80046C38;
extern char D_8006E780[];
extern s32 D_8006FEE4;

void func_80027DF0(s32 arg0, s32 arg1, s32 arg2) {
int __repair_literal;

    s16 *temp_v0;
    s16 *temp_v0_2;
    char *var_a0;
    s32 var_a1;

    temp_v0 = func_80038340(0, 0, &D_8006E780, 1, arg1);
    D_80046C34 = temp_v0;
    func_800294A0(arg0, temp_v0, arg1);
    func_80035B50(D_80046C34, arg2);
    temp_v0_2 = func_80038340(0, 0, &D_8006E780, 1, D_8006FEE4 * 2);
    D_80046C38 = temp_v0_2;
    var_a1 = 0;
__repair_literal = 0;

    if (D_8006FEE4 > __repair_literal) {
        var_a0 = temp_v0_2;
        do {
            *(s16 *)var_a0 = -1;
            var_a1 += 1;
            var_a0 += 2;
        } while (var_a1 < D_8006FEE4);
    }
}
