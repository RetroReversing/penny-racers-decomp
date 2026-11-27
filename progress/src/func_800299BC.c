s32 osEepromProbe(s32 arg0);
s32 osEepromLongRead(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 osEepromLongWrite(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 osSendMesg(s32 arg0, s32 arg1, s32 arg2);
extern char contStartMesgQ[];

typedef struct {
    s16 type;
    s16 pad;
    s32 queue;
    s32 len;
    s32 result;
    u8 addr;
    u8 pad2;
    u16 size;
} EepromReq;

s32 func_800299BC(EepromReq *arg0)
{
    s32 r;
    s16 type = arg0->type;

    switch (type) {
    case 0x3FFF:
        return 0;
    case 0x4000:
        r = osEepromProbe((s32)contStartMesgQ);
        break;
    case 0x4001:
        r = osEepromLongRead((s32)contStartMesgQ, arg0->addr, arg0->len, arg0->size);
        break;
    case 0x4002:
        r = osEepromLongWrite((s32)contStartMesgQ, arg0->addr, arg0->len, arg0->size);
        break;
    default:
        return 0;
    }
    arg0->result = r;
    osSendMesg(arg0->queue, 0, 1);
    return 1;
}
