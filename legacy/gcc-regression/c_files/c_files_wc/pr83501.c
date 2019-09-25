 
 

char a[4];

void f (void)
{
  __builtin_strcpy (a, "abc");

  if (__builtin_strlen (a) != 3)
    __builtin_abort ();
}

 

