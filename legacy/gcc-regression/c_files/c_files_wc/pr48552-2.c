 
 
 

struct S;

void
f1 (void *x)
{
  __asm ("" : : "r" (*x));	 
}				 

void
f2 (void *x)
{
  __asm ("" : "=r" (*x));	 
}				 
				 
void
f3 (void *x)
{
  __asm ("" : : "m" (*x));	 
}

void
f4 (void *x)
{
  __asm ("" : "=m" (*x));	 
}

void
f5 (void *x)
{
  __asm ("" : : "g" (*x));	 
}				 

void
f6 (void *x)
{
  __asm ("" : "=g" (*x));	 
}				 
				 
void
f7 (struct S *x)
{
  __asm ("" : : "r" (*x));	 
}

void
f8 (struct S *x)
{
  __asm ("" : "=r" (*x));	 
}

