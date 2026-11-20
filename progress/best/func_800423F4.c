/* Partial candidate from function #25769805776 in project #6; rechecked locally. */
u64 func_800423F4(u32 arg0, u32 arg1, u32 arg2, u32 arg3)
{
  union _PermuterAnon1
  {
    u64 whole;
    struct 
    {
      u32 hi;
      int lo;
    } word;
  } product;
  u32 hi;
  u32 rem;
  union _PermuterAnon1 result;
  u32 qlo;
  
u32 __repair_phase_v0;
u32 __repair_phase___repair_phase_v0;
  register unsigned long v1;
  
  u32 prodlo;
  u32 prodhi;
u32 __repair_phase_prodhi;
  u32 borrow;
 hi = arg0 / arg3; rem = arg0 % arg3; qlo = 0;  for (;;) {
     if (rem) { v1 = arg1; prodhi = rem; __repair_phase_v0 = arg3; do { v1 = (v1 >> 1) | (prodhi << 31); prodhi >>= 1; __repair_phase_v0 >>= 1; } while (prodhi); ++__repair_phase_v0; v1 /= __repair_phase_v0;/*__repair_loop_weight*/do {qlo += v1;} while (0); hi += qlo < v1; product.whole = ((u64) v1) * arg3; __repair_phase_v0 = product.word.lo; __repair_phase_prodhi = product.word.hi; borrow = arg1 < __repair_phase_v0; arg1 -= __repair_phase_v0; prodlo = (unsigned short)__repair_phase_prodhi;
    rem = (rem - borrow) - prodlo; continue; }
     break;
 }
 v1 = arg1 / arg3; v1 += qlo; hi += v1 < qlo;
  result.word.lo = v1;
  result.word.hi = hi;
  return result.whole;
}
