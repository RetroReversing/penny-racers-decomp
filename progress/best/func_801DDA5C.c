u16 func_800DE41C();
s32 func_800DF170();
typedef struct 
{
  u32 f0;
  u8 pad[96];
} Slot_8011F350;
extern Slot_8011F350 D_8011F350[];
extern char D_801E9748[];
extern u16 D_801E979C;
extern u16 D_801E9B32;
extern s32 func_801CE928;
extern s32 func_801CEC2C;
extern s32 func_801D8EF0;
extern s32 func_801DAD68;
void func_801DDA5C(void)
{
  register unsigned temp_v0;
  unsigned temp_v0_2;
  if (D_8011F350[D_801E9B32].f0)
  {
    D_801E9B32 = func_800DE41C(0, 0, 3, 0, 0xE1, 0xFF, 0, &func_801CE928, &func_801CEC2C, 0, 0, 0, 0, 0, (float) 0);
    D_8011F350[D_801E9B32].f0 = D_801E9748;
    func_800DF170(D_801E9B32);
    *((s32 *) D_8011F350[D_801E9B32].f0) = 0;
    temp_v0 = D_801E9B32 * 0x64;
    *((s16 *) (((char *) D_8011F350[D_801E9B32].f0) + 2)) = 0x14;
    *((s16 *) (((char *) D_8011F350[D_801E9B32].f0) + 4)) = 0;
    *((s8 *) (((char *) (D_8011F350 + D_801E9B32)->f0) + 6)) = 0;
    *((s8 *) (((char *) D_8011F350[D_801E9B32].f0) + 9)) = 0;
    *((s8 *) (((char *) D_8011F350[D_801E9B32].f0) + 7)) = 0;
    *((s8 *) (((char *) D_8011F350[D_801E9B32].f0) + 8)) = 0;
    temp_v0_2 = D_801E9B32 * 0x64;
    *((s16 *) (((char *) D_8011F350[D_801E9B32].f0) + 0xA)) = 0;
    *((s16 *) (((char *) (*(&D_8011F350[D_801E9B32])).f0) + 0xC)) = 0;
    *((s16 *) (((char *) D_8011F350[D_801E9B32].f0) + 0xE)) = 0;
    *((s16 *) (((char *) D_8011F350[D_801E9B32].f0) + 0x10)) = 0;
    D_801E979C = func_800DE41C(0, 0, 3, 0, 0xEA, 0xFF, 0, &func_801D8EF0, &func_801DAD68, 0, 0, 0, 0, 0, 0, 0);
  }
  else
  {
    D_801E9B32 = func_800DE41C(0, 0, 3, 0, 0xE1, 0xFF, 0, &func_801CE928, &func_801CEC2C, 0, 0, 0, 0, 0, (float) 0);
    D_8011F350[D_801E9B32].f0 = D_801E9748;
    func_800DF170(D_801E9B32);
    *((s32 *) D_8011F350[D_801E9B32].f0) = 0;
    temp_v0 = D_801E9B32 * 0x64;
    *((s16 *) (((char *) D_8011F350[D_801E9B32].f0) + 2)) = 0x14;
    *((s16 *) (((char *) D_8011F350[D_801E9B32].f0) + 4)) = 0;
    *((s8 *) (((char *) (D_8011F350 + D_801E9B32)->f0) + 6)) = 0;
    *((s8 *) (((char *) D_8011F350[D_801E9B32].f0) + 9)) = 0;
    *((s8 *) (((char *) D_8011F350[D_801E9B32].f0) + 7)) = 0;
    *((s8 *) (((char *) D_8011F350[D_801E9B32].f0) + 8)) = 0;
    temp_v0_2 = D_801E9B32 * 0x64;
    *((s16 *) (((char *) D_8011F350[D_801E9B32].f0) + 0xA)) = 0;
    *((s16 *) (((char *) (*(&D_8011F350[D_801E9B32])).f0) + 0xC)) = 0;
    *((s16 *) (((char *) D_8011F350[D_801E9B32].f0) + 0xE)) = 0;
    *((s16 *) (((char *) D_8011F350[D_801E9B32].f0) + 0x10)) = 0;
    D_801E979C = func_800DE41C(0, 0, 3, 0, 0xEA, 0xFF, 0, &func_801D8EF0, &func_801DAD68, 0, 0, 0, 0, 0, 0, 0);
  }
}

