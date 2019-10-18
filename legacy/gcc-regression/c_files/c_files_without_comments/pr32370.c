 
 
 
 
 

#if (defined __i386__ || defined __x86_64__) && ! defined _WIN64
# define C "=S"
# define TYPE unsigned long
#elif defined __ia64__ || defined _WIN64
# define C "=a"
# define TYPE unsigned long long
#endif

#ifdef _WIN64
__extension__
#endif
unsigned int
foo (TYPE port)
{
  unsigned int v;
  __asm__ __volatile__ ("" : C (v) : "Nd" (port));	 
  return v;
}

void
bar (void)
{
  foo (0);
}

