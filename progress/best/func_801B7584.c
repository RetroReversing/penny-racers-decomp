extern unsigned char D_801C5E9C;
extern unsigned char D_801C5E9D;
extern unsigned char D_801C5E9E;
extern unsigned char D_801C5E9F;
extern char D_801C7080[];
void func_801B7584(void *arg0, s32 arg1)
{
  u32 __repair_early_0;
  s32 temp_v1;
  s32 var_a2;
  s32 var_v0;
  s32 var_v0_2;
  short temp_v0;
  u32 var_v1;
  void *temp_a0;
  void *temp_v0_2;
  void *temp_v1_2;
  D_801C5E9C = (u8) (*((u8 *) (((char *) arg0) + 0)));
  D_801C5E9D = (u8) (*((u8 *) (((char *) arg0) + 1)));
  D_801C5E9E = (u8) (*((u8 *) (((char *) arg0) + 2)));
  D_801C5E9F = (u8) (*((u8 *) (((char *) arg0) + 3)));
  var_a2 = 0;
  __repair_early_0 = D_801C5E9E;
  if (__repair_early_0 != 0)
  {
    do
    {
      {
        s32 __repair_value;
        __repair_value = (var_a2 & 0xFF) * 5; temp_v1 = __repair_value;
      }
      do
      {
      }
      while (0);
      temp_a0 = temp_v1 + D_801C7080;
      temp_v1_2 = temp_v1 + arg1;
      *((u8 *) (((char *) temp_a0) + 0)) = (u8) (*((u8 *) (((char *) temp_v1_2) + 0)));
      *((u8 *) (((char *) temp_a0) + 1)) = (u8) (*((u8 *) (((char *) temp_v1_2) + 1)));
      *((u8 *) (((char *) temp_a0) + 2)) = (u8) (*((u8 *) (((char *) temp_v1_2) + 2)));
      *((u8 *) (((char *) temp_a0) + 3)) = (u8) (*((u8 *) (((char *) temp_v1_2) + 3)));
      *((u8 *) (((char *) temp_a0) + 4)) = (u8) (*((u8 *) (((char *) temp_v1_2) + 4)));
      do
      {
        var_a2 += 1;
      }
      while (0);
    }
    while (((u32) (var_a2 & 0xFF)) < ((u8) __repair_early_0));
  }
  temp_v0 = var_a2 & 0xFF;
  var_v1 = temp_v0;do{
  var_v0_2 = var_v1 * 4;}while(0);
  if (temp_v0 < 0xC8U)
  {
    do
    {
      do
      {
        temp_v0_2 = (var_v0_2 + var_v1) + D_801C7080;
      }
      while (0);
      *((s8 *) (((char *) temp_v0_2) + 0)) = 4;
      do
      {
        *((s8 *) (((char *) temp_v0_2) + 1)) = 0;
        *((s8 *) (((char *) temp_v0_2) + 2)) = -1;
        *((s8 *) (((char *) temp_v0_2) + 3)) = -1;
        *((s8 *) (((char *) temp_v0_2) + 4)) = -1;
        do
        {
          var_a2 += 1; var_v1 = var_a2 & 0xFF; var_v0_2 = var_v1 * 4;
        }
        while (0);
      }
      while (0);
    }
    while (var_v1 < 0xC8U);
  }
}

