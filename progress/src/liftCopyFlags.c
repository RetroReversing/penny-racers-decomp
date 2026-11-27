typedef struct {u8 index, pad; u16 flags[4]; u8 rest[90];} Record100;
extern Record100 D_8011F2F0[];
extern u16 D_80233EC0;
void liftCopyFlags(u16 arg0) {
 s32 i;
 for(i=0;i<4;i++) {
  if(D_8011F2F0[D_80233EC0+D_8011F2F0[arg0].index].flags[i] & 8)
   D_8011F2F0[arg0].flags[i] |= 8;
  else D_8011F2F0[arg0].flags[i] &= ~8;
 }
}
