extern u8 racerTimerFlags[];
extern u8 sNodeTable[];
extern u8 D_8011F350[];

void emitRacerPrimColor(u32 **arg0, s32 arg1) {
    s32 off;
    u32 *buf;
    u8 *src;

    off = (arg1 & 0xFFFF) * 100;
    if (racerTimerFlags[off] != 0 && *(u8 *)*(void **)(sNodeTable + off) != 0) {
        src = *(u8 **)(D_8011F350 + off);
        buf = *arg0;
        *arg0 = buf + 2;
        buf[0] = 0xFA000000;
        buf[1] = (src[0x17] << 24) | (src[0x18] << 16) | (src[0x19] << 8) | racerTimerFlags[off];
    }
}
