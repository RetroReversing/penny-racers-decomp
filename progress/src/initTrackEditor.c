typedef struct { s8 a, b, c, d, e; } Rec5;
typedef struct { u8 a, b; } Pair;
extern u8 D_8019E400[];
extern u8 D_8019E4B8[];
extern u8 menuCursorPos[];
extern u8 D_801C5E9E[];
extern u8 D_801C5EA0;
extern u8 D_801C5EA1;
extern u8 cursorY;
extern u16 D_801C6BE0[];
extern u8 cursorX;
extern Rec5 trackPointTable[];
extern Pair D_801C7082[];
extern u8 blockDirection;
extern u16 trackPointLinks[][4];
extern void *trackInfo;
extern u8 trackPointEntryCount;
extern u8 D_801C7AB8;
extern u8 trackPointIndexByCell[];
extern void objCreate();

/* Resets the track editor: cursor, cell and track-point tables, then creates the two editor objects. */
void initTrackEditor(void)
{
    u16 index;
    u8 linkIndex;

    D_801C7AB8 = 4;
    blockDirection = 4;
    if (D_801C5EA1 == 0) {
        cursorY = 0xB;
        cursorX = 0xB;
        D_801C5EA0 = 0;
        {
            u8 *cursor = D_801C5E9E;
            *cursor++ = 0;
            *cursor = 0;
        }
    } else {
        u8 *cursor = (u8 *)D_801C7082;
        cursorX = *cursor++;
        cursorY = *cursor;
    }
    trackInfo = menuCursorPos;
    trackPointEntryCount = 0;
    for (index = 0; index < 0x240; index++) {
        D_801C6BE0[index] = 0xFFFF;
        trackPointIndexByCell[index] = 0xFF;
    }
    for (index = 0; index < 0xC8; index++) {
        for (linkIndex = 0; linkIndex < 4; linkIndex++) {
            trackPointLinks[index][linkIndex] = 0xFFFF;
        }
        if (D_801C5EA1 == 0) {
            Rec5 *points = trackPointTable;
            Rec5 *point = &points[index];
            point->a = 4;
            point->b = 0;
            point->c = -1;
            point->d = -1;
            point->e = -1;
        }
    }
    func_801D65BC(7);
    func_8021F5F0();
    func_801AEEE8();
    setBoardCameras();
    objCreate(0, 0, 3, 0, 0x42, 0xFF, 0, 0, D_8019E400, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x50, 0xFF, 0, 0, D_8019E4B8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
