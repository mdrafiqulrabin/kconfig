 
 
 
 

#define main xop_test_main
#include "../../gcc.c-torture/execute/pr56866.c"
#undef main

#include "xop-check.h"

static void
xop_test (void)
{
  xop_test_main ();
}

