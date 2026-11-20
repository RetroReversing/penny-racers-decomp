extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];

void func_80141AD8(s32 arg0) {
    f32 temp_ft0;
    f32 temp_fv0;
    s32 temp_a0;
    u8 *temp_v1;

    temp_a0 = (arg0 & 0xFFFF) * 0x64;
    temp_v1 = D_8011F2F0 + temp_a0;
    temp_ft0 = *(f32 *)(temp_v1 + 0x30);
    temp_fv0 = ((8.0f - (*(f32 *)(temp_v1 + 0x30))) * 0.2f) + (*(f32 *)(temp_v1 + 0x30));
    *(f32 *)(temp_v1 + 0x30) = temp_fv0;
    *(f32 *)(temp_v1 + 0x38) = temp_fv0;
    *(f32 *)(temp_v1 + 0x34) = temp_fv0;
    *(f32 *)(temp_v1 + 0x44) = *(f32 *)(temp_v1 + 0x44) * 0.9f;
    *(f32 *)(temp_v1 + 0x48) = *(f32 *)(temp_v1 + 0x48) * 0.9f;
    *(f32 *)(temp_v1 + 0x4C) = *(f32 *)(temp_v1 + 0x4C) * 0.9f;
    *(f32 *)(temp_v1 + 0x18) = *(f32 *)(temp_v1 + 0x18) + *(f32 *)(temp_v1 + 0x44);
    *(f32 *)(temp_v1 + 0x1C) = *(f32 *)(temp_v1 + 0x1C) + *(f32 *)(temp_v1 + 0x48);
    *(f32 *)(temp_v1 + 0x20) = *(f32 *)(temp_v1 + 0x20) + *(f32 *)(temp_v1 + 0x4C);
    temp_v1[0xC] = temp_v1[0xC] - 0xA;
    if (temp_v1[0xC] < 0xF) {
        D_8011F2FD[temp_a0] = 2;
    }
}
