f32 sqrtf(void);
extern s32 D_8021AFFC;
extern u8 D_8021B019;
extern f32 D_8021B024[];
extern f32 D_8021B028[];
extern f32 D_8021B02C[];
extern f32 D_8021B038[];
extern f32 D_8021B03C;
extern f32 D_8021B040;
extern f32 D_8021B04C[];
extern f32 D_8021B050;
extern f32 D_8021B054;
extern u8 D_8021B06A;
extern s8 D_8021B07E;
extern f64 D_8021DB10;
extern f64 D_8021DB18;
extern f64 D_8021DB20;
extern f64 D_8021DB28;
extern f64 D_8021DB30;
extern f64 D_8021DB38;
extern f64 D_8021DB40;
extern f64 D_8021DB48;
extern f64 D_8021DB50;
extern f64 D_8021DB58;
extern f64 D_8021DB60;
extern f64 D_8021DB68;
extern f64 D_8021DB70;
extern f64 D_8021DB78;
extern f64 D_8021DB80;
extern f64 D_8021DB88;
extern f64 D_8021DB90;
extern f64 D_8021DB98;
void func_802055F8(s32 *arg0)
{
    s32 *__base_D_8021AFFC;
  register f32 *a = D_8021B024;
  register f32 *b = D_8021B038;
  f32 *c = D_8021B04C;
  f32 *d = D_8021B028;

  if ((*(u8 *)&D_8021B07E) == 2)
  {
    a[0] = 0.0f;
    b[0] = -10.0f;
    c[0] = 0.0f;
    a[1] = -60.0f;
    b[1] = 15.0f;
    c[1] = -70.0f;
    a[2] = 60.0f;
    b[2] = 15.0f;
    c[2] = -70.0f;
    a[3] = -158.0f;
    b[3] = 15.0f;
    c[3] = -70.0f;
    a[4] = 158.0f;
    b[4] = 15.0f;
    c[4] = -70.0f;
    D_8021B019 = 0;
    (*(u8 *)&D_8021B07E) = 0;
  }
  if ((((D_8021B02C[0] <= D_8021DB10) && (D_8021DB10 >= D_8021B040)) && (D_8021DB18 <= D_8021B054)) || (((D_8021DB20 <= d[0]) && (D_8021B03C <= D_8021DB28)) && (D_8021DB20 <= D_8021B050)))
  {
    switch (D_8021B019)
    {
      __base_D_8021AFFC = &D_8021AFFC;
      case 1:
        (*__base_D_8021AFFC) = (*__base_D_8021AFFC) + 1;
        break;
      case 2:
        (*__base_D_8021AFFC) = (*__base_D_8021AFFC) - 1;
        break;
    }

    if ((D_8021B06A) < (*__base_D_8021AFFC))
    {
      (*__base_D_8021AFFC) = 0;
    }
    else
      if ((*__base_D_8021AFFC) < 0)
    {
      (*__base_D_8021AFFC) = D_8021B06A;
    }
    D_8021B019 = 3;
    (*(u8 *)&D_8021B07E) += 1;
    return;
  }
  switch (D_8021B019)
  {
    case 1:
      d[0] = (f32) (((f64) d[0]) - D_8021DB30);
      D_8021B050 = -70.0f;
      D_8021B03C = 15.0f;
      d[1] = (f32) (((f64) sqrtf()) * D_8021DB38);
      D_8021B054 = (f32) (-(((f64) sqrtf()) * D_8021DB48));
      D_8021B040 = (f32) (((f64) sqrtf()) * D_8021DB40);
      D_8021B024[0] = (f32) (-(D_8021DB50 - ((f64) a[2])));
      b[0] = (f32) (5.0f - D_8021B038[2]);
      a[4] = (f32) (((f64) D_8021B024[4]) - (int)D_8021DB60);
      b[4] = 15.0f;
      D_8021B04C[0] = (f32) (-(((f64) c[2]) + D_8021DB58));
      c[4] = -70.0f;
      return;

    case 2:
      D_8021B02C[0] = (f32) (((f64) D_8021B02C[0]) + D_8021DB68);
      D_8021B040 = 15.0f;
      D_8021B054 = -70.0f;
      D_8021B03C = (f32) (sqrtf() * D_8021DB78);
      D_8021B02C[-1] = (f32) (-(((f64) sqrtf()) * D_8021DB70));
      D_8021B050 = (f32) (-(((f64) sqrtf()) * D_8021DB80));
      b[0] = (f32) (5.0f - b[1]);
      a[0] = (f32) (((f64) a[1]) + D_8021DB88);
      c[0] = (f32) (-(((f64) c[1]) + (u32)D_8021DB90));
      a[3] = (f32) (D_8021DB98 + ((f64) a[3]));
      b[3] = 15.0f;
      c[3] = -70.0f;
      return;

  }

}
