#include "common_local_source_339302417284.h"

void func_8013AE60(s32);
extern char D_8011F32E[];

void func_8014C080(u16 arg0)
{
    u16 v;
    s32 off;

    func_8013AE60(arg0);
    off = arg0 * 100;
    v = *(u16 *)(D_8011F32E + off);
    *(u16 *)(D_8011F32E + off) = v + 8;
    if (*(u16 *)(D_8011F32E + off) >= 0x100) {
        *(u16 *)(D_8011F32E + off) = v - 0xF7;
    }
}
