s32 func_800DE41C(s32, u8, s32, s32, s32, s32, s32 *, void *, s32, f32, f32, f32, s32, f32, s32, f32, f32, f32);
s32 func_8013E364(void);
void func_8013E818(s32, s32, s32, s32, f32, f32, s32);
void func_801D7028(s32, s32);
typedef struct 
{
  f32 f0;
  u8 pad[96];
} Slot_8011F308;
extern Slot_8011F308 D_8011F308[];
typedef struct 
{
  f32 f0;
  u8 pad[96];
} Slot_8011F30C;
extern Slot_8011F30C D_8011F30C[];
typedef struct 
{
  f32 f0;
  u8 pad[96];
} Slot_8011F310;
extern Slot_8011F310 D_8011F310[];
typedef struct 
{
  f32 f0;
  u8 pad[96];
} Slot_8011F320;
extern Slot_8011F320 D_8011F320[];
extern u8 D_8018D6C4[];
extern u8 D_8022A770[];
extern u8 D_8022A772[];
extern u8 D_8022ACD0[];
extern u8 D_8022AED0[];
extern u8 D_80239540[];
extern s32 func_80166DC0;
extern s32 func_8016711C;
inline static char *inline_fn(char *arg0)
{
  return arg0;
}

void func_801669D0(void *arg0_in)
{
  void * arg0;
  
  s32 a1;
  s32 s3;
  s32 s0;
  unsigned short s1;
  s32 s2;
  s3 = *((s32 *) (((char *) arg0) + 0x898));
  arg0 = arg0_in;
  if ((s3 == 1) && (!((*((u16 *) (((char *) arg0) + 0x560))) & 0x4F)))
  {
    if (D_8011F308)
    {
      s1 = func_8013E364();
      s2 = s1;
    }
    else
    {
      s1 = func_8013E364();
      s2 = s1;
    }
    if (s2 != 0xFFFF)
    {
      a1 = func_800DE41C(0, 0, 3, 0, 0x20, *((s32 *) (((char *) arg0) + 0x898)), NULL, (void *) (&func_80166DC0), 0, 0.0f, 0.0f, 0.0f, 0, 0.0f, 0, 0.0f, 0.0f, 0.0f);
      if (((u16) (a1 + 2)) < 2)
      {
        ((void (*)(s32, s32)) func_8013E49C)(s2, a1);
        return;
      }
      if (s0)
      {
        func_8013E818(s1, (u16) a1, 0, 0, 0.0f, 0.0f, 0x136);
        *((void **) (((char *) D_8018D6C4) + (s1 * 0x7C))) = arg0;
        *((u16 *) (((char *) arg0) + 0x560)) |= 0x40;
      }
      else
      {
        func_8013E818(s1, (u16) a1, 0, 0, 0.0f, 0.0f, 0x136);
        *((void **) (((char *) D_8018D6C4) + (s1 * 0x7C))) = arg0;
        *((u16 *) (((char *) arg0) + 0x560)) |= 0x40;
      }
      if ((*((s16 *) (((char *) arg0) + 0x55E))) > 0)
      {
        *((s16 *) (((char *) arg0) + 0x55E)) = (*((s16 *) (((char *) arg0) + 0x55E))) - 1;
      }
      s3 = 0;
      do
      {
        s0 = s3 * 0x8F0;
        if ((((*((u16 *) (D_8022A772 + s0))) == 0xFFFF) || ((*((u16 *) (D_8022A772 + s0))) == (*((u16 *) (((char *) arg0) + 2))))) || ((*((u16 *) (D_8022ACD0 + s0))) & 0x68))
        {
          if (D_8022A772)
          {
            s3++;
            continue;
          }
          else
          {
            s3++;
            continue;
          }
        }
        s1 = func_8013E364();
        if ((s2 = s1) == 0xFFFF)
        {
          return;
        }
        a1 = func_800DE41C(0, *((u8 *) (((char *) arg0) + 5)), 1, 0, 0x51, 0xFF, (s32 *) D_80239540, (void *) (&func_8016711C), 0, D_8011F308[*((u16 *) (D_8022A772 + s0))].f0, D_8011F30C[*((u16 *) (D_8022A772 + s0))].f0 + 200.0f, D_8011F310[*((u16 *) (D_8022A772 + s0))].f0, 0, (f32) (s3 * 0x3C), 0, 1.0f, 1.0f, 1.0f);
        if (((u16) (a1 + 2)) < 2)
        {
          ((void (*)(s32, s32)) func_8013E49C)(s2, a1);
          return;
        }
        s0 = s3 * 0x8F0;
        *((u16 *) (D_8022ACD0 + s0)) |= 8;
        *((f32 *) (D_8022AED0 + s0)) = (*((f32 *) (D_8022AED0 + s0))) + 30000.0f;
        s2 = (u16) a1;
        func_801D7028(s2, 0x36);
        do
        {
          func_8013E818(s1, s2, 0, 0, 200.0f, D_8011F320[*((u16 *) (D_8022A772 + s0))].f0, 0x12C);
        }
        while (0);
        *((s32 *) inline_fn(((char *) D_8018D6C4) + (s1 * 0x7C))) = s0 + ((s32) D_8022A770);
        do
        {
          s3++;
        }
        while (0);
      }
      while ((s0 = s3) < 7);
    }
  }
}

