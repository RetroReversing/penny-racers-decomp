extern u8 D_80189B34;
extern u8 D_80189B36;
extern u8 menuRowList[];
extern u8 D_8018BC36[];
extern u8 D_8018BC37[];
extern u8 D_8018BC38[];
extern s16 skipFirstRowFlag;

/* Fills the menu row list (0xFF-terminated) for the current mode and skip-first-row setting. */ void buildMenuRowList(void)
{
    s32 idx;

    for (idx = 0; idx < 6; idx++) {
        menuRowList[idx] = 0xFF;
    }
    if (D_80189B34 == 2) {
        menuRowList[0] = 3;
        menuRowList[1] = D_8018BC38[0];
        menuRowList[2] = D_8018BC38[1];
        menuRowList[3] = D_8018BC38[2];
    }
    if (D_80189B34 == 1) {
        switch (skipFirstRowFlag) {
        case 1:
            menuRowList[0] = 1;
            menuRowList[1] = D_8018BC36[0];
            break;
        case 2:
            if (!(D_80189B36 & 0x40)) {
                menuRowList[0] = 1;
                menuRowList[1] = D_8018BC37[0];
            } else {
                menuRowList[0] = 2;
                menuRowList[1] = D_8018BC36[0];
                menuRowList[2] = D_8018BC36[1];
            }
            break;
        case 3:
            if (!(D_80189B36 & 0x40)) {
                menuRowList[0] = 1;
                menuRowList[1] = D_8018BC38[0];
            } else {
                menuRowList[0] = 3;
                menuRowList[1] = D_8018BC36[0];
                menuRowList[2] = D_8018BC36[1];
                menuRowList[3] = D_8018BC36[2];
            }
            break;
        }
    }
}

