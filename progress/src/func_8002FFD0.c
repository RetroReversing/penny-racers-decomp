typedef struct { void *next; s32 delta; s16 type; s32 data; s32 moreData; } P;
typedef struct PV { u8 pad[8]; struct V *vvoice; u8 pad2[0x88-0xc]; s32 offset; } PV;
typedef struct V { u8 pad[8]; PV *pvoice; void *table; void *clientPrivate; s16 state; s16 priority; s16 unityPitch; s16 fxBus; } V;
typedef struct { s16 priority; s16 unityPitch; u8 fxBus; } CFG;
typedef struct { u8 pad[0x28]; s32 paramSamples; } SYN;
extern SYN *D_80046DF4;
void *__n_allocParam();
s32 _allocatePVoice();
s32 func_8002E6E4();

s32 func_8002FFD0(V *voice, CFG *vc)
{
    PV *pvoice = 0;
    P *update;
    s32 stolen;

voice->priority = vc->priority;
voice->fxBus = vc->fxBus;
voice->table = 0;
voice->unityPitch = vc->unityPitch;
voice->state = 0;
voice->pvoice = 0;

    stolen = _allocatePVoice(&pvoice, vc->priority);
    if (pvoice) {
        if (stolen) {
            pvoice->offset = 512;
            pvoice->vvoice->pvoice = 0;
            pvoice->vvoice = voice;
            voice->pvoice = pvoice;
            update = __n_allocParam();
            update->delta = D_80046DF4->paramSamples;
            update->type = 0xB;
            update->data = 0;
            update->moreData = pvoice->offset - 64;
            func_8002E6E4(voice->pvoice, 3, update);
            update = __n_allocParam();
            if (update) {
                update->delta = D_80046DF4->paramSamples + pvoice->offset;
                update->type = 0xF;
                update->next = 0;
                func_8002E6E4(voice->pvoice, 3, update);
            }
        } else {
            pvoice->offset = 0;
            pvoice->vvoice = voice;
            voice->pvoice = pvoice;
        }
    }
    return (pvoice != 0);
}
