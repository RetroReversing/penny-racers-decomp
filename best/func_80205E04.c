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

extern f32 D_8021B09C;
extern u8 D_8021B0A0;
extern f64 D_8021DBB0;

void func_80205E04(f32 *arg0, f32 arg1, s32 arg2) {
    if (!(arg2 & 0xFF)) {
        D_8021B0A0 = 0;
    }
    switch (D_8021B0A0) {                           /* irregular */
    case 0:
        *arg0 = arg1;
        D_8021B09C = -2.0f;
        D_8021B0A0 = 1;
        return;
    case 1:
        *arg0 += D_8021B09C;
        D_8021B09C = (f32) ((f64) D_8021B09C + D_8021DBB0);
        if (arg1 < *arg0) {
            D_8021B0A0 = 0;
        }
        return;
    }
}
