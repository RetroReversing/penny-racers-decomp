extern u16 D_801C6BB0[];
extern s8 D_801C6BB9;
extern s8 D_801C7062[];
extern s8 D_801C7068;
extern u8 D_801C7469;
extern void *D_801C7AB0;

s32 func_80198250(void) {
    s32 a1 = 0;
    s8 *p;

    if (D_801C6BB9 != 0 && D_801C6BB0[D_801C6BB9 * 0x18 + D_801C7068] == 0xFFFF) {
        if (((u8 *)D_801C7AB0)[1] == 5) {
            p = D_801C7062;
            if (p[0] == D_801C7068) {
                if (p[1] == D_801C6BB9 + 1) {
                    a1 = (D_801C7469 == 1) | (D_801C7469 == 3);
                } else if (p[1] == D_801C6BB9 - 1) {
                    if (D_801C7469 == 0) a1 = 1;
                } else {
                    goto blk;
                }
            } else {
blk:
                if (p[0] != D_801C7068 + 1 && p[0] != D_801C7068 - 1) { a1 = 1; }
                else if (p[1] != D_801C6BB9 || D_801C7469 == 0 || D_801C7469 == 2) a1 = 1;
            }
        } else {
            a1 = 1;
        }
    }
    return a1 & 0xFF;
}
