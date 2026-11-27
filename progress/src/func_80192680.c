typedef struct {
    u8 pad0[4];
    u16 flags;
    u8 pad6[5];
    u8 layer;
    u8 padC[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad24[0x40];
} Sprite;
extern Sprite D_8011F2F0[];
extern u8 D_801C6B28;
extern u8 D_801C6B29;
extern u8 D_801C6B2A;
extern u8 D_801C6B2B;
extern u8 D_801C6B2C;
extern u16 D_801C6B2E;
extern u16 D_801C7ABA;
extern u16 D_801C7D18;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u8 D_803156C4[];
extern u8 D_801B50B0[];
extern u8 D_801B5F90[];
void func_801B3CB0();
void func_801B3E18();
void func_801B41D8();
void func_801B42C8();
void func_801B4B6C();
void func_801B4CF8();
void func_801973D0();
void func_8019F7C0();
u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_80192680(u16 arg0)
{
    func_8019F7C0(arg0);
    if (D_801C6B28 == 0) {
        D_801C6B2E = func_800DE41C(0, 0, 1, 0, 0x52, 0xFF, D_803156C4, 0, 0,
                                   0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
        D_8011F2F0[D_801C6B2E].flags |= 8;
        D_801C6B28 = 1;
    }
    if (D_801C6B29 == 0) {
        func_801973D0();
        D_801C7D18 = func_800DE41C(0, 0, 3, 0, 0x54, 0xF0, 0, func_801B3E18, func_801B3CB0,
                                   D_801C7068 * 400.0f * 0.5f, 0.0f, D_801C6BB9 * 400.0f * 0.5f,
                                   0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
        D_8011F2F0[D_801C7D18].flags |= 0x20;
        D_8011F2F0[D_801C7D18].layer = 0xC;
        D_801C6B29 = 1;
    }
    if (D_801C6B2A == 0) {
        D_8011F2F0[func_800DE41C(0, 0, 3, 0, 0x41, 0xFF, 0, func_801B41D8, func_801B42C8,
                                 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)].flags |= 0x20;
        D_801C6B2A = 1;
    }
    if (D_801C6B2B == 0) {
        D_8011F2F0[func_800DE41C(0, 0, 3, 0, 0x71, 0, 0, func_801B4B6C, func_801B4CF8,
                                 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)].flags |= 0x20;
        D_801C6B2B = 1;
    }
    if (D_801C6B2C == 0) {
        D_801C7ABA = func_800DE41C(0, 0x50, 3, 0, 0xA2, 0xFF, 0, D_801B50B0, D_801B5F90,
                                   0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        D_8011F2F0[D_801C7ABA].flags |= 0x20;
        D_801C6B2C = 1;
    }
    D_8011F2F0[D_801C7D18].x = D_801C7068 * 400.0f * 0.5f;
    D_8011F2F0[D_801C7D18].y = 0.0f;
    D_8011F2F0[D_801C7D18].z = D_801C6BB9 * 400.0f * 0.5f;
}
