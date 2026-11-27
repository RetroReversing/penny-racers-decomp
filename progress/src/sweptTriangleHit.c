typedef struct
{
  f32 x;
  f32 y;
  f32 z;
} Vec3;
Vec3 *vec3Sub(Vec3 *dst, Vec3 *a, Vec3 *b);
Vec3 vec3Cross(Vec3 a, Vec3 b);
s8 vec3DotSign(Vec3 a, Vec3 b);
extern Vec3 D_8012AB4C;
extern Vec3 D_8012AB58;
extern Vec3 D_8012AB64;
extern Vec3 D_8012AB7C;

/* Tests whether the point D_8012AB58 is hit by the triangle (D_8012AB64, D_8012AB4C, D_8012AB7C)
 * swept along dir by dist. Returns 1 on a hit. */
u8 sweptTriangleHit(Vec3 *dir, f32 dist)
{
  Vec3 corner0;
  Vec3 corner1;
  Vec3 corner2;
  Vec3 offset;
  Vec3 toPoint;
  Vec3 normal;
  Vec3 edgeA;
  Vec3 edgeB;
  Vec3 edgeC;
  u8 result;
  s8 side;
  s8 nextSide;

  result = 0;
  offset.x = dist * dir->x;
  offset.y = dist * dir->y;
  offset.z = dist * dir->z;
  corner0.x = D_8012AB64.x + offset.x;
  corner0.y = D_8012AB64.y + offset.y;
  corner0.z = D_8012AB64.z + offset.z;
  corner1.x = D_8012AB4C.x + offset.x;
  corner1.y = D_8012AB4C.y + offset.y;
  corner1.z = D_8012AB4C.z + offset.z;
  corner2.x = D_8012AB7C.x + offset.x;
  corner2.y = D_8012AB7C.y + offset.y;
  corner2.z = D_8012AB7C.z + offset.z;
  vec3Sub(&toPoint, &D_8012AB58, &corner0);
  normal = vec3Cross((vec3Sub(&edgeA, &corner1, &corner0), edgeA), (vec3Sub(&edgeB, &corner2, &corner0), edgeB));
  side = vec3DotSign(toPoint, normal);
  if (side == -1) {
    vec3Sub(&toPoint, &D_8012AB58, &D_8012AB64);
    normal = vec3Cross((vec3Sub(&edgeA, &D_8012AB4C, &D_8012AB64), edgeA), (vec3Sub(&edgeC, &D_8012AB7C, &D_8012AB64), edgeC));
    if (vec3DotSign(toPoint, normal) == 1) {
      vec3Sub(&toPoint, &D_8012AB58, &corner0);
      normal = vec3Cross((vec3Sub(&edgeA, &D_8012AB64, &corner0), edgeA), (vec3Sub(&edgeB, &corner1, &corner0), edgeB));
      nextSide = vec3DotSign(toPoint, normal);
      if (nextSide == side) {
        vec3Sub(&toPoint, &D_8012AB58, &corner1);
        normal = vec3Cross((vec3Sub(&edgeA, &D_8012AB4C, &corner1), edgeA), (vec3Sub(&edgeB, &corner2, &corner1), edgeB));
        if (vec3DotSign(toPoint, normal) == nextSide) {
          vec3Sub(&toPoint, &D_8012AB58, &corner2);
          normal = vec3Cross((vec3Sub(&edgeA, &D_8012AB7C, &corner2), edgeA), (vec3Sub(&edgeB, &corner0, &corner2), edgeB));
          result = vec3DotSign(toPoint, normal) == -1;
        }
      }
    }
  }
  return result;
}
