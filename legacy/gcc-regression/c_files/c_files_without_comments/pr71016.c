 
 
 
 

long int
foo (long int i)
{
  return i == 0 ? 17 : __builtin_clzl (i);
}

