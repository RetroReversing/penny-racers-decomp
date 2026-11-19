extern u8 D_8011F2F1[];
extern u8 D_8011F300[];
extern u8 D_8011F302[];
extern u8 D_8011F304[];
extern u8 D_8011F32C[];
extern u8 D_8011F340[];
extern u8 D_800E2660[];
extern u8 D_800E2662[];
extern u16 D_800E1ED0;
extern u16 D_80126FF0;
extern u16 D_80126FF2;
extern u16 D_80126FF4;
extern u16 func_800E1850;

void func_800DECCC(u16 arg0) {
    s32 v;
    if (D_8011F2F1[(arg0 & 0xFFFF) * 100] != 0) {
        if ((D_8011F2F1[(arg0 & 0xFFFF) * 100] == 1) || (D_8011F2F1[(arg0 & 0xFFFF) * 100] == 4)) {
            if (*(u16 *)(*(u8 **)(D_8011F340 + (arg0 & 0xFFFF) * 100) + 0xC) != 0xFFFF) {
                func_800DECCC(*(u16 *)(D_8011F304 + (arg0 & 0xFFFF) * 100));
            }
            if (*(u16 *)(*(u8 **)(D_8011F340 + (arg0 & 0xFFFF) * 100) + 0xA) != 0xFFFF) {
                func_800DECCC(*(u16 *)(D_8011F304 + (arg0 & 0xFFFF) * 100));
            }
        }
        D_80126FF0 += 1;
        if (D_8011F2F1[(arg0 & 0xFFFF) * 100] != 4) {
            if (*(u16 *)(D_8011F300 + (arg0 & 0xFFFF) * 100) != 0xFFFF) {
                *(u16 *)(D_8011F302 + *(u16 *)(D_8011F300 + (arg0 & 0xFFFF) * 100) * 100) = *(u16 *)(D_8011F302 + (arg0 & 0xFFFF) * 100);
            }
            if (*(u16 *)(D_8011F302 + (arg0 & 0xFFFF) * 100) == 0xFFFF) {
                func_800E1850 = *(u16 *)(D_8011F300 + (arg0 & 0xFFFF) * 100);
            } else {
                *(u16 *)(D_8011F300 + *(u16 *)(D_8011F302 + (arg0 & 0xFFFF) * 100) * 100) = *(u16 *)(D_8011F300 + (arg0 & 0xFFFF) * 100);
            }
        }
        v = arg0 & 0xFFFF;
        *(u16 *)(D_8011F300 + v * 100) = 0xFFFF;
        *(u16 *)(D_8011F302 + v * 100) = D_80126FF4;
        *(u16 *)(D_8011F300 + D_80126FF4 * 100) = arg0;
        D_80126FF4 = arg0;
        D_8011F2F1[v * 100] = 0;
        if (*(u16 *)(D_8011F32C + v * 100) != 0xFFFF) {
            D_800E1ED0 += 1;
            *(u16 *)(D_800E2660 + D_80126FF2 * 776) = *(u16 *)(D_8011F32C + v * 100);
            *(u16 *)(D_800E2662 + *(u16 *)(D_8011F32C + v * 100) * 776) = D_80126FF2;
            *(u16 *)(D_800E2660 + *(u16 *)(D_8011F32C + v * 100) * 776) = 0xFFFF;
            D_80126FF2 = *(u16 *)(D_8011F32C + v * 100);
        }
    }
}
