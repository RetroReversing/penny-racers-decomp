extern s32 D_80048120[];
extern u8 D_800DB1B8[];
extern u8 D_800DD3E0[];
extern u8 D_80092C04;
extern u8 D_8006E7A0[];
void osRecvMesg(s32, s32, s32);
u8 __osContDataCrc(void *);
void func_8003F464(void);
void func_8003F4D0(void);
void func_8003F350(s32, void *);
void *memcpy(void *, const void *, u32);

u32 func_8003C720(s32 *a)
{
  u8 *s1;
  u8 sp10[0x28];
  u32 ret = 5;
  s32 i;
  u32 r;

  s1 = D_800DD3E0;
  if (D_80048120[a[2]] != 0)
  {
    func_8003F464();
    D_80092C04 = 3;
    func_8003F350(1, D_800DB1B8 + (a[2] << 6));
    do { osRecvMesg(a[1], 0, 1); } while (0);
    func_8003F350(0, s1);
    do { osRecvMesg(a[1], 0, 1); } while (0);
    for (i = 0; i < a[2]; i++)
    {
      s1++;
    }
    memcpy(sp10, s1, 0x28);
    r = (sp10[0x12] & 0xC0) >> 4;
    ret = r;
    if (r == 0)
    {
      if (__osContDataCrc(D_8006E7A0) != sp10[0x26])
      {
        ret = 4;
      }
    }
    func_8003F4D0();
  }
  return ret;
}
