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

s32 func_80028100();
s32 func_8002C410();
s32 n_alSndpStop();
extern s8 D_80046C3C;
extern char D_8006FB38[];

void func_80028070(s16 arg0, s32 arg1) {
    switch (arg0) {                                 /* irregular */
    case 2:
        func_80028100(0, 0x1C);
        func_80028100(1, 0x1C);
        n_alSndpStop();
        return;
    case 1:
        if (arg1 == 0x1C) {
            func_8002C410(&D_8006FB38);
            func_8002C410(D_8006FB38 + 0x184);
            D_80046C3C = 0;
        }
        return;
    }
}
