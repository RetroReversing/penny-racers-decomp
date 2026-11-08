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

s8 func_8002C090(M2C_UNK *, s32);                   /* extern */
s8 func_8002C0B0(M2C_UNK *, s32);                   /* extern */
s8 func_8002C0D0(M2C_UNK *, s32);                   /* extern */
s8 func_8002C0F0(M2C_UNK *, s32);                   /* extern */
s32 func_8002C110(M2C_UNK *, s32);                  /* extern */
s32 func_8002C190(M2C_UNK *);                       /* extern */
s32 func_8002C1A0(M2C_UNK *);                       /* extern */
s16 func_8002C1D0(M2C_UNK *);                       /* extern */
M2C_UNK func_8002C240(M2C_UNK *, s32, u8);          /* extern */
M2C_UNK func_8002C290(M2C_UNK *, s32, u8);          /* extern */
M2C_UNK func_8002C2E0(M2C_UNK *, s32, u8);          /* extern */
M2C_UNK func_8002C330(M2C_UNK *, s32, u8);          /* extern */
M2C_UNK func_8002C370(M2C_UNK *, s32, u8);          /* extern */
M2C_UNK func_8002D030(s32);                         /* extern */
s32 n_alSndpGetState();                             /* extern */
extern M2C_UNK D_8006FB38;
extern M2C_UNK D_801D7DF0;
extern M2C_UNK D_801D7DF4;
extern s32 D_802038DC;
extern s32 D_802038E0;
extern M2C_UNK D_802038E4;
extern M2C_UNK D_802038E8;
extern M2C_UNK D_802038E9;
extern M2C_UNK D_802038EC;
extern M2C_UNK D_802038F0;
extern M2C_UNK D_802038F1;
extern M2C_UNK D_802038F2;
extern M2C_UNK D_802038F3;
extern M2C_UNK D_802038F4;
extern M2C_UNK D_802038F5;
extern M2C_UNK D_802038F6;
extern M2C_UNK D_802038F7;
extern M2C_UNK D_802038F8;
extern M2C_UNK D_802038FC;
extern M2C_UNK D_802038FF;
extern M2C_UNK D_80203900;
extern M2C_UNK D_80203901;

void func_801FF978(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    u32 var_s2;
    u32 var_s2_2;
    u32 var_s2_3;

    if (D_802038E0 == 0) {
        D_802038E0 = func_8002C1A0(&D_8006FB38);
    } else {
        D_802038DC = func_8002C1A0(&D_8006FB38);
    }
    var_s2 = 0;
    M2C_FIELD(&D_802038E4, s16 *, 0) = func_8002C1D0(&D_8006FB38);
    M2C_FIELD(&D_802038E4, s32 *, -0xC) = func_8002C190(&D_8006FB38);
    do {
        temp_s1 = var_s2 & 0xFF;
        temp_s0 = var_s2 * 0x1C;
        *(&D_802038E8 + temp_s0) = func_8002C0D0(&D_8006FB38, temp_s1);
        *(&D_802038E9 + temp_s0) = func_8002C090(&D_8006FB38, temp_s1);
        *(&D_802038EC + temp_s0) = func_8002C110(&D_8006FB38, temp_s1);
        *(&D_802038F0 + temp_s0) = func_8002C0B0(&D_8006FB38, temp_s1);
        *(&D_802038F1 + temp_s0) = func_8002C0F0(&D_8006FB38, temp_s1);
        var_s2 += 1;
    } while (var_s2 < 0x10U);
    var_s2_2 = 0;
    var_v0 = 0 * 8;
    __repair_rows: {
        temp_v1 = (var_v0 - var_s2_2) * 4;
        if (*(&D_802038F2 + temp_v1) != 0) {
            func_8002C2E0(&D_8006FB38, var_s2_2 & 0xFF, *(&D_802038F7 + temp_v1));
            var_v0_2 = var_s2_2 * 8;
        } else {
            temp_v0 = var_s2_2 * 0x1C;
            *(&D_802038F7 + temp_v0) = *(&D_802038E8 + temp_v0);
            var_v0_2 = var_s2_2 * 8;
        }
        temp_v1_2 = (var_v0_2 - var_s2_2) * 4;
        if (*(&D_802038F3 + temp_v1_2) != 0) {
            func_8002C240(&D_8006FB38, var_s2_2 & 0xFF, *(&D_802038F8 + temp_v1_2));
            var_v0_3 = var_s2_2 * 8;
        } else {
            temp_v0_2 = var_s2_2 * 0x1C;
            *(&D_802038F8 + temp_v0_2) = *(&D_802038E9 + temp_v0_2);
            var_v0_3 = var_s2_2 * 8;
        }
        temp_v1_3 = (var_v0_3 - var_s2_2) * 4;
        if (*(&D_802038F4 + temp_v1_3) != 0) {
            func_8002C370(&D_8006FB38, var_s2_2 & 0xFF, *(&D_802038FF + temp_v1_3));
            var_v0_4 = var_s2_2 * 8;
        } else {
            temp_v0_3 = var_s2_2 * 0x1C;
            *(&D_802038FC + temp_v0_3) = *(&D_802038EC + temp_v0_3);
            var_v0_4 = var_s2_2 * 8;
        }
        temp_v1_4 = (var_v0_4 - var_s2_2) * 4;
        if (*(&D_802038F5 + temp_v1_4) != 0) {
            func_8002C290(&D_8006FB38, var_s2_2 & 0xFF, *(&D_80203900 + temp_v1_4));
            var_v0_5 = var_s2_2 * 8;
        } else {
            temp_v0_4 = var_s2_2 * 0x1C;
            *(&D_80203900 + temp_v0_4) = *(&D_802038F0 + temp_v0_4);
            var_v0_5 = var_s2_2 * 8;
        }
        temp_v1_5 = (var_v0_5 - var_s2_2) * 4;
        if (*(&D_802038F6 + temp_v1_5) != 0) {
            func_8002C330(&D_8006FB38, var_s2_2 & 0xFF, *(&D_80203901 + temp_v1_5));
            var_s2_2 += 1;
        } else {
            temp_v0_5 = var_s2_2 * 0x1C;
            *(&D_80203901 + temp_v0_5) = *(&D_802038F1 + temp_v0_5);
            var_s2_2 += 1;
        }
        var_v0 = var_s2_2 * 8;
    }
if (var_s2_2 < 0x10U) goto __repair_rows;
    var_s2_3 = 0;
    var_a0 = 0 << 0x10;
    do {
        func_8002D030(var_a0 >> 0x10);
        temp_v0_6 = n_alSndpGetState();
        temp_a0 = var_s2_3 * 0x2C;
        M2C_FIELD((temp_a0 + &D_801D7DF0), s32 *, 0xC) = temp_v0_6;
        if (temp_v0_6 == 0) {
            *(&D_801D7DF4 + temp_a0) = -1;
        }
        var_s2_3 += 1;
        var_a0 = var_s2_3 << 0x10;
    } while (var_s2_3 < 8U);
}
