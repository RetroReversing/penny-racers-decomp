extern u8 D_8011F2F0[];
extern u8 D_8022A770[];
extern u8 D_80189970[];
extern u8 D_80189990[];
extern u8 D_8018B530[];
extern u8 D_8018B540[];
extern u8 D_8018B550[];
extern u8 D_8018B560[];
extern u8 D_8018D66A[];
extern u8 D_8011F2FB[];
extern u8 D_8011F32E[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
extern u8 D_8011F33C[];
extern u8 D_80183950[];
extern u8 D_80183958[];
extern u8 D_80183960[];

typedef struct { u8 p0[6]; u16 a; u16 b; u16 c; u8 d; u8 e; u8 f; u8 g; } Ent16;

void func_8015BD20(s32 arg0)
{
    s32 idx = arg0 & 0xFFFF;
    u8 *rec = D_8011F2F0 + idx * 100;
    u8 s1 = rec[0];
    u8 *s0 = D_8022A770 + s1 * 2288;
    u16 state = *(u16 *)(D_8011F32E + idx * 100);
    s32 i;
    Ent16 *blk;

    if (state == 0) {
        blk = (Ent16 *)(D_80189970 + (s1 << 6));
        blk[0].a = 0; blk[0].b = 0; blk[0].c = 0; blk[0].d = 0; blk[0].e = 0x7F; blk[0].f = 0; blk[0].g = 0xFF;
        blk[2].a = 0; blk[2].b = 0; blk[2].c = 0x40; blk[2].d = 0; blk[2].e = 0x7F; blk[2].f = 0; blk[2].g = 0xFF;
        blk[1].a = 0; blk[1].b = 0x800; blk[1].c = 0; blk[1].d = 0; blk[1].e = 0x7F; blk[1].f = 0; blk[1].g = 0xFF;
        blk[3].a = 0; blk[3].b = 0x800; blk[3].c = 0x40; blk[3].d = 0; blk[3].e = 0x7F; blk[3].f = 0; blk[3].g = 0xFF;
        for (i = 0; i < 4; i++) {
            Ent16 *e0 = (Ent16 *)(D_8018B530 + (s1 << 8) + (i << 6));
            Ent16 *e1 = (Ent16 *)(D_8018B540 + (s1 << 8) + (i << 6));
            Ent16 *e2 = (Ent16 *)(D_8018B550 + (s1 << 8) + (i << 6));
            Ent16 *e3 = (Ent16 *)(D_8018B560 + (s1 << 8) + (i << 6));
            e0->a = 0; e0->b = 0; e0->c = 0; e0->d = 0; e0->e = 0x7F; e0->f = 0; e0->g = 0xFF;
            e1->a = 0; e1->b = 0x800; e1->c = 0; e1->d = 0; e1->e = 0x7F; e1->f = 0; e1->g = 0xFF;
            e2->a = 0; e2->b = 0; e2->c = 0x40; e2->d = 0; e2->e = 0x7F; e2->f = 0; e2->g = 0xFF;
            e3->a = 0; e3->b = 0x800; e3->c = 0x40; e3->d = 0; e3->e = 0x7F; e3->f = 0; e3->g = 0xFF;
        }
        D_8018D66A[s1] = 0;
        *(u16 *)(D_8011F32E + (arg0 & 0xFFFF) * 100) = 1;
    }
}
