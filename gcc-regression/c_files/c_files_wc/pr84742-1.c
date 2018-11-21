 
 
 

void 
foo ()
{
  char b = 1;
  asm volatile ("" : "+T,Y" (b));	 
}

