/* adapted from similar verified C in stepRacerTimer (matched), with its names changed by decompdecomp */
void liftCopyFlags(s32 arg0);
extern s32 racerTimers;
extern s32 racerAnimFrames;

/* Steps a racer's animation: the timer advances each call, and every 11 ticks the frame
 * counter advances and wraps back to 0 after 9 frames. */
void advanceRacerAnim(s32 racerIndex)
{
    s32 offset;
    s32 slotOffset;
    f32 timer;
    s32 idx;

    idx = racerIndex & 0xFFFF;
    liftCopyFlags(idx);
    offset = idx * 100;
    timer = *(f32 *)((s8 *)&racerTimers + offset);
    *(f32 *)((s8 *)&racerTimers + offset) = (f32)(u16)((u32)timer + 1);
    if ((u16)(u32)*(f32 *)((s8 *)&racerTimers + (racerIndex & 0xFFFF) * 100) < 11)
    {
        return;
    }
    slotOffset = (racerIndex & 0xFFFF) * 100;
    *(s32 *)((s8 *)&racerTimers + slotOffset) = 0;
    offset = slotOffset;
    timer = *(f32 *)((s8 *)&racerAnimFrames + offset);
    *(f32 *)((s8 *)&racerAnimFrames + offset) = (f32)(u16)((u32)timer + 1);
    if ((u16)(u32)*(f32 *)((s8 *)&racerAnimFrames + (racerIndex & 0xFFFF) * 100) >= 9)
    {
        *(s32 *)((s8 *)&racerAnimFrames + (racerIndex & 0xFFFF) * 100) = 0;
    }
}
