 
 
 

volatile long long int a;

int
main ()
{
  long long int u = -__LONG_LONG_MAX__ - 1;
  a = u > 0 ? u : -u;
  return 0;
}

 

