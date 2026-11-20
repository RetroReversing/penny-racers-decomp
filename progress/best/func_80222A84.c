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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8013EC80();
s32 func_80148230();
s32 func_8015E8E4();
extern s32 D_8006FB14;
extern s32 D_8011F318;

void func_80222A84(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    f32 temp_fv1_6;
    f32 temp_fv1_7;
    s32 var_v1;
    f32 temp_fv1_9;
    f32 var_fv0;
    f32 var_fv0_2;
    s16 temp_v1;
    s16 var_a1;
    f32 temp_fv1_8;
    register s32 var_a0;
    int var_s2;
    s32 var_v0;
    s32 temp_v0;
    u8 temp_v0_2;
    register u8 temp_v0_3;
    u8 var_s1;

    if ((*(u8 *)((char *)(&D_8006FB14) + 4)) != 0) {
        if (((*(s32 *)((char *)(arg0) + 0x898)) != 0) && ((*(u8 *)((char *)(arg0) + 0x870)) == 0)) {
            func_8013EC80();
        }
        (*(u8 *)((char *)((arg0 + (*(u8 *)((char *)(arg0) + 0x88D)))) + 0x87D)) = (u8) (*(u8 *)((char *)(arg0) + 0x87B));
    } else {
        (*(s8 *)((char *)((arg0 + (*(u8 *)((char *)(arg0) + 0x88D)))) + 0x87D)) = 0;
    }
    var_s2 = (var_s1 + 0xF) & 0xF;
    var_s1 = (*(u8 *)((char *)(arg0) + 0x88D));
    (*(u8 *)((char *)(arg0) + 0x88D)) = (u8) ((var_s1 + 1) & 0xF);
    if ((*(f32 *)((char *)(arg0) + 0x770)) == 0.0f) {
        if ((*(s32 *)((char *)(arg0) + 0x89C)) != 0) {
            if ((*(u32 *)((char *)(arg0) + 0x890)) != 0) {
                (*(s8 *)((char *)(arg0) + 0x8D0)) = 0x78;
                (*(u8 *)((char *)(arg0) + 0x74C)) = 5U;
            }
            goto block_10;
        }
        goto block_11;
    }
block_10:
    var_a1 = 0;
    if ((*(s32 *)((char *)(arg0) + 0x89C)) == 0) {
block_11:
        var_a1 = 0;
        if ((*(u8 *)((char *)(arg0) + 0x74C)) == 5) {
            if ((*(u8 *)((char *)(&D_8006FB14) + 4)) != 0) {
                (*(u8 *)((char *)(arg0) + 0x74C)) = 0U;
                (*(s8 *)((char *)(arg0) + 0x8D0)) = 0x78;
                if ((func_80148230() & 0xFF) != 2) {
                    if ((*(s32 *)((char *)(arg0) + 0x59C)) < 0x64) {
                        temp_fv1 = (*(f32 *)((char *)(arg0) + 0x748));
                        if ((temp_fv1 > 2800.0f) && (temp_fv1 < 3200.0f)) {
                            (*(u8 *)((char *)(arg0) + 0x74C)) = 4U;
                            temp_fv1_2 = (*(f32 *)((char *)(arg0) + 0x748));
                            if ((temp_fv1_2 > 2900.0f)) {
                                if ((temp_fv1_2 < 3100.0f)) {
                                    func_8015E8E4(arg0);
                                }
                            }
                            (*(f32 *)((char *)(arg0) + 0x748)) = 5000.0f;
                        } else {
                            goto block_37;
                        }
                    } else {
                        temp_fv1_3 = (*(f32 *)((char *)(arg0) + 0x748));
                        if ((temp_fv1_3 > 2800.0f) && (temp_fv1_3 < 3200.0f)) {
                            (*(u8 *)((char *)(arg0) + 0x74C)) = 4U;
                            temp_fv1_4 = (*(f32 *)((char *)(arg0) + 0x748));
                            if ((temp_fv1_4 > 2900.0f)) {
                                if ((temp_fv1_4 < 3100.0f)) {
                                    func_8015E8E4(arg0);
                                }
                            }
                            (*(f32 *)((char *)(arg0) + 0x748)) = 7000.0f;
                        } else {
                            goto block_37;
                        }
                    }
                } else {
                    if ((*(s32 *)((char *)(arg0) + 0x59C)) < 0x64) {
                        temp_fv1_5 = (*(f32 *)((char *)(arg0) + 0x748));
                        if ((temp_fv1_5 > 2800.0f) && (temp_fv1_5 < 3200.0f)) {
                            (*(u8 *)((char *)(arg0) + 0x74C)) = 1U;
                            var_fv0 = 4000.0f;
                        } else {
                            goto block_37;
                        }
                        goto block_38;
                    }
                    temp_fv1_6 = (*(f32 *)((char *)(arg0) + 0x748));
                    if ((temp_fv1_6 > 2800.0f) && (temp_fv1_6 < 3200.0f)) {
                        (*(u8 *)((char *)(arg0) + 0x74C)) = 4U;
                        temp_fv1_7 = (*(f32 *)((char *)(arg0) + 0x748));
                        if ((temp_fv1_7 > 2900.0f) && (temp_fv1_7 < 3100.0f)) {
                            func_8015E8E4(arg0);
                        }
                        (*(f32 *)((char *)(arg0) + 0x748)) = 7000.0f;
                    } else {
                        goto block_37;
                    }
                }
            } else {
block_37:
                var_fv0 = 1000.0f;
block_38:
                (*(f32 *)((char *)(arg0) + 0x748)) = var_fv0;
            }
            var_a1 = 0;
        }
    }
    var_a0 = 0;
    do {
        var_s1 = (var_s1 + 0xF) & 0xF;
        temp_v1 = (unsigned)var_a1 + ((s8) (*(u8 *)((char *)((arg0 + (var_s1 & 0xFF))) + 0x87D)) - (s8) (*(u8 *)((char *)((arg0 + (var_s2 & 0xFF))) + 0x87D)));
        var_a1 = temp_v1;
        var_v1 = temp_v1;
        if (0 > var_v1) {
            var_v1 = -var_v1;
        }
        var_s2 = ((u32)var_s2 + 0xF) & 0xF;
        if (((s32)var_v1 >= 0x3D) && ((*(u8 *)((char *)(arg0) + 0x8A1)) == 0) && ((*(f32 *)((char *)(arg0) + 0x86C)) > 102.0f)) {
            temp_v0 = (*(u32 *)((char *)(arg0) + 0x890));
            if ((temp_v0 < 0xAU) & (temp_v0 != 0)) {
                (*(f32 *)((char *)(arg0) + 0x8A4)) = 0.1f;
                (*(u8 *)((char *)(arg0) + 0x8A1)) = 1U;
                (*(s8 *)((char *)(arg0) + 0x8D0)) = 0x78;
            }
        }
        var_v0 = (s8) (*(u8 *)((char *)(arg0) + 0x87B));
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if ((0x33 <= var_v0) && ((*(u8 *)((char *)(arg0) + 0x8A1)) == 0) && ((*(s32 *)((char *)(arg0) + 0x89C)) != 0) && ((*(u8 *)((char *)(arg0) + 0x74C)) != 5)) {
            (*(u8 *)((char *)(arg0) + 0x8A1)) = 4U;
            (*(s8 *)((char *)(arg0) + 0x8C0)) = 0;
            (*(s8 *)((char *)(arg0) + 0x8C1)) = (s8) (-((s8) (*(u8 *)((char *)(arg0) + 0x87B)) < 1) | 1);
            (*(f32 *)((char *)(arg0) + 0x8C4)) = 360.0f;
            temp_fv0 = *((s32 *)((s8 *)D_8011F318 + ((*(u16 *)((char *)(arg0) + 2)) * 0x64)));
            if ((s8) (*(u8 *)((char *)(arg0) + 0x87B)) <= 0) {
                var_fv0_2 = temp_fv0 + 90.0f;
            } else {
                var_fv0_2 = temp_fv0 + -90.0f;
            }
            (*(f32 *)((char *)(arg0) + 0x8AC)) = var_fv0_2;
            (*(s8 *)((char *)(arg0) + 0x8D0)) = 0x78;
        }
        var_a0 += 1;
    } while ((u32) (var_a0 & 0xFFFF) < 0xFU);
    temp_fv1_8 = (*(f32 *)((char *)(arg0) + 0x8A4));
    if (temp_fv1_8 < 1.0f) {
        temp_fv0_2 = temp_fv1_8 + 0.01f;
        (*(f32 *)((char *)(arg0) + 0x8A4)) = temp_fv0_2;
        if (temp_fv0_2 > 1.0f) {
            (*(f32 *)((char *)(arg0) + 0x8A4)) = 1.0f;
            (*(u8 *)((char *)(arg0) + 0x8A1)) = 0U;
        }
    }
    if (((*(s8 *)((char *)(arg0) + 0x87C)) < -0x20) && ((*(u32 *)((char *)(arg0) + 0x890)) != 0) && ((*(u8 *)((char *)(arg0) + 0x74C)) == 0) && (temp_v0_2 = (*(u8 *)((char *)(arg0) + 0x8A1)), (((temp_v0_2 == 0) | ((u32)temp_v0_2 == 2)) != 0))) {
        (*(u8 *)((char *)(arg0) + 0x8A1)) = 2U;
        temp_fv0_3 = ((*(f32 *)((char *)(arg0) + 0x770)) * 0.0005f) + (*(f32 *)((char *)(arg0) + 0x8D4));
        (*(f32 *)((char *)(arg0) + 0x8D4)) = temp_fv0_3;
        if (temp_fv0_3 > 1.0f) {
            (*(f32 *)((char *)(arg0) + 0x8D4)) = 1.0f;
            (*(f32 *)((char *)(arg0) + 0x8D8)) = 0.0f;
        }
        (*(s8 *)((char *)(arg0) + 0x8D0)) = 0x78;
    } else {
        temp_v0_3 = (*(u8 *)((char *)(arg0) + 0x8A1));
        if (((((int)temp_v0_3 == 2) | (temp_v0_3 == 6)) != 0) || ((*(u8 *)((char *)(arg0) + 0x8A1)) == 7)) {
            temp_fv1_9 = (*(f32 *)((char *)(arg0) + 0x8D8)) + 0.0025f;
            (*(f32 *)((char *)(arg0) + 0x8D8)) = temp_fv1_9;
            (*(f32 *)((char *)(arg0) + 0x8D4)) = temp_fv0_4;
            temp_fv0_4 = (*(f32 *)((char *)(arg0) + 0x8D4)) - temp_fv1_9;
            if (temp_fv0_4 < 0.1f) {
                (*(f32 *)((char *)(arg0) + 0x8D4)) = 0.0f;
                (*(u8 *)((char *)(arg0) + 0x8A1)) = 0U;
            }
        }
    }
    (*(f32 *)((char *)(arg0) + 0x8B4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x8D4)) * -60.0f);
}
