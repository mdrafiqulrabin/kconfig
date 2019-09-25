 
 

void
fn1 (int a[])
{
  __builtin_printf ("%zu\n", sizeof (*&a));  
}

void
fn2 (int *a[])
{
  __builtin_printf ("%zu\n", sizeof (*&a));  
}

