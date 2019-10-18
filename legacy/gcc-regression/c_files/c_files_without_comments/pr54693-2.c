 
 
 

int v;

__attribute__((noinline, noclone)) void
bar (int i)
{
  v = i;
  asm volatile ("" : : "r" (i) : "memory");
}

__attribute__((noinline, noclone)) void
foo (int x, int y, int z)
{
  int i = 0;
  while (x > 3 && y > 3 && z > 3)
    {		 
		 
      bar (i);	 
		 
      i++, x--, y -= 2, z -= 3;
    }
}

int
main ()
{
  v = -1;
  foo (10, 20, 30);
  return 0;
}

