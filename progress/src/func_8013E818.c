s16 func_8012913C(u16, s32, s32, s32);
extern u8 D_8011F2F0[];
extern u8 D_8011F350[];
extern u8 hitSlots[];
extern u8 D_8022A772[];
extern u8 D_8022AD5C[];
extern u16 D_80233EC0;

void func_8013E818(u16 arg0, s32 arg1, s16 arg2, s32 arg3, f32 arg4, f32 arg5, u16 arg6)
{
    u8 *p;
    u8 *s;
    s32 j;
    s32 k;

    p = D_8011F2F0 + (arg1 & 0xFFFF) * 100;
    s = hitSlots + (arg0 & 0xFFFF) * 124;
    *(u8 **)(D_8011F350 + (arg1 & 0xFFFF) * 100) = s;
    *(s16 *)(p + 0x8) = arg2;
    *(s16 *)(p + 0x6) = arg2;
    *(s16 *)(p + 0x4) = arg2;
    *(s16 *)(p + 0x2) = arg2;
    *(s32 *)(s + 0x8) = arg3;
    *(f32 *)(s + 0xC) = arg4;
    *(f32 *)(s + 0x10) = arg5;
    *(u16 *)(s + 0x14) = arg6;
    *(u8 *)(s + 0x16) = 0;
    *(s16 *)(s + 0x20) = func_8012913C(D_80233EC0, *(s32 *)(p + 0x18), *(s32 *)(p + 0x1C), *(s32 *)(p + 0x20));
    *(u16 *)(s + 0x22) = 0;
    *(u8 *)(s + 0x1D) = 0;
    *(u8 *)(s + 0x1E) = 0;
    *(s32 *)(s + 0x70) = 0;
    for (j = 0; j < 7; j++) {
        *(u8 *)(s + j + 0x67) = 0;
        k = ((((j << 3) + j) << 4) - j) << 4;
        if (*(u16 *)(D_8022A772 + k) != 0xFFFF) {
            if (0.0f < *(f32 *)(D_8022AD5C + k)) {
                *(s8 *)(s + j + 0x60) = j;
            } else {
                *(s8 *)(s + j + 0x60) = -1;
            }
        } else {
            *(s8 *)(s + j + 0x60) = -1;
        }
    }
}
