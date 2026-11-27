typedef struct {
    u8 f0;
    u8 pad1;
    u16 flags;
    u8 pad4[8];
    u8 alpha;
    u8 fd;
    u8 pade[2];
    u16 next;
    u8 pad12[0x2C];
    u16 state;
    u8 pad40[4];
    f32 x44;
    f32 x48;
    f32 x4c;
    u8 pad50[0x10];
    u8 *p;
} Obj;
typedef struct { u32 v; u8 pad[0x6C]; } Row70;
typedef struct { u8 v; u8 pad[0x8EF]; } RowByte;
typedef struct { s16 v; u8 pad[0x8EE]; } RowHalf;
typedef struct { u16 v; u8 pad[0x8EE]; } RowUHalf;
typedef struct { s16 v; u8 pad[0x36]; } Elem;
typedef struct { Elem e[4]; u8 pad[0x8F0 - 0xE0]; } RowElem;
typedef struct { s16 v; u8 pad[0x2A]; } Row2C;
typedef struct { u16 v; u16 pad; } Pair;

extern Obj D_8011F2F0[];
#define OBJ D_8011F2F0
#define STATE OBJ[arg0 & 0xFFFF].state
extern u16 objListHead;
extern u16 D_8018BC3C;
extern s8 D_80189DC1;
extern u8 D_80183BD0;
extern u8 D_80183BD6;
extern f32 D_80187CEC;
extern f32 D_80189C78;
extern u16 D_8018A26C;
extern s32 D_80189C80;
extern u8 D_80189CC8;
extern u8 D_80189C7C;
extern u16 D_8006FB10;
extern u8 D_8006FB18;
extern s16 D_800DD2C0;
extern u8 D_8018A148[];
extern s8 D_80046832;
extern Row70 btnModePressed[];
extern Row70 D_801E9988[];
extern Row70 D_801E998C[];
extern Row70 btnPlayPressed[];
extern RowByte D_8022AFE9[];
extern RowHalf D_8022AD04[];
extern RowUHalf slotObjIds[];
extern RowElem D_8022AD64[];
extern s32 D_80189950[];
extern Row2C D_801D7E06[];
extern s16 D_801D7F0E;
extern Pair D_80189952[];
extern u16 D_8018996A;
extern u8 D_8021F028;
extern u8 D_8006FB38[];
extern s32 D_80168BB0;
extern s16 gameState;
extern f64 D_80183910;
extern f64 D_80183918;

u8 func_80148230(void);
void playStageSound(s32, s16);
void alSeqpSetVol(u8 *, s16);
void func_801CF468(s32, s32, s32, s32);
void func_802319E8(void);
void createNoticeScreenObj(void);
void func_8021F5F0(void);
void func_801D63F4(void);
void func_801D65BC(s32);
void func_80143D70(void);
f32 __sinf(f32);

void func_80159230(s32 arg0)
{
    s32 i;
    s32 j;
    u16 id;

    switch (STATE) {
    case 0:
        D_80189DC1 = 0;
        D_80183BD0 = 0;
        D_80187CEC = 0.0f;
        D_80189C78 = 0.0f;
        D_8018A26C = 0;
        D_80189C80 = 0x3C;
        D_80189CC8 = func_80148230();
        if (D_8006FB10 == 0) {
            D_80189CC8 = 3;
        }
        if (D_80189CC8 == 0 || (D_80189CC8 == 3 && D_800DD2C0 == 1)) {
            D_80189C7C = 0;
        } else {
            D_80189C7C = 1;
        }
        D_80183BD6 = 0;
        for (i = 0; i < 4; i++) {
            D_8018A148[i] = 0xFF;
        }
        D_80046832 = 0;
        STATE = 1;
        break;
    case 1:
        if (D_8006FB18 == 1) {
            if (D_80189C80 != 0) {
                D_80189C80--;
            }
            if (D_8006FB18 == 1 && D_80189C80 == 0) {
                D_80183BD6 = 0xFF;
                for (i = 0; i < D_800DD2C0; i++) {
                    if (btnModePressed[i].v == 1 && D_8022AFE9[i].v == 0) {
                        D_80183BD6 = i;
                        break;
                    }
                }
                if (D_80183BD6 != 0xFF) {
                    for (i = 0; i < 7; i++) {
                        D_80189950[i] = D_801D7E06[i].v;
                    }
                    D_8018A26C = 0;
                    playStageSound(7, 0x41);
                    if (D_8021F028 != 0) {
                        alSeqpSetVol(D_8006FB38, D_8021F028 * 0x1F4);
                    }
                    for (id = objListHead; id != 0xFFFF; id = OBJ[id].next) {
                        if (OBJ[id].f0 != 0xFF) {
                            OBJ[id].flags |= 0x10;
                        }
                    }
                    OBJ[arg0 & 0xFFFF].flags &= 0xFFEF;
                    OBJ[D_8018BC3C].flags &= 0xFFEF;
                    OBJ[D_8018BC3C].p[0] = 2;
                    *(s16 *) (OBJ[D_8018BC3C].p + 2) = 0x2D;
                    func_801CF468(D_8018BC3C, 0, 0, 0);
                    D_80183BD0 = 0;
                    D_80046832 = 1;
                    STATE = 0xA;
                }
            }
        }
        break;
    case 2:
        if (btnPlayPressed[D_80183BD6].v == 1) {
            playStageSound(7, 0x3D);
            switch (D_80183BD0) {
            case 1:
                D_80046832 = 0;
                OBJ[arg0 & 0xFFFF].x44 = 5.0f;
                OBJ[arg0 & 0xFFFF].x48 = 0.0f;
                OBJ[arg0 & 0xFFFF].x4c = 4.0f;
                STATE = 6;
                break;
            case 2:
                D_80046832 = 0;
                OBJ[arg0 & 0xFFFF].x44 = 4.0f;
                OBJ[arg0 & 0xFFFF].x48 = 0.0f;
                OBJ[arg0 & 0xFFFF].x4c = 4.0f;
                STATE = 6;
                break;
            case 3:
                if (D_8022AD04[D_80183BD6].v < 0) {
                    D_8022AD04[D_80183BD6].v = 0;
                }
                D_8022AD04[D_80183BD6].v += 4;
                D_8022AFE9[D_80183BD6].v = 5;
            case 0:
                OBJ[D_8018BC3C].p[0] = 3;
                D_80189DC1 = 0;
                D_8018A26C = 0;
                STATE = 0xB;
                break;
            }
        } else if (btnModePressed[D_80183BD6].v == 1) {
            OBJ[D_8018BC3C].p[0] = 3;
            D_80189DC1 = 0;
            D_8018A26C = 0;
            STATE = 0xB;
            playStageSound(7, 0x41);
        } else {
            if (D_801E9988[D_80183BD6].v == 1 && D_80183BD0 != 0) {
                D_80183BD0--;
                playStageSound(7, 0x3B);
            }
            if (D_801E998C[D_80183BD6].v == 1 && D_80183BD0 < D_80189C7C + 2) {
                D_80183BD0++;
                playStageSound(7, 0x3B);
            }
        }
        break;
    case 4:
        func_802319E8();
        createNoticeScreenObj();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        func_8021F5F0();
        for (i = 0; i < 4; i++) {
            if (slotObjIds[i].v != 0xFFFF && i < 4) {
                for (j = 0; j < 4; j++) {
                    D_8022AD64[i].e[j].v = -1;
                }
            }
        }
        func_801D63F4();
        func_801D65BC(0);
        func_80143D70();
        D_80168BB0 = 2;
        gameState = 8;
        break;
    case 5:
        func_802319E8();
        createNoticeScreenObj();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        func_8021F5F0();
        gameState = 0x14;
        break;
    case 6:
        if (OBJ[arg0 & 0xFFFF].alpha != 0) {
            OBJ[arg0 & 0xFFFF].alpha -= 5;
            for (i = 0; i < 4; i++) {
                if (D_8018A148[i] > OBJ[arg0 & 0xFFFF].alpha) {
                    D_8018A148[i] -= 5;
                }
            }
        } else {
            OBJ[D_8018BC3C].p[0] = 4;
            STATE = 0x1E;
        }
        break;
    case 10:
        if (OBJ[D_8018BC3C].p[9] >= 0x97) {
            OBJ[D_8018BC3C].p[0] = 0;
            D_80189DC1 = 1;
            STATE = 2;
        }
        id = *(u16 *) (OBJ[D_8018BC3C].p + 4);
        switch (D_800DD2C0) {
        case 1:
            if (!(id & 3)) {
                if (D_8018A26C < 2) {
                    D_801D7E06[D_8018A26C].v = 0;
                } else if (D_8018A26C == 2) {
                    D_801D7F0E = 0;
                }
                D_8018A26C++;
            }
            break;
        case 3:
            if (!(id & 3)) {
                if (D_8018A26C < 3) {
                    D_801D7E06[D_8018A26C].v = 0;
                }
                D_8018A26C++;
            }
            break;
        case 2:
        case 4:
            if (!(id & 3)) {
                if (D_8018A26C < 4) {
                    D_801D7E06[D_8018A26C].v = 0;
                }
                D_8018A26C++;
            }
            break;
        }
        break;
    case 11:
        if (OBJ[D_8018BC3C].p[0] == 0) {
            D_80046832 = 0;
            for (id = objListHead; id != 0xFFFF; id = OBJ[id].next) {
                OBJ[id].flags &= 0xFFEF;
            }
            if (D_8021F028 != 0) {
                alSeqpSetVol(D_8006FB38, D_8021F028 * 0x3CF);
            }
            STATE = 1;
        }
        id = OBJ[D_8018BC3C].p[9];
        switch (D_800DD2C0) {
        case 1:
            if (!(id & 3)) {
                if (D_8018A26C < 2) {
                    D_801D7E06[D_8018A26C].v = D_80189952[D_8018A26C].v;
                } else if (D_8018A26C == 2) {
                    D_801D7F0E = D_8018996A;
                }
                D_8018A26C++;
            }
            break;
        case 3:
            if (!(id & 3)) {
                if (D_8018A26C < 3) {
                    D_801D7E06[D_8018A26C].v = D_80189952[D_8018A26C].v;
                }
                D_8018A26C++;
            }
            break;
        case 2:
        case 4:
            if (!(id & 3)) {
                if (D_8018A26C < 4) {
                    D_801D7E06[D_8018A26C].v = D_80189952[D_8018A26C].v;
                }
                D_8018A26C++;
            }
            break;
        }
        break;
    case 20:
        OBJ[arg0 & 0xFFFF].x48++;
        if ((u16) OBJ[arg0 & 0xFFFF].x48 > (u16) OBJ[arg0 & 0xFFFF].x4c) {
            STATE = OBJ[arg0 & 0xFFFF].x44;
        }
        break;
    case 30:
        if (OBJ[D_8018BC3C].p[0] == 0) {
            for (id = objListHead; id != 0xFFFF; id = OBJ[id].next) {
                OBJ[id].fd = 4;
            }
            OBJ[arg0 & 0xFFFF].fd = 0;
            OBJ[arg0 & 0xFFFF].flags |= 0x20;
            OBJ[D_8018BC3C].fd = 0;
            STATE = 0x14;
        }
        break;
    }
    if (STATE != 4 && STATE != 5 && STATE != 6 && STATE != 0x14 && STATE != 0x1E) {
        for (i = 0; i < 4; i++) {
            if (D_80183BD0 == i) {
                if (D_8018A148[i] < 0xFF) {
                    D_8018A148[i] += 0xF;
                }
            } else if (D_8018A148[i] >= 0x6A) {
                D_8018A148[i] -= 0xF;
            }
        }
    }
    D_80187CEC += 4.0f;
    if (D_80187CEC > 180.0f) {
        D_80187CEC -= 180.0f;
    }
    D_80189C78 = __sinf((f32) ((f64) D_80187CEC * D_80183910 / D_80183918)) * 20.0f;
}
