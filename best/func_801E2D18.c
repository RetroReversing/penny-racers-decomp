extern s32 D_801C5E9C;
extern s32 D_801C7080;
extern s32 D_801C7081;
extern s32 D_801C7082;
extern s32 D_801C7083;
extern s32 D_801C7084;
extern s32 D_801F18E4;
extern s32 D_801F18F8;
extern s32 D_801F18F9;
extern s32 D_801F18FA;
extern s32 D_801F18FB;
extern s32 D_801F18FC;
void func_801E2D18(void)
{
  s32 temp_v1;
  u32 var_a0;
  *((u8 *) (((char *) (&D_801C5E9C)) + 0)) = (u8) (*((u8 *) (((char *) (&D_801F18E4)) + 0)));
  *((u8 *) (((char *) (&D_801C5E9C)) + 1)) = (u8) (*((u8 *) (((char *) (&D_801F18E4)) + 1)));
  *((u8 *) (((char *) (&D_801C5E9C)) + 2)) = (u8) (*((u8 *) (((char *) (&D_801F18E4)) + 2)));
  *((u8 *) (((char *) (&D_801C5E9C)) + 3)) = (u8) (*((u8 *) (((char *) (&D_801F18E4)) + 3)));
  var_a0 = 0;
  __repair_rows:
  {
    temp_v1 = var_a0 * 5;
 do { *((&D_801C7080) + temp_v1) = *(temp_v1 + (&D_801F18F8)); } while (0);
    *((&D_801C7081) + temp_v1) = *(temp_v1 + (&D_801F18F9));
    *((&D_801C7082) + temp_v1) = *(temp_v1 + (&D_801F18FA));
    *((&D_801C7083) + temp_v1) = *(temp_v1 + (&D_801F18FB));
    *((&D_801C7084) + temp_v1) = *(temp_v1 + (&D_801F18FC));
    do
    {
      var_a0 += 1;
    }
    while (0);
  }

  if (var_a0 < 0xC8U)
  {
    goto __repair_rows;
  }
}
