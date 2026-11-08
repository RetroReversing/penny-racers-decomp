/* identical to __readVarLen in South Park Rally (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_8002DAE0 in South Park (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_0028F98C in turok2-decomp (local match library) (matched), with its names changed by decompdecomp */
s32 func_8002DAE0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s0;
    var_s0 = (u8) func_8002DA28(arg0, arg1);
    if (var_s0 & 0x80) {
        var_s0 &= 0x7F;
        do {
            temp_v0 = (u8) func_8002DA28(arg0, arg1);
            var_s0 = (var_s0 << 7) + (temp_v0 & 0x7F);
        } while (temp_v0 & 0x80);
    }
    return var_s0;
}
