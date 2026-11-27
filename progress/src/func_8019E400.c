extern u8 viewIndex;
extern s32 D_801C57A0;
extern s32 D_801C57B0;

void func_8019E400(void **arg0)
{
  s32 *p;
  s32 *q;

  p = *arg0;
  *arg0 = (char *) p + 8;
  p[0] = 0xE7000000;
  p[1] = 0;
  if (viewIndex == 0) {
    p = *arg0;
    *arg0 = (char *) p + 8;
    p[0] = 0x03800010;
    p[1] = (s32) &D_801C57A0;
    q = *arg0;
    *arg0 = (char *) q + 8;
    q[0] = 0xED000000;
    q[1] = 0x3BC3BC;
  } else {
    p = *arg0;
    *arg0 = (char *) p + 8;
    p[0] = 0x03800010;
    p[1] = (s32) &D_801C57B0;
    q = *arg0;
    *arg0 = (char *) q + 8;
    q[0] = 0xED0F012C;
    q[1] = 0x2CC290;
  }
}

