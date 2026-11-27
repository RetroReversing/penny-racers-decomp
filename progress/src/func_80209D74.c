typedef struct { u8 f0; u8 pad1; u16 flags[4]; u8 padA[0xE]; f32 f18; f32 f1C; f32 f20; u8 pad24[4]; f32 f28; u8 pad2C[0x24]; u8 *f50; u8 pad54[0x10]; } Rec;
extern Rec D_8011F2F0[];
extern u16 D_8021F090;
extern u16 D_8021E146;
extern u16 D_8021F024;
extern u16 D_8021F026;
extern u16 D_8021EFF8;
extern s16 D_8021E1A2;
extern s8 D_8021E20B[][9];
extern u8 D_8021B00C[];
extern f32 D_8021B024[];
extern f32 D_8021B038[];
extern f32 D_8021B04C[];
void func_802055F8(void);

void func_80209D74(u16 id) {
    Rec *rec = &D_8011F2F0[id];
    Rec *a = &D_8011F2F0[D_8021F090];
    Rec *b = &D_8011F2F0[D_8021E146];
    Rec *c = &D_8011F2F0[D_8021F024];
    Rec *d = &D_8011F2F0[D_8021F026];
    Rec *e = &D_8011F2F0[D_8021EFF8];
    u8 i;

    switch (rec->f0) {
    case 0:
        if (D_8021E1A2 == 0) {
            if (D_8021E20B[rec->f0][0] == 1) {
                if (*rec->f50 != 0) {
                    goto flags;
                }
                a->f18 = -20.0f;
                a->f1C = -10.0f;
                a->f20 = 0.0f;
                b->f18 = -200.0f;
                c->f18 = 200.0f;
                d->f18 = -200.0f;
                e->f18 = 200.0f;
            } else if (D_8021B00C[0] == 0) {
                if (*rec->f50 != 0) {
                    goto flags;
                }
                func_802055F8();
                a->f18 = D_8021B024[0];
                a->f1C = D_8021B038[0];
                a->f20 = D_8021B04C[0];
                b->f18 = D_8021B024[1];
                c->f18 = D_8021B024[2];
                d->f18 = D_8021B024[3];
                e->f18 = D_8021B024[4];
                b->f1C = D_8021B038[1] + -10.0f;
                c->f1C = D_8021B038[2] + -10.0f;
                d->f1C = D_8021B038[3] + -10.0f;
                e->f1C = D_8021B038[4] + -10.0f;
                b->f20 = D_8021B04C[1];
                c->f20 = D_8021B04C[2];
                d->f20 = D_8021B04C[3];
                e->f20 = D_8021B04C[4];
            } else {
                if (*rec->f50 != 0) {
                    goto flags;
                }
                a->f18 = 0.0f;
                a->f1C = -10.0f;
                a->f20 = 0.0f;
                b->f18 = -200.0f;
                c->f18 = 200.0f;
            }
            if (*rec->f50 == 0) {
                a->f28 -= 1.0f;
                b->f28 -= 1.0f;
                c->f28 -= 1.0f;
                d->f28 -= 1.0f;
                e->f28 -= 1.0f;
            }
        } else {
            if (*rec->f50 == 0) {
                rec->f28 -= 1.0f;
            }
        }
    flags:
        rec->flags[1] |= 8;
        rec->flags[2] |= 8;
        rec->flags[3] |= 8;
        break;
    case 1:
    case 2:
    case 3:
        if (*rec->f50 == 0) {
            rec->f28 -= 1.0f;
        }
        for (i = 0; i < 4; i++) {
            if (rec->f0 != i) {
                rec->flags[i] |= 8;
            }
        }
        break;
    }
}
