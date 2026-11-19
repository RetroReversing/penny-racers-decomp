f32 func_801F9AC0(f32);
extern f64 D_801FB2E8;
f32 func_801F9C8C(f32 arg0, f32 arg1)
{
 do { if (arg1 == 0.0f) { if (arg0 > 0.0f) { return 1.5707964f; } if (arg0 < 0.0f) { return 4.712389f; } goto block_6; } block_6: if (arg1 < 0.0f) { return func_801F9AC0(arg0 / arg1) + 3.1415927f; } if (arg1 > 0.0f) { if (arg0 >= 0.0f) { return func_801F9AC0(arg0 / arg1); } do { return (f32) (((f64) func_801F9AC0(arg0 / arg1)) + D_801FB2E8); } while (0); } } while (0);
  return 0.0f;
}
