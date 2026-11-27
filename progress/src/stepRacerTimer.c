void liftCopyFlags(s32 arg0);
extern s32 racerTimers;
extern s32 racerAnimFrames;

/* Advances one racer's timer; every 5 ticks it steps the animation frame, wrapping at 9. */
void stepRacerTimer(s32 racerIndex)
{
    s32 timerOffset;
    s32 animOffset;
    f32 counter;
    s32 index;

    index = racerIndex & 0xFFFF;
    liftCopyFlags(index);
    timerOffset = index * 100;
    counter = *(f32 *)((s8 *)&racerTimers + timerOffset);
    *(f32 *)((s8 *)&racerTimers + timerOffset) = (f32)(u16)((u32)counter + 1);
    if ((u16)(u32)*(f32 *)((s8 *)&racerTimers + (racerIndex & 0xFFFF) * 100) < 5)
    {
        return;
    }
    animOffset = (racerIndex & 0xFFFF) * 100;
    *(s32 *)((s8 *)&racerTimers + animOffset) = 0;
    timerOffset = animOffset;
    counter = *(f32 *)((s8 *)&racerAnimFrames + timerOffset);
    *(f32 *)((s8 *)&racerAnimFrames + timerOffset) = (f32)(u16)((u32)counter + 1);
    if ((u16)(u32)*(f32 *)((s8 *)&racerAnimFrames + (racerIndex & 0xFFFF) * 100) >= 9)
    {
        *(s32 *)((s8 *)&racerAnimFrames + (racerIndex & 0xFFFF) * 100) = 0;
    }
}
