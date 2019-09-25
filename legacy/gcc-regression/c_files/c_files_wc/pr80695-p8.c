 
 
 
 

 

long a[10] __attribute__((aligned(16)));

void foo (long i, long j, long k, long l)
{
  a[6] = i;
  a[7] = j;
  a[8] = k;
  a[9] = l;
}

 

