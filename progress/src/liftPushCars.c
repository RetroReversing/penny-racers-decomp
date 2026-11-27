f32 sqrtf(f32);
extern u8 D_8011F2F0[];
extern s32 D_8018D674;
extern u8 sCars[];

void liftPushCars(s32 arg0, u8 *arg1)
{
    f32 a;
    f32 b;
    f32 c;
    f32 d0;
    f32 d1;
    f32 d2;
    f32 dist;
    s32 i;
    s8 t;
    u8 *p;
    u8 *s0;
    u8 *s1;

    p = D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64);
    D_8018D674 = 0;
    a = *(f32 *)(p + 0x18);
    b = *(f32 *)(p + 0x1C);
    c = *(f32 *)(p + 0x20);
    for (i = 0; i < 7; i++)
    {
        t = *(s8 *)((arg1 + i) + 0x60);
        if (t != -1)
        {
            s0 = sCars + t * 0x8F0;
            s1 = D_8011F2F0 + (*(u16 *)(s0 + 2)) * 0x64;
            d0 = a - *(f32 *)(s1 + 0x18);
            d1 = b - *(f32 *)(s1 + 0x1C);
            d2 = c - *(f32 *)(s1 + 0x20);
            dist = sqrtf(d0 * d0 + d1 * d1 + d2 * d2);
            if (dist < *(f32 *)(arg1 + 0x70))
            {
                if (*(f32 *)(s1 + 0x18) > *(f32 *)(p + 0x18))
                {
                    *(f32 *)(s0 + 0x854) += *(f32 *)(arg1 + 0x70) - dist;
                }
                else
                {
                    *(f32 *)(s0 + 0x854) -= *(f32 *)(arg1 + 0x70) - dist;
                }
                if (*(f32 *)(s1 + 0x20) > *(f32 *)(p + 0x20))
                {
                    *(f32 *)(s0 + 0x85C) += *(f32 *)(arg1 + 0x70) - dist;
                }
                else
                {
                    *(f32 *)(s0 + 0x85C) -= *(f32 *)(arg1 + 0x70) - dist;
                }
                D_8018D674 = 1;
            }
        }
    }
}
