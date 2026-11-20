extern u8 D_8011F2FC;
extern u8 D_8011F32E;
extern u8 D_8011F330;
extern u8 D_801C6B33;
extern s16 D_801C7074;
extern u8 D_801C707B;
extern u8 D_801C7469;
extern u8 D_801C7AB8;

void func_80199864(u32 **arg0, s32 arg1) {
    u32 *p;
    u32 idx;
    u16 st;

    idx = (arg1 & 0xFFFF) * 0x64;
    st = *(u16 *)((u8 *)&D_8011F330 + idx);
    if (st == 0) {
        *(u16 *)((u8 *)&D_8011F330 + idx) = 1;
        return;
    }
    if (st != 1) {
        return;
    }
    if ((u32)(*(u16 *)((u8 *)&D_8011F32E + D_801C7074 * 0x64) - 7) < 2 || *(u16 *)((u8 *)&D_8011F32E + D_801C7074 * 0x64) == 6) {
        if (D_801C7469 != 4 && D_801C7469 != 3 && D_801C6B33 != 0) goto block20;
        goto block19;
    }
    if ((u32)(*(u16 *)((u8 *)&D_8011F32E + (*(u16 *)&D_801C7074) * 0x64) - 9) >= 2 && *(u16 *)((u8 *)&D_8011F32E + D_801C7074 * 0x64) != 0xD) {
        if ((u32)(*(u16 *)((u8 *)&D_8011F32E + D_801C7074 * 0x64) - 0xF) < 2) {
            switch (D_801C707B) {
            case 0: goto block19;
            case 1: goto block20;
            }
            goto tail;
        }
        if (D_801C7AB8 == 4 || D_801C7AB8 == 3 || D_801C6B33 == 0) goto block19;
        goto block20;
    }
    goto block19;
block20:
    p = *arg0;
    *arg0 = p + 2;
    p[0] = 0xFA000000;
    p[1] = 0x96969664;
    goto tail;
block19:
    p = *arg0;
    *arg0 = p + 2;
    p[0] = 0xFA000000;
    p[1] = (s32)(*((u8 *)&D_8011F2FC + idx) | 0xFF00);
tail:
    p = *arg0;
    *arg0 = p + 2;
    p[0] = 0xF9000000;
    p[1] = 1;
}
