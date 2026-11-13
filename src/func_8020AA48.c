void func_80209D74(s32);
extern u32 D_8011F340;
void func_8020AA48(s32 arg0)
{
  s32 temp_a0;
 do { temp_a0 = arg0 & 0xFFFF; } while (0);
  if ((*(*((u8 **) (((u8 *) (&D_8011F340)) + (temp_a0 * 0x64))))) == 0)
  {
    func_80209D74(temp_a0);
  }
}
