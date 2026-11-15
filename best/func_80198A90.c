extern s8 D_801C6BB0[];
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u8 D_801C7469;

s32 func_80198A90(void) {
    s32 a2 = 0;

    if (D_801C6BB9 < 0x17) {
        switch (D_801C7469) {
        case 0:
            if (D_801C6BB0[0] != D_801C7068) {
                a2 = 1;
            } else if (D_801C6BB0[1] != D_801C6BB9 + 1) {
                if (D_801C7068 != D_801C6BB0[1] - 1) {
                    a2 = 1;
                }
            }
            break;
        case 1:
            if (D_801C6BB0[0] == D_801C7068) {
                if (D_801C6BB0[1] != D_801C6BB9 + 1) {
                    a2 = 1;
                }
            } else if (D_801C6BB0[0] - 1 != D_801C7068) {
                a2 = 1;
            }
            break;
        case 2:
            if (D_801C6BB0[0] != D_801C7068) {
                a2 = 1;
            } else if (D_801C6BB0[1] != D_801C6BB9 + 1) {
                a2 = 1;
            }
            break;
        case 3:
            if (D_801C6BB0[0] == D_801C7068) {
                if (D_801C6BB0[1] != D_801C6BB9 + 1) {
                    a2 = 1;
                }
            } else if (D_801C6BB0[0] + 1 != D_801C7068) {
                a2 = 1;
            }
            break;
        }
    }
    return a2 & 0xFF;
}
