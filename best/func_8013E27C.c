extern u16 D_80187BE0;
extern s16 D_80189DC2;
extern char D_8018D738[];
extern char D_8018D73A[];
extern u16 D_8018F5C2;
s32 func_8013E27C(s32 arg0)
{
  s32 var_v0_2;
  s32 temp_v1;
  s32 var_a0;
  s32 var_v0;
  unsigned char temp_t0;
  u16 var_a1;
  u32 temp_v0;
  var_v0 = 0xFFFF;
  if (((u16) D_80187BE0) >= ((u32) (arg0 & 0xFFFF)))
  {
    var_a1 = D_8018F5C2;
    temp_t0 = var_a1;
    var_a0 = 0;
    temp_v0 = arg0 & 0xFFFF;
    if (temp_v0 != 0)
    {
      var_v0_2 = var_a1 & 0xFFFF;
      __repair_rows:
      {
        var_a1 = *(D_8018D73A + (var_v0_2 * 0x7C));
        var_a0 += 1;
        var_v0_2 = var_a1 & 0xFFFF;
      }

      if (((u32) (var_a0 & 0xFFFF)) < temp_v0)
      {
        goto __repair_rows;
      }
    }
    temp_v1 = (var_a1 & 0xFFFF) * 0x7C;
    *(D_8018D73A + ((*(D_8018D738 + temp_v1)) * 0x7C)) = 0xFFFF;
    *(D_8018D738 + temp_v1) = 0xFFFF;
    D_8018F5C2 = var_a1;
    D_80187BE0 -= arg0;
    var_v0 = temp_t0 & 0xFFFF;
    if (D_80187BE0 == 0)
    {
      D_80189DC2 = 0xFFFF;
    }
  }
  return var_v0;
}

