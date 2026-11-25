extern u16 D_80187BE0;
extern u16 D_80189DC2;
extern char D_8018D738[];
extern char D_8018D73A[];
extern u16 D_8018F5C2;
inline static s16 inline_fn(char *arg0)
{
  return *((s16 *) arg0);
}

s32 func_8013E27C(s32 arg0_in)
{
  s32 arg0;
  s32 temp_v1;
  s32 var_a0;
  s32 var_v0;
  s32 var_v0_2;
  short temp_t0;
  u16 var_a1;
  u32 temp_v0;
  do
  {
    var_v0 = 0xFFFF; arg0 = arg0_in;
  }
  while (0);
  if (((u32) (arg0 & 0xFFFF)) <= ((u16) D_80187BE0))
  {
    var_a1 = D_8018F5C2;
    var_a0 = 0;
    temp_t0 = var_a1;
    temp_v0 = (unsigned short) (arg0 & 0xFFFF);
    if (temp_v0 != 0)
    {
      var_v0_2 = var_a1 & 0xFFFF;
      __repair_rows:
      {
        var_a1 = inline_fn(D_8018D73A + (2 * (var_v0_2 * 62)));
        var_a0 += 1;
        var_v0_2 = var_a1 & 0xFFFF;
      }

      if (((u32) (var_a0 & 0xFFFF)) < temp_v0)
      {
        goto __repair_rows;
      }
    }
    if (D_80187BE0)
    {
      s32 __repair_branch_temp_v1_0;
      char *__base_D_8018D738;
      __repair_branch_temp_v1_0 = (var_a1 & 0xFFFF) * 0x7C;
      __base_D_8018D738 = D_8018D738;
      *((s16 *) (D_8018D73A + ((*((u16 *) (__base_D_8018D738 + __repair_branch_temp_v1_0))) * 0x7C))) = 0xFFFF;
      D_8018F5C2 = var_a1;
      *((u16 *) (__base_D_8018D738 + __repair_branch_temp_v1_0)) = 0xFFFF;
      D_80187BE0 -= arg0;
      var_v0 = temp_t0 & 0xFFFF;
    }
    else
    {
      s32 __repair_branch_temp_v1_1;
      char *__base_D_8018D738;
      __repair_branch_temp_v1_1 = (var_a1 & 0xFFFF) * 0x7C;
      __base_D_8018D738 = D_8018D738;
      *((s16 *) (D_8018D73A + ((*((u16 *) (__base_D_8018D738 + __repair_branch_temp_v1_1))) * 0x7C))) = 0xFFFF;
      D_8018F5C2 = var_a1;
      *((u16 *) (__base_D_8018D738 + __repair_branch_temp_v1_1)) = 0xFFFF;
      D_80187BE0 -= arg0;
      var_v0 = temp_t0 & 0xFFFF;
    }
    if (D_80187BE0 == 0)
    {
      D_80189DC2 = 0xFFFF;
    }
  }
  return var_v0;
}

