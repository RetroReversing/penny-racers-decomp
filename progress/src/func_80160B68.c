typedef struct { char pad0[2]; u16 unk2; u16 unk4; char pad6[0x558]; s16 unk55E; u16 unk560; char pad562[0x38E]; } Car;
typedef struct { char pad0[4]; Car *car; char pad8[0xC]; u16 timer; char pad16; u8 unk17; u8 unk18; u8 unk19; char pad1A[0x5C]; u16 unk76; } Ctl;
typedef struct { u8 unk0; char pad1[0xB]; u8 unkC; u8 unkD; char padE[6]; u16 unk14; char pad16[2]; f32 x; f32 y; f32 z; f32 rx; f32 ry; f32 rz; char pad30[0xE]; u16 state; char pad40[0x10]; u8 *unk50; char pad54[0xC]; Ctl *ctl; } Cam;
typedef struct { char pad0[0x30]; f32 unk30; f32 unk34; char pad38[0x18]; s32 *unk50; char pad54[0x10]; } Obj;
extern Cam D_8011F2F0[];
extern u8 D_802378C0[];
extern u8 D_80237914[];
extern u8 D_8022E618[];

void func_80160B68(u16 arg0)
{
  Cam *cam;
  Cam *other;
  Cam *a;
  Cam *b;
  Ctl *ctl;
  Obj *obj;
  s32 *p;

  if (*D_8011F2F0[arg0].unk50 == 0)
  {
    cam = &D_8011F2F0[arg0];
    other = &D_8011F2F0[cam->unk14];
    ctl = cam->ctl;
    a = &D_8011F2F0[ctl->car->unk2];
    b = &D_8011F2F0[ctl->car->unk2 + 1];
    obj = (Obj *)&D_8011F2F0[ctl->car->unk2 + 5];
    p = obj->unk50;
    cam->x = a->x;
    cam->y = a->y;
    cam->z = a->z;
    cam->rx = a->rx;
    cam->ry = a->ry;
    cam->rz = a->rz;
    other->x = b->x;
    other->y = b->y;
    other->z = b->z;
    other->rx = b->rx;
    other->ry = b->ry;
    other->rz = b->rz;
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
        p[1] = (s32)D_802378C0;
        break;
      case 1:
        p[1] = (s32)D_80237914;
        break;
    }
    ctl->timer--;
    if ((s16)ctl->timer == 0)
    {
      if (ctl->car->unk55E == 0)
      {
        func_801D7028(ctl->car->unk2, 0x2A);
        D_8011F2F0[arg0].state = 1;
      }
      else
      {
        D_8011F2F0[arg0].state = 3;
      }
    }
    switch (D_8011F2F0[arg0].state)
    {
      case 0:
        if (D_8011F2F0[D_8011F2F0[arg0].unk14].unkC < 0xFA)
        {
          D_8011F2F0[D_8011F2F0[arg0].unk14].unkC += 5;
        }
        break;
      case 1:
        p[1] = (s32)D_802378C0;
        obj->unk34 += (3.0f - obj->unk34) * 0.4f;
        obj->unk30 += (0.3f - obj->unk30) * 0.4f;
        if (obj->unk34 > 2.8f) D_8011F2F0[arg0].state = 2;
        break;
      case 2:
        p[1] = (s32)D_802378C0;
        obj->unk34 += (0.3f - obj->unk34) * 0.4f;
        obj->unk30 += (3.0f - obj->unk30) * 0.4f;
        if (obj->unk30 > 2.8f) D_8011F2F0[arg0].state = 3;
        break;
      case 3:
        obj->unk34 = 1.0f;
        obj->unk30 = 1.0f;
        if (ctl->car->unk55E == 0) p[1] = 0;
        D_8011F2F0[D_8011F2F0[arg0].unk14].unkC -= 5;
        if (D_8011F2F0[D_8011F2F0[arg0].unk14].unkC < 6)
        {
          D_8011F2F0[arg0].state = 4;
        }
        break;
      case 4:
        if (ctl->car->unk55E == 0) p[1] = 0;
        ctl->car->unk560 &= 0xDF;
        func_8013E49C(ctl->unk76);
        D_8011F2F0[arg0].unkD = 2;
        break;
    }
  }
}
