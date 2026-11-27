typedef struct { u8 unk0; char pad1[0xC]; u8 unkD; char padE[0x30]; u16 unk3E; char pad40[0x10]; u8 *unk50; char pad54[0x10]; } Obj;
typedef struct { u8 *unk0; char pad4[0x60]; } Rec;
extern Obj D_8011F2F0[];
extern struct { u8 *p; char pad[0x60]; } D_8011F350[];
extern u16 D_8018BC3C;
extern u16 D_80190CB6;
extern u8 D_8021EEC2[];
extern struct { s32 value; } D_8021EFA0;
extern void updateColorCycle(s32);
extern void func_80211B90(void);
extern void updateMenuNavigation(void);
extern void updateNameEntry(void);
extern u16 objCreate(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

/* Steps one course-select menu object through its states: wait for the menu, spawn the navigation object,
   then the name-entry object, and return to the menu when the child finishes. */
void updateCourseSelectState(u16 objIndex)
{
  u16 *childSlot = &D_80190CB6;
  Obj *obj = &D_8011F2F0[objIndex];


  updateColorCycle(0x14);
  switch (obj->unk3E)
  {
    case 0:
      if (D_8011F350[D_8018BC3C].p[0] == 0) obj->unk3E = 0x10;
      break;
    case 0x10:
      *childSlot = objCreate(0, 0, 3, 0, 0x4F, 0, 0, updateMenuNavigation, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      D_8021EFA0.value = (D_8021EFA0.value & ~0x4000) | 0x8000;
      obj->unk3E = 0x11;
    case 0x11:
      if (!(D_8021EFA0.value & 0x8000))
      {
        D_8011F2F0[*childSlot].unkD = 2;
        obj->unk3E = 0x20;
      }
      break;
    case 0x20:
      *childSlot = objCreate(0, 0, 3, 0, 0x4F, 0, 0, updateNameEntry, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      D_8021EEC2[0] = 0;
      D_8021EEC2[-1] = 0x5A;
      func_80211B90();
      *(s32 *)(D_8021EEC2 + 0xDE) |= 0xC000;
      obj->unk3E = 0x21;
    case 0x21:
      if (!(D_8021EFA0.value & 0x8000))
      {
        D_8011F2F0[*childSlot].unkD = 2;
        obj->unk3E = 0x10;
      }
      break;
  }
}
