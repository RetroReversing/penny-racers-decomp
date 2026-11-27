typedef struct { f32 x; char pad[96]; } CC4Rec;
typedef struct { u8 b0; u8 b1; u8 b2; } CC4Mode;
extern CC4Rec sPrimColorG[];
extern s8 cursorY;
extern u8 glyphLine[];
extern u8 glyphCode[];
extern CC4Mode *trackInfo;
extern u8 D_801CA130;
u8 func_80198CC4(u16 arg0)
{
  s32 r = 0;
  u8 v;
  if (trackInfo->b0 == 3) {
    v = glyphCode[D_801CA130 * 5];
  } else {
    v = glyphCode[D_801CA130 * 5] - 0x2E;
  }
  if (cursorY != 0) {
    if (D_801CA130 != trackInfo->b2) {
      if ((u8)(v - 0x16) < 0x14) {
        sPrimColorG[arg0].x = (glyphLine[D_801CA130 * 5] + 0x3C) * 0.5f;
      } else {
        sPrimColorG[arg0].x = glyphLine[D_801CA130 * 5] * 0.5f;
      }
    }
    r = 1;
  }
  return r;
}
