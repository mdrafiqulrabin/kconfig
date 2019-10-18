 
 
 
 

int
testfunc_00 (int a, int b, int c, int d)
{
  return (a != b || a != d) ? b : c;
}

int
testfunc_01 (int a, int b, int c, int d)
{
  return (a == b || a == d) ? b : c;
}

int
testfunc_02 (int a, int b, int c, int d)
{
  return (a == b && a == d) ? b : c;
}

int
testfunc_03 (int a, int b, int c, int d)
{
  return (a != b && a != d) ? b : c;
}


