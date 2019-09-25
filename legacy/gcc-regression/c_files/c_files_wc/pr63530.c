 

 
 
 
 

#include "tree-vect.h"

#include <stdlib.h>

typedef struct {
  unsigned char map[256];
  int i;
} A, *AP;

AP __attribute__ ((noinline))
foo (int n)
{
  AP b = (AP)calloc (1, sizeof (A));
  int i;
  for (i = n; i < 256; i++)
    b->map[i] = i;
  return b;
}

int
main()
{
  AP p = foo(3);
  check_vect ();
  return p->map[30] - p->map[20] - p->map[10];
}

