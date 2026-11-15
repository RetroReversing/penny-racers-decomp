extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
extern u8 D_8011F2FD[];
typedef struct { f32 f0; u8 pad[96]; } Slot_8011F334;
extern Slot_8011F334 D_8011F334[];
extern u8 D_8022AFE9[];

void func_80133F54(s16 arg0) {
int __repair_constant = 2;

    s32 idx;
    s32 off;
    f32 f;
    u32 v;

    idx = arg0 & 0xFFFF;
    off = idx * 100;
    if (D_8022AFE9[*(u8 *)(D_8011F2F0 + off) * 0x8F0] == 5) {
        D_8011F2FD[off] = __repair_constant;
        return;
    }
    if (D_8011F2FC[off] == 3) {
        f = D_8011F334[idx].f0;
        v = (u32)f & 0xFFFF;
        if (v < 0x9E) {
            f = D_8011F334[idx].f0;
            D_8011F334[idx].f0 = (f32)(((u32)f + 1) & 0xFFFF);
            return;
        }
    } else {
        f = D_8011F334[idx].f0;
        v = (u32)f & 0xFFFF;
        if (v < 0x166) {
            f = D_8011F334[idx].f0;
            D_8011F334[idx].f0 = (f32)(((u32)f + 1) & 0xFFFF);
            return;
        }
    }
    D_8011F2FD[off] = __repair_constant;
}
