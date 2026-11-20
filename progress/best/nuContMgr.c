extern u8 D_800DE058[];
extern u8 D_800DE2C8[];
extern u8 D_8006F970[];
extern u8 D_8006FE40[];
extern u8 D_8006F9D8[];
extern s32 D_8006F9D4;
extern void (*D_80046DA0)(s16);

void osContStartReadData(void *);
void osRecvMesg(void *, s32, s32);
void osSendMesg(void *, s32, s32);
void osContGetReadData(void *);
void osContStartQuery(void *);
void osContGetQuery(void *);

typedef struct { unsigned char pad_0[4]; void * field_4; void * field_8; } __repair_record_arg0;
s32 nuContMgr(void *arg0) {
    void *s0;

    if (*(s16 *)arg0 == 0x1000) {
        goto a228;
    }
    if (*(s16 *)arg0 < 0x1001) {
        if (*(s16 *)arg0 == 1) {
            goto a168;
        }
        return 0;
    }
    if (*(s16 *)arg0 == 0x1001) {
        goto a284;
    }
    if (*(s16 *)arg0 == 0x1002) {
        goto a314;
    }
    return 0;

a168:
    if (D_8006F9D4 != 0) {
        return 1;
    }
    s0 = D_8006F970;
    osRecvMesg(s0, 0, 0);
    osContStartReadData(D_800DE058);
    osRecvMesg(D_800DE058, 0, 1);
    if (!(D_8006F9D4 & 1)) {
        osSendMesg(D_800DE2C8, 0, 1);
        osContGetReadData(D_8006FE40);
        osRecvMesg(D_800DE2C8, 0, 1);
    }
    if (D_80046DA0 != NULL) {
        D_80046DA0(*(s16 *)arg0);
    }
    osSendMesg(s0, 0, 0);
    return 0;

a228:
    osContStartReadData(D_800DE058);
    s0 = ((__repair_record_arg0*)arg0)->field_8;
    osRecvMesg(D_800DE058, 0, 1);
    osSendMesg(D_800DE2C8, 0, 1);
    osContGetReadData(s0);
    osRecvMesg(D_800DE2C8, 0, 1);
    osSendMesg(((__repair_record_arg0*)arg0)->field_4, 0, 0);
    return 1;

a284:
    s0 = D_8006F970;
    osRecvMesg(s0, 0, 0);
    osContStartReadData(D_800DE058);
    osRecvMesg(D_800DE058, 0, 1);
    osSendMesg(D_800DE2C8, 0, 1);
    osContGetReadData(D_8006FE40);
    osRecvMesg(D_800DE2C8, 0, 1);
    if (D_80046DA0 != NULL) {
        D_80046DA0(*(s16 *)arg0);
    }
    osSendMesg(s0, 0, 0);
    return 1;

a314:
    osContStartQuery(D_800DE058);
    osRecvMesg(D_800DE058, 0, 1);
    osContGetQuery(D_8006F9D8);
    osSendMesg(((__repair_record_arg0*)arg0)->field_4, 0, 0);
    return 1;
}
