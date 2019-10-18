 
 
 
 
 

unsigned long a;
static int b;

void
foo (void)
{
  asm volatile ("" : "=r" (b));
}

void
bar (float f)
{
  if (f < b / 100.0)
    a = 1;
}

