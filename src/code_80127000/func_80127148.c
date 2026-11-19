#include "common.h"

typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} Vec3;
Vec3 *func_80127148(Vec3 *dst, Vec3 *a, Vec3 *b)
{
  Vec3 t;
 do { t.x = a->x - b->x; t.y = a->y - b->y; t.z = a->z - b->z; *dst = t; return dst; } while (0);
}
