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

void func_8013EA90(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_a1;
    s16 var_t0;
    s16 var_t1;
    s16 var_v1;

    temp_a1 = M2C_FIELD(arg0, u8 *, 0x17) + arg1;
    var_t1 = temp_a1;
    var_v1 = M2C_FIELD(arg0, u8 *, 0x18) + arg2;
    var_t0 = M2C_FIELD(arg0, u8 *, 0x19) + arg3;
    if (temp_a1 & 0x8000) {
        var_t1 = 0;
    } else if (var_t1 >= 0x100) {
        var_t1 = 0xFF;
    }
    if (var_v1 & 0x8000) {
        var_v1 = 0;
    } else if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
    }
    if (var_t0 & 0x8000) {
        var_t0 = 0;
    } else if (var_t0 >= 0x100) {
        var_t0 = 0xFF;
    }
    M2C_FIELD(arg0, u8 *, 0x17) = (u8) var_t1;
    M2C_FIELD(arg0, u8 *, 0x18) = (u8) var_v1;
    M2C_FIELD(arg0, u8 *, 0x19) = (u8) var_t0;
}
