extern u8 D_8011F2FC[];
extern u8 D_8011F340[];
extern u8 D_8011F350[];

void func_801610E0(u32 **arg0, s32 arg1) {
    s32 off;
    u32 *buf;
    u8 *src;

    off = (arg1 & 0xFFFF) * 100;
    if (D_8011F2FC[off] != 0 && *(u8 *)*(void **)(D_8011F340 + off) != 0) {
        src = *(u8 **)(D_8011F350 + off);
        buf = *arg0;
        *arg0 = buf + 2;
        buf[0] = 0xFA000000;
        buf[1] = (src[0x17] << 24) | (src[0x18] << 16) | (src[0x19] << 8) | D_8011F2FC[off];
    }
}
