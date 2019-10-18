 
 

int george;
int ringo;

__attribute__((transaction_callable))
void foo()
{
  ringo=666;
  __transaction_atomic {
      george=999;
  }
}

 
 


