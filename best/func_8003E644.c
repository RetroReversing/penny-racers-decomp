typedef struct Ring {
    void *p0;
    s32 f4;
    s32 count;
    s32 head;
    s32 cap;
    s32 *buf;
} Ring;

typedef struct Entry {
    Ring *ring;
    s32 val;
} Entry;

extern Entry D_800DD360[];
extern s32 D_800470D8;
s32 func_8003E884(Ring *);
void func_8003E83C(s32 *, s32);

void func_8003E644(s32 arg0) {
    Entry *e = (Entry *)((u8 *)D_800DD360 + arg0);
    Ring *r = e->ring;

    if (r != NULL && r->count < r->cap) {
        r->buf[(r->head + r->count) % r->cap] = e->val;
        r->count = r->count + 1;
        if (*(s32 *)r->p0 != 0) {
            func_8003E83C(&D_800470D8, func_8003E884(r));
        }
    }
}
