extern u16 objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void updatePlayerFade();
extern void func_801CEC2C();
extern u8 playerFadeData[];
extern u16 D_80190CB4;
typedef struct {
    u8 b0; u8 pad1; u16 f2; u16 f4; u8 b6; u8 b7; u8 b8; u8 b9; u16 fA; u16 fC; u16 fE; u16 f10;
} Data;
typedef struct { Data *data; u8 pad4[0x60]; } Ent;
extern Ent D_8011F350[];
typedef struct { u8 pad[0x2110]; u16 v[4]; } Src;
extern Src sRowBoard;

/* Spawns a row-board object, stores its id in D_80190CB4, and fills its data record from the arguments and sRowBoard.v[0..3]. */
void spawnRowBoardEntry(s32 valA, s32 valB, s32 valC, s32 valD, u8 flags)
{
    u16 *p = &D_80190CB4;
    *p = objCreate(0, 0, 3, 0, flags, 0xFF, 0, updatePlayerFade, func_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8011F350[*p].data = (Data *) playerFadeData;
    D_8011F350[*p].data->b0 = 0;
    D_8011F350[*p].data->f2 = 0x46;
    D_8011F350[*p].data->f4 = 0;
    D_8011F350[*p].data->b6 = valA;
    D_8011F350[*p].data->b7 = valB;
    D_8011F350[*p].data->b8 = valC;
    D_8011F350[*p].data->b9 = valD;
    D_8011F350[*p].data->fA = sRowBoard.v[0];
    D_8011F350[*p].data->fC = sRowBoard.v[1];
    D_8011F350[*p].data->fE = sRowBoard.v[2];
    D_8011F350[*p].data->f10 = sRowBoard.v[3];
}
