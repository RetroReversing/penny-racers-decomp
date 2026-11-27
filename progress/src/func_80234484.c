typedef struct { u8 pad0[0x3E]; u16 st; u8 pad40[0x24]; } Car;
typedef struct { s16 f0; s16 f2; f32 f4; u16 f8; u8 fA; } Rank;
typedef struct {
    u8 pad0[2]; u16 f2; u8 pad4[0x594 - 4]; s16 f594; s8 f596; u8 f597; f32 f598; u8 pad59C[0x879 - 0x59C]; u8 f879; u8 pad87A[0x8F0 - 0x87A];
} Pane;
typedef struct { u8 unk0; u8 unk1; } MenuState;
extern Car D_8011F2F0[];
extern Pane sCars[];
extern u8 D_8006FAF0[];
extern u8 D_8021E1A7;
extern u16 lapSegment[];
extern u16 D_8023761E[];
extern u8 D_8023761C;
extern u16 D_80237630[];
extern Rank D_80237640[];
extern u8 D_80237694[];
extern u8 D_80189CC8;
extern MenuState *trackInfo;
extern u8 D_80167E62;
extern u8 D_80236F30[];
extern u8 D_80236F50;
extern u8 D_80236F51;
extern u8 sRowBoard[];
void func_80235074(u16, u16);
void updateRaceRecords(void);
u8 func_801E435C(u8, u8);
void debugPrintf();
void func_801E43A0(u8, u8, u8);
void func_80029790(void);
s32 func_801E2F38(u8);
void func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_800297C8(void);

#define MODE (*(s16 *)&sRowBoard[0x2108])
#define PANE(r) sCars[(r)->f8]
#define PLACE(r, total) \
    D_80237694[r->f8] = 1; \
    r->fA = 1; \
    if (PANE(r).f879 == 5) { \
        D_80236F51 = total - D_80167E62; \
        D_80167E62++; \
    } else { \
        D_80236F51 = ++D_8023761C; \
    } \
    D_80237630[D_80236F51] = r->f8

void func_80234484(u16 arg0)
{
    u8 player;
    u8 course;
    u32 limit;
    s16 count;
    s16 i;
    s16 j;
    s16 a;
    s16 b;
    s16 c;
    s16 d;
    s16 m;
    Rank *r;

    player = D_8006FAF0[0x21];
    player--;
    course = D_8021E1A7;
    if (D_8011F2F0[arg0].st == 0) {
        for (i = 0; i < 7; i++) {
            D_8023761E[i] = 0;
        }
        D_8011F2F0[arg0].st = 1;
    }
    count = 0;
    for (i = 0; i < 7; i++) {
        if (sCars[i].f2 != 0xFFFF & i < 6) {
            r = &D_80237640[count];
            r->f0 = sCars[i].f594;
            r->f2 = sCars[i].f597;
            r->f4 = sCars[i].f598;
            r->f8 = i;
            r->fA = D_80237694[i];
            count++;
        }
    }
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (D_80237640[i].f0 < D_80237640[j].f0) {
                func_80235074(i, j);
            }
        }
    }
    for (a = 0, b = 0; a < count; a = b) {
        while (D_80237640[a].f0 == D_80237640[b].f0 & b < count) {
            b++;
        }
        for (i = a; i < b - 1; i++) {
            for (j = i + 1; j < b; j++) {
                if (D_80237640[i].f2 < D_80237640[j].f2) {
                    func_80235074(i, j);
                }
            }
        }
        for (c = a, d = a; c < b; c = d) {
            while (D_80237640[c].f2 == D_80237640[d].f2 & d < b) {
                d++;
            }
            for (m = c; m < d - 1; m++) {
                for (j = m + 1; j < d; j++) {
                    if (D_80237640[m].f4 > D_80237640[j].f4) {
                        func_80235074(m, j);
                    }
                }
            }
        }
    }
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (D_80237640[i].fA < D_80237640[j].fA) {
                func_80235074(i, j);
            }
        }
    }
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (sCars[D_80237640[i].f8].f879 == 5) {
                func_80235074(i, j);
            }
        }
    }
    j = 0;
    for (i = 0; i < count; i++, j++) {
        r = &D_80237640[i];
        if (r->fA == 0) {
            sCars[r->f8].f596 = j + 1;
        }
    }
    for (i = 0; i < 7; i++) {
        D_8023761E[i] = lapSegment[i];
    }
    for (i = count - 1; i >= 0; i--) {
        r = &D_80237640[i];
        if (PANE(r).f594 >= 4 || (D_80189CC8 == 3 && trackInfo->unk1 == 6 && PANE(r).f594 >= 2)) {
            if (r->fA == 0) {
                PLACE(r, count);
                if ((PANE(r).f879 == 0) | (PANE(r).f879 == 5)) {
                    D_80236F50++;
                }
                if (MODE == D_80236F50) {
                    if (D_80189CC8 == 0 || (D_80189CC8 == 2 && MODE == 1)) {
                        if (PANE(r).f879 != 5) {
                            updateRaceRecords();
                        }
                    }
                    if (MODE == 1 && D_80189CC8 == 2 && PANE(r).f879 == 0) {
                        limit = func_801E435C(player, course);
                        if (D_80236F51 < limit) {
                            debugPrintf(D_80236F30, limit, D_80236F51);
                            func_801E43A0(player, course, D_80236F51);
                            func_80029790();
                            if (func_801E2F38(player)) {
                                func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x16, 0, 0x66);
                            }
                            func_800297C8();
                        }
                    }
                    if (count >= 7) {
                        count = 6;
                    }
                    for (j = count - 1; j >= 0; j--) {
                        r = &D_80237640[j];
                        if (r->fA == 0) {
                            PLACE(r, count);
                        }
                    }
                }
            }
        }
    }
}
