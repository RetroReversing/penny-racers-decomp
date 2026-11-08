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

M2C_UNK func_8003DE60(M2C_UNK *, u8);               /* extern */
s32 func_8014A870(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_801D651C(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_801E1EEC(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_802174DC(s32, u8, u8);                 /* extern */
M2C_UNK func_80217600();                            /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_80190CA8;
extern s8 D_80190CAC;
extern M2C_UNK D_80190CB0;
extern s8 D_80190CB2;
extern M2C_UNK D_801C5E9F;
extern u8 D_801C5EA0;
extern u8 D_801C5EA2;
extern u8 D_801E9B34;
extern M2C_UNK D_8021DEB4;

void func_80216958(s32 arg0) {
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v0_4;
    u16 temp_v1;
    u16 var_v0_2;
    u8 *temp_s4;
    u8 temp_v1_2;
    void *temp_s0;

    temp_s0 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_s4 = &D_80190CA8 - 0xA;
    var_s2 = func_8014A870(0x1E, 7, 0);
    temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x3E);
    switch (temp_v1) {                              /* irregular */
    case 0x0:
        if (D_801C5EA2 == 2) {
            M2C_FIELD(&D_80190CA8, u8 *, 0) = 1U;
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x30U;
            return;
        }
block_51:
        M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x10U;
        return;
    case 0x10:
        M2C_FIELD(temp_s0, s16 *, 0x40) = 1;
        M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x11U;
        /* fallthrough */
    case 0x11:
        var_v0 = var_s2 & 2;
        if (var_s2 & 1) {
            if (M2C_FIELD(&D_80190CA8, u8 *, 0) != 0) {
                M2C_FIELD(&D_80190CA8, u8 *, 0) = (u8) (M2C_FIELD(&D_80190CA8, u8 *, 0) - 1);
                func_801D651C(7, 0x3B);
            }
            var_v0 = var_s2 & 2;
        }
        if ((var_v0 != 0) && (M2C_FIELD(&D_80190CA8, u8 *, 0) != 2)) {
            M2C_FIELD(&D_80190CA8, u8 *, 0) = (u8) (M2C_FIELD(&D_80190CA8, u8 *, 0) + 1);
            func_801D651C(7, 0x3B);
        }
        if (var_s2 & 0x10) {
            var_s2 = 0;
            func_801D651C(7, 0x3D);
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0xF0U;
            if (M2C_FIELD(&D_80190CA8, u8 *, 0) != 0) {
                var_v0_2 = 0x30;
                if (M2C_FIELD(&D_80190CA8, u8 *, 0) != 1) {
                    var_v0_3 = 0 & 0x20;
                } else {
                    goto block_34;
                }
            } else {
                var_v0_2 = 0x20;
block_34:
                M2C_FIELD(temp_s0, u16 *, 0x3E) = var_v0_2;
                D_80190CB2 = 0;
                func_801E1EEC(7, 0);
                goto block_35;
            }
        } else {
block_35:
            var_v0_3 = var_s2 & 0x20;
        }
        if (var_v0_3 != 0) {
            func_801D651C(7, 0x3A);
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0xF0U;
            return;
        }
        return;
    case 0x20:
        D_80190CAC = 0xC;
        func_80217600();
        *temp_s4 = 0;
        M2C_FIELD(&D_80190CA8, u8 *, 2) = 0U;
        M2C_FIELD(temp_s0, s16 *, 0x40) = 3;
        M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x21U;
        /* fallthrough */
    case 0x21:
        func_802174DC(var_s2 & 0xFF, *temp_s4, M2C_FIELD(&D_80190CA8, u8 *, 2));
        if (var_s2 & 0x10) {
            var_s2 = 0;
            func_801D651C(7, 0x3D);
            temp_v1_2 = *temp_s4 + M2C_FIELD(&D_80190CA8, u8 *, 2);
            D_801E9B34 = temp_v1_2;
            if ((u8) D_801E9B34 >= 8U) {
                D_801E9B34 = temp_v1_2 - 8;
                func_8003DE60(&D_8021DEB4, D_801E9B34);
                func_801E1EEC(5, 0);
                M2C_FIELD(&D_801C5E9F, u8 *, 0) = (u8) M2C_FIELD(&D_801C5E9F, u8 *, -1);
            } else {
                func_801E1EEC(8, 0);
                M2C_FIELD(&D_801C5E9F, u8 *, 0) = (u8) M2C_FIELD(&D_801C5E9F, u8 *, -1);
                M2C_FIELD(temp_s0, u8 *, 0) = 0U;
                M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x21U;
            }
        }
block_48:
        var_v0_4 = var_s2 & 0x20;
block_49:
        if (var_v0_4 != 0) {
            func_801D651C(7, 0x3A);
            goto block_51;
        }
        break;
    case 0x30:
        D_80190CAC = 4;
        func_80217600();
        *temp_s4 = 0;
        M2C_FIELD(&D_80190CA8, u8 *, 2) = 0U;
        M2C_FIELD(temp_s0, s16 *, 0x40) = 5;
        M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x31U;
        /* fallthrough */
    case 0x31:
        func_802174DC(var_s2 & 0xFF, *temp_s4, M2C_FIELD(&D_80190CA8, u8 *, 2));
        if (var_s2 & 0x10) {
            if (D_801C5EA0 == 1) {
                func_801D651C(7, 0x3D);
                D_801E9B34 = *temp_s4;
                func_8003DE60(&D_8021DEB4, D_801E9B34);
                func_801E1EEC(4, 0);
                var_v0_4 = 0 & 0x20;
            } else {
                func_801D651C(7, 0x3E);
                goto block_48;
            }
        } else {
            goto block_48;
        }
        goto block_49;
    case 0x40:
        M2C_FIELD(temp_s0, u8 *, 0) = (u8) (M2C_FIELD(temp_s0, u8 *, 0) + 1);
        if ((u8) M2C_FIELD(temp_s0, u8 *, 0) >= 0x15U) {
            M2C_FIELD(temp_s0, u8 *, 0) = 0U;
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x41U;
            return;
        }
        break;
    case 0x41:
        M2C_FIELD(temp_s0, u8 *, 0) = (u8) (M2C_FIELD(temp_s0, u8 *, 0) + 1);
        if ((u8) M2C_FIELD(temp_s0, u8 *, 0) >= 0x5BU) {
            M2C_FIELD(temp_s0, u16 *, 0x3E) = 0x21U;
            return;
        }
        break;
    case 0xF0:
        M2C_FIELD(&D_80190CB0, s8 *, 0) = 0;
        M2C_FIELD(&D_80190CB0, s16 *, -0x16) = 0x10;
        M2C_FIELD(temp_s0, s16 *, 0x40) = 1;
        D_801C5EA2 = 5;
        break;
    }
}
