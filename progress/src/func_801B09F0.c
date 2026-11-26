extern u8 *D_801C7AB0;
extern u8 D_80237470[];
extern u8 D_80237471[];
extern u8 D_80237472[];
extern u8 D_80237473[];
extern u8 D_802352F4;

void func_801B09F0(void) {
    u8 *p;
    u8 c;
    u16 idx;
    u8 n;

    idx = 0;
    c = D_801C7AB0[2];
    p = D_801C7AB0;
    n = 0;
    if (c != 0) {
        do {
            if (p[1] == 5) {
                if (n == p[2] - 2) {
                    D_80237470[idx] = p[2] - 1;
                    D_80237471[idx] = 0;
                } else if (n == D_801C7AB0[2] - 1) {
                    D_80237470[idx] = 0;
                    D_80237471[idx] = 1;
                } else {
                    D_80237470[idx] = n + 1;
                    D_80237471[idx] = n + 2;
                }
            } else {
                if (n == 0) {
                    D_80237472[0] = 0;
                    D_80237472[1] = 1;
                } else if (n == D_801C7AB0[2] - 1) {
                    D_80237470[0] = 0;
                    D_80237470[1] = 0;
                } else {
                    D_80237472[idx] = n;
                    D_80237473[idx] = n + 1;
                }
            }
            n++;
            idx += 2;
            p = D_801C7AB0;
        } while (n < p[2]);
    }
    D_802352F4 = D_801C7AB0[2] - 1;
}
