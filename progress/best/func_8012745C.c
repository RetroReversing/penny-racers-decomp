typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} Vec3;
Vec3 *func_80127148(Vec3 *dst, Vec3 *a, Vec3 *b);
void func_80127030(Vec3 *dst, Vec3 a, Vec3 b);
s8 func_801270B0(Vec3 a, Vec3 b);
extern Vec3 D_8012AB4C;
extern Vec3 D_8012AB58;
extern Vec3 D_8012AB64;
extern Vec3 D_8012AB7C;
u8 func_8012745C(Vec3 *arg0, f32 arg1)
{
  Vec3 *__base_D_8012AB58;
  Vec3 v20;
  Vec3 v30;
  Vec3 v40;
  Vec3 v60;
  Vec3 v80;
  Vec3 v70;
  Vec3 vA0;
  Vec3 v90;
  s32 flag;
  volatile char __repair_result_flag;
  s8 r0;
  s8 r1;
  s8 r2;
  Vec3 v50;
  s8 r3;
  if (arg0->z)
  {
    flag = 0;
    v50.x = arg1 * arg0->x;
    v50.y = arg1 * arg0->y;
    v50.z = arg1 * arg0->z;
    v20.x = D_8012AB64.x + v50.x;
    v20.y = ((double) D_8012AB64.y) + v50.y;
    v20.z = D_8012AB64.z + v50.z;
    v40.x = D_8012AB7C.x + v50.x;
    v30.x = D_8012AB4C.x + v50.x;
    v30.y = D_8012AB4C.y + v50.y;
    v30.z = D_8012AB4C.z + v50.z;
    v40.y = D_8012AB7C.y + v50.y;
    v40.z = D_8012AB7C.z + v50.z;
  }
  else
  {
    flag = 0;
    v50.x = arg1 * arg0->x;
    v50.y = arg1 * arg0->y;
    v50.z = arg1 * arg0->z;
    v20.x = D_8012AB64.x + v50.x;
    v20.y = ((double) D_8012AB64.y) + v50.y;
    v20.z = D_8012AB64.z + v50.z;
    v40.x = D_8012AB7C.x + v50.x;
    v30.x = D_8012AB4C.x + v50.x;
    v30.y = D_8012AB4C.y + v50.y;
    v30.z = D_8012AB4C.z + v50.z;
    v40.y = D_8012AB7C.y + v50.y;
    v40.z = D_8012AB7C.z + v50.z;
  }
  __repair_rows:
  {
    __base_D_8012AB58 = &D_8012AB58;
    do
    {
      func_80127148(&v60, __base_D_8012AB58, &v20);
    }
    while (0);
  }

  if (0)
  {
    goto __repair_rows;
  }
  __repair_rows_:
  {
    do
    {
      func_80127148(&v80, &v30, &v20);
    }
    while (0);
  }

  if (0)
  {
    goto __repair_rows_;
  }
  do
  {
    func_80127148(&v90, &v40, &v20);
  }
  while (0);
  func_80127030(&v70, v80, v90);
  r0 = func_801270B0(v60, v70);
  if (r0 == (-1))
  {
    func_80127148(&v60, __base_D_8012AB58, &D_8012AB64);
    do
    {
      do
      {
        func_80127148(&v80, &D_8012AB4C, &D_8012AB64);
      }
      while (0);
      func_80127148(&vA0, &D_8012AB7C, &D_8012AB64);
      func_80127030(&v70, v80, vA0);
      r1 = func_801270B0(v60, v70);
      if (r1 == 1)
      {
        func_80127148(&v80, &D_8012AB64, &v20);
        func_80127148(&v60, __base_D_8012AB58, &v20);
        func_80127148(&v90, &v30, &v20);
        func_80127030(&v70, v80, v90);
        r2 = func_801270B0(v60, v70);
        if (r2 == r0)
        {
          func_80127148(&v60, __base_D_8012AB58, &v30);
          do
          {
            func_80127148(&v80, &D_8012AB4C, &v30);
            func_80127148(&v90, &v40, &v30);
            func_80127030(&v70, v80, v90);
            r3 = func_801270B0(v60, v70);
          }
          while (0);
          if (r3 == r2)
          {
            func_80127148(&v60, __base_D_8012AB58, &v40);
            func_80127148(&v80, &D_8012AB7C, &v40);
            do
            {
              func_80127148(&v90, &v20, &v40);
              func_80127030(&v70, v80, v90);
            }
            while (0);
            __repair_result_flag = func_801270B0(v60, v70) == (-1);
          }
        }
      }
    }
    while (0);
  }
  return __repair_result_flag;
}

