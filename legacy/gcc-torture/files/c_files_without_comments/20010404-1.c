 

#include <limits.h>

extern void bar (int);

void foo ()
{
  int a = INT_MIN;
  int b = -1;
  bar (a / b);
  bar (a % b);
}

