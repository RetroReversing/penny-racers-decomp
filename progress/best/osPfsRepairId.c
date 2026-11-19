typedef struct { u8 pad0[4]; s32 channel_q; s32 channel; u8 id[32]; u8 pad2C[0x20]; s32 f4C; s32 f50; s32 f54; s32 f58; s32 f5C; s32 f60; u8 f64; u8 f65; } Pfs;
typedef struct { u8 pad[0x18]; u16 flags; u8 a, b; } Pk;
typedef struct { u8 b[32]; u16 pad[2]; u16 x, y; u8 pad2[4]; } Tmp;
extern s32 __osPfsSelectBank(Pfs *);
extern s32 __osContRamRead(s32, s32, s32, u8 *);
extern void __osIdCheckSum(u16 *, u16 *, u16 *);
extern s32 __osCheckPackId(Pfs *, Pk *);
extern s32 __osRepairPackId(Pfs *, Pk *, Pk *);
s32 osPfsRepairId(Pfs *pfs)
{
    s32 ret;
    u8 buf[32];

    u16 sum;
    u16 isum;
    u16 *p;
    Pk *id;
    u8 newid[32];
    u8 *src;
    s32 k;
    u16 s2[4];
    if (pfs->f65 != 0) {
        pfs->f65 = 0;
        ret = __osPfsSelectBank(pfs);
        if (ret != 0) return ret;
    }
    ret = __osContRamRead(pfs->channel_q, pfs->channel, 1, buf);
    if (ret != 0) return ret;
    __osIdCheckSum((u16 *)buf, &sum, &isum);
    id = (Pk *)buf;
    if (*(u16 *)(buf + 0x1C) != sum || *(u16 *)(buf + 0x1E) != isum) {
        ret = __osCheckPackId(pfs, id);
        if (ret == 10) {
            id = (Pk *)newid;
            ret = __osRepairPackId(pfs, (Pk *)buf, id);
            if (ret != 0) return ret;
        } else if (ret != 0) {
            return ret;
        }
    }
    if (!(id->flags & 1)) {
        Pk *old = id;
        id = (Pk *)newid;
        ret = __osRepairPackId(pfs, old, id);
        if (ret != 0) return ret;
        if (!(((Pk *)newid)->flags & 1)) return 11;
    }
    for (k = 0; k < 32; k++) pfs->id[k] = ((u8 *)id)[k];
    pfs->f4C = id->b;
    pfs->f50 = 16;
    pfs->f54 = 8;
    pfs->f64 = id->a;
    pfs->f60 = pfs->f64 * 2 + 3;
    pfs->f58 = (pfs->f64 + 1) * 8;
    pfs->f5C = pfs->f58 + pfs->f64 * 8;
    ret = __osContRamRead(pfs->channel_q, pfs->channel, 7, (u8 *)pfs + 0x2C);
    return ret & -(ret != 0);
}
