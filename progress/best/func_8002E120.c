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

s32 func_8002E120(Voice *arg0, s32 arg1, s32 arg2) {
    s16 sp18;
    u16 sp1A;
    Note *note;
    Note *next;
    Note *cur;
    s32 res;
    s32 delta;
    s32 old;
    s32 rem;
    s16 *tbl;

    res = arg2;
    rem = 0xB8;
    sp1A = 0;
    sp18 = 0;
    while (arg0->p7C != NULL) {
        tbl = (s16 *) D_80046F90;
        old = arg1;
        arg1 = ((arg0->p7C->time + 0x5C) / 184) * 0xB8;
        delta = arg1 - old;
        if (rem < delta) {
            break;
        }
        if (delta < 0) {
            func_800346B0(D_8004A3E0, D_8004A3E4, 0x83);
        }
        if (delta >= 0xB9) {
            func_800346B0(D_8004A3E0, D_8004A3E4, 0x87);
        }
        switch (arg0->p7C->type) {
        case 13:
            note = arg0->p7C;
            if (note->unkA != 0) {
                arg0->i48 = 1;
            }
            n_alLoadParam(arg0, 5, note->i18);
            arg0->i84 = 1;
            arg0->i78 = 1;
            arg0->i70 = 0;
            arg0->i74 = ((note->i14 + 0x5C) / 184) * 0xB8;
            arg0->s5A = (s16) ((note->f10 * note->f10) >> 15);
            arg0->s58 = (s16) note->u12;
            arg0->u60 = ((u16 *) tbl)[note->u13];
            arg0->u62 = ((u16 *) tbl)[0x7F - note->u13];
            if (note->i14 != 0) {
                arg0->s5C = 1;
                arg0->s5E = 1;
            } else {
                arg0->s5C = (s16) ((arg0->s5A * tbl[arg0->s58]) >> 15);
                arg0->s5E = (s16) ((arg0->s5A * tbl[0x7F - arg0->s58]) >> 15);
            }
            arg0->f44 = *(f32 *) &note->valC;
            break;
        case 11:
        case 12:
        case 16:
            res = func_8002E784(arg0, &sp18, &sp1A, delta, res);
            if ((arg0->i70 >= arg0->i74) || (delta == 0)) {
                arg0->u68 = (u16) ((arg0->s5A * tbl[arg0->s58]) >> 15);
                arg0->u6E = (u16) ((arg0->s5A * tbl[0x7F - arg0->s58]) >> 15);
                arg0->i70 = arg0->i74;
                arg0->s5C = arg0->u68;
                arg0->s5E = arg0->u6E;
            } else {
                arg0->s5C = (s16) func_8002EAE4(arg0->s5C, arg0->i70, arg0->s66, arg0->u64);
                arg0->s5E = (s16) func_8002EAE4(arg0->s5E, arg0->i70, arg0->s6C, arg0->u6A);
            }
            if (arg0->s5C == 0) {
                arg0->s5C = 1;
            }
            if (arg0->s5E == 0) {
                arg0->s5E = 1;
            }
            if (arg0->p7C->type == 0xC) {
                arg0->s58 = (s16) arg0->p7C->valC;
            }
            if (arg0->p7C->type == 0xB) {
                arg0->i70 = 0;
                arg0->s5A = (s16) ((arg0->p7C->valC * arg0->p7C->valC) >> 15);
                arg0->i74 = ((*(s32 *) ((u8 *) arg0->p7C + 0x10) + 0x5C) / 184) * 0xB8;
            }
            if (arg0->p7C->type == 0x10) {
                arg0->u60 = ((u16 *) tbl)[arg0->p7C->valC];
                arg0->u62 = ((u16 *) tbl)[0x7F - arg0->p7C->valC];
            }
            arg0->i78 = 1;
            break;
        case 14:
            note = arg0->p7C;
            if (note->unkA != 0) {
                arg0->i48 = 1;
            }
            n_alLoadParam(arg0, 5, note->valC);
            arg0->i84 = 1;
            break;
        case 15:
            res = func_8002E784(arg0, &sp18, &sp1A, delta, res);
            func_8002E6E4(arg0, 4, 0);
            break;
        case 0:
            note = arg0->p7C;
            *(s32 *) ((u8 *) note->valC + 0x88) = 0;
            _n_freePVoice(note->valC);
            break;
        case 7:
            res = func_8002E784(arg0, &sp18, &sp1A, delta, res);
            arg0->f44 = *(f32 *) &arg0->p7C->valC;
            break;
        case 8:
            res = func_8002E784(arg0, &sp18, &sp1A, delta, res);
            arg0->i48 = 1;
            break;
        case 5:
            res = func_8002E784(arg0, &sp18, &sp1A, delta, res);
            n_alLoadParam(arg0, 5, arg0->p7C->valC);
            break;
        default:
            res = func_8002E784(arg0, &sp18, &sp1A, delta, res);
            func_8002E6E4(arg0, arg0->p7C->type, arg0->p7C->valC);
            break;
        }
        cur = arg0->p7C;
        rem -= delta;
        sp1A += delta * 2;
        next = cur->next;
        arg0->p7C = next;
        if (next == NULL) {
            arg0->i80 = 0;
        }
        func_8002ABC8((s32 *) cur);
    }
    res = func_8002E784(arg0, &sp18, &sp1A, rem, res);
    if (arg0->i70 > arg0->i74) {
        arg0->i70 = arg0->i74;
    }
    return res;
}
