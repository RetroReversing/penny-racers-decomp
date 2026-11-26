typedef struct
{
  u16 prev;
  u16 next;
  u8 pad[120];
} Node;
extern u16 D_80187BE0;
extern u16 D_80189DC2;
extern Node D_8018D738[];
extern u16 D_8018F5C2;

u16 func_8013E364(void)
{
  u16 cur;
  u16 a1;
  u16 ret;
  if (D_80187BE0 == 0)
  {
    cur = D_8018F5C2;
    if (D_8018D738[cur].next != 0xFFFF)
    {
      do
      {
        cur = D_8018D738[cur].next;
      }
      while (D_8018D738[cur].next != 0xFFFF);
    }
    return 0xFFFF;
  }
  a1 = D_8018F5C2;
  D_8018F5C2 = D_8018D738[D_8018F5C2].next;
  D_8018D738[a1].next = 0xFFFF;
  if (D_8018F5C2 != 0xFFFF)
  {
    D_8018D738[D_8018F5C2].prev = 0xFFFF;
  }
  D_80187BE0 -= 1;
  if (D_80187BE0 == 0)
  {
    D_80189DC2 = 0xFFFF;
  }
  ret = a1;
  return ret;
}
