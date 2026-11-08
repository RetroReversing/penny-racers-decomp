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

s32 func_80034640();

void *_n_loadBuffer(void *arg0, u32 arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_v1;
    u32 temp_a1;
    u32 temp_s0;
    u32 temp_v0;
    u32 var_a0;
    void *temp_s4;
    void *var_s2;
    void *var_s4;

    var_a0 = arg1;
    temp_v0 = M2C_FIELD(arg0, u32 *, 0x14);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1C) * 2;
    temp_a1 = temp_v0 + temp_v1;
    var_s2 = arg4;
    if (var_a0 < temp_v0) {
        var_a0 += temp_v1;
    }
    temp_a3 = arg3 * 2;
    temp_s0 = var_a0 + temp_a3;
    if (temp_a1 < temp_s0) {
        temp_s4 = arg4 + 8;
        temp_s1 = ((s32) (temp_a1 - var_a0) >> 1) * 2;
        M2C_FIELD(var_s2, s32 *, 0) = (s32) (((temp_s1 & 0xFFF) << 0xC) | ((arg2 & 0xFFF) | 0x04000000));
        M2C_FIELD(var_s2, s32 *, 4) = func_80034640(var_a0, temp_a1, temp_a3);
        var_s2 = temp_s4;
        M2C_FIELD(arg4, s32 *, 8) = (s32) ((((((s32) (temp_s0 - temp_a1) >> 1) * 2) & 0xFFF) << 0xC) | (((arg2 + temp_s1) & 0xFFF) | 0x04000000));
        var_a0 = M2C_FIELD(arg0, u32 *, 0x14);
        var_s4 = temp_s4 + 8;
    } else {
        var_s4 = arg4 + 8;
        M2C_FIELD(var_s2, s32 *, 0) = (s32) (((temp_a3 & 0xFFF) << 0xC) | ((arg2 & 0xFFF) | 0x04000000));
    }
    M2C_FIELD(var_s2, s32 *, 4) = func_80034640(var_a0);
    return var_s4;
}
