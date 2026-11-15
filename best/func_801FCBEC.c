typedef struct { u32 w0; u32 w1; } GfxW801FCBEC;
typedef struct { s32 x; s32 y; u8 pad[0x28]; } Cam801FCBEC;
typedef struct { u8 pad[0x798]; Cam801FCBEC cam[4]; } Ctx801FCBEC;
extern u8 *D_8011F340[];
extern Ctx801FCBEC *D_8011F060;
extern u8 D_80126FF6;
extern u32 D_80200220[];

void func_801FCBEC(GfxW801FCBEC **arg0, s32 arg1) {
    if (D_8011F340[(arg1 & 0xFFFF) * 25][0] == 1) {
        {
            GfxW801FCBEC *_g = (*arg0)++;
            _g->w0 = 0x06000000;
            _g->w1 = (u32)D_80200220;
        }
        {
            GfxW801FCBEC *_g = (*arg0)++;
            _g->w0 = ((u32)(((u32)(0xF2) & 0xFF) << 24)) | ((u32)(((u32)(D_8011F060->cam[D_80126FF6].x) & 0xFFF) << 12)) | ((u32)(((u32)(D_8011F060->cam[D_80126FF6].y) & 0xFFF) << 0));
            _g->w1 = ((u32)(((u32)(1) & 0x7) << 24)) | ((u32)(((u32)(D_8011F060->cam[D_80126FF6].x + 0x7C) & 0xFFF) << 12)) | ((u32)(((u32)(D_8011F060->cam[D_80126FF6].y + 0x7C) & 0xFFF) << 0));
        }
    }
}
