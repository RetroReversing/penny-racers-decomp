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
extern u8 D_8018994A[];
extern s8 D_8018994C;
extern u8 D_8018994E;
extern u8 D_80189B35;
unsigned int func_8003DE60();
u32 func_801FA30C(void);
inline static u8 inline_fn()
{
  return D_8018994A[0];
}

inline static f32 *inline_fn2(u8 *arg0, s32 arg1)
{
  return (f32 *) ((arg0 + (arg1 * 8)) + 0x28);
}

void func_801493F0(s32 arg0)
{
  int __repair_literal;
  u8 *s1;
  do
  {
    s1 = D_800DA260 + (arg0 * 0x178);
 do { D_8018994E = 0; if ((*inline_fn2(s1, arg0)) <= 3.0f) { D_8018994C = 2; if (1) { } } if (((*((f32 *) (((D_800DA260 + (arg0 * 0x178)) + (arg0 * 8)) + 0x28))) >= 0.4f) && ((*((f32 *) (((D_800DA260 + (arg0 * 0x178)) + (((u32) arg0) * 8)) + 0x28))) <= 0.6f)) { D_8018994C = 1; } __repair_literal = 8; if ((*((f32 *) ((s1 + (arg0 * __repair_literal)) + 0x28))) >= 0.7f) { D_8018994C = 0; } D_8018994A[0] = D_80168D00[func_801FA30C() & 0xF]; if ((*((f32 *) (s1 + 0x1C))) <= ((short) 0.9f)) { D_8018994A[0] = 9; } do { D_8018994A[1] = D_80168D10[func_801FA30C() & 0xF]; do { if ((((*((f32 *) (s1 + 0x1C))) + 1) >= (0.9f + 1)) && (D_80189B35 == 0)) { D_8018994A[1] = 9; } } while (0); } while (0); func_8003DE60(D_80183668, *((f32 *) (s1 + 0x14))); func_8003DE60(D_80183678, *((f32 *) (s1 + 0x18))); func_8003DE60(D_80183688, *((f32 *) (s1 + 0x1C))); do { func_8003DE60(D_80183698, *((f32 *) (s1 + 0x20))); } while (0); } while (0);
    func_8003DE60(D_801836A8, s1[0x24]);
    func_8003DE60(D_801836B8, *inline_fn2(s1, arg0));
  }
  while (0);
  func_8003DE60(D_801836C8, *((f32 *) ((s1 + (arg0 * 8)) + 0x2C)));
  do
  {
    func_8003DE60(D_801836E8, D_8018994A[1]);
  }
  while (0);
  func_8003DE60(D_801836D8, inline_fn());
}
