typedef struct { u8 unk0; u8 unk1; u16 unk2; u16 unk4; u8 pad6[7]; u8 unkD; u8 padE[0x18 - 0xE]; f32 x; f32 y; f32 z; u8 pad24[0x3E - 0x24]; u16 st; u8 pad40[0x24]; } Car;
typedef struct { u8 v; u8 pad[0x63]; } Saved;
typedef struct { s32 v; u8 pad[0x6C]; } PadS;
typedef struct { u8 unk0; u8 unk1; u8 unk2; u8 unk3; u8 unk4; } Slot;
typedef struct { u8 unk0; u8 unk1; u8 unk2; u8 unk3; } MenuState;
typedef struct { u8 pad[8]; } Row;
typedef struct { u8 f0; u8 f1; u8 pad2[2]; Row *f4; u8 pad8[8]; } Part;
typedef struct { s16 a; u8 pad[0x26]; s16 b; } Two;
typedef struct { u16 a[4]; } Four;
extern Car D_8011F2F0[];
extern Saved D_8011F32F[];
typedef struct { u8 pad0[0x2108]; s16 a; u8 pad[0x26]; s16 b; } Mode;
extern Mode sRowBoard;
extern PadS btnPlayPressed[];
extern PadS btnStopPressed[];
extern Slot trackPointTable[];
extern MenuState *trackInfo;
extern u8 D_801C5EA0;
extern u16 D_801C5EA4;
extern u16 D_801C6BB4;
extern s8 cursorY;
extern u16 D_801C6BE0[];
extern u8 D_801C7060;
extern u16 D_801C7066;
extern u8 cursorX;
extern u8 D_801C7070;
extern u16 hudSlotIndex;
extern u16 D_801C7078;
extern u8 hudVisible;
extern u8 D_801C7468;
extern u16 trackPointLinks[][4];
extern u8 hudGlyph;
extern s8 D_801C7AB5;
extern u8 trackPointEntryCount;
extern u8 D_801C7AB8;
extern u8 D_801C7ABC;
extern Row *D_801C7AC4;
extern u8 trackPointIndexByCell[];
extern u16 boardCursorObj;
extern u16 D_801C7D1A[];
extern u16 D_801C7D24;
extern Part D_801C7D30[];
extern u8 D_801CA130;
extern s8 D_801CA138;
extern Row D_8031445C[];
void updateBoardCamera(u16);
void moveBoardCursor(s32);
void func_8019E814(u16);
void func_801A03F4(u16);
u8 func_801C3418(void);
u8 func_801C1CA4(s8);
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
u8 func_80190D40(s8);
void func_801BB1F0(u8);
void func_801A5610(void);
void playMenuSound(s32);
u8 func_801A0590(void);
void func_801BD7E8(void);
void compactTrackPoints(u8);

#define SLOT trackPointTable[D_801CA130]
#define VEC D_8011F2F0[boardCursorObj]
#define FX ((f32)(s8)cursorX * 400.0f * 0.5f)
#define FZ ((f32)cursorY * 400.0f * 0.5f)
#define OTHERS (D_801C7078 != D_801C6BB4 && D_801C7078 != D_801C7066)
#define CLEAR_NEW() \
    for (i = 0; i < 4; i++) { \
        if (D_801C7D1A[i] != 0xFFFF) { \
            D_8011F2F0[D_801C7D1A[i]].unkD = 2; \
            D_801C7D1A[i] = 0xFFFF; \
        } \
    }
#define CLEAR_SLOT() \
    for (i = 0; i < 4; i++) { \
        if (trackPointLinks[D_801CA130][i] != 0xFFFF) { \
            D_8011F2F0[trackPointLinks[D_801CA130][i]].unkD = 2; \
            trackPointLinks[D_801CA130][i] = 0xFFFF; \
            trackPointEntryCount--; \
        } \
    }
#define FULL() \
    playMenuSound(0x3E); \
    D_801C5EA4 = 0; \
    D_8011F2F0[hudSlotIndex].unk0 = D_8011F32F[hudSlotIndex].v; \
    D_8011F2F0[hudSlotIndex].st = 0xD
#define KEEP() \
    SLOT.unk0 = D_801C7AB8
#define FINISH() \
    SLOT.unk2 = cursorX; \
    SLOT.unk3 = cursorY; \
    SLOT.unk4 = hudGlyph; \
    func_801BB1F0(D_801CA130)
#define DONE() \
    trackInfo->unk3 = 0; \
    D_801C5EA0 = 0; \
    playMenuSound(0x40)
#define TAIL() \
    D_8011F2F0[D_801C6BE0[D_801C7078]].y = (f32)D_801C7070 * 0.5f; \
    KEEP(); \
    SLOT.unk1 = D_801C7070; \
    FINISH(); \
    DONE()
#define PICK() \
    D_801C7AC4 = &D_8031445C[(s8)hudGlyph]; \
    func_801BD7E8()

void func_801C1DC0(u16 arg0)
{
    u8 cost;
    u8 next;
    u8 id;
    u8 i;
    u16 e;
    u8 unused[0x50];

    if (hudVisible == 0) {
        sRowBoard.a = 1;
        sRowBoard.b = 1;
        updateBoardCamera(arg0);
        moveBoardCursor(arg0);
        D_8011F2F0[D_801C7D24].x = 0.0f;
        D_8011F2F0[D_801C7D24].y = 10000.0f;
        D_8011F2F0[D_801C7D24].z = 0.0f;
        D_801C7078 = (s8)cursorX + cursorY * 0x18;
        D_801CA130 = func_801C3418();
        D_801C7AB8 = SLOT.unk0;
        cost = func_801C1CA4(SLOT.unk4);
        if (D_801CA130 == trackInfo->unk2) {
            VEC.x = FX;
            VEC.y = 0.0f;
            VEC.z = FZ;
        } else {
            if (trackInfo->unk0 == 3) {
                id = SLOT.unk4;
            } else {
                id = SLOT.unk4 - 0x2E;
            }
            if ((u8)(id - 0x16) < 0x14) {
                VEC.x = FX;
                VEC.y = (f32)(SLOT.unk1 + 0x3C) * 0.5f;
                VEC.z = FZ;
            } else {
                VEC.x = FX;
                VEC.y = (f32)SLOT.unk1 * 0.5f;
                VEC.z = FZ;
            }
        }
        if (D_801CA138 != 0) {
            next = func_801C1CA4(hudGlyph);
            if (D_801CA130 == trackInfo->unk2) {
                if (trackPointEntryCount + next + 1 < 0xC9) {
                    D_801C7D30[D_801C7078].f0 = 0;
                    D_801C7D30[D_801C7078].f1 = 1;
                    D_801C7D30[D_801C7078].f4 = &D_8031445C[(s8)hudGlyph];
                    e = objCreate(0, 0, 2, 0, 0x5A, 0xFF, &D_801C7D30[D_801C7078], 0, 0,
                                      FX, 0.0f, FZ, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
                    D_8011F2F0[e].unk4 |= 8;
                    D_801C6BE0[D_801C7078] = e;
                    trackPointIndexByCell[D_801C7078] = trackInfo->unk2;
                    D_8011F2F0[e].y = (f32)func_80190D40(hudGlyph) * 0.5f;
                    (&SLOT)->unk0 = D_801C7AB8;
                    (&SLOT)->unk1 = (u8)D_8011F2F0[D_801C6BE0[D_801C7078]].y * 2;
                    FINISH();
                    trackInfo->unk2++;
                    trackPointEntryCount++;
                    DONE();
                } else {
                    FULL();
                }
            } else {
                if (D_801C7AB5 != 0) {
                    func_801A5610();
                    if (OTHERS) {
                        D_801C7D30[D_801C7078].f4 = &D_8031445C[(s8)hudGlyph];
                        CLEAR_SLOT();
                    }
                    D_801C7AB5 = 0;
                    TAIL();
                } else if (trackPointEntryCount - cost + next >= 0xC9) {
                    FULL();
                } else {
                    if (OTHERS) {
                        D_801C7D30[D_801C7078].f4 = &D_8031445C[(s8)hudGlyph];
                        CLEAR_SLOT();
                    }
                    TAIL();
                }
            }
            D_801CA138 = 0;
        }
        if (btnPlayPressed[arg0].v == 1 && btnStopPressed[arg0].v == 0) {
            if (D_801CA130 == trackInfo->unk2) {
                if (trackPointEntryCount >= 0xC8) {
                    FULL();
                } else {
                    playMenuSound(0x3D);
                    D_801C7ABC = 0;
                    if (trackInfo->unk0 == 3) {
                        hudGlyph = 0;
                    } else {
                        hudGlyph = 0x2E;
                    }
                    D_801C7468 = D_801C7070 = func_80190D40(hudGlyph);
                    CLEAR_NEW();
                    PICK();
                    hudVisible = 1;
                }
            } else {
                playMenuSound(0x3D);
                D_801C7ABC = func_801A0590();
                hudGlyph = SLOT.unk4;
                D_801C7468 = D_801C7070 = SLOT.unk1;
                CLEAR_NEW();
                PICK();
                hudVisible = 1;
            }
        } else if (btnPlayPressed[arg0].v == 0 && btnStopPressed[arg0].v == 1) {
            if (D_801CA130 != trackInfo->unk2 && OTHERS) {
                CLEAR_SLOT();
                if (D_801C6BE0[D_801C7078] != 0xFFFF) {
                    D_8011F2F0[D_801C6BE0[D_801C7078]].unkD = 2;
                }
                D_801C6BE0[D_801C7078] = 0xFFFF;
                trackPointIndexByCell[D_801C7078] = 0xFF;
                compactTrackPoints(D_801CA130);
                playMenuSound(0x3F);
                trackInfo->unk3 = 0;
                D_801C5EA0 = 0;
            }
        }
        D_801C7060 = 0;
    } else if (hudVisible == 1) {
        sRowBoard.a = 2;
        sRowBoard.b = 2;
        func_8019E814(arg0);
        func_801A03F4(arg0);
        D_8011F2F0[D_801C7D24].x = 0.0f;
        D_8011F2F0[D_801C7D24].y = 0.0f;
        D_8011F2F0[D_801C7D24].z = 0.0f;
        if (btnPlayPressed[arg0].v == 1 && btnStopPressed[arg0].v == 0) {
            if (D_801CA130 == trackInfo->unk2) {
                D_801CA138 = 1;
            }
            CLEAR_NEW();
            hudVisible = 0;
        } else if (btnPlayPressed[arg0].v == 0 && btnStopPressed[arg0].v == 1) {
            if (D_801CA138 != 0) {
                if (D_801CA130 == trackInfo->unk2) {
                    if (trackInfo->unk0 == 3) {
                        hudGlyph = 0;
                    } else {
                        hudGlyph = 0x2E;
                    }
                    D_801C7070 = 0;
                } else {
                    hudGlyph = SLOT.unk4;
                    D_801C7070 = SLOT.unk1;
                }
                CLEAR_NEW();
                PICK();
                D_801CA138 = 0;
                if (D_801C7AB5 != 0) {
                    D_801C7AB5 = 0;
                }
                if (D_801C7ABC == 0) {
                    D_801C7ABC = func_801A0590();
                }
            } else {
                CLEAR_NEW();
                hudVisible = 0;
            }
            playMenuSound(0x3A);
        }
        D_801C7060 = 1;
    }
}
