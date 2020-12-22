 
 
 
extern void abort (void);

int s (int i)
{
  __label__ l1;
  int f (int i)
  {
    if (i == 2)
      goto l1;
    return 0;
  }
  return f (i);
 l1:;
  return 1;
}

int main ()
{
  if (s (2) != 1)
    abort ();

  return 0;
}

