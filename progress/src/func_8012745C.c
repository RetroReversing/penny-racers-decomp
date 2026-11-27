typedef struct
{
  f32 x;
  f32 y;
  f32 z;
} Vec3;
Vec3 *func_80127148(Vec3 *dst, Vec3 *a, Vec3 *b);
Vec3 func_80127030(Vec3 a, Vec3 b);
s8 func_801270B0(Vec3 a, Vec3 b);
extern Vec3 D_8012AB4C;
extern Vec3 D_8012AB58;
extern Vec3 D_8012AB64;
extern Vec3 D_8012AB7C;
u8 func_8012745C(Vec3 *arg0, f32 arg1)
{
  Vec3 v20;
  Vec3 v30;
  Vec3 v40;
  Vec3 v50;
  Vec3 v60;
  Vec3 v70;
  Vec3 v80;
  Vec3 v90;
  Vec3 vA0;
  u8 result;
  s8 side;
  s8 next;

  result = 0;
  v50.x = arg1 * arg0->x;
  v50.y = arg1 * arg0->y;
  v50.z = arg1 * arg0->z;
  v20.x = D_8012AB64.x + v50.x;
  v20.y = D_8012AB64.y + v50.y;
  v20.z = D_8012AB64.z + v50.z;
  v30.x = D_8012AB4C.x + v50.x;
  v30.y = D_8012AB4C.y + v50.y;
  v30.z = D_8012AB4C.z + v50.z;
  v40.x = D_8012AB7C.x + v50.x;
  v40.y = D_8012AB7C.y + v50.y;
  v40.z = D_8012AB7C.z + v50.z;
  func_80127148(&v60, &D_8012AB58, &v20);
    v70 = func_80127030((func_80127148(&v80, &v30, &v20), v80), (func_80127148(&v90, &v40, &v20), v90));
  side = func_801270B0(v60, v70);
  if (side == -1) {
    func_80127148(&v60, &D_8012AB58, &D_8012AB64);
        v70 = func_80127030((func_80127148(&v80, &D_8012AB4C, &D_8012AB64), v80), (func_80127148(&vA0, &D_8012AB7C, &D_8012AB64), vA0));
    if (func_801270B0(v60, v70) == 1) {
      func_80127148(&v60, &D_8012AB58, &v20);
            v70 = func_80127030((func_80127148(&v80, &D_8012AB64, &v20), v80), (func_80127148(&v90, &v30, &v20), v90));
      next = func_801270B0(v60, v70);
      if (next == side) {
        func_80127148(&v60, &D_8012AB58, &v30);
                v70 = func_80127030((func_80127148(&v80, &D_8012AB4C, &v30), v80), (func_80127148(&v90, &v40, &v30), v90));
        if (func_801270B0(v60, v70) == next) {
          func_80127148(&v60, &D_8012AB58, &v40);
                    v70 = func_80127030((func_80127148(&v80, &D_8012AB7C, &v40), v80), (func_80127148(&v90, &v20, &v40), v90));
          result = func_801270B0(v60, v70) == -1;
        }
      }
    }
  }
  return result;
}
