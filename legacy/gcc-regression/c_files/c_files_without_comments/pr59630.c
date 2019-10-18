 
 

_Bool foo()
{
  _Bool (*f)(int) = __builtin_abs;  
  return f(0);
}

