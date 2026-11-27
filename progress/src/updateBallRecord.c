typedef struct {
  u16 unk0, unk2, unk4, unk6, unk8;
  u8 unkA[3];
  u8 unkD;
  u8 unkE[0x18 - 0xE];
  f32 x, y, z;
  u8 unk24[4];
  f32 unk28;
  u8 unk2C[0x3E - 0x2C];
  u16 state;
  u8 unk40[4];
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
  u8 unk30[0x60 - 0x30];
  s8 who[7];
  u8 flags[7];
  u8 unk6E[8];
  u16 id;
} Obj;
extern Rec D_8011F2F0[];
extern u8 D_8006FAF0[];
extern f32 D_80168574[];
extern u8 D_802390C8[];
s32 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
void ballMoveCollide(void *, s32, s32, s32, f32, f32, f32);
void queueObjEvent(s32, s32);
void func_8016410C(void);
void func_80164324(void);

extern u16 D_8018D672;
typedef struct { f32 v; u8 pad[0x8EC]; } Big;
extern Big D_8022AF30[];
extern Big D_8022AF38[];

/* Per-frame update for one ball record. State 0 is the bounce/roll physics,
 * state 1 waits for a respawn check. A ball that falls below the track
 * (y < -5000) or is reset spends one life on its owner and queues a new ball. */
void updateBallRecord(u16 index)
{
  Rec *rec;
  Obj *obj;
  s32 i;
  s32 r;
  u16 bits;

  if (D_8011F2F0[index].unk50[0] != 0)
  {
    return;
  }
  rec = &D_8011F2F0[index];
  obj = (Obj *) rec->obj;
  switch (D_8011F2F0[index].state)
  {
  case 0:
    obj->vx *= 0.8f;
    obj->vy -= 0.11f;
    obj->vz *= 0.8f;
    rec->unk28 += 10.0f;
    if (rec->unk28 > 359.0f)
    {
      rec->unk28 -= 360.0f;
    }
    ballMoveCollide(&obj->unk1C, *(s32 *) &rec->x, *(s32 *) &rec->y, *(s32 *) &rec->z, obj->vx, obj->vy, obj->vz);
    rec->x = obj->x;
    rec->y = obj->y;
    rec->z = obj->z;
    if (obj->unk1C & 0xFFFF00)
    {
      if (((u8 *) obj)[0x1D])
      {
        obj->vy = 0.0f;
        for (i = 0; i < 7; i++)
        {
          if (obj->who[i] != -1)
          {
            obj->flags[i] = 0;
          }
        }
        D_8011F2F0[index].state = 1;
      }
      else
      {
        bits = *(u16 *) (obj->owner + 0x560) & 7;
        *(u16 *) (obj->owner + 0x560) &= 0xF8;
        *(u16 *) (obj->owner + 0x560) |= bits - 1;
        func_8013E49C(obj->id);
        D_8011F2F0[index].unkD = 2;
      }
    }
    if (rec->y < -5000.0f)
    {
      r = objCreate(0, 0, 1, 0, 0x5B, 0x9B, D_802390C8, func_8016410C, func_80164324, rec->x, rec->y, rec->z, 0, 0, 0, 0.08f, 0.08f, 0.08f);
      if ((u16) (r + 2) >= 2)
      {
        D_8011F2F0[(u16) r].unk2 = D_8011F2F0[(u16) r].unk4 = D_8011F2F0[(u16) r].unk6 = D_8011F2F0[(u16) r].unk8 = 0x40;
        D_8011F2F0[(u16) r].unk44 = 0;
        D_8011F2F0[(u16) r].unk48 = 0;
        D_8011F2F0[(u16) r].unk4C = 0;
      }
      {
        bits = *(u16 *) (obj->owner + 0x560) & 7;
        *(u16 *) (obj->owner + 0x560) &= 0xF8;
        *(u16 *) (obj->owner + 0x560) |= bits - 1;
        func_8013E49C(obj->id);
        D_8011F2F0[index].unkD = 2;
      }
    }
    break;
  case 1:
    if (liftHitCars(index, obj) & 0xFF)
    {
      r = objCreate(0, 0, 1, 0, 0x5B, 0x9B, D_802390C8, func_8016410C, func_80164324, rec->x, rec->y, rec->z, 0, 0, 0, 0.08f, 0.08f, 0.08f);
      if ((u16) (r + 2) >= 2)
      {
        D_8011F2F0[(u16) r].unk2 = D_8011F2F0[(u16) r].unk4 = D_8011F2F0[(u16) r].unk6 = D_8011F2F0[(u16) r].unk8 = 0x40;
        D_8011F2F0[(u16) r].unk44 = 0;
        D_8011F2F0[(u16) r].unk48 = 0;
        D_8011F2F0[(u16) r].unk4C = 0;
      }
      if (--obj->timer <= 0)
      {
        bits = *(u16 *) (obj->owner + 0x560) & 7;
        *(u16 *) (obj->owner + 0x560) &= 0xF8;
        *(u16 *) (obj->owner + 0x560) |= bits - 1;
        func_8013E49C(obj->id);
        D_8011F2F0[index].unkD = 2;
      }
      else
      {
        obj->vx = -D_8022AF30[D_8018D672].v;
        obj->vy = 2.0f;
        obj->vz = -D_8022AF38[D_8018D672].v;
        D_8011F2F0[index].state = 0;
      }
      queueObjEvent(index, 0x27);
    }
    break;
  }
}
