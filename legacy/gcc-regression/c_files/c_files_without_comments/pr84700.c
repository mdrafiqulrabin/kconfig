 
 
 

long long int
foo (long long int x)
{
  long long int a = x < 2;
  int b = a >= 0;

  return a + ((x == 0) ? a : b);
}

