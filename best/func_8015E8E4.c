extern f32 D_8011F308, D_8011F30C, D_8011F310, D_8011F320, D_8011F324, D_8011F328, D_8011F334, D_8011F338;
extern u8 D_8011F350, D_8018D6C0, D_8018D6C4, D_8018D6C8, D_8018D6D4, D_80239610;
extern u8 func_8015F33C, func_8015F7F8, func_8015FD64;
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, s32, f32, s32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364(void);
void func_8013E49C(s32);
void func_8013E818(s32, s32, s32, s32, s32, s32, s32);
void func_801D7028(s32, s32);

void func_8015E8E4(u8 *arg0) {
    s32 v0, v0_2, v0_3, v0_4, idx, s0, a1, off;

    if (!(*(u16 *)(arg0 + 0x560) & 0x18)) {
        v0 = func_8013E364();
        idx = v0 & 0xFFFF;
        if (idx != 0xFFFF) {
            v0_2 = func_800DE41C(0, 0, 3, 0, 0x20, 1, 0, &func_8015F33C, 0, 0, 0.0f, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f);
            if ((u32)((v0_2 + 2) & 0xFFFF) < 2U) {
                func_8013E49C(idx);
            } else {
                off = (v0 & 0xFFFF) * 0x7C;
                *(u16 *)((u8 *)&D_8018D6D4 + off) = 0x23;
                *(f32 *)((u8 *)&D_8018D6C8 + off) = 1.0f;
                *(u8 **)((u8 *)&D_8018D6C4 + off) = arg0;
                *(u8 *)(arg0 + 0x8D0) = 0xF0;
                *(u16 *)(arg0 + 0x560) = *(u16 *)(arg0 + 0x560) | 0x10;
                *(u8 **)((u8 *)&D_8011F350 + (v0_2 & 0xFFFF) * 0x64) = (u8 *)&D_8018D6C0 + off;
                func_801D7028(*(u16 *)(arg0 + 2), 0x2C);
                if (*(u8 *)(arg0 + 0x74C) < 5U) {
                    v0_3 = func_8013E364();
                    idx = v0_3 & 0xFFFF;
                    if (idx != 0xFFFF) {
                        v0_4 = func_800DE41C(0, *(u8 *)(arg0 + 5), 1, 0, 0x5B, 0, &D_80239610, &func_8015F7F8, &func_8015FD64,
                            *(f32 *)((u8 *)&D_8011F308 + *(u16 *)(arg0 + 2) * 0x64),
                            *(f32 *)((u8 *)&D_8011F30C + *(u16 *)(arg0 + 2) * 0x64) + 15.0f,
                            *(f32 *)((u8 *)&D_8011F310 + *(u16 *)(arg0 + 2) * 0x64),
                            0, 0, 0,
                            2.0f * *(f32 *)((u8 *)&D_8011F320 + *(u16 *)(arg0 + 2) * 0x64),
                            2.0f * *(f32 *)((u8 *)&D_8011F324 + *(u16 *)(arg0 + 2) * 0x64),
                            2.0f * *(f32 *)((u8 *)&D_8011F328 + *(u16 *)(arg0 + 2) * 0x64));
                        a1 = v0_4 & 0xFFFF;
                        if ((u32)((v0_4 + 2) & 0xFFFF) < 2U) {
                            func_8013E49C(idx);
                            return;
                        }
                        *(f32 *)((u8 *)&D_8011F334 + a1 * 0x64) = 16.0f;
                        *(f32 *)((u8 *)&D_8011F338 + a1 * 0x64) = 0;
                        s0 = v0_3 & 0xFFFF;
                        func_8013E818(s0, a1, 0x40, 0, 0, 0, 0x3C);
                        *(u8 **)((u8 *)&D_8018D6C4 + s0 * 0x7C) = arg0;
                    }
                }
            }
        }
    }
}
