typedef struct { u32 w0; u32 w1; } Gwords;
typedef union { Gwords words; long long force; } Gfx;
#define _S(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))
#define gDma(pkt, w0v, w1v) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (w0v); _g->words.w1 = (u32)(w1v); }
#define gSPDisplayList(pkt, dl) gDma(pkt, _S(0x06, 24, 8), dl)

typedef struct { u16 v; u8 pad[0x62]; } SlotH;
typedef struct { s16 alpha; u16 timer; } Fade;
typedef struct { u8 pad0[0x20]; u16 lang; } Setup;
extern u16 D_80203AC8;
extern SlotH noticeStates[];
extern s16 noticeAlpha;
extern u16 noticeHoldTimer;
extern Setup D_8006FAF0;
extern Gfx noticeBackgroundDl[];
extern u8 D_801FFD30[];
extern u8 *D_801FFD40[];
void gfxSetup2DState(Gfx **);
void gfxSetPrimAlpha(Gfx **, u16);
void drawText(Gfx **, s32, s32, s32, u8 *, u8 *);

/* Steps the fade-in/hold/fade-out state for one notice and, while it is visible, draws the background and the two text lines. */
void updateNoticeFade(Gfx **gfxp, u16 noticeId) {
    if (D_80203AC8 != 0) {
        switch (noticeStates[noticeId].v) {
        case 0:
            noticeHoldTimer = 0;
            noticeAlpha = 0;
            noticeStates[noticeId].v = 1;
            return;
        case 1:
            if (noticeAlpha < 0xFF) {
                noticeAlpha += 5;
                if (noticeAlpha > 0xFF) {
                    noticeAlpha = 0xFF;
                }
            } else {
                noticeStates[noticeId].v = 2;
            }
            break;
        case 2:
            if ((s16)++noticeHoldTimer > 50) {
                noticeStates[noticeId].v = 3;
            }
            break;
        case 3:
            if (noticeAlpha > 0) {
                noticeAlpha -= 5;
                if (noticeAlpha < 0) {
                    noticeAlpha = 0;
                }
            } else {
                D_80203AC8 = 0;
                noticeStates[noticeId].v = 0;
            }
            break;
        default:
            return;
        }
        gfxSetup2DState(gfxp);
        gSPDisplayList((*gfxp)++, noticeBackgroundDl);
        gfxSetPrimAlpha(gfxp, noticeAlpha);
        drawText(gfxp, 0x64, 0xA0, 8, D_801FFD30, D_801FFD40[0]);
        drawText(gfxp, 0x64, 0x6E, 8, D_801FFD30, D_801FFD40[D_8006FAF0.lang]);
    }
}
