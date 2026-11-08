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

M2C_UNK func_8013AE60(s32);                         /* extern */
M2C_UNK func_8013E49C(u16);                         /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F320;
extern M2C_UNK D_8011F324;
extern M2C_UNK D_8011F328;
extern M2C_UNK D_8011F32E;
extern u8 D_80233EC1;

void func_8016711C(s32 arg0) {
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    s32 temp_v0;
    s32 temp_v0_3;
    u16 temp_v0_2;
    u16 temp_v1;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0_4;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_s1 = ((arg0 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_s0 = M2C_FIELD(temp_s1, void **, 0x60);
    M2C_FIELD(temp_s1, f32 *, 0x18) = (f32) *(&D_8011F308 + (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 2) * 0x64));
    M2C_FIELD(temp_s1, f32 *, 0x1C) = (f32) (*(&D_8011F30C + (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 2) * 0x64)) + M2C_FIELD(temp_s0, f32 *, 0xC));
    M2C_FIELD(temp_s1, f32 *, 0x20) = (f32) *(&D_8011F310 + (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 2) * 0x64));
    temp_fv1 = M2C_FIELD(temp_s1, f32 *, 0x28) + 5.0f;
    M2C_FIELD(temp_s1, f32 *, 0x28) = temp_fv1;
    if (temp_fv1 > 359.0f) {
        M2C_FIELD(temp_s1, f32 *, 0x28) = (f32) (temp_fv1 - 360.0f);
    }
    temp_v1 = *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_ft0 = M2C_FIELD(temp_s0, f32 *, 0xC);
        temp_fv0 = ((10.0f - temp_ft0) * 0.2f) + temp_ft0;
        M2C_FIELD(temp_s0, f32 *, 0xC) = temp_fv0;
        if (temp_fv0 < 30.0f) {
            M2C_FIELD(temp_s0, f32 *, 0xC) = 30.0f;
            M2C_FIELD(temp_s0, f32 *, 8) = 1.0f;
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
        }
        break;
    case 1:
        M2C_FIELD(temp_s0, f32 *, 0xC) = (f32) (M2C_FIELD(temp_s0, f32 *, 0xC) + M2C_FIELD(temp_s0, f32 *, 8));
        M2C_FIELD(temp_s0, f32 *, 8) = (f32) (M2C_FIELD(temp_s0, f32 *, 8) - 0.1f);
        if (M2C_FIELD(temp_s0, f32 *, 0xC) < 30.0f) {
            M2C_FIELD(temp_s0, f32 *, 0xC) = 30.0f;
            M2C_FIELD(temp_s0, f32 *, 8) = 1.0f;
        }
        temp_ft0_2 = (M2C_FIELD(temp_s0, f32 *, 0xC) - 20.0f) * 0.04f;
        *(&D_8011F324 + (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 2) * 0x64)) = (temp_ft0_2 + 0.4f) * M2C_FIELD(temp_s0, f32 *, 0x10);
        temp_v0 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 2) * 0x64;
        temp_fv0_2 = (1.6f - temp_ft0_2) * M2C_FIELD(temp_s0, f32 *, 0x10);
        *(&D_8011F328 + temp_v0) = temp_fv0_2;
        *(&D_8011F320 + temp_v0) = temp_fv0_2;
        break;
    }
    temp_v0_2 = M2C_FIELD(temp_s0, u16 *, 0x14) - 1;
    M2C_FIELD(temp_s0, u16 *, 0x14) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        temp_v0_3 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 2) * 0x64;
        temp_v1_2 = temp_v0_3 + &D_8011F2F0;
        temp_fv0_3 = M2C_FIELD(temp_s0, f32 *, 0x10);
        M2C_FIELD(temp_v1_2, f32 *, 0x38) = temp_fv0_3;
        M2C_FIELD(temp_v1_2, f32 *, 0x34) = temp_fv0_3;
        *(&D_8011F320 + temp_v0_3) = temp_fv0_3;
        temp_v0_4 = M2C_FIELD(temp_s0, void **, 4);
        M2C_FIELD(temp_v0_4, f32 *, 0x760) = (f32) (M2C_FIELD(temp_v0_4, f32 *, 0x760) - 30000.0f);
        func_8013E49C(M2C_FIELD(temp_s0, u16 *, 0x76));
        temp_v1_3 = M2C_FIELD(temp_s0, void **, 4);
        M2C_FIELD(temp_v1_3, u16 *, 0x560) = (u16) (M2C_FIELD(temp_v1_3, u16 *, 0x560) & 0xF7);
        *(&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
    }
    M2C_FIELD(temp_s1, s8 *, 0) = (s8) (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u8 *, 0x7D1) - D_80233EC1);
    func_8013AE60(arg0 & 0xFFFF);
}
