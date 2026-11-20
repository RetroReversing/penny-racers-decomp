/* adapted from similar verified C in __osInsertTimer in V-RALLY-PAL (matched), with its names changed by decompdecomp */
typedef u64 OSTime;
typedef void *OSMesg;
typedef struct OSMesgQueue_s { void *mtqueue; void *fullqueue; s32 validCount; s32 first; s32 msgCount; OSMesg *msg; } OSMesgQueue;
typedef struct OSTimer_s { struct OSTimer_s *next; struct OSTimer_s *prev; OSTime interval; OSTime value; OSMesgQueue *mq; OSMesg msg; } OSTimer;
extern OSTimer *D_800470F0;
extern u32 __osDisableInt(void);
extern void func_8003EAE0(u32);

/* Inserts timer t into the sorted timer list D_800470F0 (a circular list with a sentinel
 * head). Each entry's value is the delay after the previous one, so t->value is made
 * relative to the entries before it. Returns the relative delay stored in t. Interrupts
 * are masked around the list update. */
OSTime __osInsertTimer(OSTimer* t) {
    OSTimer* timep;
    OSTime tim;
    u32 savedMask = __osDisableInt();

    timep = D_800470F0->next;
    tim = t->value;
    for (; timep != D_800470F0 && tim > timep->value; timep = timep->next) {
        tim -= timep->value;
    }

    t->value = tim;

    if (timep != D_800470F0) {
        timep->value -= tim;
    }

    t->next = timep;
    t->prev = timep->prev;
    timep->prev->next = t;
    timep->prev = t;
    func_8003EAE0(savedMask);
    return tim;
}
