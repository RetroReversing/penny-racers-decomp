typedef struct { u8 unk0; u8 pad1[0x18 - 1]; f32 x; f32 y; f32 z; u8 pad24[0x3E - 0x24]; u16 st; u8 unk3F; u8 pad41[0x60 - 0x41]; u8 *p60; } Car;
typedef struct { s32 v; u8 pad4[0x2C]; s32 push; u8 pad34[0x3C]; } PadS;
typedef struct { u8 unk0; u8 unk1; u8 unk2; u8 unk3; } MenuState;
extern Car D_8011F2F0[];
extern PadS D_801E9990[];
extern PadS D_801E9994[];
extern MenuState *trackInfo;
extern u16 D_8018BC3C;
extern u8 D_801C5EA1;
extern u8 D_801C5EA2;
extern u16 D_801C5EA4;
extern u8 D_801C6B24, D_801C6B25, D_801C6B26, D_801C6B28, D_801C6B29, D_801C6B2A, D_801C6B2B, D_801C6B2C;
extern s8 cursorY;
extern u8 D_801C7060;
extern u8 cursorX;
extern u16 D_801C7078;
extern u8 D_801C7AB8;
extern u16 D_801C7ABA;
extern u8 D_801C7ABD;
extern u8 D_801C7AD0;
extern u16 D_801C7D18;
extern u8 D_801CA130;
void func_801AEC94(void);
void updateMenuObjects(u16);
void initTrackObjects(void);
void func_8019F7C0(u16);
u8 func_80192B34(u16);
u8 func_80193160(u16);
u8 placePieceAtCursor(u16);
u8 func_80194024(u16);
void func_801953F0(u16);
void func_801AF8CC(void);
u8 func_801C3418(void);
void func_801C1DC0(u16);
void func_801B77F8(void);
void playMenuSound(s32);
u8 func_8019A5A0(void);
#define ME D_8011F2F0[arg0]
#define NEXT D_8011F2F0[D_801C7ABA]
#define VEC D_8011F2F0[D_801C7D18]
void func_80196448(u16 arg0)
{
    u16 player;

    D_801C7078 = (s8)cursorX + cursorY * 0x18;
    player = 0;
    if (D_801C7AD0 < 0x14) {
        D_801C7ABD -= 0xC;
    } else if ((u32)(D_801C7AD0 - 0x14) < 0x14) {
        D_801C7ABD += 0xC;
    }
    D_801C7AD0++;
    if (D_801C7AD0 == 0x28) {
        D_801C7AD0 = 0;
    }
    switch (ME.st) {
    case 0:
        func_801AEC94();
        D_801C6B24 = 0;
        D_801C6B25 = 4;
        D_801C6B26 = 4;
        D_801C6B2C = 0;
        D_801C6B2B = 0;
        D_801C6B2A = 0;
        D_801C6B29 = 0;
        D_801C6B28 = 0;
        ME.st = 1;
        break;
    case 1:
        updateMenuObjects(0);
        if (D_801C5EA1) { ME.st = 2; } else { ME.st = 3; }
        break;
    case 2:
        initTrackObjects();
        ME.st = 3;
        break;
    case 3:
        if (*D_8011F2F0[D_8018BC3C].p60 == 0) {
            if (D_801C5EA1) { ME.st = 0xE; } else { ME.st = 4; D_801C5EA4 = 0; }
        }
        break;
    case 4:
        func_8019F7C0(0);
        {
         
        D_801C5EA4++;
        if (D_801C5EA4 == 0xB4) {
            ME.st = 5; D_801C5EA4 = 0;
        } else if (D_801E9990[player].v == 1 || D_801E9994[player].v == 1) {
                ME.st = 5; D_801C5EA4 = 0;
        }
        }
        break;
    case 5:
        
        ME.st = func_80192B34(player);
        if (D_801E9990[player].push == 1) {
            func_801B77F8();
            ME.unk0 = ME.st;
            ME.st = 0x14;
            NEXT.st = 1;
            D_801C5EA2 = 3;
            NEXT.unk0 = 0x60;
            playMenuSound(0x41);
        }
        break;
    case 6:
        func_8019F7C0(0);
        VEC.x = (s8)cursorX * 400.0f * 0.5f;
        VEC.y = 0;
        VEC.z = cursorY * 400.0f * 0.5f;
        {
         
        D_801C5EA4++;
        if (D_801C5EA4 == 0xF0) {
            if (trackInfo->unk1 == 5) { ME.st = 7; D_801C5EA4 = 0; } else { ME.st = 8; D_801C5EA4 = 0; }
        } else if (D_801E9990[player].v == 1 || D_801E9994[player].v == 1) {
                if (trackInfo->unk1 == 5) { ME.st = 7; D_801C5EA4 = 0; } else { ME.st = 8; D_801C5EA4 = 0; }
        }
        }
        break;
    case 7:
        
        ME.st = func_80193160(player);
        if (D_801E9990[player].push == 1) {
            func_801B77F8();
            ME.unk0 = ME.st;
            ME.st = 0x14;
            NEXT.st = 1;
            D_801C5EA2 = 3;
            NEXT.unk0 = 0x60;
            playMenuSound(0x41);
        }
        break;
    case 8:
        
        ME.st = placePieceAtCursor(player);
        if (D_801E9990[player].push == 1) {
            func_801B77F8();
            ME.unk0 = ME.st;
            ME.st = 0x14;
            NEXT.st = 1;
            D_801C5EA2 = 3;
            NEXT.unk0 = 0x60;
            playMenuSound(0x41);
        }
        break;
    case 9:
        func_8019F7C0(0);
        VEC.x = (s8)cursorX * 400.0f * 0.5f;
        VEC.y = 0;
        VEC.z = cursorY * 400.0f * 0.5f;
        {
         
        D_801C5EA4++;
        if (D_801C5EA4 == 0xB4) {
            ME.st = 10; D_801C5EA4 = 0;
        } else if (D_801E9990[player].v == 1 || D_801E9994[player].v == 1) {
                ME.st = 10; D_801C5EA4 = 0;
        }
        }
        break;
    case 10:
        
        ME.st = func_80194024(player);
        if (D_801E9990[player].push == 1) {
            func_801B77F8();
            ME.unk0 = ME.st;
            ME.st = 0x14;
            NEXT.st = 1;
            D_801C5EA2 = 3;
            NEXT.unk0 = 0x60;
            playMenuSound(0x41);
        }
        break;
    case 11:
        func_8019F7C0(0);
        {
         
        D_801C5EA4++;
        if (D_801C5EA4 == 0xF0) {
            ME.st = 12; D_801C5EA4 = 0;
        } else if (D_801E9990[player].v == 1 || D_801E9994[player].v == 1) {
                ME.st = 12; D_801C5EA4 = 0;
        }
        }
        break;
    case 12:
        
        func_801953F0(player);
        if (D_801E9990[player].push == 1) {
            func_801B77F8();
            ME.unk0 = ME.st;
            ME.st = 0x14;
            NEXT.st = 1;
            D_801C5EA2 = 3;
            NEXT.unk0 = 0x60;
            playMenuSound(0x41);
        }
        break;
    case 13:
        {
         
        D_801C5EA4++;
        if (D_801C5EA4 == 0xB4) {
            ME.st = ME.unk0; D_801C5EA4 = 0;
        } else if (D_801E9990[player].v == 1 || D_801E9994[player].v == 1) {
                ME.st = ME.unk0; D_801C5EA4 = 0;
        }
        }
        break;
    case 14:
        func_8019F7C0(0);
        func_801AF8CC();
        D_801C5EA4 = 0;
        ME.st = 0xF;
        break;
    case 15:
        func_8019F7C0(0);
        VEC.x = (s8)cursorX * 400.0f * 0.5f;
        VEC.y = 0;
        VEC.z = cursorY * 400.0f * 0.5f;
        D_801C7078 = (s8)cursorX + cursorY * 0x18;
        D_801CA130 = func_801C3418();
        {
         
        D_801C5EA4++;
        if (D_801C5EA4 == 0x12C) {
            ME.st = 16; D_801C5EA4 = 0;
        } else if (D_801E9990[player].v == 1 || D_801E9994[player].v == 1) {
                ME.st = 16; D_801C5EA4 = 0;
        }
        }
        break;
    case 16:
        
        func_801C1DC0(player);
        if (D_801C7060 == 0 && D_801E9990[player].push == 1) {
            func_801B77F8();
            D_801C7AB8 = 4;
            ME.unk0 = ME.st;
            ME.st = 0x14;
            if (trackInfo->unk3 == trackInfo->unk2) {
                NEXT.st = 3;
                D_801C5EA2 = 1;
                NEXT.unk0 = 0x60;
            } else {
                NEXT.st = 2;
                D_801C5EA2 = 0;
                NEXT.unk0 = 0x50;
            }
            playMenuSound(0x41);
        }
        break;
    case 17:
        trackInfo->unk3 = func_8019A5A0();
        ME.st = 0x12;
        break;
    case 18:
        D_801C5EA4++;
        if (D_801C5EA4 == 0xB4) {
            D_801C7078 = (s8)cursorX + cursorY * 0x18;
            D_801CA130 = func_801C3418();
            ME.st = 0x13;
            D_801C5EA4 = 0;
            if (trackInfo->unk3 != trackInfo->unk2) { playMenuSound(0x3E); }
        }
        break;
    case 19:
        {
         
        D_801C5EA4++;
        if (D_801C5EA4 == 0xB4) {
            if (trackInfo->unk3 == trackInfo->unk2) {
                func_801B77F8();
                D_801C7AB8 = 4;
                ME.unk0 = 0x10;
                ME.st = 0x14;
                NEXT.st = 3;
                D_801C5EA2 = 1;
                NEXT.unk0 = 0x60;
            } else {
                ME.st = 0x10;
            }
            D_801C5EA4 = 0;
        } else if (D_801E9990[player].v == 1 || D_801E9994[player].v == 1) {
                if (trackInfo->unk3 == trackInfo->unk2) {
                func_801B77F8();
                D_801C7AB8 = 4;
                ME.unk0 = 0x10;
                ME.st = 0x14;
                NEXT.st = 3;
                D_801C5EA2 = 1;
                NEXT.unk0 = 0x60;
            } else {
                ME.st = 0x10;
            }
            D_801C5EA4 = 0;
        }
        }
        break;
    case 20:
        func_8019F7C0(0);
        break;
    }
}
