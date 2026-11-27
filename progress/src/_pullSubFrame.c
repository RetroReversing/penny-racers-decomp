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

/* Writes the RSP mixer commands for one sub-frame of an envelope mixer: runs the source filter, then the volume-ramp and dry/wet commands (extra ramp setup on the first frame). */
Acmd *_pullSubFrame(void *filter, s16 *inp, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p)
{
    ALEnvMixer *mixer = (ALEnvMixer *)filter;
    ALFilter *source = mixer->filter.source;
    Acmd *cmd = p;

    if (mixer->motion != 1 || !outCount) {
        return cmd;
    }
    if (!source) {
        func_800346B0(D_8004A710, D_8004A714, 0x16F);
    }
    cmd = (*(Acmd *(*)(void *, s16 *, s32, s32, Acmd *))source->handler)(source, inp, outCount, sampleOffset, cmd);

    {
        Acmd *c = cmd++;
        c->w0 = 0x08000000 | (u16)*inp;
        c->w1 = ((u32)(*outp + 0x440) << 16) | ((outCount << 1) & 0xFFFF);
    }
    {
        Acmd *c = cmd++;
        c->w0 = 0x08080000 | ((*outp + 0x580) & 0xFFFF);
        c->w1 = ((u32)(*outp + 0x6C0) << 16) | ((*outp + 0x800) & 0xFFFF);
    }

    if (mixer->first) {
        mixer->first = 0;
        mixer->ltgt = (mixer->volume * D_80047290[mixer->pan]) >> 15;
        mixer->lratm = _getRate((f64)mixer->cvolL, (f64)mixer->ltgt, mixer->segEnd, &mixer->lratl);
        mixer->rtgt = (mixer->volume * D_80047290[128 - mixer->pan - 1]) >> 15;
        mixer->rratm = _getRate((f64)mixer->cvolR, (f64)mixer->rtgt, mixer->segEnd, &mixer->rratl);
        {
            Acmd *c = cmd++;
            c->w0 = 0x09060000 | (u16)mixer->cvolL;
            c->w1 = 0;
        }
        {
            Acmd *c = cmd++;
            c->w0 = 0x09040000 | (u16)mixer->cvolR;
            c->w1 = 0;
        }
        {
            Acmd *c = cmd++;
            c->w0 = 0x09020000 | (u16)mixer->ltgt;
            c->w1 = ((u32)(u16)mixer->lratm << 16) | mixer->lratl;
        }
        {
            Acmd *c = cmd++;
            c->w0 = 0x09000000 | (u16)mixer->rtgt;
            c->w1 = ((u32)(u16)mixer->rratm << 16) | mixer->rratl;
        }
        {
            Acmd *c = cmd++;
            c->w0 = 0x09080000 | (u16)mixer->dryamt;
            c->w1 = (u16)mixer->wetamt;
        }
        {
            Acmd *c = cmd++;
            c->w0 = 0x03090000;
            c->w1 = osVirtualToPhysical(mixer->state);
        }
    } else {
        Acmd *c = cmd++;
        c->w0 = 0x03080000;
        c->w1 = osVirtualToPhysical(mixer->state);
    }
    *inp += outCount << 1;
    mixer->delta += outCount;
    return cmd;
}
