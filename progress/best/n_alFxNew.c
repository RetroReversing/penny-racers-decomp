inline static int __repair_inline(s32 a, s32 b)
{
  return a < b;
}

void *alHeapDBAlloc();
s32 func_800346C0();
extern f64 D_8004A3C8;
extern f64 D_8004A3D0;
extern char D_800BF7D0[];
extern char D_800BF838[];
extern char D_800BF8C0[];
extern char D_800BF8E8[];
extern char D_800BF910[];
extern char D_800BF938[];
void n_alFxNew(void **arg0, void *arg1, s32 arg2)
{
  s32 *var_s2;
  f64 var_ft0;
  s32 temp_a0;
  s32 __repair_result_temp_a0;
  s32 temp_a1;
  s32 temp_s1;
  unsigned char var_s1_2;
  s32 var_s4;
  s32 var_v0;
  u8 temp_v0_2;
  void *temp_s0;
  void *temp_v0;
  void *temp_v0_3;
  temp_v0 = alHeapDBAlloc(0, 0, 1, 0x2CU);
  *arg0 = temp_v0;
  temp_v0_2 = *((u8 *) (((char *) arg1) + 0x1C));
  switch (temp_v0_2)
  {
    case 1:
      var_s2 = D_800BF7D0;
      break;

    case 2:
      var_s2 = D_800BF838;
      break;

    case 5:
      var_s2 = D_800BF8C0;
      break;

    case 3:
      var_s2 = D_800BF8E8;
      break;

    case 4:
      var_s2 = D_800BF910;
      break;

    case 6:
      var_s2 = *((s32 **) (((char *) arg1) + 0x20));
      break;

    default:
      var_s2 = D_800BF938;
      break;

  }

  *((u8 *) (((char *) temp_v0) + 0x24)) = (u8) (*((s32 *) (((char *) var_s2) + 0)));
  *((u32 *) (((char *) temp_v0) + 0x1C)) = (u32) (*((u32 *) (((char *) var_s2) + 4)));
  *((void **) (((char *) temp_v0) + 0x20)) = alHeapDBAlloc(0, 0, arg2, *((u8 *) (((char *) temp_v0) + 0x24)), 0x28);
  temp_v0_3 = alHeapDBAlloc(0, 0, arg2, (u8) (*((u32 *) (((char *) temp_v0) + 0x1C))), 2);
  temp_s1 = 2;
  temp_a0 = 0;
  *((void **) (((char *) temp_v0) + 0x14)) = temp_v0_3;
  *((void **) (((char *) temp_v0) + 0x18)) = temp_v0_3;
  if ((*((u32 *) (((char *) temp_v0) + 0x1C))) != 0)
  {
    do
    {
      *((s16 *) (((temp_a0 & 0xFFFF) * 2) + (*((void **) (((char *) temp_v0) + 0x14))))) = 0;
      temp_a0 += 1;
    }
    while (((u32) (temp_a0 & 0xFFFF)) < ((u32) (*((u32 *) (((char *) temp_v0) + 0x1C)))));
  }
  var_s4 = 0;
  if ((*((u8 *) (((char *) temp_v0) + 0x24))) != 0)
  {
    var_v0 = 0 & 0xFFFF;
    __repair_rows:
    {
      temp_s0 = (*((void **) (((char *) temp_v0) + 0x20))) + (var_v0 * 0x28);
      {
        s32 __repair_value;
        __repair_value = temp_s1 + 1; temp_a1 = __repair_value;
      }
      *((s32 *) (((char *) temp_s0) + 0)) = (s32) (*(((temp_s1 & 0xFFFF) * 4) + var_s2));
      *((s32 *) (((char *) temp_s0) + 4)) = (s32) (*(((temp_a1 & 0xFFFF) * 4) + var_s2));
      *((s16 *) (((char *) temp_s0) + 0xA)) = (s16) (*((((temp_a1 + 1) & 0xFFFF) * 4) + var_s2));
      *((s16 *) (((char *) temp_s0) + 8)) = (s16) (*((((temp_a1 + 2) & 0xFFFF) * 4) + var_s2));
      temp_s1 = temp_a1; temp_s1 += 4;
      *((s16 *) (((char *) temp_s0) + 0xC)) = (s16) (*((((temp_a1 + 3) & 0xFFFF) * 4) + var_s2));
      if ((*(((temp_s1 & 0xFFFF) * 4) + var_s2)) != 0)
      {
        var_s1_2 = temp_a1 + 6;
        __repair_result_temp_a0 = (*((s32 *) (((char *) temp_s0) + 4))) - (*((s32 *) (((char *) temp_s0) + 0)));
        var_ft0 = (f64) __repair_result_temp_a0;
        *((f32 *) (((char *) temp_s0) + 0x10)) = (f32) ((2.0 * ((f64) (((f32) (*(((temp_s1 & 0xFFFF) * 4) + var_s2))) / 1000.0f))) / ((f64) (*((s32 *) (((char *) arg1) + 0x18)))));
        if (__repair_inline(__repair_result_temp_a0, 0))
        {
          var_ft0 += D_8004A3D0;
        }
        *((s32 *) (((char *) temp_s0) + 0x18)) = 0;
        *((f32 *) (((char *) temp_s0) + 0x14)) = 1.0f;
        *((f32 *) (((char *) temp_s0) + 0x1C)) = (f32) ((((f64) ((f32) (*((((temp_a1 + 5) & 0xFFFF) * 4) + var_s2)))) / D_8004A3C8) * var_ft0);
        *((void **) (((char *) temp_s0) + 0x24)) = alHeapDBAlloc(0, 0, arg2, 1U, 0x34);
        *((void **) (((char *) (*((void **) (((char *) temp_s0) + 0x24)))) + 0x14)) = alHeapDBAlloc(0, 0, arg2, 1U, 0x20);
        *((s32 *) (((char *) (*((void **) (((char *) temp_s0) + 0x24)))) + 0x20)) = 0;
        *((s32 *) (((char *) (*((void **) (((char *) temp_s0) + 0x24)))) + 0x24)) = 1;
      }
      else
      {
        *((void **) (((char *) temp_s0) + 0x24)) = NULL;
        var_s1_2 = temp_a1 + 6;
      }
      if ((*(((var_s1_2 & 0xFFFF) * 4) + var_s2)) != 0)
      {
        *((void **) (((char *) temp_s0) + 0x20)) = alHeapDBAlloc(0, 0, arg2, 1U, 0x30);
        *((void **) (((char *) (*((void **) (((char *) temp_s0) + 0x20)))) + 0x28)) = alHeapDBAlloc(0, 0, arg2, 1U, 8);
        *((s16 *) (((char *) (*((void **) (((char *) temp_s0) + 0x20)))) + 0)) = (s16) (*(((var_s1_2 & 0xFFFF) * 4) + var_s2));
        temp_s1 = var_s1_2 + 1;
        func_800346C0(*((void **) (((char *) temp_s0) + 0x20)));
      }
      else
      {
        *((void **) (((char *) temp_s0) + 0x20)) = NULL;
        temp_s1 = var_s1_2 + 1;
      }
      var_s4 += 1;
      var_v0 = var_s4 & 0xFFFF;
    }

    if (((u32) (var_s4 & 0xFFFF)) < ((u8) (*((u8 *) (((char *) temp_v0) + 0x24)))))
    {
      goto __repair_rows;
    }
  }
}

