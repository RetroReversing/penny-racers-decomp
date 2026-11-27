typedef struct { s8 a, b, c, d, e; } Rec5;
typedef struct { u8 a, b; } Pair;
extern u8 D_8019E400[];
extern u8 D_8019E4B8[];
extern u8 D_801C5E9C[];
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

void func_801AEC94(void)
{
    u16 i;
    u8 j;

    D_801C7AB8 = 4;
    blockDirection = 4;
    if (D_801C5EA1 == 0) {
        cursorY = 0xB;
        cursorX = 0xB;
        D_801C5EA0 = 0;
        {
            u8 *p = D_801C5E9E;
            *p++ = 0;
            *p = 0;
        }
    } else {
        u8 *p = (u8 *)D_801C7082;
        cursorX = *p++;
        cursorY = *p;
    }
    trackInfo = D_801C5E9C;
    trackPointEntryCount = 0;
    for (i = 0; i < 0x240; i++) {
        D_801C6BE0[i] = 0xFFFF;
        trackPointIndexByCell[i] = 0xFF;
    }
    for (i = 0; i < 0xC8; i++) {
        for (j = 0; j < 4; j++) {
            trackPointLinks[i][j] = 0xFFFF;
        }
        if (D_801C5EA1 == 0) {
            Rec5 *t = trackPointTable;
            Rec5 *r = &t[i];
            r->a = 4;
            r->b = 0;
            r->c = -1;
            r->d = -1;
            r->e = -1;
        }
    }
    func_801D65BC(7);
    func_8021F5F0();
    func_801AEEE8();
    setBoardCameras();
    objCreate(0, 0, 3, 0, 0x42, 0xFF, 0, 0, D_8019E400, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x50, 0xFF, 0, 0, D_8019E4B8, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
