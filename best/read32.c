/* adapted from similar verified C in func_80295A14 in South Park Rally (matched), with its names changed by decompdecomp */
/* identical to read32 in South Park (local match library) (matched), with its names changed by decompdecomp */
typedef struct { char pad[8]; u8 *p; } Cursor;
s32 read32(Cursor *a)
{
  u8 *p;
  u32 b0, b1, b2, b3;
  p = a->p;
  b0 = *p;
  a->p = ++p;
  b1 = *p;
  a->p = p + 1;
  b2 = p[1];
  a->p = p + 2;
  b3 = p[2];
  a->p = p + 3;
  return (b0 << 24) | (b1 << 16) | (b2 << 8) | b3;
}
