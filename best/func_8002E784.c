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

u16 func_8002E9A4(f64, f64, s32, s32, void *);      /* extern */
void *n_alResamplePull(void *, u16 *, void *, s32);    /* extern */
s32 func_80034640(s32);                             /* extern */
extern M2C_UNK D_80046F90;

void *func_8002E784(void *arg0, u16 *arg1, s32 arg3, void *arg4) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    void *temp_s2;
    void *temp_s2_2;
    void *var_s0;
    void *var_s2;

    temp_a3 = arg3 == 0;
    if (((M2C_FIELD(arg0, s32 *, 0x84) != 1) | temp_a3) != 0) {
        return arg4;
    }
    var_s2 = n_alResamplePull(arg0, arg1, arg4, temp_a3);
    if (M2C_FIELD(arg0, s32 *, 0x78) != 0) {
        M2C_FIELD(arg0, s32 *, 0x78) = 0;
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x74);
        temp_v1 = (s32) (M2C_FIELD(arg0, s16 *, 0x5A) * *(&D_80046F90 + (M2C_FIELD(arg0, s16 *, 0x58) * 2))) >> 0xF;
        M2C_FIELD(arg0, u16 *, 0x68) = (u16) temp_v1;
        M2C_FIELD(arg0, u16 *, 0x66) = func_8002E9A4((f64) M2C_FIELD(arg0, s16 *, 0x5C), (f64) (s16) temp_v1, temp_a0, temp_a0, arg0 + 0x64);
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x74);
        temp_v1_2 = (s32) (M2C_FIELD(arg0, s16 *, 0x5A) * *(&D_80046F90 + ((0x7F - M2C_FIELD(arg0, s16 *, 0x58)) * 2))) >> 0xF;
        M2C_FIELD(arg0, u16 *, 0x6E) = (u16) temp_v1_2;
        M2C_FIELD(arg0, u16 *, 0x6C) = func_8002E9A4((f64) M2C_FIELD(arg0, s16 *, 0x5E), (f64) (s16) temp_v1_2, temp_a0_2, temp_a0_2, arg0 + 0x6A);
        M2C_FIELD(var_s2, s32 *, 0) = (s32) (M2C_FIELD(arg0, u16 *, 0x68) | 0x09000000);
        temp_s2 = var_s2 + 8;
        M2C_FIELD(var_s2, s32 *, 4) = (s32) ((M2C_FIELD(arg0, u16 *, 0x66) << 0x10) | M2C_FIELD(arg0, u16 *, 0x64));
        M2C_FIELD(var_s2, s32 *, 8) = (s32) ((u16) M2C_FIELD(arg0, s16 *, 0x5C) | 0x09060000);
        temp_s2_2 = temp_s2 + 8;
        M2C_FIELD(temp_s2, s32 *, 4) = (s32) ((M2C_FIELD(arg0, u16 *, 0x60) << 0x10) | M2C_FIELD(arg0, u16 *, 0x62));
        M2C_FIELD(temp_s2, s32 *, 8) = (s32) (M2C_FIELD(arg0, u16 *, 0x6E) | 0x09040000);
        var_s2 = temp_s2_2 + 8;
        M2C_FIELD(temp_s2_2, s32 *, 4) = (s32) ((M2C_FIELD(arg0, u16 *, 0x6C) << 0x10) | M2C_FIELD(arg0, u16 *, 0x6A));
        var_s0 = var_s2;
        var_v0 = (u16) M2C_FIELD(arg0, s16 *, 0x5E) | 0x03010000;
    } else {
        var_s0 = var_s2;
        var_v0 = 0x03000000;
    }
    M2C_FIELD(var_s0, s32 *, 0) = var_v0;
    M2C_FIELD(var_s0, s32 *, 4) = func_80034640(M2C_FIELD(arg0, s32 *, 0x54));
    *arg1 += 0x170;
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) + 0xB8);
    return var_s2 + 8;
}
