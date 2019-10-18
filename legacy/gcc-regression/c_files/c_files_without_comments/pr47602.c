 
 
 

 

int a, b, c;

void
foo (void)
{
  asm volatile ("movl $0,%%ebx" : : : "ebx");
}

