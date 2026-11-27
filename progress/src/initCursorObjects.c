typedef struct { u16 st; u8 pad[98]; } Slot;
u16 objCreate(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, s32, f32, s32, f32, f32, f32);
extern Slot D_8011F2F4[];
extern u16 D_801CA13A;
extern u16 D_801C7072;
extern u16 D_801C7D22;
extern u16 D_801C7076;
extern s8 D_801C6B30;
extern s8 D_801C6B31;
extern s8 D_801C6B32;
extern s8 D_801C6B33;
extern s32 D_803147B4;
extern s32 updateCursorBelowObject;
extern s32 updateCursorLeftObject;
extern s32 updateCursorObject;
extern s32 updateCursorOffsetObject;
extern s32 func_8019917C;
extern s32 func_801993D4;
extern s32 func_8019961C;
extern s32 func_80199864;

/* Creates four cursor-follow objects at 0, 90, 180 and 270 degrees and clears the cursor state flags. */ void initCursorObjects(void)
{
    D_801CA13A = objCreate(0, 0, 1, 0, 0x54, 0, &D_803147B4, &updateCursorBelowObject, &func_8019917C, -10000.0f, 10000.0f, -10000.0f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
    D_801C7072 = objCreate(0, 0, 1, 0, 0x54, 0, &D_803147B4, &updateCursorLeftObject, &func_801993D4, -10000.0f, 10000.0f, -10000.0f, 0, 90.0f, 0, 0.5f, 0.5f, 0.5f);
    D_801C7D22 = objCreate(0, 0, 1, 0, 0x54, 0, &D_803147B4, &updateCursorObject, &func_8019961C, -10000.0f, 10000.0f, -10000.0f, 0, 180.0f, 0, 0.5f, 0.5f, 0.5f);
    D_801C7076 = objCreate(0, 0, 1, 0, 0x54, 0, &D_803147B4, &updateCursorOffsetObject, &func_80199864, -10000.0f, 10000.0f, -10000.0f, 0, 270.0f, 0, 0.5f, 0.5f, 0.5f);
    D_8011F2F4[D_801CA13A].st |= 8;
    D_8011F2F4[D_801C7072].st |= 8;
    D_8011F2F4[D_801C7D22].st |= 8;
    D_8011F2F4[D_801C7076].st |= 8;
    D_801C6B33 = 0;
    D_801C6B32 = 0;
    D_801C6B31 = 0;
    D_801C6B30 = 0;
}
