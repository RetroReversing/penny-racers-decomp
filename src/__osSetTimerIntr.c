/* adapted from similar verified C in __osSetTimerIntr in V-RALLY-PAL (matched), with its names changed by decompdecomp */
typedef u64 OSTime;
typedef struct OSTimer_s OSTimer;
extern u32 __osDisableInt(void);
extern void func_8003EAE0(u32);
extern u32 func_8003EA20(void);
extern void func_8003EBC0(u32);
extern u32 D_800DA1DC;

/* Schedules the next timer interrupt: the compare value is the current count plus tim.
 * Interrupts are masked while the compare register is written. */
void __osSetTimerIntr(OSTime tim)
{
    OSTime newCompare;
    u32 savedMask;

    savedMask = __osDisableInt();
    D_800DA1DC = func_8003EA20();
    newCompare = D_800DA1DC + tim;
    func_8003EBC0(newCompare);
    func_8003EAE0(savedMask);
}
