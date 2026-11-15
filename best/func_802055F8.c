f32 sqrtf(f32);
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
extern u8 D_8021B07E;
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
  f32 *a = D_8021B024;
  f32 *b = D_8021B038;
  f32 *c = D_8021B04C;
  f32 *d = D_8021B028;

  if (D_8021B07E == 2)
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
    D_8021B07E = 0;
  }
  if ((((D_8021B02C[0] <= D_8021DB10) && (D_8021B040 <= D_8021DB10)) && (D_8021DB18 <= D_8021B054)) || (((D_8021DB20 <= d[0]) && (D_8021B03C <= D_8021DB28)) && (D_8021DB20 <= D_8021B050)))
  {
    switch (D_8021B019)
    {
      case 1:
        D_8021AFFC = D_8021AFFC + 1;
        break;

      case 2:
        D_8021AFFC = D_8021AFFC - 1;
        break;

    }

    if (((s32) D_8021B06A) < D_8021AFFC)
    {
      D_8021AFFC = 0;
    }
    else
      if (D_8021AFFC < 0)
    {
      D_8021AFFC = (s32) D_8021B06A;
    }
    D_8021B019 = 3;
    D_8021B07E += 1;
    return;
  }
  switch (D_8021B019)
  {
    case 1:
      d[0] = (f32) (((f64) d[0]) - D_8021DB30);
      D_8021B03C = 15.0f;
      D_8021B050 = -70.0f;
      d[1] = (f32) (((f64) sqrtf(d[1] * d[1])) * D_8021DB38);
      D_8021B040 = (f32) (((f64) sqrtf(D_8021B040 * D_8021B040)) * D_8021DB40);
      D_8021B054 = (f32) (-(((f64) sqrtf(D_8021B054 * D_8021B054)) * D_8021DB48));
      a[0] = (f32) (-(D_8021DB50 - ((f64) a[2])));
      b[0] = (f32) (5.0f - b[2]);
      c[0] = (f32) (-(((f64) c[2]) + D_8021DB58));
      a[4] = (f32) (((f64) a[4]) - D_8021DB60);
      b[4] = 15.0f;
      c[4] = -70.0f;
      return;

    case 2:
      D_8021B02C[0] = (f32) (((f64) D_8021B02C[0]) + D_8021DB68);
      D_8021B040 = 15.0f;
      D_8021B054 = -70.0f;
      D_8021B02C[-1] = (f32) (-(((f64) sqrtf(D_8021B02C[-1] * D_8021B02C[-1])) * D_8021DB70));
      D_8021B03C = (f32) (sqrtf(D_8021B03C * D_8021B03C) * D_8021DB78);
      D_8021B050 = (f32) (-(((f64) sqrtf(D_8021B050 * D_8021B050)) * D_8021DB80));
      a[0] = (f32) (((f64) a[1]) + D_8021DB88);
      b[0] = (f32) (5.0f - b[1]);
      c[0] = (f32) (-(((f64) c[1]) + D_8021DB90));
      a[3] = (f32) (D_8021DB98 + ((f64) a[3]));
      b[3] = 15.0f;
      c[3] = -70.0f;
      return;

  }

}
