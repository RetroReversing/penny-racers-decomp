extern s8 D_801C6BB0[];
extern s8 D_801C6BB1;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u8 D_801C7469;

s32 func_80198968(void) {
    s32 a2 = 0;
    s32 n = D_801C7068;
    if (n == 0) {
        return 0;
    }
    if (D_801C7469 == 0) {
        if (D_801C6BB0[0] == n - 1) {
            if (D_801C6BB0[1] != D_801C6BB9) {
                if (D_801C6BB9 != D_801C6BB0[1] - 1) {
                    a2 = 1;
                }
            }
        } else {
            a2 = 1;
        }
    } else if (D_801C7469 == 2) {
        if (D_801C6BB0[0] == n - 1) {
            if (D_801C6BB0[1] != D_801C6BB9) {
                if (D_801C6BB9 != D_801C6BB0[1] + 1) {
                    a2 = 1;
                }
            }
        } else {
            a2 = 1;
        }
    } else if (D_801C7469 != 3) {
        if (D_801C6BB0[0] == n - 1) {
            if (D_801C6BB0[1] != D_801C6BB9) {
                a2 = 1;
            }
        } else {
            a2 = 1;
        }
    } else {
        if (D_801C6BB0[0] == n - 1 || D_801C6BB0[0] + 1 == n - 1) {
            if (D_801C6BB1 != D_801C6BB9) {
                a2 = 1;
            }
        } else {
            a2 = 1;
        }
    }
    return a2 & 0xFF;
}
