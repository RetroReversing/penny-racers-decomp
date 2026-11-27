extern u8 blockDirection;
extern void *trackInfo;
extern u8 trackPointIndexByCell[];

u8 func_801C5664(u8 *arg0, u8 *arg1, s32 arg2)
{
    s8 a3 = 0;
    s8 a0 = 0;
    s32 r;
    u8 tmp;
    if (blockDirection == (arg2 & 0xFF)) {
        if (blockDirection == 0) {
            tmp = *arg0;
            a0 = tmp;
            tmp = *arg1;
            a3 = tmp - 2;
        } else if ((arg2 & 0xFF) == 1) {
            tmp = *arg0;
            a0 = tmp - 2;
            a3 = *arg1;
        } else if ((arg2 & 0xFF) == 2) {
            tmp = *arg0;
            a0 = tmp;
            tmp = *arg1;
            a3 = tmp + 2;
        } else if ((arg2 & 0xFF) == 3) {
            tmp = *arg0;
            a0 = tmp + 2;
            a3 = *arg1;
        }
    } else {
        if ((arg2 & 0xFF) == 0) {
            tmp = *arg0;
            a0 = tmp;
            tmp = *arg1;
            a3 = tmp - 1;
        } else if ((arg2 & 0xFF) == 1) {
            tmp = *arg0;
            a0 = tmp - 1;
            a3 = *arg1;
        } else if ((arg2 & 0xFF) == 2) {
            tmp = *arg0;
            a0 = tmp;
            tmp = *arg1;
            a3 = tmp + 1;
        } else if ((arg2 & 0xFF) == 3) {
            tmp = *arg0;
            a0 = tmp + 1;
            a3 = *arg1;
        }
    }
    if (trackPointIndexByCell[a0 + 24 * a3] == 0xFF) {
        *arg0 = 0x7F;
        *arg1 = 0x7F;
        return *((u8 *)trackInfo + 2);
    }
    return trackPointIndexByCell[a0 + 24 * a3];
}
