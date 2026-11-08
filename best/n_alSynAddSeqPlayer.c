s32 func_800339C0();
extern void *D_80046DF4;
void n_alSynAddSeqPlayer(void *arg0)
{
  s32 temp_v0;
  temp_v0 = func_800339C0(1);
 do { *((s32 *) (((char *) arg0) + 0x10)) = (s32) (*((s32 *) (((char *) D_80046DF4) + 0x2C))); *((void **) (((char *) arg0) + 0)) = (void *) (*((void **) (((char *) D_80046DF4) + 0))); *((void **) (((char *) D_80046DF4) + 0)) = arg0; if ((*((void **) (((char *) D_80046DF4) + 4))) == NULL) { *((void **) (((char *) D_80046DF4) + 4)) = arg0; } else if ((*((void **) (((char *) D_80046DF4) + 8))) == NULL) { *((void **) (((char *) D_80046DF4) + 8)) = arg0; } } while (0);
  func_800339C0(temp_v0);
}
