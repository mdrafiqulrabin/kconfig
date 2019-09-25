 
 
 

long long test (long long a)
{
  asm ("" : "+x" (a));
  return a;
}

 
 

