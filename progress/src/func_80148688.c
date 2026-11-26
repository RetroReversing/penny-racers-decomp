extern u8 D_80189CB7[];
extern u8 D_80189CBF[];
extern u8 D_80183BD3[];
extern u8 D_8018D140[];
void func_80148688(s32 arg0, s32 arg1)
{
  u8 *p;
  u8 *q;
  u8 *r;
  u8 *base;
  u16 *p5;
  u16 *row;
  u16 v;
  s32 k;
  k = arg1 & 0xFF;
  p = D_80189CBF;
  q = p + 1;
  if (!k)
  {
    p = D_80189CB7;
    q = p + 1;
  }
  p5 = (u16 *) (p + 5);
  if (arg0 & 1)
  {
    if (*p != 0)
    {
      *p = *p - 1;
    }
    else
    {
      *p = *q - 1;
    }
  }
  if (arg0 & 2)
  {
    if (*p != *q - 1)
    {
      *p = *p + 1;
    }
    else
    {
      *p = 0;
    }
  }
  r = D_80183BD3;
  *r = *p;
  k = arg1 & 0xFF;
  base = D_8018D140;
  row = (u16 *) (base + (arg1 & 0xFF) * 0x12C);
  v = row[*r + 3];
  *p5 = v;
  *(u16 *) (D_80183BD3 + 1) = v;
}
