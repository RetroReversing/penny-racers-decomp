typedef struct { s16 kind; s16 pad; s32 val; } Rec;
typedef struct {
    u32 flags; u32 total; u32 minv;
    void *D[16]; u32 E[16]; u8 B[16]; u8 C[16]; u32 F[16];
} Out;

extern double D_8004A3A0;
extern double D_8004A3A8;
u32 func_8002DAE0(void **p, s32 idx);
void func_8002D520(void **p, s32 idx, Rec *r);

void func_8002D790(u8 **arg0, Out *arg1, u32 arg2)
{
    Rec rec;
    void *tbl;
    u32 flags = 0;
    volatile float sc;
    u32 total = 0;
    u32 minv = 0;
    s32 flag = 1;
    void *D[16];
    u32 E[16];
    u8 B[16];
    u8 C[16];
    u32 F[16];
    s32 i, k, j, idx;
    u32 mn;
    u8 *base;

    base = *arg0;
    tbl = base;
    for (i = 0; i < 16; i++) {
        B[i] = 0;
        C[i] = 0;
        E[i] = 0;
        if (((u32 *)tbl)[i]) {
            flags |= 1 << i;
            D[i] = base + ((u32 *)tbl)[i];
            F[i] = func_8002DAE0(&tbl, i);
        } else {
            D[i] = 0;
        }
    }

    {
        double d = (double)(s32)((u32 *)tbl)[16];
        if ((s32)((u32 *)tbl)[16] < 0) {
            d = d + D_8004A3A0;
        }
        sc = (float)(D_8004A3A8 / (double)(float)d);
    }

    do {
        arg1->flags = flags;
        arg1->total = total;
        arg1->minv = minv;
        for (k = 0; k < 16; k++) {
            arg1->D[k] = D[k];
            arg1->E[k] = E[k];
            arg1->B[k] = B[k];
            arg1->C[k] = C[k];
            arg1->F[k] = F[k];
        }

        mn = 0xFFFFFFFF;
        idx = 0;
        for (j = 0; j < 16; j++) {
            if ((flags >> j) & 1) {
                if (flag) {
                    F[j] -= minv;
                }
                if (F[j] < mn) {
                    mn = F[j];
                    idx = j;
                }
            }
        }

        func_8002D520(&tbl, idx, &rec);
        rec.val = mn;
        minv = mn;
        total += mn;
        if (rec.kind != 0x12) {
            F[idx] += func_8002DAE0(&tbl, idx);
        }
        flag = 1;
    } while (rec.kind != 4 && total < arg2);
}
