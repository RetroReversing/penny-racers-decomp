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

void func_8013EA18(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 var_a2;
    s16 var_a3;
    s16 var_v1;

    var_a2 = arg2;
    var_a3 = arg3;
    var_v1 = arg1;
    if (arg1 & 0x8000) {
        var_v1 = 0;
    } else if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
    }
    if (var_a2 & 0x8000) {
        var_a2 = 0;
    } else if (var_a2 >= 0x100) {
        var_a2 = 0xFF;
    }
    if (var_a3 & 0x8000) {
        var_a3 = 0;
    } else if (var_a3 >= 0x100) {
        var_a3 = 0xFF;
    }
    M2C_FIELD(arg0, s8 *, 0x17) = (s8) var_v1;
    M2C_FIELD(arg0, s8 *, 0x18) = (s8) var_a2;
    M2C_FIELD(arg0, s8 *, 0x19) = (s8) var_a3;
}
