s32 func_8012A384(void *, s32);
extern u8 D_8011F2F0[];
extern u16 D_80232840[];
extern u16 D_80233EC0;
void func_8012A950(u16 arg0)
{
  u16 i;
  for (i = 0; i < D_80232840[arg0]; i++) {
    func_8012A384((void *)(D_8011F2F0 + 0x64 * (D_80233EC0 + i)), i);
  }
}
