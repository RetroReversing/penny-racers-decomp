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

f32 __cosf();
f32 __sinf();
s32 func_8013BB54();
f32 func_801F9BE8();
s32 func_80222368();
s32 func_80222498();
s32 func_80222988();
s32 func_80222A84();
s32 func_8022312C();
s32 func_80223DB0();
s32 func_80223FBC();
s32 func_802240B0();
s32 func_802241E8();
s32 func_80224334();
s32 func_80224410();
s32 func_80224508();
s32 func_80224694();
s32 func_80224784();
s32 func_80225FDC();
s32 func_80226280();
extern char D_8011F2F0[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F314[];
extern char D_8011F31C[];
extern f64 D_80229990;
extern f64 D_80229998;
extern char D_802CF134[];

void func_80221AD0(void *arg0) {
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa1;
    f32 temp_fa1_2;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 var_fs1;
    f32 var_fs2;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv0_4;
    f32 var_fv0_5;
    f32 var_fv0_6;
    f32 var_fv0_7;
    f32 var_fv1;
    s16 var_v0;
    s16 var_v0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 var_v0_3;
    u8 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_s2;

    temp_s2 = (M2C_FIELD(arg0, u16 *, 2) * 0x64) + D_8011F2F0;
    M2C_FIELD(arg0, u16 *, 6) &= 0xFFFC;
    if (M2C_FIELD(arg0, u8 *, 0x8D1) != 0) {
        M2C_FIELD(arg0, u8 *, 0x8D1) -= 1;
    }
    func_80222498(arg0);
    func_80222988(arg0);
    func_80222A84(arg0);
    var_v0 = 0xF801;
    if (M2C_FIELD(arg0, s32 *, 0x894) == 0) {
        var_v0 = 0x7801;
    }
    M2C_FIELD(arg0, s16 *, 0x212) = var_v0;
    var_v0_2 = 0x7BC1;
    if (M2C_FIELD(arg0, s32 *, 0x89C) != 0) {
        var_v0_2 = 0x7BC1;
        if (!(M2C_FIELD(arg0, u8 *, 0x778) & 0x20)) {
            var_v0_2 = 0xFFC1;
        }
    }
    M2C_FIELD(arg0, s16 *, 0x210) = var_v0_2;
    func_80222368(arg0);
    func_8022312C(arg0);
    func_80223DB0(arg0);
    func_80224410(arg0);
    temp_s0 = func_80223FBC(arg0);
    if (M2C_FIELD(arg0, u8 *, 0x74C) == 5) {
        var_fs2 = -*(s32 *)((temp_s0 * 4) + *(D_802CF134 + (M2C_FIELD(arg0, u16 *, 0x240) * 0xC)));
    } else {
        var_fs2 = *(f32 *)((temp_s0 * 4) + *(D_802CF134 + (M2C_FIELD(arg0, u16 *, 0x240) * 0xC)));
    }
    var_fs1 = M2C_FIELD(temp_s2, f32 *, 0x28);
    func_802240B0(arg0);
    temp_fs0 = M2C_FIELD(arg0, f32 *, 0x748) / *(s32 *)((M2C_FIELD(arg0, u8 *, 0x74C) * 4) + M2C_FIELD(arg0, s32 *, 0x238));
    func_802241E8(arg0);
    func_80224334(arg0);
    M2C_FIELD(arg0, f32 *, 0x780) = (f32) ((M2C_FIELD(arg0, f32 *, 0x760) * 0.03f) + M2C_FIELD(arg0, f32 *, 0x758) + M2C_FIELD(arg0, f32 *, 0x764) + M2C_FIELD(arg0, f32 *, 0x768) + M2C_FIELD(arg0, f32 *, 0x76C));
    func_80224508(arg0);
    func_80224694(arg0, temp_fs0);
    M2C_FIELD(arg0, u8 *, 0x778) += 1;
    func_80224784(arg0, var_fs2, var_fs1, temp_s0);
    func_80226280(arg0);
    func_80225FDC(arg0);
    if ((M2C_FIELD(arg0, u8 *, 0x7CD) != 0) && (M2C_FIELD(arg0, f32 *, 0x770) != 0.0f)) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x8A1);
        if (temp_v1 != 1) {
            if ((s32) temp_v1 >= 2) {
                if (temp_v1 != 2) {
                    if (temp_v1 != 4) {
                        M2C_FIELD(temp_s2, f32 *, 0x28) = var_fs1;
                    } else {
                        var_fv0 = func_801F9BE8(var_fs1, M2C_FIELD(arg0, f32 *, 0x8AC)) * 0.1f;
                        goto block_39;
                    }
                } else {
                    if (temp_s0 < 0xF) {
                        var_fv0_2 = M2C_FIELD(arg0, f32 *, 0x8D4);
                        goto block_30;
                    }
                    var_fv0_3 = M2C_FIELD(arg0, f32 *, 0x8D4);
                    goto block_36;
                }
            } else if (temp_v1 != 0) {
                M2C_FIELD(temp_s2, f32 *, 0x28) = var_fs1;
            } else {
                if (temp_s0 < 0xF) {
                    var_fv0_4 = var_fs2 * 0.125f;
                    goto block_31;
                }
                var_fv0_5 = var_fs2 * 0.125f;
                goto block_37;
            }
        } else if (temp_s0 < 0xF) {
            var_fv0_2 = 1.0f - M2C_FIELD(arg0, f32 *, 0x8A4);
block_30:
            var_fv0_4 = var_fs2 * ((var_fv0_2 * 0.1f) + 0.125f);
block_31:
            temp_fs1 = var_fs1 + var_fv0_4;
            if (temp_fs1 >= 360.0f) {
                var_fs1 = temp_fs1 - 360.0f;
                goto block_40;
            }
            M2C_FIELD(temp_s2, f32 *, 0x28) = temp_fs1;
        } else {
            var_fv0_3 = 1.0f - M2C_FIELD(arg0, f32 *, 0x8A4);
block_36:
            var_fv0_5 = var_fs2 * ((var_fv0_3 * 0.1f) + 0.125f);
block_37:
            var_fs1 -= var_fv0_5;
            if (var_fs1 < 0.0f) {
                var_fv0 = 360.0f;
block_39:
                var_fs1 += var_fv0;
            }
block_40:
            M2C_FIELD(temp_s2, f32 *, 0x28) = var_fs1;
        }
    }
    temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x8A1);
    switch (temp_v1_2) {
    case 0:
        if (temp_s0 < 0xF) {
            var_fv0_6 = M2C_FIELD(arg0, f32 *, 0x770) * var_fs2;
        } else {
            var_fv0_6 = -M2C_FIELD(arg0, f32 *, 0x770) * var_fs2;
        }
        M2C_FIELD(arg0, f32 *, 0x8BC) = (f32) (var_fv0_6 * 0.014f);
        temp_fa0 = *(D_8011F31C + (M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64));
        if (temp_fa0 > 0.0f) {
            temp_fa1 = M2C_FIELD(arg0, f32 *, 0x8BC);
            if (temp_fa1 < temp_fa0) {
                var_fv0_7 = func_801F9BE8(temp_fa0, temp_fa1);
                var_fv1 = 0.1f;
                var_v0_3 = M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64;
            } else {
                goto block_52;
            }
        } else {
            temp_fa0_2 = *(D_8011F31C + (M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64));
            temp_fa1_2 = M2C_FIELD(arg0, f32 *, 0x8BC);
            if (temp_fa0_2 < temp_fa1_2) {
                var_fv0_7 = func_801F9BE8(temp_fa0_2, temp_fa1_2);
                var_fv1 = 0.1f;
                var_v0_3 = M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64;
            } else {
block_52:
                var_fv0_7 = func_801F9BE8(*(D_8011F31C + (M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64)), M2C_FIELD(arg0, f32 *, 0x8BC));
                var_v0_3 = M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64;
                var_fv1 = 0.01f;
            }
        }
        *(D_8011F31C + var_v0_3) = (var_fv0_7 * var_fv1) + *(D_8011F31C + var_v0_3);
        *(D_8011F314 + (M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64)) = 0;
        break;
    case 3:
    case 4:
        *(D_8011F314 + (M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64)) = 0;
        *(D_8011F31C + (M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64)) = M2C_FIELD(arg0, f32 *, 0x8BC);
        break;
    case 2:
    case 6:
    case 7:
        *(D_8011F314 + (M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64)) = M2C_FIELD(arg0, f32 *, 0x8B4);
        *(D_8011F31C + (M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64)) = 0;
        break;
    }
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x8A1);
    if ((((temp_v0 == 2) | (temp_v0 == 6)) != 0) || (M2C_FIELD(arg0, u8 *, 0x8A1) == 7)) {
        if (M2C_FIELD(arg0, u8 *, 0x8A1) == 2) {
            temp_s0_2 = M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64;
            *(D_8011F310 + temp_s0_2) = __sinf((M2C_FIELD(arg0, f32 *, 0x8B4) * 3.14f) / 180.0f) * 40.0f;
        }
        temp_s0_3 = M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64;
        *(D_8011F30C + temp_s0_3) = 40.0f - (__cosf((f32) (((f64) M2C_FIELD(arg0, f32 *, 0x8B4) * D_80229990) / D_80229998)) * 40.0f);
    } else {
        temp_s0_4 = M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64;
        *(D_8011F308 + temp_s0_4) = __sinf((*(D_8011F31C + temp_s0_4) * 3.14f) / 180.0f) * 20.0f;
        temp_s0_5 = M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64;
        *(D_8011F30C + temp_s0_5) = 28.0f - (__cosf((*(D_8011F31C + temp_s0_5) * 3.14f) / 180.0f) * 25.0f);
        *(D_8011F310 + (M2C_FIELD(temp_s2, u16 *, 0x14) * 0x64)) = 0;
    }
    func_8013BB54(M2C_FIELD(arg0, u16 *, 2));
    M2C_FIELD(arg0, f32 *, 0x5FC) = (f32) (2.0f * ((M2C_FIELD(arg0, f32 *, 0x748) * 0.000057142f) + 0.6f));
}
