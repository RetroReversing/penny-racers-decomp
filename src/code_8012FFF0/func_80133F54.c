#include "common_local_source_339302417142.h"

extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
extern u8 D_8011F2FD[];
typedef struct { f32 f0; u8 pad[96]; } Slot_8011F334;
extern Slot_8011F334 D_8011F334[];
extern u8 D_8022AFE9[];

void func_80133F54(u16 arg0) {
    if (D_8022AFE9[D_8011F2F0[arg0 * 0x64] * 0x8F0] == 5) {
        D_8011F2FD[arg0 * 0x64] = 2;
        return;
    }
    if (D_8011F2FC[arg0 * 0x64] == 3) {
        if ((u16)(u32)D_8011F334[arg0].f0 < 0x9E) {
            D_8011F334[arg0].f0 = (f32)(u16)((u32)D_8011F334[arg0].f0 + 1);
        } else {
            D_8011F2FD[arg0 * 0x64] = 2;
        }
    } else {
        if ((u16)(u32)D_8011F334[arg0].f0 < 0x166) {
            D_8011F334[arg0].f0 = (f32)(u16)((u32)D_8011F334[arg0].f0 + 1);
        } else {
            D_8011F2FD[arg0 * 0x64] = 2;
        }
    }
}
