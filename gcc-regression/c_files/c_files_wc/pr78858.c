 
 
 

void
foo (char **x, const char *y)
{
  *x = (char *) __builtin_malloc (__builtin_strlen (y) + 1);	 
  __builtin_strcpy (*x, y);
}

