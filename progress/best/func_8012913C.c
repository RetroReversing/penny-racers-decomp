s32 func_8003DE60();
extern u8 D_8011F308[];
extern u8 D_8011F310[];
extern u8 D_8011F340[];
extern u8 D_8012AA38[];

s32 func_8012913C(u16 arg0, f32 arg1, s32 arg2, f32 arg3) {
    u16 s0 = arg0;
    u16 a1 = 0;
    u16 v1_2;
    u16 a2 = arg0;
    s32 off;
    u8 *obj;
    u8 *rec;
    f32 fx;
    f32 fy;

loop_1:
    off = (s0 & 0xFFFF) * 100;
    rec = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_8011F340 + off) + 4) + 4) + 4);
    if (!(arg1 < (f32)*(s16 *)(rec + 0x40) + *(f32 *)(D_8011F308 + off)) ||
        !((f32)*(s16 *)(rec + 0x50) + *(f32 *)(D_8011F308 + off) < arg1) ||
        !(arg3 < (f32)*(s16 *)(rec + 0x44) + *(f32 *)(D_8011F310 + off)) ||
        !((f32)*(s16 *)(rec + 0x54) + *(f32 *)(D_8011F310 + off) < arg3)) {
        if (a1 == 0) {
            obj = *(u8 **)(D_8011F340 + (s0 & 0xFFFF) * 100);
            if (*(u16 *)(obj + 0xA) != 0xFFFF) {
                s0 = *(u16 *)(obj + 0xA);
                v1_2 = s0;
            } else {
                s0 = *(u16 *)(*(u8 **)(D_8011F340 + (s0 & 0xFFFF) * 100) + 0xE);
                a1 = 1;
                v1_2 = s0;
            }
        } else {
            obj = *(u8 **)(D_8011F340 + (s0 & 0xFFFF) * 100);
            if (*(u16 *)(obj + 0xE) != 0xFFFF) {
                s0 = *(u16 *)(obj + 0xE);
                v1_2 = s0;
            } else {
                s0 = *(u16 *)(*(u8 **)(D_8011F340 + (s0 & 0xFFFF) * 100) + 0xA);
                a1 = 0;
                v1_2 = s0;
            }
        }
        if (v1_2 == (a2 & 0xFFFF)) {
            s0 = a2;
            func_8003DE60(D_8012AA38, a1, a2);
        } else {
            goto loop_1;
        }
    }
    return s0 & 0xFFFF;
}
