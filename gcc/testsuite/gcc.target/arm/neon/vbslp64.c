/* Test the `vbslp64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_crypto_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_crypto } */

#include "arm_neon.h"

void test_vbslp64 (void)
{
  poly64x1_t out_poly64x1_t;
  uint64x1_t arg0_uint64x1_t;
  poly64x1_t arg1_poly64x1_t;
  poly64x1_t arg2_poly64x1_t;

  out_poly64x1_t = vbsl_p64 (arg0_uint64x1_t, arg1_poly64x1_t, arg2_poly64x1_t);
}

/* { dg-final { scan-assembler "((vbsl)|(vbit)|(vbif))\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
