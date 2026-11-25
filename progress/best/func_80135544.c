#define O(i) D_8011F2F0[(i) & 0xFFFF]
typedef struct 
{
  u8 id;
  u8 pad1[0xC];
  u8 flagD;
  u8 pad2[0x30];
  u16 state;
  u8 pad3[8];
  f32 timer;
  u8 pad4[0x18];
} Obj;
extern Obj D_8011F2F0[];
extern u8 D_800DB1B8[];
extern u8 D_8022AD64[];
extern u8 D_8022AFE9[];
extern u16 D_80167E60;
extern u16 D_80167E62;
extern u16 D_80183B50;
extern int D_80190C90;
extern u16 D_80183B4C[];
extern s16 D_8018A26E[];
extern u8 D_80189CC8;
s16 func_800DE41C();
void func_801D65BC();
void func_801D663C();
void func_80135C64();
void func_80136A28();
inline static s16 inline_fn(s32 arg0)
{
  return *((s16 *) ((D_800DB1B8 + 0x2114) + (O(arg0).id * 0x28)));
}

inline static s16 inline_fn2(s16 *arg0)
{
  return *arg0;
}

void func_80135544(s32 arg0_in)
{
  s32 arg0;
  volatile u64 scratch;
  short __repair_constant = 2;
  u8 *__base_D_8022AD64;
  s32 i;
  s16 v;
  arg0 = arg0_in;
  do
  {
    switch (O(arg0).state)
    {
      case 0:
        if (D_8022AFE9[O(arg0).id * 0x8F0] != 5)
      {
        func_800DE41C(0, O((short) arg0).id, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        D_80183B4C[(&O(arg0))->id] = 200;
      }
      else
      {
        D_80183B4C[O(arg0).id] = 400;
      }
        O(arg0).state = 1;
        D_80183B50 = 0;

      case 1:
      {
        long long phantom_wide = arg0;
      }
        O(arg0).timer = (u16) (((u32) O(arg0).timer) + 1);
        if (D_80183B4C[O(arg0).id] <= (((u16) ((u32) O(arg0).timer)) - 1))
      {
        O(arg0).state = __repair_constant;
        for (i = 0; i < 4; i++)
        {
          __base_D_8022AD64 = D_8022AD64; v = inline_fn2((s16 *) ((__base_D_8022AD64 + (i * 0x38)) + (O(arg0).id * 0x8F0)));
          if (v != (-1))
          {
            func_801D663C();
          }
          if (D_800DB1B8)
          {
            *((s16 *) ((__base_D_8022AD64 + (i * 0x38)) + (O(arg0).id * 0x8F0))) = -1;
          }
          else
          {
            *((s16 *) ((__base_D_8022AD64 + (i * 0x38)) + (O(arg0).id * 0x8F0))) = -1;
          }
        }

        if (((*((s16 *) (D_800DB1B8 + 0x2108))) == D_80167E60) && (D_80183B50 == 0))
        {
          func_801D65BC(5);
          D_80183B50 = 1;
        }
      }

      case 2:
        do
      {
        if (inline_fn(arg0) > 0x90)
        {
          if (D_800DB1B8)
          {
            *((s16 *) ((D_800DB1B8 + 0x2114) + (O(arg0).id * 0x28))) -= 4;
            *((s16 *) ((D_800DB1B8 + 0x2128) + (O(arg0).id * 0x28))) = (*((s16 *) ((D_800DB1B8 + 0x2110) + (O(arg0).id * 0x28))) += 4);
            return;
          }
          else
          {
            *((s16 *) ((D_800DB1B8 + 0x2114) + (O(arg0).id * 0x28))) -= 4;
            if (1)
            {
              *((s16 *) ((D_800DB1B8 + 0x2128) + (O(arg0).id * 0x28))) = (*((s16 *) ((D_800DB1B8 + 0x2110) + (O(arg0).id * 0x28))) += 4);
              return;
            }
          }
        }
      }
      while (0);
        if (arg0)
      {
        O(arg0).state = 3;
        return;
      }
      else
      {
        O(arg0).state = 3;
        return;
      }

      case 3:
        do
      {
        O(D_8018A26E[O(arg0).id]).flagD = __repair_constant; O((unsigned) arg0).flagD = __repair_constant;
      }
      while (0);
        if (D_80167E60 == inline_fn2((s16 *) (D_800DB1B8 + 0x2108)))
      {
        if (D_800DB1B8)
        {
          O(inline_fn2((u16 *) (&D_80190C90))).flagD = __repair_constant;
        }
        else
        {
          O(*((u16 *) (&D_80190C90))).flagD = __repair_constant;
        }
      }
        D_8018A26E[O(arg0).id] = func_800DE41C(0, O(arg0).id, 3, 0, 0x80, 0, 0, func_80135C64, func_80136A28, 0, 0, 0, 0, 0, 0, 0);
        break;

    }

  }
  while (0);
}

