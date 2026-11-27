extern f32 D_801FAE30[];

f32 waveTableLookup(s32 arg0)
{
  s32 a0 = arg0;

  while (a0 < 0)
  {
    a0 += 0x100;
  }
  return D_801FAE30[a0 & 0xFF];
}
