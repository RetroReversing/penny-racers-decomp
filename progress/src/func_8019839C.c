extern s8 cursorY;
extern u16 D_801C6BDE[];
extern s8 finishPos[];
extern s8 cursorX;
extern u8 blockFootprint;
extern u8 *trackInfo;

s32 func_8019839C(void)
{
  s32 r = 0;
  if (cursorX != 0 && D_801C6BDE[cursorY * 24 + cursorX] == 0xFFFF)
  {
    if (trackInfo[1] == 5)
    {
      if (finishPos[0] == cursorX && (finishPos[1] == cursorY + 1 || finishPos[1] == cursorY - 1))
      {
        if (blockFootprint == 1 || blockFootprint == 3)
          r = 1;
      }
      else if (finishPos[0] == cursorX + 1 && finishPos[1] == cursorY)
      {
        if (blockFootprint == 0 || blockFootprint == 2)
          r = 1;
      }
      else if (finishPos[0] != cursorX - 1 || finishPos[1] != cursorY || blockFootprint == 1)
        r = 1;
    }
    else
      r = 1;
  }
  return r & 0xFF;
}
