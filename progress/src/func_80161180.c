typedef struct { u32 w0; u32 w1; } Gwords;
typedef union { Gwords words; long long force; } Gfx;
#define _S(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))
#define gDma(pkt, w0v, w1v) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (w0v); _g->words.w1 = (u32)(w1v); }
#define gDPSetTextureImage(pkt, f, s, w, i) gDma(pkt, _S(0xfd, 24, 8) | _S(f, 21, 3) | _S(s, 19, 2) | _S((w) - 1, 0, 12), i)
#define gDPNoParam(pkt, cmd) gDma(pkt, _S(cmd, 24, 8), 0)
#define gDPTileSync(pkt) gDPNoParam(pkt, 0xe8)
#define gDPLoadSync(pkt) gDPNoParam(pkt, 0xe6)
#define gDPPipeSync(pkt) gDPNoParam(pkt, 0xe7)
#define gDPSetTile(pkt, fmt, siz, line, tmem, tile, palette, cmt, maskt, shiftt, cms, masks, shifts) \
    gDma(pkt, _S(0xf5, 24, 8) | _S(fmt, 21, 3) | _S(siz, 19, 2) | _S(line, 9, 9) | _S(tmem, 0, 9), \
         _S(tile, 24, 3) | _S(palette, 20, 4) | _S(cmt, 18, 2) | _S(maskt, 14, 4) | _S(shiftt, 10, 4) | _S(cms, 8, 2) | _S(masks, 4, 4) | _S(shifts, 0, 4))
#define gDPLoadTLUTCmd(pkt, tile, count) gDma(pkt, _S(0xf0, 24, 8), _S(tile, 24, 3) | _S(count, 14, 10))
#define gDPLoadTileGeneric(pkt, c, tile, uls, ult, lrs, lrt) \
    gDma(pkt, _S(c, 24, 8) | _S(uls, 12, 12) | _S(ult, 0, 12), _S(tile, 24, 3) | _S(lrs, 12, 12) | _S(lrt, 0, 12))
#define gDPLoadTile(pkt, tile, uls, ult, lrs, lrt) gDPLoadTileGeneric(pkt, 0xf4, tile, uls, ult, lrs, lrt)
#define gDPSetTileSize(pkt, tile, uls, ult, lrs, lrt) gDPLoadTileGeneric(pkt, 0xf2, tile, uls, ult, lrs, lrt)
#define gDPLoadTLUT_pal16(pkt, pal, dram) { \
    gDPSetTextureImage(pkt, 0, 2, 1, dram); \
    gDPTileSync(pkt); \
    gDPSetTile(pkt, 0, 0, 0, (256 + (((pal) & 0xf) * 16)), 7, 0, 0, 0, 0, 0, 0, 0); \
    gDPLoadSync(pkt); \
    gDPLoadTLUTCmd(pkt, 7, 15); \
    gDPPipeSync(pkt); }
#define gDPLoadTLUT_pal256(pkt, dram) { \
    gDPSetTextureImage(pkt, 0, 2, 1, dram); \
    gDPTileSync(pkt); \
    gDPSetTile(pkt, 0, 0, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0); \
    gDPLoadSync(pkt); \
    gDPLoadTLUTCmd(pkt, 7, 255); \
    gDPPipeSync(pkt); }
#define gDPLoadTextureTile_4b(pkt, timg, fmt, width, height, uls, ult, lrs, lrt, pal, cms, cmt, masks, maskt, shifts, shiftt) { \
    gDPSetTextureImage(pkt, fmt, 1, ((width) >> 1), timg); \
    gDPSetTile(pkt, fmt, 1, (((((lrs) - (uls) + 1) >> 1) + 7) >> 3), 0, 7, 0, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPLoadSync(pkt); \
    gDPLoadTile(pkt, 7, (uls) << 1, (ult) << 2, (lrs) << 1, (lrt) << 2); \
    gDPPipeSync(pkt); \
    gDPSetTile(pkt, fmt, 0, (((((lrs) - (uls) + 1) >> 1) + 7) >> 3), 0, 0, pal, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPSetTileSize(pkt, 0, (uls) << 2, (ult) << 2, (lrs) << 2, (lrt) << 2); }
#define gDPLoadTextureTile_8b(pkt, timg, fmt, width, height, uls, ult, lrs, lrt, pal, cms, cmt, masks, maskt, shifts, shiftt) { \
    gDPSetTextureImage(pkt, fmt, 1, width, timg); \
    gDPSetTile(pkt, fmt, 1, ((((lrs) - (uls) + 1) + 7) >> 3), 0, 7, 0, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPLoadSync(pkt); \
    gDPLoadTile(pkt, 7, (uls) << 2, (ult) << 2, (lrs) << 2, (lrt) << 2); \
    gDPPipeSync(pkt); \
    gDPSetTile(pkt, fmt, 1, ((((lrs) - (uls) + 1) + 7) >> 3), 0, 0, pal, cmt, maskt, shiftt, cms, masks, shifts); \
    gDPSetTileSize(pkt, 0, (uls) << 2, (ult) << 2, (lrs) << 2, (lrt) << 2); }
#define gImmp1(pkt, c, w1v) gDma(pkt, _S(c, 24, 8), w1v)
#define gSPTextureRectangle(pkt, xl, yl, xh, yh, tile, s, t, dsdx, dtdy) { \
    gDma(pkt, _S(0xe4, 24, 8) | _S(xh, 12, 12) | _S(yh, 0, 12), _S(tile, 24, 3) | _S(xl, 12, 12) | _S(yl, 0, 12)); \
    gImmp1(pkt, 0xb4, _S(s, 16, 16) | _S(t, 0, 16)); \
    gImmp1(pkt, 0xb3, _S(dsdx, 16, 16) | _S(dtdy, 0, 16)); }

typedef struct { f32 v; u8 pad[0x60]; } SlotF;
typedef struct { u8 pad0[2]; u16 obj; u16 player; u8 pad6[0x558]; s16 ammo; u16 flags; u8 pad562[0x172]; u8 mtx[0xA0]; f32 speed; u8 pad778[0x120]; s32 state; u8 pad89C[5]; u8 mode; } Car;
typedef struct { u8 v[0x7C]; } Hit;
typedef struct { f32 v; u8 pad[0x78]; } HitF;
typedef struct { Car *v; u8 pad[0x78]; } HitP;
extern SlotF D_8011F308[], sPrimColorG[], sPathOffsetZ[], D_8011F318[], D_8011F320[], D_8011F324[], D_8011F328[];
extern u8 D_8023943C[];
extern Hit slotHitFlags[];
extern HitF slotRadius[];
extern HitP slotOwner[];
void updateLaunchedBall(void);
void func_8003DF6C(void *, f32, f32, f32, f32 *, f32 *, f32 *);
void queueObjEvent(u16, s32);
s32 objCreate(s32, s32, s32, s32, s32, s32, u8 *, void (*)(void), s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void launchBall(u16, u16, Car *, s32, f32, f32, f32, f32, f32, f32, s32);

void func_80161180(Car *car) {
    u16 slot;
    s32 n;
    s32 f;
    s32 n2;
    f32 vx;
    f32 vy;
    f32 vz;

    if (car->state == 1 && (f = car->flags, !(f & 8)) && (f & 7) < 5 && car->mode != 2 && car->mode != 3) {
        slot = raceAllocSlot();
        if (slot != 0xFFFF) {
            n = objCreate(0, 0, 1, 0, 0x51, 0xFF, D_8023943C, updateLaunchedBall, 0, D_8011F308[car->obj].v, sPrimColorG[car->obj].v + 15.0f, sPathOffsetZ[car->obj].v, 0.0f, D_8011F318[car->obj].v, 0.0f, D_8011F320[car->obj].v * 2.0f, D_8011F324[car->obj].v * 2.0f, D_8011F328[car->obj].v * 2.0f);
            if ((u16)(n + 2) < 2) {
                func_8013E49C(slot);
            } else {
                n2 = car->flags & 7; car->flags = (car->flags & 0xF8) | (n2 + 1);
                func_8003DF6C(car->mtx, 0.0f, 0.0f, car->speed * 0.3f + 40.0f, &vx, &vy, &vz);
                launchBall(slot, n, car, 0x40, 0.0f, 15.0f, 0.0f, vx, vy, vz, 0x12C);
                slotOwner[slot].v = car;
                slotHitFlags[slot].v[car->player] = 1;
                slotRadius[slot].v = 30.0f;
                queueObjEvent(n, 0x2D);
                if (car->ammo > 0) {
                    car->ammo--;
                }
            }
        }
    }
}

