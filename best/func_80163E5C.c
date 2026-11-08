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

s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK32, f32, M2C_UNK32, s32, s32, s32, f32, f32, f32); /* extern */
M2C_UNK func_80129918(void *, M2C_UNK32, f32, M2C_UNK32, f32, f32, f32); /* extern */
M2C_UNK func_8013E49C(u16);                         /* extern */
M2C_UNK func_8015D410(s32, M2C_UNK, void *, M2C_UNK); /* extern */
M2C_UNK func_801D7028(s32, M2C_UNK);                /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F350;
extern M2C_UNK D_80168574;
extern M2C_UNK D_802390C8;
extern M2C_UNK func_80164218;
extern M2C_UNK func_80164364;

void func_80163E5C(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_4;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0_5;

    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    temp_s1 = *(&D_8011F350 + temp_v0);
    temp_s2 = temp_v0 + &D_8011F2F0;
    M2C_FIELD(temp_s1, f32 *, 0xC) = (f32) (M2C_FIELD(temp_s1, f32 *, 0xC) - 0.1f);
    func_80129918(temp_s1 + 0x1C, M2C_FIELD(temp_s2, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s2, f32 *, 0x1C), M2C_FIELD(temp_s2, M2C_UNK32 *, 0x20), M2C_FIELD(temp_s1, f32 *, 8), M2C_FIELD(temp_s1, f32 *, 0xC), M2C_FIELD(temp_s1, f32 *, 0x10));
    M2C_FIELD(temp_s2, M2C_UNK32 *, 0x18) = (M2C_UNK32) M2C_FIELD(temp_s1, M2C_UNK32 *, 0x24);
    M2C_FIELD(temp_s2, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s1, f32 *, 0x28);
    M2C_FIELD(temp_s2, M2C_UNK32 *, 0x20) = (M2C_UNK32) M2C_FIELD(temp_s1, M2C_UNK32 *, 0x2C);
    if ((M2C_FIELD(temp_s1, s32 *, 0x1C) & 0xFFFF00) || (temp_v0_2 = M2C_FIELD(temp_s1, u16 *, 0x14) - 1, M2C_FIELD(temp_s1, u16 *, 0x14) = temp_v0_2, ((temp_v0_2 << 0x10) == 0)) || (M2C_FIELD(temp_s2, f32 *, 0x1C) < *(&D_80168574 + (M2C_FIELD(&D_8006FAF0, u16 *, 0x20) * 4)))) {
        temp_a0 = M2C_FIELD(temp_s1, void **, 4);
        temp_v0_3 = M2C_FIELD(temp_a0, u16 *, 0x560);
        M2C_FIELD(temp_a0, u16 *, 0x560) = (u16) (temp_v0_3 & 0xF8);
        temp_a0_2 = M2C_FIELD(temp_s1, void **, 4);
        M2C_FIELD(temp_a0_2, u16 *, 0x560) = (u16) (M2C_FIELD(temp_a0_2, u16 *, 0x560) | ((temp_v0_3 & 7) - 1));
        temp_s0 = arg0 & 0xFFFF;
        func_8013E49C(M2C_FIELD(temp_s1, u16 *, 0x76));
        func_8015D410(temp_s0, 0x3F800000, M2C_FIELD(temp_s1, void **, 4), 0);
        func_801D7028(temp_s0, 0x34);
        *(&D_8011F2FD + (temp_s0 * 0x64)) = 2;
    }
    if (!(M2C_FIELD(temp_s1, u16 *, 0x14) & 3)) {
        temp_v0_4 = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFA, &D_802390C8, &func_80164218, &func_80164364, M2C_FIELD(temp_s2, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s2, f32 *, 0x1C), M2C_FIELD(temp_s2, M2C_UNK32 *, 0x20), 0, 0, 0, 0.08f, 0.08f, 0.08f);
        if ((u32) ((temp_v0_4 + 2) & 0xFFFF) >= 2U) {
            temp_v0_5 = ((temp_v0_4 & 0xFFFF) * 0x64) + &D_8011F2F0;
            M2C_FIELD(temp_v0_5, s16 *, 8) = 0x40;
            M2C_FIELD(temp_v0_5, s16 *, 6) = 0x40;
            M2C_FIELD(temp_v0_5, s16 *, 4) = 0x40;
            M2C_FIELD(temp_v0_5, s16 *, 2) = 0x40;
            M2C_FIELD(temp_v0_5, f32 *, 0x44) = (f32) (-M2C_FIELD(temp_s1, f32 *, 8) * 0.5f);
            M2C_FIELD(temp_v0_5, f32 *, 0x48) = (f32) (-M2C_FIELD(temp_s1, f32 *, 0xC) * 0.5f);
            M2C_FIELD(temp_v0_5, f32 *, 0x4C) = (f32) (-M2C_FIELD(temp_s1, f32 *, 0x10) * 0.5f);
        }
    }
}
