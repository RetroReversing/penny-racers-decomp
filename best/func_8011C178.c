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

M2C_UNK func_80129918(void *, M2C_UNK32, f32, M2C_UNK32, f32, f32, f32); /* extern */
M2C_UNK func_8013E49C(u16);                         /* extern */
s32 func_8013F050(s32, void *);                     /* extern */
M2C_UNK func_8015CB40(s32);                         /* extern */
M2C_UNK func_801D7028(s32, M2C_UNK);                /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_80168574;
extern M2C_UNK func_8011EDAC;

void func_8011C178(s32 arg0) {
    s32 temp_s0_2;
    s32 temp_s0_3;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_s0;
    void *temp_s1;

    temp_s0 = ((arg0 & 0xFFFF) * 0x64) + (&func_8011EDAC + 0x544);
    temp_s1 = M2C_FIELD(temp_s0, void **, 0x60);
    func_80129918(temp_s1 + 0x1C, M2C_FIELD(temp_s0, M2C_UNK32 *, 0x18), M2C_FIELD(temp_s0, f32 *, 0x1C), M2C_FIELD(temp_s0, M2C_UNK32 *, 0x20), M2C_FIELD(temp_s1, f32 *, 8), M2C_FIELD(temp_s1, f32 *, 0xC), M2C_FIELD(temp_s1, f32 *, 0x10));
    M2C_FIELD(temp_s0, M2C_UNK32 *, 0x18) = (M2C_UNK32) M2C_FIELD(temp_s1, M2C_UNK32 *, 0x24);
    M2C_FIELD(temp_s0, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s1, f32 *, 0x28);
    M2C_FIELD(temp_s0, M2C_UNK32 *, 0x20) = (M2C_UNK32) M2C_FIELD(temp_s1, M2C_UNK32 *, 0x2C);
    temp_v0 = M2C_FIELD(temp_s1, u16 *, 0x14) - 1;
    M2C_FIELD(temp_s1, u16 *, 0x14) = temp_v0;
    if (((temp_v0 << 0x10) == 0) || (M2C_FIELD(temp_s0, f32 *, 0x1C) < *(&D_80168574 + (M2C_FIELD(&D_8006FAF0, u16 *, 0x20) * 4)))) {
        temp_a0 = M2C_FIELD(temp_s1, void **, 4);
        temp_v0_2 = M2C_FIELD(temp_a0, u16 *, 0x560);
        M2C_FIELD(temp_a0, u16 *, 0x560) = (u16) (temp_v0_2 & 0xF8);
        temp_a0_2 = M2C_FIELD(temp_s1, void **, 4);
        M2C_FIELD(temp_a0_2, u16 *, 0x560) = (u16) (M2C_FIELD(temp_a0_2, u16 *, 0x560) | ((temp_v0_2 & 7) - 1));
        temp_s0_2 = arg0 & 0xFFFF;
        func_8013E49C(M2C_FIELD(temp_s1, u16 *, 0x76));
        func_8015CB40(temp_s0_2);
        *(&func_8011EDAC + 0x551 + (temp_s0_2 * 0x64)) = 2;
    }
    if ((M2C_FIELD(temp_s1, s32 *, 0x1C) & 0xFFFF00) || (func_8013F050(arg0 & 0xFFFF, temp_s1) & 0xFF)) {
        temp_a0_3 = M2C_FIELD(temp_s1, void **, 4);
        temp_v0_3 = M2C_FIELD(temp_a0_3, u16 *, 0x560);
        M2C_FIELD(temp_a0_3, u16 *, 0x560) = (u16) (temp_v0_3 & 0xF8);
        temp_a0_4 = M2C_FIELD(temp_s1, void **, 4);
        M2C_FIELD(temp_a0_4, u16 *, 0x560) = (u16) (M2C_FIELD(temp_a0_4, u16 *, 0x560) | ((temp_v0_3 & 7) - 1));
        temp_s0_3 = arg0 & 0xFFFF;
        func_8013E49C(M2C_FIELD(temp_s1, u16 *, 0x76));
        func_8015CB40(temp_s0_3);
        func_801D7028(temp_s0_3, 0x33);
        *(&func_8011EDAC + 0x551 + (temp_s0_3 * 0x64)) = 2;
    }
}
