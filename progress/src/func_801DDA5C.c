typedef struct {
    u8 *p;
    u8 pad[96];
} Slot;
extern Slot D_8011F350[];
extern u16 D_801E9B32;
extern u16 D_801E979C;
extern u8 D_801E9748[];
extern u16 objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_800DF170(u16);
extern u8 updatePlayerFade[];
extern u8 func_801CEC2C[];
extern u8 func_801D8EF0[];
extern u8 func_801DAD68[];

void func_801DDA5C(void)
{
    D_801E9B32 = objCreate(0, 0, 3, 0, 0xE1, 0xFF, 0, updatePlayerFade, func_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8011F350[D_801E9B32].p = D_801E9748;
    func_800DF170(D_801E9B32);
    D_8011F350[D_801E9B32].p[0] = 0;
    *(s16 *)(D_8011F350[D_801E9B32].p + 2) = 0x14;
    *(s16 *)(D_8011F350[D_801E9B32].p + 4) = 0;
    D_8011F350[D_801E9B32].p[6] = 0;
    D_8011F350[D_801E9B32].p[7] = 0;
    D_8011F350[D_801E9B32].p[8] = 0;
    D_8011F350[D_801E9B32].p[9] = 0;
    *(s16 *)(D_8011F350[D_801E9B32].p + 0xA) = 0;
    *(s16 *)(D_8011F350[D_801E9B32].p + 0xC) = 0;
    *(s16 *)(D_8011F350[D_801E9B32].p + 0xE) = 0;
    *(s16 *)(D_8011F350[D_801E9B32].p + 0x10) = 0;
    D_801E979C = objCreate(0, 0, 3, 0, 0xEA, 0xFF, 0, func_801D8EF0, func_801DAD68, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
