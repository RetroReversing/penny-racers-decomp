#ifndef DECOMP_MIPS_FCSR_EXCHANGE
#define DECOMP_MIPS_FCSR_EXCHANGE
#define __builtin_mips_exchange_fcsr(value) ({ unsigned int __decomp_fcsr_old; unsigned int __decomp_fcsr_new = (value); __asm__ volatile("cfc1 %0,$31\n\tctc1 %1,$31" : "=&r"(__decomp_fcsr_old) : "r"(__decomp_fcsr_new) : "memory"); __decomp_fcsr_old; })
#endif
#include "common.h"

/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

unsigned int func_8003EBD0(unsigned int value) { return __builtin_mips_exchange_fcsr(value); }
