 
 

int foo()
{
  int a[10];
  for(int i = 0; i < 10; ++i)
    a[i] = i*i;
  int res = 0;
  for(int i = 0; i < 10; ++i)
    res += a[i];
  return res;
}

 
 

