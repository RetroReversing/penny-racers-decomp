extern u8 btnModePressed[];
extern u8 btnStopPressed[];
extern s8 D_80187CF0;
extern u16 objListHead;

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

/* Runs the hide-others state machine for one object: while a flagged player state is active, every other object gets flag 0x10 set, and it is cleared again later. */ void updateObjHideState(s32 objId)
{
  u16 self;
  u16 other;

  self = objId & 0xFFFF;
  switch (D_8011F2F0[self].state) {
  case 0:
    D_80187CF0 = 0;
    D_8011F2F0[self].state = 1;
    break;
  case 1:
    if (*(s32 *)(btnModePressed + 0) == 1 || *(s32 *)(btnModePressed + 0x70) == 1 ||
        *(s32 *)(btnModePressed + 0xE0) == 1 || *(s32 *)(btnModePressed + 0x150) == 1)
    {
      other = objListHead;
      while (other != 0xFFFF)
      {
        if (other != self && D_8011F2F0[other].type != 0x63)
        {
          D_8011F2F0[other].flags |= 0x10;
        }
        other = D_8011F2F0[other].next;
      }
      D_8011F2F0[self].state = 2;
    }
    break;
  case 2:
    if (*(s32 *)(btnStopPressed + 0) == 1 || *(s32 *)(btnStopPressed + 0x70) == 1 ||
        *(s32 *)(btnStopPressed + 0xE0) == 1 || *(s32 *)(btnStopPressed + 0x150) == 1)
    {
      other = objListHead;
      while (other != 0xFFFF)
      {
        D_8011F2F0[other].flags &= 0xFFEF;
        other = D_8011F2F0[other].next;
      }
      D_8011F2F0[self].state = 1;
    }
    break;
  }
}
