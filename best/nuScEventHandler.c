extern void (*D_80046C50)(void *);
extern s32 D_8006FB2C;
extern s32 D_800DD894[];

s32 nuScEventBroadcast(void *);
s32 osRecvMesg(void *, s32 *, s32);

void nuScEventHandler(void) {
    s32 msg;

    D_8006FB2C = 0;
    while (1) {
        osRecvMesg(D_800DD894, &msg, 1);
        switch (msg) {
        case 0x29A:
            D_8006FB2C += 1;
            nuScEventBroadcast((u8 *)D_800DD894 - 0x74);
            break;
        case 0x29D:
            nuScEventBroadcast((u8 *)D_800DD894 - 0x72);
            if (D_80046C50 != NULL) {
                D_80046C50(D_800DD894);
            }
            break;
        }
    }
}
