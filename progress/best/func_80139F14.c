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
extern unsigned short D_8006FB10;
extern short D_800DD2C0;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_8006FAF0[];
extern char D_800DB1B8[];
extern char D_8011F330[];
extern f32 D_80183B54;
extern f32 D_80183B58;
extern f32 D_80183B5C;
extern f32 D_80183B60;
extern f32 D_80183B64;
extern f32 D_80183B68;
extern f32 D_80183B6C;
extern f32 D_80183B70;
extern s16 D_80183B74;
extern u8 D_80183B75;
extern s16 D_80183B76;
extern u8 D_80183B77;
extern s16 D_80183B78;
extern u8 D_80183B79;
extern char D_80189CD0[];
extern char D_8018A150[];
extern char D_8018A2C8[];

void func_80139F14(void **arg0, s32 arg1) {
    f32 __repair_pin_0 = 1.0f;
    f32 temp_fa0;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft3;
    f32 temp_ft3_2;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 var_ft0;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv1;
    f32 var_fv1_2;
    f32 var_fv1_3;
    s16 temp_a0;
    s16 temp_a1;
    s16 var_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_v0_10;
    s32 var_v0_11;
    s32 var_v0_12;
    s32 var_v0_13;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_8;
    s32 var_v0_9;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u32 var_v0_4;
    u32 var_v0_7;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;
    s32 *temp;

    temp_v1 = (arg1 & 0xFFFF) * 0x64;
    temp = D_8011F330 + temp_v1;
    if (*temp == 0) {
        *(D_8011F330 + temp_v1) = 1;
        D_80183B6C = 0.5f;
        D_80183B70 = 900.0f;
        switch (D_8006FB10) {
        case 0:
        case 1:
            D_80183B6C = 0.2f;
            D_80183B54 = 100.0f;
            D_80183B58 = 80.0f;
            D_80183B5C = 255.0f;
            D_80183B60 = 180.0f;
            D_80183B64 = 200.0f;
            D_80183B68 = 255.0f;
            var_v0 = 0xFF;
block_14:
            D_80183B74 = var_v0;
            D_80183B76 = var_v0;
            break;
        case 2:
            D_80183B6C = 0.0f;
            D_80183B54 = 155.0f;
            D_80183B58 = 150.0f;
            D_80183B5C = 170.0f;
            D_80183B60 = 155.0f;
            D_80183B64 = 150.0f;
            D_80183B68 = 170.0f;
            D_80183B74 = 0x91;
            D_80183B76 = 0x8C;
            var_v0 = 0xA0;
            break;
        case 3:
            D_80183B54 = 100.0f;
            D_80183B58 = 80.0f;
            D_80183B5C = 255.0f;
            D_80183B6C = 0.3f;
            D_80183B60 = 210.0f;
            D_80183B64 = 230.0f;
            D_80183B68 = 255.0f;
            var_v0 = 0xFF;
            goto block_14;
        case 4:
            D_80183B6C = 0.3f;
            D_80183B54 = 126.0f;
            D_80183B58 = 140.0f;
            D_80183B5C = 224.0f;
            D_80183B60 = 251.0f;
            D_80183B64 = 251.0f;
            D_80183B68 = 216.0f;
            var_v0 = 0xFF;
            goto block_14;
        case 5:
            D_80183B6C = 0.2f;
            D_80183B54 = 4.0f;
            D_80183B58 = 1.0f;
            D_80183B5C = 45.0f;
            D_80183B60 = 32.0f;
            D_80183B64 = 21.0f;
            D_80183B68 = 115.0f;
            var_v0 = 0xFF;
            goto block_14;
        case 6:
            D_80183B6C = 0.2f;
            D_80183B54 = 21.0f;
            D_80183B58 = 33.0f;
            D_80183B5C = 3.0f;
            D_80183B60 = 195.0f;
            D_80183B64 = 45.0f;
            D_80183B68 = 16.0f;
            var_v0 = 0xBE;
            goto block_14;
        case 7:
            D_80183B6C = 0.0f;
            D_80183B70 = 920.0f;
            D_80183B54 = 170.0f;
            D_80183B58 = 170.0f;
            D_80183B5C = 170.0f;
            D_80183B60 = 170.0f;
            D_80183B64 = 170.0f;
            D_80183B68 = 170.0f;
            var_v0 = 0xBE;
            goto block_14;
        case 8:
            D_80183B6C = 0.2f;
            D_80183B54 = 120.0f;
            D_80183B58 = 156.0f;
            D_80183B5C = 230.0f;
            D_80183B60 = 255.0f;
            D_80183B64 = 255.0f;
            D_80183B68 = 255.0f;
            var_v0 = 0xFF;
            goto block_14;
        case 9:
            D_80183B6C = 0.3f;
            D_80183B54 = 5.0f;
            D_80183B58 = 109.0f;
            D_80183B5C = 176.0f;
            D_80183B60 = 195.0f;
            D_80183B64 = 246.0f;
            D_80183B68 = 248.0f;
            var_v0 = 0xFF;
            goto block_14;
        case 10:
            D_80183B6C = 0.8f;
            D_80183B54 = 50.0f;
            D_80183B58 = 100.0f;
            D_80183B5C = 250.0f;
            D_80183B60 = 255.0f;
            D_80183B64 = 255.0f;
            D_80183B68 = 255.0f;
            var_v0 = 0xFF;
            goto block_14;
        default:
            D_80183B54 = 0.0f;
            D_80183B58 = 0.0f;
            D_80183B5C = 250.0f;
            D_80183B60 = 0.0f;
            D_80183B64 = 0.0f;
            D_80183B68 = 0.0f;
            var_v0 = 0xFF;
            goto block_14;
        }
        D_80183B78 = var_v0;
        temp_v0 = (char *)D_800DB1B8 + 0x2128;
        temp_ft3 = (f32) (M2C_FIELD(temp_v0, s16 *, 6) - M2C_FIELD(temp_v0, s16 *, 2)) * D_80183B6C;
        var_a1 = 0;
        temp_fv0 = (f32) 0;
        var_ft0 = temp_fv0;
        if (temp_fv0 < temp_ft3) {
            do {
                if (D_80183B60 < D_80183B54) {
                    var_fv1 = D_80183B54 - (((D_80183B54 - D_80183B60) * var_ft0) / temp_ft3);
                    if (var_fv1 >= 2.1474836e9f) {
                        var_fv0 = var_fv1 - 2.1474836e9f;
                        goto block_24;
                    }
                    goto block_23;
                }
                var_fv1 = (((D_80183B60 - D_80183B54) * (f32) var_a1) / temp_ft3) + D_80183B54;
                if (var_fv1 >= 2.1474836e9f) {
                    var_fv0 = var_fv1 - 2.1474836e9f;
block_24:
                    var_v1 = (s32) var_fv0 | 0x80000000;
                } else {
block_23:
                    var_v1 = (s32) var_fv1;
                }
                *(D_8018A2C8 + var_a1) = (s8) var_v1;
                if (!(D_80183B64 < D_80183B58)) {
                    var_fv1_2 = (((D_80183B64 - D_80183B58) * (f32) var_a1) / temp_ft3) + D_80183B58;
                    if (var_fv1_2 >= 2.1474836e9f) {
                        var_fv0_2 = var_fv1_2 - 2.1474836e9f;
                        goto block_34;
                    }
                    goto block_33;
                }
                var_fv1_2 = D_80183B58 - (((D_80183B58 - D_80183B64) * (f32) var_a1) / temp_ft3);
                if (var_fv1_2 >= 2.1474836e9f) {
                    var_fv0_2 = var_fv1_2 - 2.1474836e9f;
block_34:
                    var_v1_2 = (s32) var_fv0_2 | 0x80000000;
                } else {
block_33:
                    var_v1_2 = (s32) var_fv1_2;
                }
                *(D_80189CD0 + var_a1) = (s8) var_v1_2;
                if (!(D_80183B68 < D_80183B5C)) {
                    var_fv1_3 = (((D_80183B68 - D_80183B5C) * (f32) var_a1) / temp_ft3) + D_80183B5C;
                    if (var_fv1_3 >= 2.1474836e9f) {
                        var_fv0_3 = var_fv1_3 - 2.1474836e9f;
                        goto block_44;
                    }
                    goto block_43;
                }
                var_fv1_3 = D_80183B5C - (((D_80183B5C - D_80183B68) * (f32) var_a1) / temp_ft3);
                if (var_fv1_3 >= 2.1474836e9f) {
                    var_fv0_3 = var_fv1_3 - 2.1474836e9f;
block_44:
                    var_v1_3 = (s32) var_fv0_3 | 0x80000000;
                } else {
block_43:
                    var_v1_3 = (s32) var_fv1_3;
                }
                *(D_8018A150 + var_a1) = (s8) var_v1_3;
                var_a1 += 1;
                var_ft0 = (f32) var_a1;
            } while (var_ft0 < temp_ft3);
        }
    }
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0xBA001402;
    M2C_FIELD(temp_v1_3, s32 *, 4) = 0x300000;
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    M2C_FIELD(temp_v1_4, s32 *, 0) = 0xF7000000;
    if (D_80183B54 >= 2.1474836e9f) {
        var_v0_2 = ((s32) (D_80183B54 - 2.1474836e9f) | 0x80000000) << 8;
    } else {
        var_v0_2 = (s32) D_80183B54 << 8;
    }
    if (!(D_80183B58 >= 2.1474836e9f)) {
        var_v0_3 = (s32) D_80183B58 * 8;
    } else {
        var_v0_3 = ((s32) (D_80183B58 - 2.1474836e9f) | 0x80000000) * 8;
    }
    if (!(D_80183B5C >= 2.1474836e9f)) {
        var_v0_4 = (u32) (s32) D_80183B5C >> 2;
    } else {
        var_v0_4 = (u32) ((s32) (D_80183B5C - 2.1474836e9f) | 0x80000000) >> 2;
    }
    if (!(D_80183B54 >= 2.1474836e9f)) {
        var_v0_5 = (s32) D_80183B54 << 8;
    } else {
        var_v0_5 = ((s32) (D_80183B54 - 2.1474836e9f) | 0x80000000) << 8;
    }
    if (!(D_80183B58 >= 2.1474836e9f)) {
        var_v0_6 = (s32) D_80183B58 * 8;
    } else {
        var_v0_6 = ((s32) (D_80183B58 - 2.1474836e9f) | 0x80000000) * 8;
    }
    if (!(D_80183B5C >= 2.1474836e9f)) {
        var_v0_7 = (u32) (s32) D_80183B5C >> 2;
    } else {
        var_v0_7 = (u32) ((s32) (D_80183B5C - 2.1474836e9f) | 0x80000000) >> 2;
    }
    M2C_FIELD(temp_v1_4, s32 *, 4) = (s32) ((((var_v0_2 & 0xF800) | (var_v0_3 & 0x7C0) | (var_v0_4 & 0x3E) | 1) << 0x10) | 1 | ((var_v0_5 & 0xF800) | (var_v0_6 & 0x7C0) | (var_v0_7 & 0x3E)));
    var_a3 = 0;
    if (D_800DD2C0 > 0) {
        var_v1_4 = 0 * 4;
        do {
            temp_v1_5 = (var_v1_4 + var_a3) * 8;
            temp_a0 = *((char *)D_800DB1B8 + 0x2128 + temp_v1_5);
            temp_ft1 = (f32) temp_a0;
            temp_a1 = *(D_800DB1B8 + 0x212A + temp_v1_5);
            temp_fa0 = (f32) temp_a1;
            temp_ft3_2 = (f32) (*(D_800DB1B8 + 0x212E + temp_v1_5) - temp_a1) * D_80183B6C;
            var_a1_2 = 0;
            if ((f32) 0 < temp_ft3_2) {
                temp_ft0 = (temp_ft1 + (f32) (*(D_800DB1B8 + 0x212C + temp_v1_5) - temp_a0)) - (__repair_pin_0 = 1.0f);
                __repair_rows: {
                    temp_a0_2 = *arg0;
                    *arg0 = temp_a0_2 + 8;
                    M2C_FIELD(temp_a0_2, s32 *, 0) = 0xF7000000;
                    temp_v1_6 = ((*(D_8018A2C8 + var_a1_2) << 8) & 0xF800) | ((*(D_80189CD0 + var_a1_2) * 8) & 0x7C0) | (((u8) *(D_8018A150 + var_a1_2) >> 2) & 0x3E);
                    M2C_FIELD(temp_a0_2, s32 *, 4) = (s32) (((temp_v1_6 | 1) << 0x10) | 1 | temp_v1_6);
                    temp_v1_7 = *arg0;
                    *arg0 = temp_v1_7 + 8;
                    if (!(temp_ft0 >= 2.1474836e9f)) {
                        var_v0_8 = (s32) temp_ft0 & 0x3FF;
                    } else {
                        var_v0_8 = ((s32) (temp_ft0 - 2.1474836e9f) | 0x80000000) & 0x3FF;
                    }
                    temp_fv1 = temp_fa0 + (f32) var_a1_2;
                    if (!(temp_fv1 >= 2.1474836e9f)) {
                        var_v0_9 = (s32) temp_fv1 & 0x3FF;
                    } else {
                        var_v0_9 = ((s32) (temp_fv1 - 2.1474836e9f) | 0x80000000) & 0x3FF;
                    }
                    M2C_FIELD(temp_v1_7, s32 *, 0) = (s32) ((var_v0_8 << 0xE) | ((var_v0_9 * 4) | 0xF6000000));
                    if (!(temp_ft1 >= 2.1474836e9f)) {
                        var_v0_10 = (s32) temp_ft1 & 0x3FF;
                    } else {
                        var_v0_10 = ((s32) (temp_ft1 - 2.1474836e9f) | 0x80000000) & 0x3FF;
                    }
                    temp_fv1_2 = temp_fa0 + (f32) var_a1_2;
                    if (!(temp_fv1_2 >= 2.1474836e9f)) {
                        var_v0_11 = (s32) temp_fv1_2 & 0x3FF;
                    } else {
                        var_v0_11 = ((s32) (temp_fv1_2 - 2.1474836e9f) | 0x80000000) & 0x3FF;
                    }
                    var_a1_2 += 1;
                    do { M2C_FIELD(temp_v1_7, s32 *, 4) = (s32) ((var_v0_10 << 0xE) | (var_v0_11 * 4)); } while (0);
                }
if ((f32) var_a1_2 < temp_ft3_2) goto __repair_rows;
            }
            temp_v1_8 = *arg0;
            *arg0 = temp_v1_8 + 8;
            temp_v0_2 = var_a3 * 0x28;
            M2C_FIELD(temp_v1_8, s32 *, 0) = (s32) ((((*(D_800DB1B8 + 0x212C + temp_v0_2) - 1) & 0x3FF) << 0xE) | ((((*(D_800DB1B8 + 0x212E + temp_v0_2) - 1) & 0x3FF) * 4) | 0xF6000000));
            if (!(temp_ft1 >= 2.1474836e9f)) {
                var_v0_12 = (s32) temp_ft1 & 0x3FF;
            } else {
                var_v0_12 = ((s32) (temp_ft1 - 2.1474836e9f) | 0x80000000) & 0x3FF;
            }
            temp_fv1_3 = temp_fa0 + (f32) var_a1_2;
            if (!(temp_fv1_3 >= 2.1474836e9f)) {
                var_v0_13 = (s32) temp_fv1_3 & 0x3FF;
            } else {
                var_v0_13 = ((s32) (temp_fv1_3 - 2.1474836e9f) | 0x80000000) & 0x3FF;
            }
            M2C_FIELD(temp_v1_8, s32 *, 4) = (s32) ((var_v0_12 << 0xE) | (var_v0_13 * 4));
            var_a3 += 1;
            var_v1_4 = var_a3 * 4;
        } while (var_a3 < D_800DD2C0);
    }
    if (((D_8006FB10 == 2) | (D_8006FB10 == 7)) != 0) {
        temp_a0_3 = *arg0;
        *arg0 = temp_a0_3 + 8;
        M2C_FIELD(temp_a0_3, s32 *, 0) = 0xF8000000;
        do { M2C_FIELD(temp_a0_3, s32 *, 4) = (s32) ((D_80183B75 << 0x18) | (D_80183B77 << 0x10) | (D_80183B79 << 8) | 0xFF); } while (0);
        temp_v1_9 = *arg0;
        *arg0 = temp_v1_9 + 8;
        M2C_FIELD(temp_v1_9, s32 *, 0) = 0xBC000008;
        M2C_FIELD(temp_v1_9, s32 *, 4) = 0x0C80F480;
    }
}
