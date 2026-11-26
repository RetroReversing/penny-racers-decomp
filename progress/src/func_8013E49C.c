typedef struct { u16 prev; u16 next; u8 pad[120]; } Node;
extern u16 D_80187BE0;
extern u16 D_80189DC2;
extern Node D_8018D738[];
extern u16 D_8018F5C2;

s32 func_8013E49C(u16 arg0)
{
  s32 count;

  count = 1;
  if (D_80189DC2 == 0xFFFF)
  {
    D_8018F5C2 = arg0;
    while (D_8018D738[arg0].next != 0xFFFF)
      {
        arg0 = D_8018D738[arg0].next;
            count++;
      }
    D_80189DC2 = arg0;
    D_80187BE0 = count;
  }
  else
  {
    while (D_8018D738[arg0].next != 0xFFFF)
      {
        D_8018D738[D_80189DC2].next = arg0;
        D_8018D738[arg0].prev = D_80189DC2;
        D_80189DC2 = arg0;
        arg0 = D_8018D738[arg0].next;
            count++;
      }
    D_8018D738[D_80189DC2].next = arg0;
    D_8018D738[arg0].prev = D_80189DC2;
    D_80189DC2 = arg0;
    D_80187BE0 = count + D_80187BE0;
  }
}
