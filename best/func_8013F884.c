typedef struct {
    u8 pad0[2];
    u16 id;
    u8 pad1[0x55C];
    u16 flags;
    u8 pad2[0x32];
    s16 unk594;
    u8 pad3[0x2E3];
    u8 state;
    u8 pad4[0x76];
} Car;

typedef struct {
    u8 pad0[0x3E];
    u16 state;
    u8 pad1[0x24];
} Racer;

extern Car D_8022A770[];
extern Racer D_8011F2F0[];
extern u8 D_8011F2FD[];
extern s32 D_80189900[];
extern s16 D_800DD2C0;
extern u16 D_8006FB10;
extern s32 D_80183BD8;
extern s32 D_80189920;
extern s32 D_80189C8C;
extern s32 D_80189C90;
extern s32 D_8018A244;
extern u8 D_8022AFE9;
extern u8 D_8006FB38[];

void func_8022FDF0();
void func_801D65BC();
void alSeqpStop();

void func_8013F884(s16 arg0)
{
    s32 i;
    Racer *p;
    u16 *snd;
    Car *car;
    s16 *cnt;
    s32 *tbl;

    p = &D_8011F2F0[arg0 & 0xFFFF];

    switch (p->state) {
    case 0:
        snd = &D_8006FB10;
        func_8022FDF0(*snd, 0);
        D_80189C8C = *snd;
        p->state = 1;
        {
            u8 *src = &D_8022AFE9;

            tbl = D_80189900;
            for (i = 0; i < 7; i++) {
                tbl[i] = *src;
            }
        }
        goto clear;
    case 1:
        D_8018A244 = 0;
        D_80189920 = 0;
        D_80183BD8 = 0;
        cnt = &D_800DD2C0;
        tbl = D_80189900;
        for (i = 0; i < 7; i++) {
            car = &D_8022A770[i];
            if (car->id == 0xFFFF) {
                continue;
            }
            if (car->unk594 >= 3 && car->state == 0) {
                D_8018A244++;
            }
            if ((car->flags & 0x20) && car->state == 0) {
                D_80189920 = 1;
            }
            if (car->state == 5) {
                if (tbl[i] == 0) {
                    D_80189C90 = 0x200;
                }
                if (++D_80183BD8 == *cnt) {
                    D_8011F2FD[(arg0 & 0xFFFF) * 0x64] = 2;
                    return;
                }
            }
        }
        if (D_80189920) {
            if (D_80189C8C != 0xC8) {
                func_801D65BC(0xE, 0, cnt, 0x200);
                D_80189C8C = 0xC8;
                goto clear;
            }
            i = 0;
            goto tail;
        }
        if (D_8018A244) {
            snd = &D_8006FB10;
            func_8022FDF0(*snd, 1);
            D_80189C8C = *snd;
            p->state = 2;
            goto clear;
        }
        snd = &D_8006FB10;
        if (D_80189C8C != *snd) {
            i = 0;
            goto call;
        }
        if (D_80189C90 == 0) {
            i = 0;
            goto tail;
        }
        if (--D_80189C90 != 1) {
            i = 0;
            goto tail;
        }
        goto call;
    case 2:
        D_8018A244 = 0;
        D_80189920 = 0;
        D_80183BD8 = 0;
        cnt = &D_800DD2C0;
        tbl = D_80189900;
        for (i = 0; i < 7; i++) {
            car = &D_8022A770[i];
            if (car->id == 0xFFFF) {
                continue;
            }
            if (car->unk594 >= 4 && i < *cnt && car->state != 5) {
                D_8018A244++;
            }
            if ((car->flags & 0x20) && car->state == 0) {
                D_80189920 = 1;
            }
            if (car->state == 5) {
                if (tbl[i] == 0) {
                    D_80189C90 = 0x200;
                }
                if (++D_80183BD8 == *cnt) {
                    D_8011F2FD[(arg0 & 0xFFFF) * 0x64] = 2;
                    return;
                }
            }
        }
        if (D_80189920) {
            if (D_80189C8C != 0xC8) {
                func_801D65BC(0xE, 0, 5, cnt);
                D_80189C8C = 0xC8;
                goto clear;
            }
            i = 0;
            goto tail;
        }
        if (D_8018A244 == D_800DD2C0) {
            D_8011F2FD[(arg0 & 0xFFFF) * 0x64] = 2;
            return;
        }
        if (D_8018A244) {
            if (D_80189C8C != 0xFF) {
                alSeqpStop(D_8006FB38, 0);
                D_80189C8C = 0xFF;
                goto clear;
            }
            i = 0;
            goto tail;
        }
        snd = &D_8006FB10;
        if (D_80189C8C != *snd) {
            i = 1;
            goto call;
        }
        if (D_80189C90 == 0) {
            i = 0;
            goto tail;
        }
        if (--D_80189C90 != 1) {
            i = 0;
            goto tail;
        }
        i = 1;
        goto call;
    }
tail_init:
    i = 0;
tail:
    tbl = D_80189900;
    for (; i < 7; i++) {
        car = &D_8022A770[i];
        if (car->id != 0xFFFF) {
            tbl[i] = car->state;
        }
    }
    return;
call:
    snd = &D_8006FB10;
    func_8022FDF0(*snd, i);
    D_80189C8C = *snd;
clear:
    D_80189C90 = 0;
    goto tail_init;
}
