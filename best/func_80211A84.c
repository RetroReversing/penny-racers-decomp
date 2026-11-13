extern u8 D_8011F2FD[];
extern u8 D_8011F308[];
extern f64 D_8021DDD0;
extern u8 D_8021EECC[];

void func_80211A84(s32 arg0) {
    f32 cur;
    f32 target;
    f32 next;
    s32 off;

    off = (u16)arg0 * 0x64;
    target = *(f32 *)(D_8011F308 + off);
    cur = *(f32 *)D_8021EECC;
    next = (target - cur) / 6.0f + cur;
    *(f32 *)D_8021EECC = next;
    if (((f64)target - D_8021DDD0) < (f64)next && (f64)next < ((f64)target + D_8021DDD0)) {
        *(f32 *)D_8021EECC = target;
        *(s32 *)(D_8021EECC + 0xD4) &= ~0x2000;
        D_8011F2FD[off] = 2;
    }
}
