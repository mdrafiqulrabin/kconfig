 
 

extern void baz(int);

int y;
void foo(volatile int x)
{
  __transaction_atomic {
    x = 5;  
    x += y;
    y++;
  }
  baz(x);
}


volatile int i = 0;

void george()
{
  __transaction_atomic {
   if (i == 2)  
     i = 1;
  }
}

