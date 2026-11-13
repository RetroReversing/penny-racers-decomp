s64 func_80042690(f64 arg0) {
    f64 d;
    union { u32 * pointer; s32 value; } __repair_phase_storage;
    u32 hi;
    u32 lo;
    
    s32 shift;
    u64 m;

    d = arg0;
    __repair_phase_storage.pointer = (u32 *)&d;
    hi = __repair_phase_storage.pointer[0];
    lo = __repair_phase_storage.pointer[1];
    __repair_phase_storage.value = (hi >> 20) & 0x7FF;
    if (__repair_phase_storage.value < 0x3FF) {
        return 0;
    }
    shift = __repair_phase_storage.value - 0x3FF;
    if (shift >= 0x40) {
        return 0x8000000000000000ULL;
    }
    m = ((u64)((hi & 0xFFFFF) | 0x100000) << 32) | lo;
    shift -= 52;
    if (shift < 0) {
        m >>= -shift;
    } else {
        m <<= shift;
    }
    if (hi & 0x80000000) {
        m = -m;
    }
    return m;
}
