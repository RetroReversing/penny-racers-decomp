f32 __sinf(f32);
f32 __cosf(f32);
typedef struct Link
{
  u8 pad0[2];
  u16 idx;
} Link;
typedef struct Obj
{
  unsigned long pad0;
  Link *link;
  f32 f8;
  f32 fC;
  f32 f10;
  s16 cnt;
  u8 b16;
  u8 pad2[0x76 - 0x17];
  u16 u76;
} Obj;
typedef struct Ent
{
  u8 pad0[0xC];
  u8 f0C;
  u8 f0D;
  u8 pad1[0x18 - 0xE];
  f32 p18;
  f32 p1c;
  f32 p20;
  u8 pad2[4];
  f32 p30;
  f32 p34;
  u8 pad3[6];
  u16 state;
  u8 pad4[0x20];
  Obj *obj;
} Ent;
extern Ent D_8011F2F0[];
void func_801604F0(volatile unsigned long arg0)
{
  Ent *s1 = &D_8011F2F0[(u16) arg0];
  Obj *s0 = s1->obj;
  Ent *s3 = &D_8011F2F0[s0->link->idx];
  f32 fs0;
  f32 fs4;
  f32 fs5;
  if (s1)
  {
    s0->cnt = s0->cnt - 1;
  }
  else
  {
    s0->cnt = s0->cnt - 1;
  }
  if (s0->cnt == 0)
  {
    s1->state = 1;
  }
  fs5 = __sinf(((((f32) s0->cnt) * 45.0f) + (((f32) s0->b16) * 660.0f)) * 0.002454369f) * 10.0f;
  fs4 = __cosf(((((f32) s0->cnt) * 45.0f) + (((f32) s0->b16) * 660.0f)) * 0.002454369f) * 10.0f;
  s1->p30 = (__sinf((((f32) s0->cnt) * 0.002454369f) * 50.0f) * 0.075f) + 0.15f;
  s1->p34 = (__cosf((((f32) s0->cnt) * 0.002454369f) * 50.0f) * 0.075f) + 0.15f;
  switch (s1->state)
  {
    case 0:
      fs0 = s3->p1c + 8.0f;
      fs0 = ((s32) fs0) + __sinf(((((f32) s0->cnt) * 60.0f) + (((f32) s0->b16) * 600.0f)) * 0.002454369f);
      if (fs0 < s1->p1c)
    {
      s0->fC = s0->fC - 1.0f;
    }
    else
    {
      s0->fC = s0->fC + 1.0f;
    }
      s0->f8 = (long long) (((fs5 + s3->p18) - s1->p18) * 0.3f);
      s0->fC = s0->fC * 0.5f;
      s0->f10 = ((fs4 + s3->p20) - s1->p20) * 0.3f;
      s1->p18 = s0->f8 + s1->p18;
      s1->p1c = s1->p1c + s0->fC;
      s1->p20 = s1->p20 + s0->f10;
      return;

    case 1:
      s0->f8 = s0->f8 * 0.1f;
      s0->fC = s0->fC * 0.1f;
      s0->f10 = s0->f10 * 0.1f;
      s1->p18 = s1->p18 + s0->f8;
      s1->p1c = s1->p1c + s0->fC;
      s1->p20 = s1->p20 + s0->f10;
      s1->f0C = s1->f0C - 5;
      if (((u8) s1->f0C) < 6U)
    {
      func_8013E49C(s0->u76);
      s1->f0D = 2;
    }
      return;

  }

}

