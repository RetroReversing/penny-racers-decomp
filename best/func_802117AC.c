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
extern f64 D_8021DDC0;
extern f64 D_8021DDC8;
extern s8 D_8021E15F;
extern M2C_UNK D_8021E231;
extern M2C_UNK D_8021EEC0;
extern s32 D_8021EFA0;
extern M2C_UNK D_8021F036;
extern M2C_UNK func_80211A84;

void func_802117AC(void) {
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s8 temp_a0;

    var_s0 = 0;
    if (!(D_8021EFA0 & 0x2000)) {
        var_s0 = func_8014A870(0x14, 3, D_8021E15F);
    }
    var_v0 = var_s0 & 8;
    if (var_s0 & 4) {
        if (M2C_FIELD(&D_8021EEC0, u8 *, 0) != 0) {
            M2C_FIELD(&D_8021EEC0, s32 *, 0xE0) = (s32) (M2C_FIELD(&D_8021EEC0, s32 *, 0xE0) | 0x2000);
            M2C_FIELD(&D_8021EEC0, u8 *, 0) = (u8) (M2C_FIELD(&D_8021EEC0, u8 *, 0) - 1);
            func_800DE41C(0, 0, 3, 0, 0x50, 0, 0, &func_80211A84, 0, (f32) ((f64) M2C_FIELD(&D_8021EEC0, f32 *, 0xC) - D_8021DDC0), 0, 0, 0, 0, 0, -0.5f, 0, 0);
            func_8014B854(0x3B);
        }
        var_v0 = var_s0 & 8;
    }
    if ((var_v0 != 0) && (M2C_FIELD(&D_8021EEC0, u8 *, 0) != (M2C_FIELD(&D_8021EEC0, u8 *, 3) - 1))) {
        M2C_FIELD(&D_8021EEC0, s32 *, 0xE0) = (s32) (M2C_FIELD(&D_8021EEC0, s32 *, 0xE0) | 0x2000);
        M2C_FIELD(&D_8021EEC0, u8 *, 0) = (u8) (M2C_FIELD(&D_8021EEC0, u8 *, 0) + 1);
        func_800DE41C(0, 0, 3, 0, 0x50, 0, 0, &func_80211A84, 0, (f32) ((f64) M2C_FIELD(&D_8021EEC0, f32 *, 0xC) + D_8021DDC8), 0, 0, 0, 0, 0, 0.5f, 0, 0);
        func_8014B854(0x3B);
    }
    temp_a0 = *(&D_8021E231 + ((D_8021E15F * 0x110) + M2C_FIELD(&D_8021EEC0, u8 *, 0)));
    var_v0_2 = var_s0 & 2;
    if (var_s0 & 1) {
        *(&D_8021F036 + temp_a0) = *(&D_8021F036 + temp_a0) + 1;
        var_v0_2 = var_s0 & 2;
        if ((u8) *(&D_8021F036 + temp_a0) >= 0xAU) {
            *(&D_8021F036 + temp_a0) = 0;
        }
    }
    var_v1 = var_s0 & 3;
    if (var_v0_2 != 0) {
        *(&D_8021F036 + temp_a0) = *(&D_8021F036 + temp_a0) - 1;
        var_v1 = var_s0 & 3;
        if (*(&D_8021F036 + temp_a0) == 0xFF) {
            *(&D_8021F036 + temp_a0) = 9;
        }
    }
    var_v0_3 = var_s0 & 0x10;
    if ((var_v1 != 0) & (temp_a0 != 0xD)) {
        func_8014B854(0x3C);
        var_v0_3 = var_s0 & 0x10;
    }
    if (var_v0_3 != 0) {
        D_8021EFA0 &= 0xFFFF7FFF;
        func_8014B854(0x3B);
    }
    func_80211C08();
}
