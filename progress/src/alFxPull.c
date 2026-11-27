/* adapted from similar verified C in alFxPull in V-RALLY-PAL (matched), with its names changed by decompdecomp */
typedef struct { u32 w0, w1; } Acmd;

#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))

#define aSetBuffer(pkt, f, i, o, c) { Acmd *_a = (Acmd *)pkt; \
    _a->w0 = (_SHIFTL(8, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(i, 0, 16)); \
    _a->w1 = (_SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16)); }
#define aMix(pkt, f, g, i, o) { Acmd *_a = (Acmd *)pkt; \
    _a->w0 = (_SHIFTL(12, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(g, 0, 16)); \
    _a->w1 = (_SHIFTL(i, 16, 16) | _SHIFTL(o, 0, 16)); }
#define aClearBuffer(pkt, d, c) { Acmd *_a = (Acmd *)pkt; \
    _a->w0 = _SHIFTL(2, 24, 8) | _SHIFTL(d, 0, 24); \
    _a->w1 = (u32)(c); }
#define aDMEMMove(pkt, i, o, c) { Acmd *_a = (Acmd *)pkt; \
    _a->w0 = _SHIFTL(10, 24, 8) | _SHIFTL(i, 0, 24); \
    _a->w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16); }

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    Acmd *(*handler)(void *, s16 *, s32, s32, Acmd *);
    void *setParam;
    s16 inp;
    s16 outp;
    s32 type;
} ALFilter;

typedef struct {
    u32 input;
    u32 output;
    s16 ffcoef;
    s16 fbcoef;
    s16 gain;
    f32 rsinc;
    f32 rsval;
    s32 rsdelta;
    f32 rsgain;
    void *lp;
    void *rs;
} ALDelay;

typedef struct {
    ALFilter filter;
    s16 *base;
    s16 *input;
    u32 length;
    ALDelay *delay;
    u8 section_count;
} ALFx;

extern char D_8004A840[];
extern char D_8004A844[];
void func_800346B0(char *, char *, s32);
Acmd *_saveBuffer(ALFx *r, s16 *curr_ptr, s32 buff, s32 count, Acmd *p);
Acmd *_loadBuffer(ALFx *r, s16 *curr_ptr, s32 buff, s32 count, Acmd *p);
Acmd *_loadOutputBuffer(ALFx *r, ALDelay *d, s32 buff, s32 incount, Acmd *p);
Acmd *_filterBuffer(void *lp, s32 buff, s32 count, Acmd *p);

/* Builds the RSP audio command list for one reverb pass: loads and mixes each delay section, saves its feedback, and copies the result to the output. */ Acmd *alFxPull(void *filter, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p)
{
    Acmd *cmd = p;
    ALFx *r = (ALFx *)filter;
    ALFilter *source = r->filter.source;
    s16 i, buff1, buff2, input, output, tmp;
    s16 *in_ptr, *out_ptr, *prev_out_ptr = 0;
    ALDelay *d;

    if (!source) {
        func_800346B0(D_8004A840, D_8004A844, 0x4B);
    }
    cmd = (*source->handler)(source, outp, outCount, sampleOffset, p);

    input = 0x6C0;
    output = 0x800;
    buff1 = 0;
    buff2 = 0x140;

    aSetBuffer(cmd++, 0, 0, 0, outCount << 1);
    aMix(cmd++, 0, 0xDA83, 0x6C0, input);
    aMix(cmd++, 0, 0x5A82, 0x800, input);
    cmd = _saveBuffer(r, r->input, input, outCount, cmd);
    aClearBuffer(cmd++, output, outCount << 1);

    for (i = 0; i < r->section_count; i++) {
        d = &r->delay[i];
        in_ptr = &r->input[-d->input];
        out_ptr = &r->input[-d->output];

        if (in_ptr == prev_out_ptr) {
            tmp = buff2;
            buff2 = buff1;
            buff1 = tmp;
        } else {
            cmd = _loadBuffer(r, in_ptr, buff1, outCount, cmd);
        }
        cmd = _loadOutputBuffer(r, d, buff2, outCount, cmd);

        if (d->ffcoef) {
            aMix(cmd++, 0, (u16)d->ffcoef, buff1, buff2);
            if (!d->rs && !d->lp) {
                cmd = _saveBuffer(r, out_ptr, buff2, outCount, cmd);
            }
        }
        if (d->fbcoef) {
            aMix(cmd++, 0, (u16)d->fbcoef, buff2, buff1);
            cmd = _saveBuffer(r, in_ptr, buff1, outCount, cmd);
        }
        if (d->lp) {
            cmd = _filterBuffer(d->lp, buff2, outCount, cmd);
        }
        if (!d->rs) {
            cmd = _saveBuffer(r, out_ptr, buff2, outCount, cmd);
        }
        if (d->gain) {
            aMix(cmd++, 0, (u16)d->gain, buff2, output);
        }
        prev_out_ptr = &r->input[d->output];
    }

    r->input += outCount;
    if (r->input > &r->base[r->length]) {
        r->input -= r->length;
    }

    aDMEMMove(cmd++, output, 0x6C0, outCount << 1);
    return cmd;
}
