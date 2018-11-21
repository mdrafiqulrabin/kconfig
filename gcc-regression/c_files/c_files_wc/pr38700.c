 
 
 
 

int
foo ()
{
  __UINTPTR_TYPE__ s = __builtin_expect ((__UINTPTR_TYPE__)&&L, 0);
L:
  return 0;
}

