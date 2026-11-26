f32 sqrtf(f32);
typedef struct { u8 pad[0x7B4]; f32 x1, y1, z1, x2, y2, z2; } Obj;
void func_80222368(Obj *o)
{
  f32 len;
  len = sqrtf(o->x1 * o->x1 + o->y1 * o->y1 + o->z1 * o->z1);
  if (len > 15.0f)
  {
    len = 15.0f / len;
    o->x1 = len * o->x1;
    o->y1 = len * o->y1;
    o->z1 = len * o->z1;
  }
  len = sqrtf(o->x2 * o->x2 + o->y2 * o->y2 + o->z2 * o->z2);
  if (len > 15.0f)
  {
    len = 15.0f / len;
    o->x2 = len * o->x2;
    o->y2 = len * o->y2;
    o->z2 = len * o->z2;
  }
}


