typedef struct { u16 pad0[4]; u16 unk8; u16 unkA; u16 unkC; u16 unkE; } N88;
typedef struct { u16 pad0[2]; u16 unk4; u16 unk6; } A88;
typedef struct { u16 f[50]; } F88;
typedef struct { N88 *p; u8 pad[96]; } P88;
extern F88 D_8011F2F2[];
extern P88 D_8011F340[];
typedef struct { u8 pad0[2]; u8 unk2; } G88;
extern u16 D_80233EC0;
extern G88 *D_801C7AB0;

void func_80129FD4(A88 *arg0, u16 arg1, u8 arg2)
{
  u16 cur;
  u16 flag;
  u16 n;

  cur = arg0->unk4;
  flag = arg0->unk6;
  do
  {
    D_8011F2F2[cur].f[arg2] |= 8;
    if (flag == 0)
    {
      if (D_8011F340[cur].p->unkA != 0xFFFF)
      {
        cur = D_8011F340[cur].p->unkA;
      }
      else
      {
        cur = D_8011F340[cur].p->unkE;
        flag = 1;
      }
    }
    else
    {
      if (D_8011F340[cur].p->unkE != 0xFFFF)
      {
        cur = D_8011F340[cur].p->unkE;
      }
      else
      {
        cur = D_8011F340[cur].p->unkA;
        flag = 0;
      }
    }
  }
  while (arg0->unk4 != cur);

  cur = arg0->unk4;
  flag = arg0->unk6;
  n = 0;
  do
  {
    D_8011F2F2[cur].f[arg2] &= 0xFFF7;
    if (cur == D_80233EC0 + D_801C7AB0->unk2 - 1)
    {
      break;
    }
    if (flag == 0)
    {
      if (D_8011F340[cur].p->unkA != 0xFFFF)
      {
        cur = D_8011F340[cur].p->unkA;
      }
      else
      {
        cur = D_8011F340[cur].p->unkE;
        flag = 1;
      }
    }
    else
    {
      if (D_8011F340[cur].p->unkE != 0xFFFF)
      {
        cur = D_8011F340[cur].p->unkE;
      }
      else
      {
        cur = D_8011F340[cur].p->unkA;
        flag = 0;
      }
    }
    n++;
  }
  while (n < arg1);

  cur = arg0->unk4;
  flag = arg0->unk6;
  n = 0;
  do
  {
    D_8011F2F2[cur].f[arg2] &= 0xFFF7;
    if (cur == D_80233EC0)
    {
      break;
    }
    if (flag == 0)
    {
      if (D_8011F340[cur].p->unk8 != 0xFFFF)
      {
        cur = D_8011F340[cur].p->unk8;
      }
      else
      {
        cur = D_8011F340[cur].p->unkC;
        flag = 1;
      }
    }
    else
    {
      if (D_8011F340[cur].p->unkC != 0xFFFF)
      {
        cur = D_8011F340[cur].p->unkC;
      }
      else
      {
        cur = D_8011F340[cur].p->unk8;
        flag = 0;
      }
    }
    n++;
  }
  while (n < arg1);
}
