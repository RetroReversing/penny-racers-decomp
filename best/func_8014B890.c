u8 func_8014BA14(u16);
s32 func_801D65BC(s32);
extern s32 D_8011F2F0;
extern u16 D_80189C9E;
extern u16 D_80189CAA;
extern s32 D_8018BC35;
extern u16 D_80190CB2;
void func_8014B890(s32 arg0)
{
  int __repair_constant = 0xC8;
  s32 var_v1;
  u16 temp_v0;
  u16 temp_v1;
  u16 var_v0_2;
  u32 var_v0;
  void *temp_s0;
  temp_s0 = ((arg0 & 0xFFFF) * 0x64) + (&D_8011F2F0);
  temp_v1 = *((u16 *) (((char *) temp_s0) + 0x3E));
  switch (temp_v1)
  {
    default:
      var_v1 = 0;
      if (temp_v1 != 0)
    {
      return;
    }
      var_v0 = 0 & 0xFF;
      loop_9:
    var_v0 = var_v1 & 0xFF;

      if ((*((&D_8018BC35) + var_v0)) != 0)
    {
      if (temp_s0)
      {
        var_v1 += 1;
        var_v0 = var_v1 & 0xFF;
      }
      else
      {
        var_v1 += 1;
        var_v0 = var_v1 & 0xFF;
      }
      if (((u32) (var_v1 & 0xFF)) <= (6U - 1))
      {
        goto loop_9;
      }
    }
      if (var_v0 < 3U)
    {
      *((u8 *) (((char *) temp_s0) + 0)) = func_8014BA14(D_80189C9E);
      if ((*((u8 *) (((char *) temp_s0) + 0))) == 0)
      {
        func_801D65BC(0x12);
      }
      var_v0_2 = 0xB4;
      if ((*((u8 *) (((char *) temp_s0) + 0))) == 1)
      {
        func_801D65BC(0x14);
        var_v0_2 = 0xB4;
      }
    }
    else
    {
      *((u8 *) (((char *) temp_s0) + 0)) = func_8014BA14(D_80189CAA);
      var_v0_2 = __repair_constant;
      if (((u8) (*((u8 *) (((char *) temp_s0) + 0)))) < 2U)
      {
        func_801D65BC(0x13);
        var_v0_2 = __repair_constant;
      }
    }
      D_80190CB2 = var_v0_2;
      *((u16 *) (((char *) temp_s0) + 0x3E)) = 0x11U;
      if ((*((u8 *) (((char *) temp_s0) + 0))) == 2)
    {
      block_22:
      *((u16 *) (((char *) temp_s0) + 0x3E)) = 0xF0U;

      return;
    }
      return;

    case 0x11:
      temp_v0 = D_80190CB2 - 1;
      D_80190CB2 = temp_v0;
      if (temp_v0 & 0x8000)
    {
      func_801D65BC(6);
      goto block_22;
    }
      break;

    case 0xF0:
      *((s8 *) (((char *) temp_s0) + 0xD)) = 2;
      break;

  }

 ;
}
