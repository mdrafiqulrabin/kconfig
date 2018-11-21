 
 

void
foo (int *__restrict__ p, int *__restrict__ q, int count)
{
  int i;
  for (i = 0; i < count; i++)
    {
      *p++ = 0;
      *q++ = 0;
    }
}

