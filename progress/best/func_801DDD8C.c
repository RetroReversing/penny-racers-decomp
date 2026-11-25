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

extern int D_801E9994;
extern int D_801E99C0;
extern int D_801E9D38;
extern int D_801E9D3C;
extern int D_801E9D40;
extern int D_801E9D44;
extern int D_801E9D48;
extern int D_801E9D4C;
extern int D_801E9D50;
extern int D_801E9D54;
s32 func_800DE2E0();
s32 func_800DE38C();
u16 func_800DE41C();
s32 func_8014B854();
s32 func_801D651C();
s32 func_801DD938();
s32 func_801DDCDC();
s32 nuContPakCodeSet();
s32 nuContPakFileDelete();
s32 nuContPakFileNum();
s32 nuContPakFileState();
s32 nuContPakGetFree();
s32 nuContPakOpen();
extern s8 D_80046832;
extern u16 D_8006F9E8;
extern u16 D_80072BDC;
extern char D_8011F32E[];
extern char D_8011F350[];
extern u16 D_8018BC3C;
extern s8 D_801D59B2;
extern char D_801E86F0[];
extern char D_801E8710[];
extern char D_801E8730[];
extern char D_801E8790[];
extern s32 *D_801E8794;
extern u16 D_801E879C;
extern u8 D_801E87C0;
extern u8 D_801E9720;
extern u16 D_801E9730;
extern u16 D_801E9764;
extern char D_801E9768[];
extern u16 D_801E977E;
extern char D_801E9788[];
extern u8 D_801E9798;
extern s8 D_801E9799;
extern s32 D_801E9980;
extern s32 D_801E9984;
extern u32 D_801E9988;
extern u32 D_801E998C;
extern s32 D_801E9990;
extern u8 D_801E9B1C;
extern char D_801E9B20[];
extern char D_801E9B38[];
extern char D_801E9B3C[];
extern char D_801E9B40[];
extern char D_801E9B42[];
extern char D_801E9B44[];
extern char D_801E9B48[];
extern char D_801E9B4C[];
extern char D_801E9B50[];
extern char D_801E9B54[];
extern u16 D_801E9D5C;
extern char D_801E9D60[];
extern u16 D_801F188A;
extern char D_801F1898[];
extern char D_801F189C[];
extern char D_801F18A4[];
extern s32 func_801CE928;
extern s32 func_801CEC2C;

void func_801DDD8C(s32 arg0) {
    char *__base_D_8011F32E;
    s32 *var_v0_8;
    s16 var_v1_3;
    s32 temp_a0_3;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_7;
    s8 *temp_a0;
    s8 *temp_a0_2;
    s8 *var_v0_3;
    s8 *var_v0_4;
    u16 temp_v0_8;
    u16 temp_v0_9;
    u16 temp_v1;
    u16 var_v0_5;
    u16 var_v0_6;
    u32 var_s0;
    u32 var_s0_2;
    u32 var_v1;
    u32 var_v1_2;

    __base_D_8011F32E = D_8011F32E;
    temp_v1 = *(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    if (temp_v1 != 0x14) {
        switch ((s32) temp_v1) {                    /* switch 1; irregular */
            var_v0 = arg0 & 0xFFFF;
            if (temp_v1 != 0x1F) {

            } else {
                D_801E9799 = 0;
block_96:
                *(__base_D_8011F32E + (var_v0 * 0x64)) = 2;
            }
            goto block_99;
            D_801E879C = 0;
            D_801E9720 = 0;
            D_801E977E = 0;
            D_801E9730 = 0;
            D_801F188A = 0;
            D_801E9799 = 0;
            D_801E9798 = 0;
            M2C_FIELD(D_801E8790, s32 **, 0) = D_801E86F0;
            M2C_FIELD(D_801E8790, s32 **, 4) = D_801E8710;
            M2C_FIELD(D_801E8790, s32 **, 8) = D_801E8730;
            D_80046832 = 1;
            *(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
            D_801E9764 = func_800DE41C(0, 0, 3, 0, 0x81, 0xFF, 0, &func_801CE928, &func_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            temp_v0 = D_801E9764 * 0x64;
            *(D_8011F350 + temp_v0) = &D_801D59B2;
            D_801D59B2 = 0;
            M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 2) = 0;
            M2C_FIELD(*(D_8011F350 + temp_v0), s16 *, 4) = 0;
            M2C_FIELD(*(D_8011F350 + temp_v0), s8 *, 6) = 0;
            M2C_FIELD(*(D_8011F350 + (D_801E9764 * 0x64)), s8 *, 7) = 0;
            M2C_FIELD(*(D_8011F350 + (D_801E9764 * 0x64)), s8 *, 8) = 0;
            M2C_FIELD(*(D_8011F350 + (D_801E9764 * 0x64)), s8 *, 9) = 0;
            temp_v0_2 = D_801E9764 * 0x64;
            M2C_FIELD(*(D_8011F350 + temp_v0_2), s16 *, 0xA) = 0x48;
            M2C_FIELD(*(D_8011F350 + temp_v0_2), s16 *, 0xC) = 0xC5;
            M2C_FIELD(*(D_8011F350 + temp_v0_2), s16 *, 0xE) = 0x50;
            M2C_FIELD(*(D_8011F350 + temp_v0_2), s16 *, 0x10) = 0x14;
            var_s0 = 0;
            var_v0_2 = 0 << 5;
            do {
                *(D_801E9B38 + var_v0_2) = 0;
                *(D_801E9B3C + var_v0_2) = 0;
                *(D_801E9B40 + var_v0_2) = 0;
                var_v1 = 0;
                temp_a0 = (var_s0 << 5) + D_801E9B42;
                var_v0_3 = temp_a0;
loop_23:
                *var_v0_3 = 0;
                var_v1 += 1;
                var_v0_3 = temp_a0 + var_v1;
                if (var_v1 < 4U) {
                    goto loop_23;
                }
                var_v1_2 = 0;
                temp_a0_2 = (var_s0 << 5) + D_801E9B42;
                var_v0_4 = temp_a0_2;
loop_25:
                *var_v0_4 = 0;
                var_v1_2 += 1;
                var_v0_4 = temp_a0_2 + var_v1_2;
                if (var_v1_2 < 0x10U) {
                    goto loop_25;
                }
                var_s0 += 1;
                var_v0_2 = var_s0 << 5;
            } while (var_s0 < 0x11U);
            /* fallthrough */
            if (D_801E879C != 0) {
                *(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0x385;
                goto block_99;
            }
            D_801E9D5C = 0;
            nuContPakOpen((D_801E87C0 * 0x10) + D_801F1898, D_801E87C0);
            temp_v0_3 = func_801DDCDC(D_801E87C0, 1);
            if (temp_v0_3 != 2) {
                if ((temp_v0_3 != 3) && (*(D_801F18A4 + (D_801E87C0 * 0x10)) == 1)) {
                    var_s0_2 = 0;
loop_33:
                    *(D_801E9B20 + var_s0_2) = 1;
                    temp_a0_3 = D_801E87C0 * 0x10;
                    *(D_801F189C + temp_a0_3) = var_s0_2;
                    nuContPakFileState(temp_a0_3 + D_801F1898, (var_s0_2 << 5) + D_801E9B38);
                    temp_v0_4 = func_801DDCDC(D_801E87C0, 1);
                    switch (temp_v0_4) {            /* switch 2; irregular */
                        goto block_106;
                        *(D_801E9B20 + var_s0_2) = 0;
                        /* fallthrough */
                        var_s0_2 += 1;
                        if (var_s0_2 >= 0x10U) {
                            temp_v0_5 = D_801E87C0 * 4;
                            nuContPakFileNum((D_801E87C0 * 0x10) + D_801F1898, temp_v0_5 + D_801E9788, temp_v0_5 + D_801E9D60);
                            temp_v0_6 = func_801DDCDC(D_801E87C0, 1);
                            if (temp_v0_6 != 2) {
                                if (temp_v0_6 != 3) {
                                    *(D_801E9768 + (D_801E87C0 * 4)) = nuContPakGetFree((D_801E87C0 * 0x10) + D_801F1898);
                                    temp_v0_7 = func_801DDCDC(D_801E87C0, 1);
                                    if (temp_v0_7 != 2) {
                                        if (temp_v0_7 != 3) {
                                            var_v0 = arg0 & 0xFFFF;
                                            if (D_801E9720 == 0) {
                                                *(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) = 1;
                                                D_801E9720 = 1;
                                                var_v0 = arg0 & 0xFFFF;
                                            }
                                            goto block_96;
                                        }
                                        goto block_106;
                                    }
                                    goto block_105;
                                }
                                goto block_106;
                            }
                            goto block_105;
                        }
                        goto loop_33;
                    }
                } else {
block_106:
                    func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x14, (s32) D_801E87C0, 0xA);
                    *(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0x385;
                    return;
                }
            } else {
block_105:
                func_801DD938(0x10, 0x1C, 0xA, 6, 0xC8, 0xB4, 0x12, 0x17, (s32) D_801E87C0, 0xD);
                *(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
                return;
            }
            break;
            if ((D_801E9988 == 1) || (((u32) D_801E9988 >= 0x10U) && (D_801E9988 & 2))) {
                if ((D_801E977E == 1) && (D_801F188A != 0)) {
                    D_801E9D5C += 2;
                    M2C_FIELD(D_801E8790, s32 **, 0) = D_801E86F0;
                    M2C_FIELD(D_801E8790, s32 **, 4) = D_801E8710;
                    *(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0xA;
                    goto block_63;
                }
                if (D_801E977E != 0) {
                    var_v0_5 = D_801E977E - 1;
                    goto block_62;
                }
                goto block_64;
            }
            if ((D_801E998C == 1) || (((u32) D_801E998C >= 0x10U) && (D_801E998C & 2))) {
                if ((D_801E977E == 5) && ((u16) D_801F188A < 9U)) {
                    D_801E9D5C -= 2;
                    M2C_FIELD(D_801E8790, s32 **, 0) = D_801E86F0;
                    M2C_FIELD(D_801E8790, s32 **, 4) = D_801E8710;
                    *(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0xB;
                    goto block_63;
                }
                if ((u16) D_801E977E < 6U) {
                    var_v0_5 = D_801E977E + 1;
block_62:
                    D_801E977E = var_v0_5;
block_63:
                    func_8014B854(0x3B);
                }
block_64:
                D_801E9730 = D_801F188A + D_801E977E;
            } else {
                if ((D_801E9990 == 1) && (*(D_801E9B20 + D_801E9730) == D_801E9990)) {
                    D_801E9799 = 1;
                    D_801E9B1C = 0;
                    *(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0x14;
                    goto block_86;
                }
                if ((D_801E9994 == 1) || (D_801E99C0 == 1)) {
                    func_801D651C(7, 0x3A);
                    *(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 0x384;
                    *(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) = 2;
                }
            }
            goto block_99;
            temp_v0_8 = D_801E9D5C + 2;
            D_801E9D5C = temp_v0_8;
            if ((s16) temp_v0_8 >= 0xF) {
                var_v0_6 = D_801F188A - 1;
block_75:
                D_801F188A = var_v0_6;
                D_801E9D5C = 0;
                D_801E9730 = var_v0_6 + D_801E977E;
                *(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
            }
            goto block_99;
            temp_v0_9 = D_801E9D5C - 2;
            D_801E9D5C = temp_v0_9;
            if ((s16) temp_v0_9 < -0xE) {
                var_v0_6 = D_801F188A + 1;
                goto block_75;
            }
            goto block_99;
            temp_v0_10 = D_801E9730 << 5;
            nuContPakCodeSet(temp_v0_10 + D_801E9B40, temp_v0_10 + (D_801E9B40 - 4));
            temp_a2 = D_801E9730 << 5;
            nuContPakFileDelete((D_801E87C0 * 0x10) + D_801F1898, temp_a2 + (D_801E9B40 + 6), temp_a2 + (D_801E9B40 + 2));
            temp_v0_11 = func_801DDCDC(D_801E87C0, 1);
            if (temp_v0_11 == 2) {
                func_801DD938(0x10, 0x1C, 0xA, 6, 0xC8, 0xB4, 0x12, 0x17, (s32) D_801E87C0, 0xD);
                var_v0_7 = (arg0 & 0xFFFF) * 0x64;
                var_v1_3 = 1;
                goto block_93;
            }
            if (temp_v0_11 == 3) {
                func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x14, (s32) D_801E87C0, 0xA);
                var_v0_7 = (arg0 & 0xFFFF) * 0x64;
                var_v1_3 = 0x385;
block_93:
                *(__base_D_8011F32E + var_v0_7) = var_v1_3;
                D_801E9799 = 0;
                return;
            }
            temp_v0_12 = D_801E9730 << 5;
            *(D_801E9B38 + temp_v0_12) = D_801E9D38;
            *(D_801E9B3C + temp_v0_12) = D_801E9D3C;
            *(D_801E9B40 + temp_v0_12) = D_801E9D40;
            *(D_801E9B44 + temp_v0_12) = D_801E9D44;
            *(D_801E9B48 + temp_v0_12) = D_801E9D48;
            *(D_801E9B4C + temp_v0_12) = D_801E9D4C;
            *(D_801E9B50 + temp_v0_12) = D_801E9D50;
            *(D_801E9B54 + temp_v0_12) = D_801E9D54;
            D_801E9799 = 0;
            *(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
            goto block_99;
            if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) == 0) {
                D_8006F9E8 = D_80072BDC;
                func_800DE38C();
                func_800DE2E0();
                D_80046832 = 0;
            }
            goto block_99;
        }
    } else {
        if (D_801E9984 == 1) {
            if (D_801E9B1C == 0) {
                D_801E9B1C = 1;
                goto block_82;
            }
        } else if (D_801E9980 == 1) {
            if (D_801E9B1C == D_801E9980) {
                D_801E9B1C = 0;
block_82:
                func_801D651C(7, 0x3B);
            }
        } else if (D_801E9990 == 1) {
            if (D_801E9B1C == D_801E9990) {
                func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x18, (s32) D_801E87C0, 0x2E);
block_86:
                func_801D651C(7, 0x3D);
            } else {
                goto block_88;
            }
        } else if (D_801E9994 == 1) {
block_88:
            D_801E9799 = 0;
            *(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
            func_801D651C(7, 0x3A);
        }
block_99:
        if ((u8) D_801E9798 < 0x1EU) {
            D_801E9798 += 1;
        } else {
            D_801E9798 = 0;
        }
        if (((u8) D_801E9798 < 0x14U) || (*(__base_D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) == 0x14)) {
            var_v0_8 = D_801E8710;
        } else {
            var_v0_8 = D_801E86F0;
        }
        D_801E8794 = var_v0_8;
    }
}
