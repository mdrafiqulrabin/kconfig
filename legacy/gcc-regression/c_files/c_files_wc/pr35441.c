 
 
 
 

void foo1(char **p, char **q)
{
  (p - q)();			 
}

void foo2(double x, double y)
{
  (x/y)();			 
}

void foo3(unsigned i, int j)
{
  (i << j | i >> (32 - j))();	 
  (i >> j | i << (32 - j))();	 
}

void foo4(char *p, char *q)
{
  (p < q ? p : q)();		 
  (p > q ? p : q)();		 
}

