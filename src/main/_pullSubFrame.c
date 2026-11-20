#include "common.h"

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    void *handler;
    void *setParam;
    s16 inp;
    s16 outp;
    s32 type;
} ALFilter;

typedef struct {
    ALFilter filter;
    void *state;
    s16 pan;
    s16 volume;
    s16 cvolL;
    s16 cvolR;
    s16 dryamt;
    s16 wetamt;
    u16 lratl;
    s16 lratm;
    s16 ltgt;
    u16 rratl;
    s16 rratm;
    s16 rtgt;
    s32 delta;
    s32 segEnd;
    s32 first;
    void *ctrlList;
    void *ctrlTail;
    void *sources;
    s32 motion;
} ALEnvMixer;

typedef struct { u32 w0; u32 w1; } Acmd;

extern s32 osVirtualToPhysical(void *);
extern void func_800346B0(void *, void *, s32);
extern s16 _getRate(f64, f64, s32, u16 *);
extern s16 D_80047290[];
extern u8 D_8004A710[];
extern u8 D_8004A714[];

Acmd *_pullSubFrame(void *filter, s16 *inp, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p)
{
    ALEnvMixer *e = (ALEnvMixer *)filter;
    ALFilter *source = e->filter.source;
    Acmd *ptr = p;

    if (e->motion != 1 || !outCount) {
        return ptr;
    }
    if (!source) {
        func_800346B0(D_8004A710, D_8004A714, 0x16F);
    }
    ptr = (*(Acmd *(*)(void *, s16 *, s32, s32, Acmd *))source->handler)(source, inp, outCount, sampleOffset, ptr);

    {
        Acmd *c = ptr++;
        c->w0 = 0x08000000 | (u16)*inp;
        c->w1 = ((u32)(*outp + 0x440) << 16) | ((outCount << 1) & 0xFFFF);
    }
    {
        Acmd *c = ptr++;
        c->w0 = 0x08080000 | ((*outp + 0x580) & 0xFFFF);
        c->w1 = ((u32)(*outp + 0x6C0) << 16) | ((*outp + 0x800) & 0xFFFF);
    }

    if (e->first) {
        e->first = 0;
        e->ltgt = (e->volume * D_80047290[e->pan]) >> 15;
        e->lratm = _getRate((f64)e->cvolL, (f64)e->ltgt, e->segEnd, &e->lratl);
        e->rtgt = (e->volume * D_80047290[128 - e->pan - 1]) >> 15;
        e->rratm = _getRate((f64)e->cvolR, (f64)e->rtgt, e->segEnd, &e->rratl);
        {
            Acmd *c = ptr++;
            c->w0 = 0x09060000 | (u16)e->cvolL;
            c->w1 = 0;
        }
        {
            Acmd *c = ptr++;
            c->w0 = 0x09040000 | (u16)e->cvolR;
            c->w1 = 0;
        }
        {
            Acmd *c = ptr++;
            c->w0 = 0x09020000 | (u16)e->ltgt;
            c->w1 = ((u32)(u16)e->lratm << 16) | e->lratl;
        }
        {
            Acmd *c = ptr++;
            c->w0 = 0x09000000 | (u16)e->rtgt;
            c->w1 = ((u32)(u16)e->rratm << 16) | e->rratl;
        }
        {
            Acmd *c = ptr++;
            c->w0 = 0x09080000 | (u16)e->dryamt;
            c->w1 = (u16)e->wetamt;
        }
        {
            Acmd *c = ptr++;
            c->w0 = 0x03090000;
            c->w1 = osVirtualToPhysical(e->state);
        }
    } else {
        Acmd *c = ptr++;
        c->w0 = 0x03080000;
        c->w1 = osVirtualToPhysical(e->state);
    }
    *inp += outCount << 1;
    e->delta += outCount;
    return ptr;
}
