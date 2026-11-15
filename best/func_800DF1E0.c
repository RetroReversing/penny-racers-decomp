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

typedef struct {
    Unk800DF1E0_2 *unk0;
    u8 pad4[8];
    u16 *unkC;
    u8 pad10[0x54];
} Unk800DF1E0_3;

extern Unk800DF1E0_3 D_8011F340[];

void func_800DF1E0(u16 arg0, u16 *arg1) {
    s32 n;
    s32 i;

    D_8011F340[arg0].unkC = arg1;
    switch (D_8011F340[arg0].unk0->unk4->count) {
    case 0:
        n = 0;
        break;
    case 1:
        n = 0x10;
        break;
    case 2:
        n = 0x100;
        break;
    default:
        n = 0;
        break;
    }
    for (i = 0; i < n; i++) {
        arg1[i] = D_8011F340[arg0].unk0->unk4->data[i];
    }
}
