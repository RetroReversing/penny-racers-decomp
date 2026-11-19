#include "common_local_source_339302417236.h"

extern u16 D_8021E1A4[];
extern u8 D_80168CF8[];

u8 func_80148230(void) {
    return D_80168CF8[(D_8021E1A4[0] & 1) + ((D_8021E1A4[-1] & 3) << 1)];
}
