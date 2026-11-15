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

s32 func_800DE41C();
s32 func_80129918();
s32 func_8013E49C();
s32 func_8013F1D4();
s32 func_801D7028();
extern char D_8011F2F0[];
typedef struct { u16 f0; u8 pad[98]; } Slot_8011F2F2;
extern Slot_8011F2F2 D_8011F2F2[];
extern char D_8011F2FD[];
extern char D_8011F32E[];
extern char D_8011F334[];
extern char D_8011F338[];
extern char D_8011F33C[];
extern char D_8011F340[];
extern u16 D_8018D672;
extern char D_8022AF30[];
extern char D_8022AF38[];
extern char D_802390C8[];
extern s32 func_8016410C;
extern s32 func_80164324;

void func_80164740(s32 arg0) {
    f32 temp_fv1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 var_a0_2;
    s32 var_v1;
    u16 temp_v0;
    u16 temp_v0_4;
    u16 temp_v0_7;
    u16 temp_v0_8;
    u16 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_s0;
    void *temp_s1;
    void *var_a0;

    temp_v1 = (arg0 & 0xFFFF) * 0x64;
    if (*(s32 *)*(D_8011F340 + temp_v1) == 0) {
        temp_s1 = temp_v1 + D_8011F2F0;
        temp_s0 = M2C_FIELD(temp_s1, void **, 0x60);
        temp_v1_2 = *(D_8011F32E + temp_v1);
        switch (temp_v1_2) {                        /* irregular */
        case 0:
            M2C_FIELD(temp_s0, f32 *, 8) = (f32) (M2C_FIELD(temp_s0, f32 *, 8) * 0.8f);
            M2C_FIELD(temp_s0, f32 *, 0xC) -= 0.11f;
            M2C_FIELD(temp_s0, f32 *, 0x10) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x10) * 0.8f);
            temp_fv1 = M2C_FIELD(temp_s1, f32 *, 0x28) + 10.0f;
            M2C_FIELD(temp_s1, f32 *, 0x28) = temp_fv1;
            if (temp_fv1 > 359.0f) {
                M2C_FIELD(temp_s1, f32 *, 0x28) = (f32) (temp_fv1 - 360.0f);
            }
            func_80129918(temp_s0 + 0x1C, M2C_FIELD(temp_s1, s32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), M2C_FIELD(temp_s1, s32 *, 0x20), M2C_FIELD(temp_s0, f32 *, 8), M2C_FIELD(temp_s0, f32 *, 0xC), M2C_FIELD(temp_s0, f32 *, 0x10));
            M2C_FIELD(temp_s1, s32 *, 0x18) = (s32) M2C_FIELD(temp_s0, s32 *, 0x24);
            M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s0, f32 *, 0x28);
            M2C_FIELD(temp_s1, s32 *, 0x20) = (s32) M2C_FIELD(temp_s0, s32 *, 0x2C);
            if (M2C_FIELD(temp_s0, s32 *, 0x1C) & 0xFFFF00) {
                var_v1 = 0;
                if (M2C_FIELD(temp_s0, u8 *, 0x1D) != 0) {
                    M2C_FIELD(temp_s0, f32 *, 0xC) = 0.0f;
                    var_a0 = temp_s0;
                    do {
                        if (M2C_FIELD(var_a0, s8 *, 0x60) != -1) {
                            M2C_FIELD(var_a0, s8 *, 0x67) = 0;
                        }
                        var_v1 += 1;
                        var_a0 = temp_s0 + var_v1;
                    } while (var_v1 < 7);
                    *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
                } else {
                    temp_a0 = M2C_FIELD(temp_s0, void **, 4);
                    temp_v0 = M2C_FIELD(temp_a0, u16 *, 0x560);
                    M2C_FIELD(temp_a0, u16 *, 0x560) = (u16) (temp_v0 & 0xF8);
                    temp_a0_2 = M2C_FIELD(temp_s0, void **, 4);
                    M2C_FIELD(temp_a0_2, u16 *, 0x560) |= ((temp_v0 & 7) - 1);
                    func_8013E49C(M2C_FIELD(temp_s0, u16 *, 0x76));
                    *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
                }
            }
            if (M2C_FIELD(temp_s1, f32 *, 0x1C) < -5000.0f) {
                temp_v0_2 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x9B, D_802390C8, &func_8016410C, &func_80164324, M2C_FIELD(temp_s1, s32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), M2C_FIELD(temp_s1, s32 *, 0x20), 0, 0, 0, 0.08f, 0.08f, 0.08f);
                if ((u32) ((temp_v0_2 + 2) & 0xFFFF) >= 2U) {
                    temp_v0_3 = (temp_v0_2 & 0xFFFF) * 0x64;
                    temp_a0_3 = temp_v0_3 + D_8011F2F0;
                    M2C_FIELD(temp_a0_3, s16 *, 8) = 0x40;
                    M2C_FIELD(temp_a0_3, s16 *, 6) = 0x40;
                    M2C_FIELD(temp_a0_3, s16 *, 4) = 0x40;
                    D_8011F2F2[temp_v0_2 & 0xFFFF].f0 = 0x40;
                    *(D_8011F334 + temp_v0_3) = 0;
                    *(D_8011F338 + temp_v0_3) = 0;
                    *(D_8011F33C + temp_v0_3) = 0;
                }
                temp_a0_4 = M2C_FIELD(temp_s0, void **, 4);
                temp_v0_4 = M2C_FIELD(temp_a0_4, u16 *, 0x560);
                M2C_FIELD(temp_a0_4, u16 *, 0x560) = (u16) (temp_v0_4 & 0xF8);
                temp_a0_5 = M2C_FIELD(temp_s0, void **, 4);
                M2C_FIELD(temp_a0_5, u16 *, 0x560) |= ((temp_v0_4 & 7) - 1);
                func_8013E49C(M2C_FIELD(temp_s0, u16 *, 0x76));
                *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
                return;
            }
            break;
        case 1:
            if (func_8013F1D4(arg0 & 0xFFFF, temp_s0) & 0xFF) {
                temp_v0_5 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x9B, D_802390C8, &func_8016410C, &func_80164324, M2C_FIELD(temp_s1, s32 *, 0x18), M2C_FIELD(temp_s1, f32 *, 0x1C), M2C_FIELD(temp_s1, s32 *, 0x20), 0, 0, 0, 0.08f, 0.08f, 0.08f);
                if ((u32) ((temp_v0_5 + 2) & 0xFFFF) >= 2U) {
                    temp_v0_6 = (temp_v0_5 & 0xFFFF) * 0x64;
                    temp_a0_6 = temp_v0_6 + D_8011F2F0;
                    M2C_FIELD(temp_a0_6, s16 *, 8) = 0x40;
                    M2C_FIELD(temp_a0_6, s16 *, 6) = 0x40;
                    M2C_FIELD(temp_a0_6, s16 *, 4) = 0x40;
                    D_8011F2F2[temp_v0_5 & 0xFFFF].f0 = 0x40;
                    *(D_8011F334 + temp_v0_6) = 0;
                    *(D_8011F338 + temp_v0_6) = 0;
                    *(D_8011F33C + temp_v0_6) = 0;
                }
                temp_v0_7 = M2C_FIELD(temp_s0, u16 *, 0x14) - 1;
                M2C_FIELD(temp_s0, u16 *, 0x14) = temp_v0_7;
                var_a0_2 = arg0 & 0xFFFF;
                if ((temp_v0_7 << 0x10) <= 0) {
                    temp_a0_7 = M2C_FIELD(temp_s0, void **, 4);
                    temp_v0_8 = M2C_FIELD(temp_a0_7, u16 *, 0x560);
                    M2C_FIELD(temp_a0_7, u16 *, 0x560) = (u16) (temp_v0_8 & 0xF8);
                    temp_a0_8 = M2C_FIELD(temp_s0, void **, 4);
                    M2C_FIELD(temp_a0_8, u16 *, 0x560) |= ((temp_v0_8 & 7) - 1);
                    func_8013E49C(M2C_FIELD(temp_s0, u16 *, 0x76));
                    *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
                    var_a0_2 = arg0 & 0xFFFF;
                } else {
                    temp_v0_9 = D_8018D672 * 0x8F0;
                    M2C_FIELD(temp_s0, f32 *, 8) = (f32) -*(D_8022AF30 + temp_v0_9);
                    M2C_FIELD(temp_s0, f32 *, 0xC) = 2.0f;
                    M2C_FIELD(temp_s0, f32 *, 0x10) = (f32) -*(D_8022AF38 + temp_v0_9);
                    *(D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0;
                }
                func_801D7028(var_a0_2, 0x27);
            }
            break;
        }
    }
}
