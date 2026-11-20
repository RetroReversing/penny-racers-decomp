extern s32 D_8018D3A0;
s32 func_8014AAE8(s32 arg0)
{
  s32 var_a1;
  char var_a2;
  s32 var_v1;
  var_a1 = 1;
  var_a2 = 0;
  var_v1 = 0;
 do { __repair_rows: { if (var_a1 & (*(s32 *)((u8 *)&D_8018D3A0 + ((arg0 & 0xFF) << 5)))) { var_a2 += 1; } var_v1 += 1; var_a1 *= 2; } if (var_v1 < 0x20) { goto __repair_rows; } return var_a2 & 0xFF; } while (0);
}
