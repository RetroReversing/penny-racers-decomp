/* Same-name source lead: _n_loadBuffer in BattleTanx-Global-Assault; donor defaults. Destination verification required. */
Acmd *_n_loadBuffer(ALFx *r, s16 *curr_ptr, s32 buff, s32 count, Acmd *p)
{
    Acmd *ptr = p;
    s32 after_end, before_end;
    s16 *updated_ptr, *delay_end;

    delay_end = &r->base[r->length];

    if (curr_ptr < r->base)
        curr_ptr += r->length;
    updated_ptr = curr_ptr + count;

    if (updated_ptr > delay_end) {
        after_end = updated_ptr - delay_end;
        before_end = delay_end - curr_ptr;

        { Acmd *_a = (Acmd *) ptr++ ; _a->words.w0 = (((unsigned int)(((unsigned int)( 4  ) & ((0x01 << (  8 )) - 1)) << (  24 )))  | ((unsigned int)(((unsigned int)(   before_end << 1  ) & ((0x01 << (  12 )) - 1)) << (  12 )))  | ((unsigned int)(((unsigned int)(   buff  ) & ((0x01 << (  12 )) - 1)) << (  0 ))) ); _a->words.w1 = (unsigned int)(  osVirtualToPhysical(curr_ptr) ); } ;
        { Acmd *_a = (Acmd *) ptr++ ; _a->words.w0 = (((unsigned int)(((unsigned int)( 4  ) & ((0x01 << (  8 )) - 1)) << (  24 )))  | ((unsigned int)(((unsigned int)(   after_end << 1  ) & ((0x01 << (  12 )) - 1)) << (  12 )))  | ((unsigned int)(((unsigned int)(   buff + (before_end << 1)  ) & ((0x01 << (  12 )) - 1)) << (  0 ))) ); _a->words.w1 = (unsigned int)(  osVirtualToPhysical(r->base) ); } ;
    } else {
        { Acmd *_a = (Acmd *) ptr++ ; _a->words.w0 = (((unsigned int)(((unsigned int)( 4  ) & ((0x01 << (  8 )) - 1)) << (  24 )))  | ((unsigned int)(((unsigned int)(   count << 1  ) & ((0x01 << (  12 )) - 1)) << (  12 )))  | ((unsigned int)(((unsigned int)(   buff  ) & ((0x01 << (  12 )) - 1)) << (  0 ))) ); _a->words.w1 = (unsigned int)(  osVirtualToPhysical(curr_ptr) ); } ;
    }
    return ptr;
}
