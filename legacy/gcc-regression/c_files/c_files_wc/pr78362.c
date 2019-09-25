 

long a;

void
foo (void)
{
  for (;; a--)
    if ((int) a)
      break;
}

