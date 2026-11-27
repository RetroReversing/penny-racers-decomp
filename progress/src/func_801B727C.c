typedef struct { u8 a; u8 b; s8 c; s8 d; s8 e; } Ent5;
typedef struct { u8 pad0[2]; u8 count; } ListHdr;
extern ListHdr *trackInfo;
extern u8 D_801C7AB6;
extern u8 D_801C7AD8[];
extern Ent5 trackPoints[200];
extern u16 D_801C7470[200][4];

typedef struct { u16 slots[200][4]; Ent5 ents[200]; } Work;
void func_801B727C(u8 arg0) {
    Work w;
    u8 dst;
    u8 src;
    u8 j;
    Ent5 *p;
    Ent5 *q;
    Ent5 *r;
    Ent5 *tab;

    dst = 0;
    for (src = 0; src < trackInfo->count; src++) {
        if (src == arg0) {
            src++;
            if (src == trackInfo->count) break;
        }
        *(u8 *) (dst * 5 + (u8 *) &w + 1600) = trackPoints[src].a;
        *(u8 *) (dst * 5 + (u8 *) &w + 1601) = trackPoints[src].b;
        *(u8 *) (dst * 5 + (u8 *) &w + 1602) = trackPoints[src].c;
        *(u8 *) (dst * 5 + (u8 *) &w + 1603) = trackPoints[src].d;
        *(u8 *) (dst * 5 + (u8 *) &w + 1604) = trackPoints[src].e;
        for (j = 0; j < 4; j++) {
            w.slots[dst][j] = D_801C7470[src][j];
        }
        dst++;
    }
    trackInfo->count = dst;
    D_801C7AB6 = 0;
    for (src = 0; src < trackInfo->count; src++) {
        p = &trackPoints[src];
        tab = w.ents;
        q = &tab[src];
        p->a = q->a;
        p->b = q->b;
        p->c = q->c;
        p->d = q->d;
        p->e = q->e;
        D_801C7AD8[(u16) ((s8) trackPoints[src].c + (s8) trackPoints[src].d * 24)] = src;
        D_801C7AB6++;
        for (dst = 0; dst < 4; dst++) {
            D_801C7470[src][dst] = w.slots[src][dst];
            if (D_801C7470[src][dst] != 0xFFFF) {
                D_801C7AB6++;
            }
        }
    }
    for (; src < 200; src++) {
        r = &trackPoints[src];
        r->a = 4;
        r->b = 0;
        r->c = -1;
        r->d = -1;
        r->e = -1;
        for (dst = 0; dst < 4; dst++) {
            D_801C7470[src][dst] = 0xFFFF;
        }
    }
}
