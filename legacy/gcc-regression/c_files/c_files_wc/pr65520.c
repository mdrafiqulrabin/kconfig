 
 
 

int foo (void *);

void
bar (void)
{
  unsigned s = 128;
  while (1)
    {
      unsigned b[s];
      if (foo (b))
	break;
      s *= 2;
    }
}

 

