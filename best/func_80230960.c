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

extern M2C_UNK D_8011F4E4;
extern M2C_UNK D_8011F548;
extern M2C_UNK D_8011F5AC;
extern M2C_UNK D_80232880;
extern M2C_UNK D_802328A0;
extern M2C_UNK D_802328CC;
extern M2C_UNK D_80237740;
extern M2C_UNK D_80237FC8;
extern M2C_UNK D_80237FCC;
extern M2C_UNK D_80237FD0;
extern M2C_UNK D_80237FD4;
extern M2C_UNK D_802387D8;

void func_80230960(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_a2;
    u16 temp_a2_2;
    u16 temp_a2_3;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;

    temp_a2 = *(&D_80232880 + (M2C_FIELD(arg0, u16 *, 0x53A) * 2));
    temp_a1 = (M2C_FIELD(arg0, u16 *, 2) * 0x64) + &D_8011F4E4;
    if (temp_a2 != 0) {
        M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x50), void **, 4) = (void *) ((temp_a2 * 0xC) + &D_80237740);
        temp_v0 = *((temp_a2 * 0x10) + &D_802387D8 + M2C_FIELD(arg0, u16 *, 0x230)) * 0x10;
        M2C_FIELD(temp_a1, f32 *, 0x18) = (f32) *(&D_80237FC8 + temp_v0);
        M2C_FIELD(temp_a1, f32 *, 0x1C) = (f32) *(&D_80237FCC + temp_v0);
        M2C_FIELD(temp_a1, f32 *, 0x20) = (f32) *(&D_80237FD0 + temp_v0);
        M2C_FIELD(temp_a1, f32 *, 0x24) = (f32) *(&D_80237FD4 + temp_v0);
    } else {
        M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x50), void **, 4) = NULL;
    }
    temp_a2_2 = *(&D_802328A0 + (M2C_FIELD(arg0, u16 *, 0x538) * 2));
    temp_a1_2 = (M2C_FIELD(arg0, u16 *, 2) * 0x64) + &D_8011F548;
    if (temp_a2_2 != 0) {
        M2C_FIELD(M2C_FIELD(temp_a1_2, void **, 0x50), void **, 4) = (void *) ((temp_a2_2 * 0xC) + &D_80237740);
        temp_v0_2 = *((temp_a2_2 * 0x10) + &D_802387D8 + M2C_FIELD(arg0, u16 *, 0x230)) * 0x10;
        M2C_FIELD(temp_a1_2, f32 *, 0x18) = (f32) *(&D_80237FC8 + temp_v0_2);
        M2C_FIELD(temp_a1_2, f32 *, 0x1C) = (f32) *(&D_80237FCC + temp_v0_2);
        M2C_FIELD(temp_a1_2, f32 *, 0x20) = (f32) *(&D_80237FD0 + temp_v0_2);
        M2C_FIELD(temp_a1_2, f32 *, 0x24) = (f32) *(&D_80237FD4 + temp_v0_2);
    } else {
        M2C_FIELD(M2C_FIELD(temp_a1_2, void **, 0x50), void **, 4) = NULL;
    }
    temp_a2_3 = *(&D_802328CC + (M2C_FIELD(arg0, u16 *, 0x534) * 2));
    temp_a1_3 = (M2C_FIELD(arg0, u16 *, 2) * 0x64) + &D_8011F5AC;
    if (temp_a2_3 != 0) {
        M2C_FIELD(M2C_FIELD(temp_a1_3, void **, 0x50), void **, 4) = (void *) ((temp_a2_3 * 0xC) + &D_80237740);
        temp_v0_3 = *((temp_a2_3 * 0x10) + &D_802387D8 + M2C_FIELD(arg0, u16 *, 0x230)) * 0x10;
        M2C_FIELD(temp_a1_3, f32 *, 0x18) = (f32) *(&D_80237FC8 + temp_v0_3);
        M2C_FIELD(temp_a1_3, f32 *, 0x1C) = (f32) *(&D_80237FCC + temp_v0_3);
        M2C_FIELD(temp_a1_3, f32 *, 0x20) = (f32) *(&D_80237FD0 + temp_v0_3);
        M2C_FIELD(temp_a1_3, f32 *, 0x24) = (f32) *(&D_80237FD4 + temp_v0_3);
        return;
    }
    M2C_FIELD(M2C_FIELD(temp_a1_3, void **, 0x50), void **, 4) = NULL;
}
