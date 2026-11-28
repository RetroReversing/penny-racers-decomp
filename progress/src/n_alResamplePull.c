/* Appends the ADPCM decode or resample commands for one voice to the audio command list. Returns the new list end. */
Acmd *n_alResamplePull(N_PVoice *voice, s16 *dmemOut, Acmd *cmdList)
{
    Acmd *cmd = cmdList;
    s16 dmemIn;
    s32 inSamples;
    s32 pitchIncr;
    f32 exactSamples;

    dmemIn = 0x170 ;

    if (voice->rs_upitch) {
        cmd = n_alAdpcmPull(voice, &dmemIn, 184 , cmdList);
        {
            Acmd *_a = cmd++;
            _a->words.w0 = ((unsigned int)(((unsigned int)( 10  ) & ((0x01 << (  8 )) - 1)) << (  24 )))  | ((unsigned int)(((unsigned int)( dmemIn ) & ((0x01 << (  24 )) - 1)) << (  0 ))) ;
            _a->words.w1 = ((unsigned int)(((unsigned int)( *dmemOut ) & ((0x01 << (  16 )) - 1)) << (  16 )))  | ((unsigned int)(((unsigned int)( 184  << 1 ) & ((0x01 << (  16 )) - 1)) << (  0 ))) ;
        }
    } else {
        if (voice->rs_ratio > 1.99996 )
            voice->rs_ratio = 1.99996 ;
        voice->rs_ratio = (s32)(voice->rs_ratio * 0x8000 ) / (f32)0x8000 ;
        exactSamples = voice->rs_delta + (voice->rs_ratio * (f32)184 );
        inSamples = (s32)exactSamples;
        voice->rs_delta = exactSamples - (f32)inSamples;
        cmd = n_alAdpcmPull(voice, &dmemIn, inSamples, cmdList);
        pitchIncr = (s32)(voice->rs_ratio * 0x8000 );
        {
            Acmd *_a = cmd++;
            _a->words.w0 = ((unsigned int)(((unsigned int)( 5  ) & ((0x01 << (  8 )) - 1)) << (  24 )))  | ((unsigned int)(((unsigned int)( osVirtualToPhysical(voice->rs_state) ) & ((0x01 << (  24 )) - 1)) << (  0 ))) ;
            _a->words.w1 = ((unsigned int)(((unsigned int)( voice->rs_first ) & ((0x01 << (  2 )) - 1)) << (  30 )))  | ((unsigned int)(((unsigned int)( pitchIncr ) & ((0x01 << (  16 )) - 1)) << (  14 )))  | ((unsigned int)(((unsigned int)( dmemIn ) & ((0x01 << (  12 )) - 1)) << (  2 ))) ;
        }
        voice->rs_first = 0;
    }
    return cmd;
}
