s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
s32 func_8013E364(void);
s32 func_8013E49C(s32, s32);
s32 func_8013E640(s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_8013E818(s32, s32, s32, s32, s32, s32, s32);
s32 func_801D7028(s32, s32);
extern u8 D_8011F2F0[];
extern u8 D_8018D6C4[];
extern u8 D_8018D6D6[];
extern u8 D_80239678[];
extern u8 func_8016018C[];
extern u8 func_801604F0[];

void func_8015FEC0(u8 *arg0) {
    u16 temp_v0_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_s2;
    u8 *temp_s4;

    temp_s1 = *(s32 *)(arg0 + 0x898);
    if (temp_s1 == 1 && !(*(u16 *)(arg0 + 0x560) & 0xF) && (temp_v0 = func_8013E364(), temp_s2 = temp_v0 & 0xFFFF, temp_s2 != 0xFFFF)) {
        temp_s4 = D_8011F2F0 + *(u16 *)(arg0 + 2) * 0x64;
        temp_v0_2 = func_800DE41C(0, 0, 3, 0, 0x20, temp_s1, NULL, func_8016018C, 0, *(f32 *)(temp_s4 + 0x18), *(f32 *)(temp_s4 + 0x1C), *(f32 *)(temp_s4 + 0x20), 0, 0, 0, 0, 0, 0);
        temp_s0 = temp_v0 & 0xFFFF;
        if ((u32)((temp_v0_2 + 2) & 0xFFFF) < 2U) {
            func_8013E49C(temp_s2, temp_v0_2);
            return;
        }
        func_8013E818(temp_s0, temp_v0_2 & 0xFFFF, 0, 0, 0, 0, 0x258);
        *(void **)(D_8018D6C4 + temp_s0 * 0x7C) = arg0;
        *(s8 *)(arg0 + 0x8D0) = 0x78;
        *(u16 *)(arg0 + 0x560) = *(u16 *)(arg0 + 0x560) | 7;
        temp_v0_3 = *(s16 *)(arg0 + 0x55E);
        if (temp_v0_3 > 0) {
            *(s16 *)(arg0 + 0x55E) = temp_v0_3 - 1;
        }
        var_s2 = 0;
        do {
            temp_v0_4 = func_8013E364();
            temp_s1_2 = temp_v0_4 & 0xFFFF;
            if (temp_s1_2 == 0xFFFF) {
                break;
            }
            temp_v0_5 = func_800DE41C(0, 0, 1, 0, 0x51, 0x64, D_80239678, func_801604F0, 0, *(f32 *)(temp_s4 + 0x18), *(f32 *)(temp_s4 + 0x1C), *(f32 *)(temp_s4 + 0x20), 0, 0, 0, 0x3D4CCCCD, 0x3D4CCCCD, 0x3D4CCCCD);
            temp_s0_2 = temp_v0_4 & 0xFFFF;
            if ((u32)((temp_v0_5 + 2) & 0xFFFF) < 2U) {
                func_8013E49C(temp_s1_2, temp_v0_5);
                break;
            }
            temp_s1_3 = temp_v0_5 & 0xFFFF;
            func_8013E640(temp_s0_2, temp_s1_3, arg0, 0x40, 0, 0, 0, 0, 0, 0, 0x258);
            temp_v0_6 = temp_s0_2 * 0x7C;
            *(void **)(D_8018D6C4 + temp_v0_6) = arg0;
            *(s32 *)(D_8018D6D6 + temp_v0_6) = var_s2;
            func_801D7028(temp_s1_3, 0x32);
            var_s2 += 1;
        } while (var_s2 < 3);
    }
}
