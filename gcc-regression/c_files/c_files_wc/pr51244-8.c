 
 
 
 

int test_01_00 (int*, void*);
int
test_01 (int* m, void* v)
{
  unsigned long n = (unsigned long)v - 1;

  if (!n)
    return 50;
  
  if (1 & (1 << n))	 
    return 60;		
  else			 
    return -8;
}

