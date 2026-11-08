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

s32 func_8002C190(void *);                          /* extern */
M2C_UNK func_8002C1E0(void *);                      /* extern */
M2C_UNK func_8002C3B0(void *, void *);              /* extern */
M2C_UNK func_8002C410(void *);                      /* extern */
M2C_UNK func_8002D320(void *, s32);                 /* extern */
extern M2C_UNK D_8006FB38;
extern M2C_UNK D_8006FCAC;
extern M2C_UNK D_8006FCB4;

void func_80027D00(s32 arg0) {
    s32 temp_s1;
    void *temp_s0;
    void *temp_s2;

    temp_s1 = arg0 * 0x184;
    temp_s2 = temp_s1 + &D_8006FB38;
    if (func_8002C190(temp_s2) == 0) {
        temp_s0 = temp_s1 + (&D_8006FB38 + 0x7C);
        func_8002D320(temp_s0, *(&D_8006FCAC + temp_s1));
        func_8002C3B0(temp_s2, temp_s0);
        func_8002C1E0(temp_s2);
        return;
    }
    func_8002C410(temp_s2);
    *(&D_8006FCB4 + temp_s1) = *(&D_8006FCB4 + temp_s1) | 2;
}
