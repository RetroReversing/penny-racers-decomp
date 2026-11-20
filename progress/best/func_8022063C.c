static __inline__ s16 __repair_inline(s16 a) { return a; }
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 guLookAt(s32, s32, s32, s32, f32, f32, f32, f32, f32, f32); /* extern */
s32 guPerspective(s32, u16 *, s32, f32, f32, f32, f32); /* extern */
extern s32 D_800DB1B8;
extern s32 D_8011F060;
extern u8 D_80126FF6;
extern s32 D_80221080;
extern s32 D_80221084;
extern s32 D_80221088;
extern s32 D_8022108C;
extern s32 D_80221090;
extern s32 D_80221094;
extern s32 D_80221098;
extern s32 D_8022109C;
extern s32 D_802210A0;

typedef struct { int value; } __repair_field_0;
void func_8022063C(void **arg0) {
    s32 *__base_D_800DB1B8;
    u16 sp28;
    s16 temp_s2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    u32 temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    __base_D_800DB1B8 = &D_800DB1B8;
    temp_v0 = D_80126FF6 * 0x28;
    do { temp_s2 = __repair_inline(*(__base_D_800DB1B8 + 0x210E + temp_v0)); } while (0);
    temp_s0 = (*(__base_D_800DB1B8 + 0x210E + temp_v0)) << 6;
    guPerspective(temp_s0 + D_8011F060, &sp28, 0x41F00000, (f32) *(__base_D_800DB1B8 + 0x2114 + temp_v0) / (f32) *(__base_D_800DB1B8 + 0x2116 + temp_v0), 10.0f, 5000.0f, 1.0f);
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    ((__repair_field_0 *)temp_v1)->value = 0xBC00000E;
    (*(s32 *)((char *)(temp_v1) + 4)) = (s32) sp28;
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    ((__repair_field_0 *)temp_v1_2)->value = 0x01030040;
    (*(s32 *)((char *)(temp_v1_2) + 4)) = (s32) (temp_s0 + D_8011F060);{ s32 __repair_value; __repair_value = temp_s0 + 0x300; temp_s0_2 = __repair_value; }
    temp_v0_2 = temp_s2 * 0x24;
    guLookAt(temp_s0_2 + D_8011F060, *(&D_80221080 + temp_v0_2), *(&D_80221084 + temp_v0_2), *(&D_80221088 + temp_v0_2), *(&D_8022108C + temp_v0_2), *(&D_80221090 + temp_v0_2), *(&D_80221094 + temp_v0_2), *(&D_80221098 + temp_v0_2), *(&D_8022109C + temp_v0_2), *(&D_802210A0 + temp_v0_2));
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    ((__repair_field_0 *)temp_v1_3)->value = 0x01010040;
    (*(s32 *)((char *)(temp_v1_3) + 4)) = (s32) (temp_s0_2 + (s32)D_8011F060);
}
