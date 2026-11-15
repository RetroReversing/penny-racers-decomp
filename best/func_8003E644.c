extern char D_800DD360[];
extern char D_800470D8[];

typedef struct Ring {
    s32 *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 *unk14;
} Ring;

s32 func_8003E884(Ring *);
void func_8003E83C(void *, s32);

void func_8003E644(s32 arg0) {
    u8 *base = D_800DD360;
    Ring *r = *(Ring **)(base + arg0);
    s32 idx;
    s32 ret;
    s32 cnt;

    if (r != NULL) {
        cnt = r->unk8;
        if (cnt < r->unk10) {
            idx = (r->unkC + cnt) % r->unk10;
            r->unk14[idx] = *(s32 *)(base + arg0 + 4);
            r->unk8 = cnt + 1;
            if (*r->unk0 != 0) {
                ret = func_8003E884(r);
                func_8003E83C(D_800470D8, ret);
            }
        }
    }
}
