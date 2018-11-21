 
 
 

static char var;

void
foo (void)
{
  asm volatile ("" :: "i" (&var + 1));
}

typedef int T[];
typedef T *P;

int var2;

void
bar (void)
{
  asm volatile ("" :: "i"(&(*(P)&var2)[1]));
}

