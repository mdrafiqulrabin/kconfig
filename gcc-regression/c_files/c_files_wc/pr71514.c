 
 
 

void
foo ()
{
}

int a, b;

void
fn1 (void)
{
  __atomic_exchange (&a, &foo, &b, __ATOMIC_RELAXED);  
}

void
fn2 (int n)
{
  int arr[n];
  __atomic_exchange (&a, &arr, &b, __ATOMIC_RELAXED);  
}

