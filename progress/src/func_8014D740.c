typedef struct { u8 pad[0x3E]; u16 cnt; u8 pad2[0x24]; } Ent;
extern Ent D_8011F2F0[];
extern u16 D_8016BA40[];
extern u16 D_802DF420[];

void func_8014D740(u16 arg0) {
    s32 i;

    D_8011F2F0[arg0].cnt++;
    if (D_8011F2F0[arg0].cnt >= 21) {
        D_8011F2F0[arg0].cnt = 0;
    }
    if (D_8011F2F0[arg0].cnt >= 11) {
        for (i = 3; i < 13; i++) {
            D_802DF420[i] = 1;
        }
    } else {
        for (i = 3; i < 13; i++) {
            D_802DF420[i] = D_8016BA40[i];
        }
    }
}
