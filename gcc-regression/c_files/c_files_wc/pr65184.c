 
 

void
foo (int *a)
{
  if (a[0] != a[1] * 2333)
    __builtin_abort ();
}

void
bar (int *a)
{
  if (a[0] != a[1] * 2333)
    __builtin_abort ();
}

