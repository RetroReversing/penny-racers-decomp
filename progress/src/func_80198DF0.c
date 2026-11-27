inline static s32 __repair_inline(s32 a)
{
  return a;
}

extern char D_8011F30C[];
extern s8 cursorX;
extern u8 glyphLine[];
extern u8 glyphCode[];
extern void *trackInfo;
extern u8 D_801CA130;
s32 func_80198DF0(s32 arg0)
{
  s32 var_v1_2_1;
s32 __repair_phase_var_v1_2_1;
  u16 temp_v0;
  s32 var_a1;
  s32 var_v1_2;
  s32 var_v1;
  var_a1 = 0;
  if ((*((u8 *) (((char *) trackInfo) + 0))) == 3)
  {
    var_v1 = *(glyphCode + (D_801CA130 * 5));
  }
  else
  {
    var_v1 = __repair_inline((*(glyphCode + (D_801CA130 * 5))) - 0x2E);
  }
  if (cursorX != 0)
  {
 do { if (D_801CA130 != (*((u8 *) (((char *) trackInfo) + 2)))) { temp_v0 = arg0 & 0xFFFF; if (((u32) ((u8) (var_v1 - 0x16))) < 0x14U) {
    s32 var_v1;
    var_v1_2_1 = temp_v0 * 0x64; do { do { do { do { var_v1 = (*(glyphLine + (D_801CA130 * 5))) + 0x3C; } while (0); } while (0); } while (0); } while (0);
   *((f32 *) (D_8011F30C + var_v1_2_1)) = ((f32) var_v1) * 0.5f;
 } else {
    s32 var_v1;
    __repair_phase_var_v1_2_1 = temp_v0 * 0x64; var_v1 = *(glyphLine + (D_801CA130 * 5));
   *((f32 *) (D_8011F30C + __repair_phase_var_v1_2_1)) = ((f32) var_v1) * 0.5f;
 }  } var_a1 = 1; } while (0);
  }
  return var_a1 & 0xFF;
}
