void func_8013EC14(s32, f32, f32, f32);
void func_8013E49C(u16);
void func_8013EA18(void *, s32, s32, s32);
s32 func_801FA30C(void);
extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_8011F32E[];

void func_8015DD80(s32 arg0) {
    u8 *temp_s0;
    void *temp_s2;
    s32 temp_s1;
    s32 temp_v0;
    u16 temp_v1;
    u8 temp_v1_2;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_ft0;

    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    temp_s0 = D_8011F2F0 + temp_v0;
    temp_s2 = *(void **)(temp_s0 + 0x60);
    *(f32 *)(temp_s0 + 0x28) = *(f32 *)(temp_s0 + 0x28) + 10.0f;
    temp_v1 = *(u16 *)(D_8011F32E + temp_v0);
    temp_s1 = arg0 & 0xFFFF;
    if (temp_v1 != 0) {
        if (temp_v1 == 1) {
            temp_ft0 = *(f32 *)((u8 *)temp_s2 + 8);
            temp_fv1 = *(f32 *)(temp_s0 + 0x30);
            temp_fv0 = (((temp_ft0 * 6.0f) - temp_fv1) * 0.3f) + temp_fv1;
            func_8013EC14(temp_s1, temp_fv0, (((temp_ft0 * 12.0f) - *(f32 *)(temp_s0 + 0x34)) * 0.3f) + *(f32 *)(temp_s0 + 0x34), temp_fv0);
            temp_s0[0xC] = temp_s0[0xC] - 4;
            if (temp_s0[0xC] < 5) {
                func_8013E49C(*(u16 *)((u8 *)temp_s2 + 0x76));
                *(u16 *)(D_8011F2FD + (temp_s1 * 0x64)) = 2;
            }
        }
    } else {
        temp_ft0 = *(f32 *)((u8 *)temp_s2 + 8);
        temp_fv1 = *(f32 *)(temp_s0 + 0x30);
        temp_fv0 = (((temp_ft0 * 6.0f) - temp_fv1) * 0.3f) + temp_fv1;
        func_8013EC14(temp_s1, temp_fv0, (((temp_ft0 * 12.0f) - *(f32 *)(temp_s0 + 0x34)) * 0.3f) + *(f32 *)(temp_s0 + 0x34), temp_fv0);
        if ((*(f32 *)((u8 *)temp_s2 + 8) * 4.2f) < *(f32 *)(temp_s0 + 0x30)) {
            *(u16 *)(D_8011F32E + (temp_s1 * 0x64)) = 1;
        }
    }
    temp_v1_2 = *(u8 *)((u8 *)temp_s2 + 0x16);
    switch (temp_v1_2) {
    case 0:
        func_8013EA18(temp_s2, 0xFF, (func_801FA30C() & 0xF) + 0x40, 0);
        return;
    case 1:
        func_8013EA18(temp_s2, 0xFF, 0, (func_801FA30C() & 0xF) + 0x40);
        return;
    case 2:
        func_8013EA18(temp_s2, 0, (func_801FA30C() & 0xF) + 0x40, 0xFF);
        return;
    case 3:
        func_8013EA18(temp_s2, (func_801FA30C() & 0xF) + 0x40, 0, 0xFF);
        return;
    case 4:
        func_8013EA18(temp_s2, (func_801FA30C() & 0xF) + 0x40, 0xFF, 0);
        return;
    case 5:
        func_8013EA18(temp_s2, 0, 0xFF, (func_801FA30C() & 0xF) + 0x40);
        return;
    case 6:
        func_8013EA18(temp_s2, 0xFF, 0xFF, (func_801FA30C() & 0xF) + 0x40);
        return;
    case 7:
        func_8013EA18(temp_s2, 0xFF, (func_801FA30C() & 0xF) + 0x40, 0xFF);
        return;
    case 8:
        func_8013EA18(temp_s2, (func_801FA30C() & 0xF) + 0x40, 0xFF, 0xFF);
        return;
    default:
        func_8013EA18(temp_s2, func_801FA30C() & 0xFF, func_801FA30C() & 0xFF, func_801FA30C() & 0xFF);
        return;
    }
}
