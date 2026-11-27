typedef struct { u8 unk0; char pad1[0xC]; u8 unkD; char padE[0x30]; u16 unk3E; char pad40[0x10]; u8 *unk50; char pad54[0x10]; } Obj;
typedef struct { u8 *unk0; char pad4[0x60]; } Rec;
extern Obj D_8011F2F0[];
extern struct { u8 *p; char pad[0x60]; } D_8011F350[];
extern u16 D_8018BC3C;
extern u16 D_80190CB6;
extern u8 D_8021EEC2[];
extern struct { s32 value; } D_8021EFA0;
extern void func_80211C7C(s32);
extern void func_80211B90(void);
extern void func_802117AC(void);
extern void updateNameEntry(void);
extern u16 objCreate(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_8021078C(u16 arg0)
{
  u16 *sp = &D_80190CB6;
  Obj *p = &D_8011F2F0[arg0];


  func_80211C7C(0x14);
  switch (p->unk3E)
  {
    case 0:
      if (D_8011F350[D_8018BC3C].p[0] == 0) p->unk3E = 0x10;
      break;
    case 0x10:
      *sp = objCreate(0, 0, 3, 0, 0x4F, 0, 0, func_802117AC, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      D_8021EFA0.value = (D_8021EFA0.value & ~0x4000) | 0x8000;
      p->unk3E = 0x11;
    case 0x11:
      if (!(D_8021EFA0.value & 0x8000))
      {
        D_8011F2F0[*sp].unkD = 2;
        p->unk3E = 0x20;
      }
      break;
    case 0x20:
      *sp = objCreate(0, 0, 3, 0, 0x4F, 0, 0, updateNameEntry, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      D_8021EEC2[0] = 0;
      D_8021EEC2[-1] = 0x5A;
      func_80211B90();
      *(s32 *)(D_8021EEC2 + 0xDE) |= 0xC000;
      p->unk3E = 0x21;
    case 0x21:
      if (!(D_8021EFA0.value & 0x8000))
      {
        D_8011F2F0[*sp].unkD = 2;
        p->unk3E = 0x10;
      }
      break;
  }
}
