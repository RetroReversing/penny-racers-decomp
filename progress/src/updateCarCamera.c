typedef struct { char pad0[2]; u16 unk2; u16 unk4; char pad6[0x558]; s16 unk55E; u16 unk560; char pad562[0x38E]; } Car;
typedef struct { char pad0[4]; Car *car; char pad8[0xC]; u16 timer; char pad16; u8 unk17; u8 unk18; u8 unk19; char pad1A[0x5C]; u16 unk76; } Ctl;
typedef struct { u8 unk0; char pad1[0xB]; u8 unkC; u8 unkD; char padE[6]; u16 unk14; char pad16[2]; f32 x; f32 y; f32 z; f32 rx; f32 ry; f32 rz; char pad30[0xE]; u16 state; char pad40[0x10]; u8 *unk50; char pad54[0xC]; Ctl *ctl; } Cam;
typedef struct { char pad0[0x30]; f32 unk30; f32 unk34; char pad38[0x18]; s32 *unk50; char pad54[0x10]; } Obj;
extern Cam D_8011F2F0[];
extern u8 D_802378C0[];
extern u8 D_80237914[];
extern u8 D_8022E618[];

/* Per-frame update for a camera that follows a car. It copies the car's pose
 * into the camera pair, steps the camera state machine (pan, hold, release),
 * and drives the car's camera display state. */
void updateCarCamera(u16 index)
{
  Cam *camera;
  Cam *sideCam;
  Cam *leadObj;
  Cam *trailObj;
  Ctl *ctl;
  Obj *lookObj;
  s32 *animSlot;

  if (*D_8011F2F0[index].unk50 == 0)
  {
    camera = &D_8011F2F0[index];
    sideCam = &D_8011F2F0[camera->unk14];
    ctl = camera->ctl;
    leadObj = &D_8011F2F0[ctl->car->unk2];
    trailObj = &D_8011F2F0[ctl->car->unk2 + 1];
    lookObj = (Obj *)&D_8011F2F0[ctl->car->unk2 + 5];
    animSlot = lookObj->unk50;
    camera->x = leadObj->x;
    camera->y = leadObj->y;
    camera->z = leadObj->z;
    camera->rx = leadObj->rx;
    camera->ry = leadObj->ry;
    camera->rz = leadObj->rz;
    sideCam->x = trailObj->x;
    sideCam->y = trailObj->y;
    sideCam->z = trailObj->z;
    sideCam->rx = trailObj->rx;
    sideCam->ry = trailObj->ry;
    sideCam->rz = trailObj->rz;
    if (D_8022E618[ctl->car->unk4])
    {
      ctl->unk19 = ctl->unk18 = 5;
    }
    ctl->unk17 = ctl->unk17 < 0xFF ? ctl->unk17 + 0xA : 0x9B;
    if (ctl->unk18 < 0xFF)
    {
      ctl->unk18 += 0xA;
    }
    if (ctl->unk19 < 0xFF)
    {
      ctl->unk19 += 0xA;
    }
    switch (((ctl->timer & 3) >> 1) && (s16)ctl->timer > 0)
    {
      case 0:
        animSlot[1] = (s32)D_802378C0;
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
        D_8011F2F0[index].state = 1;
      }
      else
      {
        D_8011F2F0[index].state = 3;
      }
    }
    switch (D_8011F2F0[index].state)
    {
      case 0:
        if (D_8011F2F0[D_8011F2F0[index].unk14].unkC < 0xFA)
        {
          D_8011F2F0[D_8011F2F0[index].unk14].unkC += 5;
        }
        break;
      case 1:
        animSlot[1] = (s32)D_802378C0;
        lookObj->unk34 += (3.0f - lookObj->unk34) * 0.4f;
        lookObj->unk30 += (0.3f - lookObj->unk30) * 0.4f;
        if (lookObj->unk34 > 2.8f) D_8011F2F0[index].state = 2;
        break;
      case 2:
        animSlot[1] = (s32)D_802378C0;
        lookObj->unk34 += (0.3f - lookObj->unk34) * 0.4f;
        lookObj->unk30 += (3.0f - lookObj->unk30) * 0.4f;
        if (lookObj->unk30 > 2.8f) D_8011F2F0[index].state = 3;
        break;
      case 3:
        lookObj->unk34 = 1.0f;
        lookObj->unk30 = 1.0f;
        if (ctl->car->unk55E == 0) animSlot[1] = 0;
        D_8011F2F0[D_8011F2F0[index].unk14].unkC -= 5;
        if (D_8011F2F0[D_8011F2F0[index].unk14].unkC < 6)
        {
          D_8011F2F0[index].state = 4;
        }
        break;
      case 4:
        if (ctl->car->unk55E == 0) animSlot[1] = 0;
        ctl->car->unk560 &= 0xDF;
        func_8013E49C(ctl->unk76);
        D_8011F2F0[index].unkD = 2;
        break;
    }
  }
}
