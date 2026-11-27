typedef struct { u8 unk0; char pad1[0xC]; u8 unkD; char padE[0x30]; u16 unk3E; char pad40[0x24]; } Cam;
typedef struct { char pad0[0x30]; f32 unk30; f32 unk34; char pad38[0x18]; s32 *unk50; char pad54[0x10]; } Obj;
typedef struct { char pad0[2]; u16 unk2; char pad4[0x55C]; u16 unk560; char pad562[0x38E]; } Car;
extern Cam D_8011F2F0[];
extern Obj D_8011F4E4[];
extern Car sCars[];

void func_8016221C(u16 arg0)
{
  s32 pad[2];
  Car *car = &sCars[D_8011F2F0[arg0].unk0];
  Obj *obj = &D_8011F4E4[car->unk2];
  s32 *p = obj->unk50;

  switch (D_8011F2F0[arg0].unk3E)
  {
    case 0:
      obj->unk34 += (3.0f - obj->unk34) * 0.4f;
      obj->unk30 += (0.3f - obj->unk30) * 0.4f;
      if (obj->unk34 > 2.8f) D_8011F2F0[arg0].unk3E = 1;
      break;
    case 1:
      obj->unk34 += (0.3f - obj->unk34) * 0.4f;
      obj->unk30 += (3.0f - obj->unk30) * 0.4f;
      if (obj->unk30 > 2.8f) D_8011F2F0[arg0].unk3E = 2;
      break;
    case 2:
      obj->unk34 = 1.0f;
      obj->unk30 = 1.0f;
      D_8011F2F0[arg0].unkD = 2;
      p[1] = 0;
      { u16 n = car->unk560 & 7; car->unk560 = (car->unk560 & 0xF8) | (n - 1); }
      break;
  }
}
