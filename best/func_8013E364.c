extern u16 D_80187BE0;
extern s16 D_80189DC2;
extern char D_8018D738[];
extern char D_8018D73A[];
extern u16 D_8018F5C2;
s32 func_8013E364(void)
{
  s32 var_v0;
  volatile unsigned char var_v0_2;
  s32 var_v1;
  u16 temp_a1;
  if (D_80187BE0 == 0)
  {
    var_v0 = 0xFFFF;
    if ((*(D_8018D73A + ((D_8018F5C2 & 0xFFFF) * 0x7C))) != 0xFFFF)
    {
      var_v1 = D_8018F5C2 & 0xFFFF;
      var_v0_2 = var_v1 << 5;
      do
      {
        var_v1 = (*(D_8018D73A + ((var_v0_2 - var_v1) * 4))) & 0xFFFF;
        var_v0_2 = var_v1 << 5;
      }
      while ((*(D_8018D73A + (var_v1 * 0x7C))) != 0xFFFF);
      return 0xFFFF;
    }
    return var_v0;
  }
  var_v1 = (u16) D_8018F5C2;
  D_8018F5C2 = *(D_8018D73A + (D_8018F5C2 * 0x7C));
  *(D_8018D73A + ((var_v1 & 0xFFFF) * 0x7C)) = 0xFFFF;
  if (D_8018F5C2 != 0xFFFF)
  {
    *(D_8018D738 + (D_8018F5C2 * 0x7C)) = 0xFFFF;
  }
  D_80187BE0 -= 1;
  var_v0 = var_v1 & 0xFFFF;
  if (D_80187BE0 == 0)
  {
    D_80189DC2 = 0xFFFF;
    var_v0 = var_v1 & 0xFFFF;
  }
  return var_v0;
}

