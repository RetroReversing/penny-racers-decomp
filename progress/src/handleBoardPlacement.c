typedef struct { u8 pad0[4]; u16 flags; u8 pad6[5]; u8 unkB; u8 padC[0xC]; f32 x; f32 y; f32 z; u8 pad24[0x1B]; u8 unk3F; u8 pad40[0x24]; } Obj;
typedef struct { s32 unk0; u8 pad[0x6C]; } Slot;
typedef struct { u8 pad0; u8 unk1; } Hdr;
extern Obj D_8011F2F0[];
extern Slot btnPlayPressed[];
extern Hdr *trackInfo;
extern s8 blockPos[];
extern s8 cursorY;
extern s8 cursorX;
extern u16 hudSlotIndex;
extern u16 boardCursorObj;
extern u16 placedBlockObj;
extern u16 D_801C5EA4;
void func_801B3F08();
u16 objCreate(s32, s32, s32, s32, s32, s32, s32, s32, void (*)(), f32, f32, f32, s32, s32, s32, f32, f32, f32);
void moveBoardCursor(u16);
void updateBoardCamera(u16);
void playMenuSound(s32);

/* Moves the board cursor for this input slot, and places a block there when the slot confirms on a valid tile; returns the new game state. */ u8 handleBoardPlacement(u16 slot) {
    u8 state;

    state = D_8011F2F0[hudSlotIndex].unk3F;
    moveBoardCursor(slot);
    updateBoardCamera(slot);
    D_8011F2F0[boardCursorObj].x = cursorX * 400.0f * 0.5f;
    D_8011F2F0[boardCursorObj].y = 0;
    D_8011F2F0[boardCursorObj].z = cursorY * 400.0f * 0.5f;
    if (btnPlayPressed[slot].unk0 == 1) {
        if (trackInfo->unk1 == 5) {
            if (cursorX != 0 || (cursorY != 0 && cursorY != 0x17)) {
            } else {
                goto done;
            }
            if (cursorX == 0x17) {
                if (cursorY == 0) goto done;
                if (cursorY == 0x17) goto done;
            }
        }
        blockPos[0] = cursorX;
        blockPos[1] = cursorY;
        *(u16 *) &blockPos[4] = blockPos[0] + blockPos[1] * 24;
        placedBlockObj = objCreate(0, 0, 3, 0, 0x53, 0xFF, 0, 0, func_801B3F08,
                                   blockPos[0] * 400.0f * 0.5f, 0, blockPos[1] * 400.0f * 0.5f,
                                   0, 0, 0, 0.5f, 0.5f, 0.5f);
        D_8011F2F0[placedBlockObj].flags |= 0x20;
        D_8011F2F0[placedBlockObj].unkB = 0xC;
        state = 6;
        D_801C5EA4 = 0;
        playMenuSound(0x3D);
    }
done:
    return state;
}
