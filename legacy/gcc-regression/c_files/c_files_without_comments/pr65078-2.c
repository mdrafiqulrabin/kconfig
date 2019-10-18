 
 
 
 
 

typedef unsigned char V __attribute__((vector_size (32)));
typedef unsigned long long W __attribute__((vector_size (32)));
typedef unsigned int T __attribute__((vector_size (32)));

void
f1 (unsigned long long *x, V y)
{
  *x = ((W)y)[0];
}

#if defined(__x86_64__) || defined(ALL)
unsigned long long
f2 (V y)
{
  return ((W)y)[0];
}
#endif

void
f3 (unsigned int *x, V y)
{
  *x = ((T)y)[0];
}

unsigned int
f4 (V y)
{
  return ((T)y)[0];
}

void
f5 (unsigned long long *x, W y)
{
  *x = ((W)y)[0];
}

#if defined(__x86_64__) || defined(ALL)
unsigned long long
f6 (W y)
{
  return ((W)y)[0];
}
#endif

void
f7 (unsigned int *x, T y)
{
  *x = ((T)y)[0];
}

unsigned int
f8 (T y)
{
  return ((T)y)[0];
}

