extern void nuGfxDisplayOff(void);
extern void osCreateThread(void *, int, void *, int, void *, int);
extern void osStartThread(void *);
extern void *D_8006A140;
extern s16 D_8006A144;
extern s16 D_8006A146;
extern char D_8006A148[];
extern char D_8006C300[];
extern char D_80071F80[];
extern char D_80072BE0[];
extern char D_80092BE0[];
extern s32 D_80092C00;
extern char D_800DAE40[];
extern char D_800DAE50[];
extern char D_800DAE54[];
extern char D_800DAE58[];
extern char D_800DAE5C[];
extern char D_800DAE64[];
extern char D_800DAE6C[];
extern char D_800DAE70[];
extern char D_800DAE74[];
extern char D_800DAE78[];
extern char D_800DAE7C[];
extern char D_800DAE88[];
extern char D_800DAE8C[];
extern char D_800DAE98[];
extern char D_800DB158[];
extern char D_800DD420[];
extern char D_800DE0E8[];
extern char nuGfxTaskMgr[];
extern char func_800428B0[];
extern char D_80042980[];

void nuGfxTaskMgrInit(void) {
    void **p;
    char *q;
    u32 i;
    s32 off;
    char *r;

    D_8006A144 = 8;
    D_8006A146 = 4;
    D_80092C00 = 0;
    nuGfxDisplayOff();
    osCreateThread(D_8006A148, 5, nuGfxTaskMgr, 0, D_8006C300, 0x3C);
    osStartThread(D_8006A148);
    q = D_800DAE98;
    p = (void **)(q - 8);
    off = 0;
    for (i = 0; i < 10; i++) {
        *(char **)(D_800DAE40 + off) = q;
        *p = D_800DE0E8;
        *(s32 *)(D_800DAE50 + off) = 1;
        *(s32 *)(D_800DAE54 + off) = 0;
        *(char **)(D_800DAE58 + off) = func_800428B0;
        *(s32 *)(D_800DAE5C + off) = D_80042980 - func_800428B0;
        *(s32 *)(D_800DAE64 + off) = 0x1000;
        *(s32 *)(D_800DAE6C + off) = 0x800;
        *(char **)(D_800DAE70 + off) = D_800DD420;
        *(s32 *)(D_800DAE74 + off) = 0x400;
        *(char **)(D_800DAE78 + off) = D_80072BE0;
        *(char **)(D_800DAE7C + off) = D_80092BE0;
        *(char **)(D_800DAE88 + off) = D_80071F80;
        *(s32 *)(D_800DAE8C + off) = 0xC00;
        *p = D_800DE0E8;
        p = (void **)((char *)p + 0x58);
        q += 0x58;
        off += 0x58;
    }
    {
        char **t = (char **)D_800DB158;
        r = (char *)t - 0x318;
        *t = r;
    }
    D_8006A140 = r;
}
