typedef struct { char pad0[2]; u16 unk2; char pad4[0x55A]; s16 unk55E; u16 unk560; char pad562[0x38E]; } Car;
typedef struct { char pad0[4]; Car *car; char pad8[0xC]; u16 timer; char pad16[0x60]; u16 unk76; } Ctl;
typedef struct { u8 unk0; char pad1[0xC]; u8 unkD; char padE[0x30]; u16 state; char pad40[0x20]; Ctl *ctl; } Cam;
typedef struct { char pad0[0x30]; f32 unk30; f32 unk34; char pad38[0x18]; s32 *unk50; char pad54[0x10]; } Obj;
extern Cam D_8011F2F0[];
extern Obj D_8011F4E4[];
extern u8 D_802378FC[];
extern u8 D_80237914[];

/* Per-frame update for a car outro: counts down the timer, then lerps the object's scale and offset through two phases before releasing it. */ void updateCarOutroAnim(u16 slot)
{
  Ctl *ctl = D_8011F2F0[slot].ctl;
  Obj *obj = &D_8011F4E4[ctl->car->unk2];
  s32 *animSlot = obj->unk50;

  switch (((ctl->timer & 3) >> 1) && (s16)ctl->timer > 0)
  {
    case 0:
      animSlot[1] = (s32)D_802378FC;
      break;
    case 1:
      animSlot[1] = (s32)D_80237914;
      break;
  }
  ctl->timer--;
  if ((s16)ctl->timer == 0)
  {
    if (ctl->car->unk55E == 0)
    {
      queueObjEvent(ctl->car->unk2, 0x2A);
      D_8011F2F0[slot].state = 1;
    }
    else
    {
      D_8011F2F0[slot].state = 3;
    }
  }
  switch (D_8011F2F0[slot].state)
  {
    case 1:
      animSlot[1] = (s32)D_802378FC;
      obj->unk34 += (3.0f - obj->unk34) * 0.4f;
      obj->unk30 += (0.3f - obj->unk30) * 0.4f;
      if (obj->unk34 > 2.8f) D_8011F2F0[slot].state = 2;
      break;
    case 2:
      animSlot[1] = (s32)D_802378FC;
      obj->unk34 += (0.3f - obj->unk34) * 0.4f;
      obj->unk30 += (3.0f - obj->unk30) * 0.4f;
      if (obj->unk30 > 2.8f) D_8011F2F0[slot].state = 3;
      break;
    case 3:
      obj->unk34 = 1.0f;
      obj->unk30 = 1.0f;
      ctl->car->unk560 &= 0xBF;
      func_8013E49C(ctl->unk76);
      D_8011F2F0[slot].unkD = 2;
      if (ctl->car->unk55E == 0) animSlot[1] = 0;
      break;
  }
}
