extern u8 D_8011F2FD[];
extern u8 D_8011F308[];
extern u8 sPrimColorG[];
extern u8 racerAnimFrames[];

void func_8013BA58(s32 arg0) {
    s32 off = (arg0 & 0xFFFF) * 100;

    if (*(f32 *)(racerAnimFrames + off) < *(f32 *)(sPrimColorG + off)) {
        *(f32 *)(sPrimColorG + off) = *(f32 *)(sPrimColorG + off) - 3.0f;
        *(f32 *)(D_8011F308 + off) = *(f32 *)(D_8011F308 + off) - 1.0f;
    } else {
        D_8011F2FD[(arg0 & 0xFFFF) * 100] = 2;
    }
}
