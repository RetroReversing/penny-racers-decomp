u64 func_800422F8(u64 a, u64 b);
u64 func_800423F4(u64 a, u64 b);

s64 func_800424C0(s64 a, s64 b) {
    s64 neg;
    s64 r;

    neg = a ^ b;
    if (a < 0) {
        a = ~a + 1;
    }
    if (b < 0) {
        b = ~b + 1;
    }
    if (neg < 0) {
        if (b >> 32) {
            r = func_800422F8(a, b);
        } else {
            r = func_800423F4(a, b);
        }
        r = ~r + 1;
    } else {
        if (b >> 32) {
            r = func_800422F8(a, b);
        } else {
            r = func_800423F4(a, b);
        }
    }
    return r;
}
