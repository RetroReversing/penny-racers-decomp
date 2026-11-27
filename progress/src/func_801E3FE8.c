typedef struct { u8 state; u8 min; u8 sec; u8 x3; u8 frac; } Time;
typedef struct { u8 pad[0x562]; Time time[4]; } Race;
typedef struct { u8 cur[3]; u8 best[3]; u16 curRows[9]; u16 bestRows[9]; u8 pad2A[6]; } Rec;
extern Race D_8022A770;
extern Rec D_801E97A0[];
extern u8 D_8006FAF0[];
extern u8 D_801E9740;
extern u8 D_801E9738;
extern u8 D_801E9698[];
extern u8 D_801E96B4[];
extern u16 D_800DA260[];
extern PennyHalfwordRows D_800DA26A[];
extern s32 D_801E9D58;
void func_8003DE60();
void func_80029790(void);
void func_800297C8(void);
s32 func_801E2F38(s32);
void func_801DD938(s16, s16, s16, s16, u8, u16, u16, u16, u8, u16);

void func_801E3FE8(void) {
    s32 id;
    s32 i;
    s32 k;
    Time *t;
    Race *r;
    u8 less;
    u8 a;
    u8 b;

    D_801E9740 = 0;
    D_801E9738 = 0;
    id = *(u16 *) &D_8006FAF0[0x20] - 1;
    r = &D_8022A770;
    t = r->time;
    if (t[0].state == 0) {
        a = t->min;
        b = D_801E97A0[id].best[0];
        if (a <= b) {
            less = a < b;
            a = t->sec;
            b = D_801E97A0[id].best[1];
            if ((a <= b) || less) {
                if (a < b) less = 1;
                a = t->frac;
                b = D_801E97A0[id].best[2];
                if ((a < b) || less) {
            func_8003DE60(D_801E9698);
            D_801E9738 = 1;
            D_801E97A0[id].best[0] = t->min;
            D_801E97A0[id].best[1] = t->sec;
            D_801E97A0[id].best[2] = t->frac;
            for (k = 0; k < 8; k++) {
                D_801E97A0[id].bestRows[k] = D_800DA26A[0].rows[D_800DA260[0]][k];
            }
                }
            }
        }
    }
    for (i = 1; i < 4; i++) {
        t = &r->time[i];
        a = t->min;
        b = D_801E97A0[id].cur[0];
        if (a <= b) {
            less = a < b;
            a = t->sec;
            b = D_801E97A0[id].cur[1];
            if ((a <= b) || less) {
                if (a < b) less = 1;
                a = t->frac;
                b = D_801E97A0[id].cur[2];
                if ((a < b) || less) {
            func_8003DE60(D_801E96B4, i);
            D_801E9740 = i;
            D_801E97A0[id].cur[0] = t->min;
            D_801E97A0[id].cur[1] = t->sec;
            D_801E97A0[id].cur[2] = t->frac;
            for (k = 0; k < 8; k++) {
                D_801E97A0[id].curRows[k] = D_800DA26A[0].rows[D_800DA260[0]][k];
            }
                }
            }
        }
    }
    if (D_801E9740 || D_801E9738) {
        func_80029790();
        D_801E9D58 = func_801E2F38((u16) id);
        if (D_801E9D58 != 0) {
            func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x14, 0, 0x66);
        }
        func_800297C8();
    }
}
