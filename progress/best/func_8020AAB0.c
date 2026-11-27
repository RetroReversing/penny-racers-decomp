/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_BITS_F32(expr) (m2c_bits = (u32)(expr), *(f32 *)&m2c_bits)
extern u32 m2c_bits;
#define M2C_PTR_FROM_F32(type, expr) ((type)(m2c_fbits = (expr), *(u32 *)&m2c_fbits))
extern f32 m2c_fbits;
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

u8 func_80149F40();
s32 func_8014A870();
void playMenuSound();
s32 func_801FD530();
extern char D_800DA260[];
extern char D_8011F2F0[];
extern char playerSlots[];
extern char D_8011F350[];
extern char D_80168C60[];
extern u16 D_8018BC3C;
extern char D_8021AFEC[];
extern char carouselSelected[];
extern u8 D_8021B00C;
extern char D_8021B010[];
extern char D_8021B014[];
extern u8 carouselCmd;
extern u8 D_8021B069;
extern u8 carouselCount;
extern char sMenu[];
extern s16 D_8021E1A2;
extern s16 D_8021E1A6;
extern char D_8021E20B[];
extern char D_8021E20C[];
extern char D_8021E22F[];

void func_8020AAB0(s32 arg0) {
    s32 *temp_a0_3;
    s32 *temp_v1_6;
    s32 *temp_v1_7;
    s32 *temp_v1_8;
    s32 *var_v1_3;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_9;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    u16 temp_v1;
    u32 var_s0;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_4;
    u8 temp_a0_5;
    u8 temp_a0_6;
    u8 temp_v0;

    temp_v1 = *(playerSlots + ((arg0 & 0xFFFF) * 0x64));
    if (temp_v1 != 1) {
        if ((s32) temp_v1 >= 2) {
            if (temp_v1 != 2) {
                return;
            }
            if ((D_8021E1A2 != 0) && (D_8021B069 & 0x10)) {
                temp_v1_2 = (arg0 & 0xFFFF) * 0x64;
                *(playerSlots + temp_v1_2) = 1;
                *(D_8021E20C + (*(D_8011F2F0 + temp_v1_2) * 9)) = 0;
                *(sMenu + 1 + *(D_8011F2F0 + temp_v1_2)) = 0;
            }
            return;
        }
        if (temp_v1 != 0) {
            return;
        }
        *(playerSlots + ((arg0 & 0xFFFF) * 0x64)) = 1;
        return;
    }
    D_8021B069 = func_8014A870(0x14U, 7, (s32) *(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64)));
    if (*(s32 *)*(D_8011F350 + (D_8018BC3C * 0x64)) != 0) {
        D_8021B069 = 0;
    }
    temp_v1_3 = (arg0 & 0xFFFF) * 0x64;
    *(sMenu + 1 + *(D_8011F2F0 + temp_v1_3)) = 0;
    if (D_8021B069 & 0x10) {
        var_v0 = arg0 & 0xFFFF;
        if (*(D_8021E20B + (*(D_8011F2F0 + temp_v1_3) * 9)) == 0) {
            playMenuSound(0x3D);
            var_v0 = arg0 & 0xFFFF;
        }
        temp_v1_4 = var_v0 * 0x64;
        *(sMenu + 1 + *(D_8011F2F0 + temp_v1_4)) = 1;
        *(D_8021E20B + (*(D_8011F2F0 + temp_v1_4) * 9)) = 1;
        *(D_8021E20C + (*(D_8011F2F0 + temp_v1_4) * 9)) = 0;
        var_v1 = arg0 & 0xFFFF;
        goto block_49;
    }
    temp_v1_5 = arg0 & 0xFFFF;
    if (D_8021B069 & 0x20) {
        if (((*(D_8021E20B + (*(D_8011F2F0 + (temp_v1_5 * 0x64)) * 9)) != 1) && (var_v1_2 = arg0 & 0xFFFF, (D_8021E1A2 != 0))) || (playMenuSound(0x3A), var_v1_2 = arg0 & 0xFFFF, (D_8021E1A2 != 0))) {
            *(D_8021E20B + (*(D_8011F2F0 + (var_v1_2 * 0x64)) * 9)) = 0;
            var_v1 = arg0 & 0xFFFF;
        } else if (D_8021B00C != 1) {
            if (M2C_FIELD(D_8021E20B, s8 *, 0) == 0) {
                M2C_FIELD(D_8021E20B, s8 *, -0x8A) = 2;
            }
            if ((D_8021B00C == 1) || (*(D_8021E20B + (*(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64)) * 9)) = 0, var_v1 = arg0 & 0xFFFF, (D_8021B00C == 1))) {
                goto block_26;
            }
        } else {
block_26:
            M2C_FIELD(sMenu, s8 *, 1) = 2;
            var_v1 = arg0 & 0xFFFF;
        }
        goto block_49;
    }
    if (D_8021B069 & 8) {
        temp_a0 = *(D_8011F2F0 + (temp_v1_5 * 0x64));
        if (*(D_8021E20B + (temp_a0 * 9)) == 0) {
            if ((&D_8021B00C)[temp_a0] == 1) {
                var_v1_3 = (temp_a0 * 4) + D_8021AFEC;
                var_v0_2 = *var_v1_3 + 1;
                goto block_46;
            }
            var_v1_4 = arg0 & 0xFFFF;
            if (D_8021E1A2 == 0) {
                if (carouselCmd == 0) {
                    carouselCmd = 1;
                    goto block_47;
                }
                var_v1_4 = arg0 & 0xFFFF;
                if (D_8021E1A2 != 0) {
                    goto block_35;
                }
            } else {
block_35:
                var_v1_3 = (*(D_8011F2F0 + (var_v1_4 * 0x64)) * 4) + carouselSelected;
                var_v0_2 = *var_v1_3 + 1;
                goto block_46;
            }
            goto block_48;
        }
    }
    var_v1 = arg0 & 0xFFFF;
    if (D_8021B069 & 4) {
        temp_a0_2 = *(D_8011F2F0 + (var_v1 * 0x64));
        var_v0_3 = var_v1 * 2;
        if (*(D_8021E20B + (temp_a0_2 * 9)) == 0) {
            if ((&D_8021B00C)[temp_a0_2] == 1) {
                var_v1_3 = (temp_a0_2 * 4) + D_8021AFEC;
                goto block_45;
            }
            var_v1_5 = arg0 & 0xFFFF;
            if (D_8021E1A2 == 0) {
                if (carouselCmd == 0) {
                    carouselCmd = 2;
                    goto block_47;
                }
                var_v1_5 = arg0 & 0xFFFF;
                if (D_8021E1A2 != 0) {
                    goto block_44;
                }
            } else {
block_44:
                var_v1_3 = (*(D_8011F2F0 + (var_v1_5 * 0x64)) * 4) + carouselSelected;
block_45:
                var_v0_2 = *var_v1_3 - 1;
block_46:
                *var_v1_3 = var_v0_2;
block_47:
                playMenuSound(0x3B);
            }
            goto block_48;
        }
    } else {
block_48:
        var_v1 = arg0 & 0xFFFF;
block_49:
        var_v0_3 = var_v1 * 2;
    }
    temp_a0_3 = (*(D_8011F2F0 + ((((var_v0_3 + var_v1) * 8) + var_v1) * 4)) * 4) + carouselSelected;
    var_v1_6 = arg0 & 0xFFFF;
    if ((s32) carouselCount < *temp_a0_3) {
        *temp_a0_3 = 0;
    } else {
        temp_v1_6 = (*(D_8011F2F0 + (var_v1_6 * 0x64)) * 4) + carouselSelected;
        if (*temp_v1_6 < 0) {
            *temp_v1_6 = (s32) carouselCount;
        }
        var_v1_6 = arg0 & 0xFFFF;
    }
    temp_v1_7 = (*(D_8011F2F0 + (var_v1_6 * 0x64)) * 4) + D_8021AFEC;
    if (*temp_v1_7 < 2) {
        temp_v1_8 = (*(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64)) * 4) + D_8021AFEC;
        if (*temp_v1_8 < 0) {
            *temp_v1_8 = 1;
        }
    } else {
        *temp_v1_7 = 0;
    }
    temp_a0_4 = *(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64));
    if (*(sMenu + 1 + temp_a0_4) == 2) {
        var_v0_4 = arg0 & 0xFFFF;
        if (D_8021E1A2 == 0) {
            *(D_8021E20C + (temp_a0_4 * 9)) = 1;
            var_v0_4 = arg0 & 0xFFFF;
        }
        *(playerSlots + (var_v0_4 * 0x64)) = 2;
    }
    *(D_8021B010 + *(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64))) = 0;
    var_s0 = 0;
    temp_s1 = (arg0 & 0xFFFF) * 0x64;
    do {
        temp_v0 = *(D_8011F2F0 + temp_s1);
        temp_v1_9 = temp_v0 * 0x110;
        temp_v0_2 = var_s0 * 0x22;
        temp_a0_5 = *(D_8011F2F0 + temp_s1);
        *(D_8021B010 + temp_a0_5) = *(D_8021B010 + temp_a0_5) + func_801FD530((s32) var_s0, func_80149F40((s32) *(D_800DA260 + (temp_v0 * 0x178)), var_s0, (s32) M2C_FIELD((temp_v0_2 + (temp_v1_9 + D_8021E22F) + *(D_8021E22F + (temp_v0_2 + temp_v1_9))), s8 *, 2)) & 0xFF);
        var_s0 += 1;
    } while ((s32) var_s0 < 8);
    temp_a0_6 = *(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64));
    if ((u8) *(D_80168C60 + D_8021E1A6) < (u8) *(D_8021B010 + temp_a0_6)) {
        *(D_8021B014 + temp_a0_6) = 1;
        return;
    }
    *(D_8021B014 + *(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64))) = 0;
}
