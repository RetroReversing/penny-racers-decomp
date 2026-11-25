extern u8 D_801C5E9C[];
extern u8 D_801C7080[];
extern u8 D_801C7081[];
extern u8 D_801C7082[];
extern u8 D_801C7083[];
extern u8 D_801C7084[];
extern s32 D_801F18E0;
extern u8 D_801F18E4[];
extern u8 D_801F18F8[];
extern u8 D_801F18F9[];
extern u8 D_801F18FA[];
extern u8 D_801F18FB[];
extern u8 D_801F18FC[];
s32 func_801E2BA4(u8 *);
void func_801E2BFC(void)
{
unsigned char * __repair_loop_constant;

  u8 *b0;
  u8 *b1;
  u8 *b2;
  u8 *b3;
  u8 *b4;
  u8 *ptr;
  u32 i;
  u32 off;
  u8 *dst = D_801F18E4;
  u8 *src = D_801C5E9C;
  if (D_801C7083)
    {
      dst[0] = src[0];
    }
  else
    {
      dst[0] = src[0];
    }
  if (D_801C7083)
    {
      dst[1] = src[1];
    }
  else
    {
      dst[1] = src[1];
    }
  if (D_801C7083)
    {
      dst[2] = src[2];
    }
  else
    {
      dst[2] = src[2];
    }
  if (D_801C7083)
    {
      dst[3] = src[3];
    }
  else
    {
      dst[3] = src[3];
    }
  __repair_loop_constant = D_801C7083;
do
  {
    for (i = 8; i < 0x18; i++)
    {
      ((u8 *) (&D_801F18E0))[i] = 0;
    }

    b0 = D_801F18F8; b1 = D_801F18F9; b2 = D_801F18FA; b3 = D_801F18FB; b4 = D_801F18FC;
    for (i = 0; ((i + 1) - 1) < 200; i++)
    {
      if (src)
      {
        i = ((u32) i) * 5;
        b0[i] = D_801C7080[i];
        b1[i] = D_801C7081[i];
        b2[i] = D_801C7082[i];
        b3[i] = __repair_loop_constant[i]; ptr = b4 + i;
        *ptr = D_801C7084[i];
      }
      else
      {
        i = ((u32) i) * 5;
        b0[i] = D_801C7080[i];
        b1[i] = D_801C7081[i];
        b2[i] = D_801C7082[i];
        b3[i] = __repair_loop_constant[i]; ptr = i + b4;
        *ptr = D_801C7084[i];
      }
    }

  }
  while (0);
  D_801F18E0 = func_801E2BA4(ptr);
}

