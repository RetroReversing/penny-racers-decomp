s32 queueObjEvent();
s32 func_80221AD0();
extern char D_801E9D80[];
extern char D_801E9D81[];
extern s32 D_801F1884;

unsigned short func_80228140(s32 arg0, void *arg1)
{
  u8 *temp_a1;
  temp_a1 = (u8 *) (D_801F1884 + (s32) D_801E9D80);
  if ((*temp_a1) != 0xFF)
  {
    if ((*temp_a1) & 2)
    {
      *((s32 *) (((char *) arg1) + 0x890)) += 1;
    }
    else
    {
      *((s32 *) (((char *) arg1) + 0x890)) = 0;
    }
    if ((*(D_801E9D80 + D_801F1884)) & 4)
    {
      *((s32 *) (((char *) arg1) + 0x894)) += 1;
    }
    else
    {
      *((s32 *) (((char *) arg1) + 0x894)) = 0;
    }
    if (0x10 & (*(D_801E9D80 + D_801F1884)))
    {
      *((s32 *) (((char *) arg1) + 0x898)) += 1;
    }
    else
    {
      *((s32 *) (((char *) arg1) + 0x898)) = 0;
    }
    if ((*(D_801E9D80 + D_801F1884)) & 8)
    {
      *((s32 *) (((char *) arg1) + 0x89C)) += 1;
    }
    else
    {
      *((s32 *) (((char *) arg1) + 0x89C)) = 0;
    }
    if ((*(D_801E9D80 + D_801F1884)) & 1)
    {
      *((s8 *) (((char *) arg1) + 0x87C)) = -0x40;
    }
    else
    {
      *((s8 *) (((char *) arg1) + 0x87C)) = 0;
    }
    *((u8 *) (((char *) arg1) + 0x87B)) = (u8) (*(D_801E9D81 + D_801F1884));
  if ((*((s32 *) (((char *) arg1) + 0x89C))) == 1) { queueObjEvent(arg0 & 0xFFFF, 0x37); }
  func_80221AD0(arg1);
  }
}
