 
 

int t, v;

int
foo (void)
{
  while (1)
    {
      __transaction_atomic { v++; }
      if (t)
        return 0;
    }
}

