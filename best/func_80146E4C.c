extern char D_80168CE4[];
s32 func_80146E4C(u16 arg0)
{
  s32 temp_v1;
  unsigned char var_a1;
  var_a1 = 0;
  if (((u32) (arg0 & 0xF00)) < 0x800U)
  {
    var_a1 = *(D_80168CE4 + ((arg0 >> 8) & 7)); var_a1 += arg0 & 0x1F;
  }
  else
  {
    temp_v1 = arg0 & 0xFFFF;
    switch (temp_v1)
    {
      case 0:
        break;

      case 0x3FFF:
        var_a1 = 0x12;
        break;

      case 0x4FFF:

      case 0x2FFF:
        var_a1 = 0xA;
        break;

    }

  }
  return var_a1 & 0xFFFF;
}

