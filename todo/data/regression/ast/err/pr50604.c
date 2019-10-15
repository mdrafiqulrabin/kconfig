 
 
 

#include "strlenopt.h"

typedef char T;
extern const T s[];

void
foo (T *x)
{
  char *r = malloc (strlen (x));
  strcpy (r, s);
  strcat (r, x);
  strcat (r, "/");
}

const T s[] = "abcdefghijklmnopq";

