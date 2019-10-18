 
 

typedef struct {} S;

void *foo()
{
  S a[64], *p[64];
  int i;

  for (i = 0; i < 64; i++)
    p[i] = &a[i];
  return p[0];
}

