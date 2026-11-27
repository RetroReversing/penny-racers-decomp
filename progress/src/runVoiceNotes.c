typedef struct Note {
    struct Note *next;   /* 0x00 */
    s32 time;            /* 0x04 */
    s16 type;            /* 0x08 */
    s16 unkA;            /* 0x0A */
    s32 valC;            /* 0x0C */
    s16 f10;             /* 0x10 */
    u8 u12;              /* 0x12 */
    u8 u13;              /* 0x13 */
    s32 i14;             /* 0x14 */
    s32 i18;             /* 0x18 */
} Note;

typedef struct Voice {
    u8 pad0[0x44];
    f32 f44;             /* 0x44 */
    s32 i48;             /* 0x48 */
    u8 pad4C[0x0C];
    s16 s58;             /* 0x58 */
    s16 s5A;             /* 0x5A */
    s16 s5C;             /* 0x5C */
    s16 s5E;             /* 0x5E */
    u16 u60;             /* 0x60 */
    u16 u62;             /* 0x62 */
    u16 u64;             /* 0x64 */
    s16 s66;             /* 0x66 */
    u16 u68;             /* 0x68 */
    u16 u6A;             /* 0x6A */
    s16 s6C;             /* 0x6C */
    u16 u6E;             /* 0x6E */
    s32 i70;             /* 0x70 */
    s32 i74;             /* 0x74 */
    s32 i78;             /* 0x78 */
    Note *p7C;           /* 0x7C */
    s32 i80;             /* 0x80 */
    s32 i84;             /* 0x84 */
} Voice;

void func_8002ABC8(s32 *arg0);
void _n_freePVoice(s32 arg0);
void func_8002E6E4(void *arg0, s16 arg1, s32 arg2);
s32 func_8002E784(void *arg0, s16 *arg1, u16 *arg2, s32 arg3, s32 arg4);
s32 func_8002EAE4(s32 arg0, s32 arg1, s16 arg2, s32 arg3);
void n_alLoadParam(void *arg0, s32 arg1, s32 arg2);
void func_800346B0(char *arg0, char *arg1, s32 arg2);
extern u16 D_80046F90[];
extern char D_8004A3E0[];
extern char D_8004A3E4[];

/* Walks a voice's note list up to the time budget, applying each note event
 * and freeing notes as they finish. Returns the updated result. */
s32 runVoiceNotes(Voice *voice, s32 startPos, s32 resIn) {
    Voice *curVoice;
    s32 pos;
    s16 envStep;
    u16 envOffset;
    Note *note;
    Note *next;
    Note *cur;
    s32 result;
    s32 elapsed;
    s32 prevPos;
    s32 remaining;

    result = resIn;
    curVoice = voice;
    pos = startPos;
    remaining = 0xB8;
    envOffset = 0;
    envStep = 0;
    while (curVoice->p7C != NULL) {
        prevPos = pos;
        pos = ((curVoice->p7C->time + 0x5C) / 184) * 0xB8;
        elapsed = pos - prevPos;
        if (remaining < elapsed) {
            break;
        }
        if (elapsed < 0) {
            func_800346B0(D_8004A3E0, D_8004A3E4, 0x83);
        }
        if (elapsed >= 0xB9) {
            func_800346B0(D_8004A3E0, D_8004A3E4, 0x87);
        }
        switch (curVoice->p7C->type) {
        case 13: {
            Note *note = curVoice->p7C;
            if (note->unkA != 0) {
                curVoice->i48 = 1;
            }
            n_alLoadParam(curVoice, 5, note->i18);
            curVoice->i84 = 1;
            curVoice->i78 = 1;
            curVoice->i70 = 0;
            curVoice->i74 = ((note->i14 + 0x5C) / 184) * 0xB8;
            curVoice->s5A = (s16) ((note->f10 * note->f10) >> 15);
            curVoice->s58 = (s16) note->u12;
            curVoice->u60 = D_80046F90[note->u13];
            curVoice->u62 = D_80046F90[0x7F - note->u13];
            if (note->i14 != 0) {
                curVoice->s5C = 1;
                curVoice->s5E = 1;
            } else {
                curVoice->s5C = (s16) ((curVoice->s5A * ((s16 *) D_80046F90)[curVoice->s58]) >> 15);
                curVoice->s5E = (s16) ((curVoice->s5A * ((s16 *) D_80046F90)[0x7F - curVoice->s58]) >> 15);
            }
            curVoice->f44 = *(f32 *) &note->valC;
            break;
        }
        case 11:
        case 12:
        case 16:
            result = func_8002E784(curVoice, &envStep, &envOffset, elapsed, result);
            if ((curVoice->i70 >= curVoice->i74) || (elapsed == 0)) {
                curVoice->u68 = (u16) ((curVoice->s5A * ((s16 *) D_80046F90)[curVoice->s58]) >> 15);
                curVoice->u6E = (u16) ((curVoice->s5A * ((s16 *) D_80046F90)[0x7F - curVoice->s58]) >> 15);
                curVoice->i70 = curVoice->i74;
                curVoice->s5C = curVoice->u68;
                curVoice->s5E = curVoice->u6E;
            } else {
                curVoice->s5C = (s16) func_8002EAE4(curVoice->s5C, curVoice->i70, curVoice->s66, curVoice->u64);
                curVoice->s5E = (s16) func_8002EAE4(curVoice->s5E, curVoice->i70, curVoice->s6C, curVoice->u6A);
            }
            if (curVoice->s5C == 0) {
                curVoice->s5C = 1;
            }
            if (curVoice->s5E == 0) {
                curVoice->s5E = 1;
            }
            if (curVoice->p7C->type == 0xC) {
                curVoice->s58 = (s16) curVoice->p7C->valC;
            }
            if (curVoice->p7C->type == 0xB) {
                curVoice->i70 = 0;
                curVoice->s5A = (s16) ((curVoice->p7C->valC * curVoice->p7C->valC) >> 15);
                curVoice->i74 = ((*(s32 *) ((u8 *) curVoice->p7C + 0x10) + 0x5C) / 184) * 0xB8;
            }
            if (curVoice->p7C->type == 0x10) {
                curVoice->u60 = D_80046F90[curVoice->p7C->valC];
                curVoice->u62 = D_80046F90[0x7F - curVoice->p7C->valC];
            }
            curVoice->i78 = 1;
            break;
        case 14: {
            Note *note = curVoice->p7C;
            if (note->unkA != 0) {
                curVoice->i48 = 1;
            }
            n_alLoadParam(curVoice, 5, note->valC);
            curVoice->i84 = 1;
            break;
        }
        case 15:
            result = func_8002E784(curVoice, &envStep, &envOffset, elapsed, result);
            func_8002E6E4(curVoice, 4, 0);
            break;
        case 0: {
            Note *note = curVoice->p7C;
            *(s32 *) ((u8 *) note->valC + 0x88) = 0;
            _n_freePVoice(note->valC);
            break;
        }
        case 7:
            result = func_8002E784(curVoice, &envStep, &envOffset, elapsed, result);
            curVoice->f44 = *(f32 *) &curVoice->p7C->valC;
            break;
        case 8:
            result = func_8002E784(curVoice, &envStep, &envOffset, elapsed, result);
            curVoice->i48 = 1;
            break;
        case 5:
            result = func_8002E784(curVoice, &envStep, &envOffset, elapsed, result);
            n_alLoadParam(curVoice, 5, curVoice->p7C->valC);
            break;
        default:
            result = func_8002E784(curVoice, &envStep, &envOffset, elapsed, result);
            func_8002E6E4(curVoice, curVoice->p7C->type, curVoice->p7C->valC);
            break;
        }
        cur = curVoice->p7C;
        remaining -= elapsed;
        envOffset += elapsed * 2;
        next = cur->next;
        curVoice->p7C = next;
        if (next == NULL) {
            curVoice->i80 = 0;
        }
        func_8002ABC8((s32 *) cur);
    }
    result = func_8002E784(curVoice, &envStep, &envOffset, remaining, result);
    if (curVoice->i70 > curVoice->i74) {
        curVoice->i70 = curVoice->i74;
    }
    return result;
}
