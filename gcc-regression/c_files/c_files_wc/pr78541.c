 
 
 

void foo (double a, double b)
{
  double *ptr;
    {
      double x = a + b;
      ptr = &x;
    }
 double square () { __builtin_printf ("", *ptr); }

 square ();
}

int main()
{
  foo (1.2f, 2.3f);
  return 0;
}

 
 
 

