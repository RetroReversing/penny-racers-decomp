typedef struct { u8 pad0[4]; void *unk4; } Model;
typedef struct {
  u8 pad0[0x14];
  u16 child;
  u8 pad16[0x30 - 0x16];
  f32 scale[3];
  u8 pad3C[2];
  u16 state;
  u8 pad40[4];
  f32 unk44;
  u8 pad48[4];
  f32 unk4C;
  Model *model;
  u8 pad54[0x10];
} Obj;
typedef struct {
  u16 pad0;
  u16 obj;
  u8 pad4[0x210 - 4];
  u16 unk210[(0x5EC - 0x210) / 2];
  f32 unk5EC;
  u8 pad5F0[0x8E0 - 0x5F0];
  void *unk8E0;
  s16 unk8E4;
  s16 unk8E6;
  s16 unk8E8;
  u8 pad8EA[6];
} Car;
typedef struct {
  u8 pad0[0x60];
  s8 order[7];
  u8 done[7];
  u8 pad6E[2];
  f32 unk70;
  u8 pad74[8];
} Race;
u16 raceAllocSlot(void);
void func_800DF1E0(u16, u16 *);
void liftPushCars(s32, Race *);
void queueObjEvent(s32, s16);
void func_8022FE50(s32, s32, s32, s32);
extern volatile u16 gameState;
extern s16 D_800DAB30;
extern s16 D_800DAB32;
extern s16 D_800DAB34;
extern s16 D_800DAB36;
extern s16 D_800DAB38;
extern s16 D_800DAB3A;
extern s16 D_800DAB3C;
extern s16 D_800DAB3E;
extern s16 D_800DAB40;
extern s32 D_800DAB44;
extern s32 D_800DAB48;
extern s32 D_800DAB4C;
extern s32 D_800DAB50;
extern u8 D_800DAB54;

extern Obj D_8011F2F0[];
extern Race *D_8018A280;
extern s32 D_8018D674;
extern Race hitSlots[];
extern s16 carClassIndex;
extern Car sCars[];
extern Car D_8022DD10;
extern u8 D_80237980[];
extern u8 D_80322A4C[];
#define S16(o) (*(s16 *)(D_800DA26A + (o)))
#define S32(o) (*(s32 *)(D_800DA26A + (o)))

/* Race-start step for one object: when a results slot is free, claims it and sets up the start-line sCars and ranking; state 1 keeps the ranking updating. */ /* Race-start step for one object: when the race is not over, claims a results slot and sets up the start-line sCars and ranking; state 1 keeps the ranking updating. */ void updateRaceStart(u16 arg0)
{
  u16 slot;
  s32 carIndex;
  Car *car;
  Obj *racerObj;

  if (gameState != 5)
  {
    switch (D_8011F2F0[arg0].state)
    {
    case 0:
      slot = raceAllocSlot();
      if (slot != 0xFFFF)
      {
        car = &D_8022DD10;
        D_800DAB30 = 0;
        D_800DAB32 = 0x37;
        D_800DAB34 = 0xA;
        D_800DAB36 = 9;
        D_800DAB38 = 7;
        D_800DAB3A = 0;
        D_800DAB3C = 0;
        D_800DAB3E = 0;
        D_800DAB40 = 0;
        D_800DAB44 = 0;
        D_800DAB48 = 0;
        D_800DAB4C = 0;
        D_800DAB50 = 0;
        D_800DAB54 = 0;
        func_8022FE50(6, 6, 6, 1);
        switch (carClassIndex)
        {
        case 0:
          car->unk8E0 = D_80322A4C;
          car->unk5EC = 0;
          break;
        case 1:
          car->unk8E0 = D_80322A4C;
          car->unk5EC = 0;
          break;
        case 2:
          car->unk8E0 = D_80322A4C;
          car->unk5EC = 0;
          break;
        case 3:
          car->unk8E0 = D_80322A4C;
          car->unk5EC = 0;
          break;
        default:
          car->unk5EC = 0;
          break;
        }
        D_8011F2F0[D_8011F2F0[car->obj].child].model->unk4 = D_80237980;
        func_800DF1E0(D_8011F2F0[car->obj].child, car->unk210);
        D_8011F2F0[(u16) (u32) D_8011F2F0[car->obj].unk44].unk4C = 0.4f;
        D_8011F2F0[car->obj + 5].model->unk4 = 0;
        D_8011F2F0[car->obj + 6].model->unk4 = 0;
        D_8011F2F0[car->obj + 7].model->unk4 = 0;
        car->unk8E4 = 0x27;
        car->unk8E6 = 0x26;
        car->unk8E8 = 0;
        racerObj = &D_8011F2F0[car->obj];
        racerObj->scale[0] += racerObj->scale[0];
        racerObj->scale[1] += racerObj->scale[1];
        racerObj->scale[2] += racerObj->scale[2];
        D_8018A280 = &hitSlots[slot];
        D_8018A280->unk70 = 30.0f;
        for (carIndex = 0; carIndex < 7; carIndex++)
        {
          D_8018A280->done[carIndex] = 0;
          if (sCars[carIndex].obj != 0xFFFF && sCars[carIndex].unk5EC > 0.0f)
            D_8018A280->order[carIndex] = carIndex;
          else
            D_8018A280->order[carIndex] = -1;
        }
        D_8011F2F0[arg0].state = 1;
      }
      break;
    case 1:
      liftPushCars(D_8022DD10.obj, D_8018A280);
      if (D_8018D674 != 0)
        queueObjEvent(D_8022DD10.obj, 0x27);
      break;
    }
  }
}
