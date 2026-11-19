extern void func_8014B854(s32, u8 *);
extern u8 D_801C6B20;
extern s8 D_801C6B21;
extern s8 D_801C6B22;
extern s8 D_801C6B23;
extern s8 D_801C6B24;
extern u8 D_801C6B25;
extern u8 D_801C6B26;
extern s8 D_801C6BB9;
extern u16 D_801C6BDE[];
extern s8 D_801C7062[];
extern s8 D_801C7068;
extern u8 D_801C7469;
extern void *D_801C7AB0;
extern u8 D_801C7AB8;

void func_80194B98(u8 *arg0) {
    u8 var_v0;
    u8 var_v0_2;

    if (D_801C7068 > 0) {
        if (((u8 *)D_801C7AB0)[1] == 5) {
            if ((D_801C7062[0] != D_801C7068) || ((D_801C7062[1] != (D_801C6BB9 + 1)) && (D_801C7062[1] != (D_801C6BB9 - 1))) || (var_v0 = 4, (((D_801C7469 != 1) & (D_801C7469 != 3)) == 0))) {
                if (D_801C7062[0] == (D_801C7068 + 1)) {
                    if ((D_801C7062[1] != D_801C6BB9) || (var_v0 = 4, (((D_801C7469 != 0) & (D_801C7469 != 2)) == 0))) {
                        goto block_10;
                    }
                    goto block_32;
                }
block_10:
                if ((D_801C7062[0] != (D_801C7068 - 1)) || (D_801C7062[1] != D_801C6BB9) || (var_v0 = 4, (D_801C7469 == 1))) {
                    var_v0 = 4;
                    if (D_801C6BDE[D_801C6BB9 * 0x18 + D_801C7068] == 0xFFFF) {
                        var_v0 = 4;
                        if (D_801C6B25 != 3) {
                            if (D_801C6B25 != *arg0) {
                                var_v0_2 = 0xA;
                                if (D_801C6B25 == 0) {
                                    goto block_26;
                                }
                                goto block_24;
                            }
                            goto block_21;
                        }
                    }
                }
                goto block_32;
            }
            goto block_32;
        }
        var_v0 = 4;
        if ((D_801C6BDE[D_801C6BB9 * 0x18 + D_801C7068] == 0xFFFF) && (var_v0 = 4, (D_801C6B25 != 3))) {
            if (D_801C6B25 == *arg0) {
block_21:
                D_801C6B20 = 0;
            } else {
                var_v0_2 = 0xA;
                if (D_801C6B25 != 0) {
block_24:
                    if (D_801C6B25 == 2) {
                        var_v0_2 = 0x10;
                        goto block_26;
                    }
                } else {
block_26:
                    D_801C6B20 = var_v0_2;
                }
            }
            D_801C6B22 = -1;
            D_801C6B23 = 0;
            D_801C6B21 = 0;
            if (((u8 *)D_801C7AB0)[0] == 4) {
                D_801C6B20 += 0x2E;
                D_801C6B21 = 0x2E;
            }
            D_801C6B24 = 1;
            if (D_801C6B26 != 1) {
                func_8014B854(0x3B, arg0);
                D_801C6B26 = 1;
            }
        } else {
            goto block_32;
        }
    } else {
        var_v0 = D_801C7AB8;
block_32:
        *arg0 = var_v0;
    }
}
