 
 
 

register int r asm("esi");

void foo(void)
{
  if (r)
    __asm__("sar\t%0" : "+r" (r));
  __asm__("sar\t%0" : "+r" (r));
}

