extern u8 D_800DB1B8[];
extern u8 D_800DE080[];
extern u8 D_80046837;
extern u32 D_801F9958[];
extern void func_801F9950(void);
void func_800E1098(void *, u8, s32, u8, s32);

void func_801F97E0(s32 arg0)
{
  s32 list[4];
  s32 n;
  s32 i;
  s32 j;
  u32 *dl;

  n = 0;
  for (i = 0; i < 4; i++)
  {
    if (*(s16 *) (D_800DB1B8 + 0x2108 + i * 0x28) != 0)
    {
      list[n] = i;
      n++;
    }
  }
  j = 0;
  if (n > 0)
  {
    do
    {
      dl = *(u32 **) (D_800DE080 + 0x64);
      *(u32 **) (D_800DE080 + 0x64) = dl + 2;
      dl[0] = 0xBC000002;
      dl[1] = 0x80000040;
      *(u32 **) (D_800DE080 + 0x64) = dl + 4;
      dl[2] = 0x03860010;
      dl[3] = (u32) D_801F9958;
      *(u32 **) (D_800DE080 + 0x64) = dl + 6;
      dl[4] = 0x03880010;
      dl[5] = (u32) func_801F9950;
      func_800E1098(D_800DE080 + 0x64, D_80046837, arg0, ((u8 *) list)[j * 4 + 3], j);
      j++;
    }
    while (j < n);
  }
}
