 
 
 

static void __attribute__((naked))
foo(void *from, void *to)
{
  asm volatile("dummy"::"r"(from), "r"(to));
}

unsigned int fie[2];

void fum(void *to)
{
  foo(fie, to);
}

 

