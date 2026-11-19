typedef s32 M2C_UNK;
M2C_UNK func_8013E49C(u16);
M2C_UNK func_801D7028(u16, M2C_UNK);
extern s8 D_8011F2FD[];
extern s16 D_8011F32E[];
extern s8 D_8011F350[];
extern s8 D_8011F4E4[];
extern f32 D_802378FC;
extern f32 D_80237914;

void func_80166DC0(s32 arg0) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v0_2;
    void *temp_s0;
    void *temp_s1;
    void *temp_s3;
    void *temp_v1;
    void *temp_v1_3;
    u16 temp_a0;
    u16 temp_v0;
    u16 temp_v1_2;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;

    temp_s1 = *(void **)(D_8011F350 + ((arg0 & 0xFFFF) * 0x64));
    temp_s0 = (*(u16 *)((s8 *)*(void **)((s8 *)temp_s1 + 4) + 2) * 0x64) + D_8011F4E4;
    temp_s3 = *(void **)((s8 *)temp_s0 + 0x50);
    temp_a0 = *(u16 *)((s8 *)temp_s1 + 0x14);
    var_v1 = 0;
    if (((u32) (temp_a0 & 3) >> 1) != 0) {
        var_v1 = (temp_a0 << 0x10) > 0;
    }
    switch (var_v1) {
    case 0:
        *(void **)((s8 *)temp_s3 + 4) = &D_802378FC;
        break;
    case 1:
        *(void **)((s8 *)temp_s3 + 4) = &D_80237914;
        break;
    }
    temp_v0 = *(u16 *)((s8 *)temp_s1 + 0x14) - 1;
    *(u16 *)((s8 *)temp_s1 + 0x14) = temp_v0;
    var_v0 = arg0 & 0xFFFF;
    if ((temp_v0 << 0x10) == 0) {
        temp_v1 = *(void **)((s8 *)temp_s1 + 4);
        if (*(s16 *)((s8 *)temp_v1 + 0x55E) != 0) {
            var_v1_2 = (arg0 & 0xFFFF) * 0x64;
            var_v0_2 = 3;
        } else {
            func_801D7028(*(u16 *)((s8 *)temp_v1 + 2), 0x2A);
            var_v1_2 = (arg0 & 0xFFFF) * 0x64;
            var_v0_2 = 1;
        }
        *(s16 *)((s8 *)D_8011F32E + var_v1_2) = var_v0_2;
        var_v0 = arg0 & 0xFFFF;
    }
    temp_v1_2 = *(u16 *)((s8 *)D_8011F32E + (var_v0 * 0x64));
    switch (temp_v1_2) {
    case 1:
        *(void **)((s8 *)temp_s3 + 4) = &D_802378FC;
        temp_fv1 = *(f32 *)((s8 *)temp_s0 + 0x34);
        *(f32 *)((s8 *)temp_s0 + 0x34) = ((3.0f - temp_fv1) * 0.4f) + temp_fv1;
        temp_fv1_2 = *(f32 *)((s8 *)temp_s0 + 0x30);
        *(f32 *)((s8 *)temp_s0 + 0x30) = ((0.3f - temp_fv1_2) * 0.4f) + temp_fv1_2;
        if (*(f32 *)((s8 *)temp_s0 + 0x34) > 2.8f) {
            *(s16 *)((s8 *)D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 2;
            return;
        }
        return;
    case 2:
        *(void **)((s8 *)temp_s3 + 4) = &D_802378FC;
        temp_fv1_3 = *(f32 *)((s8 *)temp_s0 + 0x34);
        *(f32 *)((s8 *)temp_s0 + 0x34) = ((0.3f - temp_fv1_3) * 0.4f) + temp_fv1_3;
        temp_fv1_4 = *(f32 *)((s8 *)temp_s0 + 0x30);
        temp_fv0 = ((3.0f - temp_fv1_4) * 0.4f) + temp_fv1_4;
        *(f32 *)((s8 *)temp_s0 + 0x30) = temp_fv0;
        if (temp_fv0 > 2.8f) {
            *(s16 *)((s8 *)D_8011F32E + ((arg0 & 0xFFFF) * 0x64)) = 3;
            return;
        }
        break;
    case 3:
        *(f32 *)((s8 *)temp_s0 + 0x34) = 1.0f;
        *(f32 *)((s8 *)temp_s0 + 0x30) = 1.0f;
        temp_v1_3 = *(void **)((s8 *)temp_s1 + 4);
        *(u16 *)((s8 *)temp_v1_3 + 0x560) = (u16) (*(u16 *)((s8 *)temp_v1_3 + 0x560) & 0xBF);
        func_8013E49C(*(u16 *)((s8 *)temp_s1 + 0x76));
        *(s8 *)(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
        if (*(s16 *)((s8 *)*(void **)((s8 *)temp_s1 + 4) + 0x55E) == 0) {
            *(void **)((s8 *)temp_s3 + 4) = NULL;
        }
        break;
    }
}
