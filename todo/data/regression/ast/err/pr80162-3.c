 
 
 

typedef int V __attribute__ ((vector_size (32)));
register V u asm ("xmm7");

int *
foo (int i)
{
  return &u[i];		 
}

int *
bar (void)
{
  return &u[5];		 
}

