 
 
 

extern void (*bar) (void);
void
foo (int n)
{
  int i;
  for (i = 0; i < n; i++)
    {
      if (!bar)
	continue;
      (*bar) ();
    }
}

