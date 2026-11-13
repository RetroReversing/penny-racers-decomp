extern char D_8011F2F0[];
extern char D_8011F2FC[];
void func_801B41D8(s32 arg0)
{
  s32 temp_a0;
  s32 var_v1;
  s8 var_v0;
  var_v1 = (arg0 & 0xFFFF) * 0x64;
  if (((u8) (*(D_8011F2F0 + var_v1))) >= 0x1EU)
  {
    var_v1 = (arg0 & 0xFFFF) * 0x64;
    if (((u32) ((*(D_8011F2F0 + var_v1)) - 0x1E)) < 0x1EU)
    {
      var_v0 = (*(D_8011F2FC + var_v1)) + 6;
      goto block_6;
    }
  }
  else
  {
    var_v0 = (*(D_8011F2FC + var_v1)) - 6;
    block_6:
    *(D_8011F2FC + var_v1) = var_v0;

  }
  temp_a0 = (arg0 & 0xFFFF) * 0x64;
  *(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64)) = (*(D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64))) + 1;
  if ((*(D_8011F2F0 + temp_a0)) == 0x3C)
  {
    *(D_8011F2F0 + temp_a0) = 0;
  }
}

