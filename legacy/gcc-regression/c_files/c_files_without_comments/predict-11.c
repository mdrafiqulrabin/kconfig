 
 
int *a,n,m;
void test(void);
void
t(void)
{
  int i,j;
  for (i=0;i<n;i++)
    if (a[i])
      for (j=0;j<m;j++)
	test();
}
 

