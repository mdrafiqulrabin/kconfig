 
 

register long *B asm ("ebp");

long y = 20;

void
bar (void)  
{
  B = &y;
}  

