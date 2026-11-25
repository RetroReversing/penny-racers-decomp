extern u8 D_8011F2FC[];
extern char D_8011F32E[];
extern char D_8011F330[];
extern s16 D_802B22D4;
void func_80152720(volatile s32 arg0)
{
  char *__base_D_8011F32E;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 temp_v1_3;
  unsigned short var_v0;
  temp_v1 = (arg0 & 0xFFFF) * 0x64;
  __base_D_8011F32E = D_8011F32E;
  *((u16 *) (D_8011F32E + temp_v1)) = (*((u16 *) (D_8011F32E + temp_v1))) + 1;
  if (((u16) (*((u16 *) (D_8011F32E - (-temp_v1))))) >= 0x15U)
  {
    *((u16 *) (D_8011F32E + temp_v1)) = 0;
  }
  temp_v1_2 = (arg0 & 0xFFFF) * 0x64;
  if ((*((u16 *) (D_8011F330 + temp_v1_2))) == 0)
  {
    if (((u8) (*(D_8011F2FC + temp_v1_2))) >= 0x33U)
    {
      *(D_8011F2FC + temp_v1_2) = (*((u16 *) (D_8011F2FC + ((unsigned char) temp_v1_2)))) - 0xA;
      var_v0 = arg0 & 0xFFFF;
    }
    else
    {
      *((u16 *) (D_8011F330 + ((arg0 & 0xFFFF) * 0x64))) = 1;
      var_v0 = arg0 & 0xFFFF;
    }
  }
  else
  {
    temp_v1_3 = (arg0 & 0xFFFF) * 0x64;
    if (((u8) (*(D_8011F2FC + temp_v1_3))) < 0xFFU)
    {
      *(D_8011F2FC + temp_v1_3) = (*((u16 *) (D_8011F2FC + temp_v1_3))) + 0xA;
      var_v0 = arg0 & 0xFFFF;
    }
    else
    {
      *((u16 *) (D_8011F330 + ((arg0 & 0xFFFF) * 0x64))) = 0;
 do { var_v0 = arg0 & 0xFFFF; } while (0);
    }
  }
  D_802B22D4 = (((*(D_8011F2FC + (var_v0 * 0x64))) << 8) & 0xF800) | 1;
}
