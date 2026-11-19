void func_8013E49C(u16 a);
void func_8013EB20(s32 idx, void *rec, f32 a, f32 b, f32 c);
void func_8013EC48(s32 idx, f32 v);
extern u8 D_8011F2FC[];
extern u8 D_8011F2FD[];
extern f32 D_8011F320[];
extern u16 D_8011F32E[];
extern char D_8011F350[];

void func_801655A8(s32 arg0) {
    s32 idx;
    s32 off;
    char *rec;
    u16 state;
    f32 v;
    f32 sp10;

    idx = arg0 & 0xFFFF;
    off = idx * 100;
    rec = *(char **)(D_8011F350 + off);
    state = *(u16 *)((char *)D_8011F32E + off);
    if (state == 1) {
        v = *(f32 *)((char *)D_8011F320 + off);
        func_8013EC48(idx, (4.0f - v) * 0.2f + v);
        if (*(f32 *)((char *)D_8011F320 + off) > 3.9f) {
            *(u16 *)((char *)D_8011F32E + off) = 2;
        }
    } else if (state < 2) {
        if (state == 0) {
            sp10 = -*(f32 *)(rec + 0x10) * 0.2f;
            func_8013EB20(idx, rec, -*(f32 *)(rec + 0x8) * 0.2f, -*(f32 *)(rec + 0xC) * 0.15f, sp10);
            *(u8 *)((char *)D_8011F2FC + off) += 0xC;
            *(u16 *)(rec + 0x14) -= 1;
            if ((s16) *(u16 *)(rec + 0x14) < 0) {
                *(u16 *)((char *)D_8011F32E + off) = 1;
            }
        }
    } else if (state == 2) {
        sp10 = 0.0f;
        func_8013EB20(idx, rec, sp10, 0.001f, 0.0f);
        *(u8 *)((char *)D_8011F2FC + off) -= 1;
        if (*(u8 *)((char *)D_8011F2FC + off) < 5) {
            func_8013E49C(*(u16 *)(rec + 0x76));
            *(u8 *)((char *)D_8011F2FD + off) = 2;
        }
    }
}
