typedef struct { u8 a; u8 b; s8 c; s8 d; s8 e; } Ent5;
typedef struct { u8 pad0[2]; u8 count; } ListHdr;
extern ListHdr *D_801C7AB0;
extern u8 D_801C7AB6;
extern u8 D_801C7AD8[];
extern Ent5 D_801C7080[200];
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
    for (src = 0; src < D_801C7AB0->count; src++) {
        if (src == arg0) {
            src++;
            if (src == D_801C7AB0->count) break;
        }
        *(u8 *) (dst * 5 + (u8 *) &w + 1600) = D_801C7080[src].a;
        *(u8 *) (dst * 5 + (u8 *) &w + 1601) = D_801C7080[src].b;
        *(u8 *) (dst * 5 + (u8 *) &w + 1602) = D_801C7080[src].c;
        *(u8 *) (dst * 5 + (u8 *) &w + 1603) = D_801C7080[src].d;
        *(u8 *) (dst * 5 + (u8 *) &w + 1604) = D_801C7080[src].e;
        for (j = 0; j < 4; j++) {
            w.slots[dst][j] = D_801C7470[src][j];
        }
        dst++;
    }
    D_801C7AB0->count = dst;
    D_801C7AB6 = 0;
    for (src = 0; src < D_801C7AB0->count; src++) {
        p = &D_801C7080[src];
        tab = w.ents;
        q = &tab[src];
        p->a = q->a;
        p->b = q->b;
        p->c = q->c;
        p->d = q->d;
        p->e = q->e;
        D_801C7AD8[(u16) ((s8) D_801C7080[src].c + (s8) D_801C7080[src].d * 24)] = src;
        D_801C7AB6++;
        for (dst = 0; dst < 4; dst++) {
            D_801C7470[src][dst] = w.slots[src][dst];
            if (D_801C7470[src][dst] != 0xFFFF) {
                D_801C7AB6++;
            }
        }
    }
    for (; src < 200; src++) {
        r = &D_801C7080[src];
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
