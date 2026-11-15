extern u8 D_8006FAF0[];
extern u16 D_800DA260;
extern u8 D_800DA26A[];
extern u8 D_801E9698[];
extern u8 D_801E96B4[];
extern u8 D_801E9738;
extern u8 D_801E9740;
extern u8 D_801E97A0[];
extern u8 D_801E97A1[];
extern u8 D_801E97A2[];
extern u8 D_801E97A3[];
extern u8 D_801E97A4[];
extern u8 D_801E97A5[];
extern u8 D_801E97A6[];
extern u8 D_801E97B8[];
extern s32 D_801E9D58;
extern u8 D_8022A770[];
void func_8003DE60(void *, ...);
void func_80029790(void);
void func_800297C8(u8 arg1);
s32 func_801E2F38(u16);
void func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_801E3FE8(u8 arg1, s32 arg2, void *arg3)
{
  u8 *p;
  s32 off;
  s32 i;
  s32 k;
  D_801E9740 = 0;
  D_801E9738 = 0;
  off = ((*((u16 *) (D_8006FAF0 + 0x20))) - 1) * 0x30;
  p = D_8022A770 + 0x562;
  if (D_8022A770[0x562] == 0)
  {
    if (((D_8022A770[0x563] <= D_801E97A3[off]) && (D_8022A770[0x564] <= D_801E97A4[off])) && (p[4] < D_801E97A5[off]))
    {
      func_8003DE60(D_801E9698);
      D_801E9738 = 1;
      D_801E97A3[off] = p[1];
      D_801E97A4[off] = p[2];
      D_801E97A5[off] = p[4];
      for (i = 0; i < 8; i++)
      {
        *((u16 *) ((D_801E97B8 + off) + (i * 2))) = *((u16 *) (((D_800DA26A + 0x64) + (D_800DA260 * 0x12)) + (i * 2)));
      }

    }
  }
  for (k = 1; k < 4; k++)
  {
    p = (char *)((D_8022A770 + 0x562)); p += (s32)((k * 5));
    if (((p[1] <= D_801E97A0[off]) && (D_801E97A1[off] >= p[2])) && (p[4] < D_801E97A2[off]))
    {
      func_8003DE60(D_801E96B4, k);
      D_801E9740 = k;
      D_801E97A0[off] = p[1];
      D_801E97A1[off] = p[2];
      D_801E97A2[off] = p[4];
      for (i = 0; i < 8; i++)
      {
        *((u16 *) ((D_801E97A6 + off) + (i * 2))) = *((u16 *) (((D_800DA26A + 0x64) + (D_800DA260 * 0x12)) + (i * 2)));
      }

    }
  }

  if ((D_801E9740 != 0) || (D_801E9738 != 0))
  {
    func_80029790();
    D_801E9D58 = func_801E2F38(((*((u16 *) (D_8006FAF0 + 0x20))) - 1) & 0xFFFF);
    if (D_801E9D58 != 0)
    {
      func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x14, 0, 0x66);
    }
    func_800297C8(arg1);
  }
}

