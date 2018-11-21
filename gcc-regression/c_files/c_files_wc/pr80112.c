 
 
 
 

void **a;

void
foo (int c)
{
  void *d[] = {&&e, &&f};
  a = d;
  switch (c)
    {
    f:
      c = 9;
       
    case 9:
      goto *a++;
    e:;
    }
}

