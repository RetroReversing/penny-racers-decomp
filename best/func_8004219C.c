/* identical to __osLeoResume in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
extern char D_800D5D66[];
extern char D_800A2518[];

typedef struct Ring {
    s32 *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 *unk14;
} Ring;

s32 func_8003E884(void *, void *);
void func_8003E83C(void *, s32);

void func_8004219C(void) {
    Ring *r;
    s32 idx;

    r = *(Ring **)(D_800D5D66 + 0x763A);
    if (r != NULL) {
        if (r->unk8 < r->unk10) {
            idx = (r->unkC + r->unk8) % r->unk10;
            r->unk14[idx] = *(s32 *)(D_800D5D66 + 0x763E);
            r->unk8++;
            if (*r->unk0 != 0) {
                func_8003E83C(D_800A2518, func_8003E884(r, r));
            }
        }
    }
}
