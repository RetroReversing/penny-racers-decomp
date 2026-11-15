extern u8 D_800DA260[];
extern u8 D_80168D00[];
extern u8 D_80168D10[];
extern u8 D_80183668[];
extern u8 D_80183678[];
extern u8 D_80183688[];
extern u8 D_80183698[];
extern u8 D_801836A8[];
extern u8 D_801836B8[];
extern u8 D_801836C8[];
extern u8 D_801836D8[];
extern u8 D_801836E8[];
extern u8 D_8018994A;
extern u8 D_8018994B;
extern u8 D_8018994C;
extern u8 D_8018994E;
extern u8 D_80189B35;
u32 func_801FA30C(void);
void func_8003DE60();
inline static int inline_fn(f32 arg0)
{
  return arg0 <= 0.6f;
}

void func_801493F0(s32 arg0)
{
  int __repair_constant = 9;
  u8 *s1;
  f32 f;
  s1 = D_800DA260 + (arg0 * 0x178);
  D_8018994E = 0;
  if ((*((f32 *) ((s1 + (arg0 * 8)) + 0x28))) <= 3.0f)
  {
    D_8018994C = 2;
  }
  f = *((f32 *) ((s1 + (arg0 * 8)) + 0x28));
  if ((f >= 0.4f) && inline_fn(f))
  {
    D_8018994C = 1;
  }
  if ((*((f32 *) ((s1 + (arg0 * 8)) + 0x28))) >= 0.7f)
  {
    D_8018994C = 0;
  }
  D_8018994A = D_80168D00[func_801FA30C() & 0xF];
  if ((*((f32 *) (s1 + 0x1C))) <= 0.9f)
  {
    D_8018994A = 9;
  }
  D_8018994B = D_80168D10[func_801FA30C() & 0xF];
  if (((*((f32 *) (s1 + 0x1C))) >= 0.9f) && (D_80189B35 == 0))
  {
    D_8018994B = __repair_constant;
  }
  func_8003DE60(D_80183668);
  func_8003DE60(D_80183678);
  func_8003DE60(D_80183688);
  do
  {
    func_8003DE60(D_80183698);
  }
  while (0);
  func_8003DE60(D_801836A8, *((u8 *) (s1 + 0x24)));
  func_8003DE60(D_801836B8);
  func_8003DE60(D_801836C8);
  func_8003DE60(D_801836D8, D_8018994A);
  func_8003DE60(D_801836E8, D_8018994B);
}

