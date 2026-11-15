extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];
extern u8 D_8011F340[];
extern u8 D_8011F350[];

void func_80129918(void *, s32, s32, s32, s32, f32, s32);
void func_8013E49C(u16);
void func_8013F44C(s32, void *);
void func_801D7028(s32, s32);

void func_8014081C(s32 arg0)
{
    u16 idx = arg0;
    u8 *s1;
    u8 *s0;
    f32 f;
    s32 t;

    if (**(u8 **)(D_8011F340 + idx * 100) == 0) {
        s1 = *(u8 **)(D_8011F350 + idx * 100);
        s0 = D_8011F2F0 + idx * 100;
        *(f32 *)(s1 + 0xC) = *(f32 *)(s1 + 0xC) - 0.2f;
        *(f32 *)(s0 + 0x18) = *(f32 *)(s0 + 0x18) + *(f32 *)(s1 + 0x8);
        *(f32 *)(s0 + 0x20) = *(f32 *)(s0 + 0x20) + *(f32 *)(s1 + 0x10);
        func_80129918(s1 + 0x1C, *(s32 *)(s0 + 0x18), *(s32 *)(s0 + 0x1C), *(s32 *)(s0 + 0x20), 0, *(f32 *)(s1 + 0xC), 0);
        *(f32 *)(s0 + 0x1C) = *(f32 *)(s1 + 0x28);
        if (*(u8 *)(s1 + 0x1E) != 0) {
            func_801D7028(idx, 0x19);
            *(f32 *)(s1 + 0xC) = *(f32 *)(s1 + 0xC) * -0.7f;
        }
        if (*(f32 *)(s0 + 0x1C) < -200.0f) {
            func_8013E49C(*(u16 *)(s1 + 0x76));
            D_8011F2FD[(arg0 & 0xFFFF) * 100] = 2;
            f = *(f32 *)(s0 + 0x44);
            if (f >= 2147483648.0f) {
                t = ((s32)(f - 2147483648.0f) | 0x80000000) & 0xFFFF;
            } else {
                t = (s32)f & 0xFFFF;
            }
            D_8011F2FD[t * 100] = 2;
        }
        func_8013F44C((arg0 & 0xFFFF), s1);
    }
}
