 
 

__attribute__((transaction_unsafe))
void illegal();

static int a = 0;
void func()
{
  __transaction_relaxed {
    if( a == 0)
      illegal();
  }
}

