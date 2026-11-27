typedef struct {
    s16 x;
    s16 y;
    s16 z;
    u16 flag;
    s16 s;
    s16 t;
    u8 r;
    u8 g;
    u8 b;
    u8 a;
} Vtx;
typedef struct {
    u8 state;
    u8 pad1;
    u16 max;
    u16 timer;
    u8 f6;
    u8 f7;
    u8 f8;
    u8 alpha;
} Fade;
typedef struct {
    Fade *fade;
    u8 pad[0x60];
} FadeSlot;
typedef struct {
    u8 pad0[0x2128];
    s16 left;
    s16 top;
    s16 right;
    s16 bottom;
} Game;
typedef struct {
    u8 pad0[0x20];
    s16 unk20;
} Audio;
extern Vtx D_80187D00[2][224];
extern u8 D_3B7C00[];
extern u8 D_3E4880[];
extern u8 D_802D6890[];
extern f32 D_802210C8[];
extern Audio D_8006FAF0;
extern Game D_800DB1B8;
extern FadeSlot D_8011F350[];
extern u16 D_8018BC3C;
extern u16 D_80301BE0;
void func_800294A0(void *, void *, s32);
u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_801DDA5C(void);
void func_80231A0C(void);
void func_801D5A90();
void func_8015A9CC();
void func_8015B344();
void func_801E3038();

void func_8015B82C(void)
{
    s32 i;
    s32 j;
    s32 k;
    s32 n;

    func_800294A0(D_3B7C00, D_802D6890, D_3E4880 - D_3B7C00);
    D_80301BE0 = 0xFFFF;
    func_80231A0C();
    D_802210C8[0] = 170.0f;
    D_802210C8[1] = -100.0f;
    D_802210C8[2] = 40.0f;
    D_802210C8[3] = 120.0f;
    D_802210C8[4] = -97.0f;
    D_802210C8[5] = 0.0f;
    D_802210C8[6] = 0.0f;
    D_802210C8[7] = 1.0f;
    D_802210C8[8] = 0.0f;
    D_8006FAF0.unk20 = 1;
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, func_801D5A90, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    D_8011F350[D_8018BC3C].fade->state = 1;
    D_8011F350[D_8018BC3C].fade->max = 0x50;
    D_8011F350[D_8018BC3C].fade->f6 = 0;
    D_8011F350[D_8018BC3C].fade->f7 = 0;
    D_8011F350[D_8018BC3C].fade->f8 = 0;
    D_800DB1B8.left = 0x10;
    D_800DB1B8.top = 0x20;
    D_800DB1B8.right = 0x130;
    D_800DB1B8.bottom = 0xD0;
    for (j = 0; j < 14; j++) {
        for (i = 0; i < 16; i++) {
            n = i + j * 16;
            if (i == 0 || i == 15 || j == 0 || j == 13) {
                for (k = 0; k < 2; k++) {
                    D_80187D00[k][n].x = i * 160;
                    D_80187D00[k][n].y = -j * 150;
                    D_80187D00[k][n].z = 0;
                    D_80187D00[k][n].flag = 0;
                    D_80187D00[k][n].s = 0;
                    D_80187D00[k][n].t = 0;
                    D_80187D00[k][n].r = 0;
                    D_80187D00[k][n].g = 0;
                    D_80187D00[k][n].b = 0x7F;
                    D_80187D00[k][n].a = 0xFF;
                }
            } else {
                for (k = 0; k < 2; k++) {
                    D_80187D00[k][n].x = i * 160;
                    D_80187D00[k][n].y = -j * 150;
                    D_80187D00[k][n].z = 0;
                    D_80187D00[k][n].flag = 0;
                    D_80187D00[k][n].s = (i - 1) * 1280;
                    D_80187D00[k][n].t = (j - 1) * 704;
                    D_80187D00[k][n].r = 0;
                    D_80187D00[k][n].g = 0;
                    D_80187D00[k][n].b = 0x7F;
                    D_80187D00[k][n].a = 0xFF;
                }
            }
        }
    }
    func_800DE41C(0, 0, 3, 0, 0x71, 0xFF, 0, func_8015A9CC, func_8015B344, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.1f, 0.1f);
    func_800DE41C(0, 0, 3, 0, 0xC0, 0xFF, 0, func_801E3038, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.1f, 0.1f, 0.1f);
    func_801DDA5C();
}
