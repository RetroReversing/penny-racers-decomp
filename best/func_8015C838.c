extern u8 D_8011F2FC[];
extern u8 D_8011F2FD[];

void func_8015C838(s32 arg0) {
    s32 v;
    s32 idx;
    s32 t;

    v = arg0 & 0xFFFF;
    idx = v * 0x64;
    t = D_8011F2FC[idx] - 2;
    if (t > 0) {
        D_8011F2FC[idx] = t;
        return;
    }
    D_8011F2FD[v] = 2;
}
