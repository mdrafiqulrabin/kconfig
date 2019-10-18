 
 
 
 

int __attribute__((noclone,noinline))
foo(int a, int b)
{
  int sum = 0;
  for (int i = 0; i < 60000; i++)
    sum += a + i * b;
  return sum;
}

int main(int argc, char **argv)
{
  if (foo (-30000, 2) != 1799940000)
    __builtin_abort ();
  return 0;
}

