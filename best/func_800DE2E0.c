extern s8 D_8011F2F1[];
extern s8 D_8011F300[];
extern s8 D_8011F302[];
extern s8 D_80126F9C[];
extern s16 D_80126FF0;
extern s16 D_80126FF4;
extern u16 func_800E1850;

void func_800DE2E0(void) {
    s32 i;
    s32 off;
    u16 neg;
    s8 *p;

    neg = 0xFFFF;
    D_80126FF0 = 0x140;
    D_80126FF4 = 0;
    func_800E1850 = neg;
    p = D_8011F300;
    *(u16 *)(p + 0) = neg;
    *(s16 *)(p + 2) = 1;
    p[-15] = 0;
    i = 1;
    do {
        off = i * 100;
        *(s16 *)(D_8011F300 + off) = i - 1;
        *(s16 *)(D_8011F302 + off) = i + 1;
        D_8011F2F1[off] = 0;do{do{do{
        i = i + 1;}while(0);}while(0);}while(0);
    } while (i < 0x13F);
    p = D_80126F9C;
    *(s16 *)(p + 0) = 0x13E;
    *(u16 *)(p + 2) = 0xFFFF;
    p[-15] = 0;
}
