 
 

int
foo (char *a, unsigned n)
{
    int i;
    a[0] = 0;
    for (i = 16; i < n; i++)
      a[i] = a[i-16];
}
 

