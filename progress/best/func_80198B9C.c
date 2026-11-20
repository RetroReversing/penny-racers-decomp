extern s8 D_801C6BB0[];
extern s8 D_801C6BB9;
extern u8 D_801C7068;
extern u8 D_801C7469;

s32 func_80198B9C(void) {
    s32 a2 = 0;
    s8 *p;

    if ((*(s8 *)&D_801C7068) < 0x17) {
        if (D_801C7469 == 0) {
            p = D_801C6BB0;
            if (p[0] != D_801C7068 + 1) {
                a2 = 1;
            } else if (p[1] != D_801C6BB9 && D_801C6BB9 != p[1] - 1) {
                a2 = 1;
            }
        } else if (D_801C7469 == 1) {
            p = D_801C6BB0;
            if (p[0] == D_801C7068 + 1) {
                if (p[1] != D_801C6BB9) a2 = 1;
            } else if (p[0] - 1 != D_801C7068 + 1) {
                a2 = 1;
            }
        } else if (D_801C7469 == 2) {
            p = D_801C6BB0;
            if (p[0] != D_801C7068 + 1) {
                a2 = 1;
            } else if (p[1] != D_801C6BB9 && D_801C6BB9 != p[1] + 1) {
                a2 = 1;
            }
        } else if (D_801C7469 == 3) {
            p = D_801C6BB0;
            if (p[0] != D_801C7068 + 1 || p[1] != D_801C6BB9) a2 = 1;
        }
    }
    return a2 & 0xFF;
}
