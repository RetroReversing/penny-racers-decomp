typedef struct { u16 unk0; s16 unk2; s16 unk4; s16 unk6; s16 unk8; u8 padA[2]; u8 unkC; u8 unkD; u16 unkE; u8 pad10[0x2E]; u16 unk3E; u8 pad40[4]; f32 unk44; f32 unk48; f32 unk4C; u8 pad50[0x14]; } Cam;
typedef struct { u8 pad0[4]; u8 *car; f32 unk8; u8 padC[8]; u16 timer; u8 pad16[0x60]; u16 unk76; } Ctl;
typedef struct { u8 pad0[0x30]; f32 unk30; f32 unk34; u8 pad38[0x18]; s32 *unk50; u8 pad54[0x10]; } Obj;
extern Cam D_8011F2F0[];
extern Obj carPartObjs[];
extern u8 D_802390C8[];
extern void stepSlotMotion();
extern void func_8015FD04();
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_8015EC58(u16 arg0)
{
    Ctl *ctl = *(Ctl **)((u8 *)&D_8011F2F0[arg0] + 0x60);
    Obj *obj = &carPartObjs[*(u16 *)(ctl->car + 2)];
    s32 *p = obj->unk50;
    u16 o;
    f32 pad[2];

    ctl->car[0x8D1] = 0x78;
    ctl->unk8 += (2.0f - ctl->unk8) * 0.2f;
    if (*(s32 *)(ctl->car + 0x890)) {
        if (*(f32 *)(ctl->car + 0x748) < 3000.0f) {
            *(f32 *)(ctl->car + 0x748) = 3000.0f;
        }
        *(f32 *)(ctl->car + 0x748) += 100.0f;
        if (*(f32 *)(ctl->car + 0x748) > 7000.0f) {
            *(f32 *)(ctl->car + 0x748) = 7000.0f;
        }
    }
    ctl->timer--;
    if ((s16)ctl->timer == 0) {
        if (*(s16 *)(ctl->car + 0x55E) == 0) {
            D_8011F2F0[arg0].unk3E = 1;
        } else {
            D_8011F2F0[arg0].unk3E = 3;
        }
    }
    switch (D_8011F2F0[arg0].unk3E) {
    case 1:
        obj->unk34 += (0.7f - obj->unk34) * 0.5f;
        obj->unk30 = obj->unk34;
        if (obj->unk34 < 0.73f) {
            D_8011F2F0[arg0].unk3E = 2;
        }
        break;
    case 2:
        obj->unk34 += (3.0f - obj->unk34) * 0.4f;
        obj->unk30 = obj->unk34;
        if (obj->unk30 > 2.8f) {
            D_8011F2F0[arg0].unk3E = 3;
        }
        break;
    case 3:
        obj->unk34 = 1.0f;
        obj->unk30 = 1.0f;
        *(u16 *)(ctl->car + 0x560) &= 0xEF;
        func_8013E49C(ctl->unk76);
        D_8011F2F0[arg0].unkD = 2;
        if (*(s16 *)(ctl->car + 0x55E) == 0) {
            p[1] = 0;
        }
        break;
    }
    if (ctl->car[0x860] && *(s32 *)(ctl->car + 0x890)) {
        *(f32 *)(ctl->car + 0x7B4) += (*(f32 *)(ctl->car + 0x784) * ctl->unk8 - *(f32 *)(ctl->car + 0x7B4)) * 0.2f;
        *(f32 *)(ctl->car + 0x7BC) += (*(f32 *)(ctl->car + 0x78C) * ctl->unk8 - *(f32 *)(ctl->car + 0x7BC)) * 0.2f;
        *(f32 *)(ctl->car + 0x7C0) = *(f32 *)(ctl->car + 0x7B4);
        *(f32 *)(ctl->car + 0x7C8) = *(f32 *)(ctl->car + 0x7BC);
    }
    if (!(ctl->timer & 7) && ctl->car[0x8A1] < 2) {
        o = objCreate(0, 0, 1, 0, 0x5B, 0x7F, D_802390C8, stepSlotMotion, func_8015FD04,
                          *(f32 *)(ctl->car + 0x714), *(f32 *)(ctl->car + 0x714+4), *(f32 *)(ctl->car + 0x714+8), 0, 0, 0, 0.08f, 0.08f, 0.08f);
        if (o != 0xFFFE && o != 0xFFFF) {
            D_8011F2F0[o].unk2 = D_8011F2F0[o].unk4 = D_8011F2F0[o].unk6 = D_8011F2F0[o].unk8 = 0x40;
            D_8011F2F0[o].unk44 = *(f32 *)(ctl->car + 0x7C0);
            D_8011F2F0[o].unk48 = *(f32 *)(ctl->car + 0x7C4) * 0.8f + 1.0f;
            D_8011F2F0[o].unk4C = *(f32 *)(ctl->car + 0x7C8);
            D_8011F2F0[o].unk3E = ctl->car[0x7CC];
            D_8011F2F0[o].unkE = *(u16 *)(ctl->car + 2);
        }
        o = objCreate(0, 0, 1, 0, 0x5B, 0x7F, D_802390C8, stepSlotMotion, func_8015FD04,
                          *(f32 *)(ctl->car + 0x720), *(f32 *)(ctl->car + 0x720+4), *(f32 *)(ctl->car + 0x720+8), 0, 0, 0, 0.08f, 0.08f, 0.08f);
        if (o != 0xFFFE && o != 0xFFFF) {
            D_8011F2F0[o].unk2 = D_8011F2F0[o].unk4 = D_8011F2F0[o].unk6 = D_8011F2F0[o].unk8 = 0x40;
            D_8011F2F0[o].unk44 = *(f32 *)(ctl->car + 0x7C0);
            D_8011F2F0[o].unk48 = *(f32 *)(ctl->car + 0x7C4) * 0.8f + 1.0f;
            D_8011F2F0[o].unk4C = *(f32 *)(ctl->car + 0x7C8);
            D_8011F2F0[o].unk3E = ctl->car[0x7CC];
            D_8011F2F0[o].unkE = *(u16 *)(ctl->car + 2);
        }
    }
}
