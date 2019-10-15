 
 
 

_Bool
foo ()
{
  _Bool (*f) () = __builtin_abs;	 
  return f (0);
}

