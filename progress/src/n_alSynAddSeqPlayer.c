s32 func_800339C0();
extern void *D_80046DF4;
typedef struct { void * value; } __repair_field_0;
void n_alSynAddSeqPlayer(void *arg0)
{
  s32 temp_v0;
  temp_v0 = func_800339C0(1);
 __repair_rows: { *((s32 *) (((char *) arg0) + 0x10)) = (s32) (*((s32 *) (((char *) D_80046DF4) + 0x2C))); ((__repair_field_0 *)arg0)->value = (void *) (((__repair_field_0 *)D_80046DF4)->value); ((__repair_field_0 *)D_80046DF4)->value = arg0; if ((*((void **) (((char *) D_80046DF4) + 4))) == NULL) { *((void **) (((char *) D_80046DF4) + 4)) = arg0; } else if ((*((void **) (((char *) D_80046DF4) + 8))) == NULL) { *((void **) (((char *) D_80046DF4) + 8)) = arg0; } }
if (0) goto __repair_rows;
  func_800339C0(temp_v0);
}
