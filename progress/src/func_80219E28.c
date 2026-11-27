extern u8 D_8011F2F0[];
extern u8 D_80190CB0;
extern f32 D_8021CA4C[];
extern u8 D_8021CA44[];
f32 __sinf(f32);
s32 nextRandom();

void func_80219E28(s32 arg0) {
    s32 temp_a0 = arg0 & 0xFFFF;
    u8 *s0 = D_8011F2F0 + temp_a0 * 100;
    f32 fv;
    f32 fa0;
    f32 fv0;

    s0[0] += 1;
    switch (*(u16 *)(s0 + 0x3E)) {
    case 0:
        *(f32 *)(s0 + 0x18) = D_8021CA4C[nextRandom(temp_a0) & 7];
        *(f32 *)(s0 + 0x4C) = (f32)D_8021CA44[nextRandom() & 7];
        *(u16 *)(s0 + 0x3E) = 1;
        return;
    case 1:
        fv = *(f32 *)(s0 + 0x1C);
        if (fv > -7.0f && D_80190CB0 == 0) {
            *(f32 *)(s0 + 0x1C) = fv - 0.04f;
            if (!(s0[0] & 7)) {
                if (!(nextRandom() & 1)) {
                    *(f32 *)(s0 + 0x48) = -0.01f;
                } else {
                    *(f32 *)(s0 + 0x48) = 0.01f;
                }
            }
            if (*(f32 *)(s0 + 0x44) > 0.1f) {
                *(f32 *)(s0 + 0x48) = -0.01f;
            }
            if (*(f32 *)(s0 + 0x44) < -0.1f) {
                *(f32 *)(s0 + 0x48) = 0.01f;
            }
            fa0 = *(f32 *)(s0 + 0x44) + *(f32 *)(s0 + 0x48);
            *(f32 *)(s0 + 0x44) = fa0;
            *(f32 *)(s0 + 0x18) = __sinf(fa0) + *(f32 *)(s0 + 0x18);
            fv0 = *(f32 *)(s0 + 0x28) + 4.0f;
            *(f32 *)(s0 + 0x28) = fv0;
            if (fv0 > 360.0f) {
                *(f32 *)(s0 + 0x28) = fv0 - 360.0f;
            }
            return;
        } else {
            s0[0xD] = 2;
            return;
        }
    }
}
