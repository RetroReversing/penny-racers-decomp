/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 guLookAt(s32, s32, s32, s32, f32, f32, f32, f32, f32, f32); /* extern */
s32 guPerspective(s32, u16 *, s32, f32);    /* extern */
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

void func_8019E4B8(void **arg0) {
    u16 sp28;
    s32 var_a2;
    f32 var_ft0;
    f32 var_fv1;
    s16 temp_s1;
    register void *temp_v1_2;
    void *temp_v1_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    void *temp_v1;
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s1 = *(&D_800DB1B8 + 0x210C + (D_80126FF6 * 0x28));
    if (D_80126FF6 == 0) {
        var_ft0 = (f32) (*(s16 *)((char *)(&D_800DB1B8) + 0x2114));
        var_fv1 = (f32) (*(s16 *)((char *)(&D_800DB1B8) + 0x2116));
        var_a0 = (temp_s1 << 6) + D_8011F060;
        var_a2 = 0x42C80000;
    } else {
        temp_v0 = D_80126FF6 * 0x28;
        var_ft0 = (f32) *(&D_800DB1B8 + 0x2114 + temp_v0);
        var_fv1 = (f32) *(&D_800DB1B8 + 0x2116 + temp_v0);
        var_a0 = (temp_s1 << 6) + D_8011F060;
        var_a2 = 0x42A00000;
    }
    temp_s0 = temp_s1 << 6;
    guPerspective(var_a0, &sp28, var_a2, var_ft0 / var_fv1);
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    (*(s32 *)((char *)(temp_v1) + 0)) = 0xBC00000E;
    (*(s32 *)((char *)(temp_v1) + 4)) = sp28;
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    (*(s32 *)((char *)(temp_v1_2) + 0)) = 0x01030040;
    (*(s32 *)((char *)(temp_v1_2) + 4)) = (s32) (temp_s0 + D_8011F060);
    temp_s0_2 = temp_s0 + 0x300;
    temp_v0_2 = temp_s1 * 0x24;
    guLookAt(temp_s0_2 + D_8011F060, *(&D_80221080 + temp_v0_2), *(&D_80221084 + temp_v0_2), *(&D_80221088 + temp_v0_2), *(&D_8022108C + temp_v0_2), *(&D_80221090 + temp_v0_2), *(&D_80221094 + temp_v0_2), *(&D_80221098 + temp_v0_2), *(&D_8022109C + temp_v0_2), *(&D_802210A0 + temp_v0_2));
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    (*(s32 *)((char *)(temp_v1_3) + 4)) = (s32) (temp_s0_2 + D_8011F060);
    (*(s32 *)((char *)(temp_v1_3) + 0)) = 0x01010040;
}
