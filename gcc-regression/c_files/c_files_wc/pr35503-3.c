 
 

void f(int *x, int *__restrict y);

void foo(int a)
{
  f (&a, &a);  
}

