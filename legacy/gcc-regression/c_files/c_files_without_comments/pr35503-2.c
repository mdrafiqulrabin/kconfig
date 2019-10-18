 
 

void f(int *__restrict x, int *y, int *__restrict z, int *w);

void foo(int alpha, int beta)
{
  f (&alpha, &beta, &alpha, &alpha);  

 
}

