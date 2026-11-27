s32 func_8013E49C(u16);
u16 queueObjEvent(u16, s32);
extern s32 D_802378D8;
extern s32 D_80237914;
typedef struct { char pad0[2]; u16 unk2; char pad4[0x55A]; s16 unk55E; u16 unk560; char pad562[0x36E]; s8 unk8D0; } Car;
typedef struct { char pad0[4]; Car *unk4; char pad8[0xC]; u16 unk14; char pad16[0x60]; u16 unk76; } Info;
typedef struct { u8 unk0; char pad1[0xC]; u8 unkD; char padE[0x30]; u16 unk3E; char pad40[0x20]; Info *unk60; } Cam;
typedef struct { char pad0[0x30]; f32 unk30; f32 unk34; char pad38[0x18]; s32 *unk50; char pad54[0x10]; } Obj;
extern Cam D_8011F2F0[];
extern Obj D_8011F4E4[];

void func_8016018C(u16 arg0)
{
  s32 pad[2];
  Info *info = D_8011F2F0[arg0].unk60;
  Car *car = info->unk4;
  Obj *obj = &D_8011F4E4[car->unk2];
  s32 *p = obj->unk50;
  s32 flag;

  car->unk8D0 = 0x78;
  flag = 0;
  if (((info->unk14 & 3) >> 1) != 0)
    flag = (s16)info->unk14 > 0;
  switch (flag)
  {
    case 0:
      p[1] = (s32)&D_802378D8;
      break;
    case 1:
      p[1] = (s32)&D_80237914;
      break;
  }
  info->unk14--;
  if ((s16)info->unk14 == 0)
  {
    if (info->unk4->unk55E == 0)
    {
      queueObjEvent(info->unk4->unk2, 0x2A);
      D_8011F2F0[arg0].unk3E = 1;
    }
    else
    {
      D_8011F2F0[arg0].unk3E = 3;
    }
  }
  switch (D_8011F2F0[arg0].unk3E)
  {
    case 1:
      p[1] = (s32)&D_802378D8;
      obj->unk34 += (3.0f - obj->unk34) * 0.4f;
      obj->unk30 += (0.3f - obj->unk30) * 0.4f;
      if (obj->unk34 > 2.8f) D_8011F2F0[arg0].unk3E = 2;
      break;
    case 2:
      p[1] = (s32)&D_802378D8;
      obj->unk34 += (0.3f - obj->unk34) * 0.4f;
      obj->unk30 += (3.0f - obj->unk30) * 0.4f;
      if (obj->unk30 > 2.8f) D_8011F2F0[arg0].unk3E = 3;
      break;
    case 3:
      obj->unk34 = 1.0f;
      obj->unk30 = 1.0f;
      info->unk4->unk560 &= 0xF8;
      func_8013E49C(info->unk76);
      D_8011F2F0[arg0].unkD = 2;
      if (info->unk4->unk55E == 0) p[1] = 0;
      break;
  }
}
