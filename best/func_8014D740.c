extern u16 D_8011F32E[];
extern u16 D_8016BA40[];
extern u16 D_802DF420[];

void func_8014D740(s32 arg0) {
    s32 i;

    D_8011F32E[(arg0 & 0xFFFF) * 50] += 1;
    if (D_8011F32E[(arg0 & 0xFFFF) * 50] >= 0x15) {
        D_8011F32E[(arg0 & 0xFFFF) * 50] = 0;
    }
    if (D_8011F32E[(arg0 & 0xFFFF) * 50] >= 0xB) {
        for (i = 3; i < 0xD; i++) {
            D_802DF420[i] = 1;
        }
        return;
    }
    for (i = 3; i < 0xD; i++) {
        D_802DF420[i] = D_8016BA40[i];
    }
}
