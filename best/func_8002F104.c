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

void *func_8002F104(void *arg0, void *arg1, s32 arg2, s32 arg3, u16 arg4, s32 arg5, s32 arg6) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_t0;
    void *temp_a0;
    void *temp_a2;
    void *var_s1;

    var_s1 = arg0;
    if (arg3 > 0) {
        temp_v0 = M2C_FIELD(arg1, s32 (**)(s32, s32, s32), 0x28)(M2C_FIELD(arg1, s32 *, 0x3C), arg3, M2C_FIELD(arg1, s32 *, 0x2C));
        var_t0 = temp_v0 & 7;
        temp_s0 = arg3 + var_t0;
        temp_a2 = var_s1;
        var_s1 += 8;
        M2C_FIELD(temp_a2, s32 *, 0) = (s32) ((((temp_s0 - ((temp_s0 & 7) - 8)) & 0xFFF) << 0xC) | ((arg5 & 0xFFF) | 0x04000000));
        M2C_FIELD(temp_a2, s32 *, 4) = (s32) (temp_v0 - var_t0);
    } else {
        var_t0 = 0;
    }
    temp_a0 = var_s1;
    if (arg6 & 2) {
        var_s1 += 8;
        M2C_FIELD(temp_a0, s32 *, 0) = 0x0F000000;
        M2C_FIELD(temp_a0, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 0x10) & 0x1FFFFFFF);
    }
    M2C_FIELD(var_s1, s32 *, 4) = (s32) ((arg6 << 0x1C) | (((arg2 * 2) & 0xFFF) << 0x10) | (var_t0 << 0xC) | (arg4 & 0xFFF));
    M2C_FIELD(var_s1, s32 *, 0) = (s32) ((M2C_FIELD(arg1, s32 *, 0xC) & 0xFFFFFF) | 0x01000000);
    M2C_FIELD(arg1, s32 *, 0x38) = 0;
    return var_s1 + 8;
}
