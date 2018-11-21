 
 

void f()
{
  asm ("push %0" : : "r" ((unsigned long long) 456 >> 32));
}  

 

