extern void func_800DE41C();
extern void func_801AEEE8();
extern void func_801AEFBC();
extern void func_801D65BC();
extern void func_8021F5F0();
extern u8 D_8019E400[];
extern u8 D_8019E4B8[];
extern u8 D_801C5E9C[];
extern u8 D_801C5E9E[];
extern s8 D_801C5EA0;
extern u8 D_801C5EA1;
extern u8 D_801C6BB9;
extern u16 D_801C6BE0[];
extern u8 D_801C7068;
extern u8 D_801C7080[];
extern u8 D_801C7082[];
extern s8 D_801C7469;
extern u8 D_801C7470[];
extern void *D_801C7AB0;
extern s8 D_801C7AB6;
extern s8 D_801C7AB8;
extern u8 D_801C7AD8[];

void func_801AEC94(void) {
    u16 i;
    u8 j;
    u16 *temp_a1;
    u8 *p;

    D_801C7AB8 = 4;
    D_801C7469 = 4;
    if (D_801C5EA1 == 0) {
        D_801C6BB9 = 0xB;
        D_801C7068 = 0xB;
        D_801C5EA0 = 0;
        D_801C5E9E[0] = 0;
        D_801C5E9E[1] = 0;
    } else {
        D_801C7068 = D_801C7082[0];
        D_801C6BB9 = D_801C7082[1];
    }
    D_801C7AB0 = D_801C5E9C;
    D_801C7AB6 = 0;
    for (i = 0; i < 0x240; i++) {
        D_801C6BE0[i] = 0xFFFF;
        D_801C7AD8[i] = 0xFF;
    }
    for (i = 0; i < 0xC8; i++) {
        temp_a1 = (u16 *)(D_801C7470 + i * 8);
        for (j = 0; j < 4; j++) {
            temp_a1[j] = 0xFFFF;
        }
        if (D_801C5EA1 == 0) {
            D_801C7080[i * 5 + 0] = 4;
            D_801C7080[i * 5 + 1] = 0;
            D_801C7080[i * 5 + 2] = 0xFF;
            D_801C7080[i * 5 + 3] = 0xFF;
            D_801C7080[i * 5 + 4] = 0xFF;
        }
    }
    func_801D65BC(7, temp_a1, -1, 0xFFFF);
    func_8021F5F0();
    func_801AEEE8();
    func_801AEFBC();
    func_800DE41C(0, 0, 3, 0, 0x42, 0xFF, 0, 0, D_8019E400, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x50, 0xFF, 0, 0, D_8019E4B8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
