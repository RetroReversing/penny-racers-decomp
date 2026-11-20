#include "common_local_source_339302416783.h"

typedef u64 OSTime;
typedef void *OSMesg;
typedef struct OSMesgQueue_s OSMesgQueue;
typedef struct OSTimer_s {
    struct OSTimer_s *next;
    struct OSTimer_s *prev;
    OSTime interval;
    OSTime value;
    OSMesgQueue *mq;
    OSMesg msg;
} OSTimer;

extern OSTimer *D_800470F0;
extern u32 D_800DA1DC;
extern s32 osSendMesg(OSMesgQueue *, OSMesg, s32);
extern void __osSetTimerIntr(OSTime);
extern void func_8003EBC0(u32);
extern u32 func_8003EA20(void);
extern OSTime func_80034530(OSTimer *);

void __osTimerInterrupt(void) {
    OSTimer* t;
    u32 count;
    u32 elapsed_cycles;

    if (D_800470F0->next == D_800470F0) {
        return;
    }
    for (;;) {
        t = D_800470F0->next;

        if (t == D_800470F0) {
            func_8003EBC0(0);
            D_800DA1DC = 0;
            break;
        }

        count = func_8003EA20();
        elapsed_cycles = count - D_800DA1DC;
        D_800DA1DC = count;

        if (elapsed_cycles < t->value) {
            t->value -= elapsed_cycles;
            __osSetTimerIntr(t->value);
            break;
        }

        t->prev->next = t->next;
        t->next->prev = t->prev;
        t->next = 0;
        t->prev = 0;

        if (t->mq != 0) {
            osSendMesg(t->mq, t->msg, 0);
        }

        if (t->interval != 0) {
            t->value = t->interval;
            func_80034530(t);
        }
    }
}
