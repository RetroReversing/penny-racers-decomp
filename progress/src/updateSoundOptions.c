typedef struct { u8 pad0[0x3E]; u16 f3E; u8 pad40[0x20]; u8 *f60; } Rec;
typedef struct { u8 row; u8 pad1; u8 col; u8 pad3; u8 f4; } State;
typedef struct { u8 vol[2]; u8 stereo; } Opt;
extern Rec D_8011F2F0[];
extern State D_80190C98;
extern Opt D_8021F028;
extern u16 D_8018BC3C;
extern u8 D_8006FB38[];
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern s32 D_80168BB0;
s32 getMenuNavMask(s32, s32, s32);
void playMenuSound(s32);
void alSeqpSetVol(void *, s16);
void func_801D65BC(s32);
void setScreenTransition(s32, s32, s32, s32, s32);
void func_801E1EEC(s32, s32);
void initModelTransforms(void);
void initObjList(void);
void createNoticeScreenObj(void);
void func_801CF468(u16, s32, s32, s32);

/* Sound options screen: moves the cursor, changes the music and effects volume
 * (0..21, applied to the sequencer as vol * 1086) and the stereo setting. Press
 * on the last row to leave; the screen then goes to the next state. */
void updateSoundOptions(u16 id) {
    Rec *rec = &D_8011F2F0[id];
    s32 keys;

    switch (rec->f3E) {
    case 0:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            D_80190C98.f4 = 0;
            rec->f3E = 0x10;
        }
        break;
    case 0x10:
        keys = getMenuNavMask(0x1E, 3, 0);
        D_80190C98.col = D_8021F028.vol[0];
        if (keys & 1) {
            if (D_80190C98.row != 0) {
                D_80190C98.row--;
                playMenuSound(0x3B);
            }
        }
        if (keys & 2) {
            if (D_80190C98.row != 3) {
                D_80190C98.row++;
                playMenuSound(0x3B);
            }
        }
        if (D_80190C98.row < 2) {
            if (keys & 8) {
                if (D_8021F028.vol[D_80190C98.row] != 0x15) {
                    D_8021F028.vol[D_80190C98.row]++;
                    playMenuSound(0x3B);
                    if (D_80190C98.row == 0) {
                        alSeqpSetVol(D_8006FB38, D_8021F028.vol[0] * 1086);
                    }
                }
            }
            if (keys & 4) {
                if (D_8021F028.vol[D_80190C98.row] != 0) {
                    D_8021F028.vol[D_80190C98.row]--;
                    playMenuSound(0x3B);
                    if (D_80190C98.row == 0) {
                        alSeqpSetVol(D_8006FB38, D_8021F028.vol[0] * 1086);
                    }
                }
            }
        }
        if (D_80190C98.col == 0) {
            if (D_8021F028.vol[0] != 0) {
                func_801D65BC(0);
            }
        }
        if (D_80190C98.row == 2) {
            if (keys & 4) {
                if (D_8021F028.stereo != 0) {
                    D_8021F028.stereo = 0;
                    playMenuSound(0x3B);
                }
            }
            if (keys & 8) {
                if (D_8021F028.stereo != 1) {
                    D_8021F028.stereo = 1;
                    playMenuSound(0x3B);
                }
            }
        }
        if (keys & 0x10) {
            if (D_80190C98.row < 3) {
                keys = 0;
                playMenuSound(0x3D);
                D_80190C98.row = 3;
            }
        }
        if (keys & 0x10) {
            if (D_80190C98.row == 3) {
                playMenuSound(0x3D);
                setScreenTransition(2, 6, 0, 0, 0);
                func_801E1EEC(9, 0);
                rec->f3E = 0x20;
            }
        }
        if (keys & 0x20) {
            playMenuSound(0x3D);
            setScreenTransition(2, 6, 0, 0, 0);
            func_801E1EEC(9, 0);
            rec->f3E = 0x20;
        }
        break;
    case 0x20:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            initModelTransforms();
            initObjList();
            createNoticeScreenObj();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021AFDC = 0x26;
            D_80168BB0 = D_8021AFE0;
        }
        break;
    }
}
