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
extern u16 D_80190C90;
extern u16 D_80183B4C[];
extern s16 D_8018A26E[];
extern u8 D_80189CC8;
s16 func_800DE41C();
void func_801D65BC();
void func_801D663C();
void func_80135C64();
void func_80136A28();
void func_80135544(s32 arg0)
{
  s32 i;
  s16 v;
  switch (O(arg0).state)
  {
    case 0:
      if (D_8022AFE9[O(arg0).id * 0x8F0] != 5)
      {
        func_800DE41C(0, O(arg0).id, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        D_80183B4C[O(arg0).id] = 200;
      }
      else
      {
        D_80183B4C[O(arg0).id] = 400;
      }
      D_80183B50 = 0;
      O(arg0).state = 1;
      /* fallthrough */
    case 1:
      O(arg0).timer = (u16)(((u32)O(arg0).timer) + 1);
      if (D_80183B4C[O(arg0).id] <= (((u16)((u32)O(arg0).timer)) - 1))
      {
        O(arg0).state = 2;
        for (i = 0; i < 4; i++)
        {
          v = *((s16 *)((D_8022AD64 + (i * 0x38)) + (O(arg0).id * 0x8F0)));
          if (v != -1)
          {
            func_801D663C(v);
          }
          *((s16 *)((D_8022AD64 + (i * 0x38)) + (O(arg0).id * 0x8F0))) = -1;
        }
        if ((*((s16 *)(D_800DB1B8 + 0x2108)) == D_80167E60) && (D_80183B50 == 0))
        {
          func_801D65BC(5);
          D_80183B50 = 1;
        }
      }
      /* fallthrough */
    case 2:
      if ((*((s16 *)((D_800DB1B8 + 0x2114) + (O(arg0).id * 0x28)))) > 0x90)
      {
        *((s16 *)((D_800DB1B8 + 0x2114) + (O(arg0).id * 0x28))) -= 4;
        *((s16 *)((D_800DB1B8 + 0x2128) + (O(arg0).id * 0x28))) = (*((s16 *)((D_800DB1B8 + 0x2110) + (O(arg0).id * 0x28))) += 4);
        return;
      }
      O(arg0).state = 3;
      return;
    case 3:
      O(D_8018A26E[O(arg0).id]).flagD = 2;
      O(arg0).flagD = 2;
      if (D_80167E60 == (*((s16 *)(D_800DB1B8 + 0x2108))))
      {
        O(D_80190C90).flagD = 2;
      }
      D_8018A26E[O(arg0).id] = func_800DE41C(0, O(arg0).id, 3, 0, 0x80, 0, 0, func_80135C64, func_80136A28, 0, 0, 0, 0, 0, 0, 0);
      break;
  }
}
