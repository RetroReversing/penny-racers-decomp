extern u8 D_8021E22F[];
extern s8 D_8021E230[];
void func_80149CC4(s32, s32);
inline static int inline_fn(int arg0, int arg1)
{
  return arg0 + arg1;
}

inline static s8 inline_fn2(u8 arg0)
{
  return (s8) arg0;
}

void func_8014B410(void)
{
  u8 sp10[8];
  u8 *base;
  union 
  {
    u8 *pointer;
    s32 value;
  } __repair_phase_storage;
  s32 i;
  char j;
  s32 k;
 do { base = D_8021E22F; __repair_phase_storage.pointer = sp10; } while (0);
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 8; j++)
    {
      do
      {
        {
          k = 0x110 * ((char) i); __repair_phase_storage.value = k + (34 * j);
          sp10[j] = base[(__repair_phase_storage.value + inline_fn2(D_8021E22F[__repair_phase_storage.value])) + 2];
        }
      }
      while (0);
    }

    do
    {
      do
      {
        func_80149CC4(i, 1);
      }
      while (0);
      for (j = 0; j < ((unsigned int) 8); j++)
      {
        __repair_phase_storage.value = inline_fn(0x110 * ((unsigned short) i), 34 * j); D_8021E22F[__repair_phase_storage.value] = 0; k = 0;
        while (k < (D_8021E230 - 1)[(unsigned short) __repair_phase_storage.value])
        {
          if (1)
          {
          }
          if (inline_fn2(base[(__repair_phase_storage.value + k) - (-2)]) == sp10[j])
          {
            D_8021E22F[__repair_phase_storage.value] = k;
            break;
          }
          k++;
        }

      }

    }
    while (0);
  }

}
