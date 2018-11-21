 
 
 

void foo (int n)
{
  volatile char arr[64 * 1024];

  arr[n] = 1;
}

