 
 
 
 
 
 

void foo (short* __restrict sb, int* __restrict ia)
{
  int i;
  for (i = 0; i < 4000; i++)
    ia[i] = (int) sb[i];
}

 


