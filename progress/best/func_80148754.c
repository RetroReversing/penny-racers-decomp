extern u8 D_800DA260[];
extern u16 D_80189CBC;
extern u8 D_80189CBD;
extern u16 D_80189CC4;
extern u8 D_80189CC5;
extern u8 D_8018D3A0[];
extern u8 D_8021F048[];
extern u8 D_8021F270[];
extern u16 D_80189C9E[];
s32 func_8014A030(s32, s32, s32);
s32 func_80149778();
void func_80148754(u8 arg0, s32 arg1)
{
  u8 sp17 = arg0;
  u8 sp1F = arg1;
  u8 *s7 = D_800DA260 + (arg1 * 0x178);
  u8 *fp = D_800DA260 + (sp17 * 0x178);
  u8 *c = (u8 *) D_80189C9E;
  u8 *c2 = c + 0xC;
  u32 s6;
  
  u32 s4;
  u32 s1;
  u32 s3;
u32 __repair_phase_s3;
  u32 i;
  u32 j;
  s32 *p;
  u8 *t0;
  u8 *t1;
  s6 = D_80189CBC >> 8;
  if (!(s6 & 8))
  {
    s4 = D_80189CBD & 0x1F;
    s1 = (s6 & 0xF) * 4;
    s3 = s4 & 0xFF;
    p = (s32 *) ((D_8018D3A0 + (sp17 << 5)) + s1);
    *p = func_8014A030(*p, s3, 0);
    p = (s32 *) ((D_8018D3A0 + (sp1F << 5)) + s1);
    *p = func_8014A030(*p, s3, 1);
    if (!(s6 & 7))
    {
      s7[0x16A + s3] = fp[0x16A + s3];
      for (i = 0; i < 9; i++)
      {
        *((u16 *) (((s7 + (s3 * 18)) + 0x6E) + (i * 2))) = *((u16 *) (((fp + (s3 * 18)) + 0x6E) + (i * 2)));
      }

    }
  }
  s3 = D_80189CC4 >> 8;
  if (!(s3 & 8))
  {
    s4 = D_80189CC5 & 0x1F;
    __repair_phase_s3 = s4 & 0xFF;
    s1 = (s3 & 0xF) * 4;
    p = (s32 *) ((D_8018D3A0 + (sp17 << 5)) + s1);
    *p = func_8014A030(*p, __repair_phase_s3, 1);
    p = (s32 *) ((D_8018D3A0 + (sp1F << 5)) + s1);
    *p = func_8014A030(*p, (s32)__repair_phase_s3, 0);
    if (!(s3 & 7))
    {
      fp[0x16A + __repair_phase_s3] = s7[0x16A + __repair_phase_s3];
      for (i = 0; i < 8; i++)
      {
        *((u16 *) (((fp + (__repair_phase_s3 * 18)) + 0x6E) + (i * 2))) = *((u16 *) (((s7 + (__repair_phase_s3 * 18)) + 0x6E) + (i * 2)));
      }

    }
  }
  *((u16 *) (c + (arg1 * 2))) = *((u16 *) (c + 0x1E));
  *((u16 *) (c + (sp17 * 2))) = *((u16 *) (c + 0x26));
  *((u16 *) (c2 + (sp17 * 2))) = *((u16 *) (c + 0x1E));
  *((u16 *) (c2 + (sp1F * 2))) = *((u16 *) (c + 0x26));
  i = 0;
  if ((func_80149778(sp1F, c2 + (sp17 * 2), c2, c2 + (sp1F * 2)) & 0xFF) == 1)
  {
    t1 = D_8021F048 + (sp1F * 14);
    t0 = D_8021F270 + (sp1F * 0xE0);
    __repair_rows:
    {
      t1[i] = s7[0x16A + i];
      for (j = 0; j < 8; j++)
      {
        *((u16 *) ((t0 + (i * 16)) + (j * 2))) = *((u16 *) (((s7 + (i * 18)) + 0x6E) + (j * 2)));
      }

      i++;
    }

    if (i < 0xE)
    {
      goto __repair_rows;
    }
  }
  i = 0;
  if ((func_80149778(sp17, i) & 0xFF) == 1)
  {
    t1 = D_8021F048 + (arg0 * 14);
    t0 = D_8021F270 + (sp17 * 0xE0);
    do
    {
      t1[i] = fp[0x16A + i];
      for (j = 0; j < 8; j++)
      {
        *((u16 *) ((t0 + (i * 16)) + (j * 2))) = *((u16 *) (((fp + (i * 18)) + 0x6E) + (j * 2)));
      }

      i++;
    }
    while (i < 0xE);
  }
}

