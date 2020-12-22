 
 

int a, b;

void __attribute((transaction_may_cancel_outer,noinline)) cancel1()
{
  __transaction_cancel [[outer]];
}

void
foo(void)
{
  __transaction_atomic [[outer]] {
    a = 2;
    __transaction_atomic {
      b = 2;
      cancel1();
    }
  }
}

 
 

