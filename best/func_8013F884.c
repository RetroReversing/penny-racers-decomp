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

extern short D_800DD2C0;
extern unsigned short D_8006FB10;
s32 alSeqpStop();
s32 func_801D65BC();
s32 func_8022FDF0();
extern char D_8006FAF0[];
extern char D_8006FB38[];
extern char D_800DB1B8[];
extern char D_8011F2F0[];
extern char D_8011F2FD[];
extern s32 D_80183BD8;
extern char D_80189900[];
extern s32 D_80189920;
extern s32 D_80189C8C;
extern s32 D_80189C90;
extern s32 D_8018A244;
extern char D_8022A770[];
extern u8 D_8022AFE9;

void func_8013F884(s32 arg0) {
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u16 *var_s0;
    u16 temp_v1;
    void *temp_s1;
    void *temp_v1_2;
    void *temp_v1_5;
    void *temp_v1_8;
    void *var_a2;
    void *var_a3;

    temp_s1 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
    temp_v1 = M2C_FIELD(temp_s1, u16 *, 0x3E);
    if (temp_v1 != 1) {
        if ((s32) temp_v1 >= 2) {
            var_a1 = 0;
            if (temp_v1 != 2) {
                goto block_68;
            }
            D_8018A244 = 0;
            D_80189920 = 0;
            D_80183BD8 = 0;
            var_a3 = D_800DB1B8 + 0x2108;
            var_a2 = (void *)5;
            var_v0 = 0 * 8;
loop_37:
            temp_v1_2 = ((((var_v0 + var_a1) * 0x10) - var_a1) * 0x10) + D_8022A770;
            if (M2C_FIELD(temp_v1_2, u16 *, 2) != 0xFFFF) {
                if ((M2C_FIELD(temp_v1_2, s16 *, 0x594) >= 4) && (var_a1 < D_800DD2C0) && (M2C_FIELD(temp_v1_2, u8 *, 0x879) != 5)) {
                    D_8018A244 += 1;
                }
                if (M2C_FIELD(temp_v1_2, u16 *, 0x560) & 0x20) {
                    if (M2C_FIELD(temp_v1_2, u8 *, 0x879) == 0) {
                        D_80189920 = 1;
                    }
                }
                if (M2C_FIELD(temp_v1_2, u8 *, 0x879) == 5) {
                    if (*((var_a1 * 4) + D_80189900) == 0) {
                        D_80189C90 = 0x200;
                    }
                    temp_v1_3 = D_80183BD8 + 1;
                    D_80183BD8 = temp_v1_3;
                    if (temp_v1_3 != D_800DD2C0) {
                        goto block_52;
                    }
                    goto block_62;
                }
                goto block_52;
            }
block_52:
            var_a1 += 1;
            var_v0 = var_a1 * 8;
            if (var_a1 >= 7) {
                if (D_80189920 != 0) {
                    var_a1_2 = 0;
                    if (D_80189C8C != 0xC8) {
                        func_801D65BC(0xE, 0, (void *)5, var_a3);
                        D_80189C8C = 0xC8;
                        goto block_67;
                    }
                    goto block_69;
                }
                if (D_8018A244 != D_800DD2C0) {
                    if (D_8018A244 != 0) {
                        var_a1_2 = 0;
                        if (D_80189C8C != 0xFF) {
                            alSeqpStop(D_8006FB38, 0, 5, var_a3);
                            D_80189C8C = 0xFF;
                            goto block_67;
                        }
                    } else {
                        var_s0 = D_8006FAF0 + 0x20;
                        var_a1_2 = 1;
                        if (D_80189C8C != D_8006FB10) {
                            goto block_66;
                        }
                        temp_v1_4 = D_80189C90 - 1;
                        if (D_80189C90 != 0) {
                            D_80189C90 = temp_v1_4;
                            var_a1_2 = 0;
                            if (temp_v1_4 == 1) {
                                var_s0 = D_8006FAF0 + 0x20;
                                var_a1_2 = 1;
                                goto block_66;
                            }
                        } else {
                            goto block_68;
                        }
                    }
                    goto block_69;
                }
                goto block_62;
            }
            goto loop_37;
        }
        var_a1_2 = 0;
        if (temp_v1 != 0) {

        } else {
            func_8022FDF0(D_8006FB10, 0);
            D_80189C8C = (s32) D_8006FB10;
            M2C_FIELD(temp_s1, u16 *, 0x3E) = 1U;
            var_a1_3 = 0;
            var_v0_2 = 0 * 4;
            do {
                *(var_v0_2 + D_80189900) = (s32) D_8022AFE9;
                var_a1_3 += 1;
                var_v0_2 = var_a1_3 * 4;
            } while (var_a1_3 < 7);
            goto block_67;
        }
        goto block_69;
    }
    D_8018A244 = 0;
    D_80189920 = 0;
    D_80183BD8 = 0;
    var_a1_4 = 0;
    var_a3 = (void *)0x200;
    var_a2 = D_800DB1B8 + 0x2108;
    var_v0_3 = 0 * 8;
loop_12:
    temp_v1_5 = ((((var_v0_3 + var_a1_4) * 0x10) - var_a1_4) * 0x10) + D_8022A770;
    if (M2C_FIELD(temp_v1_5, u16 *, 2) != 0xFFFF) {
        if ((M2C_FIELD(temp_v1_5, s16 *, 0x594) >= 3) && (M2C_FIELD(temp_v1_5, u8 *, 0x879) == 0)) {
            D_8018A244 += 1;
        }
        if (M2C_FIELD(temp_v1_5, u16 *, 0x560) & 0x20) {
            if (M2C_FIELD(temp_v1_5, u8 *, 0x879) == 0) {
                D_80189920 = 1;
            }
        }
        if (M2C_FIELD(temp_v1_5, u8 *, 0x879) == 5) {
            if (*((var_a1_4 * 4) + D_80189900) == 0) {
                D_80189C90 = 0x200;
            }
            temp_v1_6 = D_80183BD8 + 1;
            D_80183BD8 = temp_v1_6;
            if (temp_v1_6 != D_800DD2C0) {
                goto block_26;
            }
block_62:
            *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
            return;
        }
        goto block_26;
    }
block_26:
    var_a1_4 += 1;
    var_v0_3 = var_a1_4 * 8;
    if (var_a1_4 >= 7) {
        if (D_80189920 != 0) {
            var_a1_2 = 0;
            if (D_80189C8C != 0xC8) {
                func_801D65BC(0xE, 0, var_a2, (void *)0x200);
                D_80189C8C = 0xC8;
                goto block_67;
            }
        } else {
            if (D_8018A244 != 0) {
                func_8022FDF0(D_8006FB10, 1, var_a2, (void *)0x200);
                D_80189C8C = (s32) D_8006FB10;
                M2C_FIELD(temp_s1, u16 *, 0x3E) = 2U;
                goto block_67;
            }
            var_s0 = D_8006FAF0 + 0x20;
            var_a1_2 = 0;
            if (D_80189C8C == D_8006FB10) {
                temp_v1_7 = D_80189C90 - 1;
                if (D_80189C90 != 0) {
                    D_80189C90 = temp_v1_7;
                    if (temp_v1_7 == 1) {
                        goto block_66;
                    }
                }
            } else {
block_66:
                func_8022FDF0(D_8006FB10, var_a1_2, var_a2, var_a3);
                D_80189C8C = (s32) *var_s0;
block_67:
                D_80189C90 = 0;
block_68:
                var_a1_2 = 0;
            }
        }
block_69:
        var_v0_4 = 0 * 8;
        do {
            temp_v1_8 = ((((var_v0_4 + var_a1_2) * 0x10) - var_a1_2) * 0x10) + D_8022A770;
            if (M2C_FIELD(temp_v1_8, u16 *, 2) != 0xFFFF) {
                *((var_a1_2 * 4) + D_80189900) = (s32) M2C_FIELD(temp_v1_8, u8 *, 0x879);
            }
            var_a1_2 += 1;
            var_v0_4 = var_a1_2 * 8;
        } while (var_a1_2 < 7);
        return;
    }
    goto loop_12;
}
