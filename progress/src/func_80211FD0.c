typedef struct { u16 v[8]; u8 pad10[0x15A]; u8 f16A[14]; } Slot;
typedef struct { s8 sel; u8 pad; s8 t[32]; } Pick;
typedef struct { Pick p[8]; } Picks;
typedef struct { u8 pad0[0xC]; s16 fC; u8 padE[0x14]; s16 n; } Menu;
typedef struct { u16 v; } Half;
extern Slot D_800DA260[];
extern Picks D_8021E22F[];
typedef struct { s8 t[0x110]; } Row;
extern Row D_8021E231[];
extern Menu D_8021E180;
extern u8 D_8021E1A3;
extern u8 D_80232820;
extern Half D_8006FB10;
extern s32 D_80168BB0;
extern char D_8021DDE0[];
extern u8 D_8021F048[][14];
u8 func_80149F40(u16, s32, s32);
void func_80211F14(u8);
void func_8003DE60(char *, ...);

void func_80211FD0(void) {
    s32 i;
    u8 c;
    u8 m;
    s16 n;

    D_80168BB0 = 0x16;
    if (D_8021E180.n < 2 && (n = D_8021E180.fC) < 9) {
        D_8006FB10.v = n + 1;
    } else {
        D_8006FB10.v = 0;
    }
    D_80232820 = D_8021E180.n + 1;
    func_8003DE60(D_8021DDE0, D_8021E180.n);
    for (i = 0; i <= D_8021E180.n; i++) {
        D_800DA260[i].v[0] = func_80149F40(D_800DA260[i].v[0], 0, (&D_8021E231[i].t[D_8021E22F[i].p[0].sel])[0]);
        D_800DA260[i].v[1] = func_80149F40(D_800DA260[i].v[0], 1, (&D_8021E231[i].t[D_8021E22F[i].p[1].sel])[34]);
        D_800DA260[i].v[3] = func_80149F40(D_800DA260[i].v[0], 2, (&D_8021E231[i].t[D_8021E22F[i].p[2].sel])[68]);
        D_800DA260[i].v[5] = func_80149F40(D_800DA260[i].v[0], 3, (&D_8021E231[i].t[D_8021E22F[i].p[3].sel])[102]);
        D_800DA260[i].v[2] = func_80149F40(D_800DA260[i].v[0], 4, (&D_8021E231[i].t[D_8021E22F[i].p[4].sel])[136]);
        D_800DA260[i].v[4] = func_80149F40(D_800DA260[i].v[0], 5, (&D_8021E231[i].t[D_8021E22F[i].p[5].sel])[170]);
        D_800DA260[i].v[6] = func_80149F40(D_800DA260[i].v[0], 6, (&D_8021E231[i].t[D_8021E22F[i].p[6].sel])[204]);
        D_800DA260[i].v[7] = func_80149F40(D_800DA260[i].v[0], 7, (&D_8021E231[i].t[D_8021E22F[i].p[7].sel])[238]);
        for (c = 0; c < 4; c++) {
            for (m = 0; m < 14; m++) {
                D_800DA260[c].f16A[m] = D_8021F048[c][m];
            }
            func_80211F14(c);
        }
    }
}
