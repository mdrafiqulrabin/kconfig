 
 

int foo (unsigned int x, unsigned int y)
{
  if (__builtin_ia32_bzhi_si (x, y))
    return 1;

  return 0;
}

 

