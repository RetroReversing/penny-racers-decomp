extern u8 D_801E99C0[];
extern u8 D_801E9994[];
extern s8 D_80187CF0;
extern u16 func_800E1850;

typedef struct Rec {
  u8 type;
  u8 pad0;
  u16 flags;
  u8 pad1[0x0C];
  u16 next;
  u8 pad2[0x2C];
  u16 state;
  u8 pad3[0x24];
} Rec;

extern Rec D_8011F2F0[];

void func_8015A728(s32 arg0)
{
  u16 idx;
  u16 cur;

  idx = arg0 & 0xFFFF;
  switch (D_8011F2F0[idx].state) {
  case 0:
    D_80187CF0 = 0;
    D_8011F2F0[idx].state = 1;
    break;
  case 1:
    if (*(s32 *)(D_801E99C0 + 0) == 1 || *(s32 *)(D_801E99C0 + 0x70) == 1 ||
        *(s32 *)(D_801E99C0 + 0xE0) == 1 || *(s32 *)(D_801E99C0 + 0x150) == 1)
    {
      cur = func_800E1850;
      while (cur != 0xFFFF)
      {
        if (cur != idx && D_8011F2F0[cur].type != 0x63)
        {
          D_8011F2F0[cur].flags |= 0x10;
        }
        cur = D_8011F2F0[cur].next;
      }
      D_8011F2F0[idx].state = 2;
    }
    break;
  case 2:
    if (*(s32 *)(D_801E9994 + 0) == 1 || *(s32 *)(D_801E9994 + 0x70) == 1 ||
        *(s32 *)(D_801E9994 + 0xE0) == 1 || *(s32 *)(D_801E9994 + 0x150) == 1)
    {
      cur = func_800E1850;
      while (cur != 0xFFFF)
      {
        D_8011F2F0[cur].flags &= 0xFFEF;
        cur = D_8011F2F0[cur].next;
      }
      D_8011F2F0[idx].state = 1;
    }
    break;
  }
}
