 
 
 
 
 
 
 
 

static inline int foo (int fooparam)
{
  return fooparam;
}

static int bar (int barparam)
{
  return foo (barparam);
}

static inline double foo2 (double foo2param)
{
  return foo2param;
}

static double bar2 (double bar2param)
{
  return foo2 (bar2param);
}

int
main ()
{
  return bar (0) + bar2 (0.0);
}

