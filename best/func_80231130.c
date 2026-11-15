extern s32 func_80025DBC(void *);
extern char D_800DA260[];

void func_80231130(void)
{
  u16 i;
  u16 j;
  s32 off;
  s32 idx;
  char *base;

  base = D_800DA260;
  i = 0;
  do
  {
    off = i * 0x178;
    func_80025DBC(base + off);
    *(u16 *)(D_800DA260 + off + 0) = i;
    *(u16 *)(D_800DA260 + off + 2) = 0;
    *(u16 *)(D_800DA260 + off + 4) = 0;
    *(u16 *)(D_800DA260 + off + 6) = 0;
    *(u16 *)(D_800DA260 + off + 8) = 0;
    *(u16 *)(D_800DA260 + off + 10) = 0;
    *(u16 *)(D_800DA260 + off + 12) = 0;
    *(u16 *)(D_800DA260 + off + 14) = 0;
    *(u16 *)(D_800DA260 + off + 16) = 0;
    *(u32 *)(D_800DA260 + off + 20) = 0;
    *(u32 *)(D_800DA260 + off + 24) = 0;
    *(u32 *)(D_800DA260 + off + 28) = 0;
    *(u32 *)(D_800DA260 + off + 32) = 0;
    *(u8 *)(D_800DA260 + off + 36) = 0;
    *(u8 *)(D_800DA260 + off + 37) = 0;
    j = 0;
    do
    {
      idx = j * 8 + off;
      *(u32 *)(D_800DA260 + 40 + idx) = 0;
      *(u32 *)(D_800DA260 + 44 + idx) = 0;
      j++;
    }
    while (j < 7);
    idx = i * 0x178;
    *(u16 *)(D_800DA260 + idx + 100) = 0;
    *(u16 *)(D_800DA260 + idx + 102) = 0;
    *(u16 *)(D_800DA260 + idx + 104) = 0;
    *(u16 *)(D_800DA260 + idx + 106) = 0;
    *(u16 *)(D_800DA260 + idx + 108) = 0;
    i++;
  }
  while (i < 7);
}
