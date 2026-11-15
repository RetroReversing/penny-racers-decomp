extern s32 D_8011F340;
extern s32 D_8011F34C;

void func_800DF1E0(s32 arg0, s32 arg1) {
    s32 n;
    s32 i;
    u8 v;

    *(s32 *)((u8 *)&D_8011F34C + (arg0 & 0xFFFF) * 0x64) = arg1;
    v = *(u8 *)(*(s32 *)(*(s32 *)((u8 *)&D_8011F340 + (arg0 & 0xFFFF) * 0x64) + 4) + 4);
    if (v != 1) {
        n = 0;
        if (v >= 2) {
            n = 0x100;
            if (v != 2) {
                n = 0;
            }
        }
    } else {
        n = 0x10;
    }
    i = 0;
    if (n != 0) {
        __repair_rows: {
            *(u16 *)((u8 *)arg1 + i * 2) = *(u16 *)((u8 *)(*(s32 *)(*(s32 *)((u8 *)&D_8011F340 + (arg0 & 0xFFFF) * 0x64) + 4) + 8) + i * 2);
            i++;
        }
if (i < n) goto __repair_rows;
    }
}
