 
 

void foo (int *a, int len)
{
  unsigned short i;

  for (i = 1; i < (len - 1); i++)
    a[i] = a[i+1];
}

 

