#include "common.h"

extern u8 D_800473F0[];
extern u8 D_8005FCC0[];
extern u8 D_80061CC0[];
extern u8 D_80063CC0[];
extern u8 D_800DDE8C[];
extern s16 D_800DD822;
extern s32 D_800DDE88;
extern s32 D_800DDE90;
extern s32 D_800DDE94;
extern s32 D_800DDE98;
extern void nuScEventHandler(void *);
extern void nuScExecuteAudio(void *);
extern void nuScExecuteGraphics(void *);

void nuScCreateScheduler(s32 arg0, s32 arg1) {
    u8 *base;
    u8 *temp_s2;
    u8 *temp_s4;
    u8 *temp_s3;
    u8 *temp_s1;
    u8 *temp_s2_2;
    u8 *temp_s2_3;
    u8 *temp_s0;
    s32 temp_s5;

    base = (u8 *)D_800DDE8C;
    temp_s2 = base - 0x5F8;
    temp_s5 = arg1 & 0xFF;
    *(s32 *)base = 0;
    D_800DDE90 = 0;
    D_800DDE94 = 0;
    D_800DDE88 = 0;
    *(s16 *)(base - 0x66C) = 1;
    D_800DD822 = 2;
    D_800DDE98 = temp_s5;
    osCreateMesgQueue(temp_s2, base - 0x5E0, 8);
    temp_s4 = base - 0x5C0;
    osCreateMesgQueue(temp_s4, base - 0x5A8, 8);
    temp_s3 = base - 0x588;
    osCreateMesgQueue(temp_s3, base - 0x570, 8);
    osCreateMesgQueue(base - 0x630, base - 0x618, 8);
    osCreateMesgQueue(base - 0x668, base - 0x650, 8);
    osCreateMesgQueue(base - 0x550, base - 0x538, 8);
    osCreateViManager(0xFE);
    osViSetMode(((arg0 & 0xFF) * 0x50) + D_800473F0);
    osViBlack(1);
    osViSetEvent(temp_s2, 0x29A, temp_s5);
    osSetEventMesg(4, temp_s4, 0x29B);
    osSetEventMesg(9, temp_s3, 0x29C);
    osSetEventMesg(0xE, temp_s2, 0x29D);
    temp_s2_2 = base - 0x514;
    temp_s1 = base - 0x66C;
    osCreateThread(temp_s2_2, 0x13, nuScEventHandler, temp_s1, D_8005FCC0, 0x78);
    osStartThread(temp_s2_2);
    temp_s2_3 = base - 0x364;
    osCreateThread(temp_s2_3, 0x12, nuScExecuteAudio, temp_s1, D_80061CC0, 0x6E);
    osStartThread(temp_s2_3);
    temp_s0 = base - 0x1B4;
    osCreateThread(temp_s0, 0x11, nuScExecuteGraphics, temp_s1, D_80063CC0, 0x64);
    osStartThread(temp_s0);
}
