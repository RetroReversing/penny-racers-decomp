#include "common.h"

s32 osAiGetLength(void)
{
    return *(vu32 *)0xA4500004;
}
