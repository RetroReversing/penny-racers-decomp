extern void func_8003DE60(void *, u16);
extern u16 func_8014A030(u16, s16, s32);
extern volatile unsigned int D_80168D54[];
extern u8 D_80183740[];
extern s8 D_80189B34;
extern u16 D_80189C94;
extern u8 D_8018A43C;
extern u16 D_8018A44A[];
extern u32 D_8018D3A0[];
extern s32 D_8018D3B8;
extern u8 D_8018D678;
extern s16 D_8021E18C;
extern s16 D_8021E1A2[];
extern s16 D_8021E1A6[];
extern u8 D_8022A770[];
extern u16 D_8022A776;
extern s8 D_8022AD06;
s32 func_8014B108(void)
{
  int __repair_literal;
  unsigned short s0 = 0;
  s32 i;
  u8 *b;
  union 
  {
    s16 *pointer;
    s32 value;
  } __repair_phase_storage;
  s16 *p2;
  {
    if (b)
    {
      b = D_8022A770;
    }
    else
    {
      b = D_8022A770;
    }
  }
  __repair_phase_storage.pointer = D_8021E1A2;
  p2 = D_8021E1A6;
  if (D_80189B34 == 2)
  {
    if (__repair_phase_storage.pointer[0] == 0)
    {
      if (b)
      {
        func_8003DE60(D_80183740, D_8022A776);
      }
      else
      {
        func_8003DE60(D_80183740, D_8022A776);
      }
      if (D_8022AD06 < 4)
      {
        D_8018A44A[__repair_phase_storage.pointer[2]] = func_8014A030(D_8018A44A[__repair_phase_storage.pointer[2]], __repair_phase_storage.pointer[-0xB], 1);
      }
      if (p2[0] == 2)
      {
        if (b[0x596] == 1)
        {
          {
            D_80189C94 = func_8014A030(D_80189C94, D_8021E1A6[-0xD], 1);
          }
        }
        if ((*((u16 *) (b + 0x230))) == 0xA)
        {
          D_8018A43C = 1;
        }
        if (((D_80189C94 & 0x1FF) == 0x1FF) && (D_8018A43C != 0))
        {
          s0 = 0x800;
        }
        __repair_literal = 4;
        if (b[0x596] < __repair_literal)
        {
          for (i = 1; i < 4; i++)
          {
            if (D_8022A770[0x566 + i] == 0x63)
            {
              s0 |= 1;
            }
          }

          if (D_8021E18C == 2)
          {
            for (i = 1; i < 4; i++)
            {
              if (((b[0x562 + i] == 0) && (b[0x563 + i] == 0)) && (b[0x564 + i] < 0x2A))
              {
                s0 |= 2;
              }
            }

          }
          if ((*((s32 *) (b + 0x538))) == 0x2000E)
          {
            s0 |= 8;
          }
          if ((!((*((u16 *) (b + 6))) & 0x10)) && (D_8021E18C == 5))
          {
            s0 |= 0x10;
          }
          if (((*((u16 *) (b + 6))) & 0x40) && (D_8021E18C == 4))
          {
            s0 |= 0x40;
          }
          if (D_8018D678 >= 0x1E)
          {
            s0 |= 0x100;
          }
          if ((D_8018D3B8 & 0x3FFFF) == 0x3FFFF)
          {
            s0 |= 0x200;
          }
          __repair_phase_storage.value = 0;
          for (i = 0; i < 7; i++)
          {
            if ((D_8018D3A0[(unsigned short) i] & D_80168D54[i * 4]) != D_80168D54[i * 4])
            {
              __repair_phase_storage.value = 1;
            }
          }

          if (__repair_phase_storage.value == 0)
          {
            s0 |= 0x400;
          }
        }
        if (b[0x596] == 1)
        {
          if (D_8021E18C == 7)
          {
            if (b)
            {
              s0 |= 4;
            }
            else
            {
              s0 |= 4;
            }
          }
          if (D_8021E18C == 1)
          {
            if (b)
            {
              s0 |= 0x80;
            }
            else
            {
              s0 |= 0x80;
            }
          }
          if ((!((*((u16 *) (b + 6))) & 4)) && (D_8021E18C == 6))
          {
            s0 |= 0x20;
          }
        }
      }
    }
  }
  return s0 & 0xFFFF;
}

