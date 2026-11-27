extern u8 randomSequenceTable[][8][34];
extern u32 randomMasks[][8];
extern u8 D_8021E1A7;

/* Fills randomSequenceTable[seqId] from randomMasks[seqId]: lists the set bit positions per group and, unless skipHeader is set, seeds the header bytes. */ void buildRandomSequenceTable(s32 seqId, u8 skipHeader)
{
    u8 group;
    u8 bit;
    u8 setBits;
    u8 slotBase;
    u32 bitMask;

    for (group = 0; group < 8; group++) {
        for (bit = 1; bit < 34; bit++) {
            randomSequenceTable[seqId][group][bit] = 0;
        }
    }
    for (group = 0; group < 8; group++) {
        setBits = 0;
        bitMask = 1;
        slotBase = group < 5 ? 2 : 3;
        for (bit = 0; bit < 0x1F; bit++) {
            if (bitMask & randomMasks[seqId][group]) {
                randomSequenceTable[seqId][group][setBits + slotBase] = bit;
                setBits++;
            }
            bitMask <<= 1;
        }
        if (setBits == 0) {
            randomSequenceTable[seqId][group][1] = 1;
            randomSequenceTable[seqId][group][2] = 0x5A;
        } else if (group >= 5) {
            randomSequenceTable[seqId][group][1] = setBits + 1;
            randomSequenceTable[seqId][group][2] = 0x5A;
        } else {
            randomSequenceTable[seqId][group][1] = setBits;
        }
    }
    if (!skipHeader) {
        bit = D_8021E1A7;
        if (bit >= 3) {
            bit = 2;
        }
        randomSequenceTable[seqId][0][0] = 0;
        randomSequenceTable[seqId][1][0] = bit;
        randomSequenceTable[seqId][2][0] = 0;
        randomSequenceTable[seqId][3][0] = 0;
        randomSequenceTable[seqId][4][0] = 0;
        randomSequenceTable[seqId][5][0] = 0;
        randomSequenceTable[seqId][6][0] = 0;
        randomSequenceTable[seqId][7][0] = 0;
    }
}
