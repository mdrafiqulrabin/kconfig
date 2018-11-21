 
 
 

int
main ()
{
  int i;
  asm volatile ("# %&": : "g" (i));	 
  return 0;
}

