typedef struct { u8 unk0; u8 unk1; } Hdr;
extern Hdr *trackInfo;
extern u8 blockPos[];
extern u8 finishPos[];
extern u8 blockFootprint;
extern s8 D_801C6B22;
extern s8 D_801C6B23;
extern u8 D_801C6B25;
s32 func_8019A31C(void);
void playMenuSound(s32);

void func_80192E00(u8 arg0) {
    if (arg0 == 0) {
        if (!(func_8019A31C() & 1)) return;
        blockFootprint = 0;
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
        (&D_801C6B22)[1] = -1;
        D_801C6B22 = 0;
    }     else if (arg0 == 1) {
        if (!(func_8019A31C() & 4)) return;
        blockFootprint = 1;
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
        D_801C6B22 = -1;
        D_801C6B23 = 0;
    }     else if (arg0 == 2) {
        if (!(func_8019A31C() & 2)) return;
        blockFootprint = 2;
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
        D_801C6B23 = 1;
        D_801C6B22 = 0;
    }     else if (arg0 == 3) {
        if (!(func_8019A31C() & 8)) return;
        blockFootprint = 3;
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
        D_801C6B22 = 1;
        D_801C6B23 = 0;
    } else {
        return;
    }
    D_801C6B25 = arg0;
    playMenuSound(0x3B);
}
