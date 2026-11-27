typedef struct { u8 unk0; u8 unk1; } Hdr;
extern Hdr *trackInfo;
extern u8 blockPos[];
extern u8 finishPos[];
extern u8 blockDirection;
extern s8 trackStepX;
extern s8 trackStepY;
extern u8 D_801C6B25;
s32 func_8019A31C(void);
void playMenuSound(s32);

/* Applies a track direction (0-3) when its input bit is pressed: sets the block piece and the finish-line tile, then plays a sound. */ void applyTrackDirection(u8 direction) {
    if (direction == 0) {
        if (!(func_8019A31C() & 1)) return;
        blockDirection = 0;
        if (trackInfo->unk1 == 5) {
            blockPos[2] = 5;
            finishPos[0] = blockPos[0];
            finishPos[1] = blockPos[1] + 1;
            finishPos[2] = 5;
            if (trackInfo->unk0 == 4) {
                blockPos[2] = 0x33;
                finishPos[2] = 0x33;
            }
        } else {
            blockPos[2] = 0x2B;
            if (trackInfo->unk0 == 4) {
                blockPos[2] = 0x59;
            }
        }
        (&trackStepX)[1] = -1;
        trackStepX = 0;
    }     else if (direction == 1) {
        if (!(func_8019A31C() & 4)) return;
        blockDirection = 1;
        if (trackInfo->unk1 == 5) {
            blockPos[2] = 0;
            finishPos[0] = blockPos[0] + 1;
            finishPos[1] = blockPos[1];
            finishPos[2] = 0;
            if (trackInfo->unk0 == 4) {
                blockPos[2] = 0x2E;
                finishPos[2] = 0x2E;
            }
        } else {
            blockPos[2] = 0x2D;
            if (trackInfo->unk0 == 4) {
                blockPos[2] = 0x5B;
            }
        }
        trackStepX = -1;
        trackStepY = 0;
    }     else if (direction == 2) {
        if (!(func_8019A31C() & 2)) return;
        blockDirection = 2;
        if (trackInfo->unk1 == 5) {
            blockPos[2] = 5;
            finishPos[0] = blockPos[0];
            finishPos[1] = blockPos[1] - 1;
            finishPos[2] = 5;
            if (trackInfo->unk0 == 4) {
                blockPos[2] = 0x33;
                finishPos[2] = 0x33;
            }
        } else {
            blockPos[2] = 0x2A;
            if (trackInfo->unk0 == 4) {
                blockPos[2] = 0x58;
            }
        }
        trackStepY = 1;
        trackStepX = 0;
    }     else if (direction == 3) {
        if (!(func_8019A31C() & 8)) return;
        blockDirection = 3;
        if (trackInfo->unk1 == 5) {
            blockPos[2] = 0;
            finishPos[0] = blockPos[0] - 1;
            finishPos[1] = blockPos[1];
            finishPos[2] = 0;
            if (trackInfo->unk0 == 4) {
                blockPos[2] = 0x2E;
                finishPos[2] = 0x2E;
            }
        } else {
            blockPos[2] = 0x2C;
            if (trackInfo->unk0 == 4) {
                blockPos[2] = 0x5A;
            }
        }
        trackStepX = 1;
        trackStepY = 0;
    } else {
        return;
    }
    D_801C6B25 = direction;
    playMenuSound(0x3B);
}
