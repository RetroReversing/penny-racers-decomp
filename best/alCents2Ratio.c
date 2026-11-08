void alCents2Ratio(s32 arg0)
{
  s32 var_a0;
  var_a0 = arg0;
  if (var_a0 < 0)
  {
    var_a0 = -var_a0;
  }
  if (var_a0 != 0)
  {
    do
    {
      if (var_a0 & 1)
      {
      }
      var_a0 = var_a0 >> 1;
    }
    while (((unsigned char) var_a0) != 0);
  }
}

