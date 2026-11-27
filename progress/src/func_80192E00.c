typedef struct { u8 unk0; u8 unk1; } Hdr;
extern Hdr *D_801C7AB0;
extern u8 D_801C6BB0[];
extern u8 D_801C7062[];
extern u8 D_801C7469;
extern s8 D_801C6B22;
extern s8 D_801C6B23;
extern u8 D_801C6B25;
s32 func_8019A31C(void);
void func_8014B854(s32);

void func_80192E00(u8 arg0) {
    if (arg0 == 0) {
        if (!(func_8019A31C() & 1)) return;
        D_801C7469 = 0;
        if (D_801C7AB0->unk1 == 5) {
            D_801C6BB0[2] = 5;
            D_801C7062[0] = D_801C6BB0[0];
            D_801C7062[1] = D_801C6BB0[1] + 1;
            D_801C7062[2] = 5;
            if (D_801C7AB0->unk0 == 4) {
                D_801C6BB0[2] = 0x33;
                D_801C7062[2] = 0x33;
            }
        } else {
            D_801C6BB0[2] = 0x2B;
            if (D_801C7AB0->unk0 == 4) {
                D_801C6BB0[2] = 0x59;
            }
        }
        (&D_801C6B22)[1] = -1;
        D_801C6B22 = 0;
    }     else if (arg0 == 1) {
        if (!(func_8019A31C() & 4)) return;
        D_801C7469 = 1;
        if (D_801C7AB0->unk1 == 5) {
            D_801C6BB0[2] = 0;
            D_801C7062[0] = D_801C6BB0[0] + 1;
            D_801C7062[1] = D_801C6BB0[1];
            D_801C7062[2] = 0;
            if (D_801C7AB0->unk0 == 4) {
                D_801C6BB0[2] = 0x2E;
                D_801C7062[2] = 0x2E;
            }
        } else {
            D_801C6BB0[2] = 0x2D;
            if (D_801C7AB0->unk0 == 4) {
                D_801C6BB0[2] = 0x5B;
            }
        }
        D_801C6B22 = -1;
        D_801C6B23 = 0;
    }     else if (arg0 == 2) {
        if (!(func_8019A31C() & 2)) return;
        D_801C7469 = 2;
        if (D_801C7AB0->unk1 == 5) {
            D_801C6BB0[2] = 5;
            D_801C7062[0] = D_801C6BB0[0];
            D_801C7062[1] = D_801C6BB0[1] - 1;
            D_801C7062[2] = 5;
            if (D_801C7AB0->unk0 == 4) {
                D_801C6BB0[2] = 0x33;
                D_801C7062[2] = 0x33;
            }
        } else {
            D_801C6BB0[2] = 0x2A;
            if (D_801C7AB0->unk0 == 4) {
                D_801C6BB0[2] = 0x58;
            }
        }
        D_801C6B23 = 1;
        D_801C6B22 = 0;
    }     else if (arg0 == 3) {
        if (!(func_8019A31C() & 8)) return;
        D_801C7469 = 3;
        if (D_801C7AB0->unk1 == 5) {
            D_801C6BB0[2] = 0;
            D_801C7062[0] = D_801C6BB0[0] - 1;
            D_801C7062[1] = D_801C6BB0[1];
            D_801C7062[2] = 0;
            if (D_801C7AB0->unk0 == 4) {
                D_801C6BB0[2] = 0x2E;
                D_801C7062[2] = 0x2E;
            }
        } else {
            D_801C6BB0[2] = 0x2C;
            if (D_801C7AB0->unk0 == 4) {
                D_801C6BB0[2] = 0x5A;
            }
        }
        D_801C6B22 = 1;
        D_801C6B23 = 0;
    } else {
        return;
    }
    D_801C6B25 = arg0;
    func_8014B854(0x3B);
}
