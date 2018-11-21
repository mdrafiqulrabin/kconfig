 
 

unsigned int
foo (unsigned int a, unsigned int b)
{
  a += b;
  if (a < b) a++;
  return a;
}

#ifdef __x86_64__
unsigned long long
bar (unsigned long long a, unsigned long long b)
{
  a += b;
  if (a < b) a++;
  return a;
}

unsigned long long
baz (unsigned int a, unsigned int b)
{
  a += b;
  if (a < b) a++;
  return a;
}
#endif

 
 
 

