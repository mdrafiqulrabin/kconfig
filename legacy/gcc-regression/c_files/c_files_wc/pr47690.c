 
 

int george;

void q1()
{
  __transaction_atomic {
      george=999;
  }
  q1();
}

 

