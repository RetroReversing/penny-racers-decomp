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
s16 func_800DE41C(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, s32, void *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_80211B40(M2C_UNK *);                   /* extern */
M2C_UNK func_80211B90();                            /* extern */
M2C_UNK func_80211C08();                            /* extern */
M2C_UNK func_802153C4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_8021FCA4();                            /* extern */
extern M2C_UNK D_419270;
extern M2C_UNK D_41CF00;
extern M2C_UNK D_8011F304;
extern M2C_UNK D_8011F340;
extern M2C_UNK D_80187BF0;
extern M2C_UNK D_80187C00;
extern M2C_UNK D_8018F5D0;
extern M2C_UNK D_80190C98;
extern M2C_UNK D_801D5A90;
extern f64 D_8021DD20;
extern s8 D_8021E15F;
extern M2C_UNK D_8021E230;
extern M2C_UNK D_8021E231;
extern u8 D_8021EEA8;
extern M2C_UNK D_8021EEC0;
extern u8 D_8021EEC3;
extern M2C_UNK D_8021F036;
extern M2C_UNK D_8021F048;
extern M2C_UNK D_8021F260;
extern M2C_UNK D_8021F270;
extern M2C_UNK D_8021FE04;
extern M2C_UNK D_8022026C;
extern f32 D_80220E40;
extern M2C_UNK D_80221080;
extern M2C_UNK D_8022108C;
extern M2C_UNK D_80237DC0;
extern M2C_UNK D_80238EC0;
extern M2C_UNK D_8030BD90;
extern M2C_UNK func_8013DD2C;
extern M2C_UNK func_80149A80;
extern M2C_UNK func_8021078C;
extern M2C_UNK func_802109DC;
extern M2C_UNK func_80210D88;
extern M2C_UNK func_80210F70;
extern M2C_UNK func_802114C8;

void func_80210050(void) {
    s32 *var_a2;
    s32 *var_a3;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_v0;
    s32 var_v0_2;
    s8 temp_t1;
    void *temp_t0;

    func_800294A0(&D_419270, &D_8030BD90, &D_41CF00 - &D_419270);
    M2C_FIELD(&D_8021EEC0, u8 *, 0) = (u8) D_8021EEA8;
    M2C_FIELD(&D_8021EEC0, f32 *, 0xC) = (f32) ((f64) M2C_FIELD(&D_8021EEC0, u8 *, 0) * D_8021DD20);
    M2C_FIELD(&D_8021EEC0, u8 *, 3) = (u8) *(&D_8021E230 + (D_8021E15F * 0x110));
    M2C_FIELD(&D_8021EEC0, s32 *, 0xE0) = (s32) (M2C_FIELD(&D_8021EEC0, s32 *, 0xE0) & 0xFFFF7FFF & ~0x4000 & ~0x2000);
    M2C_FIELD(&D_8021EEC0, s8 *, 2) = 0;
    M2C_FIELD(&D_8021EEC0, s16 *, 4) = 0x88;
    M2C_FIELD(&D_8021EEC0, s8 *, 1) = 0x5A;
    M2C_FIELD(&D_8021F260, s8 *, 0) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 1) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 2) = 0;
    M2C_FIELD(&D_8021F260, s8 *, 4) = 0;
    func_80211B40(&D_8021EEC0);
    var_s2 = 0;
    func_80211B90();
    func_80211C08();
    var_t1 = 0;
    do {
loop_2:
        temp_a0 = var_s2 * 2;
        *(temp_a0 + ((var_t1 * 0x12) + &D_80187BF0)) = *(temp_a0 + ((var_t1 * 0x10) + ((D_8021E15F * 0xE0) + &D_8021F270)));
        var_s2 += 1;
        if (var_s2 < 8) {
            goto loop_2;
        }
        *(&D_80187C00 + (var_t1 * 0x12)) = 0xFFFF;
        *(&D_8021F036 + var_t1) = *((D_8021E15F * 0xE) + &D_8021F048 + var_t1);
        var_t1 += 1;
        var_s2 = 0;
    } while (var_t1 < 0xE);
    var_v0 = 0 * 8;
    do {
        temp_v0 = (var_v0 + var_s2) * 4;
        *(&D_80221080 + temp_v0) = 0;
        *(&D_8022108C + temp_v0) = 0;
        var_s2 += 1;
        var_v0 = var_s2 * 8;
    } while (var_s2 < 4);
    func_800DE41C(0, 0, 3, 0, 0x7F, 0, NULL, &D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_802153C4(0x40, 0x3F000000, 0, 0xB7, 0xA9, 0x8A);
    func_8021FCA4();
    func_800DE41C(0, 0, 3, 0, 0x42, 0xFF, NULL, NULL, &D_8021FE04, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_80220E40 = 10.0f;
    func_800DE41C(0, 0, 3, 0, 0x44, 0xFF, NULL, NULL, &D_8022026C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x4A, 1, NULL, &func_80149A80, NULL, 0, 0, 0, 0, 0x41F00000, 0x42480000, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x4A, 0, NULL, &func_8021078C, &func_802109DC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    var_t1_2 = 0;
    var_s2_2 = 0;
    do {
        var_v0_2 = 0 * 2;
loop_8:
        temp_v0_2 = (((var_v0_2 + var_s2_2) * 4) + var_s2_2) * 4;
        var_a3 = temp_v0_2 + ((var_t1_2 * 0x1A0) + &D_8018F5D0);
        var_a2 = temp_v0_2 + &D_80238EC0;
        temp_t0 = var_a2 + 0x30;
loop_9:
        M2C_FIELD(var_a3, s32 *, 0) = M2C_FIELD(var_a2, s32 *, 0);
        M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
        M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
        M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
        var_a2 += 0x10;
        var_a3 += 0x10;
        if (var_a2 != temp_t0) {
            goto loop_9;
        }
        *var_a3 = *var_a2;
        var_s2_2 += 1;
        var_v0_2 = var_s2_2 * 2;
        if (var_s2_2 < 8) {
            goto loop_8;
        }
        var_t1_2 += 1;
        var_s2_2 = 0;
    } while (var_t1_2 < 0xE);
    if ((s32) D_8021EEC3 > 0) {
        __repair_rows: {
            temp_t1 = *((D_8021E15F * 0x110) + var_s2_2 + &D_8021E231);
            temp_s1 = temp_t1 * 2;
            *(&D_80190C98 + temp_s1) = func_800DE41C(0, var_s2_2 & 0xFF, 1, 0, 0x54, 0xFF, (temp_t1 * 0x1A0) + &D_8018F5D0, &func_80210D88, &func_80210F70, 0x40200000, 0x404CCC32, 0, 0xC18B3308, 0x43A68000, 0x4059997C, 0x3CCCCCCD, 0x3CCCCCCD, 0x3CCCCCCD);
            M2C_FIELD(*(&D_8011F340 + (*(&D_8011F304 + (*(&D_80190C98 + temp_s1) * 0x64)) * 0x64)), void **, 4) = (void *) ((temp_t1 * 0xC) + &D_80237DC0);
            var_s2_2 += 1;
        }
if (var_s2_2 < (s32) D_8021EEC3) goto __repair_rows;
    }
    func_800DE41C(0, 0, 3, 0, 0x59, 0, NULL, NULL, &func_802114C8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, NULL, NULL, &func_8013DD2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80203DF8(1, 6, 0, 0, 0);
}
