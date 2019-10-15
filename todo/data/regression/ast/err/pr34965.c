 
 
 

int foo (int);

void
bar (int i, int j, double k)
{
  foo (i && j) ();	 
  foo (!i || !j) ();	 
  foo (!i == !j) ();	 
}

