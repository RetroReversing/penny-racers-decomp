/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32, s32, f32, s32, s32, s32, s32, f32, f32, f32); /* extern */
s32 func_80129918(void *, s32, f32, s32, f32, f32, f32); /* extern */
s32 func_8013E49C(u16);                         /* extern */
s32 func_8013F44C(s32, void *);                 /* extern */
s32 func_801FA30C();                                /* extern */
extern u8 D_8011F2F0[];
extern s32 D_8011F2FD;
extern s32 D_8011F32E;
extern s32 D_8011F350;
extern f64 D_80183528;
extern f64 D_80183530;
extern u8 D_8018A448;
extern s32 D_8023936C;
extern s32 func_80142894;

void func_80142288(s32 arg0) {
    register f64 temp_fs0;
    s32 var_s2_2;
    long temp_v0_9;
    f64 var_fv0_2;
    register f64 var_fv0_3;
    f64 var_fv0_4;
    register f64 var_fv0_5;
    f64 var_fv0_6;
    s32 temp_v0_4;
    register s32 temp_v0_6;
    register void *temp_s3;
    s32 temp_v0_12;
    unsigned long temp_v0;
    s32 temp_v0_5;
    long temp_v0_10;
    f64 temp_fs0_2;
    f64 var_fv0;
    register u16 temp_v0_3;
    long var_s2;
    s32 temp_v0_7;
    u16 temp_v0_2;
    unsigned int var_a0;
    u16 temp_v0_8;
    u16 temp_v1;
    void *temp_s0;
    register void *temp_s0_2;
    register void *temp_s1;
    s32 temp_v0_11;

    temp_s1 = *((s32 *)((s8 *)&D_8011F350 + temp_v0));
    temp_v0 = ((unsigned)arg0 & 0xFFFF) * 0x64;
    temp_s3 = temp_v0 + D_8011F2F0;
    temp_v1 = *((u16 *)((s8 *)&D_8011F32E + (int)temp_v0));
    if (temp_v1 != 1) {
        if ((s32) temp_v1 >= 2) {
            if (temp_v1 != 2) {
                var_a0 = arg0 & 0xFFFF;
                if (temp_v1 != 3) {

                } else {
                    temp_v0_2 = (*(u16 *)((char *)(temp_s1) + 0x14)) - 1;
                    (*(f32 *)((char *)(temp_s3) + 0x1C)) = (f32) ((*(f32 *)((char *)(temp_s3) + 0x1C)) - 0.15f);
                    (*(u16 *)((char *)(temp_s1) + 0x14)) = temp_v0_2;
                    if ((temp_v0_2 << 0x10) == 0) {
                        func_8013E49C((*(u16 *)((char *)(temp_s1) + 0x76)));
                        D_8018A448--;
                        *((s32 *)((s8 *)&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64))) = 2;
                        goto block_37;
                    }
                }
            } else {
                temp_v0_3 = (*(u16 *)((char *)(temp_s1) + 0x14)) - 1;
                (*(u16 *)((char *)(temp_s1) + 0x14)) = temp_v0_3;
                var_a0 = arg0 & 0xFFFF;
                if ((temp_v0_3 << 0x10) == 0) {
                    (*(u16 *)((char *)(temp_s1) + 0x14)) = 0xF0U;
                    *((s16 *)((s8 *)&D_8011F32E + ((arg0 & 0xFFFF) * 0x64))) = 3;
                    goto block_37;
                }
            }
        } else {
            var_a0 = (int)arg0 & 0xFFFF;
            if (temp_v1) {

            } else {
                (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) - 0.1f);
                func_80129918(temp_s1 + 0x1C, (*(f32 *)((char *)(temp_s3) + 0x18)), (*(f32 *)((char *)(temp_s3) + 0x1C)), (*(f32 *)((char *)(temp_s3) + 0x20)), (*(f32 *)((char *)(temp_s1) + 8)), (*(f32 *)((char *)(temp_s1) + 0xC)), (*(f32 *)((char *)(temp_s1) + 0x10)));
                (*(f32 *)((char *)(temp_s3) + 0x18)) = (f32) (*(f32 *)((char *)(temp_s1) + 0x24));
                (*(f32 *)((char *)(temp_s3) + 0x1C)) = (f32) (*(f32 *)((char *)(temp_s1) + 0x28));
                (*(f32 *)((char *)(temp_s3) + 0x20)) = (f32) (*(f32 *)((char *)(temp_s1) + 0x2C));
                var_s2 = 0;
                if ((*(u8 *)((char *)(temp_s1) + 0x1E)) != 0) {
                    temp_fs0 = (int)D_80183528;
                    do {
                        temp_v0_4 = func_800DE41C(0, 0, 1, 0, 0x5B, ((var_s2 * 0xA) - 0x80) & 0xFF, &D_8023936C, &func_80142894, 0, (*(f32 *)((char *)(temp_s3) + 0x18)), (*(f32 *)((char *)(temp_s3) + 0x1C)), (*(f32 *)((char *)(temp_s3) + 0x20)), 0, 0, 0, 3.0f, 3.0f, 3.0f);
                        if ((u32) ((temp_v0_4 + 2) & 0xFFFF) >= 2U) {
                            temp_s0 = ((temp_v0_4 & 0xFFFF) * 0x64) + D_8011F2F0;
                            (*(s16 *)((char *)(temp_s0) + 8)) = 0x40;
                            (*(s16 *)((char *)(temp_s0) + 6)) = 0x40;
                            (*(s16 *)((char *)(temp_s0) + 4)) = 0x40;
                            (*(s16 *)((char *)(temp_s0) + 2)) = 0x40;
                            temp_v0_5 = func_801FA30C() & 0x1F;
                            var_fv0 = (f64) temp_v0_5;
                            if (temp_v0_5 < 0) {
                                var_fv0 += temp_fs0;
                            }
                            (*(f32 *)((char *)(temp_s0) + 0x44)) = (f32) ((f32) var_fv0 - 16.0f);
                            temp_v0_6 = func_801FA30C() & 0xF;
                            var_fv0_2 = (f64) temp_v0_6;
                            if (temp_v0_6 < 0) {
                                var_fv0_2 += temp_fs0;
                            }
                            (*(f32 *)((char *)(temp_s0) + 0x48)) = (f32) var_fv0_2;
                            temp_v0_7 = func_801FA30C() & 0x1F;
                            var_fv0_3 = (f64) temp_v0_7;
                            if (temp_v0_7 < 0) {
                                var_fv0_3 += temp_fs0;
                            }
                            (*(f32 *)((char *)(temp_s0) + 0x4C)) = (f32) ((f32) var_fv0_3 - 16.0f);
                        }
                        var_s2 += 1;
                    } while (var_s2 < 5);
                    var_a0 = (int)arg0;
                    (*(f32 *)((char *)(temp_s1) + 0xC)) = 0.0f;
var_a0 = (s32)var_a0 & 0xFFFF;
                    *((s16 *)((s8 *)&D_8011F32E + ((arg0 & 0xFFFF) * 0x64))) = 1;
                } else {
block_37:
                    var_a0 = arg0 & 0xFFFF;
                }
            }
        }
    } else {
        (*(f32 *)((char *)(temp_s1) + 8)) = (f32) ((*(f32 *)((char *)(temp_s1) + 8)) + 0.000424f);
        (*(f32 *)((char *)(temp_s1) + 0xC)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0xC)) - 0.1f);
        (*(f32 *)((char *)(temp_s1) + 0x10)) = (f32) ((*(f32 *)((char *)(temp_s1) + 0x10)) - 0.00993f);
        func_80129918(temp_s1 + 0x1C, (*(f32 *)((char *)(temp_s3) + 0x18)), (*(f32 *)((char *)(temp_s3) + 0x1C)), (*(f32 *)((char *)(temp_s3) + 0x20)), (*(f32 *)((char *)(temp_s1) + 8)), (*(f32 *)((char *)(temp_s1) + 0xC)), (*(f32 *)((char *)(temp_s1) + 0x10)));
        (*(f32 *)((char *)(temp_s3) + 0x18)) = (f32) (*(f32 *)((char *)(temp_s1) + 0x24));
        (*(f32 *)((char *)(temp_s3) + 0x1C)) = (f32) (*(f32 *)((char *)(temp_s1) + 0x28));
        (*(f32 *)((char *)(temp_s3) + 0x20)) = (f32) (*(f32 *)((char *)(temp_s1) + 0x2C));
        temp_v0_8 = (*(u16 *)((char *)(temp_s1) + 0x14)) - 1;
        (*(u16 *)((char *)(temp_s1) + 0x14)) = temp_v0_8;
        if (((int)temp_v0_8 << 0x10) == 0) {
            var_s2_2 = 0;
            temp_fs0_2 = (s32)D_80183530;
            do {
                temp_v0_9 = func_800DE41C(0, 0, 1, 0, 0x5B, ((var_s2_2 * 0xA) - 0x80) & 0xFF, &D_8023936C, &func_80142894, 0, (*(f32 *)((char *)(temp_s3) + 0x18)), (*(f32 *)((char *)(temp_s3) + 0x1C)), (*(f32 *)((char *)(temp_s3) + 0x20)), 0, 0, 0, 3.0f, 3.0f, 3.0f);
                if ((u32) (((u32)temp_v0_9 + 2) & 0xFFFF) >= 2U) {
                    temp_s0_2 = ((temp_v0_9 & 0xFFFF) * 0x64) + D_8011F2F0;
                    (*(s16 *)((char *)(temp_s0_2) + 8)) = 0x40;
                    (*(s16 *)((char *)(temp_s0_2) + 6)) = 0x40;
                    (*(s16 *)((char *)(temp_s0_2) + 4)) = 0x40;
                    (*(s16 *)((char *)(temp_s0_2) + 2)) = 0x40;
                    temp_v0_10 = func_801FA30C() & 0x1F;
                    var_fv0_4 = (f64) temp_v0_10;
                    if (temp_v0_10 < 0) {
                        var_fv0_4 += temp_fs0_2;
                    }
                    (*(f32 *)((char *)(temp_s0_2) + 0x44)) = (f32) ((f32) var_fv0_4 - 16.0f);
                    temp_v0_11 = func_801FA30C() & 0xF;
                    var_fv0_5 = (f64) temp_v0_11;
                    if (temp_v0_11 < 0) {
                        var_fv0_5 += temp_fs0_2;
                    }
                    (*(f32 *)((char *)(temp_s0_2) + 0x48)) = (f32) var_fv0_5;
                    temp_v0_12 = func_801FA30C() & 0x1F;
                    var_fv0_6 = (f64) temp_v0_12;
                    if (temp_v0_12 < 0) {
                        var_fv0_6 += temp_fs0_2;
                    }
                    (*(f32 *)((char *)(temp_s0_2) + 0x4C)) = (f32) ((f32) var_fv0_6 - 16.0f);
                }
                ++var_s2_2;
            } while (5 > var_s2_2);
            *((s16 *)((s8 *)&D_8011F32E + ((arg0 & 0xFFFF) * 0x64))) = 2;
            (*(u16 *)((char *)(temp_s1) + 0x14)) = 0x28U;
        }
        var_a0 = arg0 & 0xFFFF;
    }
    func_8013F44C(var_a0, temp_s1);
}
