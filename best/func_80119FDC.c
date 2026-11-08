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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, s32, s32, s32, f32, f32, f32); /* extern */
M2C_UNK func_8013E49C(u16);                         /* extern */
extern M2C_UNK D_8013AF08;
extern M2C_UNK D_8015FD04;
extern M2C_UNK D_802390C8;
extern M2C_UNK func_8011EDAC;

void func_80119FDC(s32 arg0) {
    f32 temp_ft0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0_6;
    s32 temp_v0_7;
    u16 temp_v0_2;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    temp_s0 = *(&func_8011EDAC + 0x5A4 + ((arg0 & 0xFFFF) * 0x64));
    M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), s8 *, 0x8D1) = 0x78;
    temp_ft0 = M2C_FIELD(temp_s0, f32 *, 8);
    M2C_FIELD(temp_s0, f32 *, 8) = (f32) (((2.0f - temp_ft0) * 0.2f) + temp_ft0);
    temp_v1 = M2C_FIELD(temp_s0, void **, 4);
    if (M2C_FIELD(temp_v1, s32 *, 0x890) != 0) {
        M2C_FIELD(temp_v1, f32 *, 0x748) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x748) + 100.0f);
        temp_v0 = M2C_FIELD(temp_s0, void **, 4);
        if (M2C_FIELD(temp_v0, f32 *, 0x748) > 7000.0f) {
            M2C_FIELD(temp_v0, f32 *, 0x748) = 7000.0f;
        }
    }
    temp_v0_2 = M2C_FIELD(temp_s0, u16 *, 0x14) - 1;
    M2C_FIELD(temp_s0, u16 *, 0x14) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        temp_v1_2 = M2C_FIELD(temp_s0, void **, 4);
        M2C_FIELD(temp_v1_2, u16 *, 0x560) = (u16) (M2C_FIELD(temp_v1_2, u16 *, 0x560) & 0xEF);
        func_8013E49C(M2C_FIELD(temp_s0, u16 *, 0x76));
        *(&func_8011EDAC + 0x551 + ((arg0 & 0xFFFF) * 0x64)) = 2;
    }
    temp_v1_3 = M2C_FIELD(temp_s0, void **, 4);
    if ((M2C_FIELD(temp_v1_3, u8 *, 0x860) != 0) && (M2C_FIELD(temp_v1_3, s32 *, 0x890) != 0)) {
        temp_fv1 = M2C_FIELD(temp_v1_3, f32 *, 0x7B4);
        M2C_FIELD(temp_v1_3, f32 *, 0x7B4) = (f32) ((((M2C_FIELD(temp_v1_3, f32 *, 0x784) * M2C_FIELD(temp_s0, f32 *, 8)) - temp_fv1) * 0.15f) + temp_fv1);
        temp_v0_3 = M2C_FIELD(temp_s0, void **, 4);
        temp_fv1_2 = M2C_FIELD(temp_v0_3, f32 *, 0x7BC);
        M2C_FIELD(temp_v0_3, f32 *, 0x7BC) = (f32) ((((M2C_FIELD(temp_v0_3, f32 *, 0x78C) * M2C_FIELD(temp_s0, f32 *, 8)) - temp_fv1_2) * 0.15f) + temp_fv1_2);
        temp_v0_4 = M2C_FIELD(temp_s0, void **, 4);
        M2C_FIELD(temp_v0_4, f32 *, 0x7C0) = (f32) M2C_FIELD(temp_v0_4, f32 *, 0x7B4);
        temp_v0_5 = M2C_FIELD(temp_s0, void **, 4);
        M2C_FIELD(temp_v0_5, f32 *, 0x7C8) = (f32) M2C_FIELD(temp_v0_5, f32 *, 0x7BC);
    }
    if (!(M2C_FIELD(temp_s0, u16 *, 0x14) & 7) && ((u8) M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u8 *, 0x8A1) < 2U)) {
        temp_v0_6 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x7F, &D_802390C8, &D_8013AF08, &D_8015FD04, M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x714), M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x718), M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x71C), 0, 0, 0, 0.08f, 0.08f, 0.08f);
        if ((u32) ((temp_v0_6 + 2) & 0xFFFF) >= 2U) {
            temp_a0 = (temp_v0_6 & 0xFFFF) * 0x64;
            temp_v1_4 = temp_a0 + (&func_8011EDAC + 0x544);
            M2C_FIELD(temp_v1_4, s16 *, 8) = 0x40;
            M2C_FIELD(temp_v1_4, s16 *, 6) = 0x40;
            M2C_FIELD(temp_v1_4, s16 *, 4) = 0x40;
            *(&func_8011EDAC + 0x546 + temp_a0) = 0x40;
            *(&func_8011EDAC + 0x588 + temp_a0) = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x7C0);
            *(&func_8011EDAC + 0x58C + temp_a0) = (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x7C4) * 0.8f) + 1.0f;
            *(&func_8011EDAC + 0x590 + temp_a0) = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x7C8);
            *(&func_8011EDAC + 0x582 + temp_a0) = (s16) M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u8 *, 0x7CC);
            *(&func_8011EDAC + 0x552 + temp_a0) = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 2);
        }
        temp_v0_7 = func_800DE41C(0, 0, 1, 0, 0x5B, 0x7F, &D_802390C8, &D_8013AF08, &D_8015FD04, M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x720), M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x724), M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x728), 0, 0, 0, 0.08f, 0.08f, 0.08f);
        if ((u32) ((temp_v0_7 + 2) & 0xFFFF) >= 2U) {
            temp_a0_2 = (temp_v0_7 & 0xFFFF) * 0x64;
            temp_v1_5 = temp_a0_2 + (&func_8011EDAC + 0x544);
            M2C_FIELD(temp_v1_5, s16 *, 8) = 0x40;
            M2C_FIELD(temp_v1_5, s16 *, 6) = 0x40;
            M2C_FIELD(temp_v1_5, s16 *, 4) = 0x40;
            *(&func_8011EDAC + 0x546 + temp_a0_2) = 0x40;
            *(&func_8011EDAC + 0x588 + temp_a0_2) = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x7C0);
            *(&func_8011EDAC + 0x58C + temp_a0_2) = (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x7C4) * 0.8f) + 1.0f;
            *(&func_8011EDAC + 0x590 + temp_a0_2) = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x7C8);
            *(&func_8011EDAC + 0x582 + temp_a0_2) = (s16) M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u8 *, 0x7CC);
            *(&func_8011EDAC + 0x552 + temp_a0_2) = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 2);
        }
    }
}
