#include "common_local_source_339302416699.h"

/* Same-name source lead: n_alResamplePull in BattleTanx-Global-Assault; donor defaults. Destination verification required. */
Acmd *n_alResamplePull(N_PVoice *e, s16 *outp, Acmd *p)
{
    Acmd *ptr = p;
    s16 inp;
    s32 inCount;
    s32 incr;
    f32 finCount;

    inp = 0x170 ;

    if (e->rs_upitch) {
        ptr = n_alAdpcmPull(e, &inp, 184 , p);
        {
            Acmd *_a = ptr++;
            _a->words.w0 = ((unsigned int)(((unsigned int)( 10  ) & ((0x01 << (  8 )) - 1)) << (  24 )))  | ((unsigned int)(((unsigned int)( inp ) & ((0x01 << (  24 )) - 1)) << (  0 ))) ;
            _a->words.w1 = ((unsigned int)(((unsigned int)( *outp ) & ((0x01 << (  16 )) - 1)) << (  16 )))  | ((unsigned int)(((unsigned int)( 184  << 1 ) & ((0x01 << (  16 )) - 1)) << (  0 ))) ;
        }
    } else {
        if (e->rs_ratio > 1.99996 )
            e->rs_ratio = 1.99996 ;
        e->rs_ratio = (s32)(e->rs_ratio * 0x8000 ) / (f32)0x8000 ;
        finCount = e->rs_delta + (e->rs_ratio * (f32)184 );
        inCount = (s32)finCount;
        e->rs_delta = finCount - (f32)inCount;
        ptr = n_alAdpcmPull(e, &inp, inCount, p);
        incr = (s32)(e->rs_ratio * 0x8000 );
        {
            Acmd *_a = ptr++;
            _a->words.w0 = ((unsigned int)(((unsigned int)( 5  ) & ((0x01 << (  8 )) - 1)) << (  24 )))  | ((unsigned int)(((unsigned int)( osVirtualToPhysical(e->rs_state) ) & ((0x01 << (  24 )) - 1)) << (  0 ))) ;
            _a->words.w1 = ((unsigned int)(((unsigned int)( e->rs_first ) & ((0x01 << (  2 )) - 1)) << (  30 )))  | ((unsigned int)(((unsigned int)( incr ) & ((0x01 << (  16 )) - 1)) << (  14 )))  | ((unsigned int)(((unsigned int)( inp ) & ((0x01 << (  12 )) - 1)) << (  2 ))) ;
        }
        e->rs_first = 0;
    }
    return ptr;
}
