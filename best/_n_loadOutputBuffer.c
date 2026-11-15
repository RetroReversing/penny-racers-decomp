typedef struct {u32 w0,w1;} OutCmd;
typedef struct {char pad[0x18];s16 *input;} OutFx;
typedef struct {char pad[0x14];void *state;char pad18[8];f32 delta;s32 first;} OutRes;
typedef struct {s32 input,output;char pad8[0x10];s32 rsdelta;char pad1c[8];OutRes *rs;} OutDelay;
void *_n_loadBuffer(void *, s32, s32, s32, s32);
s32 osVirtualToPhysical(s32);
f32 _doModFunc(void *, s32);
extern f64 D_8004A4A0;
OutCmd *_n_loadOutputBuffer(OutFx *r, OutDelay *d, s32 buff, OutCmd *p) {
    f32 ratio, fin;
    s32 length, incount = 184, ptr, align, delta;
    u16 pitch;
    if (d->rs) {
        length = d->output;
        length -= d->input;
        ratio = D_8004A4A0 - (f64)((f32)(s32)((_doModFunc(d, incount) / (f32)length) * 32768.0f) / 32768.0f);
        fin = d->rs->delta + ratio * (f32)incount;
        d->rs->delta = fin - (f32)(s32)fin;
        incount = (s32)fin;
        ptr = (s32)r->input + (d->rsdelta - d->output) * 2;
        align = (ptr & 7) >> 1;
        delta = align * 2;
        p = _n_loadBuffer(r, ptr - delta, 0x2e0, incount + align, (s32)p);
        pitch = (s32)(ratio * 32768.0f);
        {
            OutCmd *a = p++;
            a->w0 = (osVirtualToPhysical((s32)d->rs->state) & 0xffffff) | 0x05000000;
            a->w1 = ((buff >> 8) & 3) | (d->rs->first << 30) | ((u32)pitch << 14) | ((delta | 0x2e0) * 4);
        }
        d->rs->first = 0;
        incount -= 184;
        d->rsdelta += incount;
    } else {
        p = _n_loadBuffer(r, (s32)r->input - d->output * 2, buff, 184, (s32)p);
    }
    return p;
}
