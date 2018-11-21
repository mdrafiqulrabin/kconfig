 
 

void
foo (int *p, int *q, int *r)
{
  __atomic_compare_exchange (p, q, r, 0, 0, -1);	 
   
   
}

