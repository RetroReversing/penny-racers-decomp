#include "common_local_source_339302417161.h"

extern char D_8011F2FC[];
extern char D_8011F2FD[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F320[];
extern char D_8011F324[];
extern char D_8011F328[];
extern char D_8011F334[];
extern char D_8011F338[];
extern char D_8011F33C[];
#define F(s, i) (*(f32 *)((s) + (i)))
void func_8013AF08(s32 arg0)
{
  s32 i = (arg0 & 0xFFFF) * 0x64;
  if (*(u8 *)(D_8011F2FC + i) >= 0x33U)
  {
    F(D_8011F320, i) = F(D_8011F320, i) + 0.01f;
    F(D_8011F324, i) = F(D_8011F324, i) + 0.01f;
    F(D_8011F328, i) = F(D_8011F328, i) + 0.01f;
    *(u8 *)(D_8011F2FC + i) = *(u8 *)(D_8011F2FC + i) - 8;
    F(D_8011F308, i) = F(D_8011F308, i) + F(D_8011F334, i);
    F(D_8011F30C, i) = F(D_8011F30C, i) + F(D_8011F338, i);
    F(D_8011F310, i) = F(D_8011F310, i) + F(D_8011F33C, i);
    F(D_8011F334, i) = F(D_8011F334, i) * 0.95f;
    F(D_8011F338, i) = F(D_8011F338, i) * 0.6f;
    F(D_8011F33C, i) = F(D_8011F33C, i) * 0.95f;
    return;
  }
  *(D_8011F2FD + ((arg0 & 0xFFFF) * 0x64)) = 2;
}
