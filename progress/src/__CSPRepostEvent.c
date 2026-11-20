extern s32 func_800339C0(s32);
extern void alLink(void *arg0, void *arg1);

void __CSPRepostEvent(u8 *arg0, u8 *arg1) {
    u8 **var;
    u8 *temp_a2;
    s32 temp_s0;
    s32 a0v;
    s32 v1v;

    temp_s0 = func_800339C0(1);
    var = (u8 **)(arg0 + 8);
    if (var != 0) {
        for (;;) {
            temp_a2 = *var;
            if (temp_a2 == 0) {
                alLink(arg1, var);
                break;
            }
            a0v = *(s32 *)(arg1 + 8);
            v1v = *(s32 *)(temp_a2 + 8);
            if (a0v < v1v) {
                *(s32 *)(temp_a2 + 8) = v1v - a0v;
                alLink(arg1, var);
                break;
            }
            *(s32 *)(arg1 + 8) = a0v - v1v;
            var = (u8 **)*var;
            if (var == 0) {
                break;
            }
        }
    }
    func_800339C0(temp_s0);
}
