extern u8 D_8011F340;
extern u8 D_8011F34C;

typedef struct {
    u8 pad0[4];
    u8 count;
    u8 pad1[3];
    u16 *data;
} Unk800DF1E0_1;

typedef struct {
    u8 pad0[4];
    Unk800DF1E0_1 *unk4;
} Unk800DF1E0_2;

void func_800DF1E0(s32 arg0, u16 *arg1) {
    s32 off;
    s32 n;
    s32 i;
    u8 count;

    off = (arg0 & 0xFFFF) * 100;
    *(u32 *)((u8 *)&D_8011F34C + off) = (u32)arg1;
    count = (*(Unk800DF1E0_2 **)((u8 *)&D_8011F340 + off))->unk4->count;
    if (count != 1) {
        n = 0;
        if (count >= 2) {
            n = 0x100;
            if (count != 2) {
                n = 0;
            }
        }
    } else {
        n = 0x10;
    }
    for (i = 0; i < n; i++) {
        arg1[i] = (*(Unk800DF1E0_2 **)((u8 *)&D_8011F340 + (arg0 & 0xFFFF) * 100))->unk4->data[i];
    }
}
