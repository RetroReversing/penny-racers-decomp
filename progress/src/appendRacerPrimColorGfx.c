extern u8 D_8011F33C;
extern u8 D_8021CA6C[];
/* Appends a set-primitive-colour command for a racer, taking RGB from the colour table at the racer's float index. */ void appendRacerPrimColorGfx(u32 **gfxPtr, s32 racerIndex)
{
  u32 *cmd = *gfxPtr;
  u32 *cmdWords;
  *gfxPtr = cmd + 2;
  cmdWords = cmd;
  cmdWords[0] = 0xFA000000;
  cmdWords[1] = (D_8021CA6C[(u8)(u32) *(f32 *)(&D_8011F33C + (racerIndex & 0xFFFF) * 0x64) * 3] << 24)
       | (D_8021CA6C[(u8)(u32) *(f32 *)(&D_8011F33C + (racerIndex & 0xFFFF) * 0x64) * 3 + 1] << 16)
       | (D_8021CA6C[(u8)(u32) *(f32 *)(&D_8011F33C + (racerIndex & 0xFFFF) * 0x64) * 3 + 2] << 8) | 0xFF;
}
