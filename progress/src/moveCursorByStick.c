typedef struct { s8 x; s8 y; } Pos;
extern Pos blockPos;
extern s8 cursorY, cursorX;
extern u8 blockDirection;
s32 getCursorDirection(u16);
void playMenuSound(s32);

/* Moves the grid cursor one step in the stick direction for playerId, unless that step would land on the blocking piece; plays a cursor sound when it moves. */ void moveCursorByStick(u16 playerId) {
    u8 stickDir;

    stickDir = getCursorDirection(playerId);
    if (stickDir == 0 && cursorY > 0) {
        if (blockDirection == 0) {
            if (!(blockPos.x == cursorX && blockPos.y == cursorY - 1)) {
                cursorY--;
                playMenuSound(0x3B);
            }
        } else if (blockDirection == 1) {
            if (!((blockPos.x == cursorX || blockPos.x - 1 == cursorX) && blockPos.y == cursorY - 1)) {
                cursorY--;
                playMenuSound(0x3B);
            }
        } else if (blockDirection == 2) {
            if (!(blockPos.x == cursorX && (blockPos.y == cursorY - 1 || blockPos.y + 1 == cursorY - 1))) {
                cursorY--;
                playMenuSound(0x3B);
            }
        } else if (blockDirection == 3) {
            if (!((blockPos.x == cursorX || blockPos.x + 1 == cursorX) && blockPos.y == cursorY - 1)) {
                cursorY--;
                playMenuSound(0x3B);
            }
        }
    } else if (stickDir == 1 && cursorX > 0) {
        if (blockDirection == 0) {
            if (!(blockPos.x == cursorX - 1 && (blockPos.y == cursorY || blockPos.y - 1 == cursorY))) {
                cursorX--;
                playMenuSound(0x3B);
            }
        } else if (blockDirection == 1) {
            if (!(blockPos.x == cursorX - 1 && blockPos.y == cursorY)) {
                cursorX--;
                playMenuSound(0x3B);
            }
        } else if (blockDirection == 2) {
            if (!(blockPos.x == cursorX - 1 && (blockPos.y == cursorY || blockPos.y + 1 == cursorY))) {
                cursorX--;
                playMenuSound(0x3B);
            }
        } else if (blockDirection == 3) {
            if (!((blockPos.x == cursorX - 1 || blockPos.x + 1 == cursorX - 1) && blockPos.y == cursorY)) {
                cursorX--;
                playMenuSound(0x3B);
            }
        }
    } else if (stickDir == 2 && cursorY < 0x17) {
        if (blockDirection == 0) {
            if (!(blockPos.x == cursorX && (blockPos.y == cursorY + 1 || blockPos.y - 1 == cursorY + 1))) {
                cursorY++;
                playMenuSound(0x3B);
            }
        } else if (blockDirection == 1) {
            if (!((blockPos.x == cursorX || blockPos.x - 1 == cursorX) && blockPos.y == cursorY + 1)) {
                cursorY++;
                playMenuSound(0x3B);
            }
        } else if (blockDirection == 2) {
            if (!(blockPos.x == cursorX && blockPos.y == cursorY + 1)) {
                cursorY++;
                playMenuSound(0x3B);
            }
        } else if (blockDirection == 3) {
            if (!((blockPos.x == cursorX || blockPos.x + 1 == cursorX) && blockPos.y == cursorY + 1)) {
                cursorY++;
                playMenuSound(0x3B);
            }
        }
    } else if (stickDir == 3 && cursorX < 0x17) {
        if (blockDirection == 0) {
            if (!(blockPos.x == cursorX + 1 && (blockPos.y == cursorY || blockPos.y - 1 == cursorY))) {
                cursorX++;
                playMenuSound(0x3B);
            }
        } else if (blockDirection == 1) {
            if (!((blockPos.x == cursorX + 1 || blockPos.x - 1 == cursorX + 1) && blockPos.y == cursorY)) {
                cursorX++;
                playMenuSound(0x3B);
            }
        } else if (blockDirection == 2) {
            if (!(blockPos.x == cursorX + 1 && (blockPos.y == cursorY || blockPos.y + 1 == cursorY))) {
                cursorX++;
                playMenuSound(0x3B);
            }
        } else if (blockDirection == 3) {
            if (!(blockPos.x == cursorX + 1 && blockPos.y == cursorY)) {
                cursorX++;
                playMenuSound(0x3B);
            }
        }
    }
}
