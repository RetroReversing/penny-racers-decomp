s32 func_8014BA14(s32 arg0)
{
  s32 temp_a0;
  s32 var_v1;
  temp_a0 = arg0 & 0xFFFF;
  var_v1 = 0;
  if ((temp_a0 + 1) <= 0x508)
  {
    if (temp_a0 >= 0x506)
    {
      var_v1 = 1;
    }
    else
    {
      switch (temp_a0)
      {
        case 0xD:
          var_v1 = 1;
          break;

      default:
          var_v1 = 1;
          break;

        case 0x409:
          var_v1 = 1;
          break;

        }

    }
  }
  else
  {
    switch (temp_a0)
    {
 do { case 0x70E: var_v1 = 1; break; default: var_v1 = 1; break; } while (0);
      case 0x2FFF:

      case 0x4FFF:
        var_v1 = 2;
        break;

    }

  }
  return var_v1 & 0xFF;
}
