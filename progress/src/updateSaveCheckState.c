typedef struct {
    u8 unk0;
    u8 pad1[0xC];
    u8 unkD;
    u8 padE[0x30];
    u16 unk3E;
    u8 pad40[0x24];
} Unk8011F2F0;

extern Unk8011F2F0 D_8011F2F0[];
extern s32 D_801E9D58;
extern u8 D_801F1890[];
extern u8 D_801E9010[];
extern u8 D_801E9015[];
extern u8 D_801F1895[];
extern u8 D_8021F028[];
extern s32 D_801E9734;
extern s32 D_801E9760;
extern u16 D_801E9B32;
extern u16 D_801E979C;

extern void func_80029790(void);
extern s32 func_80029938(void);
extern s32 func_800297E8(s32, u8 *, s32);
extern s32 func_80029890(s32, u8 *, s32);
extern void func_800297C8(void);
extern void func_801DD938();
extern s32 func_801E2FA4(void);
extern s32 func_801E3010(void);
extern void func_801E2EF4(void);
extern void func_801E2EC4(s32 *);
extern void func_800DF094(void);

/* Steps the save-data check: reads the save block, compares its header and reports a bad or unformatted save. */ void updateSaveCheckState(u16 objIndex) {
    s32 i;
    s32 mismatch;

    switch (D_8011F2F0[objIndex].unk3E) {
    case 0:
        func_80029790();
        D_8011F2F0[objIndex].unk3E = 1;
    case 1:
        switch (D_801E9D58 = func_80029938()) {
        case 1:
            if ((D_801E9D58 = func_800297E8(0x3F, D_801F1890, 8)) != 0) {
                D_8011F2F0[objIndex].unk3E = 9;
                break;
            }
            mismatch = 0;
            for (i = 0; i < 5; i++) {
                if (D_801F1890[i] != D_801E9010[i]) {
                    mismatch = 1;
                }
            }
            if (mismatch == 0) {
                D_801F1890[5] = D_8021F028[0];
                D_801F1890[6] = D_8021F028[1];
                D_801F1890[7] = D_8021F028[2];
                D_801E9015[0] = D_8021F028[0];
                D_801E9015[1] = D_8021F028[1];
                D_801E9015[2] = D_8021F028[2];
                if ((D_801E9D58 = func_80029890(0x3F, D_801F1890, 8)) != 0) {
                    D_8011F2F0[objIndex].unk3E = 9;
                    break;
                }
                if ((D_801E9D58 = func_800297E8(0x3F, D_801F1890, 8)) != 0) {
                    D_8011F2F0[objIndex].unk3E = 9;
                    break;
                }
                mismatch = 0;
                for (i = 0; i < 8; i++) {
                    if (D_801F1890[i] != D_801E9010[i]) {
                        mismatch = 1;
                    }
                }
                if (mismatch != 0) {
                    D_8011F2F0[objIndex].unk3E = 9;
                    break;
                }
                D_8011F2F0[objIndex].unk3E = 10;
            } else {
                D_8011F2F0[objIndex].unk3E = 7;
            }
            break;
        case -1:
        case 0:
        case 2:
            D_8011F2F0[objIndex].unk3E = 9;
            break;
        }
        break;
    case 7:
        func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 20, 0, 0x65);
        D_8011F2F0[objIndex].unk3E = 10;
        break;
    case 9:
        func_801DD938(0x10, 0x4C, 0xA, 2, 200, 180, 18, 20, 0, 0x66);
        D_8011F2F0[objIndex].unk3E = 10;
        break;
    case 10:
        func_800297C8();
        D_8011F2F0[objIndex].unkD = 2;
        D_8011F2F0[D_801E9B32].unkD = 2;
        D_8011F2F0[D_801E979C].unkD = 2;
        func_800DF094();
        break;
    }
}
