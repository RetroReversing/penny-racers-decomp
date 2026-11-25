extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];

#define CV(f) (((f) >= 2147483648.0f) ? (((s32)((f) - 2147483648.0f)) | 0x80000000) : ((s32)(f)))
#define IX ((arg1 & 0xFFFF) * 100)
#define XA ((CV(*(f32 *)(D_8011F308 + IX)) << 8) & 0xF800)
#define XB ((CV(*(f32 *)(D_8011F30C + IX)) << 3) & 0x7C0)
#define XC (((u32)CV(*(f32 *)(D_8011F310 + IX)) >> 2) & 0x3E)

void func_802040C4(void **arg0, s32 arg1)
{
    u8 *p;
u8 *__repair_phase_p;
    s32 w1;

    __repair_phase_p = *arg0;
    *arg0 = __repair_phase_p + 8;
    *((s32 *) (__repair_phase_p + 0)) = 0xE7000000;
    *((s32 *) (__repair_phase_p + 4)) = 0;

    p = *arg0;
    *((s32 *) (p + 0)) = 0xBA001402;
    *((s32 *) (p + 4)) = 0x300000;
    *arg0 = p + 8;

    p = *arg0;
    *arg0 = p + 8;
    *((s32 *) (p + 0)) = 0xF7000000;
    do {
        w1 = (((XA | XB | XC) | 1) << 16) | 1;
        *((s32 *) (p + 4)) = w1 | (XA | XB | XC);

        p = *arg0;
        *((s32 *) (p + 0)) = 0xF64FC3BC;
        *arg0 = p + 8;
        *((s32 *) (p + 4)) = 0;
    } while (0);
}
