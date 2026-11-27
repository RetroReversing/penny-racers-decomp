typedef struct { u8 pad0[4]; void *unk4; } Model;
typedef struct {
  u8 pad0[0x14];
  u16 child;
  u8 pad16[0x30 - 0x16];
  f32 scale[3];
  u8 pad3C[2];
  u16 state;
  u8 pad40[4];
  f32 unk44;
  u8 pad48[4];
  f32 unk4C;
  Model *model;
  u8 pad54[0x10];
} Obj;
typedef struct {
  u16 pad0;
  u16 obj;
  u8 pad4[0x210 - 4];
  u16 unk210[(0x5EC - 0x210) / 2];
  f32 unk5EC;
  u8 pad5F0[0x8E0 - 0x5F0];
  void *unk8E0;
  s16 unk8E4;
  s16 unk8E6;
  s16 unk8E8;
  u8 pad8EA[6];
} Car;
typedef struct {
  u8 pad0[0x60];
  s8 order[7];
  u8 done[7];
  u8 pad6E[2];
  f32 unk70;
  u8 pad74[8];
} Race;
u16 func_8013E364(void);
void func_800DF1E0(u16, u16 *);
void func_8013F44C(s32, Race *);
void func_801D7028(s32, s16);
void func_8022FE50(s32, s32, s32, s32);
extern volatile u16 D_8006F9E8;
extern s16 D_800DAB30;
extern s16 D_800DAB32;
extern s16 D_800DAB34;
extern s16 D_800DAB36;
extern s16 D_800DAB38;
extern s16 D_800DAB3A;
extern s16 D_800DAB3C;
extern s16 D_800DAB3E;
extern s16 D_800DAB40;
extern s32 D_800DAB44;
extern s32 D_800DAB48;
extern s32 D_800DAB4C;
extern s32 D_800DAB50;
extern u8 D_800DAB54;

extern Obj D_8011F2F0[];
extern Race *D_8018A280;
extern s32 D_8018D674;
extern Race D_8018D6C0[];
extern s16 D_8021E1A6;
extern Car D_8022A770[];
extern Car D_8022DD10;
extern u8 D_80237980[];
extern u8 D_80322A4C[];
#define S16(o) (*(s16 *)(D_800DA26A + (o)))
#define S32(o) (*(s32 *)(D_800DA26A + (o)))

void func_8013FE18(u16 arg0)
{
  u16 r;
  s32 i;
  Car *p;
  Obj *q;

  if (D_8006F9E8 != 5)
  {
    switch (D_8011F2F0[arg0].state)
    {
    case 0:
      r = func_8013E364();
      if (r != 0xFFFF)
      {
        p = &D_8022DD10;
        D_800DAB30 = 0;
        D_800DAB32 = 0x37;
        D_800DAB34 = 0xA;
        D_800DAB36 = 9;
        D_800DAB38 = 7;
        D_800DAB3A = 0;
        D_800DAB3C = 0;
        D_800DAB3E = 0;
        D_800DAB40 = 0;
        D_800DAB44 = 0;
        D_800DAB48 = 0;
        D_800DAB4C = 0;
        D_800DAB50 = 0;
        D_800DAB54 = 0;
        func_8022FE50(6, 6, 6, 1);
        switch (D_8021E1A6)
        {
        case 0:
          p->unk8E0 = D_80322A4C;
          p->unk5EC = 0;
          break;
        case 1:
          p->unk8E0 = D_80322A4C;
          p->unk5EC = 0;
          break;
        case 2:
          p->unk8E0 = D_80322A4C;
          p->unk5EC = 0;
          break;
        case 3:
          p->unk8E0 = D_80322A4C;
          p->unk5EC = 0;
          break;
        default:
          p->unk5EC = 0;
          break;
        }
        D_8011F2F0[D_8011F2F0[p->obj].child].model->unk4 = D_80237980;
        func_800DF1E0(D_8011F2F0[p->obj].child, p->unk210);
        D_8011F2F0[(u16) (u32) D_8011F2F0[p->obj].unk44].unk4C = 0.4f;
        D_8011F2F0[p->obj + 5].model->unk4 = 0;
        D_8011F2F0[p->obj + 6].model->unk4 = 0;
        D_8011F2F0[p->obj + 7].model->unk4 = 0;
        p->unk8E4 = 0x27;
        p->unk8E6 = 0x26;
        p->unk8E8 = 0;
        q = &D_8011F2F0[p->obj];
        q->scale[0] += q->scale[0];
        q->scale[1] += q->scale[1];
        q->scale[2] += q->scale[2];
        D_8018A280 = &D_8018D6C0[r];
        D_8018A280->unk70 = 30.0f;
        for (i = 0; i < 7; i++)
        {
          D_8018A280->done[i] = 0;
          if (D_8022A770[i].obj != 0xFFFF && D_8022A770[i].unk5EC > 0.0f)
            D_8018A280->order[i] = i;
          else
            D_8018A280->order[i] = -1;
        }
        D_8011F2F0[arg0].state = 1;
      }
      break;
    case 1:
      func_8013F44C(D_8022DD10.obj, D_8018A280);
      if (D_8018D674 != 0)
        func_801D7028(D_8022DD10.obj, 0x27);
      break;
    }
  }
}
