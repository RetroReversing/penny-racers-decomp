extern void gfxSetup2DState(void *);
extern void gfxSetPrimColor(void *, s32, s32, s32, s32);
extern void gfxDrawSprite(void *, s16, s16, s32, s32);
extern u8 D_8021F032[];
typedef struct { f32 x; f32 y; u8 pad[0x5C]; } Rec;
extern Rec D_8011F320[];

void func_802155CC(void *arg0, u16 arg1) {
    u8 i;
    u8 j;
    gfxSetup2DState(arg0);
    gfxSetPrimColor(arg0, D_8021F032[0], D_8021F032[1], D_8021F032[2], 0xFF);
    
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 6; j++) {
            gfxDrawSprite(arg0, (s32)D_8011F320[arg1].x + (s16)((i << 6) - 0x40), (s32)D_8011F320[arg1].y + (s16)((j << 6) - 0x40), 0xB, 0);
        }
    }
}
