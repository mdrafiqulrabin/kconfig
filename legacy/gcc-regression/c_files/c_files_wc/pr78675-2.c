 
 
 

#include "avx512f-check.h"

#define main do_main

#include "../../gcc.c-torture/execute/pr78675.c"

static void
avx512f_test (void)
{
  do_main ();
}

