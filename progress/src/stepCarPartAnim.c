typedef struct { u8 carIndex; char pad1[0xC]; u8 partPhase; char padE[0x30]; u16 animState; char pad40[0x24]; } PlayerSlot;
typedef struct { char pad0[0x30]; f32 scaleA; f32 scaleB; char pad38[0x18]; s32 *stateWords; char pad54[0x10]; } CarPartObj;
typedef struct { char pad0[2]; u16 partIndex; char pad4[0x55C]; u16 partTimer; char pad562[0x38E]; } Car;
extern PlayerSlot D_8011F2F0[];
extern CarPartObj carPartObjs[];
extern Car sCars[];

/* Steps the two-phase scale animation of one player's car part: phase 0 grows scaleA, phase 1 grows scaleB, phase 2 snaps both to 1 and counts down the part timer. */
void stepCarPartAnim(u16 slot)
{
  s32 pad[2];
  Car *car = &sCars[D_8011F2F0[slot].carIndex];
  CarPartObj *obj = &carPartObjs[car->partIndex];
  s32 *words = obj->stateWords;

  switch (D_8011F2F0[slot].animState)
  {
    case 0:
      obj->scaleB += (3.0f - obj->scaleB) * 0.4f;
      obj->scaleA += (0.3f - obj->scaleA) * 0.4f;
      if (obj->scaleB > 2.8f) D_8011F2F0[slot].animState = 1;
      break;
    case 1:
      obj->scaleB += (0.3f - obj->scaleB) * 0.4f;
      obj->scaleA += (3.0f - obj->scaleA) * 0.4f;
      if (obj->scaleA > 2.8f) D_8011F2F0[slot].animState = 2;
      break;
    case 2:
      obj->scaleB = 1.0f;
      obj->scaleA = 1.0f;
      D_8011F2F0[slot].partPhase = 2;
      words[1] = 0;
      { u16 timer = car->partTimer & 7; car->partTimer = (car->partTimer & 0xF8) | (timer - 1); }
      break;
  }
}
