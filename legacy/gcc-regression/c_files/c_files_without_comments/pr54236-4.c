 
 
 

 

 
 
 

 
 
 

 
 
 

int
test_0 (int a, int b, int c)
{
   
  return c + (a != b);
}

int
test_1 (int a, int b, int c, int d)
{
   
  return (a != b) + c + d;
}

int
test_2 (int a, int b, int c, int d)
{
   
  return c + (a != b) + d;
}

int
test_3 (int a, int b, int c, int d)
{
   
  return c + d + (a != b);
}

int
test_4 (int a, int b, int c, int d)
{
   
  return (a != b) - c;
}

int
test_5 (int a, int b, int c, int d)
{
   
  return c - (a != b);
}

int
test_6 (int a, int b, int c, int d)
{
   
  return c - (a != b) + d;
}

