extern u8 D_8011F2FC[];
extern u8 D_8011F2FD[];

void func_8015C838(s32 arg0) {
    s32 off;
    s32 t;

    off = (arg0 & 0xFFFF) * 0x64;
    t = D_8011F2FC[off] - 2;
    if (t <= 0) {
        D_8011F2FD[off] = 2;
    } else {
        D_8011F2FC[((u16)arg0) * 0x64] = t;
    }
}
