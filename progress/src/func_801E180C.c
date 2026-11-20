extern void func_801CA140(void **, s32);
extern u8 D_8011F2F0[];
extern u8 D_8011F2F2[];
extern u8 D_801E87E5;
extern u8 D_80220ED8[];

void func_801E180C(u32 **arg0, s32 arg1) {
    s32 idx;
    s32 off;
    u32 *temp_v1;

    idx = arg1 & 0xFFFF;
    off = idx * 0x64;
    if (!(*(u16 *)(D_8011F2F2 + off) & 0x10)) {
        func_801CA140((void **)arg0, idx);
        temp_v1 = *arg0;
        *arg0 = temp_v1 + 2;
        temp_v1[0] = 0x06000000;
        temp_v1[1] = (u32)D_80220ED8;
        D_801E87E5 = D_8011F2F0[off];
    }
}
