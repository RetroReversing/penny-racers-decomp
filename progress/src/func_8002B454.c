void func_8002D42C(s32 a, u16 *b);
void func_8002B534(void *a, u16 *b);
void __CSPHandleMetaMsg(void *a, u16 *b);
void alEvtqPostEvent(void *a, u16 *b, s32 c);
void __CSPPostNextSeqEvent(void *a);
void func_800346B0(const char *a, const char *b, s32 c);

void func_8002B454(void *arg0) {
    struct { u16 v; s32 pad[3]; } L;
    s32 idx;
#define sp10 L.v

    if (*(s32 *)((u8 *)arg0 + 0x18) != 0) {
        func_8002D42C(*(s32 *)((u8 *)arg0 + 0x18), &sp10);
        idx = (s16)(sp10 - 1);
        if ((u32)idx < 0x14) {
            switch (idx) {
            case 0:
                func_8002B534(arg0, &sp10);
                break;
            case 1:
            case 4: case 5: case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15: case 16:
            case 17: case 18: case 19:
                break;
            case 2:
                __CSPHandleMetaMsg(arg0, &sp10);
                break;
            case 3:
                *(s32 *)((u8 *)arg0 + 0x2C) = 2;
                sp10 = 0x10;
                alEvtqPostEvent((u8 *)arg0 + 0x48, &sp10, 0x7FFFFFFF);
                return;
            }
            __CSPPostNextSeqEvent(arg0);
        } else {
            func_800346B0("EX", "n_csplayer.c", 0x161);
        }
    }
}
