s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364(void);
void func_8013E818(s32, s32, s32, s32, s32, s32, s32);
void func_801D7028(u16, s32);
extern f32 D_8011F308;
extern f32 D_8011F30C;
extern f32 D_8011F310;
extern f32 D_8011F320;
extern f32 D_8011F324;
extern f32 D_8011F328;
extern f32 D_8011F334;
extern f32 D_8011F338;
extern s32 D_8011F350;
extern s32 D_8018D6C0;
extern s32 D_8018D6C4;
extern s32 D_8018D6D4;
extern s32 D_80239610;
extern s32 func_8015EC58;
extern s32 func_8015F7F8;
extern s32 func_8015FD64;

void func_8015E530(u8 *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_a0;
    s16 temp_v0_3;
    s32 temp_s0_3;

    temp_s0 = *(s32 *)(arg0 + 0x898);
    if (temp_s0 == 1 && !(*(u16 *)(arg0 + 0x560) & 0x18)) {
        temp_v0 = func_8013E364();
        if ((temp_v0 & 0xFFFF) != 0xFFFF) {
            temp_v0_2 = func_800DE41C(0, 0, 3, 0, 0x20, temp_s0, NULL, &func_8015EC58, NULL, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0.0f, 0.0f, 0.0f);
            if ((u32)((temp_v0_2 + 2) & 0xFFFF) < 2U) {
                func_8013E49C(temp_v0 & 0xFFFF);
                return;
            }
            temp_a0 = (temp_v0 & 0xFFFF) * 0x7C;
            *(f32 *)((char *)&D_8018D6D4 + temp_a0) = 45.0f;
            *(f32 *)((char *)&D_8018D6C0 + temp_a0) = 1.0f;
            *(void **)((char *)&D_8018D6C0 + temp_a0) = arg0;
            *(u8 *)(arg0 + 0x8D0) = 0xF0;
            *(u16 *)(arg0 + 0x560) = *(u16 *)(arg0 + 0x560) | 0x10;
            *(s32 *)((char *)&D_8011F350 + (temp_v0_2 & 0xFFFF) * 0x64) = (s32)((char *)&D_8018D6C0 + temp_a0);
            func_801D7028(*(u16 *)(arg0 + 2), 0x2C);
            temp_v0_3 = *(s16 *)(arg0 + 0x55E);
            if (temp_v0_3 > 0) {
                *(s16 *)(arg0 + 0x55E) = temp_v0_3 - 1;
            }
            if (*(u8 *)(arg0 + 0x74C) < 5 && (temp_s0 = func_8013E364() & 0xFFFF, temp_s0 != 0xFFFF)) {
                temp_v0_2 = func_800DE41C(0, arg0[5], 1, 0, 0x5B, 0, &D_80239610, &func_8015F7F8, &func_8015FD64,
                    *(f32 *)((char *)&D_8011F308 + *(u16 *)(arg0 + 2) * 0x64),
                    *(f32 *)((char *)&D_8011F30C + *(u16 *)(arg0 + 2) * 0x64) + 15.0f,
                    *(f32 *)((char *)&D_8011F310 + *(u16 *)(arg0 + 2) * 0x64),
                    0, 0, 0,
                    *(f32 *)((char *)&D_8011F320 + *(u16 *)(arg0 + 2) * 0x64) * 2.0f,
                    *(f32 *)((char *)&D_8011F324 + *(u16 *)(arg0 + 2) * 0x64) * 2.0f,
                    *(f32 *)((char *)&D_8011F328 + *(u16 *)(arg0 + 2) * 0x64) * 2.0f);
                temp_v0 = temp_v0_2 & 0xFFFF;
                if ((u32)((temp_v0_2 + 2) & 0xFFFF) < 2U) {
                    func_8013E49C(temp_s0);
                    return;
                }
                *(f32 *)((char *)&D_8011F334 + temp_v0 * 0x64) = 16.0f;
                *(f32 *)((char *)&D_8011F338 + temp_v0 * 0x64) = 1.0f;
                temp_s0_3 = temp_s0;
                func_8013E818(temp_s0_3, temp_v0, 0x40, 0, 0, 0, 0x3C);
                *(void **)((char *)&D_8018D6C4 + temp_s0_3 * 0x7C) = arg0;
            }
        }
    }
}
