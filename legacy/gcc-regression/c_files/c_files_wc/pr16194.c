 
 
 

#undef SKIP
#define ASMDECL __asm (REG);
#define CLOBBER_LIST : REG
#define INP_CLOBBER_LIST : CLOBBER_LIST
#if defined (__alpha__)
# define REG "$1"
#elif defined (__CRIS__) || defined (__sh__)
# define REG "r10"
#elif defined (__hppa__)
# define REG "%r10"
#elif defined (__i386__)
# define REG "%eax"
#elif defined (__MMIX__)
# define REG "$8"
#elif defined (__powerpc__) || defined (__PPC__) || defined (__ppc__) \
        || defined (__POWERPC__) || defined (PPC) || defined (_IBMR2)
# define REG "6"
#elif defined (__x86_64__)
# define REG "rax"
#elif defined (__m68k__)
# define REG "%d0"
#else
 
# define SKIP 1
#endif

#ifndef SKIP

struct A
{
  int a;
};

struct B
{
  struct A b[3];
};

struct C
{
  struct B c;
};

void bug (void)
{
  register char* dst ASMDECL;
  __asm__ ("":"=g"(*dst): : REG);
}

 
void bug2 (void)
{
  register char* dst ASMDECL;
  __asm__ ("": :"g"(*dst) CLOBBER_LIST);
}

void
foo (void)
{
  register struct C *dst ASMDECL;
  __asm__ ("" : "=g"(dst->c.b[1].a) INP_CLOBBER_LIST);
}

#else

int main ()
{
  return 0;
}

#endif


