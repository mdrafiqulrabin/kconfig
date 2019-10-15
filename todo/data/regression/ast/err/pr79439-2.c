 
 

 

int f (void);

void
g (void)
{
}

int
rec (int a)
{
  int ret = 0;
  if (a > 10 && f ())
    ret += rec (a - 1);
  g ();
  return a + ret;
}

int rec_alias (int) __attribute__ ((alias ("rec")));

 
 
 
 

