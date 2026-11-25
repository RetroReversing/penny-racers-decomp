extern u8 D_8006FAF0[];
extern u8 D_8011F2F0[];
extern char *D_801687EC[];
extern u8 D_8022A770[];
extern f32 sqrtf(f32);
extern void func_8015E8E4(void *);
void func_8013DF90(void)
{
  u8 *temp_s4;
  u8 *p;
  u8 *q;
  f32 f;
  f32 dx;
  f32 dy;
  f32 dz;
  s32 i;
  u16 idx;
  if (q)
  {
    temp_s4 = D_801687EC[*((u16 *) (D_8006FAF0 + 0x20))];
    i = 0;
  }
  else
  {
    temp_s4 = D_801687EC[*((u16 *) (D_8006FAF0 + 0x20))];
    i = 0;
  }
  if (temp_s4 != 0)
  {
    __repair_rows:
    {
      u8 *e = D_8022A770 + ((i & 0xFFFF) * 0x8F0);
      if (1)
      {
        idx = *((u16 *) (e + 2));
        if ((idx != 0xFFFF) && (!((*((u8 *) (e + 0x560))) & 0x18)))
        {
          if (dz)
          {
            q = D_8011F2F0 + (idx * 0x64);
            p = temp_s4;
            f = *((f32 *) (p + 4));
          }
          else
          {
            q = D_8011F2F0 + (idx * 0x64);
            p = temp_s4;
            f = *((f32 *) (p + 4));
          }
          if (f != 0.0f)
          {
            __repair_rows_:
            {
              if ((*((u8 *) (e + 0x597))) == (*((u16 *) p)))
              {
                if (q || i)
                {
                  dx = (*((f32 *) (q + 0x18))) - f;
                  dy = (*((f32 *) (q + 0x1C))) - (*((f32 *) (p + 8)));
                  dz = (*((f32 *) (q + 0x20))) - (*((f32 *) (p + 0xC)));
                }
                else
                  if (dx)
                {
                  dx = (*((f32 *) (q + 0x18))) - f;
                  dy = (*((f32 *) (q + 0x1C))) - (*((f32 *) (p + 8)));
                  dz = (*((f32 *) (q + 0x20))) - (*((f32 *) (p + 0xC)));
                }
                else
                {
                  dx = (*((f32 *) (q + 0x18))) - f;
                  dy = (*((f32 *) (q + 0x1C))) - (*((f32 *) (p + 8)));
                  dz = (*((f32 *) (q + 0x20))) - (*((f32 *) (p + 0xC)));
                }
                if (sqrtf(((dx * dx) + (dy * dy)) + (dz * dz)) < 26.0f)
                {
                  func_8015E8E4(e);
                  *((u16 *) (e + 6)) |= 4;
                }
              }
              p += 0x10;
              f = *((f32 *) (p + 4));
            }

            if (f != 0.0f)
            {
              goto __repair_rows_;
            }
          }
        }
      }
      if (1)
      {
        i++;
      }
    }

    if ((i & 0xFFFF) < 7U)
    {
      goto __repair_rows;
    }
  }
}

