 
 

extern char foo[];

void
test2 (void)
{
  int s;
  for (s = 0;; ++s)
    {
      if (foo[s] != s)
	__builtin_abort ();
      foo[s] = s;
    }
}

