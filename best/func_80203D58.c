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

extern M2C_UNK D_80071F70;
extern M2C_UNK D_8021B088;
extern M2C_UNK D_8021E1A0;
extern s16 D_8021E1A8;

void func_80203D58(void) {
    s32 var_a0;
    s32 var_v0;

    var_a0 = 0;
    var_v0 = 0 * 2;
    do {
        *(var_v0 + &D_8021E1A0) = *(var_v0 + &D_8021B088);
        var_a0 += 1;
        var_v0 = var_a0 * 2;
    } while (var_a0 < 7);
    D_8021E1A8 = M2C_FIELD(&D_80071F70, u16 *, 2) - 1;
}
