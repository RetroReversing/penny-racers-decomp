f32 __sinf(f32);
u32 func_801FA30C(void);
extern u8 D_8011F2F0[];
extern u8 D_80190CB0;
extern u8 D_8021CA44[];
extern f32 D_8021CA4C[];

void func_80219E28(s32 arg0) {
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv1;
    u16 temp_v1;
    u8 *temp_s0;

    arg0 = arg0 & 0xFFFF;
    temp_s0 = D_8011F2F0 + arg0 * 0x64;
    temp_s0[0]++;
    temp_v1 = *(u16 *)(temp_s0 + 0x3E);
    switch (temp_v1) {
    case 0:
        *(f32 *)(temp_s0 + 0x18) = (f32) D_8021CA4C[func_801FA30C() & 7];
        *(f32 *)(temp_s0 + 0x4C) = (f32) D_8021CA44[func_801FA30C() & 7];
        *(u16 *)(temp_s0 + 0x3E) = 1;
        return;
    case 1:
        temp_fv1 = *(f32 *)((D_8011F2F0 + arg0 * 0x64) + 0x1C);
        if ((temp_fv1 > -7.0f) && (D_80190CB0 == 0)) {
            *(f32 *)((D_8011F2F0 + arg0 * 0x64) + 0x1C) = temp_fv1 - 0.04f;
            if (!(temp_s0[0] & 7)) {
                if (!(func_801FA30C() & 1)) {
                    *(f32 *)(temp_s0 + 0x48) = -0.01f;
                } else {
                    *(f32 *)(temp_s0 + 0x48) = 0.01f;
                }
            }
            if (*(f32 *)(temp_s0 + 0x44) > 0.1f) {
                *(f32 *)(temp_s0 + 0x48) = -0.01f;
            }
            if (*(f32 *)(temp_s0 + 0x44) < -0.1f) {
                *(f32 *)(temp_s0 + 0x48) = 0.01f;
            }
            temp_fa0 = *(f32 *)(temp_s0 + 0x44) + *(f32 *)(temp_s0 + 0x48);
            *(f32 *)(temp_s0 + 0x44) = temp_fa0;
            *(f32 *)(temp_s0 + 0x18) = __sinf(temp_fa0) + *(f32 *)(temp_s0 + 0x18);
            temp_fv0 = *(f32 *)(temp_s0 + 0x28) + 4.0f;
            *(f32 *)(temp_s0 + 0x28) = temp_fv0;
            if (temp_fv0 > 360.0f) {
                *(f32 *)(temp_s0 + 0x28) = temp_fv0 - 360.0f;
                return;
            }
        } else {
            temp_s0[0xD] = 2;
            return;
        }
        break;
    }
}
