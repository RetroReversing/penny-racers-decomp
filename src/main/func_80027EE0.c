#include "common.h"

s16 func_8002C508(s32, s32);
void func_8002D030(s16);
void n_alSndpDeallocate(s16);
s32 n_alSndpGetState(void);
void n_alSndpPlay(void);
extern void *D_80046C34;
extern s16 *D_80046C38;
extern u32 D_8006FEE4;

s16 func_80027EE0(s32 arg0) {
    s32 i;
    s16 temp_v0;
    s32 *tbl;

    tbl = *(s32 **)((u8 *)(*(void **)((u8 *)D_80046C34 + 4)) + 0xC);
    i = 0;
    while (i < D_8006FEE4) {
        if (D_80046C38[i] != -1) {
            func_8002D030(D_80046C38[i]);
            if (n_alSndpGetState() == 0) {
                n_alSndpDeallocate(D_80046C38[i]);
                D_80046C38[i] = -1;
                break;
            }
        } else {
            break;
        }
        i++;
    }
    if (i == D_8006FEE4) {
        return -1;
    }
    temp_v0 = func_8002C508(tbl[arg0 + 4], arg0);
    D_80046C38[i] = temp_v0;
    if (temp_v0 != -1) {
        func_8002D030(temp_v0);
        n_alSndpPlay();
    }
    return D_80046C38[i];
}
