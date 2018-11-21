 
 
 

void 
foo ()
{
  char b = 1;
  asm volatile ("" : "+gT,m" (b));	 
}

