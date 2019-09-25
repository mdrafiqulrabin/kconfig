 

 

double g = 1.0;

 

int __attribute__ ((always_inline)) foo1 (int a)
{
  return 0;
}

int __attribute__ ((target ("soft-float"))) test1 (int a)
{
  return foo1 (a);
}

 

int __attribute__ ((always_inline)) foo2 (int a)
{
  g = 2.0;
  return 0;
}

int __attribute__ ((target ("soft-float"))) test2 (int a)
{
  return foo2 (a);
}

 

int __attribute__ ((always_inline)) foo3 (int a)  
{
  g = (double) a / 2.0;
  return 0;
}

int __attribute__ ((target ("soft-float"))) test3 (int a)
{
  return foo3 (a);
}

