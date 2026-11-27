extern u8 D_80189B36;
extern u16 pickLists[][150];
extern u32 randomMasks[][8];

/* Fills pickLists[listIdx] with the slot indices enabled in randomMasks[maskSet], ends it with a 0x3FFF terminator, then appends a special entry and a wrap-around copy of the first 8 entries. */
s32 buildPickList(u8 maskSet, u8 listIdx)
{
    s32 bit;
    s32 word;
    s32 count;
    u32 mask;

    for (bit = 0; bit < 150; bit++) {
        pickLists[listIdx][bit] = 0xFFFF;
    }
    count = 0;
    for (word = 0; word < 8; word++) {
        mask = randomMasks[maskSet][word];
        for (bit = 0; bit < 32; bit++) {
            if (mask & 1) {
                pickLists[listIdx][count] = (word << 8) | bit;
                count++;
            }
            mask >>= 1;
        }
    }
    pickLists[listIdx][count] = 0x3FFF;
    count++;
    if (listIdx == 1) {
        if (D_80189B36 & 0x20) {
            pickLists[listIdx][count] = 0x4FFF;
            count++;
        }
        for (bit = 0; bit < 8; bit++) {
            pickLists[1][count + bit] = pickLists[1][bit];
        }
    } else {
        pickLists[0][count] = 0x2FFF;
        count++;
        for (bit = 0; bit < 8; bit++) {
            pickLists[0][count + bit] = pickLists[0][bit];
        }
    }
    return count;
}
