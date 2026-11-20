extern u8 D_80189B34;
extern u8 D_8018BC35[];
extern s16 D_8021E1A2;
extern u8 D_80237632[];
extern u8 D_8018BC36;
extern u8 D_8018BC37;
extern u8 D_8018BC38;
extern u8 D_80237633;
extern u8 D_80237635;
extern u8 D_80237637;
extern u8 D_80237639;

void func_8014998C(void) {
    s32 i;
    u8 *p;
    u8 *q;

    for (i = 0; i < 6; i++) {
        D_8018BC35[i] = 0xFF;
    }
    if (D_80189B34 == 2) {
        i = 0;
        p = D_80237632;
        for (; i < 6; i++) {
            D_8018BC35[i] = (p + i * 2)[1];
        }
    }
    if (D_80189B34 == 1) {
        switch (D_8021E1A2) {
        case 3:
            D_8018BC38 = D_80237639;
        case 2:
            D_8018BC37 = D_80237637;
        case 1:
            q = &D_8018BC36;
            *q = D_80237635;
            q--;
            *q = D_80237633;
            break;
        }
    }
}
