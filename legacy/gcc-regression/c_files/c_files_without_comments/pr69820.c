 
 
 

int a[100], b[100];
short c[100];

void
foo ()
{
  int i;
  for (i = 0; i < 100; ++i)
    b[i] = a[i] * (_Bool) c[i];
}

