typedef struct { u8 pad0[2]; u8 count; } Hdr;
typedef struct { s8 a; s8 b; u8 pad[3]; } Ent;
extern s8 cursorY;
extern s8 cursorX;
extern u16 D_801C7078;
extern Ent D_801C7082[];
extern Hdr *trackInfo;
extern u8 trackPointIndexByCell[];

u8 func_801C3418(void) {
    u8 i;

    if (trackPointIndexByCell[D_801C7078] == 0xFF) {
        return trackInfo->count;
    }
    for (i = 0; i < trackInfo->count; i++) {
        if (cursorX == D_801C7082[i].a && cursorY == D_801C7082[i].b) {
            break;
        }
    }
    return i;
}
