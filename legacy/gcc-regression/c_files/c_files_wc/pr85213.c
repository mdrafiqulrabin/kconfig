 
 
 

int
foo (int x)
{
  return (__builtin_expect (({ x != 0; }) ? 0 : 1, 3) == 0) * -1 << 0;
}

