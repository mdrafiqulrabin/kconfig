 

struct { int i; } a[8];

void f (void)
{
  int i;

  for (i = 1; i < 8; i++)
    __builtin_memcpy (&a[i], &a[0], sizeof(a[0]));    
}

