inline static u16 __repair_inline(u16 a)
{
  return a;
}

extern char D_800DB1B8[];
extern char D_80220FB0[];
extern char D_80220FB4[];
extern char D_80220FB8[];
extern char D_80220FBC[];
extern char D_80220FC0[];
extern char D_80220FC4[];
extern char D_80220FC8[];
extern char D_80220FCC[];
extern char D_80220FD0[];
extern char D_80220FD4[];
extern char D_80220FD8[];
extern char D_80220FDC[];
extern char D_80220FE0[];
extern char D_80220FE4[];
extern char D_80220FE8[];
extern char D_80220FEC[];
extern char D_80220FF0[];
extern char D_80220FF8[];
extern char D_80221000[];
extern char D_80221008[];
extern char D_80221010[];
extern char D_80221018[];
extern char D_80221020[];
extern char D_80221028[];
extern char D_80221030[];
extern volatile long long D_80221038[];
extern char D_80221040[];
extern char D_80221048[];
extern char D_80221050[];
extern char D_80221058[];
extern char D_80221060[];
extern long long D_80221068[];
inline static char inline_fn(char *arg0)
{
  return *arg0;
}

inline static u16 inline_fn2(u16 *arg0)
{
  return *arg0;
}

void func_8021F6A0(s32 arg0)
{
  u8 __repair_frame[8];
  s16 temp_v0;
  s32 var_a1_2;
  s32 temp_a0;
  s32 temp_a0_2;
  s16 __repair_narrow_temp_a0_2;
  unsigned char temp_a0_3;
  char temp_a0_5;
  s32 temp_a0_4;
  s32 var_a0;
  s32 var_a1;
  s32 var_v0_2;
  s32 var_v1;
  u16 var_v0;
  char *__base_D_80220FB0;
  __base_D_80220FB0 = D_80220FB0;
  var_a1 = 0;
  if (arg0 > 0)
  {
    var_a0 = 0 * 4;
    do
    {
      {
        long long phantom_wide = arg0;
      }
      temp_a0 = (var_a0 + var_a1) * 8;
      *((u16 *) ((D_800DB1B8 + 0x2108) + temp_a0)) = arg0;
      __repair_narrow_temp_a0_2 = (s16) (var_a1 * 3);
      *((u16 *) ((D_800DB1B8 + 0x210A) + temp_a0)) = __repair_narrow_temp_a0_2;
      *((u16 *) ((D_800DB1B8 + 0x210C) + temp_a0)) = ((s16) (var_a1 * 3)) + 1;
      *((u16 *) ((D_800DB1B8 + 0x210E) + temp_a0)) = ((s16) (var_a1 * 3)) + 2;
      switch (arg0)
      {
        default:
          var_v1 = var_a1 * 0x28;
        {
          s32 __repair_value;
          __repair_value = var_a1 * 2; temp_a0_2 = __repair_value;
        }
          *((u16 *) ((D_800DB1B8 + 0x2110) + var_v1)) = inline_fn(temp_a0_2 + __base_D_80220FB0);
          *((u16 *) ((D_800DB1B8 + 0x2112) + var_v1)) = inline_fn2((u16 *) (D_80220FB4 + temp_a0_2));
          *((u16 *) ((D_800DB1B8 + 0x2114) + var_v1)) = inline_fn2((u16 *) (D_80220FB8 + temp_a0_2));
          *((u16 *) ((D_800DB1B8 + 0x2116) + var_v1)) = inline_fn2((u16 *) (D_80220FBC + temp_a0_2));
          *((u16 *) ((D_800DB1B8 + 0x2128) + var_v1)) = inline_fn2((u16 *) (D_80220FC0 + temp_a0_2));
          *((u16 *) ((D_800DB1B8 + 0x212A) + var_v1)) = inline_fn2((u16 *) (D_80220FC4 + temp_a0_2));
          *((u16 *) ((D_800DB1B8 + 0x212C) + var_v1)) = inline_fn2((u16 *) (D_80220FC8 + temp_a0_2));
          var_v0 = __repair_inline(inline_fn2((u16 *) (D_80220FCC + temp_a0_2)));
          break;

        case 2:
          var_v1 = var_a1 * 0x28;
          temp_a0_3 = var_a1 * 2;
          *((u16 *) ((D_800DB1B8 + 0x2110) + var_v1)) = inline_fn2(temp_a0_3 + D_80220FD0);
          *((u16 *) ((D_800DB1B8 + 0x2112) + var_v1)) = inline_fn2((u16 *) (D_80220FD4 + temp_a0_3));
          *((u16 *) ((D_800DB1B8 + 0x2114) + var_v1)) = inline_fn2((u16 *) (D_80220FD8 + temp_a0_3));
          *((u16 *) ((D_800DB1B8 + 0x2116) + var_v1)) = inline_fn2((u16 *) (D_80220FDC + temp_a0_3));
          *((u16 *) ((D_800DB1B8 + 0x2128) + var_v1)) = inline_fn2((u16 *) (D_80220FE0 + temp_a0_3));
          *((u16 *) ((D_800DB1B8 + 0x212A) + var_v1)) = inline_fn2((u16 *) (D_80220FE4 + temp_a0_3));
          *((u16 *) ((D_800DB1B8 + 0x212C) + var_v1)) = inline_fn2((u16 *) (D_80220FE8 + temp_a0_3));
          var_v0 = inline_fn2((u16 *) (D_80220FEC + temp_a0_3));
          break;

        case 3:
          var_v1 = var_a1 * 0x28;
          temp_a0_4 = var_a1 * 2;
          *((u16 *) ((D_800DB1B8 + 0x2110) + var_v1)) = inline_fn2(temp_a0_4 + D_80220FF0);
          *((u16 *) ((D_800DB1B8 + 0x2112) + var_v1)) = inline_fn2((u16 *) (D_80220FF8 + temp_a0_4));
          *((u16 *) ((D_800DB1B8 + 0x2114) + var_v1)) = inline_fn2((u16 *) (D_80221000 + temp_a0_4));
          *((u16 *) ((D_800DB1B8 + 0x2116) + var_v1)) = inline_fn2((u16 *) (D_80221008 + temp_a0_4));
          *((u16 *) ((D_800DB1B8 + 0x2128) + var_v1)) = inline_fn2((u16 *) (D_80221010 + temp_a0_4));
          *((u16 *) ((D_800DB1B8 + 0x212A) + var_v1)) = inline_fn2((u16 *) (D_80221018 + temp_a0_4));
          *((u16 *) ((D_800DB1B8 + 0x212C) + var_v1)) = inline_fn2((u16 *) (D_80221020 - (-temp_a0_4)));
          var_v0 = inline_fn2((u16 *) (D_80221028 + temp_a0_4));
          break;

        case 4:
          var_v1 = var_a1 * 0x28;
          temp_a0_5 = var_a1 * 2;
          *((u16 *) ((D_800DB1B8 + 0x2112) + var_v1)) = inline_fn2((u16 *) (D_80221038 + temp_a0_5));
          *((u16 *) ((D_800DB1B8 + 0x2110) + var_v1)) = inline_fn2(temp_a0_5 + D_80221030);
          *((u16 *) ((D_800DB1B8 + 0x2114) + var_v1)) = inline_fn2((u16 *) (D_80221040 + temp_a0_5));
          *((u16 *) ((D_800DB1B8 + 0x2116) + var_v1)) = inline_fn2((u16 *) (D_80221048 + temp_a0_5));
          *((u16 *) ((D_800DB1B8 + 0x2128) + var_v1)) = inline_fn2((u16 *) (D_80221050 + temp_a0_5));
          *((u16 *) ((D_800DB1B8 + 0x212A) + var_v1)) = *((u16 *) (D_80221058 + temp_a0_5));
          *((u16 *) ((D_800DB1B8 + 0x212C) + var_v1)) = inline_fn2((u16 *) (D_80221060 + temp_a0_5));
          var_v0 = *((u16 *) (D_80221068 + temp_a0_5));
          break;

      }

      *((u16 *) ((D_800DB1B8 + 0x212E) + var_v1)) = var_v0;
      var_a1 += 1;
      var_a0 = var_a1 * 4;
    }
    while ((temp_a0_4 = var_a1) < arg0);
  }
  var_a1_2 = arg0;
  var_v0_2 = var_a1_2 * 4;
  if ((var_a1_2 + 1) <= 4)
  {
    __repair_rows:
    {
      *((u16 *) ((D_800DB1B8 + 0x2108) + ((var_v0_2 + var_a1_2) * 8))) = 0;
      var_a1_2 += 1;
      var_v0_2 = var_a1_2 * 4;
    }

    if (var_a1_2 < 4)
    {
      goto __repair_rows;
    }
  }
}

