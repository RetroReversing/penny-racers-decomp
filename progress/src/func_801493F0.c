typedef struct { f32 x, y; } Pair;
typedef struct {
  u8 pad0[0x14];
  f32 f14, f18, f1C, f20;
  u8 f24;
  u8 pad25[3];
  Pair p[42];
} Rec;
extern Rec D_800DA260[];
extern u8 D_80168D00[];
extern u8 D_80168D10[];
extern char D_80183668[], D_80183678[], D_80183688[], D_80183698[], D_801836A8[], D_801836B8[], D_801836C8[], D_801836D8[], D_801836E8[];
typedef struct { u8 a, b, c, d, e; } St;
extern St D_8018994A;
extern u8 D_80189B35;
void func_8003DE60(char *, ...);
s32 func_801FA30C(void);

void func_801493F0(s32 arg0)
{
  Rec *r;

  r = &D_800DA260[arg0];
  D_8018994A.e = 0;
  if (r->p[arg0].x <= 3.0f)
    D_8018994A.c = 2;
  if (r->p[arg0].x >= 0.4f && r->p[arg0].x <= 0.6f)
    D_8018994A.c = 1;
  if (r->p[arg0].x >= 0.7f)
    D_8018994A.c = 0;
  D_8018994A.a = D_80168D00[func_801FA30C() & 0xF];
  if (r->f1C <= 0.9f)
    D_8018994A.a = 9;
  D_8018994A.b = D_80168D10[func_801FA30C() & 0xF];
  if (r->f1C >= 0.9f && D_80189B35 == 0)
    D_8018994A.b = 9;
  func_8003DE60(D_80183668, r->f14);
  func_8003DE60(D_80183678, r->f18);
  func_8003DE60(D_80183688, r->f1C);
  func_8003DE60(D_80183698, r->f20);
  func_8003DE60(D_801836A8, r->f24);
  func_8003DE60(D_801836B8, r->p[arg0].x);
  func_8003DE60(D_801836C8, r->p[arg0].y);
  func_8003DE60(D_801836D8, D_8018994A.a);
  func_8003DE60(D_801836E8, D_8018994A.b);
}
