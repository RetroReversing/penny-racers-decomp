extern u8 *trackInfo;
extern u8 D_801CA130;
extern s8 cursorX;
extern u8 glyphCode[];
extern u8 glyphLine[];
extern u8 D_8011F30C[];
s32 func_8019904C(s32 arg0)
{
  s32 var_a1;
  s32 var_v1;
  u16 temp_v0;
  s32 off;
  var_a1 = 0;
  if (trackInfo[0] == 3)
  {
    var_v1 = glyphCode[D_801CA130 * 5];
  }
  else
  {
 do { var_v1 = glyphCode[D_801CA130 * 5] - 0x2E; } while (0);
  }
  if (cursorX < 0x17)
  {
    if (D_801CA130 != trackInfo[2])
    {
      temp_v0 = arg0 & 0xFFFF;
      if (((u8) (var_v1 - 0x16)) < 0x14)
      {
s32 __repair_branch_var_v1_0;

        s32 off_1;
        off_1 = temp_v0 * 100;
        __repair_branch_var_v1_0 = 0x3C; __repair_branch_var_v1_0 += glyphLine[D_801CA130 * 5];
        *((f32 *) (D_8011F30C + off_1)) = ((f32) __repair_branch_var_v1_0) * 0.5f;
      }
      else
      {
s32 __repair_branch_var_v1_1;

        s32 off_2;
        off_2 = temp_v0 * 100;
        __repair_branch_var_v1_1 = glyphLine[D_801CA130 * 5];
        *((f32 *) (D_8011F30C + off_2)) = ((f32) __repair_branch_var_v1_1) * 0.5f;
      }
    }
    var_a1 = 1;
  }
  return var_a1 & 0xFF;
}
