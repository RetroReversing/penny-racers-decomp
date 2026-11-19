/* identical to func_8000A900 in Resident Evil II (local match library) (matched), with its names changed by decompdecomp */
s32 __osCheckId(void *arg0);
s32 __osPfsRWInode(void *arg0, u16 *arg1, s32 arg2, s32 arg3);
typedef struct {
    u32 unk0;
    u8 pad[0x5C];
    s32 unk60;
    u8 unk64;
} S0A900;

s32 __osCheckId(void *arg0);
s32 __osPfsRWInode(void *arg0, u16 *arg1, s32 arg2, s32 arg3);

s32 osPfsFreeBlocks(S0A900 *arg0, s32 *arg1) {
    u16 buf[128];
    u32 i;
    s32 j;
    s32 start;
    u32 k;
    u32 count;
    s32 r;

    count = 0;
    if ((arg0->unk0 & 1) == 0) {
        return 5;
    }
    if (__osCheckId(arg0) == 2) {
        return 2;
    }
    i = 0;
    if (count < arg0->unk64) {
        do {
            k = i & 0xFF;
            r = __osPfsRWInode(arg0, buf, 0, k);
            if (r != 0) {
                return r;
            }
            start = k ? 1 : arg0->unk60;
            for (j = start; j < 0x80; j++) {
                count += (buf[j] == 3);
            }
            i++;
        } while ((i & 0xFF) < arg0->unk64);
    }
    *arg1 = count << 8;
    return 0;
}
