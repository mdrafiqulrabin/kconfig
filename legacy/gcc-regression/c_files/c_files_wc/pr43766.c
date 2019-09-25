 
 
 

void p (int *a, int i)
{
  __builtin_prefetch (&a[i]);
}

 

