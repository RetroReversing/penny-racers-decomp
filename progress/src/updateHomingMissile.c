typedef struct { u8 pad0[2]; u16 idx; } Link_F;
typedef struct { u8 pad0[0x560]; u16 flags; u8 pad1[0x1FE]; f32 f760; u8 pad2[0x6D]; u8 b7D1; } Body_F;
typedef struct { u8 pad0[4]; Body_F *body; f32 f8; f32 fC; f32 f10; s16 timer; u8 pad1[0x60]; u16 f76; } Sub_F;
typedef struct { u8 pad0[2]; u16 idx; } Pad_F;
typedef struct {
  s8 f0; u8 pad1[0xC]; u8 fD; u8 pad2[0xA]; f32 f18; f32 f1C; f32 f20; u8 pad3[4]; f32 f28; u8 pad4[4];
  f32 f30; f32 f34; f32 f38; u8 pad5[2]; u16 mode; u8 pad6[0x20]; Sub_F *sub;
} Rec_F;
extern Rec_F D_8011F2F0[];
extern u8 D_80233EC1;

/* Per-frame update for a homing missile: steers its arc toward the target object and, when its timer runs out, releases the lock and ends the effect. */ void updateHomingMissile(u16 objIdx)
{
  Rec_F *rec;
  Sub_F *sub;
  f32 blend;

  rec = &D_8011F2F0[objIdx];
  sub = rec->sub;
  rec->f18 = D_8011F2F0[((Link_F *)sub->body)->idx].f18;
  rec->f1C = D_8011F2F0[((Link_F *)sub->body)->idx].f1C + sub->fC;
  rec->f20 = D_8011F2F0[((Link_F *)sub->body)->idx].f20;
  rec->f28 += 5.0f;
  if (rec->f28 > 359.0f)
  {
    rec->f28 -= 360.0f;
  }
  switch (D_8011F2F0[objIdx].mode)
  {
  case 0:
    sub->fC += (10.0f - sub->fC) * 0.2f;
    if (sub->fC < 30.0f)
    {
      sub->fC = 30.0f;
      sub->f8 = 1.0f;
      D_8011F2F0[objIdx].mode = 1;
    }
    break;
  case 1:
    sub->fC += sub->f8;
    sub->f8 -= 0.1f;
    if (sub->fC < 30.0f)
    {
      sub->fC = 30.0f;
      sub->f8 = 1.0f;
    }
    blend = (sub->fC - 20.0f) * 0.04f;
    D_8011F2F0[((Link_F *)sub->body)->idx].f34 = (blend + 0.4f) * sub->f10;
    D_8011F2F0[((Link_F *)sub->body)->idx].f30 = D_8011F2F0[((Link_F *)sub->body)->idx].f38 = (1.6f - blend) * sub->f10;
    break;
  }
  if (--sub->timer == 0)
  {
    D_8011F2F0[((Link_F *)sub->body)->idx].f30 = D_8011F2F0[((Link_F *)sub->body)->idx].f34 = D_8011F2F0[((Link_F *)sub->body)->idx].f38 = sub->f10;
    sub->body->f760 -= 30000.0f;
    func_8013E49C(sub->f76);
    sub->body->flags &= 0xF7;
    D_8011F2F0[objIdx].fD = 2;
  }
  rec->f0 = sub->body->b7D1 - D_80233EC1;
  liftCopyFlags(objIdx);
}
