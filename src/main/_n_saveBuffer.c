#include "common_local_source_339302416705.h"

Acmd *_n_saveBuffer(ALFx *r, s16 *curr_ptr, s32 buff, Acmd *p)
{
    Acmd *ptr = p;
    s32 after_end, before_end;
    s16 *updated_ptr, *delay_end;
    delay_end = &r->base[r->length];
    if (curr_ptr < r->base) curr_ptr += r->length;
    updated_ptr = curr_ptr + 184;
    if (updated_ptr > delay_end) {
        after_end = updated_ptr - delay_end;
        before_end = delay_end - curr_ptr;
        { Acmd *a = ptr++; a->words.w0 = 0x06000000 | (((before_end << 1) & 0xfff) << 12) | (buff & 0xfff); a->words.w1 = osVirtualToPhysical(curr_ptr); }
        { Acmd *a = ptr++; a->words.w0 = 0x06000000 | (((after_end << 1) & 0xfff) << 12) | ((buff + (before_end << 1)) & 0xfff); a->words.w1 = osVirtualToPhysical(r->base); }
    } else {
        Acmd *a = ptr++; a->words.w0 = 0x06170000 | (buff & 0xfff); a->words.w1 = osVirtualToPhysical(curr_ptr);
    }
    return ptr;
}
