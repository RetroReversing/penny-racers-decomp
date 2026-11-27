typedef struct {
    u8 *data;
    u8 pad[96];
} ObjDataSlot;

extern ObjDataSlot D_8011F350[];
extern u16 playerFadeObj;
extern short D_800DD2C0;
extern u16 objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 updatePlayerFade[];
extern u8 func_801CEC2C[];
extern u8 playerFadeData;

/* Creates the player fade object and fills its data block: a 70-unit fade from the default colour, with a position picked by D_800DD2C0. */
/* Creates the player fade object and fills its data block (colour, timing and a position chosen by D_800DD2C0). */ void spawnPlayerFade(void)
{
    playerFadeObj = objCreate(0, 0, 3, 0, 0x80, 0xFF, 0, updatePlayerFade, func_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8011F350[playerFadeObj].data = &playerFadeData;
    D_8011F350[playerFadeObj].data[0] = 0;
    *(s16 *)(D_8011F350[playerFadeObj].data + 2) = 0x46;
    *(s16 *)(D_8011F350[playerFadeObj].data + 4) = 0;
    D_8011F350[playerFadeObj].data[6] = 0xFF;
    D_8011F350[playerFadeObj].data[7] = 0xFF;
    D_8011F350[playerFadeObj].data[8] = 0xFF;
    D_8011F350[playerFadeObj].data[9] = 0xC8;
    *(s16 *)(D_8011F350[playerFadeObj].data + 0xA) = 0x6E;
    if (D_800DD2C0 == 1) {
        *(s16 *)(D_8011F350[playerFadeObj].data + 0xC) = 0xDB;
    } else {
        *(s16 *)(D_8011F350[playerFadeObj].data + 0xC) = 0x75;
    }
    *(s16 *)(D_8011F350[playerFadeObj].data + 0xE) = 0x64;
    *(s16 *)(D_8011F350[playerFadeObj].data + 0x10) = 5;
}
