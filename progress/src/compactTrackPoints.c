typedef struct { u8 a; u8 b; s8 c; s8 d; s8 e; } Ent5;
typedef struct { u8 pad0[2]; u8 count; } ListHdr;
extern ListHdr *trackInfo;
extern u8 trackPointEntryCount;
extern u8 trackPointIndexByCell[];
extern Ent5 trackPointTable[200];
extern u16 trackPointLinks[200][4];

typedef struct { u16 slots[200][4]; Ent5 ents[200]; } Work;
/* Removes one track point, packs the remaining points and their links, and rebuilds the cell index and entry count. */ void compactTrackPoints(u8 removeIndex) {
    Work saved;
    u8 dstIndex;
    u8 srcIndex;
    u8 slot;
    Ent5 *point;
    Ent5 *savedPoint;
    Ent5 *emptyPoint;
    Ent5 *savedPoints;

    dstIndex = 0;
    for (srcIndex = 0; srcIndex < trackInfo->count; srcIndex++) {
        if (srcIndex == removeIndex) {
            srcIndex++;
            if (srcIndex == trackInfo->count) break;
        }
        *(u8 *) (dstIndex * 5 + (u8 *) &saved + 1600) = trackPointTable[srcIndex].a;
        *(u8 *) (dstIndex * 5 + (u8 *) &saved + 1601) = trackPointTable[srcIndex].b;
        *(u8 *) (dstIndex * 5 + (u8 *) &saved + 1602) = trackPointTable[srcIndex].c;
        *(u8 *) (dstIndex * 5 + (u8 *) &saved + 1603) = trackPointTable[srcIndex].d;
        *(u8 *) (dstIndex * 5 + (u8 *) &saved + 1604) = trackPointTable[srcIndex].e;
        for (slot = 0; slot < 4; slot++) {
            saved.slots[dstIndex][slot] = trackPointLinks[srcIndex][slot];
        }
        dstIndex++;
    }
    trackInfo->count = dstIndex;
    trackPointEntryCount = 0;
    for (srcIndex = 0; srcIndex < trackInfo->count; srcIndex++) {
        point = &trackPointTable[srcIndex];
        savedPoints = saved.ents;
        savedPoint = &savedPoints[srcIndex];
        point->a = savedPoint->a;
        point->b = savedPoint->b;
        point->c = savedPoint->c;
        point->d = savedPoint->d;
        point->e = savedPoint->e;
        trackPointIndexByCell[(u16) ((s8) trackPointTable[srcIndex].c + (s8) trackPointTable[srcIndex].d * 24)] = srcIndex;
        trackPointEntryCount++;
        for (dstIndex = 0; dstIndex < 4; dstIndex++) {
            trackPointLinks[srcIndex][dstIndex] = saved.slots[srcIndex][dstIndex];
            if (trackPointLinks[srcIndex][dstIndex] != 0xFFFF) {
                trackPointEntryCount++;
            }
        }
    }
    for (; srcIndex < 200; srcIndex++) {
        emptyPoint = &trackPointTable[srcIndex];
        emptyPoint->a = 4;
        emptyPoint->b = 0;
        emptyPoint->c = -1;
        emptyPoint->d = -1;
        emptyPoint->e = -1;
        for (dstIndex = 0; dstIndex < 4; dstIndex++) {
            trackPointLinks[srcIndex][dstIndex] = 0xFFFF;
        }
    }
}
