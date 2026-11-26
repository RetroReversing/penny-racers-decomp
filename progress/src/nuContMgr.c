extern u8 D_800DE058[];
extern u8 D_800DE2C8[];
extern u8 D_8006F970[];
extern u8 D_8006FE40[];
extern u8 D_8006F9D8[];
extern s32 D_8006F9D4;
extern void (*D_80046DA0)(s16);

typedef struct { s16 mesg; void *rtnMesgQ; void *dataPtr; } SiMesg;

static inline s32 contRetrace(SiMesg *mesg) {
    u8 *q;
    if (D_8006F9D4 != 0) {
        return 1;
    }
    q = D_8006F970;
    osRecvMesg(q, 0, 0);
    osContStartReadData(D_800DE058);
    osRecvMesg(D_800DE058, 0, 1);
    if (!(D_8006F9D4 & 1)) {
        osSendMesg(D_800DE2C8, 0, 1);
        osContGetReadData(D_8006FE40);
        osRecvMesg(D_800DE2C8, 0, 1);
    }
    if (D_80046DA0 != 0) {
        D_80046DA0(mesg->mesg);
    }
    osSendMesg(q, 0, 0);
    return 0;
}

static inline s32 contRead(SiMesg *mesg) {
    void *pad;
    pad = mesg->dataPtr;
    osContStartReadData(D_800DE058);
    osRecvMesg(D_800DE058, 0, 1);
    osSendMesg(D_800DE2C8, 0, 1);
    osContGetReadData(pad);
    osRecvMesg(D_800DE2C8, 0, 1);
    osSendMesg(mesg->rtnMesgQ, 0, 0);
    return 1;
}

static inline s32 contReadNW(SiMesg *mesg) {
    u8 *q;
    q = D_8006F970;
    osRecvMesg(q, 0, 0);
    osContStartReadData(D_800DE058);
    osRecvMesg(D_800DE058, 0, 1);
    osSendMesg(D_800DE2C8, 0, 1);
    osContGetReadData(D_8006FE40);
    osRecvMesg(D_800DE2C8, 0, 1);
    if (D_80046DA0 != 0) {
        D_80046DA0(mesg->mesg);
    }
    osSendMesg(q, 0, 0);
    return 1;
}

static inline s32 contQuery(SiMesg *mesg) {
    osContStartQuery(D_800DE058);
    osRecvMesg(D_800DE058, 0, 1);
    osContGetQuery(D_8006F9D8);
    osSendMesg(mesg->rtnMesgQ, 0, 0);
    return 1;
}

s32 nuContMgr(SiMesg *mesg) {
    switch (mesg->mesg) {
    case 1:
        return contRetrace(mesg);
    case 0x1000:
        return contRead(mesg);
    case 0x1001:
        return contReadNW(mesg);
    case 0x1002:
        return contQuery(mesg);
    }
    return 0;
}
