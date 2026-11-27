typedef struct { u8 pad0[4]; u16 flags; u8 pad6[7]; u8 fD; u8 padE[0x21]; u8 f2F_pad[0]; u8 pad2F[0x10]; u8 f3F; u8 pad40[0x24]; } Rec;
typedef struct { s32 a; s32 b; u8 pad[0x68]; } Slot;
typedef struct { s8 x; s8 y; s8 z; u8 w; u16 idx; } Cur;
typedef struct { u8 a; u8 b; u8 pad2[2]; void *p; u8 pad8[8]; } Msg;
typedef struct { u8 a; u8 b; s8 c; s8 d; s8 e; } Hist;
typedef struct { u8 b[8]; } Eight;
extern u8 D_8011F2FD[], D_8011F32F[];
extern u16 hudSlotIndex, placedBlockObj;
extern Slot btnPlayPressed[];
extern u8 blockDirection, trackStepX, trackStepY, trackPointEntryCount, D_801C7AB8;
extern Cur blockPos;
extern s8 cursorY, cursorX;
extern u16 D_801C6BE0[];
extern s16 D_801C7078, D_801C5EA4;
extern u8 trackPointIndexByCell[];
extern Hist trackPointTable[];
extern Msg D_801C7D30[];
extern Eight D_8031445C[];
extern u8 *trackInfo;
s32 objCreate(s32, s32, s32, s32, s32, s32, void *, s32, s32, f32, s32, f32, s32, s32, s32, f32, f32, f32);
typedef struct { u16 v; u8 pad[0x62]; } Fl;
extern Fl D_8011F2F4[];
void playMenuSound(s32);
u8 getPieceFacing(u16);
void updateBoardCamera(u16);
void applyTrackDirection(u8);
void func_801BFA1C(s32, s32);

/* Places a piece on the grid at the selected spot for playerId: creates its object, records it, and advances the cursor in the footprint direction; a removal request clears the last placement instead. */ u8 placePieceAtCursor(u16 playerId) {
    u8 pad[0x40];
    u16 newObj;
    s32 result;

    result = D_8011F32F[hudSlotIndex * 0x64];
    updateBoardCamera(playerId);
    applyTrackDirection(getPieceFacing(playerId));
    if (btnPlayPressed[playerId].a == 1 && btnPlayPressed[playerId].b == 0) {
        if (blockDirection != 4) {
            D_801C7D30[blockPos.idx].a = 0;
            D_801C7D30[blockPos.idx].b = result = 1;
            D_801C7D30[blockPos.idx].p = &D_8031445C[blockPos.z];
            newObj = objCreate(0, 0, 2, 0, 0x5A, 0xFF, &D_801C7D30[blockPos.idx], 0, 0, blockPos.x * 400.0f * 0.5f, 0, blockPos.y * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
            D_8011F2F4[newObj].v |= 8;
            D_801C6BE0[blockPos.idx] = newObj;
            trackPointIndexByCell[blockPos.idx] = trackInfo[2];
            trackPointTable[trackInfo[2]].a = blockDirection;
            trackPointTable[trackInfo[2]].b = 0;
            trackPointTable[trackInfo[2]].c = blockPos.x;
            trackPointTable[trackInfo[2]].d = blockPos.y;
            trackPointTable[trackInfo[2]].e = blockPos.z;
            func_801BFA1C(0, 0);
            trackInfo[2] = result;
            trackPointEntryCount++;
            cursorX = blockPos.x + trackStepX;
            cursorY = blockPos.y + trackStepY;
            if (blockDirection == 0) {
                if (cursorY > 0) {
                    cursorY--;
                } else {
                    cursorY += 2;
                }
            } else if (blockDirection == 1) {
                if (cursorX > 0) {
                    cursorX--;
                } else {
                    cursorX += 2;
                }
            } else if (blockDirection == 2) {
                if (cursorY < 0x17) {
                    cursorY++;
                } else {
                    cursorY -= 2;
                }
            } else if (blockDirection == 3) {
                if (cursorX < 0x17) {
                    cursorX++;
                } else {
                    cursorX -= 2;
                }
            }
            D_801C7AB8 = 4;
            D_801C7078 = cursorX + cursorY * 24;
            result = 9;
            D_801C5EA4 = 0;
            playMenuSound(0x40);
        }
    } else if (btnPlayPressed[playerId].a == 0 && btnPlayPressed[playerId].b == 1) {
        trackInfo[2] = 0;
        trackPointEntryCount = 0;
        trackPointTable[trackInfo[2]].a = 4;
        trackPointTable[trackInfo[2]].b = 0;
        trackPointTable[trackInfo[2]].c = -1;
        trackPointTable[trackInfo[2]].d = -1;
        trackPointTable[trackInfo[2]].e = -1;
        D_8011F2FD[placedBlockObj * 0x64] = 1;
        blockDirection = 4;
        result = 1;
        playMenuSound(0x3F);
    }
    return result;
}
