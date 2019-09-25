 
 
 
_Complex float
foo (void)
{
  _Complex float x;
  __asm ("" : "=x" (x));  
  return x;
}

