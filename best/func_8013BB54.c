typedef struct Racer {
    u8 pad0[2];
    u16 unk2;
    union { u16 h; u8 b[2]; } unk4u;
    u8 pad6[0x72C - 6];
    f32 unk72C;
    f32 unk730;
    f32 unk734;
    f32 unk738;
    f32 unk73C;
    f32 unk740;
    u8 pad744[0x770 - 0x744];
    f32 unk770;
    u8 pad774[4];
    u8 unk778;
    u8 pad779[0x7C0 - 0x779];
    f32 unk7C0;
    f32 unk7C4;
    f32 unk7C8;
    u8 unk7CC;
    u8 pad7CD[0x860 - 0x7CD];
    u8 unk860;
    u8 pad861[3];
    f32 unk864;
    u8 pad868[0x8A1 - 0x868];
    u8 unk8A1;
} Racer;
#define unk4 unk4u.h
#define unk5 unk4u.b[1]

typedef struct Effect {
    u16 unk0;
    u16 unk2[4];
    u8 padA[4];
    u16 unkE;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    u8 pad30[0xE];
    u16 unk3E;
    u8 pad40[4];
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    u8 pad50[0x10];
    Racer *unk60;
} Effect;

extern Effect D_8011F2F0[];
extern u16 D_80167FB0[];
extern u16 D_8006FAF0[];
extern u8 D_802390C8[];
extern u8 D_80239200[];
extern u8 D_8023936C[];
extern u8 D_802393A0[];
extern void func_8013AF08(void);
extern void func_8013B0D4(void);
extern void func_8013B1BC(void);
extern void func_8013B704(void);
extern void func_8013B894(void);
extern void func_8013BA38(void);
extern void func_8013BA58(void);
extern void func_8013BB0C(void);
extern u32 func_801FA38C(s32);
extern f32 __sinf(f32);
extern f32 __cosf(f32);
extern u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_8013BB54(u16 arg0) {
    Racer *p;
    u16 idx;
    u16 i;
    f32 x;
    f32 z;

    p = D_8011F2F0[arg0].unk60;
    if (p->unk770 > 20.0f) {
        switch (p->unk7CC) {
        case 10:
        case 11:
        case 12:
            if (p->unk8A1 != 4 && p->unk864 < 0.5 && p->unk860 != 0 && (p->unk778 & 7) == 7) {
                idx = func_800DE41C(0, p->unk5, 1, 0, 0x5B, 0x9B, D_802390C8, func_8013AF08, func_8013B0D4,
                                    p->unk72C, p->unk730, p->unk734, 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                if (idx != 0xFFFF && idx != 0xFFFE) {
                    D_8011F2F0[idx].unk2[0] = D_8011F2F0[idx].unk2[1] = D_8011F2F0[idx].unk2[2] = D_8011F2F0[idx].unk2[3] = 0x40;
                    D_8011F2F0[idx].unk44 = p->unk7C0;
                    D_8011F2F0[idx].unk48 = p->unk7C4 * 0.8f + 1.0f;
                    D_8011F2F0[idx].unk4C = p->unk7C8;
                    D_8011F2F0[idx].unk3E = p->unk7CC;
                    D_8011F2F0[idx].unkE = arg0;
                    idx = func_800DE41C(0, p->unk5, 1, 0, 0x5B, 0x9B, D_802390C8, func_8013AF08, func_8013B0D4,
                                        p->unk738, p->unk73C, p->unk740, 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                    if (idx != 0xFFFF && idx != 0xFFFE) {
                        D_8011F2F0[idx].unk2[0] = D_8011F2F0[idx].unk2[1] = D_8011F2F0[idx].unk2[2] = D_8011F2F0[idx].unk2[3] = 0x40;
                        D_8011F2F0[idx].unk44 = p->unk7C0;
                        D_8011F2F0[idx].unk48 = p->unk7C4 * 0.8f + 1.0f;
                        D_8011F2F0[idx].unk4C = p->unk7C8;
                        D_8011F2F0[idx].unk3E = p->unk7CC;
                        D_8011F2F0[idx].unkE = arg0;
                    }
                }
            }
            break;
        case 20:
            if (p->unk860 != 0 && (p->unk778 & 0xF) == 0xF) {
                idx = func_800DE41C(0, p->unk5, 1, 0, 0x5B, 0xC8, D_80239200, func_8013B1BC, func_8013B704,
                                    D_8011F2F0[p->unk2].unk18, D_8011F2F0[p->unk2].unk1C, D_8011F2F0[p->unk2].unk20,
                                    D_8011F2F0[p->unk2].unk24, D_8011F2F0[p->unk2].unk28, D_8011F2F0[p->unk2].unk2C,
                                    0.08f, 0.02f, 0.08f);
                if (idx != 0xFFFF && idx != 0xFFFE) {
                    D_8011F2F0[idx].unk44 = p->unk7C0;
                    D_8011F2F0[idx].unk48 = p->unk7C4 * 0.8f + 1.0f;
                    D_8011F2F0[idx].unk4C = p->unk7C8;
                    D_8011F2F0[idx].unk3E = p->unk7CC;
                    D_8011F2F0[idx].unkE = arg0;
                }
            }
            break;
        case 30:
            if (p->unk860 != 0 && (p->unk778 & 0xF) == 0xF) {
                idx = func_800DE41C(0, p->unk5, 1, 0, 0x5B, 0x9B, D_802390C8, func_8013B1BC, func_8013B704,
                                    p->unk72C, p->unk730, p->unk734, 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                if (idx != 0xFFFF && idx != 0xFFFE) {
                    D_8011F2F0[idx].unk2[0] = D_8011F2F0[idx].unk2[1] = D_8011F2F0[idx].unk2[2] = D_8011F2F0[idx].unk2[3] = 0x40;
                    D_8011F2F0[idx].unk44 = p->unk7C0 * 1.2f;
                    D_8011F2F0[idx].unk48 = p->unk7C4 * 0.8f + 1.0f;
                    D_8011F2F0[idx].unk4C = p->unk7C8 * 1.2f;
                    D_8011F2F0[idx].unk3E = p->unk7CC;
                    D_8011F2F0[idx].unkE = arg0;
                    idx = func_800DE41C(0, p->unk5, 1, 0, 0x5B, 0x9B, D_802390C8, func_8013B1BC, func_8013B704,
                                        p->unk738, p->unk73C, p->unk740, 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                    if (idx != 0xFFFF && idx != 0xFFFE) {
                        D_8011F2F0[idx].unk2[0] = D_8011F2F0[idx].unk2[1] = D_8011F2F0[idx].unk2[2] = D_8011F2F0[idx].unk2[3] = 0x40;
                        D_8011F2F0[idx].unk44 = p->unk7C0 * 1.2f;
                        D_8011F2F0[idx].unk48 = p->unk7C4 * 0.8f + 1.0f;
                        D_8011F2F0[idx].unk4C = p->unk7C8 * 1.2f;
                        D_8011F2F0[idx].unk3E = p->unk7CC;
                        D_8011F2F0[idx].unkE = arg0;
                    }
                }
            }
            break;
        case 45:
            if (p->unk860 != 0 && (p->unk778 & 0xF) == 0xF) {
                idx = func_800DE41C(0, p->unk5, 1, 0, 0x5B, 0x9B, D_802390C8, func_8013B1BC, func_8013B704,
                                    D_8011F2F0[p->unk2].unk18, D_8011F2F0[p->unk2].unk1C, D_8011F2F0[p->unk2].unk20,
                                    0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                if (idx != 0xFFFF && idx != 0xFFFE) {
                    D_8011F2F0[idx].unk2[0] = D_8011F2F0[idx].unk2[1] = D_8011F2F0[idx].unk2[2] = D_8011F2F0[idx].unk2[3] = 0x40;
                    D_8011F2F0[idx].unk44 = p->unk7C0 * 1.2f;
                    D_8011F2F0[idx].unk48 = p->unk7C4 * 0.8f + 1.0f;
                    D_8011F2F0[idx].unk4C = p->unk7C8 * 1.2f;
                    D_8011F2F0[idx].unk3E = p->unk7CC;
                    D_8011F2F0[idx].unkE = arg0;
                }
            }
            break;
        }
    }
    if (p->unk4 >= 2) {
        return;
    }
    switch (p->unk7CC) {
    case 31:
    case 33:
    case 35:
    case 37:
    case 39:
    case 44:
        return;
    }
    if (D_8006FAF0[16] == 7) {
        D_80167FB0[p->unk4]++;
        if (D_80167FB0[p->unk4] >= 31) {
            p = D_8011F2F0[arg0].unk60;
            for (i = 0; i < 5; i++) {
                x = (f32)(func_801FA38C(0) % 400) + D_8011F2F0[arg0].unk18 - 200.0f;
                x += __sinf(D_8011F2F0[arg0].unk28 * 3.14f / 180.0f) * (p->unk770 + p->unk770 + 100.0f);
                z = (f32)(func_801FA38C(0) % 400) + D_8011F2F0[arg0].unk20 - 200.0f;
                z += __cosf(D_8011F2F0[arg0].unk28 * 3.14f / 180.0f) * (p->unk770 + p->unk770 + 100.0f);
                idx = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, D_8023936C, func_8013B894, func_8013BA38,
                                    x, D_8011F2F0[arg0].unk1C + 80.0f, z, 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                if (idx == 0xFFFF || idx == 0xFFFE) {
                    break;
                }
                D_8011F2F0[idx].unk2[0] = D_8011F2F0[idx].unk2[1] = D_8011F2F0[idx].unk2[2] = D_8011F2F0[idx].unk2[3] = 0x48;
                D_8011F2F0[idx].unk2[p->unk4] &= ~8;
                D_8011F2F0[idx].unk48 = D_8011F2F0[arg0].unk1C;
            }
            D_80167FB0[p->unk4] = 0;
        }
    }
    if (D_8006FAF0[16] == 2) {
        D_80167FB0[p->unk4]++;
        if (D_80167FB0[p->unk4] >= 6) {
            p = D_8011F2F0[arg0].unk60;
            for (i = 0; i < 4; i++) {
                x = (f32)(func_801FA38C(0) % 400) + D_8011F2F0[arg0].unk18 - 100.0f;
                x += __sinf(D_8011F2F0[arg0].unk28 * 3.14f / 180.0f) * (p->unk770 * 1.5f + 100.0f);
                z = (f32)(func_801FA38C(0) % 400) + D_8011F2F0[arg0].unk20 - 100.0f;
                z += __cosf(D_8011F2F0[arg0].unk28 * 3.14f / 180.0f) * (p->unk770 * 1.5f + 100.0f);
                idx = func_800DE41C(0, 0, 1, 0, 0x5B, 0x64, D_802393A0, func_8013BA58, func_8013BB0C,
                                    x, D_8011F2F0[arg0].unk1C + 100.0f, z, 0.0f, 0.0f, 0.0f, 0.08f, 0.09f, 0.08f);
                if (idx == 0xFFFF || idx == 0xFFFE) {
                    break;
                }
                D_8011F2F0[idx].unk2[0] = D_8011F2F0[idx].unk2[1] = D_8011F2F0[idx].unk2[2] = D_8011F2F0[idx].unk2[3] = 0x48;
                D_8011F2F0[idx].unk2[p->unk4] &= ~8;
                D_8011F2F0[idx].unk48 = D_8011F2F0[arg0].unk1C;
            }
            D_80167FB0[p->unk4] = 0;
        }
    }
}
