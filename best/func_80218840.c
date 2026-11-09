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

u16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8012AD20(u16, M2C_UNK *, u8, u8);      /* extern */
M2C_UNK func_80203DF8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_8021FCA4();                            /* extern */
M2C_UNK func_80230960(M2C_UNK *);                   /* extern */
extern s8 D_80046832;
extern M2C_UNK D_800DA260;
extern M2C_UNK D_8011F304;
extern M2C_UNK D_8011F340;
extern s16 D_80189C94;
extern s8 D_8018A43C;
extern M2C_UNK D_8018A44A;
extern M2C_UNK D_8018F5D0;
extern M2C_UNK D_80190C9C;
extern M2C_UNK D_80190CB0;
extern M2C_UNK D_801D5A90;
extern s16 D_8021E1A6;
extern M2C_UNK D_8021F0A0;
extern M2C_UNK D_8021FE04;
extern M2C_UNK D_8022026C;
extern f32 D_80220E40;
extern M2C_UNK D_8022A770;
extern M2C_UNK D_80237DC0;
extern M2C_UNK D_80238EC0;
extern M2C_UNK D_80239714;
extern M2C_UNK D_802399B8;
extern M2C_UNK func_8013DD2C;
extern M2C_UNK func_80149A80;
extern M2C_UNK func_8020FED8;
extern M2C_UNK func_802191E4;
extern M2C_UNK func_8021999C;
extern M2C_UNK func_80219A60;
extern M2C_UNK func_80219B58;
extern M2C_UNK func_80219C14;
extern M2C_UNK func_80219CCC;
extern M2C_UNK func_80219CF0;

void func_80218840(void) {
    s32 *var_a2;
    s32 *var_a3;
    s32 temp_v0;
    s32 var_t0;
    s32 var_t2;
    s32 var_v0;
    void *temp_t1;

    M2C_FIELD(&D_80190CB0, s8 *, 0) = 0;
    *(&D_8018A44A + (D_8021E1A6 * 2)) = 0;
    D_80189C94 = 0;
    D_8018A43C = 0;
    D_80046832 = 1;
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, NULL, &D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8021FCA4();
    func_800DE41C(0, 0, 3, 0, 0x72, 0xFF, NULL, NULL, &D_8021FE04, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_80220E40 = 10.0f;
    func_800DE41C(0, 0, 3, 0, 0x74, 0xFF, NULL, NULL, &D_8022026C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x7A, 1, NULL, &func_80149A80, NULL, 0, 0, 0, 0, 0x41F00000, 0x42480000, 0, 0, 0);
    M2C_FIELD(&D_80190CB0, u16 *, -0x18) = func_800DE41C(0, 0, 1, 0x8000, 0x7C, 0x9B, &D_80239714, &func_80219A60, &func_80219B58, 0x3FC00000, 0xC0000000, 0, 0xC1A00000, 0, 0, 0x3D4CCCCD, 0x3DCCCCCD, 0x3D4CCCCD);
    M2C_FIELD(&D_80190CB0, u16 *, -0x16) = func_800DE41C(0, 0x40, 1, 0x8000, 0x7C, 0x9B, &D_80239714, &func_80219A60, &func_80219B58, 0xBFC00000, 0xC0000000, 0, 0xC1A00000, 0, 0, 0x3D4CCCCD, 0x3DCCCCCD, 0x3D4CCCCD);
    var_t2 = 0;
    var_t0 = 0;
    do {
        var_v0 = 0 * 2;
loop_2:
        temp_v0 = (((var_v0 + var_t0) * 4) + var_t0) * 4;
        var_a3 = temp_v0 + ((var_t2 * 0x1A0) + &D_8018F5D0);
        var_a2 = temp_v0 + &D_80238EC0;
        temp_t1 = var_a2 + 0x30;
loop_3:
        M2C_FIELD(var_a3, s32 *, 0) = M2C_FIELD(var_a2, s32 *, 0);
        M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
        M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
        M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
        var_a2 += 0x10;
        var_a3 += 0x10;
        if (var_a2 != temp_t1) {
            goto loop_3;
        }
        *var_a3 = *var_a2;
        var_t0 += 1;
        var_v0 = var_t0 * 2;
        if (var_t0 < 8) {
            goto loop_2;
        }
        var_t2 += 1;
        var_t0 = 0;
    } while (var_t2 < 0xE);
    M2C_FIELD(&D_80190C9C, u16 *, 0) = func_800DE41C(0, 0, 1, 0x8000, 0x80, 0xFF, &D_8018F5D0, &func_8021999C, &func_8020FED8, 0, 0xC0800000, 0xC0000000, 0, 0x43B40000, 0, 0x3D8F5C29, 0x3D8F5C29, 0x3D8F5C29);
    M2C_FIELD(*(&D_8011F340 + (*(&D_8011F304 + (M2C_FIELD(&D_80190C9C, u16 *, 0) * 0x64)) * 0x64)), void **, 4) = (void *) ((M2C_FIELD(&D_800DA260, u16 *, 0) * 0xC) + &D_80237DC0);
    func_8012AD20(*(&D_8011F304 + (M2C_FIELD(&D_80190C9C, u16 *, 0) * 0x64)), &D_8021F0A0, M2C_FIELD(&D_800DA260, u8 *, 1), M2C_FIELD((&D_800DA260 + M2C_FIELD(&D_800DA260, u16 *, 0)), u8 *, 0x16A));
    M2C_FIELD(&D_8022A770, u16 *, 2) = (u16) M2C_FIELD(&D_80190C9C, u16 *, 0);
    func_80230960(&D_8022A770);
    func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, NULL, NULL, &func_8013DD2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    M2C_FIELD(&D_80190C9C, u16 *, 2) = func_800DE41C(0, 0, 3, 0, 0x84, 0xFF, NULL, NULL, &func_80219C14, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    M2C_FIELD(&D_80190C9C, u16 *, 4) = func_800DE41C(0, 0, 3, 0, 0x81, 0xFF, NULL, &func_80219CF0, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    M2C_FIELD(&D_80190C9C, u16 *, 6) = func_800DE41C(0, 0, 1, 0, 0x7B, 0xFF, &D_802399B8, NULL, &func_80219CCC, 0, 0x3F8CCCCD, 0x40A00000, 0, 0, 0, 0x3DCCCCCD, 0x3DCCCCCD, 0x3DCCCCCD);
    func_800DE41C(0, 0, 3, 0, 0x7A, 0, NULL, &func_802191E4, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80203DF8(1, 0x3C, 0, 0, 0);
}
