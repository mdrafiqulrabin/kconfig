 
 
 

 

int a, b, c;

void
foo (void)
{
  asm volatile ("":"+m" (a), "+m" (b), "+m" (c));
}

