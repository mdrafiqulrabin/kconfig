 
 

typedef __attribute__ ((const)) int (*bart) (void);

int foo (bart bar, int m)
{
  int i, j = 0;
  for (i = 0; i < m; i++)
    j += bar();
  return j;
}


