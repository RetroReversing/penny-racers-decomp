s32 func_800339C0();
extern void *D_800DDE88;
typedef struct { void * field_0; int field_4; short field_8; } __repair_record_arg0;
void func_800284D8(void *arg0, s32 arg1, s16 arg2)
{
  s32 temp_v0;
  temp_v0 = func_800339C0(1);
 __repair_rows: { ((__repair_record_arg0*)arg0)->field_4 = arg1; }
if (0) goto __repair_rows;
  ((__repair_record_arg0*)arg0)->field_8 = arg2;
  ((__repair_record_arg0*)arg0)->field_0 = (void *) D_800DDE88;
  D_800DDE88 = arg0;
  func_800339C0(temp_v0, &D_800DDE88);
}
