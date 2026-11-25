typedef s32 M2C_UNK;
M2C_UNK func_800294A0(M2C_UNK *, M2C_UNK *, s32);
s16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, void *, M2C_UNK *, M2C_UNK *, f32, f32, s32, s32, f32, f32, f32, f32, f32);
M2C_UNK func_80203B04();
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
s32 func_8020FFD0(u8, s32, u8);
M2C_UNK func_802153C4(M2C_UNK, M2C_UNK, f32, M2C_UNK, s32, s32);
M2C_UNK func_8021FCA4();
extern M2C_UNK D_404F10;
extern M2C_UNK D_40A890;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern u8 D_8018F5D0[];
extern M2C_UNK D_801D5A90;
extern s32 D_8021AFDC;
extern s16 D_8021E120;
extern s8 D_8021E15F;
extern u8 D_8021E200;
extern M2C_UNK D_8021E204;
extern u8 D_8021E22F[];
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
    u8 *__base_D_8018F5D0;
    M2C_UNK *__base_D_40A890;
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

    temp_v0 = D_8021EEB8 * 25;
    *(&D_8011F308 + temp_v0) = 0;
    *(&D_8011F30C + temp_v0) = 0;
    *(&D_8011F310 + temp_v0) = 255.0f;
    if (D_8021E200 == 0) {
        func_80203B04();
    }
    *(u8 *)(&D_8021E204) = *(u8 *)(&D_8021E204 - 0x61);
    *(s8 *)(&D_8021E204 - 0x7B) = 0;
    *(s8 *)(&D_8021E204 + 5) = 2;
    *(s8 *)(&D_8021E204 - 2) = 1;
    do { __base_D_40A890 = &D_40A890;
 func_800294A0(&D_404F10, &D_8030BD90, __base_D_40A890 - &D_404F10); } while (0);
    var_s2 = 0;
    if (D_8021AFDC == 0x1C) {
__repair_rows: {
            *(&D_8021EEA8 + var_s2) = *(D_8021E22F + ((((var_s2 * 0x10) + var_s2) * 2) + (D_8021E15F * 0x110)));
            var_s2 += 1;
        }
if (var_s2 < 8) goto __repair_rows;
        *(s8 *)(&D_8021EEA4) = 0;
        *(s8 *)(&D_8021EEA4 + 0xC) = 1;
        *(s8 *)(&D_8021EEA4 + 1) = 1;
    }
    *(u8 *)(&D_8021EEA7) = (u8)D_8021E15F;
    *(u8 *)(&D_8021EEA7 + 0xA) = (u8)(*(u8 *)(&D_8021EEA7 + 0xA) & 0x3F);
    *(u8 *)(&D_8021EEA7 - 1) = 0;
    var_s2_2 = 0;
    do {
        temp_v1 = *(u8 *)(&D_8021EEA7 - 1) + func_8020FFD0(*(u8 *)(&D_8021EEA7), var_s2_2 & 0xFF, *(&D_8021EEA8 + var_s2_2));/*__repair_loop_weight*/do {var_s2_2 += 1;} while (0);
        *(u8 *)(&D_8021EEA7 - 1) = temp_v1;
    } while (var_s2_2 < 8);
    *(s8 *)(&D_8021F260) = 0;
    *(s8 *)(&D_8021F260 + 1) = 0;
    *(s8 *)(&D_8021F260 + 2) = 0;
    *(s8 *)(&D_8021F260 + 4) = 0;
    func_8021FCA4();
    func_800DE41C(0, 0, 3, 0, 0x42, 0xFF, NULL, NULL, &D_8021FE04, 0.0f, 0.0f, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    D_80220E40 = 10.0f;
    func_800DE41C(0, 0, 3, 0, 0x44, 0xFF, NULL, NULL, &D_8022026C, 0.0f, 0.0f, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    func_800DE41C(0, 0, 3, 0, 0x4A, 1, NULL, &func_80149A80, NULL, 0.0f, 0.0f, 0, 0, 15.0f, 50.0f, 0.0f, 0.0f, 0.0f);
    func_800DE41C(0, 0, 3, 0, 0x7F, 0, NULL, &D_801D5A90, NULL, 0.0f, 0.0f, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    func_802153C4(0x40, 0, -0.5f, 0x95, 0xD1, 0x75);
    func_800DE41C(0, 0, 3, 0, 0x4A, 0, NULL, &func_8020EE18, &func_8020F354, 0.0f, 0.0f, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    var_t1 = 0;
    var_s2_3 = 0;
    do {
        var_v0 = 0 * 2;
do {
        var_a3 = (void *)(((((var_v0 + var_s2_3) * 4) + var_s2_3) * 4)); __base_D_8018F5D0 = D_8018F5D0;
 var_a3 = (void *)((char *)var_a3 + (s32)(((var_t1 * 0x1A0) + __base_D_8018F5D0)));
        var_a2 = ((((var_v0 + var_s2_3) * 4) + var_s2_3) * 4) + &D_80238EC0;
        temp_t0 = (s8 *) var_a2 + 0x30;
loop_11:
        *(var_a3) = *(var_a2);
        *(var_a3 + 1) = *(var_a2 + 1);
        *(var_a3 + 2) = *(var_a2 + 2);
        *(var_a3 + 3) = *(var_a2 + 3);
        var_a2 += 0x10;
        var_a3 += 0x10;
        if (var_a2 != temp_t0) {
            goto loop_11;
        }
        *var_a3 = *var_a2;
        var_s2_3 += 1;
        var_v0 = var_s2_3 * 2;
        } while (var_s2_3 < 8);
        var_t1 += 1;
        var_s2_3 = 0;
    } while (var_t1 < 0xE);
    D_8021E120 = func_800DE41C(0, 0, 1, 0, 0x54, 0xFF, (*(&D_8021E231 + ((*(u8 *)(&D_8021EEA7) * 0x110) + *(u8 *)(&D_8021EEA7 + 1))) * 0x1A0) + __base_D_8018F5D0, &func_8020FC20, &func_8020FED8, -2.799999f, 0.35f, 0, 0, 360.0f, 0.0f, 0.03f, 0.03f, 0.03f);
    func_800DE41C(0, 0, 3, 0, 0x54, 0, NULL, &func_8020FAFC, &func_8020FBA8, 0.0f, 0.0f, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, NULL, NULL, &func_8013DD2C, 0.0f, 0.0f, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    do { func_80203DF8(1, 6, 0, 0, 0); } while (0);
}
