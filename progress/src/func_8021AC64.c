extern u16 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_801CE928();
extern void func_801CEC2C();
extern u8 D_801D59B2[];
extern u16 D_80190CB4;
typedef struct {
    u8 b0; u8 pad1; u16 f2; u16 f4; u8 b6; u8 b7; u8 b8; u8 b9; u16 fA; u16 fC; u16 fE; u16 f10;
} Data;
typedef struct { Data *data; u8 pad4[0x60]; } Ent;
extern Ent D_8011F350[];
typedef struct { u8 pad[0x2110]; u16 v[4]; } Src;
extern Src D_800DB1B8;

void func_8021AC64(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4)
{
    u16 *p = &D_80190CB4;
    *p = func_800DE41C(0, 0, 3, 0, arg4, 0xFF, 0, func_801CE928, func_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8011F350[*p].data = (Data *) D_801D59B2;
    D_8011F350[*p].data->b0 = 0;
    D_8011F350[*p].data->f2 = 0x46;
    D_8011F350[*p].data->f4 = 0;
    D_8011F350[*p].data->b6 = arg0;
    D_8011F350[*p].data->b7 = arg1;
    D_8011F350[*p].data->b8 = arg2;
    D_8011F350[*p].data->b9 = arg3;
    D_8011F350[*p].data->fA = D_800DB1B8.v[0];
    D_8011F350[*p].data->fC = D_800DB1B8.v[1];
    D_8011F350[*p].data->fE = D_800DB1B8.v[2];
    D_8011F350[*p].data->f10 = D_800DB1B8.v[3];
}
