typedef struct {
    u8 p0[2];
    u16 id;
    u8 p4[0x59C - 4];
    s32 f59C;
    u8 p5A0[0x748 - 0x5A0];
    f32 f748;
    u8 f74C;
    u8 p74D[0x770 - 0x74D];
    f32 f770;
    u8 p774[0x86C - 0x774];
    f32 f86C;
    u8 f870;
    u8 p871[0x87B - 0x871];
    s8 f87B;
    s8 f87C;
    u8 hist[16];
    u8 f88D;
    u8 p88E[2];
    u32 f890;
    u8 p894[4];
    s32 f898;
    s32 f89C;
    u8 p8A0;
    u8 f8A1;
    u8 p8A2[2];
    f32 f8A4;
    u8 p8A8[4];
    f32 f8AC;
    u8 p8B0[4];
    f32 f8B4;
    u8 p8B8[8];
    u8 f8C0;
    s8 f8C1;
    u8 p8C2[2];
    f32 f8C4;
    u8 p8C8[8];
    u8 f8D0;
    u8 p8D1[3];
    f32 f8D4;
    f32 f8D8;
} Car;
typedef struct { u8 p0[0x28]; f32 f28; u8 p2C[0x64 - 0x2C]; } Obj;
extern Obj D_8011F2F0[];
extern u8 D_8006FB14[];
int abs(int);
void func_8013EC80();
s32 func_80148230();
void addCarEffectObjects(Car *);

void func_80222A84(Car *c)
{
    u8 idx;
    u8 prev;
    u16 i;
    s16 sum;

    if (D_8006FB14[4] != 0) {
        if (c->f898 != 0 && c->f870 == 0) {
            func_8013EC80();
        }
        c->hist[c->f88D] = c->f87B;
    } else {
        c->hist[c->f88D] = 0;
    }
    idx = c->f88D;
    prev = (idx + 0xF) & 0xF;
    c->f88D = (idx + 1) & 0xF;
    if (c->f770 == 0.0f) {
        if (c->f89C != 0 && c->f890 != 0) {
            c->f8D0 = 0x78;
            c->f74C = 5;
        }
    }
    if (c->f89C == 0 && c->f74C == 5) {
        if (D_8006FB14[4] != 0) {
            c->f74C = 0;
            c->f8D0 = 0x78;
            if ((func_80148230() & 0xFF) != 2) {
                if (c->f59C < 100) {
                    if (c->f748 > 2800.0f && c->f748 < 3200.0f) {
                        c->f74C = 4;
                        if (c->f748 > 2900.0f && c->f748 < 3100.0f) {
                            addCarEffectObjects(c);
                        }
                        c->f748 = 5000.0f;
                    } else {
                        c->f748 = 1000.0f;
                    }
                } else {
                    if (c->f748 > 2800.0f && c->f748 < 3200.0f) {
                        c->f74C = 4;
                        if (c->f748 > 2900.0f && c->f748 < 3100.0f) {
                            addCarEffectObjects(c);
                        }
                        c->f748 = 7000.0f;
                    } else {
                        c->f748 = 1000.0f;
                    }
                }
            } else {
                if (c->f59C < 100) {
                    if (c->f748 > 2800.0f && c->f748 < 3200.0f) {
                        c->f74C = 1;
                        c->f748 = 4000.0f;
                    } else {
                        c->f748 = 1000.0f;
                    }
                } else {
                    if (c->f748 > 2800.0f && c->f748 < 3200.0f) {
                        c->f74C = 4;
                        if (c->f748 > 2900.0f && c->f748 < 3100.0f) {
                            addCarEffectObjects(c);
                        }
                        c->f748 = 7000.0f;
                    } else {
                        c->f748 = 1000.0f;
                    }
                }
            }
        } else {
            c->f748 = 1000.0f;
        }
    }
    sum = 0;
    for (i = 0; i < 15; i++) {
        sum += (s8) c->hist[idx] - (s8) c->hist[prev];
        idx = (idx + 0xF) & 0xF;
        prev = (prev + 0xF) & 0xF;
        if (abs(sum) > 60 && c->f8A1 == 0 && c->f86C > 102.0f) {
            if (c->f890 < 10 && c->f890 != 0) {
                c->f8A4 = 0.1f;
                c->f8A1 = 1;
                c->f8D0 = 0x78;
            }
        }
        if (abs(c->f87B) > 50 && c->f8A1 == 0 && c->f89C != 0 && c->f74C != 5) {
            c->f8A1 = 4;
            c->f8C0 = 0;
            c->f8C1 = c->f87B > 0 ? 1 : -1;
            c->f8C4 = 360.0f;
            c->f8AC = D_8011F2F0[c->id].f28 + (c->f87B > 0 ? -90.0f : 90.0f);
            c->f8D0 = 0x78;
        }
    }
    if (c->f8A4 < 1.0f) {
        c->f8A4 += 0.01f;
        if (c->f8A4 > 1.0f) {
            c->f8A4 = 1.0f;
            c->f8A1 = 0;
        }
    }
    if (c->f87C < -32 && c->f890 != 0 && c->f74C == 0 && (c->f8A1 == 0 || c->f8A1 == 2)) {
        c->f8A1 = 2;
        c->f8D4 = c->f770 * 0.0005f + c->f8D4;
        if (c->f8D4 > 1.0f) {
            c->f8D4 = 1.0f;
            c->f8D8 = 0.0f;
        }
        c->f8D0 = 0x78;
    } else if (c->f8A1 == 2 || c->f8A1 == 6 || c->f8A1 == 7) {
        c->f8D8 += 0.0025f;
        c->f8D4 -= c->f8D8;
        if (c->f8D4 < 0.1f) {
            c->f8D4 = 0.0f;
            c->f8A1 = 0;
        }
    }
    c->f8B4 = c->f8D4 * -60.0f;
}
