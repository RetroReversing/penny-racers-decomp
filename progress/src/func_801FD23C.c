typedef struct { s16 x; s16 y; s16 w; s16 h; u8 pad8[0x10]; s16 x0; s16 y0; s16 x1; s16 y1; u8 pad20[8]; } ViewRec;
typedef struct { u8 pad[0x2110]; ViewRec r[1]; } ViewTbl;
extern ViewTbl sRowBoard;
typedef struct { u16 state; u8 pad[0x62]; } StateRec;
extern StateRec playerSlots[];
s32 initRowTable(s32);

void func_801FD23C(u16 arg0) {
    switch (playerSlots[arg0].state) {
    case 0:
        initRowTable(1);
        sRowBoard.r[0].w = 0xA0;
        sRowBoard.r[0].h = 0x78;
        playerSlots[arg0].state = 1;
        return;
    case 1:
        if (sRowBoard.r[0].x < 0xA0) {
            sRowBoard.r[0].x++;
        } else {
            playerSlots[arg0].state = 2;
        }
        break;
    case 2:
        if (sRowBoard.r[0].x > 0) {
            sRowBoard.r[0].x--;
        } else {
            playerSlots[arg0].state = 1;
        }
        break;
    default:
        return;
    }
    sRowBoard.r[0].x0 = sRowBoard.r[0].x;
    sRowBoard.r[0].y0 = sRowBoard.r[0].y;
    sRowBoard.r[0].x1 = sRowBoard.r[0].x + 0xA0;
    sRowBoard.r[0].y1 = sRowBoard.r[0].y + 0x78;
}
