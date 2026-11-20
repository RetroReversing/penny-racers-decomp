#include "common_local_source_339302417465.h"

typedef struct {
    u16 st;
    u8 pad[98];
} Slot;

void func_8014A4C8(int a, int b, int c, int d, int e);
void func_801CA140(int a);
void func_801CA468(int a, int b);
void func_801CABF4(int a, int b, int c, int d, char *e, int f, int g, char *h, int i, int j, int k, int l);
extern Slot D_8011F32E[];
extern s32 D_801C586C[];
extern s32 D_801C5B3C[];
extern u16 D_801C6BB4;
extern u16 D_801C7066;
extern u8 D_801C7070;
extern u16 D_801C7074;
extern u16 D_801C7078;
extern u8 D_801C707B;
extern u8 *D_801C7AB0;
extern u8 D_801C7AB4;
extern s8 D_801C7AB5;
extern u8 D_801C7ABC;
extern char D_801CF4C8[];
extern char D_801D4390[];

void func_801B4CF8(int arg0) {
    u8 var_v1;

    if (D_8011F32E[D_801C7074].st == 0x10 && D_801C707B == 1) {
        func_801CA140(arg0);
        func_801CA468(arg0, 0xA0);
        func_8014A4C8(arg0, 0x36, 0x45, 0xD, 0x17);
        func_8014A4C8(arg0, 0x36, 0xA3, 0xD, 0x18);
        func_8014A4C8(arg0, 0xB2, 0x45, 0xD, 0x19);
        func_8014A4C8(arg0, 0xB2, 0xA3, 0xD, 0xB);
        func_801CA468(arg0, 0xFF);
        if (*D_801C7AB0 == 4) {
            var_v1 = D_801C7AB4 - 0x2E;
        } else {
            var_v1 = D_801C7AB4;
        }
        if ((u32)(var_v1 & 0xFF) < 0xA) {
            func_801CABF4(arg0, 0x43, 0x93, 0xA, D_801D4390, D_801C5B3C[(s8)var_v1], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        } else if ((u32)((var_v1 - 0xA) & 0xFF) < 0x20) {
            func_801CABF4(arg0, 0x3E, 0x93, 0xA, D_801D4390, D_801C5B3C[(s8)var_v1], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        } else if ((u32)((var_v1 - 0x2A) & 0xFF) < 4) {
            func_801CABF4(arg0, 0x48, 0x93, 0xA, D_801D4390, D_801C5B3C[(s8)var_v1], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        }
        func_801CABF4(arg0, 0x93, 0x93, 0xA, D_801D4390, D_801C586C[D_801C7070 / 60], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        if (D_801C7AB5 == 0) {
            if (D_801C7078 != D_801C6BB4 && D_801C7078 != D_801C7066) {
                func_8014A4C8(arg0, 0x36, 0x6F, 0xD, 0xC);
                func_8014A4C8(arg0, 0xB3, 0x6F, 0xD, 0xD);
            }
            if (D_801C7ABC & 1) {
                func_8014A4C8(arg0, 0x71, 0x47, 0xD, 0xE);
            }
            if (D_801C7ABC & 2) {
                func_8014A4C8(arg0, 0x71, 0x9F, 0xD, 0xF);
            }
        }
    }
}
