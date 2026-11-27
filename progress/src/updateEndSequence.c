typedef struct { u8 pad0[0xD]; u8 fD; u8 padE[0x30]; u16 f3E; u8 pad40[0x20]; u8 *f60; } Rec;
extern Rec D_8011F2F0[];
extern u16 D_8018BC3C;
extern s16 menuConfirmed;
typedef struct { u8 v; } Count;
extern Count D_80190CA4;
typedef struct { u16 v; } Id;
extern Id D_80190C98[];
extern u8 D_80190CB0;
extern u8 D_8006FB38[];
extern s32 btnPlayPressed;
extern u8 D_8021B01A;
extern s32 D_8021AFDC;
extern s16 gameState;
extern s32 D_80168BB0;
void alSeqpStop(void *);
void func_801D65BC(s32);
void func_80028100(s32, s32);
void setScreenTransition(s32, s32, s32, s32, s32);
void func_8021AF20(u16);
void initModelTransforms(void);
void initObjList(void);
void createNoticeScreenObj(void);
void func_801CF468(u16, s32, s32, s32);

/* State machine for the end-of-race sequence: stops the music, runs the timed transition, marks the six result objects, then sets the game state to the results screen. */
void updateEndSequence(u16 id) {
    Rec *rec = &D_8011F2F0[id];
    s16 *timer = &menuConfirmed;
    s32 i;

    switch (rec->f3E) {
    case 0:
        alSeqpStop(D_8006FB38);
        rec->f3E = 1;
        break;
    case 1:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            func_801D65BC(8);
            *timer = 0xA8C;
            D_80190CA4.v = 0;
            rec->f3E = 0x10;
        }
        break;
    case 0x10:
        if (btnPlayPressed == 1) {
            D_80190CA4.v++;
            if (D_80190CA4.v >= 0xB) {
                *timer = 1;
            }
        }
        if (--*timer < 0) {
            func_80028100(0, 0x1E);
            setScreenTransition(2, 0x2D, 0, 0, 0);
            rec->f3E = 0x11;
        }
        break;
    case 0x11:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            for (i = 0; i < 6; i++) {
                D_8011F2F0[D_80190C98[i].v].fD = 2;
            }
            D_80190CB0 = 1;
            alSeqpStop(D_8006FB38);
            *timer = 4;
            rec->f3E = 0x12;
        }
        break;
    case 0x12:
        if (--*timer < 0) {
            func_8021AF20(id);
            *timer = 4;
            rec->f3E = 0x18;
        }
    case 0x18:
        if (--*timer < 0) {
            initModelTransforms();
            initObjList();
            createNoticeScreenObj();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021B01A = 0;
            D_8021AFDC = 0x2E;
            gameState = 8;
            D_80168BB0 = 0x30;
            rec->f3E = 0x32;
        }
        break;
    case 0x32:
        break;
    }
}
