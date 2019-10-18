 
 

extern void fn2 ();
long long a, b;

void fn1 ()
{
  long long c = a;
  a = b ^ a;
  fn2 ();
  a = c;
}

