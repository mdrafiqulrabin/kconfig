 
 
 
 
 

int
test00 (unsigned int a, int* b, int c, int* d, unsigned int e)
{
  int s = 0;
  int i;
  for (i = 0; i < c; ++i)
    s += d[i] + b[i] + (e << (i & 31));
  return s;  
}

int
test01 (unsigned int a, int* b, int c, int* d, unsigned int e)
{
  int s = 0;
  int i;
  for (i = 0; i < c; ++i)
    s += d[i] + b[i] + (e >> (i & 31));
  return s;  
}

int
test03 (unsigned int a, unsigned int b)
{
  return b << (a & 31);
}

unsigned int
test04 (unsigned int a, int b)
{
  return a >> (b & 31);
}

