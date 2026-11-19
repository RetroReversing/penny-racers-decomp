typedef struct {
    u8 unk0;
    u8 unk1;
    u16 unk2;
    u8 pad4[0x9];
    u8 unkD;
    u8 padE[2];
    u16 unk10;
    u16 unk12;
    u8 pad14[0x50];
} Struct8021AF20;

extern Struct8021AF20 D_8011F2F0[];
extern u16 D_8018BC3C;
extern u16 func_800E1850;

void func_8021AF20(u16 arg0) {
    u16 idx;

    idx = func_800E1850;
    while (idx != 0xFFFF) {
        D_8011F2F0[idx].unkD = 4;
        idx = D_8011F2F0[idx].unk10;
    }
    D_8011F2F0[D_8018BC3C].unkD = 0;
    D_8011F2F0[arg0].unkD = 0;
}
