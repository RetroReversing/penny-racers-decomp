void func_8012AD20(s32, u16 *, s32, s32);
u8 func_80149F40(s32, u32, s32);
void func_8014A4C8(s32, s16, s32, s32, s32);
void func_801CA140(s32);
void func_801CA494(s32, u8, u8, u8, s32);
void func_801CABF4(s32, s32, s32, s32, void *, void *, s32, void *, s32, s32, s32, s32);
s32 func_8020557C(u16 *, s32);
void func_80209B90(u16);
void func_80230960(void *);

extern u8 D_80000014;
extern u8 D_8011F2F0;
extern u8 D_8011F304;
extern u8 D_8011F330;
extern u8 D_8011F340;
extern u8 D_80187BF0;
extern s16 D_80187C00;
extern u8 D_802030CC;
extern u16 D_8021AFE6;
extern u8 D_8021AFEC;
extern u8 D_8021AFFC;
extern u8 D_8021B00C;
extern u8 D_8021B019;
extern f32 D_8021B01C;
extern f32 D_8021B020;
extern u8 D_8021B06A;
extern u16 D_8021B082;
extern s32 D_8021B128;
extern u8 D_8021B1C0;
extern u8 D_8021B23A;
extern u8 D_8021B29A;
extern u8 D_8021B2B8;
extern u8 D_8021B2C8;
extern u16 *D_8021C810;
extern u16 D_8021E146;
extern s16 D_8021E1A2;
extern u8 D_8021E20B;
extern u8 D_8021E22F;
extern u8 D_8021E2D9;
extern u8 D_8021E2FB;
extern u8 D_8021E31D;
extern u16 D_8021EFF8;
extern s32 D_8021F010;
extern u8 D_8021F013;
extern u16 D_8021F024;
extern u16 D_8021F026;
extern u8 D_8021F048;
extern u8 D_8021F090;
extern u8 D_8021F0A0;
extern u8 D_8021F260;
extern u8 D_8021F270;
extern u8 D_8022A770;
extern u8 D_80237DC0;
extern u8 D_802D6898;
extern u8 D_802D92A0;

void func_8020B3CC(s32 arg0, s32 arg1) {
    s32 var_a3_3;
    s16 *temp_a1;
    s16 var_a1_2;
    s16 var_a1_6;
    s16 var_a1_7;
    s16 var_a2_2;
    s16 var_a2_7;
    s16 var_a2_9;
    s32 temp_a0_3;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a2_2;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_15;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1_5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_11;
    s32 var_a1_13;
    s32 var_a1_4;
    s32 var_a1_8;
    s32 var_a1_9;
    s32 var_a2;
    s32 var_a2_4;
    s32 var_a2_6;
    s32 var_a2_8;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s3;
    s32 var_s5;
    s32 var_v0;
    s32 var_v1;
    s8 temp_t0;
    s8 temp_v0_3;
    u16 idx;
    u16 *temp_a0_4;
    u16 temp_v1;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_5;
    u8 temp_a0_6;
    u8 temp_a0_7;
    u8 temp_a0_8;
    u8 temp_a0_9;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_6;
    u8 var_a1_10;
    u8 var_a1_12;
    u8 var_a1_3;
    u8 var_a1_5;
    u8 var_a2_3;
    u8 var_a2_5;
    u8 var_a3;
    u8 var_a3_2;
    u8 *temp_a2;
    u8 *temp_s0_4;

    idx = arg1;
    func_80209B90(idx);
    temp_v1 = *(u16 *)(&D_8011F330 + idx * 0x64);
    switch (temp_v1) {                              /* irregular */
    case 0:
        *(u16 *)(idx * 0x64 + 0x8011F330) = 1;
        /* fallthrough */
    case 1:
        func_801CA140(arg0);
        func_801CA494(arg0, 0xFFU, 0xFFU, 0xFFU, 0xFF);
        var_s5 = 0;
        if (D_8021E1A2 == 0) {
            var_s5 = 0x61;
            var_s3 = 0x51;
        } else {
            var_s3 = 0;
        }
        temp_s1 = idx * 0x64;
        temp_v1_2 = *(&D_8011F2F0 + temp_s1);
        temp_a0 = *(&D_8021B00C + temp_v1_2);
        if (temp_a0 != 1) {
            var_v1 = idx;
            goto block_15;
        }
        var_v1 = idx;
        if (*(s32 *)(&D_8021AFEC + (temp_v1_2 * 4)) == temp_a0) {
            if (D_8021E1A2 == 0) {
                var_a2 = *(u16 *)(&D_8021B2B8 + (*(&D_8011F2F0 + temp_s1) * 4) + 2) + var_s3 + D_8021AFE6;
                var_a1 = func_8020557C(D_8021C810, 0xF) & 0xFFFF;
            } else {
                temp_v0 = *(&D_8011F2F0 + (var_v1 * 0x64)) * 4;
                var_a2 = *(u16 *)(&D_8021B2B8 + temp_v0 + 2) + var_s3 + D_8021AFE6;
                var_a1 = (*(u16 *)(&D_8021B2B8 + temp_v0) + var_s5) & 0xFFFF;
            }
            func_801CABF4(arg0, var_a1, var_a2 & 0xFFFF, 0xF, &D_802D92A0, D_8021C810, 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        } else {
block_15:
            temp_a0_2 = *(&D_8011F2F0 + (var_v1 * 0x64));
            if ((*(&D_8021B00C + temp_a0_2) == 1) && (*(s32 *)(&D_8021AFEC + (temp_a0_2 * 4)) == 0)) {
                D_80187C00 = 0xFFFF;
                var_s0 = 0;
loop_18:
                temp_v1_3 = *(&D_8011F2F0 + (idx * 0x64));
                temp_a2 = (temp_v1_3 * 0xE0) + &D_8021F270;
                temp_v0_2 = temp_v1_3 * 0x110;
                temp_v0_3 = *(s8 *)(temp_v0_2 + *(&D_8021E22F + temp_v0_2) + &D_8021E2D9 - 0xA8);
                temp_a0_3 = var_s0 * 2;
                if (*(u16 *)(temp_a0_3 + ((temp_v0_3 * 0x10) + temp_a2)) != 0xFFFF) {
                    *(u16 *)(temp_a0_3 + &D_80187BF0) = *(u16 *)(temp_a0_3 + (((temp_v0_3 & 0xFF) * 0x10) + temp_a2));
                    var_s0 += 1;
                    if (var_s0 < 8) {
                        goto loop_18;
                    }
                }
                func_801CA494(arg0, 0xFFU, 0xFFU, 0xFFU, 0xFF);
                if (D_8021E1A2 == 0) {
                    func_801CABF4(arg0, func_8020557C((u16 *)&D_80187BF0, 0xF) & 0xFFFF, (*(u16 *)(&D_8021B2B8 + (*(&D_8011F2F0 + (idx * 0x64)) * 4) + 2) + var_s3 + D_8021AFE6) & 0xFFFF, 0xF, &D_802D92A0, &D_80187BF0, 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
                    func_801CA494(arg0, 0xFFU, 0xFFU, 0xFFU, 0xFF);
                    if (D_8021B020 >= 2.1474836e9f) {
                        var_a0 = (s32) (D_8021B020 - 2.1474836e9f) | 0x80000000;
                    } else {
                        var_a0 = (s32) D_8021B020;
                    }
                    var_a1_2 = 0x99 - var_a0;
                    var_a2_2 = 0x44;
                } else {
                    temp_s0_2 = idx * 0x64;
                    temp_v0_4 = *(&D_8011F2F0 + temp_s0_2) * 4;
                    func_801CABF4(arg0, (*(u16 *)(&D_8021B2B8 + temp_v0_4) + var_s5) & 0xFFFF, (*(u16 *)(&D_8021B2B8 + temp_v0_4 + 2) + var_s3 + D_8021AFE6) & 0xFFFF, 0xF, &D_802D92A0, &D_80187BF0, 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
                    func_801CA494(arg0, 0xFFU, 0xFFU, 0xFFU, 0xFF);
                    temp_v0_5 = *(&D_8011F2F0 + temp_s0_2) * 8;
                    var_a1_2 = *(s16 *)(&D_8021B29A + temp_v0_5);
                    var_a2_2 = *(s16 *)(&D_8021B29A + temp_v0_5 + 4) + D_8021AFE6;
                }
                func_8014A4C8(arg0, var_a1_2, (s32) var_a2_2, 5, 0);
            } else {
                if (D_8021E1A2 == 0) {
                    if (D_8021B128 == 0) {
                        var_a1_3 = *(&D_8021F260 + 0);
                        var_a2_3 = *(&D_8021F260 + 1);
                        var_a3 = *(&D_8021F260 + 2);
                    } else {
                        var_a1_3 = 0xFF;
                        var_a2_3 = 0xFF;
                        var_a3 = 0xFF;
                    }
                    func_801CA494(arg0, var_a1_3, var_a2_3, var_a3, 0xFF);
                    temp_s0_3 = idx * 0x64;
                    var_a2_4 = *(u16 *)(&D_8021B2B8 + (*(&D_8011F2F0 + temp_s0_3) * 4) + 2) + var_s3 + D_8021AFE6;
                    var_a1_4 = func_8020557C(*(u16 **)(&D_802030CC + (*(s32 *)(&D_8021AFFC + (*(&D_8011F2F0 + temp_s0_3) * 4)) * 4)), 0xF) & 0xFFFF;
                } else {
                    if (*(&D_8021E20B + (*(&D_8011F2F0 + (idx * 0x64)) * 9)) == 0) {
                        var_a1_5 = *(&D_8021F260 + 0);
                        var_a2_5 = *(&D_8021F260 + 1);
                        var_a3_2 = *(&D_8021F260 + 2);
                    } else {
                        var_a1_5 = 0xFF;
                        var_a2_5 = 0xFF;
                        var_a3_2 = 0xFF;
                    }
                    func_801CA494(arg0, var_a1_5, var_a2_5, var_a3_2, 0xFF);
                    temp_v0_6 = *(&D_8011F2F0 + (idx * 0x64)) * 4;
                    var_a2_4 = *(u16 *)(&D_8021B2B8 + temp_v0_6 + 2) + var_s3 + D_8021AFE6;
                    var_a1_4 = (*(u16 *)(&D_8021B2B8 + temp_v0_6) + var_s5) & 0xFFFF;
                }
                func_801CABF4(arg0, var_a1_4, var_a2_4 & 0xFFFF, 0xF, &D_802D92A0, &D_80187BF0, 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
            }
            func_801CA494(arg0, 0xFFU, 0xFFU, 0xFFU, 0xFF);
        }
        if (D_8021E1A2 == 0) {
            if (D_8021B128 != 1) {
                if (D_8021B019 == 2) {
                    var_a2_6 = (D_8021B082 + 0x77) << 0x10;
                    var_a1_6 = 0x24;
                } else {
                    var_a2_6 = (D_8021B082 + 0x77) << 0x10;
                    var_a1_6 = 0x42;
                }
                func_8014A4C8(arg0, var_a1_6, var_a2_6 >> 0x10, 5, 0);
                if (D_8021B019 == 1) {
                    var_a1_7 = 0xF6;
                    var_a2_7 = D_8021B082 + 0x77;
                    var_a3_3 = 5;
                } else {
                    var_a1_7 = 0xD8;
                    var_a2_7 = D_8021B082 + 0x77;
                    var_a3_3 = 5;
                }
                goto block_62;
            }
            goto block_63;
        }
        temp_s1_2 = idx * 0x64;
        temp_v1_4 = *(&D_8011F2F0 + temp_s1_2);
        if (*(&D_8021B00C + temp_v1_4) == 0) {
            temp_v0_7 = temp_v1_4 * 0x18;
            func_8014A4C8(arg0, *(s16 *)(&D_8021B23A + temp_v0_7), (s32) (s16) (*(s16 *)(&D_8021B23A + temp_v0_7 + 4) + D_8021AFE6), 0xB, *(s16 *)(&D_8021B23A + temp_v0_7 + 6));
            temp_v0_8 = *(&D_8011F2F0 + temp_s1_2) * 0x18;
            func_8014A4C8(arg0, *(s16 *)(&D_8021B23A + temp_v0_8 + 0xC), (s32) (s16) (*(s16 *)(&D_8021B23A + temp_v0_8 + 0x10) + D_8021AFE6), 0xB, *(s16 *)(&D_8021B23A + temp_v0_8 + 0x12));
        }
        var_v0 = idx;
        if (*(&D_8021E20B + (*(&D_8011F2F0 + (idx * 0x64)) * 9)) == 1) {
            var_s0_2 = 0;
            var_a0_2 = 0 * 2;
            do {
                temp_v0_9 = ((*(&D_8011F2F0 + (idx * 0x64)) * 0xF) + (var_a0_2 + var_s0_2)) * 2;
                func_8014A4C8(arg0, *(s16 *)(&D_8021B1C0 + temp_v0_9), (s32) (s16) (*(s16 *)(&D_8021B1C0 + temp_v0_9 + 2) + D_8021AFE6), 0xB, (s32) *(s16 *)(&D_8021B1C0 + temp_v0_9 + 4));
                var_s0_2 += 1;
                var_a0_2 = var_s0_2 * 2;
            } while (var_s0_2 < 5);
            temp_v1_5 = *(&D_8011F2F0 + (idx * 0x64)) * 4;
            temp_a1 = (s16 *)(temp_v1_5 + (s32)&D_8021B2C8);
            temp_a0_4 = (u16 *)(temp_v1_5 + (s32)&D_8021B2C8 + 2);
            if (D_8021E1A2 == 1) {
                var_a1_7 = *temp_a1;
                if (!(D_8021B01C >= 2.1474836e9f)) {
                    var_a2_8 = (s32) D_8021B01C + 0x14;
                } else {
                    var_a2_8 = (s32) (D_8021B01C - 2.1474836e9f) | (s32) &D_80000014;
                }
                var_a2_9 = (*temp_a0_4 + D_8021AFE6) - var_a2_8;
            } else {
                var_a1_7 = *temp_a1;
                temp_a2_2 = *temp_a0_4 + D_8021AFE6;
                if (!(D_8021B01C >= 2.1474836e9f)) {
                    var_a2_9 = temp_a2_2 - (s32) D_8021B01C;
                } else {
                    var_a2_9 = temp_a2_2 - ((s32) (D_8021B01C - 2.1474836e9f) | 0x80000000);
                }
            }
            var_a2_7 = var_a2_9;
            var_a3_3 = 0xB;
block_62:
            func_8014A4C8(arg0, var_a1_7, (s32) var_a2_7, var_a3_3, 0);
block_63:
            var_v0 = idx;
        }
        temp_v1_6 = *(&D_8011F2F0 + (var_v0 * 0x64));
        if (*(&D_8021B00C + temp_v1_6) == 0) {
            *(void **)(*(u8 **)(&D_8011F340 + (*(u16 *)(&D_8011F304 + (*(u16 *)(&D_8021F090 + (temp_v1_6 * 2)) * 0x64)) * 0x64)) + 4) = (void *) ((*(s32 *)(&D_8021AFFC + (temp_v1_6 * 4)) * 0xC) + &D_80237DC0);
            if (D_8021E1A2 == 0) {
                var_a1_8 = *(s32 *)(&D_8021AFFC + (*(&D_8011F2F0 + (idx * 0x64)) * 4)) - 1;
                if ((s32) D_8021B06A < var_a1_8) {
                    var_a1_8 = 0;
                } else if (var_a1_8 < 0) {
                    var_a1_8 = (s32) D_8021B06A;
                }
                *(void **)(*(u8 **)(&D_8011F340 + (*(u16 *)(&D_8011F304 + (D_8021E146 * 0x64)) * 0x64)) + 4) = (void *) ((var_a1_8 * 0xC) + &D_80237DC0);
                var_a1_9 = *(s32 *)(&D_8021AFFC + (*(&D_8011F2F0 + (idx * 0x64)) * 4)) + 1;
                if ((s32) D_8021B06A < var_a1_9) {
                    var_a1_9 = 0;
                } else if (var_a1_9 < 0) {
                    var_a1_9 = (s32) D_8021B06A;
                }
                *(void **)(*(u8 **)(&D_8011F340 + (*(u16 *)(&D_8011F304 + (D_8021F024 * 0x64)) * 0x64)) + 4) = (void *) ((var_a1_9 * 0xC) + &D_80237DC0);
                temp_a1_3 = *(s32 *)(&D_8021AFFC + (*(&D_8011F2F0 + (idx * 0x64)) * 4)) - 1;
                if ((s32) D_8021B06A < temp_a1_3) {
                    var_a1_10 = 0;
                    goto block_78;
                }
                var_a1_11 = temp_a1_3 - 1;
                if (temp_a1_3 < 0) {
                    var_a1_10 = D_8021B06A;
block_78:
                    var_a1_11 = var_a1_10 - 1;
                }
                if ((s32) D_8021B06A < var_a1_11) {
                    var_a1_11 = 0;
                } else if (var_a1_11 < 0) {
                    var_a1_11 = (s32) D_8021B06A;
                }
                *(void **)(*(u8 **)(&D_8011F340 + (*(u16 *)(&D_8011F304 + (D_8021F026 * 0x64)) * 0x64)) + 4) = (void *) ((var_a1_11 * 0xC) + &D_80237DC0);
                temp_a1_4 = *(s32 *)(&D_8021AFFC + (*(&D_8011F2F0 + (idx * 0x64)) * 4)) + 1;
                if ((s32) D_8021B06A < temp_a1_4) {
                    var_a1_12 = 0;
                    goto block_87;
                }
                var_a1_13 = temp_a1_4 + 1;
                if (temp_a1_4 < 0) {
                    var_a1_12 = D_8021B06A;
block_87:
                    var_a1_13 = var_a1_12 + 1;
                }
                if ((s32) D_8021B06A < var_a1_13) {
                    var_a1_13 = 0;
                } else if (var_a1_13 < 0) {
                    var_a1_13 = (s32) D_8021B06A;
                }
                *(void **)(*(u8 **)(&D_8011F340 + (*(u16 *)(&D_8011F304 + (D_8021EFF8 * 0x64)) * 0x64)) + 4) = (void *) ((var_a1_13 * 0xC) + &D_80237DC0);
                return;
            }
        } else {
            temp_s1_3 = idx * 0x64;
            temp_a0_5 = *(&D_8011F2F0 + temp_s1_3);
            temp_v0_10 = temp_a0_5 * 0x110;
            *(void **)(*(u8 **)(&D_8011F340 + (*(u16 *)(&D_8011F304 + (*(u16 *)(&D_8021F090 + (temp_a0_5 * 2)) * 0x64)) * 0x64)) + 4) = (void *) ((*(s8 *)(&D_8021E22F + (temp_v0_10 + *(&D_8021E22F + temp_v0_10)) + 2) * 0xC) + &D_80237DC0);
            temp_v0_11 = *(&D_8011F2F0 + temp_s1_3) * 0x110;
            temp_t0 = *(s8 *)(&D_8021E22F + (temp_v0_11 + *(&D_8021E22F + temp_v0_11)) + 2);
            D_8021F010 = (s32) temp_t0;
            temp_a0_6 = *(&D_8011F2F0 + temp_s1_3);
            func_8012AD20(*(u16 *)(&D_8011F304 + (*(u16 *)(&D_8021F090 + (temp_a0_6 * 2)) * 0x64)), (u16 *)(&D_8021F0A0 + (temp_a0_6 << 5)), D_8021F013, *(&D_8021F048 + (temp_a0_6 * 0xE) + temp_t0));
            temp_v1_6 = *(&D_8011F2F0 + temp_s1_3);
            temp_s0_4 = (temp_v1_6 * 0x8F0) + &D_8022A770;
            *(u16 *)(temp_s0_4 + 2) = *(u16 *)(&D_8021F090 + (temp_v1_6 * 2));
            temp_a0_7 = *(&D_8011F2F0 + temp_s1_3);
            temp_v0_12 = temp_a0_7 * 0x110;
            *(s16 *)(temp_s0_4 + 0x534) = (s16) (func_80149F40(temp_a0_7, 5, *(s8 *)(&D_8021E2D9 + (temp_v0_12 + *(&D_8021E2D9 + temp_v0_12)) + 2)) & 0xFF);
            temp_a0_8 = *(&D_8011F2F0 + temp_s1_3);
            temp_v0_13 = temp_a0_8 * 0x110;
            *(s16 *)(temp_s0_4 + 0x538) = (s16) (func_80149F40(temp_a0_8, 6, *(s8 *)(&D_8021E2FB + (temp_v0_13 + *(&D_8021E2FB + temp_v0_13)) + 2)) & 0xFF);
            temp_a0_9 = *(&D_8011F2F0 + temp_s1_3);
            temp_v0_14 = temp_a0_9 * 0x110;
            *(s16 *)(temp_s0_4 + 0x53A) = (s16) (func_80149F40(temp_a0_9, 7, *(s8 *)(&D_8021E31D + (temp_v0_14 + *(&D_8021E31D + temp_v0_14)) + 2)) & 0xFF);
            temp_v0_15 = *(&D_8011F2F0 + temp_s1_3) * 0x110;
            *(s16 *)(temp_s0_4 + 0x230) = (s16) *(s8 *)(&D_8021E22F + (temp_v0_15 + *(&D_8021E22F + temp_v0_15)) + 2);
            func_80230960(temp_s0_4);
            return;
        }
        break;
    }
}
