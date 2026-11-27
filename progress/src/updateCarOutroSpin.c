typedef struct { char pad0[2]; u16 unk2; char pad4[0x55A]; s16 unk55E; u16 unk560; char pad562[0x33F]; u8 unk8A1; char pad8A2[2]; f32 unk8A4; char pad8A8[0x28]; u8 unk8D0; char pad8D1[3]; f32 unk8D4; f32 unk8D8; } Car;
typedef struct { u16 unk0; char pad2[2]; Car *car; f32 unk8; f32 unkC; char pad10[4]; s16 timer; char pad16[0x60]; u16 unk76; } Ctl;
typedef struct { u8 unk0; char pad1[0xC]; u8 unkD; char padE[0x30]; u16 state; char pad40[0x20]; Ctl *ctl; } Cam;
typedef struct { char pad0[0x30]; f32 unk30; f32 unk34; char pad38[0x18]; s32 *unk50; char pad54[0x10]; } Obj;
typedef struct { f32 v; u8 pad[0x60]; } SlotF;
extern Cam D_8011F2F0[];
extern SlotF D_8011F318[];
extern Obj D_8011F4E4[];
extern u8 D_802378CC[];
extern u8 D_80237914[];
void queueObjEvent(u16, s32);

/* Runs one car's outro spin state machine: spins the view, slows down, then settles the car and ends the sequence. */ void updateCarOutroSpin(u16 arg0)
{
  Ctl *ctl = D_8011F2F0[arg0].ctl;
  Obj *obj = &D_8011F4E4[ctl->car->unk2];
  s32 *p = obj->unk50;

  if (ctl->timer != 0)
  {
    switch ((ctl->timer & 3) >> 1)
    {
      case 0:
        p[1] = (s32)D_802378CC;
        break;
      case 1:
        p[1] = (s32)D_80237914;
        break;
    }
    ctl->timer--;
  }
  switch (D_8011F2F0[arg0].state)
  {
    case 0:
      D_8011F318[ctl->unk0].v += ctl->unk8;
      if (D_8011F318[ctl->unk0].v > 359.0f) D_8011F318[ctl->unk0].v -= 360.0f;
      if ((ctl->unkC -= ctl->unk8) < 0.0f)
      {
        ctl->unk8 *= 0.9f;
        if (ctl->unk8 < 1.0f)
        {
          ctl->car->unk8A4 = 0.7f;
          ctl->car->unk8A1 = 2;
          ctl->car->unk8D0 = 0x78;
          if (ctl->car->unk55E == 0)
          {
            queueObjEvent(ctl->car->unk2, 0x2A);
            D_8011F2F0[arg0].state = 1;
          }
          else
          {
            D_8011F2F0[arg0].state = 3;
          }
        }
      }
      else
      {
        ctl->car->unk8A1 = 6;
        ctl->car->unk8D4 += (1.0f - ctl->car->unk8D4) * 0.3f;
        ctl->car->unk8D8 = 0;
      }
      break;
    case 1:
      p[1] = (s32)D_802378CC;
      obj->unk34 += (3.0f - obj->unk34) * 0.4f;
      obj->unk30 += (0.3f - obj->unk30) * 0.4f;
      if (obj->unk34 > 2.8f) D_8011F2F0[arg0].state = 2;
      break;
    case 2:
      p[1] = (s32)D_802378CC;
      obj->unk34 += (0.3f - obj->unk34) * 0.4f;
      obj->unk30 += (3.0f - obj->unk30) * 0.4f;
      if (obj->unk30 > 2.8f) D_8011F2F0[arg0].state = 3;
      break;
    case 3:
      obj->unk34 = 1.0f;
      obj->unk30 = 1.0f;
      ctl->car->unk560 &= 0xF8;
      func_8013E49C(ctl->unk76);
      D_8011F2F0[arg0].unkD = 2;
      if (ctl->car->unk55E == 0) p[1] = 0;
      else p[1] = (s32)D_802378CC;
      break;
  }
}
