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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_8014B854(M2C_UNK);                     /* extern */
s32 func_8014BAC0(s32);                             /* extern */
M2C_UNK func_801DD938(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_801E1EEC(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_8011F2F0;
extern u8 D_80189B34;
extern u8 D_80189B36;
extern u8 D_80189C9D;
extern M2C_UNK D_8018A44A;
extern u16 D_80190CA4;
extern u8 D_801E87E3;
extern u16 D_8021E19C;
extern M2C_UNK D_8021E19E;
extern s16 D_8021E1A2;
extern s16 D_8021E1A6;
extern M2C_UNK func_8014B890;

void func_8014730C(s32 arg0) {
    f32 temp_fv0;
    s32 temp_a0;
    s32 temp_s1;
    s32 var_a0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_7;
    u16 temp_v1;
    u16 var_v0;
    u8 temp_v1_2;
    u8 var_v0_6;
    void *temp_s0;

    temp_a0 = arg0 & 0xFFFF;
    temp_s0 = (temp_a0 * 0x64) + &D_8011F2F0;
    temp_s1 = func_8014BAC0(temp_a0);
    temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x3E);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x0:                                       /* switch 1 */
        M2C_FIELD(&D_8021E19E, u8 *, 0) = 0U;
        M2C_FIELD(&D_8021E19E, s16 *, -2) = 0;
        D_80190CA4 = 0xFF;
        switch (D_80189B34) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x30U;
            if (M2C_FIELD(&D_8006FAF0, u16 *, 0x20) == 0) {
                M2C_FIELD(temp_s0, s16 *, 0x40) = 0x20;
                M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x13U;
            }
            break;
        case 2:                                     /* switch 2 */
            if (D_80189B36 & 0x80) {
                var_v0 = 0x10;
            } else {
                M2C_FIELD(temp_s0, s16 *, 0x40) = 0x20;
                var_v0 = 0x13;
            }
            M2C_FIELD(temp_s0, u16 *, 0x3E) = var_v0;
            if (D_8021E1A2 == 0) {
                func_800DE41C(0, 0, 3, 0, 0x4F, 0xFF, 0, &func_8014B890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            }
            break;
        case 1:                                     /* switch 2 */
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x10U;
            break;
        }
        break;
    case 0x10:                                      /* switch 1 */
        M2C_FIELD(temp_s0, s16 *, 0x40) = 0x10;
        D_8021E19C += 4;
        if ((u16) D_8021E19C >= 0x100U) {
            D_8021E19C = 0xFF;
            M2C_FIELD(temp_s0, u8 *, 0) = 0U;
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x11U;
        }
        break;
    case 0x11:                                      /* switch 1 */
        M2C_FIELD(temp_s0, u8 *, 0) = (u8) (M2C_FIELD(temp_s0, u8 *, 0) + 1);
        if ((u8) M2C_FIELD(temp_s0, u8 *, 0) >= 0x5BU) {
            M2C_FIELD(temp_s0, u8 *, 0) = 0U;
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x12U;
        }
        break;
    case 0x12:                                      /* switch 1 */
        temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 0);
        if (temp_v1_2 != 0) {
            var_v0_2 = temp_s1 & 0x10;
            if (temp_v1_2 != 1) {

            } else {
                goto block_43;
            }
        } else {
            M2C_FIELD(temp_s0, f32 *, 0x1C) = 192.0f;
            M2C_FIELD(temp_s0, f32 *, 0x18) = -2.0f;
            M2C_FIELD(temp_s0, u8 *, 0) = 1U;
block_43:
            M2C_FIELD(temp_s0, f32 *, 0x1C) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x1C) + M2C_FIELD(temp_s0, f32 *, 0x18));
            M2C_FIELD(temp_s0, f32 *, 0x18) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x18) + 0.3f);
            if (M2C_FIELD(temp_s0, f32 *, 0x1C) > 192.0f) {
                M2C_FIELD(temp_s0, u8 *, 0) = 0U;
            }
            var_v0_2 = temp_s1 & 0x10;
        }
        if (var_v0_2 != 0) {
            func_8014B854(0x3D);
            M2C_FIELD(temp_s0, f32 *, 0x1C) = 192.0f;
            M2C_FIELD(temp_s0, f32 *, 0x34) = 0.0f;
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0xFFU;
            if ((*(&D_8018A44A + (D_8021E1A6 * 2)) & 0x1FF) != 0x1FF) {
                M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x13U;
                M2C_FIELD(temp_s0, s16 *, 0x40) = 0x20;
            }
        }
        break;
    case 0x13:                                      /* switch 1 */
        D_80190CA4 -= 8;
        var_a0 = 0;
        if ((u16) D_80190CA4 < 0x80U) {
            D_80190CA4 = 0x80;
            var_a0 = 1;
        }
        temp_fv0 = M2C_FIELD(temp_s0, f32 *, 0x34) + 8.0f;
        M2C_FIELD(temp_s0, f32 *, 0x34) = temp_fv0;
        if (temp_fv0 > 255.0f) {
            M2C_FIELD(temp_s0, f32 *, 0x34) = 255.0f;
            var_a0 |= 2;
        }
        if (var_a0 == 3) {
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x20U;
        }
        break;
    case 0x20:                                      /* switch 1 */
        var_v0_3 = temp_s1 & 2;
        if (temp_s1 & 1) {
            D_80189C9D -= 1;
            var_v0_3 = temp_s1 & 2;
        }
        if (var_v0_3 != 0) {
            D_80189C9D += 1;
        }
        D_80189C9D &= 1;
        var_v0_4 = temp_s1 & 0x10;
        if (temp_s1 & 3) {
            func_8014B854(0x3B);
            var_v0_4 = temp_s1 & 0x10;
        }
        if (var_v0_4 != 0) {
block_80:
            func_8014B854(0x3D);
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0xFFU;
        }
        break;
    case 0x30:                                      /* switch 1 */
        M2C_FIELD(temp_s0, s16 *, 0x40) = 0x30;
        D_8021E19C += 8;
        if ((u16) D_8021E19C >= 0x100U) {
            D_8021E19C = 0xFF;
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x31U;
        }
        break;
    case 0x31:                                      /* switch 1 */
        var_v0_5 = temp_s1 & 2;
        if (temp_s1 & 1) {
            var_v0_6 = 2;
            if ((s8) D_80189C9D != 0) {
                var_v0_6 = D_80189C9D - 1;
            }
            D_80189C9D = var_v0_6;
            var_v0_5 = temp_s1 & 2;
        }
        if (var_v0_5 != 0) {
            if ((s8) D_80189C9D == 2) {
                D_80189C9D = 0;
            } else {
                D_80189C9D += 1;
            }
        }
        var_v0_7 = temp_s1 & 0x10;
        if (temp_s1 & 3) {
            func_8014B854(0x3B);
            var_v0_7 = temp_s1 & 0x10;
        }
        if (var_v0_7 != 0) {
            if ((s8) D_80189C9D == 2) {
                if (D_801E87E3 == 1) {
                    func_8014B854(0x3D);
                    func_801E1EEC(0, 0);
                } else {
                    func_8014B854(0x3E);
                    func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x16, 0, 0x1B);
                }
            } else {
                goto block_80;
            }
        }
        break;
    case 0xFF:                                      /* switch 1 */
        D_80189B36 &= 0xEF;
        break;
    }
    M2C_FIELD(&D_8021E19E, u8 *, 0) = (u8) (M2C_FIELD(&D_8021E19E, u8 *, 0) - 8);
}
