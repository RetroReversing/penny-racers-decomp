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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, s32, f32, s32, s32, s32, s32, s32, f32, s32, s32); /* extern */
s32 func_8014A870(M2C_UNK, M2C_UNK, s8);            /* extern */
M2C_UNK func_8014B854(M2C_UNK);                     /* extern */
M2C_UNK func_80211C08();                            /* extern */
extern M2C_UNK D_80211A84;
extern M2C_UNK func_8021C010;
extern M2C_UNK func_8021E174;
extern M2C_UNK func_8021EA70;

void func_801AB95C(void) {
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s8 temp_a0_2;
    void *temp_a0;
    void *temp_v1;

    var_s0 = 0;
    if (!(M2C_FIELD(&func_8021EA70, s32 *, 0x530) & 0x2000)) {
        var_s0 = func_8014A870(0x14, 3, M2C_FIELD(&func_8021C010, s8 *, 0x214F));
    }
    var_v0 = var_s0 & 8;
    if (var_s0 & 4) {
        temp_v1 = &func_8021EA70 + 0x450;
        if (M2C_FIELD(&func_8021EA70, u8 *, 0x450) != 0) {
            M2C_FIELD(temp_v1, s32 *, 0xE0) = (s32) (M2C_FIELD(temp_v1, s32 *, 0xE0) | 0x2000);
            M2C_FIELD(&func_8021EA70, u8 *, 0x450) = (u8) (M2C_FIELD(&func_8021EA70, u8 *, 0x450) - 1);
            func_800DE41C(0, 0, 3, 0, 0x50, 0, 0, &D_80211A84, 0, (f32) ((f64) M2C_FIELD(temp_v1, f32 *, 0xC) - M2C_FIELD(&func_8021C010, f64 *, 0x1DB0)), 0, 0, 0, 0, 0, -0.5f, 0, 0);
            func_8014B854(0x3B);
        }
        var_v0 = var_s0 & 8;
    }
    if (var_v0 != 0) {
        temp_a0 = &func_8021EA70 + 0x450;
        if (M2C_FIELD(&func_8021EA70, u8 *, 0x450) != (M2C_FIELD(temp_a0, u8 *, 3) - 1)) {
            M2C_FIELD(temp_a0, s32 *, 0xE0) = (s32) (M2C_FIELD(temp_a0, s32 *, 0xE0) | 0x2000);
            M2C_FIELD(&func_8021EA70, u8 *, 0x450) = (u8) (M2C_FIELD(&func_8021EA70, u8 *, 0x450) + 1);
            func_800DE41C(0, 0, 3, 0, 0x50, 0, 0, &D_80211A84, 0, (f32) ((f64) M2C_FIELD(temp_a0, f32 *, 0xC) + M2C_FIELD(&func_8021C010, f64 *, 0x1DB8)), 0, 0, 0, 0, 0, 0.5f, 0, 0);
            func_8014B854(0x3B);
        }
    }
    temp_a0_2 = *(&func_8021E174 + 0xBD + ((M2C_FIELD(&func_8021C010, s8 *, 0x214F) * 0x110) + M2C_FIELD(&func_8021EA70, u8 *, 0x450)));
    var_v0_2 = var_s0 & 2;
    if (var_s0 & 1) {
        *(&func_8021EA70 + 0x5C6 + temp_a0_2) = *(&func_8021EA70 + 0x5C6 + temp_a0_2) + 1;
        var_v0_2 = var_s0 & 2;
        if ((u8) *(&func_8021EA70 + 0x5C6 + temp_a0_2) >= 0xAU) {
            *(&func_8021EA70 + 0x5C6 + temp_a0_2) = 0;
        }
    }
    var_v1 = var_s0 & 3;
    if (var_v0_2 != 0) {
        *(&func_8021EA70 + 0x5C6 + temp_a0_2) = *(&func_8021EA70 + 0x5C6 + temp_a0_2) - 1;
        var_v1 = var_s0 & 3;
        if (*(&func_8021EA70 + 0x5C6 + temp_a0_2) == 0xFF) {
            *(&func_8021EA70 + 0x5C6 + temp_a0_2) = 9;
        }
    }
    var_v0_3 = var_s0 & 0x10;
    if ((var_v1 != 0) & (temp_a0_2 != 0xD)) {
        func_8014B854(0x3C);
        var_v0_3 = var_s0 & 0x10;
    }
    if (var_v0_3 != 0) {
        M2C_FIELD(&func_8021EA70, s32 *, 0x530) = (s32) (M2C_FIELD(&func_8021EA70, s32 *, 0x530) & 0xFFFF7FFF);
        func_8014B854(0x3B);
    }
    func_80211C08();
}
