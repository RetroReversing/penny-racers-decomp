extern u8 *D_8011F340[];
extern s32 D_8011F060;
extern u8 D_80126FF6;
extern u32 D_80200220[];

void func_801FCBEC(u32 **arg0, s32 arg1) {
    u32 *p;
    u32 *q;
    u8 *base;
    u32 hi, lo;

    if (D_8011F340[(arg1 & 0xFFFF) * 25][0] == 1) {
        p = *arg0;
        *arg0 = p + 2;
        p[0] = 0x06000000;
        p[1] = (u32)D_80200220;
        q = *arg0;
        *arg0 = q + 2;
        base = (u8 *)(D_80126FF6 * 0x30 + D_8011F060);
        hi = (*(u32 *)(base + 0x798) & 0xFFF) << 12;
        lo = (*(u32 *)(base + 0x79C) & 0xFFF) | 0xF2000000;
        q[0] = hi | lo;
        hi = ((*(u32 *)(base + 0x798) + 0x7C) & 0xFFF) << 12;
        lo = ((*(u32 *)(base + 0x79C) + 0x7C) & 0xFFF) | 0x01000000;
        q[1] = hi | lo;
    }
}
