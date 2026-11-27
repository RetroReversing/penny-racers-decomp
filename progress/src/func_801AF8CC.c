typedef struct { u8 pad0[2]; u16 flags; u8 pad4[6]; u8 colour; u8 padb[0xD]; f32 x; f32 y; f32 z; u8 pad24[0x40]; } Obj;
typedef struct { u8 a; u8 b; u8 pad[2]; void *p; } Info;
extern Obj D_8011F2F0[];
extern u8 blockPos[];
extern u8 cursorY;
extern u8 D_801C7060;
extern u8 cursorX;
extern u8 D_801C7070;
extern u16 D_801C7072;
extern u16 D_801C7076;
extern u8 hudVisible;
extern u8 D_801C7468;
extern u8 hudGlyph;
extern u8 D_801C7AB5;
extern u8 D_801C7AB8;
extern Info D_801C7AC0;
extern u16 D_801C7D18;
extern u16 D_801C7D1A[];
extern u16 D_801C7D22;
extern u16 D_801C7D24;
extern u8 D_801CA138;
extern u16 D_801CA13A;
extern u8 D_8031445C[];
void func_801B7678();
u16 objCreate(s32, s32, s32, s32, s32, s32, Info *, s32, void (*)(), s32, f32, s32, s32, s32, s32, f32, f32, f32);

void func_801AF8CC(void) {
    u8 i;

    D_801C7AB8 = 4;
    hudVisible = 0;
    D_801C7060 = 0;
    cursorX = blockPos[0];
    cursorY = blockPos[1];
    D_801C7AB5 = 0;
    D_801C7070 = 0;
    D_801C7468 = 0;
    D_801CA138 = 0;
    D_8011F2F0[D_801C7D18].x = (s8) cursorX * 400.0f * 0.5f;
    D_8011F2F0[D_801C7D18].y = 0;
    D_8011F2F0[D_801C7D18].z = (s8) cursorY * 400.0f * 0.5f;
    D_8011F2F0[D_801C7D18].colour = 0x5C;
    D_8011F2F0[D_801CA13A].colour = 0x5C;
    D_8011F2F0[D_801C7072].colour = 0x5C;
    D_8011F2F0[D_801C7D22].colour = 0x5C;
    D_8011F2F0[D_801C7076].colour = 0x5C;
    hudGlyph = 0;
    D_801C7AC0.a = 0;
    D_801C7AC0.b = 1;
    D_801C7AC0.p = D_8031445C;
    D_801C7D24 = objCreate(0, 0, 2, 0, 0x7A, 0xFF, &D_801C7AC0, 0, func_801B7678, 0, 10000.0f, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
    D_8011F2F0[D_801C7D24].flags |= 8;
    for (i = 0; i < 4; i++) {
        D_801C7D1A[i] = 0xFFFF;
    }
}
