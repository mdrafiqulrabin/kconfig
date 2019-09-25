 
 

int global;

void
foo(int local)
{
  __transaction_atomic {
    local++;
    if (++global == 10)
      __transaction_cancel;
  }
}

 
 
 

