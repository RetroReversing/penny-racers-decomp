extern u8 D_8011F2F0;
extern u8 D_8011F2FC;
extern u16 D_8011F32E;
extern u16 D_801C7074;
extern u8 D_801C707B;
extern s8 D_801C7AB5;
extern s8 D_801CA138;
inline static u8 *inline_fn(s32 arg0)
{
  return (&D_8011F2F0) + arg0;
}

void func_801B4B6C(s32 arg0)
{
  s32 off;
  if (((*((&D_8011F32E) + (D_801C7074 * 0x64))) == 0x10) && (D_801C707B == 1))
  {
    if (D_801CA138 != 0)
    {
      off = (arg0 & 0xFFFF) * 0x64;
      if ((*inline_fn(off)) < 6U)
      {
        goto block_7;
      }
      goto block_8;
    }
    if (D_801C7AB5 != 0)
    {
      off = (arg0 & 0xFFFF) * 0x64;
      if ((*inline_fn(off)) < 6U)
      {
        block_7:
        *inline_fn(off) = (*inline_fn(off)) + 1;

        *((&D_8011F2FC) + off) = (*((&D_8011F2FC) + off)) + 1;
        return;
      }
      block_8:
      off = (arg0 & 0xFFFF) * 0x64;

      if (((u32) ((*inline_fn(off)) - 6)) < 6U)
      {
        *inline_fn(off) = (*inline_fn(off)) + 1;
        *((&D_8011F2FC) + off) = (*((&D_8011F2FC) + off)) - 1;
      }
    }
    else
    {
s32 __repair_branch_off_0;

      __repair_branch_off_0 = (arg0 & 0xFFFF) * 0x64;
      *inline_fn(__repair_branch_off_0) = 0;
      *((&D_8011F2FC) + __repair_branch_off_0) = 0;
    }
  }
}

