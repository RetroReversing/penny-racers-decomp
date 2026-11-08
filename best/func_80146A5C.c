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

M2C_UNK func_80148688(s32, u8);                     /* extern */
M2C_UNK func_8014B854(M2C_UNK);                     /* extern */
s32 func_8014BAC0();                                /* extern */
s32 func_801FA30C(s32);                             /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_80168C64;
extern u16 D_80183BD4;
extern u16 D_80189948;
extern u8 D_80189B36;
extern u16 D_80189C98;
extern M2C_UNK D_80189CC0;
extern M2C_UNK D_8018A43E;
extern u16 D_80190CAC;
extern u8 D_80190CB0;

void func_80146A5C(s32 arg0) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0_6;
    s32 var_v0_7;
    u16 temp_v0;
    u16 temp_v1;
    u16 var_v0;
    u16 var_v0_2;
    u16 var_v0_3;
    u8 temp_v1_2;
    u8 var_v0_4;
    u8 var_v0_5;
    void *temp_s0;

    temp_a0 = arg0 & 0xFFFF;
    temp_s0 = (temp_a0 * 0x64) + &D_8011F2F0;
    temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x3E);
    var_s2 = 0;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        M2C_FIELD(&D_8018A43E, u16 *, 0) = (u16) (func_801FA30C(temp_a0) & 7);
        M2C_FIELD(&D_8018A43E, u16 *, 2) = 0U;
        M2C_FIELD(&D_8018A43E, u8 *, 4) = 0U;
        M2C_FIELD(&D_8018A43E, u16 *, 6) = 0U;
        M2C_FIELD(&D_8018A43E, u16 *, 8) = 0U;
        var_v0 = M2C_FIELD(&D_8018A43E, u16 *, 0) * 0x10;
block_64:
        M2C_FIELD(&D_8018A43E, u16 *, 0) = var_v0;
        var_v0_2 = 1;
block_65:
        M2C_FIELD(temp_s0, u16 *, 0x3E) = var_v0_2;
        break;
    case 1:                                         /* switch 1 */
        temp_v1_2 = *(&D_80168C64 + M2C_FIELD(&D_8018A43E, u16 *, 0));
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 0x7:                                   /* switch 2 */
            var_v0_3 = 3;
            if (temp_v1_2 != 7) {

            } else {
block_51:
                M2C_FIELD(&D_8018A43E, u16 *, 8) = var_v0_3;
block_52:
                M2C_FIELD(&D_8018A43E, u16 *, 0) = (u16) (M2C_FIELD(&D_8018A43E, u16 *, 0) + 1);
            }
            break;
        case 0xFF:                                  /* switch 2 */
            var_s2 = 0x10;
            break;
        case 0x0:                                   /* switch 2 */
            M2C_FIELD(&D_8018A43E, u8 *, 4) = 2U;
            if (func_801FA30C(temp_a0) & 1) {
                M2C_FIELD(&D_8018A43E, u8 *, 4) = 1U;
            }
            goto block_52;
        case 0x1:                                   /* switch 2 */
            if (!(M2C_FIELD(&D_8018A43E, u16 *, 2) & M2C_FIELD(&D_8018A43E, u16 *, 8))) {
                var_s2 = M2C_FIELD(&D_8018A43E, u8 *, 4) | 0;
            }
            func_80148688(var_s2 & 0xFF, D_80190CB0);
            if (D_80183BD4 != D_80189948) {

            } else {
                goto block_52;
            }
            break;
        case 0x2:                                   /* switch 2 */
            M2C_FIELD(&D_8018A43E, u16 *, 6) = 0x1EU;
            var_v0_2 = 2;
            goto block_65;
        case 0x3:                                   /* switch 2 */
            var_v0_4 = 1;
            if (M2C_FIELD(&D_8018A43E, u8 *, 4) == 1) {
                var_v0_4 = 2;
            }
            M2C_FIELD(&D_8018A43E, u8 *, 4) = var_v0_4;
            goto block_52;
        case 0x4:                                   /* switch 2 */
            M2C_FIELD(&D_8018A43E, u16 *, 6) = (u16) ((func_801FA30C(temp_a0) & 3) + 2);
            var_v0_2 = 3;
            goto block_65;
        case 0x5:                                   /* switch 2 */
            var_v0_5 = 2;
            if ((u32) (D_80183BD4 & 0x700) >= 0x301U) {
                var_v0_5 = 1;
            }
            M2C_FIELD(&D_8018A43E, u8 *, 4) = var_v0_5;
            goto block_52;
        case 0x6:                                   /* switch 2 */
            var_v0_3 = 1;
            goto block_51;
        case 0x8:                                   /* switch 2 */
            var_v0_3 = 7;
            goto block_51;
        case 0x9:                                   /* switch 2 */
            M2C_FIELD(&D_8018A43E, u16 *, 6) = (u16) M2C_FIELD(&D_80189CC0, u8 *, 0);
            if (D_80190CB0 != 0) {
                var_v0_2 = 3;
            } else {
                M2C_FIELD(&D_8018A43E, u16 *, 6) = (u16) M2C_FIELD(&D_80189CC0, u8 *, -8);
                var_v0_2 = 3;
            }
            goto block_65;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_v0 = M2C_FIELD(&D_8018A43E, u16 *, 6) - 1;
        M2C_FIELD(&D_8018A43E, u16 *, 6) = temp_v0;
        if (!(temp_v0 & 0x8000)) {

        } else {
block_63:
            var_v0 = M2C_FIELD(&D_8018A43E, u16 *, 0) + 1;
            goto block_64;
        }
        break;
    case 3:                                         /* switch 1 */
        if (!(M2C_FIELD(&D_8018A43E, u16 *, 2) & M2C_FIELD(&D_8018A43E, u16 *, 8))) {
            M2C_FIELD(&D_8018A43E, u16 *, 6) = (u16) (M2C_FIELD(&D_8018A43E, u16 *, 6) - 1);
            var_s2 = M2C_FIELD(&D_8018A43E, u8 *, 4) | 0;
        }
        func_80148688(var_s2 & 0xFF, D_80190CB0);
        if ((s16) M2C_FIELD(&D_8018A43E, u16 *, 6) == 0) {
            goto block_63;
        }
        break;
    }
    var_v0_6 = var_s2 & 3;
    if (func_8014BAC0() & 0x10) {
        var_s0 = 0;
loop_68:
        func_80148688(2, D_80190CB0);
        var_s0 += 1;
        if (D_80183BD4 != D_80189948) {
            if (var_s0 < 0x96) {
                goto loop_68;
            }
        } else {
            var_s2 = 0x10;
        }
        var_v0_6 = var_s2 & 3;
    }
    var_v0_7 = var_s2 & 0x10;
    if (var_v0_6 != 0) {
        func_8014B854(0x3B);
        var_v0_7 = var_s2 & 0x10;
    }
    if ((var_v0_7 != 0) && !(D_80183BD4 & 0x1000)) {
        func_8014B854(0x3D);
        D_80189B36 &= 0xEF;
        D_80189C98 = D_80190CAC;
    }
    M2C_FIELD(&D_8018A43E, u16 *, 2) = (u16) (M2C_FIELD(&D_8018A43E, u16 *, 2) + 1);
}
