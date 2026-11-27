typedef struct { char pad0[2]; u16 unk2; char pad4[0x55A]; s16 unk55E; u16 unk560; char pad562[0x38E]; } Car;
typedef struct { char pad0[4]; Car *car; f32 vx; f32 vy; f32 vz; u16 timer; char pad16[0x60]; u16 unk76; } Ctl;
typedef struct { u8 unk0; char pad1[0x17]; f32 x; f32 y; f32 z; } Pos;
typedef struct { u8 unk0; char pad1[0xC]; u8 unkD; char padE[0x30]; u16 state; char pad40[0x20]; Ctl *ctl; } Cam;
typedef struct { char pad0[0x30]; f32 unk30; f32 unk34; char pad38[0x18]; s32 *unk50; char pad54[0x10]; } Obj;
extern Cam D_8011F2F0[];
extern Obj carPartObjs[];
extern u8 D_802378F0[];
extern u8 D_80237914[];
extern u8 D_802390C8[];
typedef struct { f32 x, y, z; u8 pad[0x58]; } Pos2;
extern Pos2 D_8011F308[];
extern void updateCarPartEffect();
extern void func_801657F0();
typedef struct { u8 pad0[0x18]; f32 x, y, z; u8 pad24[0x40]; } P64;
s32 raceAllocSlot(void);
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void initHitSlot(u16, s32, s16, f32, f32, f32, u16);
s32 nextRandom(void);

/* Per-frame update for a car bump effect: flashes the effect object, spawns sparks, scales the effect in and out, then clears the car's lap bits and ends. */ void updateCarBumpEffect(u16 effectId)
{
  Ctl *ctl = D_8011F2F0[effectId].ctl;
  Obj *effectObj = &carPartObjs[ctl->car->unk2];
  s32 *objRegs = effectObj->unk50;

  switch (((ctl->timer & 3) >> 1) && (s16)ctl->timer > 0)
  {
    case 0:
      objRegs[1] = (s32)D_802378F0;
      break;
    case 1:
      objRegs[1] = (s32)D_80237914;
      break;
  }
  ctl->timer--;
  if ((s16)ctl->timer == 0)
  {
    if (ctl->car->unk55E == 0)
    {
      queueObjEvent(ctl->car->unk2, 0x2A);
      D_8011F2F0[effectId].state = 1;
    }
    else
    {
      D_8011F2F0[effectId].state = 3;
    }
  }
  switch (D_8011F2F0[effectId].state)
  {
    case 0:
    {
      s32 id = raceAllocSlot();
      u16 slot = id;
      u16 o;
      if (slot != 0xFFFF)
      {
        o = objCreate(0, 0, 1, 0, 0x5B, 0xA, D_802390C8, updateCarPartEffect, func_801657F0,
                          D_8011F308[effectId].x, D_8011F308[effectId].y, D_8011F308[effectId].z, 0, 0, 0, 0.01f, 0.01f, 0.01f);
        if (o == 0xFFFE || o == 0xFFFF)
        {
          func_8013E49C(slot);
        }
        else
        {
          f32 randX = ((f32)(u32)(nextRandom() & 0x1F) - 16.0f) * 0.5f;
          f32 randY = (f32)(u32)(nextRandom() & 0xF) * 0.5f;
          f32 randZ = ((f32)(u32)(nextRandom() & 0x1F) - 16.0f) * 0.5f;
          initHitSlot(id, o, 0x40, randX - ctl->vx, randY - ctl->vy, randZ - ctl->vz, (10 - (s16)ctl->timer) * 2);
          ctl->vx *= 0.9f;
          ctl->vy *= 0.9f;
          ctl->vz *= 0.9f;
        }
      }
      break;
    }
    case 1:
      objRegs[1] = (s32)D_802378F0;
      effectObj->unk34 += (3.0f - effectObj->unk34) * 0.4f;
      effectObj->unk30 += (0.3f - effectObj->unk30) * 0.4f;
      if (effectObj->unk34 > 2.8f) D_8011F2F0[effectId].state = 2;
      break;
    case 2:
      objRegs[1] = (s32)D_802378F0;
      effectObj->unk34 += (0.3f - effectObj->unk34) * 0.4f;
      effectObj->unk30 += (3.0f - effectObj->unk30) * 0.4f;
      if (effectObj->unk30 > 2.8f) D_8011F2F0[effectId].state = 3;
      break;
    case 3:
      effectObj->unk34 = 1.0f;
      effectObj->unk30 = 1.0f;
      {
        s32 n = ctl->car->unk560 & 7;
        ctl->car->unk560 &= 0xF8;
        ctl->car->unk560 |= n - 1;
      }
      func_8013E49C(ctl->unk76);
      D_8011F2F0[effectId].unkD = 2;
      if (ctl->car->unk55E == 0) objRegs[1] = 0;
      break;
  }
}
