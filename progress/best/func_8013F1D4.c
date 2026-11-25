inline static float __repair_inline(float a)
{
  return a * 0.025f;
}

extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern s16 D_8018D672;
extern u8 D_8022A770[];
typedef struct 
{
  u16 f0;
  u8 pad[2286];
} Slot_8022A772;
extern Slot_8022A772 D_8022A772[];
extern f32 sqrtf(f32);
extern void func_801D7028(u16, u8 *);
inline static float inline_fn(f32 arg0, f32 arg1)
{
  return arg0 - arg1;
}

inline static int inline_fn2(u8 *arg0, int arg1)
{
  return arg0[arg1] == 0;
}

s32 func_8013F1D4(s32 arg0, u8 *arg1_in_in)
{
  u8 *arg1_in;
  u8 *arg1;
  f32 px;
  f32 py;
  f32 pz;
  f32 dx;
  f32 dy;
  f32 dz;
  f32 dist;
  s32 slot;
  s32 __repair_phase_slot;
  s32 i;
  u8 *obj;
  u8 *ent;
  D_8018D672 = 0;
  __repair_phase_slot = (arg0 & 0xFFFF) * 100;
  px = *((f32 *) (D_8011F308 + __repair_phase_slot));
  arg1_in = arg1_in_in;
  arg1 = arg1_in;
  py = *((f32 *) (D_8011F30C + __repair_phase_slot));
  pz = *((f32 *) (D_8011F310 + __repair_phase_slot));
  for (i = 0; i < 7; i++)
  {
    slot = *((s8 *) ((arg1_in + 0x60) + i));
    if (slot == (-1))
    {
      do
      {
        continue;
      }
      while (0);
    }
    do
    {
      obj = D_8022A770 + (slot * 0x8F0);
    }
    while (0);
    __repair_phase_slot = D_8022A772[(unsigned short) i].f0 * 100;
    do
    {
      dx = px - (*((f32 *) (D_8011F308 + __repair_phase_slot))); dy = inline_fn(py, *((f32 *) (D_8011F30C + __repair_phase_slot))); dz = pz - (*((f32 *) (D_8011F310 + __repair_phase_slot)));
    }
    while (0);
    dist = sqrtf(((dx * dx) + (dy * dy)) + (dz * dz));
    do { if ((inline_fn(dist, 1) < ((*((f32 *) (arg1 + 0x70))) + (-1))) && inline_fn2(arg1, 0x67 + i))
    {
      if (!((*((u16 *) (obj + 0x560))) & 0x20))
      {
        *((s8 *) (obj + 0x8A1)) = 3;
        *((s8 *) (obj + 0x8C8)) = 0;
        *((s8 *) (obj + 0x8C9)) = 1;
        do
        {
          *((f32 *) (obj + 0x8CC)) = 360.0f;
          do
          {
            *((f32 *) (obj + 0x7B4)) = (-dx) * 0.025f;
            *((f32 *) (obj - (-(0x7BC & 0xFFFFFFFFu)))) = -__repair_inline(dz);
            *((f32 *) (obj + 0x7C0)) = (-dx) * 0.025f;
            *((f32 *) (obj + 0x7C8)) = (-dz) * ((unsigned short) 0.025f);
            do
            {
              func_801D7028(*((u16 *) (obj + 2)), arg1);
            }
            while (0);
          }
          while (0);
        }
        while (0);
      }
      __repair_phase_slot = (*((u16 *) ((*((u8 **) (arg1 + 4))) + 4))) * 8; ent = obj + __repair_phase_slot;
      *((f32 *) (ent + 0x5B4)) = (*((f32 *) (ent + 0x5B4))) + ((1.0f - (*((f32 *) (ent + 0x5B4)))) * (*((f32 *) (obj + 0x5A0))));
      arg1[0x67 + i] = 1;
      D_8018D672 = i;
      return 1;
    } } while (0);
  }

  return 0;
}

