typedef struct {
  u16 unk0, unk2, unk4, unk6, unk8;
  u8 unkA[3];
  u8 unkD;
  u8 unkE[0x18 - 0xE];
  f32 x, y, z;
  u8 unk24[0x44 - 0x24];
  s32 unk44, unk48, unk4C;
  u8 *unk50;
  u8 unk54[0x60 - 0x54];
  u8 *obj;
} Rec;
typedef struct {
  s32 unk0;
  u8 *owner;
  f32 vx, vy, vz;
  s16 timer;
  u8 unk16[6];
  s32 unk1C;
  u8 unk20[4];
  f32 x, y, z;
  u8 unk30[0x67 - 0x30];
  u8 flags[7];
  u8 unk6E[8];
  u16 id;
} Obj;
extern Rec D_8011F2F0[];
extern u8 D_8006FAF0[];
extern f32 D_80168574[];
extern u8 D_802390C8[];
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
void func_80129918(void *, s32, s32, s32, f32, f32, f32);
void func_801D7028(s32, s32);
void func_8016410C(void);
void func_80164324(void);

void func_80163588(u16 arg0)
{
  Rec *rec;
  Obj *obj;
  s32 i;
  s32 r;
  u16 bits;

  if (D_8011F2F0[arg0].unk50[0] != 0)
  {
    return;
  }
  rec = &D_8011F2F0[arg0];
  obj = (Obj *) rec->obj;
  if (obj->timer > 0)
  {
    obj->timer--;
    if (obj->timer <= 0)
    {
      if (obj->vy != 0.0f)
      {
        bits = *(u16 *) (obj->owner + 0x560) & 7;
        *(u16 *) (obj->owner + 0x560) &= 0xF8;
        *(u16 *) (obj->owner + 0x560) |= bits - 1;
        func_8013E49C(obj->id);
        D_8011F2F0[arg0].unkD = 2;
      }
      else
      {
        for (i = 0; i < 7; i++)
        {
          obj->flags[i] = 0;
        }
      }
    }
  }
  if (obj->vy != 0.0f)
  {
    obj->vx *= 0.9f;
    obj->vy -= 0.11f;
    obj->vz *= 0.9f;
    func_80129918(&obj->unk1C, *(s32 *) &rec->x, *(s32 *) &rec->y, *(s32 *) &rec->z, obj->vx, obj->vy, obj->vz);
    rec->x = obj->x;
    rec->y = obj->y;
    rec->z = obj->z;
    if (obj->unk1C & 0xFFFF00)
    {
      obj->vy = 0.0f;
      return;
    }
    if (rec->y < D_80168574[*(u16 *) (D_8006FAF0 + 0x20)])
    {
      bits = *(u16 *) (obj->owner + 0x560) & 7;
      *(u16 *) (obj->owner + 0x560) &= 0xF8;
      *(u16 *) (obj->owner + 0x560) |= bits - 1;
      func_8013E49C(obj->id);
      D_8011F2F0[arg0].unkD = 2;
    }
  }
  else if (func_8013F1D4(arg0, obj) & 0xFF)
  {
    r = func_800DE41C(0, 0, 1, 0, 0x5B, 0x9B, D_802390C8, func_8016410C, func_80164324, rec->x, rec->y, rec->z, 0, 0, 0, 0.08f, 0.08f, 0.08f);
    if ((u16) (r + 2) >= 2)
    {
      D_8011F2F0[(u16) r].unk2 = D_8011F2F0[(u16) r].unk4 = D_8011F2F0[(u16) r].unk6 = D_8011F2F0[(u16) r].unk8 = 0x40;
      D_8011F2F0[(u16) r].unk44 = 0;
      D_8011F2F0[(u16) r].unk48 = 0;
      D_8011F2F0[(u16) r].unk4C = 0;
    }
    bits = *(u16 *) (obj->owner + 0x560) & 7;
    *(u16 *) (obj->owner + 0x560) &= 0xF8;
    *(u16 *) (obj->owner + 0x560) |= bits - 1;
    func_8013E49C(obj->id);
    func_801D7028(arg0, 0x28);
    D_8011F2F0[arg0].unkD = 2;
  }
}
