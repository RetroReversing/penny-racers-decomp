typedef struct {
    u8 *p;
    u8 pad[96];
} Slot;

extern Slot D_8011F350[];
extern u16 D_80189C96;
extern short D_800DD2C0;
extern u16 objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 updatePlayerFade[];
extern u8 func_801CEC2C[];
extern u8 D_801D59B2;

void func_80134688(void)
{
    D_80189C96 = objCreate(0, 0, 3, 0, 0x80, 0xFF, 0, updatePlayerFade, func_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8011F350[D_80189C96].p = &D_801D59B2;
    D_8011F350[D_80189C96].p[0] = 0;
    *(s16 *)(D_8011F350[D_80189C96].p + 2) = 0x46;
    *(s16 *)(D_8011F350[D_80189C96].p + 4) = 0;
    D_8011F350[D_80189C96].p[6] = 0xFF;
    D_8011F350[D_80189C96].p[7] = 0xFF;
    D_8011F350[D_80189C96].p[8] = 0xFF;
    D_8011F350[D_80189C96].p[9] = 0xC8;
    *(s16 *)(D_8011F350[D_80189C96].p + 0xA) = 0x6E;
    if (D_800DD2C0 == 1) {
        *(s16 *)(D_8011F350[D_80189C96].p + 0xC) = 0xDB;
    } else {
        *(s16 *)(D_8011F350[D_80189C96].p + 0xC) = 0x75;
    }
    *(s16 *)(D_8011F350[D_80189C96].p + 0xE) = 0x64;
    *(s16 *)(D_8011F350[D_80189C96].p + 0x10) = 5;
}
