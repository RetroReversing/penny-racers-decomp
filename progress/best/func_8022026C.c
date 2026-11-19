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

M2C_UNK guLookAt(s32, s32, s32, s32, f32, f32, f32, f32, f32, f32); /* extern */
M2C_UNK guPerspective(s32, u16 *, s32, f32, f32, f32, f32); /* extern */
extern M2C_UNK D_800DB1B8;
extern s32 D_8011F060;
extern u8 D_80126FF6;
extern s32 D_80220E40;
extern M2C_UNK D_80221080;
extern M2C_UNK D_80221084;
extern M2C_UNK D_80221088;
extern M2C_UNK D_8022108C;
extern M2C_UNK D_80221090;
extern M2C_UNK D_80221094;
extern M2C_UNK D_80221098;
extern M2C_UNK D_8022109C;
extern M2C_UNK D_802210A0;

void func_8022026C(void **arg0) {
    u16 sp28;
    s16 temp_s2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = D_80126FF6 * 0x28;
    temp_s2 = *(&D_800DB1B8 + 0x210C + temp_v0);
    temp_s0 = temp_s2 << 6;
    guPerspective(temp_s0 + D_8011F060, &sp28, D_80220E40, (f32) *(&D_800DB1B8 + 0x2114 + temp_v0) / (f32) *(&D_800DB1B8 + 0x2116 + temp_v0), 10.0f, 4000.0f, 1.0f);
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xBC00000E;
    M2C_FIELD(temp_v1, s32 *, 4) = (s32) sp28;
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0x01030040;
    M2C_FIELD(temp_v1_2, s32 *, 4) = (s32) (temp_s0 + D_8011F060);
    temp_s0_2 = temp_s0 + 0x300;
    temp_v0_2 = temp_s2 * 0x24;
    guLookAt(temp_s0_2 + D_8011F060, *(&D_80221080 + temp_v0_2), *(&D_80221084 + temp_v0_2), *(&D_80221088 + temp_v0_2), *(&D_8022108C + temp_v0_2), *(&D_80221090 + temp_v0_2), *(&D_80221094 + temp_v0_2), *(&D_80221098 + temp_v0_2), *(&D_8022109C + temp_v0_2), *(&D_802210A0 + temp_v0_2));
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0x01010040;
    M2C_FIELD(temp_v1_3, s32 *, 4) = (s32) (temp_s0_2 + D_8011F060);
}
