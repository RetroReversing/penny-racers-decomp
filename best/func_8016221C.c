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

extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F4E4;
extern M2C_UNK D_8022A770;

void func_8016221C(s32 arg0) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    s32 temp_a0;
    u16 temp_v0;
    u16 temp_v1;
    void *temp_a1;
    void *temp_a2;

    temp_a0 = (arg0 & 0xFFFF) * 0x64;
    temp_a2 = (*(&D_8011F2F0 + temp_a0) * 0x8F0) + &D_8022A770;
    temp_a1 = (M2C_FIELD(temp_a2, u16 *, 2) * 0x64) + &D_8011F4E4;
    temp_v1 = *(&D_8011F32E + temp_a0);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_fv1 = M2C_FIELD(temp_a1, f32 *, 0x34);
        M2C_FIELD(temp_a1, f32 *, 0x34) = (f32) (((3.0f - temp_fv1) * 0.4f) + temp_fv1);
        temp_fv1_2 = M2C_FIELD(temp_a1, f32 *, 0x30);
        M2C_FIELD(temp_a1, f32 *, 0x30) = (f32) (((0.3f - temp_fv1_2) * 0.4f) + temp_fv1_2);
        if (M2C_FIELD(temp_a1, f32 *, 0x34) > 2.8f) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 1;
            return;
        }
        return;
    case 1:
        temp_fv1_3 = M2C_FIELD(temp_a1, f32 *, 0x34);
        M2C_FIELD(temp_a1, f32 *, 0x34) = (f32) (((0.3f - temp_fv1_3) * 0.4f) + temp_fv1_3);
        temp_fv1_4 = M2C_FIELD(temp_a1, f32 *, 0x30);
        temp_fv0 = ((3.0f - temp_fv1_4) * 0.4f) + temp_fv1_4;
        M2C_FIELD(temp_a1, f32 *, 0x30) = temp_fv0;
        if (temp_fv0 > 2.8f) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
            return;
        }
        break;
    case 2:
        M2C_FIELD(temp_a1, f32 *, 0x34) = 1.0f;
        M2C_FIELD(temp_a1, f32 *, 0x30) = 1.0f;
        *(&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
        M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x50), s32 *, 4) = 0;
        temp_v0 = M2C_FIELD(temp_a2, u16 *, 0x560);
        M2C_FIELD(temp_a2, u16 *, 0x560) = (u16) ((temp_v0 & 0xF8) | ((temp_v0 & 7) - 1));
        break;
    }
}
