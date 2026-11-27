typedef struct { u8 type; u8 mode; u8 count; } Race;
typedef struct { u8 unk0; u8 h; s8 x; s8 z; s8 type; } Spot;
extern Race *trackInfo;
extern Spot trackPointTable[];
extern u16 D_801C6BE0[];
extern u8 trackPointIndexByCell[];
extern s8 cursorX;
extern s8 cursorY;
extern s8 blockPos[];
extern s8 finishPos[];
extern u8 D_801C7AB7;
extern u8 D_801C746C;
extern s32 func_801C5528();
extern s32 func_801C5664();
extern void findTrackCellAbove();
extern void findPrevTrackNeighbor();
extern void getTrackJoinPoint();
extern void findTrackNeighbor();
extern void getTrackPointLinkUp();
extern void getTrackPointLinkBack();
extern void getTrackPointLinkDown();
extern void getTrackPointLink();

void func_801C3634(u8 arg0, u8 *out1, u8 *out2)
{
    s8 a;
    s8 b;
    u8 c;
    s8 d;
    s8 e;
    u8 f;
    s8 t;

    *out1 = *out2 = trackInfo->count;
    c = f = 4;
    a = d = 0x18;
    b = e = 0x18;
    if (trackInfo->type == 3) {
        t = trackPointTable[arg0].type;
    } else {
        t = trackPointTable[arg0].type - 0x2E;
    }
    if (t >= 0 && t <= 4) {
        findPrevTrackNeighbor(arg0, &a, &b, &c);
        findTrackNeighbor(arg0, &d, &e, &f);
    } else if (t >= 5 && t <= 9) {
        findTrackCellAbove(arg0, &a, &b, &c);
        getTrackJoinPoint(arg0, &d, &e, &f);
    } else if (t >= 10 && t <= 12) {
        findPrevTrackNeighbor(arg0, &a, &b, &c);
        getTrackJoinPoint(arg0, &d, &e, &f);
    } else if (t >= 13 && t <= 15) {
        findTrackNeighbor(arg0, &a, &b, &c);
        getTrackJoinPoint(arg0, &d, &e, &f);
    } else if (t >= 16 && t <= 18) {
        findPrevTrackNeighbor(arg0, &a, &b, &c);
        findTrackCellAbove(arg0, &d, &e, &f);
    } else if (t >= 19 && t <= 21) {
        findTrackNeighbor(arg0, &a, &b, &c);
        findTrackCellAbove(arg0, &d, &e, &f);
    } else if (t >= 22 && t <= 26) {
        getTrackPointLinkBack(arg0, &a, &b, &c);
        findTrackNeighbor(arg0, &d, &e, &f);
    } else if (t >= 27 && t <= 31) {
        findPrevTrackNeighbor(arg0, &a, &b, &c);
        getTrackPointLink(arg0, &d, &e, &f);
    } else if (t >= 32 && t <= 36) {
        getTrackPointLinkUp(arg0, &a, &b, &c);
        getTrackJoinPoint(arg0, &d, &e, &f);
    } else if (t >= 37 && t <= 41) {
        findTrackCellAbove(arg0, &a, &b, &c);
        getTrackPointLinkDown(arg0, &d, &e, &f);
    } else if (t == 42) {
        getTrackJoinPoint(arg0, &d, &e, &f);
    } else if (t == 43) {
        findTrackCellAbove(arg0, &a, &b, &c);
    } else if (t == 44) {
        findTrackNeighbor(arg0, &d, &e, &f);
    } else if (t == 45) {
        findPrevTrackNeighbor(arg0, &a, &b, &c);
    }
    if (a == 0x18 || b == 0x18) {
        *out1 = trackInfo->count;
    } else if (a == 0x7F && b == 0x7F) {
        *out1 = trackInfo->count;
    } else if (D_801C6BE0[a + b * 24] != 0xFFFF) {
        if (a == cursorX && b == cursorY) {
        *out1 = trackPointIndexByCell[d + e * 24];
    } else if (a == blockPos[0] && b == blockPos[1]) {
        if (trackInfo->mode == 5) {
            *out1 = func_801C5528(&a, &b, c);
        } else {
            *out1 = trackPointIndexByCell[a + b * 24];
        }
        D_801C7AB7 = *out1;
    } else if (a == finishPos[0] && b == finishPos[1]) {
        if (trackInfo->mode == 5) {
            *out1 = func_801C5664(&a, &b, c);
        } else {
            *out1 = trackPointIndexByCell[a + b * 24];
        }
        D_801C746C = *out1;
    } else if (c == 0xFF) {
        *out1 = 0xFF;
    } else {
        *out1 = trackPointIndexByCell[a + b * 24];
    }
    } else {
        *out1 = trackInfo->count;
    }
    if (d == 0x18 || e == 0x18) {
        *out2 = trackInfo->count;
    } else if (d == 0x7F && e == 0x7F) {
        *out2 = trackInfo->count;
    } else if (D_801C6BE0[d + e * 24] != 0xFFFF) {
        if (d == cursorX && e == cursorY) {
        *out2 = trackPointIndexByCell[a + b * 24];
    } else if (d == blockPos[0] && e == blockPos[1]) {
        if (trackInfo->mode == 5) {
            *out2 = func_801C5528(&d, &e, f);
        } else {
            *out2 = trackPointIndexByCell[d + e * 24];
        }
        D_801C7AB7 = *out2;
    } else if (d == finishPos[0] && e == finishPos[1]) {
        if (trackInfo->mode == 5) {
            *out2 = func_801C5664(&d, &e, f);
        } else {
            *out2 = trackPointIndexByCell[d + e * 24];
        }
        D_801C746C = *out2;
    } else if (f == 0xFF) {
        *out2 = 0xFF;
    } else {
        *out2 = trackPointIndexByCell[d + e * 24];
    }
    } else {
        *out2 = trackInfo->count;
    }
}
