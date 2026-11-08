/* Partial candidate from function #273548 in project #72; rechecked locally. */
typedef struct 
{
  u8 b0;
  u8 b1;
  u8 b2;
  s8 b3;
  s8 b4;
  s8 b5;
  s8 b6;
  s8 b7;
} Blob8;
extern u8 D_80014F9C;
extern s8 D_80014FE0;
extern u8 D_80016470[];
extern s32 D_800164AC;
void func_8004105C(s8 a0)
{
  u8 new_var2;
  int new_var3;
  Blob8 b;
  s32 *base;
  Blob8 *p;
  u8 ff;
  int new_var;
  s32 i;
  s8 *new_var4;
  p = (Blob8 *) D_80016470;
  base = &D_800164AC;
  ff = 0xFF;
  new_var = 0;
  i = new_var;
  new_var4 = &a0;
  *base = 1;
  b.b1 = 1;
  D_80014FE0 = *new_var4;
  b.b0 = ff;
  b.b2 = (new_var3 = 3);
  new_var2 = ff;
  b.b3 = a0;
  b.b4 = ff;
  b.b5 = ff;
  b.b6 = ff;
  b.b7 = new_var2;
  for (; i < D_80014F9C; i++)
  {
    *p = b;
    p++;
  }

  *((u8 *) p) = 0xFE;
}

