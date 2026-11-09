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

M2C_UNK func_800294A0(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, void *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80203B04();                            /* extern */
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_8020FFD0(u8, s32, u8);                     /* extern */
M2C_UNK func_802153C4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_8021FCA4();                            /* extern */
extern M2C_UNK D_404F10;
extern M2C_UNK D_40A890;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8018F5D0;
extern M2C_UNK D_801D5A90;
extern s32 D_8021AFDC;
extern s16 D_8021E120;
extern s8 D_8021E15F;
extern u8 D_8021E200;
extern M2C_UNK D_8021E204;
extern M2C_UNK D_8021E22F;
extern M2C_UNK D_8021E231;
extern M2C_UNK D_8021EEA4;
extern M2C_UNK D_8021EEA7;
extern M2C_UNK D_8021EEA8;
extern u16 D_8021EEB8;
extern M2C_UNK D_8021F260;
extern M2C_UNK D_8021FE04;
extern M2C_UNK D_8022026C;
extern f32 D_80220E40;
extern M2C_UNK D_80238EC0;
extern M2C_UNK D_8030BD90;
extern M2C_UNK func_8013DD2C;
extern M2C_UNK func_80149A80;
extern M2C_UNK func_8020EE18;
extern M2C_UNK func_8020F354;
extern M2C_UNK func_8020FAFC;
extern M2C_UNK func_8020FBA8;
extern M2C_UNK func_8020FC20;
extern M2C_UNK func_8020FED8;

void func_8020E7D0(void) {
    s32 *var_a2;
    s32 *var_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_t1;
    s32 var_v0;
    s32 var_v1;
    u8 temp_v1;
    void *temp_t0;

    temp_v0 = D_8021EEB8 * 0x64;
    *(&D_8011F308 + temp_v0) = 0;
    *(&D_8011F30C + temp_v0) = 0;
    *(&D_8011F310 + temp_v0) = 255.0f;
    if (D_8021E200 == 0) {
        func_80203B04();
    }
    M2C_FIELD(&D_8021E204, u8 *, 0) = (u8) M2C_FIELD(&D_8021E204, u8 *, -0x61);
    M2C_FIELD(&D_8021E204, s8 *, -0x7B) = 0;
    M2C_FIELD(&D_8021E204, s8 *, 5) = 2;
    M2C_FIELD(&D_8021E204, s8 *, -2) = 1;
    func_800294A0(&D_404F10, &D_8030BD90, &D_40A890 - &D_404F10);
    var_s2 = 0;
    if (D_8021AFDC == 0x1C) {
        var_v1 = 0 * 0x10;
        do {
            *(&D_8021EEA8 + var_s2) = *(&D_8021E22F + (((var_v1 + var_s2) * 2) + (D_8021E15F * 0x110)));
            var_s2 += 1;
            var_v1 = var_s2 * 0x10;
        } while (var_s2 < 8);
        M2C_FIELD(&D_8021EEA4, s8 *, 0) = 0;
        M2C_FIELD(&D_8021EEA4, s8 *, 0xC) = 1;
        M2C_FIELD(&D_8021EEA4, s8 *, 1) = 1;
    }
    M2C_FIELD(&D_8021EEA7, u8 *, 0) = (u8) D_8021E15F;
    M2C_FIELD(&D_8021EEA7, u8 *, 0xA) = (u8) (M2C_FIELD(&D_8021EEA7, u8 *, 0xA) & 0x3F);
    M2C_FIELD(&D_8021EEA7, u8 *, -1) = 0U;
    var_s2_2 = 0;
    do {
        temp_v1 = M2C_FIELD(&D_8021EEA7, u8 *, -1) + func_8020FFD0(M2C_FIELD(&D_8021EEA7, u8 *, 0), var_s2_2 & 0xFF, *(&D_8021EEA8 + var_s2_2));
        var_s2_2 += 1;
        M2C_FIELD(&D_8021EEA7, u8 *, -1) = temp_v1;
    } while (var_s2_2 < 8);
    M2C_FIELD(&D_8021F260, s8 *, 0) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 1) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 2) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 4) = 0;
    func_8021FCA4();
    func_800DE41C(0, 0, 3, 0, 0x42, 0xFF, NULL, NULL, &D_8021FE04, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_80220E40 = 10.0f;
    func_800DE41C(0, 0, 3, 0, 0x44, 0xFF, NULL, NULL, &D_8022026C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x4A, 1, NULL, &func_80149A80, NULL, 0, 0, 0, 0, 0x41700000, 0x42480000, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x7F, 0, NULL, &D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_802153C4(0x40, 0, 0xBF000000, 0x95, 0xD1, 0x75);
    func_800DE41C(0, 0, 3, 0, 0x4A, 0, NULL, &func_8020EE18, &func_8020F354, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    var_t1 = 0;
    var_s2_3 = 0;
    do {
        var_v0 = 0 * 2;
loop_10:
        temp_v0_2 = (((var_v0 + var_s2_3) * 4) + var_s2_3) * 4;
        var_a3 = temp_v0_2 + ((var_t1 * 0x1A0) + &D_8018F5D0);
        var_a2 = temp_v0_2 + &D_80238EC0;
        temp_t0 = var_a2 + 0x30;
loop_11:
        M2C_FIELD(var_a3, s32 *, 0) = M2C_FIELD(var_a2, s32 *, 0);
        M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
        M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
        M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
        var_a2 += 0x10;
        var_a3 += 0x10;
        if (var_a2 != temp_t0) {
            goto loop_11;
        }
        *var_a3 = *var_a2;
        var_s2_3 += 1;
        var_v0 = var_s2_3 * 2;
        if (var_s2_3 < 8) {
            goto loop_10;
        }
        var_t1 += 1;
        var_s2_3 = 0;
    } while (var_t1 < 0xE);
    D_8021E120 = func_800DE41C(0, 0, 1, 0, 0x54, 0xFF, (*(&D_8021E231 + ((M2C_FIELD(&D_8021EEA7, u8 *, 0) * 0x110) + M2C_FIELD(&D_8021EEA7, u8 *, 1))) * 0x1A0) + &D_8018F5D0, &func_8020FC20, &func_8020FED8, 0xC033332F, 0x3EB33333, 0, 0, 0x43B40000, 0, 0x3CF5C28F, 0x3CF5C28F, 0x3CF5C28F);
    func_800DE41C(0, 0, 3, 0, 0x54, 0, NULL, &func_8020FAFC, &func_8020FBA8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, NULL, NULL, &func_8013DD2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80203DF8(1, 6, 0, 0, 0);
}
