s32 func_80033A90(void *, void *, s32);
s32 osCreateThread(void *, s32, s32 *, void *, s32 *, s32);
s32 func_80034090(s32, void *, s32);
s32 osStartThread(void *);
s32 func_80039B50(s32);
s32 func_80039E80(void *, s32, s32);
s32 func_80039EE0(void *);
s32 osViBlack(s32);
extern s32 D_800473F0;
extern s32 D_8005FCC0;
extern s32 D_80061CC0;
extern s32 D_80063CC0;
extern s16 D_800DD822;
extern s32 D_800DDE88;
extern s32 D_800DDE8C;
extern s32 D_800DDE90;
extern s32 D_800DDE94;
extern s32 D_800DDE98;
extern s32 func_8002841C;
extern s32 func_80028634;
extern s32 func_8002877C;
inline static s32 *inline_fn()
{
  return &D_800DDE8C;
}

void func_800281F0(s32 arg0, s32 arg1)
{
  s32 temp_s5;
  void *temp_s0;
  void *temp_s1;
  void *temp_s2;
  void *temp_s2_2;
  void *temp_s2_3;
  void *temp_s3;
  void *temp_s4;
  temp_s2 = inline_fn() - 0x5F8;
  temp_s5 = arg1 & 0xFF;
  *((s32 *) (((char *) inline_fn()) + 0)) = 0;
  D_800DDE90 = 0;
  D_800DDE94 = 0;
  D_800DDE88 = 0;
  *((s16 *) (((char *) inline_fn()) + (-0x66C))) = 1;
  D_800DD822 = 2;
  D_800DDE98 = temp_s5;
  func_80033A90(temp_s2, inline_fn() - 0x5E0, 8);
  temp_s4 = inline_fn() - 0x5C0;
  __repair_rows: {
    func_80033A90(temp_s4, inline_fn() - 0x5A8, 8);
  }
if (0) goto __repair_rows;
  temp_s3 = inline_fn() - 0x588;
  func_80033A90(temp_s3, inline_fn() - 0x570, 8);
  func_80033A90(inline_fn() - 0x630, inline_fn() - 0x618, 8);
  func_80033A90(inline_fn() - 0x668, inline_fn() - 0x650, 8);
  func_80033A90(inline_fn() - 0x550, inline_fn() - 0x538, 8);
  func_80039B50(0xFE);
  func_80039EE0(((arg0 & 0xFF) * 0x50) + (&D_800473F0));
  osViBlack(1);
  func_80039E80(temp_s2, 0x29A, temp_s5);
  func_80034090(4, temp_s4, 0x29B);
  func_80034090(9, temp_s3, 0x29C);
  func_80034090(0xE, temp_s2, 0x29D);
  temp_s2_2 = inline_fn() - 0x514;
  temp_s1 = inline_fn() - 0x66C;
  osCreateThread(temp_s2_2, 0x13, &func_8002841C, temp_s1, &D_8005FCC0, 0x78);
  osStartThread(temp_s2_2);
  temp_s2_3 = inline_fn() - 0x364;
  osCreateThread(temp_s2_3, 0x12, &func_80028634, temp_s1, &D_80061CC0, 0x6E);
  osStartThread(temp_s2_3);
  temp_s0 = inline_fn() - 0x1B4;
  osCreateThread(temp_s0, 0x11, &func_8002877C, temp_s1, &D_80063CC0, 0x64);
  osStartThread(temp_s0);
}

