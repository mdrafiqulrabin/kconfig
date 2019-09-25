 
 

void
f (void)
{
   int x = 1;
   asm ("" : "" (x), "" (x));  
}

