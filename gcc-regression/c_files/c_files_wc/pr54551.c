 
 
 

void  __attribute__((__noinline__))
bar (void)
{
  asm volatile ("");
}

int __attribute__((__noinline__))
foo (int x, int y, int z)
{
  if (x != z)
    {
      int a = z + 1;
      bar ();  
      bar ();  
    }
  return y;
}

int
main ()
{
  foo (1, 2, 3);
  return 0;
}

