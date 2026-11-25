extern u8 *D_80046DF4;
s32 _n_collectPVoices(void);
s32 _n_timeToSamplesNoRound(s32);
s32 __n_nextSampleTime(void *);
s32 n_alSavePull(s32, s32);

s32 n_alAudioFrame(s32 arg0, s32 *arg1, s32 arg2, s32 arg3)
{
    void *sp10;
    s32 t;
s32 __repair_result_t;
    s32 s0;
    s32 s1;
    s32 s2;
    s32 s3;

    s1 = arg3;
    s2 = arg0;
    s3 = arg2;
    if (*(s32 *)D_80046DF4 == 0)
    {
        *arg1 = 0;
    }
    else
    {
        __repair_result_t = __n_nextSampleTime(&sp10);
        *(s32 *)(D_80046DF4 + 0x28) = __repair_result_t;
        if ((__repair_result_t - *(s32 *)(D_80046DF4 + 0x2C)) < s1)
        {
            do
            {
                *(s32 *)(D_80046DF4 + 0x28) &= ~0xF;
                *(s32 *)((u8 *)sp10 + 0x10) += _n_timeToSamplesNoRound(((s32 (*)(void *))(*(s32 *)((u8 *)sp10 + 8)))(sp10));
                t = __n_nextSampleTime(&sp10);
                *(s32 *)(D_80046DF4 + 0x28) = t;
            } while ((t - *(s32 *)(D_80046DF4 + 0x2C)) < s1);
        }
        *(s32 *)(D_80046DF4 + 0x28) &= ~0xF;
        if (s1 > 0)
        {
            __repair_rows: {
                s0 = *(s32 *)(D_80046DF4 + 0x50);
                if (s1 < s0)
                {
                    s0 = s1;
                }
                *(s32 *)(D_80046DF4 + 0x54) = s3;
                s1 -= s0;
                s2 = n_alSavePull(*(s32 *)(D_80046DF4 + 0x2C), s2);
                s3 += s0 * 4;
                *(s32 *)(D_80046DF4 + 0x2C) += s0;
            }
if (s1 > 0) goto __repair_rows;
        }
        *arg1 = (s32)(s2 - arg0) >> 3;
        _n_collectPVoices();
    }
    return s2;
}
