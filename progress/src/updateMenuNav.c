typedef struct { u8 count; u8 pad1[0x3D]; u16 state; u8 pad[0x24]; } R;
extern R D_8011F2F0[];
extern u8 D_80189B36[];
extern u16 D_80189C98;
extern u8 D_80189C9A[];
extern u16 D_80189CC6[];
extern u8 menuRowList;
extern u8 D_8018A277[];
s32 getMenuNavMask(s32, s32, u8);
void playMenuSound(s32);

/* Updates menu navigation for one record: handles d-pad moves and the intro/selection timers, then plays the matching menu sound. */ void updateMenuNav(u16 recIndex)
{
    R *rec;
    u8 moved = 0;
    s32 navFlags = 0;
    s32 soundId;

    rec = &D_8011F2F0[recIndex];
    if (D_80189CC6[0] & 0x800) {
        navFlags = getMenuNavMask(0x14, 3, ((u8 *)D_80189CC6)[-8]);
        if (navFlags & 1) {
            if (((u8 *)D_80189CC6)[-0x2C] != 0) {
                moved = 1;
                ((u8 *)D_80189CC6)[-0x2C]--;
            }
        }
        if (navFlags & 2) {
            if (D_80189C9A[0] != menuRowList - 1) {
                moved = 1;
                D_80189C9A[0]++;
            }
        }
    } else {
        switch (rec->state) {
        case 0:
            rec->count++;
            if (rec->count >= 0x15) {
                rec->count = 0;
                rec->state = 1;
            }
            break;
        case 1:
            rec->count++;
            if (D_80189C9A[0] != D_80189C9A[2]) {
                if (!(rec->count & 0xF)) {
                    moved = 1;
                    D_80189C9A[0]++;
                }
            } else {
                rec->count = 0;
                rec->state = 2;
            }
            break;
        case 2:
            rec->count++;
            if (rec->count >= 0x1F) {
                navFlags |= 0x10;
            }
            break;
        }
    }
    if (moved) {
        playMenuSound(0x3B);
    }
    if (navFlags & 0x10) {
        soundId = 0x3E;
        if (!(D_8018A277[D_80189C9A[0]] & 0x10)) {
            soundId = 0x3D;
            D_80189B36[0] &= 0xEF;
            *(s16 *)(D_80189C9A - 2) = 0x30;
        }
        playMenuSound(soundId);
    }
}
