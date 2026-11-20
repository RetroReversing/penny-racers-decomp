extern u8 D_800DA260;

void func_80025DBC(void *);

void func_80231130(void)
{
  u16 s1;
  s32 off;
  s32 idx;
  u16 j;
  u8 *base;

  base = (u8 *)&D_800DA260;
  s1 = 0;
  do {
    off = s1 * 0x178;
    func_80025DBC(base + off);
    *(s16 *)((u8 *)&D_800DA260 + off + 0x00) = s1;
    *(s16 *)((u8 *)&D_800DA260 + off + 0x02) = 0;
    *(s16 *)((u8 *)&D_800DA260 + off + 0x04) = 0;
    *(s16 *)((u8 *)&D_800DA260 + off + 0x06) = 0;
    *(s16 *)((u8 *)&D_800DA260 + off + 0x08) = 0;
    *(s16 *)((u8 *)&D_800DA260 + off + 0x0A) = 0;
    *(s16 *)((u8 *)&D_800DA260 + off + 0x0C) = 0;
    *(s16 *)((u8 *)&D_800DA260 + off + 0x0E) = 0;
    *(s16 *)((u8 *)&D_800DA260 + off + 0x10) = 0;
    *(s32 *)((u8 *)&D_800DA260 + off + 0x14) = 0;
    *(s32 *)((u8 *)&D_800DA260 + off + 0x18) = 0;
    *(s32 *)((u8 *)&D_800DA260 + off + 0x1C) = 0;
    *(s32 *)((u8 *)&D_800DA260 + off + 0x20) = 0;
    *(u8 *)((u8 *)&D_800DA260 + off + 0x24) = 0;
    *(u8 *)((u8 *)&D_800DA260 + off + 0x25) = 0;
    for (j = 0; j < 7; j++) {
      idx = off + j * 8;
      *(s32 *)((u8 *)&D_800DA260 + idx + 0x28) = 0;
      *(s32 *)((u8 *)&D_800DA260 + idx + 0x2C) = 0;
    }
    *(s16 *)((u8 *)&D_800DA260 + off + 0x64) = 0;
    *(s16 *)((u8 *)&D_800DA260 + off + 0x66) = 0;
    *(s16 *)((u8 *)&D_800DA260 + off + 0x68) = 0;
    *(s16 *)((u8 *)&D_800DA260 + off + 0x6A) = 0;
    *(s16 *)((u8 *)&D_800DA260 + off + 0x6C) = 0;/*__repair_loop_weight*/do {s1++;} while (0);
  } while (s1 < 7);
}
