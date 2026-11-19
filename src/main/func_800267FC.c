#include "common_local_source_339302416542.h"

extern s32 D_80046838;
void osViSetYScale(f32 arg0);
s32 nuGfxDisplayOff(void);
void osViBlack(s32 arg0);

void func_800267FC(void) {
    osViSetYScale(1.0f);
    D_80046838 = 1;
    nuGfxDisplayOff();
    osViBlack(1);
}
