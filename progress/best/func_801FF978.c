s32 alCSPGetChlProgram(void *, s32);
s32 alCSPGetTempo(void *);
void alSeqpSetChlFXMix(void *, s32, u8);
s8 func_8002C090(void *, s32);
s8 func_8002C0B0(void *, s32);
s8 func_8002C0D0(void *, s32);
s8 func_8002C0F0(void *, s32);
s32 func_8002C190(void *);
s16 func_8002C1D0(void *);
void func_8002C240(void *, s32, u8);
void func_8002C2E0(void *, s32, u8);
void func_8002C330(void *, s32, u8);
void func_8002C370(void *, s32, u8);
void func_8002D030(short);
s32 n_alSndpGetState(void);
extern u8 D_8006FB38[];
extern u8 D_801D7DF0[];
extern u8 D_801D7DF4[];
extern s32 D_802038DC;
extern s32 D_802038E0;
extern u8 D_802038E4[];
extern u8 D_802038E8[];
inline static int inline_fn(unsigned long arg0)
{
  return arg0 + 1;
}

inline static int inline_fn2(int arg0)
{
  return -arg0;
}

inline static int inline_fn23(unsigned long arg0)
{
  return arg0 * 0x2C;
}

void func_801FF978(void)
{
  register s32 *__base_D_802038E0;
  u8 *__base_D_802038E8;
  u8 *__base_D_801D7DF0;
  u8 *__repair_phase___base_D_801D7DF0;
  unsigned short i;
  __base_D_802038E0 = &D_802038E0;
  if ((*__base_D_802038E0) == 0)
  {
    *__base_D_802038E0 = alCSPGetTempo(D_8006FB38);
  }
  else
  {
    D_802038DC = alCSPGetTempo(D_8006FB38);
  }
  *((s16 *) D_802038E4) = func_8002C1D0(D_8006FB38);
  *((s32 *) (D_802038E4 - 0xC)) = func_8002C190(D_8006FB38);
  for (i = 0; ((i + 1) - 1) < 0x10; i++)
  {
    __repair_phase___base_D_801D7DF0 = __base_D_802038E8 + (i * 0x1C);
    __base_D_802038E8 = D_802038E8;
    do
    {
      __repair_phase___base_D_801D7DF0[0] = func_8002C0D0((int) D_8006FB38, i & 0xFF); __repair_phase___base_D_801D7DF0[1] = func_8002C090(D_8006FB38, i & 0xFF);
      *((s32 *) (__repair_phase___base_D_801D7DF0 + 4)) = alCSPGetChlProgram(D_8006FB38, i & 0xFF);
    }
    while (0);
    __repair_phase___base_D_801D7DF0[8] = func_8002C0B0(D_8006FB38, ((u32) i) & 0xFF);
    __repair_phase___base_D_801D7DF0[9] = func_8002C0F0(D_8006FB38, i & 0xFF);
  }

  for (i = 0; i < 0x10; i++)
  {
    __base_D_801D7DF0 = (void *) __base_D_802038E8; __base_D_801D7DF0 = (void *) (((char *) __base_D_801D7DF0) + ((s32) (i * 0x1C)));
    if (__base_D_801D7DF0[10] != 0)
    {
      func_8002C2E0(D_8006FB38, i & 0xFF, __base_D_801D7DF0[15]);
    }
    else
    {
      __base_D_801D7DF0[15] = __base_D_801D7DF0[0];
    }
    if (__base_D_801D7DF0[11] != 0)
    {
      func_8002C240(D_8006FB38, i & 0xFF, __base_D_801D7DF0[16]);
    }
    else
      if (i)
    {
      __base_D_801D7DF0[16] = __base_D_801D7DF0[1];
    }
    else
    {
      __base_D_801D7DF0[16] = __base_D_801D7DF0[1];
    }
    if (__base_D_801D7DF0[12] != 0)
    {
      func_8002C370(D_8006FB38, i & 0xFF, __base_D_801D7DF0[23]);
    }
    else
    {
      __base_D_801D7DF0[20] = __base_D_801D7DF0[4];
    }
    if (__base_D_801D7DF0[13] != 0)
    {
      alSeqpSetChlFXMix(D_8006FB38, i & 0xFF, __base_D_801D7DF0[24]);
    }
    else
    {
      __base_D_801D7DF0[24] = __base_D_801D7DF0[8];
    }
    if (__base_D_801D7DF0[14] != 0)
    {
      func_8002C330(D_8006FB38, i & 0xFF, __base_D_801D7DF0[25]);
    }
    else
    {
      __base_D_801D7DF0[25] = __base_D_801D7DF0[9];
    }
  }

  for (i = 0; inline_fn(0) < (8 - inline_fn2(1)); i++)
  {
    do
    {
      func_8002D030(i);
    }
    while (0);
    __base_D_801D7DF0 = D_801D7DF0;
    *((s32 *) ((__base_D_801D7DF0 + (i * 0x2C)) + 0xC)) = n_alSndpGetState();
    if ((*((s32 *) ((__base_D_801D7DF0 + inline_fn23(i)) + 0xC))) == 0)
    {
      *((s32 *) ((D_801D7DF4 - 4) + inline_fn23(i))) = -1;
    }
  }

}

