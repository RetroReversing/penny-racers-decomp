typedef struct { u16 v[8]; u8 pad10[0x15A]; u8 f16A[14]; } Slot;
typedef struct { s8 sel; u8 pad; s8 t[32]; } Pick;
typedef struct { Pick p[8]; } Picks;
typedef struct { u8 pad0[0xC]; s16 fC; u8 padE[0x14]; s16 n; } Menu;
typedef struct { u16 v; } Half;
extern Slot sCarSlots[];
extern Picks D_8021E22F[];
typedef struct { s8 t[0x110]; } Row;
extern Row D_8021E231[];
extern Menu sMenu;
extern u8 D_8021E1A3;
extern u8 D_80232820;
extern Half D_8006FB10;
extern s32 D_80168BB0;
extern char D_8021DDE0[];
extern u8 D_8021F048[][14];
u8 func_80149F40(u16, s32, s32);
void func_80211F14(u8);
void debugPrintf(char *, ...);

/* Commits the menu's racer picks: sets the next menu index, then rebuilds each racer's entries and per-slot rows. */ void commitRacerPicks(void) {
    s32 racer;
    u8 slotIndex;
    u8 rowIndex;
    s16 n;

    D_80168BB0 = 0x16;
    if (sMenu.n < 2 && (n = sMenu.fC) < 9) {
        D_8006FB10.v = n + 1;
    } else {
        D_8006FB10.v = 0;
    }
    D_80232820 = sMenu.n + 1;
    debugPrintf(D_8021DDE0, sMenu.n);
    for (racer = 0; racer <= sMenu.n; racer++) {
        sCarSlots[racer].v[0] = func_80149F40(sCarSlots[racer].v[0], 0, (&D_8021E231[racer].t[D_8021E22F[racer].p[0].sel])[0]);
        sCarSlots[racer].v[1] = func_80149F40(sCarSlots[racer].v[0], 1, (&D_8021E231[racer].t[D_8021E22F[racer].p[1].sel])[34]);
        sCarSlots[racer].v[3] = func_80149F40(sCarSlots[racer].v[0], 2, (&D_8021E231[racer].t[D_8021E22F[racer].p[2].sel])[68]);
        sCarSlots[racer].v[5] = func_80149F40(sCarSlots[racer].v[0], 3, (&D_8021E231[racer].t[D_8021E22F[racer].p[3].sel])[102]);
        sCarSlots[racer].v[2] = func_80149F40(sCarSlots[racer].v[0], 4, (&D_8021E231[racer].t[D_8021E22F[racer].p[4].sel])[136]);
        sCarSlots[racer].v[4] = func_80149F40(sCarSlots[racer].v[0], 5, (&D_8021E231[racer].t[D_8021E22F[racer].p[5].sel])[170]);
        sCarSlots[racer].v[6] = func_80149F40(sCarSlots[racer].v[0], 6, (&D_8021E231[racer].t[D_8021E22F[racer].p[6].sel])[204]);
        sCarSlots[racer].v[7] = func_80149F40(sCarSlots[racer].v[0], 7, (&D_8021E231[racer].t[D_8021E22F[racer].p[7].sel])[238]);
        for (slotIndex = 0; slotIndex < 4; slotIndex++) {
            for (rowIndex = 0; rowIndex < 14; rowIndex++) {
                sCarSlots[slotIndex].f16A[rowIndex] = D_8021F048[slotIndex][rowIndex];
            }
            func_80211F14(slotIndex);
        }
    }
}
