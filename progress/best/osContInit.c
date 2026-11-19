extern s32 D_80048110;
extern u8 D_8006FE78;
extern s8 D_80092C04;
extern s32 D_8006F990;
extern s32 D_800DDEA0;
extern s32 D_800DA1B0;
u64 osGetTime(void);
s32 osCreateMesgQueue(void *mq, void *msg, s32 count);
s32 osSetTimer(void *timer, u64 countdown, u64 interval, void *mq, void *msg);
s32 osRecvMesg(void *mq, void *msg, s32 flags);
s32 __osPackRequestData(s32 arg);
void func_8003F350(s32 arg0, void *arg1);
void func_8003A9AC(void *arg0, void *arg1);
void func_8003F410(void);

s32 osContInit(void *arg0, void *arg1, void *arg2) {
    u8 timer[32];
    u8 queue[24];
    s32 msg;
    s32 result;
    u64 now;

    if (D_80048110) {
        return 0;
    }
    D_80048110 = 1;
    now = osGetTime();
    if (now < 0x165A0BCULL) {
        osCreateMesgQueue(queue, &msg, 1);
        osSetTimer(timer, 0x165A0BCULL - now, 0, queue, &msg);
        osRecvMesg(queue, &msg, 1);
    }
    D_8006FE78 = 4;
    __osPackRequestData(0);
    func_8003F350(1, &D_8006F990);
    osRecvMesg(arg0, &msg, 1);
    func_8003F350(0, &D_8006F990);
    result = osRecvMesg(arg0, &msg, 1);
    func_8003A9AC(arg1, arg2);
    D_80092C04 = 0;
    func_8003F410();
    osCreateMesgQueue(&D_800DDEA0, &D_800DA1B0, 1);
    return result;
}
