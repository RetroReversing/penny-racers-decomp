#define COURSE (*(u16 *)(D_8006FAF0 + 0x20))
typedef struct 
{
  u8 unk0;
  u8 pad1;
  u16 unk2;
  u16 unk4;
  u8 pad6[2];
  u8 unk8[0x208];
  u8 unk210[0x20];
  u16 unk230;
  u8 pad232[2];
  u16 unk234;
  u8 pad236[0xA];
  u16 unk240;
  u16 unk242;
  u8 pad244[0x2F0];
  u16 unk534;
  u16 unk536;
  u16 unk538;
  u16 unk53A;
  u8 pad53C[0x22];
  s16 unk55E;
  s16 unk560;
  u8 pad562[0x3E];
  f32 unk5A0[4];
  u8 unk5B0;
  u8 pad5B1[0x41];
  u8 unk5F2;
  u8 pad5F3[0x1DD];
  s16 unk7D0;
  s16 unk7D2;
  u8 pad7D4[0x40];
  s16 unk814;
  s16 unk816;
  u8 pad818[0x61];
  u8 unk879;
  u8 pad87A[0x62];
  s32 unk8DC;
  u8 pad8E0[0x10];
} Car;
typedef struct 
{
  u16 unk0[8];
  u8 pad10[4];
  f32 unk14[4];
  u8 unk24;
  u8 unk25;
  u8 pad26[0x144];
  u8 unk16A[0xE];
} CarData;
typedef struct 
{
  u8 unk0;
  u8 pad1[3];
  void *unk4;
  u8 pad8[2];
  u16 unkA;
  u16 unkC;
} ObjSub;
typedef struct 
{
  u8 pad0[2];
  u16 unk2;
  u8 pad4[7];
  u8 unkB;
  u8 padC[8];
  u16 unk14;
  u8 pad16[2];
  s32 unk18;
  s32 unk1C;
  s32 unk20;
  u8 pad24[0x1A];
  u16 unk3E;
  u8 pad40[4];
  f32 unk44;
  f32 unk48;
  f32 unk4C;
  ObjSub *unk50;
  u8 pad54[0xC];
  void *unk60;
} Obj;
typedef struct 
{
  s32 unk0;
  s32 unk4;
  s32 pad8;
  s32 unkC;
  s32 pad10[2];
  s32 unk18;
  s32 pad1C[21];
} Unk801E9998;
typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
  f32 ang;
} StartPt;
extern Car D_8022A770[];
extern CarData D_800DA260[];
extern u8 D_8006FAF0[];
extern StartPt *D_802CBF80[];
extern s32 D_802CBEE0[];
extern s16 D_8021E1A6;
extern char D_80232C50[];
extern Unk801E9998 D_801E9998[];
extern Obj D_8011F2F0[];
extern u8 D_80237D18[][12];
extern u16 D_80233EC0;
extern u8 D_80226720[];
extern u8 D_80239060[];
extern void func_8022132C(Car *);
extern void func_80232360(unsigned short, u16);
extern void func_8003DE60(char *, ...);
extern void func_80221670(Car *);
extern u8 func_80148230(void);
extern u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_8013D86C(void);
extern void func_8013835C(void);
extern void func_80138304(void);
extern void func_8015BD20(void);
extern void func_8015C560(void);
extern void func_8012AD20(unsigned long long, void *, u8, u8);
extern void func_80230960(Car *);
extern s16 func_8012913C(u16, s32, s32, s32);
void func_8022FE50(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s16 *__base_D_8021E1A6;
  Car *car;
  f32 x;
  union 
  {
    CarData *pointer;
    s32 value;
  } __repair_phase_storage;
  StartPt *pt;
  StartPt *pts;
  f32 y;
  f32 z;
  u16 flag;
  int alpha;
  s16 v;
  u16 id;
  s32 idx;
  u16 *__base_D_80233EC0;
  __base_D_80233EC0 = &D_80233EC0;
  if (arg1 & 0x10)
  {
    flag = 1;
    alpha = 0x9B;
    arg1 = arg1 - 0x10;
  }
  else
  {
    flag = 0;
  }
  __repair_phase_storage.pointer = &D_800DA260[(u8) arg1];
  pts = D_802CBF80[COURSE];
  car = &D_8022A770[(u8) arg2];
  func_8022132C((alpha = 0xFF, car));
  car->unk230 = __repair_phase_storage.pointer->unk0[0];
  car->unk234 = __repair_phase_storage.pointer->unk0[1];
  car->unk240 = __repair_phase_storage.pointer->unk0[2];
  car->unk242 = __repair_phase_storage.pointer->unk0[3];
  car->unk534 = __repair_phase_storage.pointer->unk0[4];
  car->unk536 = __repair_phase_storage.pointer->unk0[5];
  car->unk53A = __repair_phase_storage.pointer->unk0[7];
  car->unk538 = __repair_phase_storage.pointer->unk0[6];
  car->unk5F2 = __repair_phase_storage.pointer->unk25;
  car->unk5A0[0] = __repair_phase_storage.pointer->unk14[0];
  car->unk5A0[1] = __repair_phase_storage.pointer->unk14[1];
  car->unk5A0[2] = __repair_phase_storage.pointer->unk14[2];
  car->unk5A0[3] = __repair_phase_storage.pointer->unk14[3];
  car->unk5B0 = __repair_phase_storage.pointer->unk24;
  switch ((u8) arg3)
  {
    case 0:
      switch (car->unk53A)
    {
      case 3:

      case 4:

      case 5:

      case 7:

      case 10:

      case 12:

      case 14:
        v = 5;
        break;

      case 8:
        v = 6;
        break;

      case 1:

      case 2:

      case 6:

      case 9:

      case 11:

      case 13:
        v = 3;
        break;

      case 15:
        v = 30;
        break;

      default:
        goto end_switch;

    }

      car->unk55E = v;
      break;
      __base_D_8021E1A6 = &D_8021E1A6;

    case 1:
    {
      long long phantom_wide = arg0;
    }
      do
    {
      func_80232360(arg2, car->unk5B0 + ((*(&D_8021E1A6)) * 4));
    }
    while (0);
      func_8003DE60(D_80232C50, (u8) arg2, ((*__base_D_8021E1A6) * 4) + car->unk5B0);
      switch (car->unk53A)
    {
      case 3:

      case 4:

      case 5:

      case 7:

      case 10:

      case 12:

      case 14:
        v = 10;
        break;

      case 8:
        v = 12;
        break;

      case 1:

      case 2:

      case 6:

      case 9:

      case 13:
        v = 6;
        break;

      case 11:
        v = 2;
        break;

      case 15:
        v = 30;
        break;

      default:
        goto end_switch;

    }

      car->unk55E = v;
      break;

  }

  end_switch:
  if ((((u8) arg3) == 0) && (((u8) arg2) < 4))
  {
    idx = (u8) arg2;
    if ((((D_801E9998[idx].unk0 != 0) && (D_801E9998[idx].unk4 != 0)) && (D_801E9998[idx].unk18 != 0)) && (D_801E9998[idx].unkC != 0))
    {
      car->unk55E = -1;
    }
  }

  car->unk560 = 0;
  do
  {
    func_80221670(car);
  }
  while (0);
  car->unk8DC = D_802CBEE0[COURSE];
  pt = &pts[(u8) arg0];
  y = pt->y + 0.5;
  if ((func_80148230() == 1) && (((u8) arg0) == 1))
  {
    switch ((s16) pt->ang)
    {
      case 90:
        x = D_802CBF80[COURSE]->x;
        z = pt->z;
        break;
        do
      {
        case -90:
          case 270:
          x = D_802CBF80[COURSE]->x;


        z = pt->z;
        break;
        case 0:
          ;

        ;
        ;
      }
      while (0);

      case 180:

      case -180:
        x = pt->x;
        z = D_802CBF80[COURSE]->z;
        break;

    }

  }
  else
  {
    x = pt->x;
    z = pt->z;
  }
  car->unk2 = func_800DE41C(0, 0, 1, 0, 0x51, alpha, &car->unk8, D_80226720, func_8013D86C, x, y, z, 0.0f, pt->ang, 0.0f, 0.2f, 0.2f, 0.2f);
  car->unk4 = (u8) arg2;
  car->unk0 = arg0;
  car->unk879 = arg3;
  D_8011F2F0[car->unk2].unk60 = car;
  if (car->unk2 <= 0xFFEF)
  {
    D_8011F2F0[D_8011F2F0[car->unk2].unk14].unk50->unk4 = D_80237D18[__repair_phase_storage.pointer->unk0[0]];
    do
    {
      func_8012AD20(D_8011F2F0[car->unk2].unk14, car->unk210, __repair_phase_storage.pointer->unk0[0], __repair_phase_storage.pointer->unk16A[__repair_phase_storage.pointer->unk0[0]]);
    }
    while (0);
  }
  func_80230960(car);
  car->unk7D0 = func_8012913C(*__base_D_80233EC0, D_8011F2F0[car->unk2].unk18, D_8011F2F0[car->unk2].unk1C, D_8011F2F0[car->unk2].unk20);
  car->unk7D2 = 0;
  car->unk814 = func_8012913C(*__base_D_80233EC0, D_8011F2F0[car->unk2].unk18, D_8011F2F0[car->unk2].unk1C, D_8011F2F0[car->unk2].unk20);
  car->unk816 = 0;
  if (flag == 0)
  {
    id = func_800DE41C(0, 0, 1, 0, 0x52, 0x9B, D_80239060, func_8013835C, func_80138304, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.05f, 0.05f, 0.05f);
    D_8011F2F0[id].unk44 = car->unk2;
    D_8011F2F0[id].unk48 = (u8) arg2;
    D_8011F2F0[id].unk4C = 0.2f;
 do { D_8011F2F0[car->unk2].unk44 = id; } while (0);
  }
  __repair_phase_storage.value = D_8011F2F0[car->unk2].unk14;
  while ((D_8011F2F0[__repair_phase_storage.value].unk50->unkC != 0xFFFF) || (D_8011F2F0[__repair_phase_storage.value].unk50->unkA != 0xFFFF))
  {
    if ((D_8011F2F0[__repair_phase_storage.value].unk50->unk0 == 2) || (D_8011F2F0[__repair_phase_storage.value].unk50->unk0 == 3))
    {
      D_8011F2F0[__repair_phase_storage.value].unk2 |= 0x8000;
    }
    __repair_phase_storage.value = D_8011F2F0[__repair_phase_storage.value].unk14;
  }

  id = func_800DE41C(0, (u8) car->unk4, 3, 0, 0x52, 0x9B, NULL, func_8015BD20, func_8015C560, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
  D_8011F2F0[id].unkB = 14;
}
