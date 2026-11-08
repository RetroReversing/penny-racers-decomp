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

void *func_80032280();                              /* extern */
extern void *D_80046DF4;

void *func_8002FE20(void) {
    void *temp_v0;
    void *temp_v1;

    temp_v0 = func_80032280();
    M2C_FIELD(temp_v0, s32 *, 0) = 0x0D000000;
    temp_v1 = temp_v0 + 8;
    M2C_FIELD(temp_v0, s32 *, 8) = 0x062E0000;
    M2C_FIELD(temp_v1, s32 *, 4) = (s32) M2C_FIELD(D_80046DF4, s32 *, 0x54);
    return temp_v1 + 8;
}
