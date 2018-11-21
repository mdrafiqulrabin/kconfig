 
 
 
 
 
 
 
 

long
bug (long cond, long v0, long v1, long v2)
{
  switch (cond)
    {
      case 0:
	return v0;
      case 1:
	return v1;
      case 2:
	return v2;
      default:
	__builtin_unreachable ();
    }
  __builtin_abort ();
}

