 

 
 
 

#include <assert.h>

struct s_t
{
  unsigned f1 : 8;
  unsigned f2 : 24;
};

__attribute__ ((noinline))
int bar ()
{
  return 0;
}

__attribute__ ((noinline))
void foo (struct s_t *ps, int c)
{
  int tmp;

   
  ps->f1 = c;
   
  __asm__ __volatile__ ("" : : : "memory",
			"r0","r1","r6","r7","r8","r9","r10","r11");
   
  tmp = bar ();
   
  ps->f2 = tmp;
   
}
 

int main (void)
{
  struct s_t s = { 0x01u, 0x020304u };

  foo (&s, 0);
  assert (s.f1 == 0&& s.f2 == 0);

  return 0;
}

