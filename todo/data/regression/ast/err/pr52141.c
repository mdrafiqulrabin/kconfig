 
 

__attribute__((always_inline))
static void asmfunc(void)
{
  __asm__ ("");  
}

__attribute__((transaction_safe))
static void f(void)
{
  asmfunc();
}

int main()
{
  __transaction_atomic {
    f();
  }
  return 0;
}

 

