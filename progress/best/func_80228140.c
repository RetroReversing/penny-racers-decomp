s32 func_801D7028();
s32 func_80221AD0();
extern char D_801E9D80[];
extern char D_801E9D81[];
extern s32 D_801F1884;
inline static char *inline_fn(char *arg0, int arg1)
{
  return arg0 + arg1;
}

unsigned short func_80228140(s32 arg0, void *arg1)
{
  s32 __repair_operand;
  u8 *temp_a1;
  if (D_801E9D81)
    {
      __repair_operand = (s32) (&D_801F1884);
    }
  else
    {
      __repair_operand = (s32) (&D_801F1884);
    }
  if (D_801E9D81)
    {
      temp_a1 = __repair_operand + D_801E9D80;
    }
  else
    {
      temp_a1 = __repair_operand + D_801E9D80;
    }
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
      *((s8 *) inline_fn((char *) arg1, 0x87C)) = -0x40;
    }
    else
    {
      *((s8 *) (((char *) arg1) + 0x87C)) = 0;
    }
    *((u8 *) (((char *) arg1) + 0x87B)) = (u8) (*(D_801E9D81 + D_801F1884));
 do { if ((*((s32 *) (((char *) arg1) + 0x89C))) == 1) { func_801D7028(arg0 & 0xFFFF, 0x37); } func_80221AD0(arg1); } while (0);
  }
}
