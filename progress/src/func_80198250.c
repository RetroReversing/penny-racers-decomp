extern u16 blockPos[];
extern s8 cursorY;
extern s8 finishPos[];
extern s8 cursorX;
extern u8 blockDirection;
extern void *trackInfo;
s32 func_80198250(void)
{
  s32 a2;
  union 
  {
    u8 *pointer;
    s32 value;
  } __repair_phase_storage;
  __repair_phase_storage.pointer = &blockDirection;
  __repair_phase_storage.value = 0;
  if (cursorY != 0)
  {
    a2 = cursorX;
    if (blockPos[(cursorY * 24) + a2] == 0xFFFF)
    {
      if (!(((u8 *) trackInfo)[1] != 5))
      {
        if ((finishPos[0] == cursorX) && (finishPos[1] == (cursorY + 1)))
        {
          __repair_phase_storage.value = ((*(&blockDirection)) == 1) | ((*(&blockDirection)) == 3);
        }
        else
          if ((finishPos[0] == cursorX) && (finishPos[1] == (cursorY - 1)))
        {
          if ((*(&blockDirection)) == 0)
          {
            __repair_phase_storage.value = 1;
          }
        }
        else
          if ((finishPos[0] == (cursorX + 1)) || (finishPos[0] == (cursorX - 1)))
        {
          if (finishPos[1] != cursorY)
          {
            __repair_phase_storage.value = 1;
          }
          else
            if (((*(&blockDirection)) == 0) || ((*(&blockDirection)) == 2))
          {
            if (a2 || __repair_phase_storage.value)
            {
              __repair_phase_storage.value = 1;
            }
            else
            {
              __repair_phase_storage.value = 1;
            }
          }
        }
        else
        {
          __repair_phase_storage.value = 1;
        }
      }
      else
      {
        __repair_phase_storage.value = 1;
      }
    }
  }
  return __repair_phase_storage.value & 0xFF;
}

