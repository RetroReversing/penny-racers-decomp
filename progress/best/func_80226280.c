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

M2C_UNK func_801D7028(u16, M2C_UNK);                /* extern */
f32 sqrtf(f32);                                     /* extern */
extern u8 D_8021E144;

void func_80226280(void *arg0) {
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa0_4;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs2_2;
    f32 temp_fs3;
    f32 temp_fs3_2;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft2;
    f32 temp_fv0;
    f32 temp_fv0_10;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0_7;
    f32 temp_fv0_8;
    f32 temp_fv0_9;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fs0;
    f32 var_fs4;
    f32 var_fs4_2;
    f32 var_ft0;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    M2C_FIELD(arg0, f32 *, 0x79C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x818) - M2C_FIELD(arg0, f32 *, 0x79C)) - M2C_FIELD(arg0, f32 *, 0x7C0));
    M2C_FIELD(arg0, f32 *, 0x7A0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x81C) - M2C_FIELD(arg0, f32 *, 0x7A0)) - M2C_FIELD(arg0, f32 *, 0x7C4));
    M2C_FIELD(arg0, f32 *, 0x7A4) = (f32) ((M2C_FIELD(arg0, f32 *, 0x820) - M2C_FIELD(arg0, f32 *, 0x7A4)) - M2C_FIELD(arg0, f32 *, 0x7C8));
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x790);
    temp_fv0_2 = M2C_FIELD(arg0, f32 *, 0x798);
    temp_fa0 = (temp_fv0 * temp_fv0) + (temp_fv0_2 * temp_fv0_2);
    temp_fv0_3 = sqrtf(temp_fa0);
    var_fs4 = temp_fv0_3;
    if (temp_fv0_3 != temp_fv0_3) {
        var_fs4 = sqrtf(temp_fa0);
    }
    temp_fv0_4 = M2C_FIELD(arg0, f32 *, 0x7C0);
    temp_fv0_5 = M2C_FIELD(arg0, f32 *, 0x7C8);
    temp_fa0_2 = (temp_fv0_4 * temp_fv0_4) + (temp_fv0_5 * temp_fv0_5);
    temp_fv0_6 = sqrtf(temp_fa0_2);
    var_fs0 = temp_fv0_6;
    if (temp_fv0_6 != temp_fv0_6) {
        var_fs0 = sqrtf(temp_fa0_2);
    }
    temp_fv0_7 = M2C_FIELD(arg0, f32 *, 0x79C);
    temp_fv0_8 = M2C_FIELD(arg0, f32 *, 0x7A4);
    temp_fa0_3 = (temp_fv0_7 * temp_fv0_7) + (temp_fv0_8 * temp_fv0_8);
    temp_fv0_9 = sqrtf(temp_fa0_3);
    var_ft0 = temp_fv0_9;
    if (temp_fv0_9 != temp_fv0_9) {
        var_ft0 = sqrtf(temp_fa0_3);
    }
    if (var_fs0 == 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x868) = 0.0f;
    } else {
        M2C_FIELD(arg0, f32 *, 0x868) = (f32) ((var_ft0 / var_fs0) * 100.0f);
    }
    if (var_fs4 != 0.0f) {
        var_fv0 = (var_fs0 / var_fs4) * 100.0f;
    } else {
        var_fv0 = 100.0f;
    }
    M2C_FIELD(arg0, f32 *, 0x86C) = var_fv0;
    var_fv1 = 0.0f;
    if ((M2C_FIELD(arg0, f32 *, 0x868) < 0.0f) || (var_fv1 = 100.0f, (M2C_FIELD(arg0, f32 *, 0x868) > 100.0f))) {
        M2C_FIELD(arg0, f32 *, 0x868) = var_fv1;
    }
    temp_fv1 = M2C_FIELD(arg0, f32 *, 0x868);
    if (!(temp_fv1 > 0.0f)) {
        M2C_FIELD(arg0, s32 *, 0x768) = 0;
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x812) == 0) {
        M2C_FIELD(arg0, s32 *, 0x768) = 0;
        return;
    }
    temp_fs1 = ((100.0f - temp_fv1) * 0.0025f) + 0.75f;
    M2C_FIELD(arg0, f32 *, 0x748) = (f32) (temp_fs1 * M2C_FIELD(arg0, f32 *, 0x748));
    temp_fs2 = M2C_FIELD(arg0, f32 *, 0x7C0);
    temp_fs0 = M2C_FIELD(arg0, f32 *, 0x7C4);
    temp_fs3 = M2C_FIELD(arg0, f32 *, 0x7C8);
    temp_fa0_4 = (temp_fs2 * temp_fs2) + (temp_fs0 * temp_fs0) + (temp_fs3 * temp_fs3);
    temp_fv0_10 = sqrtf(temp_fa0_4);
    var_fs4_2 = temp_fv0_10;
    if (temp_fv0_10 != temp_fv0_10) {
        var_fs4_2 = sqrtf(temp_fa0_4);
    }
    temp_ft1 = M2C_FIELD(arg0, f32 *, 0x824);
    temp_ft0 = M2C_FIELD(arg0, f32 *, 0x828);
    temp_ft2 = M2C_FIELD(arg0, f32 *, 0x82C);
    var_v0 = 1;
    if (var_fs4_2 == 0.0f) {
        var_v0 = 0;
    }
    var_v1 = 1;
    if (!(temp_ft0 < 0.5f)) {
        var_v1 = 0;
    }
    if (var_v0 & var_v1) {
        temp_fv1_2 = ((temp_fs2 * temp_ft1) + (temp_fs0 * temp_ft0) + (temp_fs3 * temp_ft2)) / var_fs4_2;
        M2C_FIELD(arg0, s8 *, 0x8D1) = 0x78;
        var_v1_2 = 1;
        if (!(temp_fv1_2 < -0.9396f)) {
            var_v1_2 = 0;
        }
        if ((M2C_FIELD(arg0, u8 *, 0x8A1) == 4) & var_v1_2) {
            M2C_FIELD(arg0, f32 *, 0x7B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x7B4) * -0.2f);
            M2C_FIELD(arg0, f32 *, 0x7BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x7BC) * -0.2f);
            M2C_FIELD(arg0, f32 *, 0x7C0) = (f32) (M2C_FIELD(arg0, f32 *, 0x7C0) * -0.2f);
            M2C_FIELD(arg0, f32 *, 0x7C8) = (f32) (M2C_FIELD(arg0, f32 *, 0x7C8) * -0.2f);
            M2C_FIELD(arg0, f32 *, 0x7C4) = (f32) ((M2C_FIELD(arg0, f32 *, 0x774) * 0.014f) + M2C_FIELD(arg0, f32 *, 0x7C4));
            M2C_FIELD(arg0, s8 *, 0x8C1) = (s8) -M2C_FIELD(arg0, s8 *, 0x8C1);
            func_801D7028(M2C_FIELD(arg0, u16 *, 2), 0x29);
            M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) | 1);
            M2C_FIELD(arg0, s8 *, 0x8C0) = 1;
            M2C_FIELD(arg0, s8 *, 0x860) = 0;
            return;
        }
        if (D_8021E144 != 0) {
            var_fv1_2 = temp_fs1 * 0.2f;
        } else {
            var_fv1_2 = temp_fs1 * 0.15f;
        }
        temp_fs0_2 = temp_fv1_2 * var_fs4_2 * (-1.0f - var_fv1_2);
        temp_fs2_2 = temp_fs2 + (temp_ft1 * temp_fs0_2);
        temp_fs3_2 = temp_fs3 + (temp_ft2 * temp_fs0_2);
        M2C_FIELD(arg0, f32 *, 0x7B4) = temp_fs2_2;
        M2C_FIELD(arg0, f32 *, 0x7BC) = temp_fs3_2;
        M2C_FIELD(arg0, f32 *, 0x7C0) = temp_fs2_2;
        M2C_FIELD(arg0, f32 *, 0x7C4) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x7C8) = temp_fs3_2;
        M2C_FIELD(arg0, s8 *, 0x8D0) = 0x78;
        func_801D7028(M2C_FIELD(arg0, u16 *, 2), 0x29);
        M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) | 1);
    }
}
