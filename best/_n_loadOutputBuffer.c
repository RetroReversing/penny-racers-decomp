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

void *_n_loadBuffer(void *, s32, s32, s32, s32);    /* extern */
s32 func_80034640(s32);                             /* extern */
f32 _doModFunc(void *, M2C_UNK);                 /* extern */
extern f64 D_8004A4A0;

void *_n_loadOutputBuffer(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    f32 temp_fs0;
    f32 temp_fv0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_fv1;
    s32 temp_s0;
    s32 temp_s1;
    void *temp_s4;
    void *temp_v0;
    void *var_s4;

    if (M2C_FIELD(arg1, void **, 0x24) != NULL) {
        temp_s0 = M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0);
        temp_fs0 = (f32) (D_8004A4A0 - (f64) ((f32) (s32) ((_doModFunc(arg1, 0xB8) / (f32) temp_s0) * 32768.0f) / 32768.0f));
        temp_v0 = M2C_FIELD(arg1, void **, 0x24);
        temp_fv0 = M2C_FIELD(temp_v0, f32 *, 0x20) + (temp_fs0 * (f32) 0xB8);
        temp_fv1 = (s32) temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x20) = (f32) (temp_fv0 - (f32) temp_fv1);
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x18) + ((M2C_FIELD(arg1, s32 *, 0x18) - M2C_FIELD(arg1, s32 *, 4)) * 2);
        temp_a3 = (s32) (temp_a1 & 7) >> 1;
        temp_s1 = temp_a3 * 2;
        temp_s4 = _n_loadBuffer(arg0, temp_a1 - temp_s1, 0x2E0, temp_fv1 + temp_a3, arg3);
        M2C_FIELD(temp_s4, s32 *, 0) = (s32) ((func_80034640(M2C_FIELD(M2C_FIELD(arg1, void **, 0x24), s32 *, 0x14)) & 0xFFFFFF) | 0x05000000);
        M2C_FIELD(temp_s4, s32 *, 4) = (s32) ((M2C_FIELD(M2C_FIELD(arg1, void **, 0x24), s32 *, 0x24) << 0x1E) | (((s32) (temp_fs0 * 32768.0f) & 0xFFFF) << 0xE) | ((temp_s1 | 0x2E0) * 4) | ((arg2 >> 8) & 3));
        M2C_FIELD(M2C_FIELD(arg1, void **, 0x24), s32 *, 0x24) = 0;
        var_s4 = temp_s4 + 8;
        M2C_FIELD(arg1, s32 *, 0x18) = (s32) (M2C_FIELD(arg1, s32 *, 0x18) + (temp_fv1 - 0xB8));
    } else {
        var_s4 = _n_loadBuffer(arg0, M2C_FIELD(arg0, s32 *, 0x18) - (M2C_FIELD(arg1, s32 *, 4) * 2), arg2, 0xB8, arg3);
    }
    return var_s4;
}
