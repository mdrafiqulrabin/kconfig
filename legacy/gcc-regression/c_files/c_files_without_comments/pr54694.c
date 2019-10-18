 
 

register void *hfp __asm__("%ebp");	 

extern void g(void *);

void f(int x)			 
{
  g(__builtin_alloca(x));
}

