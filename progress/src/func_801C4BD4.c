typedef struct { u8 a; u8 b; s8 c; s8 d; u8 e; } Rec407C;
extern Rec407C trackPoints[];
extern u8 D_801C7AD7[][24];
extern u8 *trackInfo;

void func_801C4BD4(u8 arg0, s8 *arg1, u8 *arg2, u8 *arg3)
{
    u8 n;
    s8 kind;
    s32 col;
    s32 row;

    do {
    if (trackPoints[arg0].c == 0) { *arg1 = *arg2 = 0x7F; return; }
    } while (0);
    col = trackPoints[arg0].c;
    row = trackPoints[arg0].d;
    n = D_801C7AD7[row][col];
    if (n == 0xFF) { *arg1 = *arg2 = 0x7F; return; }
    if (*trackInfo == 3) {
        kind = trackPoints[n].e;
    } else {
        kind = trackPoints[n].e - 0x2E;
    }
    if ((kind >= 0 && kind <= 4) || (kind >= 0x16 && kind <= 0x1A) || kind == 0x2C) {
        if ((trackPoints[arg0].b == 0 && trackPoints[n].b == 0x3C) || (trackPoints[arg0].b == 0x3C && trackPoints[n].b == 0x78)) {
            *arg1 = trackPoints[arg0].c - 1;
            *arg2 = trackPoints[arg0].d;
            *arg3 = 1;
        }
    } else if ((kind >= 0xD && kind <= 0xF) || (kind >= 0x13 && kind <= 0x15)) {
        if ((trackPoints[arg0].b == 0 && trackPoints[n].b == 0x3C) || (trackPoints[arg0].b == 0x3C && trackPoints[n].b == 0x78)) {
            *arg1 = trackPoints[arg0].c - 1;
            *arg2 = trackPoints[arg0].d;
            *arg3 = 0xFF;
        }
    } else if (kind >= 0x1B && kind <= 0x1F) {
        if (trackPoints[arg0].b == trackPoints[n].b) {
            *arg1 = trackPoints[arg0].c - 1;
            *arg2 = trackPoints[arg0].d;
            *arg3 = 1;
        }
    }
}

