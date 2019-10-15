 
 
 
 

#define CHECK_H "avx2-check.h"
#define TEST avx2_test

#include "../../gcc.dg/vect/pr59591-1.c"

#include CHECK_H

static void
TEST (void)
{
  bar ();
}

