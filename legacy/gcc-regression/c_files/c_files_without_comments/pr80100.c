 
 
 

long int
foo (long int x)
{
  return 2L | ((x - 1L) >> (__SIZEOF_LONG__ * __CHAR_BIT__ - 1));
}

