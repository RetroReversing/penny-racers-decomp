extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];

void func_8016410C(s32 arg0) {
    u8 *obj;
    s32 idx;

    idx = (arg0 & 0xFFFF) * 100;
    obj = D_8011F2F0 + idx;
    *(f32 *)(obj + 0x44) = *(f32 *)(obj + 0x44) * 0.9f;
    *(f32 *)(obj + 0x48) = *(f32 *)(obj + 0x48) * 0.9f;
    *(f32 *)(obj + 0x4C) = *(f32 *)(obj + 0x4C) * 0.9f;
    *(f32 *)(obj + 0x18) = *(f32 *)(obj + 0x18) + *(f32 *)(obj + 0x44);
    *(f32 *)(obj + 0x1C) = *(f32 *)(obj + 0x1C) + *(f32 *)(obj + 0x48);
    *(f32 *)(obj + 0x20) = *(f32 *)(obj + 0x20) + *(f32 *)(obj + 0x4C);
    *(f32 *)(obj + 0x30) = (1.0f - *(f32 *)(obj + 0x30)) * 0.2f + *(f32 *)(obj + 0x30);
    *(f32 *)(obj + 0x34) = (1.0f - *(f32 *)(obj + 0x34)) * 0.2f + *(f32 *)(obj + 0x34);
    *(f32 *)(obj + 0x38) = (1.0f - *(f32 *)(obj + 0x38)) * 0.2f + *(f32 *)(obj + 0x38);
    obj[0xC] = obj[0xC] - 8;
    if (obj[0xC] < 9) {
        D_8011F2FD[idx] = 2;
    }
}
