 
 

int foo (unsigned int x, unsigned int y)
{
  if (__builtin_ia32_bextr_u32 (x, y))
    return 1;

  return 0;
}

 

