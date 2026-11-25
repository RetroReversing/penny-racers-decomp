extern void func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32);
extern void func_8003DE60(char *);
extern u8 func_80148230(void);
extern void func_80233ED0(void);
extern void func_80234484(void);
extern void func_8013DF90(void);
extern void func_8013FDC0(void);
extern void func_8013FDEC(void);
extern void func_8013FE18(void);
extern void func_801402B8(void);
extern void func_80140BEC(void);
extern void func_80141268(void);
extern void func_80141C28(void);
extern void func_801429A8(void);
extern void func_80143600(void);
extern u8 D_802282F0[];
extern u8 D_801D5A90[];
extern u8 D_801D6670[];
extern u8 D_801D69D0[];
extern u8 D_801D70A4[];
extern char D_80232F54[];
extern char D_80232F70[];
extern char D_80232F88[];
extern char D_80232FA0[];
extern char D_80232FB8[];
extern char D_80232FD0[];
extern char D_80232FE8[];
extern char D_80233000[];
extern char D_80233018[];
extern char D_80233030[];
extern u8 D_8006FAF0[];
inline static float inline_fn(float arg0)
{
  return -arg0;
}

inline static char *inline_fn2()
{
  return D_80233018;
}

inline static u32 inline_fn23(u8 *arg0)
{
  return (u32) (*((u16 *) (0x20 + arg0)));
}

unsigned int func_80231E30(void)
{
  s32 k7f;
  register s32 k40 = 0x40;
  do
  {
    func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_80233ED0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
  }
  while (0);
  do
  {
    func_800DE41C((k7f = 0x7F, 0), 0, 3, 0, 0x80, 0, 0, func_80234484, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
  }
  while (0);
  do
  {
    func_800DE41C(0, 0, 3, 0, k40, 0, 0, D_802282F0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
  }
  while (0);
  do
  {
    func_800DE41C(0, 0xFF, 3, 0, k7f, 0, 0, D_801D6670, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
  }
  while (0);
  func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, func_8013DF90, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
  do
  {
    func_800DE41C(0, 0xFF, 3, 0, k7f, 0, 0, D_801D5A90, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
  }
  while (0);
  do
  {
    func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, D_801D70A4, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
  }
  while (0);
  {
    func_800DE41C(0, 0xFF, 3, 0, k7f, 0, 0, D_801D69D0, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
  }
  func_8003DE60(D_80232F54);
  if (func_80148230())
  {
    void *fn = 0;
    switch (inline_fn23(D_8006FAF0))
    {
      case 1:
        func_8003DE60(D_80232F70);
        fn = func_8013FDC0;
        break;

      case 2:
        func_8003DE60(D_80232F88);
        fn = func_8013FDEC;
        break;

      case 3:
        func_8003DE60(D_80232FA0);
        fn = func_8013FE18;
        break;

      case 4:
        do
      {
        func_8003DE60(D_80232FB8);
      }
      while (0);
        func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_801402B8, 0, inline_fn(610.0f), 0.0f, 350.0f, 0, 0, 0, 0, 0, 0);
        return;

      case 5:
        func_8003DE60(D_80232FD0);
        fn = func_80140BEC;
        break;

      case 6:
        do
      {
        func_8003DE60(D_80232FE8);
      }
      while (0);
        func_800DE41C(0, 0, 3, 0, 0x7F, 0, 0, func_80141268, 0, inline_fn(1199.0f), inline_fn(20.0f), 615.0f, 0, 0, 0, 0, 0, 0);
        return;

      case 7:
        func_8003DE60(D_80233000);
        fn = func_80141C28;
        break;

      case 8:
        func_8003DE60(inline_fn2());
        fn = func_801429A8;
        break;

      case 9:
        do
      {
        func_8003DE60(D_80233030);
        fn = func_80143600;
        break;
      }
      while (0);

      default:
        return;

    }

    func_800DE41C(0, 0, 3, 0, k7f, 0, 0, fn, 0, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
  }
}

