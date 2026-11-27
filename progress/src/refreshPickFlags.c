typedef struct { u8 total; u8 count; u8 pad[6]; } SideInfo;
extern SideInfo pickSideInfo[2];
extern u16 pickLists[][150];
extern u16 sharedPickList[];
/* Recomputes the pick flags for both sides: entries already in the other list are marked taken, the per-side counts are refreshed, and optionally the remaining side entries are marked. */ void refreshPickFlags(u8 side, u8 fillRemaining)
{
    s32 i;
    s32 j;
    s32 k;

    for (i = 0; i < 150; i++) {
        switch (pickLists[0][i]) {
        case 0x2FFF:
        case 0x3FFF:
        case 0x4FFF:
            break;
        default:
            for (j = 0; j < 150; j++) {
                if ((sharedPickList[j] & 0xFFF) == (pickLists[0][i] & 0xFFF)) {
                    pickLists[0][i] |= 0x1000;
                }
            }
            break;
        }
    }
    pickSideInfo[0].count = 0;
    for (i = 0; i < pickSideInfo[0].total; i++) {
        if (!(pickLists[0][i] & 0xF000)) {
            pickSideInfo[0].count++;
        }
    }
    for (i = 0; i < 150; i++) {
        switch (sharedPickList[i]) {
        case 0x2FFF:
        case 0x3FFF:
        case 0x4FFF:
            break;
        default:
            for (j = 0; j < 150; j++) {
                if ((pickLists[0][j] & 0xFFF) == (sharedPickList[i] & 0xFFF)) {
                    sharedPickList[i] |= 0x1000;
                }
            }
            break;
        }
    }
    pickSideInfo[1].count = 0;
    for (i = 0; i < pickSideInfo[1].total; i++) {
        if (!(sharedPickList[i] & 0xF000)) {
            pickSideInfo[1].count++;
        }
    }
    if (fillRemaining == 1) {
        for (k = 0; k < 150; k++) {
            if (!(pickLists[side][k] & 0x700)) {
                pickLists[side][k] |= 0x1000;
            }
        }
    }
}
