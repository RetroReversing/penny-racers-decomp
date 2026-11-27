typedef struct Obj { u8 pad0[2]; u16 h2; u16 h4; u16 h6; u16 h8; u8 padA[2]; u8 count; u8 padD[0xB]; f32 x; f32 y; f32 z; u8 pad24[0x1A]; u16 state; u8 pad40[4]; f32 f44; f32 f48; f32 f4C; u8 pad50[0x14]; } Obj;
typedef struct { u8 pad0[2]; u16 idx; u8 pad4[0x7B0]; f32 f7B4; u8 pad7B8[4]; f32 f7BC; f32 f7C0; u8 pad7C4[4]; f32 f7C8; u8 pad7CC[0x88]; f32 f854; u8 pad858[4]; f32 f85C; u8 pad860[0x90]; } Slot;
typedef struct { f32 f0; u8 pad[0x78]; } Rec;
extern Obj D_8011F2F0[];
extern Slot sCars[];
extern Rec D_8018D730[];
extern u8 D_8018A448;
extern u8 D_8023984C[];
extern u8 sprayDef[];
extern void updateBouncingBall(), func_8014297C(), func_80142894();
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
u16 raceAllocSlot(void);
void func_8013E818(u16, s32, s16, f32, f32, f32, u16);
u32 nextRandom(void);
void func_80141C28(u16 arg0)
{
    s32 i;

    switch (D_8011F2F0[arg0].state) {
    case 0:
        D_8018A448 = 0;
        D_8011F2F0[arg0].count = 0;
        D_8011F2F0[arg0].state = 1;
        break;
    case 1:
        if (D_8018A448 < 2) {
            D_8011F2F0[arg0].count++;
            if (D_8011F2F0[arg0].count == 0) {
                f32 x;
                f32 z;
                u16 id;
                u16 e;

                {
                    f32 f = (nextRandom() & 0x7F) * 2.826771f;

                    z = 1584.0f;
                    x = z - f;
                }
                id = raceAllocSlot();
                if (id != 0xFFFF) {
                    e = objCreate(0, 0, 1, 0, 0x51, 0xFF, D_8023984C, updateBouncingBall, func_8014297C, x, 200.0f, z, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                    if ((u16) (e + 2) >= 2U) {
                        func_8013E818(id, e, 0x40, 0.0f, 0.0f, 0.0f, 0x12C);
                        D_8018D730[id].f0 = 40.0f;
                        D_8018A448++;
                        for (i = 0; i < 5; i++) {
                            e = objCreate(0, 0, 1, 0, 0x5B, (u8) (i * 10 - 0x80), sprayDef, func_80142894, 0, x, 200.0f, 1570.0f, 0, 0, 0, 3.0f, 3.0f, 3.0f);
                            if ((u16) (e + 2) >= 2U) {
                                Obj *o = &D_8011F2F0[e];

                                o->h2 = o->h4 = o->h6 = o->h8 = 0x40;
                                o->f44 = (nextRandom() & 0x1F) - 16.0f;
                                o->f48 = nextRandom() & 0xF;
                                o->f4C = nextRandom() & 0xF;
                            }
                        }
                    } else {
                        func_8013E49C(id);
                    }
                }
            }
        }
        break;
    }

    for (i = 0; i < 7; i++) {
        if (sCars[i].idx != 0xFFFF) {
            Slot *slot = &sCars[i];
            Obj *o = &D_8011F2F0[slot->idx];
            f32 px = o->x;
            f32 pz;
            f32 a;
            f32 b;

            a = px - 1160.0f;
            pz = o->z;
            b = pz - 1222.0f;
            if (a * -0.99f + b * -0.12f < 0.0f) {
                a = px - 1209.0f;
                b = pz - 815.0f;
                if (a * 0.01f + b * -1.0f < 0.0f) {
                    a = px - 1589.0f;
                    b = pz - 819.0f;
                    if (a + b * 0.0f < 0.0f) {
                        a = px - 1591.0f;
                        b = pz - 1536.0f;
                        if (a * -0.59f + b * 0.81f < 0.0f) {
                            slot->f854 += 0.0424f;
                            slot->f85C -= 0.993f;
                            slot->f7B4 += 0.000424f;
                            slot->f7BC -= 0.00993f;
                            slot->f7C0 += 0.000424f;
                            slot->f7C8 -= 0.00993f;
                        }
                    }
                }
            }
        }
    }
}
