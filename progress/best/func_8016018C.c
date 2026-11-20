/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8013E49C(u16);                         /* extern */
s32 func_801D7028(u16, s32);                /* extern */
extern u8 D_8011F2FD[];
extern s32 D_8011F32E;
extern s32 D_8011F350;
extern s32 D_8011F4E4;
extern s32 D_802378D8;
extern s32 D_80237914;

void func_8016018C(s32 arg0) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    s32 var_v1;
    f32 temp_fv1_4;
    s32 var_v0;
    f32 temp_fv1_3;
    s32 var_v1_2;
    u16 temp_a0_2;
    u16 temp_v0;
    u16 temp_v1_2;
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s3;
    void *temp_v1;
    void *temp_v1_3;

    temp_s1 = *(&D_8011F350 + ((arg0 & 0xFFFF) * 0x64));
    temp_a0 = (*(void **)((char *)(temp_s1) + 4));
    temp_s0 = ((*(u16 *)((char *)(temp_a0) + 2)) * 0x64) + &D_8011F4E4;
    temp_s3 = (*(void **)((char *)(temp_s0) + 0x50));
    (*(s8 *)((char *)(temp_a0) + 0x8D0)) = 0x78;
    temp_a0_2 = (*(u16 *)((char *)(temp_s1) + 0x14));
    var_v1 = 0;
    if (((u32) (temp_a0_2 & 3) >> 1) != 0) {
        var_v1 = (temp_a0_2 << 0x10) > 0;
    }
    switch (var_v1) {                               /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        (*(s32 **)((char *)(temp_s3) + 4)) = &D_802378D8;
        break;
    case 1:                                         /* switch 1 */
        (*(s32 **)((char *)(temp_s3) + 4)) = &D_80237914;
        break;
    }
    temp_v0 = (*(u16 *)((char *)(temp_s1) + 0x14)) - 1;
    (*(u16 *)((char *)(temp_s1) + 0x14)) = temp_v0;
    if ((temp_v0 << 0x10) == 0) {
        temp_v1 = (*(void **)((char *)(temp_s1) + 4));
        if ((*(s16 *)((char *)(temp_v1) + 0x55E)) == 0) {
            func_801D7028((*(u16 *)((char *)(temp_v1) + 2)), 0x2A);
            var_v1_2 = (arg0 & 0xFFFF) * 0x64;
            *(&D_8011F32E + var_v1_2) = 1;
        } else {
            var_v1_2 = (arg0 & 0xFFFF) * 0x64;
            *(&D_8011F32E + var_v1_2) = 3;
        }
    }
    var_v0 = arg0 & 0xFFFF;
    temp_v1_2 = *(&D_8011F32E + (var_v0 * 0x64));
    switch (temp_v1_2) {                            /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        (*(s32 **)((char *)(temp_s3) + 4)) = &D_802378D8;
        temp_fv1 = (*(f32 *)((char *)(temp_s0) + 0x34));
        (*(f32 *)((char *)(temp_s0) + 0x34)) = (f32) (((3.0f - temp_fv1) * 0.4f) + temp_fv1);
        temp_fv1_2 = (*(f32 *)((char *)(temp_s0) + 0x30));
        (*(f32 *)((char *)(temp_s0) + 0x30)) = (f32) (((0.3f - temp_fv1_2) * 0.4f) + temp_fv1_2);
        if ((*(f32 *)((char *)(temp_s0) + 0x34)) > 2.8f) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
            return;
        }
        return;
    case 2:                                         /* switch 2 */
        temp_fv1_3 = (*(f32 *)((char *)(temp_s0) + 0x34));
        (*(s32 **)((char *)(temp_s3) + 4)) = &D_802378D8;
        (*(f32 *)((char *)(temp_s0) + 0x34)) = (f32) (((0.3f - temp_fv1_3) * 0.4f) + temp_fv1_3);
        temp_fv1_4 = (*(f32 *)((char *)(temp_s0) + 0x30));
        temp_fv0 = ((3.0f - temp_fv1_4) * 0.4f) + temp_fv1_4;
        (*(f32 *)((char *)(temp_s0) + 0x30)) = temp_fv0;
        if (temp_fv0 > 2.8f) {
            *(&D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
            return;
        }
        break;
    case 3:                                         /* switch 2 */
        (*(f32 *)((char *)(temp_s0) + 0x34)) = 1.0f;
        (*(f32 *)((char *)(temp_s0) + 0x30)) = 1.0f;
        temp_v1_3 = (*(void **)((char *)(temp_s1) + 4));
        (*(u16 *)((char *)(temp_v1_3) + 0x560)) = (u16) ((*(u16 *)((char *)(temp_v1_3) + 0x560)) & 0xF8);
        func_8013E49C((*(u16 *)((char *)(temp_s1) + 0x76)));
        *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
        if ((*(s16 *)((char *)((*(void **)((char *)(temp_s1) + 4))) + 0x55E)) == 0) {
            (*(s32 **)((char *)(temp_s3) + 4)) = NULL;
        }
        break;
    }
}
