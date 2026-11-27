extern u8 D_8011F2F0[];
extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern u8 hitSlots[];
extern u8 D_8022A772[];
extern u8 D_8022AD5C[];
extern u16 D_80233EC0;
s32 func_8012913C();

void func_8013E640(u16 arg0, u16 arg1, u8 *arg2, s16 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, s16 arg10)
{
    u8 *p;
    u8 *s;
    u16 idx;
    s32 i;
    s32 v;
    s32 k;

    p = D_8011F2F0 + arg1 * 100;
    s = hitSlots + arg0 * 124;
    *(u8 **)(p + 0x60) = s;
    *(s16 *)(p + 0x8) = arg3;
    *(s16 *)(p + 0x6) = arg3;
    *(s16 *)(p + 0x4) = arg3;
    *(s16 *)(p + 0x2) = arg3;
    idx = *(u16 *)(arg2 + 2);
    *(f32 *)(p + 0x18) = arg4 + *(f32 *)(D_8011F308 + idx * 100);
    idx = *(u16 *)(arg2 + 2);
    *(f32 *)(p + 0x1C) = arg5 + *(f32 *)(D_8011F30C + idx * 100);
    idx = *(u16 *)(arg2 + 2);
    *(f32 *)(p + 0x20) = arg6 + *(f32 *)(D_8011F310 + idx * 100);
    *(f32 *)(s + 0x8) = arg7;
    *(f32 *)(s + 0xC) = arg8;
    *(f32 *)(s + 0x10) = arg9;
    *(u16 *)(s + 0x14) = (u16)arg10;
    *(u8 *)(s + 0x16) = 0;
    *(u16 *)(s + 0x74) = *(u16 *)(arg2 + 0x8E4);
    *(u8 **)(s + 0x4) = arg2;
    *(s16 *)(s + 0x20) = func_8012913C(D_80233EC0, *(s32 *)(p + 0x18), *(s32 *)(p + 0x1C), *(s32 *)(p + 0x20));
    *(u16 *)(s + 0x22) = 0;
    *(u8 *)(s + 0x1D) = 0;
    *(u8 *)(s + 0x1E) = 0;
    *(s32 *)(s + 0x70) = 0;
    for (i = 0; i < 7; i++) {
        *(u8 *)(s + i + 0x67) = 0;
        k = ((((i << 3) + i) << 4) - i) << 4;
        v = *(u16 *)(D_8022A772 + k);
        if (v != 0xFFFF) {
            if (0.0f < *(f32 *)(D_8022AD5C + k)) {
                *(s8 *)(s + i + 0x60) = i;
            } else {
                *(s8 *)(s + i + 0x60) = -1;
            }
        } else {
            *(s8 *)(s + i + 0x60) = -1;
        }
    }
}
