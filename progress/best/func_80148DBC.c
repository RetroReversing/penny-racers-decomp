s32 func_8014A030();
s32 func_801FA30C();
extern u8 D_800DA260[];
extern s32 D_80168BC0[];
extern s32 D_80168C40[];
extern u8 D_80189B34;
extern s32 D_8018D3A0;
extern s32 D_8018D3A4;
extern s32 D_8018D3A8;
extern s32 D_8018D3AC;
extern u8 D_8018D3B0[];
extern s32 D_8018D3B4;
extern s32 D_8018D3B7;
extern s32 D_8018D3B8;
extern s32 D_8018D3BC;
extern s16 D_8021E1A2;
inline static int inline_fn(unsigned long arg0, s32 arg1)
{
  return arg0 | arg1;
}

inline static int inline_fn2(u8 arg0)
{
  return (arg0 & 0xFF) << 5;
}

void func_80148DBC(unsigned short arg0)
{
  s32 *__base_D_8018D3A0;
  register u8 i;
  u8 j;
  s32 mode;
  s32 __repair_mode_1;
  s32 __repair_phase_mode;
  s32 off;
  s32 __repair_result_off;
  s32 *row;
  unsigned long s1;
  s32 t;
  u32 sh;
  mode = arg0 & 3;
  do
  {
    sh = mode * 8;
  }
  while (0);
  __repair_mode_1 = 1;
  if (D_8021E1A2 != 0)
  {
    __repair_mode_1 = 2;
  }
  if (D_80189B34 == 2)
  {
    for (j = __repair_mode_1; j < 6; j++)
    {
      __base_D_8018D3A0 = &D_8018D3A0;
      row = (s32 *) (((u8 *) (*__base_D_8018D3A0)) + inline_fn2(j));
      for (i = 0; i < 8; i++)
      {
        s1 = func_801FA30C();
        __repair_phase_mode = func_801FA30C() << 16; row[i] = inline_fn(s1, __repair_phase_mode);
        __repair_mode_1 = func_801FA30C();
        do
        {
          row[i] &= ~inline_fn(__repair_mode_1, func_801FA30C() << 16);
        }
        while (0);
      }

      {
        u8 *tbl = D_800DA260 + (j * 0x178);
        do
        {
          ((s32 *) (((u8 *) (*__base_D_8018D3A0)) + inline_fn2(j)))[0] = func_8014A030(row[0], *((u16 *) tbl), 1); row[5] = func_8014A030(row[5], (tbl[9] - 1) & 0xFF, 1);
          do
          {
            row[6] = func_8014A030(row[6], (tbl[0xD] - 1) & 0xFF, 1); row[7] = func_8014A030(row[7], (tbl[0xF] - 1) & 0xFF, 1);
          }
          while (0);
        }
        while (0);
      }
      for (i = 0; (float) (i < 8); i++)
      {
        do
        {
          row[i] &= D_80168BC0[((arg0 & 3) * 8) + i]; row[i] |= D_80168C40[i];
        }
        while (0);
      }

    }

  }
  for (j = 0; j < 6; j++)
  {
    do
    {
      __repair_mode_1 = inline_fn2(j);
      *((s32 *) ((*__base_D_8018D3A0) + inline_fn2(j))) = (*((s32 *) ((*__base_D_8018D3A0) + inline_fn2(j)))) & 0x3FFF;
      *((s32 *) (D_8018D3A4 + inline_fn2(j))) = (*((s32 *) (D_8018D3A4 + inline_fn2(j)))) & 0x01FFFFFF;
      *((s32 *) (D_8018D3A8 + inline_fn2(j))) = (*((s32 *) (D_8018D3A8 + inline_fn2(j)))) & 0xFFF;
      *((s32 *) (D_8018D3AC + inline_fn2(j))) = (*((s32 *) (D_8018D3AC + inline_fn2(j)))) & 0x1FF;
    }
    while (0);
    do
    {
      *((s32 *) (D_8018D3B4 + __repair_mode_1)) = (s32) (*((s32 *) (D_8018D3B7 + __repair_mode_1)));
      *(D_8018D3B0 + __repair_mode_1) = (*(D_8018D3B0 + __repair_mode_1)) & 0x3FF;
      *((s32 *) (D_8018D3B8 + __repair_mode_1)) = (*((s32 *) (D_8018D3B8 + __repair_mode_1))) & 0x1FFFFF;
      *((s32 *) (__repair_mode_1 + D_8018D3BC)) = (*((s32 *) (D_8018D3BC + __repair_mode_1))) & 0x7FFF;
    }
    while (0);
  }

}

