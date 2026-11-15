extern u8 D_80189B34;
extern u8 D_8018BC35;
extern s32 D_8018BC36;
extern u8 D_8018BC37;
extern u8 D_8018BC38;
extern s16 D_8021E1A2;
extern s32 D_80237632;
extern u8 D_80237633;
extern u8 D_80237635;
extern u8 D_80237637;
extern u8 D_80237639;

void func_8014998C(void)
{
    u32 i;
    u16 v0;
    u8 *p;

    for (i = 0; i < 6; i++) {
        *(&D_8018BC35 + i) = 0xFF;
    }

    if (D_80189B34 == 2) {
        p = (u8 *)&D_80237632;
        i = 0;
        v0 = i * 2;
        do {
            *(&D_8018BC35 + i) = p[v0 + 1];
            i += 1;
            v0 = i * 2;
        } while (i < 6);
    }

    if (D_80189B34 == 1) {
        switch (D_8021E1A2) {
        case 3:
            D_8018BC38 = D_80237639;
        case 2:
            D_8018BC37 = D_80237637;
        case 1:
            p = (u8 *)&D_8018BC36;
            p[0] = D_80237635;
            p[-1] = D_80237633;
            break;
        }
    }
}
