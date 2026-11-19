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

s32 func_80205D48(M2C_UNK, M2C_UNK, u8);            /* extern */
extern u8 D_8021B068;
extern u8 D_8021B084;
extern s32 D_8021B308;

void func_8020C994(void) {
    s32 var_v0;

    var_v0 = 0x14;
    if (D_8021B068 == 0) {
        var_v0 = func_80205D48(0x41A00000, 0x40000000, D_8021B084);
    }
    D_8021B308 = var_v0;
}
