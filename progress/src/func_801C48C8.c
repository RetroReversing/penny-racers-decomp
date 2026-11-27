typedef struct { u8 a; u8 b; s8 c; s8 d; u8 e; } Rec407C;
extern Rec407C trackPoints[];
extern u8 D_801C7AC0[][24];
extern u8 *trackInfo;

void func_801C48C8(u8 arg0, s8 *arg1, u8 *arg2, u8 *arg3)
{
    u8 n;
    s8 kind;
    s32 col;
    s32 row;

    do {
    if (trackPoints[arg0].d == 0) { *arg1 = *arg2 = 0x7F; return; }
    } while (0);
    col = trackPoints[arg0].c;
    row = trackPoints[arg0].d;
    n = D_801C7AC0[row][col];
    if (n == 0xFF) { *arg1 = *arg2 = 0x7F; return; }
    if (*trackInfo == 3) {
        kind = trackPoints[n].e;
    } else {
        kind = trackPoints[n].e - 0x2E;
    }
    if ((kind >= 5 && kind <= 5+4) || (kind >= 0x20 && kind <= 0x20+4) || kind == 0x2A) {
        if ((trackPoints[arg0].b == 0 && trackPoints[n].b == 0x3C) || (trackPoints[arg0].b == 0x3C && trackPoints[n].b == 0x78)) {
            *arg1 = trackPoints[arg0].c;
            *arg2 = trackPoints[arg0].d - 1;
            *arg3 = 0;
        }
    } else if (kind >= 0xA && kind <= 0xA+5) {
        if ((trackPoints[arg0].b == 0 && trackPoints[n].b == 0x3C) || (trackPoints[arg0].b == 0x3C && trackPoints[n].b == 0x78)) {
            *arg1 = trackPoints[arg0].c;
            *arg2 = trackPoints[arg0].d - 1;
            *arg3 = 0xFF;
        }
    } else if (kind >= 0x25 && kind <= 0x25+4) {
        if (trackPoints[arg0].b == trackPoints[n].b) {
            *arg1 = trackPoints[arg0].c;
            *arg2 = trackPoints[arg0].d - 1;
            *arg3 = 0;
        }
    }
}

