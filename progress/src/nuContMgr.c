extern u8 contStartMesgQ[];
extern u8 contSiMesgQ[];
extern u8 contRetraceMesgQ[];
extern u8 contReadData[];
extern u8 contQueryData[];
extern s32 D_8006F9D4;
extern void (*D_80046DA0)(s16);

typedef struct { s16 mesg; void *rtnMesgQ; void *dataPtr; } SiMesg;

static inline s32 contRetrace(SiMesg *mesg) {
    u8 *q;
    if (D_8006F9D4 != 0) {
        return 1;
    }
    q = contRetraceMesgQ;
    osRecvMesg(q, 0, 0);
    osContStartReadData(contStartMesgQ);
    osRecvMesg(contStartMesgQ, 0, 1);
    if (!(D_8006F9D4 & 1)) {
        osSendMesg(contSiMesgQ, 0, 1);
        osContGetReadData(contReadData);
        osRecvMesg(contSiMesgQ, 0, 1);
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
    osContStartReadData(contStartMesgQ);
    osRecvMesg(contStartMesgQ, 0, 1);
    osSendMesg(contSiMesgQ, 0, 1);
    osContGetReadData(pad);
    osRecvMesg(contSiMesgQ, 0, 1);
    osSendMesg(mesg->rtnMesgQ, 0, 0);
    return 1;
}

static inline s32 contReadNW(SiMesg *mesg) {
    u8 *q;
    q = contRetraceMesgQ;
    osRecvMesg(q, 0, 0);
    osContStartReadData(contStartMesgQ);
    osRecvMesg(contStartMesgQ, 0, 1);
    osSendMesg(contSiMesgQ, 0, 1);
    osContGetReadData(contReadData);
    osRecvMesg(contSiMesgQ, 0, 1);
    if (D_80046DA0 != 0) {
        D_80046DA0(mesg->mesg);
    }
    osSendMesg(q, 0, 0);
    return 1;
}

static inline s32 contQuery(SiMesg *mesg) {
    osContStartQuery(contStartMesgQ);
    osRecvMesg(contStartMesgQ, 0, 1);
    osContGetQuery(contQueryData);
    osSendMesg(mesg->rtnMesgQ, 0, 0);
    return 1;
}

/* Controller-manager message dispatcher: retrace poll, read, non-waiting read, or query. */
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
