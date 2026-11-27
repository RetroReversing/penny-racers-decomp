extern u8 D_8018994E;
extern u8 D_80189B36;
extern u16 D_8018A288[];
extern u16 pickLists[][150];
s32 func_801496B0(u8 arg0, u16 arg1, u8 arg2);

/* Chooses the pick-list item for a category (0-8) from pickLists[listIdx], falling back to a neighbouring category when none is available. */
u16 choosePickListItem(u8 category, u8 useIndex, u8 count, s32 listIdx) {
    s32 i;
    u8 found;
    s32 slot;
    u16 result;

    result = 0x2FFF;
    if (listIdx == 1) {
        result = 0x4FFF;
    }
    if (category == 8) {
        for (i = 0, found = 0; i < count; i++) {
            if ((pickLists[listIdx][i] & 0x1FFF) == 0xD) {
                result = pickLists[listIdx][i];
                found = 1;
            }
        }
        if (!found) {
            if (D_8018994E == 0) {
                category = 7;
            } else if (!(D_80189B36 & 0x20)) {
                category = 7;
            }
        }
    }
    if (category < 8) {
        found = 0;
        for (i = 0; i < 8; i++) {
            slot = func_801496B0(listIdx, category, count);
            if (D_8018A288[0] != 0xFFFF) {
                found++;
                break;
            }
            if ((D_8018994E == 0) | (listIdx == 1)) {
                category = (category + 1) & 7;
            } else {
                break;
            }
        }
        if (found) {
            if (useIndex == 0) {
                result = D_8018A288[0];
            } else {
                result = D_8018A288[slot];
            }
        }
    }
    return result;
}
