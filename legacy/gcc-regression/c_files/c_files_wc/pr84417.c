 
 

void fn1()
{
  __attribute__((__vector_size__(sizeof(double)))) double x;
  double *a = (double *)&x;
  *a + *(a + 8446744073709551615LL);
}

