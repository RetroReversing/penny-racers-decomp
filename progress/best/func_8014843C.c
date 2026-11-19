extern u8 D_80189B34;
extern u8 D_80189B36;
extern u8 D_8018A276;
extern u8 D_8018BC36;
extern u8 D_8018BC37;
extern u8 D_8018BC38;
extern s16 D_8021E1A2;

void func_8014843C(void) {
    u8 *base;
    s32 i;

    i = 0;
    do {
        *((u8 *)&D_8018A276 + i) = 0xFF;
        i++;
    } while (i < 6);
    base = &D_8018A276;
    if (D_80189B34 == 2) {
        base[0] = 3;
        base[1] = *(&D_8018BC38 + 0);
        base[2] = *(&D_8018BC38 + 1);
        base[3] = *(&D_8018BC38 + 2);
    }
    if (D_80189B34 == 1) {
        switch (D_8021E1A2) {
        default:
            if (D_8021E1A2 != D_80189B34) {
                return;
            }
            base[0] = 1;
            base[1] = D_8018BC36;
            return;
        case 2:
            if (!(D_80189B36 & 0x40)) {
                base[0] = 1;
                base[1] = D_8018BC37;
                return;
            }
            base[0] = 2;
            base[1] = D_8018BC36;
            base[2] = *(&D_8018BC36 + 1);
            return;
        case 3:
            if (!(D_80189B36 & 0x40)) {
                base[0] = 1;
                base[1] = D_8018BC38;
                return;
            }
            base[0] = 3;
            base[1] = D_8018BC36;
            base[2] = *(&D_8018BC36 + 1);
            base[3] = *(&D_8018BC36 + 2);
            return;
        }
    }
}
