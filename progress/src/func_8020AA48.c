void updateCarouselEntry(s32);
extern u32 sPathNodes;
void func_8020AA48(s32 arg0)
{
  s32 temp_a0;
 do { temp_a0 = arg0 & 0xFFFF; } while (0);
  if ((*(*((u8 **) (((u8 *) (&sPathNodes)) + (temp_a0 * 0x64))))) == 0)
  {
    updateCarouselEntry(temp_a0);
  }
}
