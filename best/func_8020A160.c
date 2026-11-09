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

u16 func_800DE41C(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK32, f32, M2C_UNK32, M2C_UNK32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_8011F304;
extern M2C_UNK D_8011F340;
extern M2C_UNK D_8021B024;
extern f32 D_8021B038;
extern M2C_UNK D_8021B04C;
extern M2C_UNK D_8021B2D8;
extern M2C_UNK D_8021B2E8;
extern u16 D_8021E146;
extern s16 D_8021E1A2;
extern M2C_UNK D_8021E22F;
extern M2C_UNK D_8021E231;
extern M2C_UNK D_8021E680;
extern M2C_UNK D_8021EFF0;
extern u16 D_8021EFF8;
extern u16 D_8021F024;
extern u16 D_8021F026;
extern u16 D_8021F090;
extern M2C_UNK D_80237DC0;
extern M2C_UNK D_80238EC0;
extern M2C_UNK func_8013DD2C;
extern M2C_UNK func_8020AA48;
extern M2C_UNK func_8020AAB0;
extern M2C_UNK func_8020B3CC;
extern M2C_UNK func_8020FED8;

void func_8020A160(s32 arg0) {
    f32 var_fs0;
    s32 *var_a2;
    s32 *var_a2_2;
    s32 *var_a3;
    s32 *var_a3_2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t2;
    s32 var_v0;
    s32 var_v0_3;
    u16 *temp_v1;
    void *temp_t1;
    void *temp_t1_2;
    void *var_a0;
    void *var_v0_2;

    *(&D_8021EFF0 + (arg0 * 2)) = func_800DE41C(0, arg0 & 0xFF, 3, 0, 0x6E, 0, NULL, &func_8020AAB0, &func_8020B3CC, 0, 0.0f, 0, 0, 0, 0, 0, 0, 0);
    if (D_8021E1A2 == 0) {
        var_t2 = 0;
        var_t0 = 0;
        do {
            var_v0 = 0 * 2;
loop_3:
            temp_v0 = (((var_v0 + var_t0) * 4) + var_t0) * 4;
            var_a3 = temp_v0 + ((var_t2 * 0x1A0) + &D_8021E680);
            var_a2 = temp_v0 + &D_80238EC0;
            temp_t1 = var_a2 + 0x30;
loop_4:
            M2C_FIELD(var_a3, s32 *, 0) = M2C_FIELD(var_a2, s32 *, 0);
            M2C_FIELD(var_a3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
            M2C_FIELD(var_a3, s32 *, 8) = (s32) M2C_FIELD(var_a2, s32 *, 8);
            M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a2, s32 *, 0xC);
            var_a2 += 0x10;
            var_a3 += 0x10;
            if (var_a2 != temp_t1) {
                goto loop_4;
            }
            *var_a3 = *var_a2;
            var_t0 += 1;
            var_v0 = var_t0 * 2;
            if (var_t0 < 8) {
                goto loop_3;
            }
            var_t2 += 1;
            var_t0 = 0;
        } while (var_t2 < 5);
        func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, NULL, NULL, &func_8013DD2C, 0, 0.0f, 0, 0, 0, 0, 0, 0, 0);
        D_8021F090 = func_800DE41C(0, 0, 1, 0, 0x64, 0xFF, &D_8021E680, &func_8020AA48, &func_8020FED8, M2C_FIELD(&D_8021B024, M2C_UNK32 *, 0), D_8021B038, M2C_FIELD(&D_8021B04C, M2C_UNK32 *, 0), 0x41700000, 0, 0, 0x3E99999A, 0x3E99999A, 0x3E99999A);
        temp_s0 = arg0 * 0x110;
        M2C_FIELD(*(&D_8011F340 + (*(&D_8011F304 + ((&D_8021F090)[arg0] * 0x64)) * 0x64)), void **, 4) = (void *) ((*(&D_8021E231 + (temp_s0 + *(&D_8021E22F + temp_s0))) * 0xC) + &D_80237DC0);
        D_8021E146 = func_800DE41C(0, 0, 1, 0, 0x64, 0xFF, &D_8021E680 + 0x1A0, NULL, &func_8020FED8, M2C_FIELD(&D_8021B024, M2C_UNK32 *, 4), 0.0f, M2C_FIELD(&D_8021B04C, M2C_UNK32 *, 4), 0x41700000, 0, 0, 0x3E99999A, 0x3E99999A, 0x3E99999A);
        M2C_FIELD(*(&D_8011F340 + (*(&D_8011F304 + (D_8021E146 * 0x64)) * 0x64)), void **, 4) = (void *) ((*(&D_8021E231 + (temp_s0 + *(&D_8021E22F + temp_s0))) * 0xC) + &D_80237DC0);
        D_8021F024 = func_800DE41C(0, 0, 1, 0, 0x64, 0xFF, &D_8021E680 + 0x340, NULL, &func_8020FED8, M2C_FIELD(&D_8021B024, M2C_UNK32 *, 8), 0.0f, M2C_FIELD(&D_8021B04C, M2C_UNK32 *, 8), 0x41700000, 0, 0, 0x3E99999A, 0x3E99999A, 0x3E99999A);
        M2C_FIELD(*(&D_8011F340 + (*(&D_8011F304 + (D_8021F024 * 0x64)) * 0x64)), void **, 4) = (void *) ((*(&D_8021E231 + (temp_s0 + *(&D_8021E22F + temp_s0))) * 0xC) + &D_80237DC0);
        D_8021F026 = func_800DE41C(0, 0, 1, 0, 0x64, 0xFF, &D_8021E680 + 0x4E0, NULL, &func_8020FED8, M2C_FIELD(&D_8021B024, M2C_UNK32 *, 0xC), 0.0f, M2C_FIELD(&D_8021B04C, M2C_UNK32 *, 0xC), 0x41700000, 0, 0, 0x3E99999A, 0x3E99999A, 0x3E99999A);
        M2C_FIELD(*(&D_8011F340 + (*(&D_8011F304 + (D_8021F026 * 0x64)) * 0x64)), void **, 4) = (void *) ((*(&D_8021E231 + (temp_s0 + *(&D_8021E22F + temp_s0))) * 0xC) + &D_80237DC0);
        D_8021EFF8 = func_800DE41C(0, 0, 1, 0, 0x64, 0xFF, &D_8021E680 + 0x680, NULL, &func_8020FED8, M2C_FIELD(&D_8021B024, M2C_UNK32 *, 0x10), 0.0f, M2C_FIELD(&D_8021B04C, M2C_UNK32 *, 0x10), 0x41700000, 0, 0, 0x3E99999A, 0x3E99999A, 0x3E99999A);
        var_a0 = *(&D_8011F340 + (*(&D_8011F304 + (D_8021EFF8 * 0x64)) * 0x64));
        var_v0_2 = (*(&D_8021E231 + (temp_s0 + *(&D_8021E22F + temp_s0))) * 0xC) + &D_80237DC0;
    } else {
        var_fs0 = 0.0f;
        var_t0_2 = 0;
        if (D_8021E1A2 == 1) {
            var_fs0 = 5.0f;
        }
        var_v0_3 = 0 * 2;
        do {
            temp_v0_2 = (((var_v0_3 + var_t0_2) * 4) + var_t0_2) * 4;
            var_a3_2 = temp_v0_2 + ((arg0 * 0x1A0) + &D_8021E680);
            var_a2_2 = temp_v0_2 + &D_80238EC0;
            temp_t1_2 = var_a2_2 + 0x30;
loop_12:
            M2C_FIELD(var_a3_2, s32 *, 0) = M2C_FIELD(var_a2_2, s32 *, 0);
            M2C_FIELD(var_a3_2, s32 *, 4) = (s32) M2C_FIELD(var_a2_2, s32 *, 4);
            M2C_FIELD(var_a3_2, s32 *, 8) = (s32) M2C_FIELD(var_a2_2, s32 *, 8);
            M2C_FIELD(var_a3_2, s32 *, 0xC) = (s32) M2C_FIELD(var_a2_2, s32 *, 0xC);
            var_a2_2 += 0x10;
            var_a3_2 += 0x10;
            if (var_a2_2 != temp_t1_2) {
                goto loop_12;
            }
            *var_a3_2 = *var_a2_2;
            var_t0_2 += 1;
            var_v0_3 = var_t0_2 * 2;
        } while (var_t0_2 < 8);
        func_800DE41C(0, 0, 3, 0, 0xA1, 0xFF, NULL, NULL, &func_8013DD2C, 0, 0.0f, 0, 0, 0, 0, 0, 0, 0);
        temp_v0_3 = arg0 * 4;
        temp_v1 = &(&D_8021F090)[arg0];
        *temp_v1 = func_800DE41C(0, arg0 & 0xFF, 1, 0, 0x64, 0xFF, (arg0 * 0x1A0) + &D_8021E680, &func_8020AA48, &func_8020FED8, 0x41400000, var_fs0 + *(&D_8021B2D8 + temp_v0_3), 0, *(&D_8021B2E8 + temp_v0_3), 0, 0, 0x3ECCCCCD, 0x3ECCCCCD, 0x3ECCCCCD);
        var_a0 = *(&D_8011F340 + (*(&D_8011F304 + (*temp_v1 * 0x64)) * 0x64));
        temp_v0_4 = arg0 * 0x110;
        var_v0_2 = (*(&D_8021E231 + (temp_v0_4 + *(&D_8021E22F + temp_v0_4))) * 0xC) + &D_80237DC0;
    }
    M2C_FIELD(var_a0, void **, 4) = var_v0_2;
}
